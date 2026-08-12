\\ dedekind.gp — PARI/GP arithmetic checks on the explicit polynomial of
\\ Example 1.3 in "The Mathieu group M23 is a Galois group over Q".
\\
\\ Run:  gp -q dedekind.gp
\\
\\ Rigorous chain established here (open-source, no Magma):
\\   f irreducible                =>  Gal(f) transitive of prime degree 23
\\                                =>  23 | #Gal(f), so Gal(f) contains a 23-cycle
\\   a factorization type mod p that no solvable transitive group of degree 23
\\   contains                     =>  Gal(f) is not solvable
\\   (Burnside: transitive of prime degree => solvable or 2-transitive;
\\    classification of 2-transitive degree-23 groups: M23, A23, S23)
\\   disc(f) a perfect square     =>  Gal(f) <= A23, so Gal(f) is M23 or A23
\\
\\ The final step (M23 vs A23) cannot be decided by cycle types — M23's types
\\ are a subset of A23's. Every factorization mod p must land in M23's 12 types;
\\ we verify that for all good primes up to 2000. Rigorous separation needs a
\\ Steiner-system resolvent (see ROADMAP.md) — the paper used Magma for it.

f = x^23 - 184*x^21 - 1150*x^20 + 26151*x^19 + 18400*x^18 - 1808490*x^17 \
  + 1545462*x^16 + 67672923*x^15 - 42732528*x^14 - 1333395744*x^13 \
  + 290615166*x^12 + 10550424369*x^11 + 3700476348*x^10 + 35123826654*x^9 \
  - 194398310718*x^8 - 1023887308293*x^7 + 3961650395556*x^6 \
  + 1949980486716*x^5 - 28142323927002*x^4 + 53599151839311*x^3 \
  - 46185312415788*x^2 + 19169943578802*x - 3150159884154;

print("== the polynomial of Example 1.3 ==");
print("irreducible over Q: ", polisirreducible(f));

d = poldisc(f);
print("poldisc(f) has ", #digits(d), " digits");
v2 = valuation(d, 2); v3 = valuation(d, 3); v23 = valuation(d, 23);
m = d / (2^v2 * 3^v3 * 23^v23);
print("valuations: v_2 = ", v2, ", v_3 = ", v3, ", v_23 = ", v23);
print("remaining cofactor is a perfect square: ", issquare(m), \
      "  (consistent with ramification only at 2, 3, 23)");
print("disc(f) is a perfect square: ", issquare(d), "  => Gal(f) <= A23");

\\ The 12 cycle types of M23 (degrees of a factorization, sorted descending),
\\ computed independently in GAP (code/gap/verify_m23.g).
allowed = [[23], [15,5,3], [14,7,2], [11,11,1], [8,8,4,2,1], [7,7,7,1,1], \
  [6,6,3,3,2,2,1], [5,5,5,5,1,1,1], [4,4,4,4,2,2,1,1,1], \
  [3,3,3,3,3,3,1,1,1,1,1], [2,2,2,2,2,2,2,2,1,1,1,1,1,1,1], \
  [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]];

\\ Nonidentity cycle types available to the SOLVABLE transitive groups of
\\ degree 23 (C23, D23, 23:11, F23 = 23:22): 23 | 2^11.1 | 11^2.1 | 22.1.
\\ Any other observed type is a witness of nonsolvability.
solvableTypes = [[23], [22,1], [11,11,1], [2,2,2,2,2,2,2,2,2,2,2,1]];

istype(v, L) = { for (i = 1, #L, if (v == L[i], return(1))); 0 };

nGood = 0; nBad = 0; nWitness = 0; seen = List();
{
forprime (p = 5, 2000,
  if (d % p == 0, next);
  nGood++;
  fa = factormod(f, p, 1);            \\ degrees only; squarefree since p !| disc
  degs = Vec(vecsort(fa[,1]~, , 4));  \\ sorted descending
  if (!istype(degs, allowed), nBad++; print("  NOT an M23 type at p=", p, ": ", degs));
  if (!istype(degs, solvableTypes) && degs != vector(23,i,1), nWitness++);
  if (!istype(degs, Vec(seen)), listput(seen, degs));
);
}

print("");
print("== Dedekind cycle-type sweep, primes p < 2000, p coprime to disc ==");
print("primes tested: ", nGood);
print("factorization types outside M23's 12 types: ", nBad, "  (must be 0)");
print("witnesses of nonsolvability: ", nWitness);
print("distinct types observed:");
for (i = 1, #seen, print("   ", seen[i]));
print("");
print("conclusion: Gal(f) is transitive of degree 23, contains a 23-cycle,");
print("is nonsolvable, and lies in A23  =>  Gal(f) = M23 or A23.");
print("Every observed type is an M23 type (", nGood, " primes).");
print("M23 vs A23 separation: see ROADMAP.md (Steiner resolvent project).");
