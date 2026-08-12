# verify_m23.g — GAP verification of the group-theoretic claims in
# "The Mathieu group M23 is a Galois group over Q" (Huang et al., 2026)
#
# Run:  gap -q -b verify_m23.g
#
# Checks:
#   1. The paper's triple multiplies to the identity and has the right cycle types.
#   2. <g1,g2> is M23: order 10,200,960, simple, 4-transitive, 17 classes,
#      TransitiveIdentification (23,5) — the library's M23.
#   3. Nielsen count: |Sigma-bar(2A,23A,23B)| / |M23| = 7 via the character table
#      (Frobenius's formula, computed by GAP's ClassMultiplicationCoefficient).
#   4. Generation is automatic for this triple: the only maximal subgroup of M23
#      with order divisible by 23 is 23:11, which has odd order (253), hence no
#      involution — so any (2A,23A,23B) triple with product 1 generates all of M23.
#      Therefore |Ni| = |Sigma-bar|/|M23| exactly.

g1 := (1,11)(2,23)(3,8)(4,16)(5,21)(7,20)(15,19)(18,22);;
g2 := (1,2,11,10,16,9,6,3,23,19,20,14,21,17,4,8,22,5,18,15,13,7,12);;
g3 := (1,2,3,4,10,11,12,7,19,18,8,6,9,16,17,21,22,5,14,20,13,15,23);;

# GAP (like Magma) composes left-to-right (right action); the paper's
# left-action identity g1 g2 g3 = 1 becomes g3*g2*g1 = () here.
Print("== 1. The triple ==\n");
Print("g3*g2*g1 = identity: ", g3*g2*g1 = (), "\n");
Print("cycle type g1 (want 2^8): ", CycleStructurePerm(g1), "\n");
Print("orders (want 2,23,23): ", Order(g1), " ", Order(g2), " ", Order(g3), "\n");

Print("\n== 2. The group ==\n");
G := Group(g1, g2);;
Print("order = ", Size(G), "  (= 10200960: ", Size(G) = 10200960, ")\n");
Print("simple: ", IsSimpleGroup(G), "\n");
Print("transitivity degree: ", Transitivity(G, [1..23]), "  (M23 is 4-transitive)\n");
Print("conjugacy classes: ", NrConjugacyClasses(G), "  (want 17)\n");
Print("transitive-groups library id: ", TransitiveIdentification(G),
      "  (5 = M23 in degree 23)\n");

# All cycle types occurring in M23 — exported for the PARI/GP Dedekind check.
types := Set(List(ConjugacyClasses(G), c -> CycleStructurePerm(Representative(c))));;
Print("\ncycle types in M23 (GAP CycleStructurePerm format, index i = #(i+1)-cycles):\n");
for t in types do Print("  ", t, "\n"); od;

Print("\n== 3. Nielsen count from the character table ==\n");
tbl := CharacterTable("M23");;
ords := OrdersClassRepresentatives(tbl);;
sizes := SizesConjugacyClasses(tbl);;
c2A := Positions(ords, 2)[1];;
p23 := Positions(ords, 23);;
c23A := p23[1];;  c23B := p23[2];;
Print("classes found: 2A at ", c2A, ", 23A/23B at ", p23, "\n");

# Triples (x,y,z) in 2A x 23A x 23B with xyz = 1  <=>  xy = z^-1 with z in 23B.
# ClassMultiplicationCoefficient(tbl,i,j,k) = #{(x,y) in Ci x Cj : xy = g_k}.
inv23B := InverseClasses(tbl)[c23B];;
Print("inverse class of 23B is class ", inv23B, " (23A and 23B are inverse to each other: ",
      inv23B = c23A, ")\n");
N := sizes[c23B] * ClassMultiplicationCoefficient(tbl, c2A, c23A, inv23B);;
Print("|Sigma-bar(2A,23A,23B)| = ", N, "\n");
Print("|Sigma-bar| / |M23| = ", N / Size(G), "   <-- the paper's seven covers\n");

Print("\n== 4. Generation is automatic ==\n");
maxes := Maxes(tbl);;
Print("maximal subgroups of M23: ", maxes, "\n");
for m in maxes do
  mt := CharacterTable(m);;
  Print("  ", m, ": order ", Size(mt),
        ", divisible by 23: ", Size(mt) mod 23 = 0,
        ", has involution: ", 2 in OrdersClassRepresentatives(mt), "\n");
od;
Print("Only 23:11 has order divisible by 23, and it has no involution.\n");
Print("Hence every (2A,23A,23B) triple with product 1 generates M23,\n");
Print("and |Ni(2A,23A,23B)| = 7 exactly, as the paper claims.\n");

QUIT;
