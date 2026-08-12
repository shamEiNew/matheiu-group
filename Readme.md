# Unpacking "M23 is a Galois group over Q" — project roadmap

Paper: Huang, Jackson, Lee, Poonen, Pries, Zhang (Aug 2026), [arxiv/M23.tex](arxiv/M23.tex).
Authors' code (Magma): https://github.com/shaowuz/m23isgalois

The paper closes a 40-year-old gap: 25 of the 26 sporadic simple groups were realized
as Galois groups over Q during 1984–1989; M23 was the last holdout. This repo unpacks
every step, re-verifies everything with **open-source** tools, and explains the result
at four levels of background (from "no math needed" to "expert").

## Why open-source re-verification matters

The paper's final certification uses **Magma** (proprietary). The single most valuable
technical contribution a crowd effort can make is an independent verification chain
using only free software (GAP, PARI/GP, SageMath, Python, custom Rust). Nobody should
have to trust a license they can't afford.

## The paper's claims, mapped to verification tools

| # | Claim (paper location) | Status | Tool |
|---|---|---|---|
| 1 | (g1,g2,g3) multiply to 1, have cycle types 2^8 1^7 / 23 / 23, generate a group of order 10,200,960 | ✅ done | Python/sympy — [code/python/check_triple.py](code/python/check_triple.py) |
| 2 | That group **is** M23 (4-transitive, simple, matches ATLAS) | ✅ done | GAP — [code/gap/verify_m23.g](code/gap/verify_m23.g): order, simple, 4-transitive, 17 classes, TransitiveIdentification = 5 |
| 3 | M23 has 17 conjugacy classes; G_Q fixes 2A and swaps 23A↔23B via Q(√-23) | ✅ classes done | GAP (23A/23B verified mutually inverse; Galois-action writeup pending) |
| 4 | No G_Q-stable class triple is rigid (\|Ni\| ≠ 1 always) — the classical method provably fails | todo | GAP: structure constants from character table, inclusion–exclusion over subgroups |
| 5 | For (2A, 23A, 23B): \|Ni\| = 7 — exactly seven covers | ✅ done | GAP — Frobenius formula gives \|Σ̄\|/\|G\| = 7; generation forced (only 23:11 has order div. by 23, and it is involution-free) |
| 6 | Genus of X is 4 (Riemann–Hurwitz) | todo | hand + Sage double-check |
| 7 | Numerical Belyi map: power series of the four 1-forms, canonical model P=Q=0 in P^3 | hard | replicate Hejhal/KMSV algorithm in Python/Julia (authors used Magma BelyiDB) |
| 8 | Coefficient recognition: P, Q have coefficients in Q(√-23) (the "miracle") | todo | PSLQ/LLL via mpmath or fpylll, starting from published P, Q |
| 9 | Riemann–Roch constructions: u with div(u)=23b'−23c', y ∈ L(5b'−c'), v = y·y' | todo | SageMath / Singular function-field machinery |
| 10 | F(T,V) ∈ Z[T,V], deg_T=8, deg_V=23; disc factors as c·t^8(t^2+23)^88·h84^2 | todo | PARI/GP or Sage (pull F from authors' repo) |
| 11 | G_geom = M23 via reduction mod 31 + tame specialization | todo | GAP+PARI replication of the Magma certificate; the SGA1 specialization step is the key *mathematical* input to explain |
| 12 | The two explicit degree-23 polynomials have Galois group M23 over Q, ramified only in {2,3,23} / {2,7,23} | ◐ partial | PARI — [code/pari/dedekind.gp](code/pari/dedekind.gp): irreducible, disc square (⇒ ⊆ A23), nonsolvable, 299/299 prime types are M23 types ⇒ Gal ∈ {M23, A23}. Remaining: Steiner resolvent for M23 vs A23 (see below) |

### Claim 12 is a genuine open-tooling gap

PARI's `polgalois` stops at degree 11. A rigorous open certification that Gal(f) = M23:

- **Lower bound** (contains M23): f irreducible ⇒ transitive of prime degree 23 ⇒
  contains a 23-cycle; factorization patterns mod p (Dedekind) rule out the solvable
  transitive groups of degree 23; only M23, A23, S23 remain.
- **Upper bound** (inside M23): disc(f) square ⇒ inside A23. Separating M23 from A23
  is the hard part — cycle types cannot do it (M23's types are a subset of A23's).
  Route: resolvent for the Steiner system S(4,7,23) — exhibit a rational root of the
  degree-253 "heptad-stabilizer" resolvent, computed with rigorous precision bounds
  (LLL / p-adic lifting). Ideal Rust project (exact arithmetic + speed).

## Explanation ladder (the "explain it to mom" axis)

1. **Level 0 — no math**: symmetry as shuffling; the 26 "sporadic snowflakes";
   a 40-year treasure hunt with one last missing piece; what it means that a plain
   whole-number equation has exactly this rare symmetry. One picture: 7 dots, Galois
   conjugation swirls them around, and *one dot doesn't move* — the miracle.
2. **Level 1 — curious reader / journalist**: what a Galois group measures, why
   "over Q" is the whole difficulty, why computers + a miracle + classical theory
   each carried a third of the load. FAQ format.
3. **Level 2 — undergrad**: Jupyter Book chapters — permutation groups, M23 and the
   Steiner system, covers of P^1 and monodromy, Riemann existence, rigidity, why
   rigidity fails here, Belyi maps and dessins d'enfants, descent and fields of moduli.
   Every chapter ends in runnable code.
4. **Level 3 — expert**: full reworked proof with no "we omit the proof" left standing
   (e.g. the h84^2 singularity claim the authors explicitly skip).

## Visuals / video

- Hyperbolic (2,23,23) triangle tiling of the disk (the paper's a, b, c construction) — Python/matplotlib or p5.js.
- Dessin d'enfant of the degree-23 Belyi cover.
- The "seven covers, one fixed point" Galois-action animation.
- Manim video: "The last sporadic group" — 10 min, Level 0→1.

## Formalization (honest scope)

Full formalization of the theorem is out of reach short-term (numerical Belyi steps
don't need formalizing anyway — only the algebraic certificate does).

**Done:** `formal/M23Formal` — dependency-free Lean 4 package, builds green: the triple
is a set of genuine permutations, g₁∘g₂∘g₃ = id, orders 2/23/23, cycle-type witnesses —
all kernel-checked by `decide`. `formal/MathlibSkeleton/M23.lean` states the deeper
targets (M23 ≤ A23, |M23| = 10200960, 4-transitivity, simplicity) with proof plans.

Realistic Lean 4 milestones, in order:
1. M23 as a permutation group: generators, order, simplicity (Mathlib has none of the Mathieu groups — valuable standalone contribution). Key infrastructure: a formalized stabilizer-chain (Schreier–Sims) certificate checker.
2. Dedekind's theorem (factorization mod p ⇒ cycle type in Galois group) — partially in Mathlib.
3. The classification of transitive groups of prime degree 23 (7 groups).
4. The resolvent certificate for Gal(f) ⊆ M23, verified by exact arithmetic.

## Repo layout (proposed)

```
arxiv/          the paper source
code/python/    pure-Python checks (no CAS needed) — start here
code/gap/       character table, Nielsen class counts, rigidity failure
code/pari/      polynomial disc, ramification, Dedekind cycle types
code/sage/      Riemann-Roch, function fields, genus computations
code/rust/      resolvent computation, brute-force Nielsen enumeration
code/singular/  curve singularities of the plane model F(T,V)=0
book/           Jupyter Book (the explanation ladder)
media/          figures, Manim scenes
formal/         Lean 4 experiments
```

## The game

`game/index.html` — **The Last Card**: a 23-card, five-act interactive journey from
"what is a shuffle" to the miracle fixed point, with quizzes, a shuffle lab, and the
seven-covers interactive. Published (private until shared):
https://claude.ai/code/artifact/bdf7cfb8-4179-4a12-a695-2ade667cb54b

## Environment note

Installed 2026-08-12, all inside WSL Ubuntu 24.04 (winget is blocked on this machine):
GAP 4.12.1 (+ character tables, transgrp, atlasrep), PARI/GP 2.15.4, Singular 4.3.2,
Lean 4.33.0 via elan (`~/.elan`), Miniforge + SageMath conda env (`~/miniforge3/envs/sage`),
Mathlib scaffold at `~/m23mathlib`. Windows side: Python 3.14 + sympy.
Still to install: Rust toolchain, `manim`, `jupyter-book`.
