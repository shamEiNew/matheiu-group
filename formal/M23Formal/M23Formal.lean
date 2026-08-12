/-!
# The explicit M₂₃ triple, formally verified (dependency-free core Lean 4)

This file machine-checks — with kernel-level `decide` proofs and **no external
libraries** — the combinatorial facts about the explicit permutation triple
(g₁, g₂, g₃) from Section 3 of

  Huang, Jackson, Lee, Poonen, Pries, Zhang,
  *The Mathieu group M₂₃ is a Galois group over ℚ* (2026).

Verified here:
  * each gᵢ is a genuine permutation of {0, …, 22};
  * g₁ ∘ g₂ ∘ g₃ = id  (the paper's left-action identity g₁g₂g₃ = 1);
  * g₁ has order 2, and g₂, g₃ have order exactly 23;
  * g₁ has exactly 7 fixed points (cycle type 2⁸1⁷, class 2A),
    and g₂, g₃ have none (23-cycles, classes 23A/23B).

What is *not* here (yet): |⟨g₁,g₂⟩| = 10 200 960 and simplicity. Those need a
formalized stabilizer-chain (Schreier–Sims) certificate or Mathlib group theory
— see `formal/MathlibSkeleton/M23.lean` for the statements and proof plan.

The image lists were generated from the paper's cycle notation by
`code/python/check_triple.py`'s conventions and are independently sanity-checked
there with sympy.
-/

namespace M23

/-- A permutation of `{0, …, 22}` given by its list of images:
`apply p i` is where `i` goes (left action). -/
abbrev Perm23 := List Nat

def apply (p : Perm23) (i : Nat) : Nat := p.getD i i

/-- Function composition of image lists: `apply (comp p q) i = apply p (apply q i)`. -/
def comp (p q : Perm23) : Perm23 := (List.range 23).map fun i => apply p (apply q i)

def idPerm : Perm23 := List.range 23

def pow (p : Perm23) : Nat → Perm23
  | 0 => idPerm
  | n + 1 => comp p (pow p n)

/-- Number of fixed points. -/
def fixedPoints (p : Perm23) : Nat :=
  ((List.range 23).filter fun i => apply p i == i).length

/-- `(1,11)(2,23)(3,8)(4,16)(5,21)(7,20)(15,19)(18,22)` in 0-based image-list form. -/
def g1 : Perm23 :=
  [10, 22, 7, 15, 20, 5, 19, 2, 8, 9, 0, 11, 12, 13, 18, 3, 16, 21, 14, 6, 4, 17, 1]

/-- `(1,2,11,10,16,9,6,3,23,19,20,14,21,17,4,8,22,5,18,15,13,7,12)`, 0-based. -/
def g2 : Perm23 :=
  [1, 10, 22, 7, 17, 2, 11, 21, 5, 15, 9, 0, 6, 20, 12, 8, 3, 14, 19, 13, 16, 4, 18]

/-- `(1,2,3,4,10,11,12,7,19,18,8,6,9,16,17,21,22,5,14,20,13,15,23)`, 0-based. -/
def g3 : Perm23 :=
  [1, 2, 3, 9, 13, 8, 18, 5, 15, 10, 11, 6, 14, 19, 22, 16, 20, 7, 17, 12, 21, 4, 0]

/-- Each `gᵢ` really is a permutation: 23 images covering every point. -/
theorem g_are_permutations :
    (g1.length = 23 ∧ ∀ i < 23, i ∈ g1) ∧
    (g2.length = 23 ∧ ∀ i < 23, i ∈ g2) ∧
    (g3.length = 23 ∧ ∀ i < 23, i ∈ g3) := by decide

/-- The paper's identity `g₁ g₂ g₃ = 1` (left action). -/
theorem triple_product_is_identity : comp g1 (comp g2 g3) = idPerm := by decide

/-- `g₁` is an involution. -/
theorem g1_order_two : comp g1 g1 = idPerm ∧ g1 ≠ idPerm := by decide

/-- `g₂²³ = 1` and `g₂ ≠ 1`; since 23 is prime, `g₂` has order exactly 23. -/
theorem g2_order_23 : pow g2 23 = idPerm ∧ g2 ≠ idPerm := by decide

/-- Likewise `g₃` has order exactly 23. -/
theorem g3_order_23 : pow g3 23 = idPerm ∧ g3 ≠ idPerm := by decide

/-- Cycle-type witnesses: `g₁` fixes exactly 7 points (type 2⁸1⁷, class 2A);
`g₂` and `g₃` fix none. An order-23 element of S₂₃ with no fixed point is a
23-cycle, so `g₂ ∈ 23A ∪ 23B` and `g₃ ∈ 23A ∪ 23B`. -/
theorem cycle_type_witnesses :
    fixedPoints g1 = 7 ∧ fixedPoints g2 = 0 ∧ fixedPoints g3 = 0 := by decide

end M23
