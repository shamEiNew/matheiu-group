"""Verify the explicit (g1, g2, g3) triple from Section 3 of
"The Mathieu group M23 is a Galois group over Q"
(Huang, Jackson, Lee, Poonen, Pries, Zhang, 2026).

Claims checked, using nothing but sympy:
  * g1*g2*g3 = 1 (as a LEFT action; the paper notes Magma uses a right action)
  * cycle types: g1 is 2^8 1^7 (class 2A), g2 and g3 are 23-cycles (23A/23B)
  * <g1, g2> has order 10,200,960 = 2^7 * 3^2 * 5 * 7 * 11 * 23  (= |M23|)

Run:  python -m pip install sympy && python check_triple.py
"""
from sympy import factorint
from sympy.combinatorics import Permutation, PermutationGroup

M23_ORDER = 10_200_960


def perm(cycles):
    """Paper's cycles use points 1..23; sympy is 0-based."""
    return Permutation([[p - 1 for p in c] for c in cycles], size=23)


g1 = perm([(1, 11), (2, 23), (3, 8), (4, 16), (5, 21), (7, 20), (15, 19), (18, 22)])
g2 = perm([(1, 2, 11, 10, 16, 9, 6, 3, 23, 19, 20, 14, 21, 17, 4, 8, 22, 5, 18, 15, 13, 7, 12)])
g3 = perm([(1, 2, 3, 4, 10, 11, 12, 7, 19, 18, 8, 6, 9, 16, 17, 21, 22, 5, 14, 20, 13, 15, 23)])

# sympy composes left-to-right (right action): (a*b)(x) = b(a(x)).
# The paper's "g1 g2 g3 = 1" is a left-action product, i.e. g3*g2*g1 here.
assert (g3 * g2 * g1).is_identity, "product of the triple is not the identity"
assert g1.cycle_structure == {2: 8, 1: 7}, "g1 is not in class 2A"
assert g2.cycle_structure == {23: 1}, "g2 is not a 23-cycle"
assert g3.cycle_structure == {23: 1}, "g3 is not a 23-cycle"

G = PermutationGroup([g1, g2])
order = G.order()
assert order == M23_ORDER, f"wrong order: {order}"
assert G.is_transitive(), "group is not transitive"

print("All checks pass.")
print(f"  g3*g2*g1 = identity (paper's left-action convention)")
print(f"  cycle types: g1 = 2^8 1^7, g2 = g3 = 23-cycle")
print(f"  |<g1,g2>| = {order:,} = {factorint(order)}  (= |M23|)")
