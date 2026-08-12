// Lean compiler output
// Module: M23Formal
// Imports: public import Init public meta import Init
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_List_range(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_getD___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_m23formal_M23_apply(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_m23formal_M23_apply___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_m23formal_List_mapTR_loop___at___00M23_comp_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_m23formal_List_mapTR_loop___at___00M23_comp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_m23formal_M23_comp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_m23formal_M23_comp___closed__0;
LEAN_EXPORT lean_object* lp_m23formal_M23_comp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_m23formal_M23_comp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_m23formal_M23_idPerm;
LEAN_EXPORT lean_object* lp_m23formal_M23_pow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_m23formal_M23_pow___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_m23formal_List_filterTR_loop___at___00M23_fixedPoints_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_m23formal_List_filterTR_loop___at___00M23_fixedPoints_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_m23formal_M23_fixedPoints(lean_object*);
LEAN_EXPORT lean_object* lp_m23formal_M23_fixedPoints___boxed(lean_object*);
static const lean_ctor_object lp_m23formal_M23_g1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_m23formal_M23_g1___closed__0 = (const lean_object*)&lp_m23formal_M23_g1___closed__0_value;
static const lean_ctor_object lp_m23formal_M23_g1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g1___closed__0_value)}};
static const lean_object* lp_m23formal_M23_g1___closed__1 = (const lean_object*)&lp_m23formal_M23_g1___closed__1_value;
static const lean_ctor_object lp_m23formal_M23_g1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g1___closed__1_value)}};
static const lean_object* lp_m23formal_M23_g1___closed__2 = (const lean_object*)&lp_m23formal_M23_g1___closed__2_value;
static const lean_ctor_object lp_m23formal_M23_g1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g1___closed__2_value)}};
static const lean_object* lp_m23formal_M23_g1___closed__3 = (const lean_object*)&lp_m23formal_M23_g1___closed__3_value;
static const lean_ctor_object lp_m23formal_M23_g1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g1___closed__3_value)}};
static const lean_object* lp_m23formal_M23_g1___closed__4 = (const lean_object*)&lp_m23formal_M23_g1___closed__4_value;
static const lean_ctor_object lp_m23formal_M23_g1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g1___closed__4_value)}};
static const lean_object* lp_m23formal_M23_g1___closed__5 = (const lean_object*)&lp_m23formal_M23_g1___closed__5_value;
static const lean_ctor_object lp_m23formal_M23_g1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g1___closed__5_value)}};
static const lean_object* lp_m23formal_M23_g1___closed__6 = (const lean_object*)&lp_m23formal_M23_g1___closed__6_value;
static const lean_ctor_object lp_m23formal_M23_g1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g1___closed__6_value)}};
static const lean_object* lp_m23formal_M23_g1___closed__7 = (const lean_object*)&lp_m23formal_M23_g1___closed__7_value;
static const lean_ctor_object lp_m23formal_M23_g1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g1___closed__7_value)}};
static const lean_object* lp_m23formal_M23_g1___closed__8 = (const lean_object*)&lp_m23formal_M23_g1___closed__8_value;
static const lean_ctor_object lp_m23formal_M23_g1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g1___closed__8_value)}};
static const lean_object* lp_m23formal_M23_g1___closed__9 = (const lean_object*)&lp_m23formal_M23_g1___closed__9_value;
static const lean_ctor_object lp_m23formal_M23_g1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g1___closed__9_value)}};
static const lean_object* lp_m23formal_M23_g1___closed__10 = (const lean_object*)&lp_m23formal_M23_g1___closed__10_value;
static const lean_ctor_object lp_m23formal_M23_g1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g1___closed__10_value)}};
static const lean_object* lp_m23formal_M23_g1___closed__11 = (const lean_object*)&lp_m23formal_M23_g1___closed__11_value;
static const lean_ctor_object lp_m23formal_M23_g1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g1___closed__11_value)}};
static const lean_object* lp_m23formal_M23_g1___closed__12 = (const lean_object*)&lp_m23formal_M23_g1___closed__12_value;
static const lean_ctor_object lp_m23formal_M23_g1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g1___closed__12_value)}};
static const lean_object* lp_m23formal_M23_g1___closed__13 = (const lean_object*)&lp_m23formal_M23_g1___closed__13_value;
static const lean_ctor_object lp_m23formal_M23_g1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g1___closed__13_value)}};
static const lean_object* lp_m23formal_M23_g1___closed__14 = (const lean_object*)&lp_m23formal_M23_g1___closed__14_value;
static const lean_ctor_object lp_m23formal_M23_g1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g1___closed__14_value)}};
static const lean_object* lp_m23formal_M23_g1___closed__15 = (const lean_object*)&lp_m23formal_M23_g1___closed__15_value;
static const lean_ctor_object lp_m23formal_M23_g1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g1___closed__15_value)}};
static const lean_object* lp_m23formal_M23_g1___closed__16 = (const lean_object*)&lp_m23formal_M23_g1___closed__16_value;
static const lean_ctor_object lp_m23formal_M23_g1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g1___closed__16_value)}};
static const lean_object* lp_m23formal_M23_g1___closed__17 = (const lean_object*)&lp_m23formal_M23_g1___closed__17_value;
static const lean_ctor_object lp_m23formal_M23_g1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g1___closed__17_value)}};
static const lean_object* lp_m23formal_M23_g1___closed__18 = (const lean_object*)&lp_m23formal_M23_g1___closed__18_value;
static const lean_ctor_object lp_m23formal_M23_g1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(15) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g1___closed__18_value)}};
static const lean_object* lp_m23formal_M23_g1___closed__19 = (const lean_object*)&lp_m23formal_M23_g1___closed__19_value;
static const lean_ctor_object lp_m23formal_M23_g1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g1___closed__19_value)}};
static const lean_object* lp_m23formal_M23_g1___closed__20 = (const lean_object*)&lp_m23formal_M23_g1___closed__20_value;
static const lean_ctor_object lp_m23formal_M23_g1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(22) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g1___closed__20_value)}};
static const lean_object* lp_m23formal_M23_g1___closed__21 = (const lean_object*)&lp_m23formal_M23_g1___closed__21_value;
static const lean_ctor_object lp_m23formal_M23_g1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g1___closed__21_value)}};
static const lean_object* lp_m23formal_M23_g1___closed__22 = (const lean_object*)&lp_m23formal_M23_g1___closed__22_value;
LEAN_EXPORT const lean_object* lp_m23formal_M23_g1 = (const lean_object*)&lp_m23formal_M23_g1___closed__22_value;
static const lean_ctor_object lp_m23formal_M23_g2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_m23formal_M23_g2___closed__0 = (const lean_object*)&lp_m23formal_M23_g2___closed__0_value;
static const lean_ctor_object lp_m23formal_M23_g2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g2___closed__0_value)}};
static const lean_object* lp_m23formal_M23_g2___closed__1 = (const lean_object*)&lp_m23formal_M23_g2___closed__1_value;
static const lean_ctor_object lp_m23formal_M23_g2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g2___closed__1_value)}};
static const lean_object* lp_m23formal_M23_g2___closed__2 = (const lean_object*)&lp_m23formal_M23_g2___closed__2_value;
static const lean_ctor_object lp_m23formal_M23_g2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g2___closed__2_value)}};
static const lean_object* lp_m23formal_M23_g2___closed__3 = (const lean_object*)&lp_m23formal_M23_g2___closed__3_value;
static const lean_ctor_object lp_m23formal_M23_g2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g2___closed__3_value)}};
static const lean_object* lp_m23formal_M23_g2___closed__4 = (const lean_object*)&lp_m23formal_M23_g2___closed__4_value;
static const lean_ctor_object lp_m23formal_M23_g2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g2___closed__4_value)}};
static const lean_object* lp_m23formal_M23_g2___closed__5 = (const lean_object*)&lp_m23formal_M23_g2___closed__5_value;
static const lean_ctor_object lp_m23formal_M23_g2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g2___closed__5_value)}};
static const lean_object* lp_m23formal_M23_g2___closed__6 = (const lean_object*)&lp_m23formal_M23_g2___closed__6_value;
static const lean_ctor_object lp_m23formal_M23_g2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g2___closed__6_value)}};
static const lean_object* lp_m23formal_M23_g2___closed__7 = (const lean_object*)&lp_m23formal_M23_g2___closed__7_value;
static const lean_ctor_object lp_m23formal_M23_g2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g2___closed__7_value)}};
static const lean_object* lp_m23formal_M23_g2___closed__8 = (const lean_object*)&lp_m23formal_M23_g2___closed__8_value;
static const lean_ctor_object lp_m23formal_M23_g2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g2___closed__8_value)}};
static const lean_object* lp_m23formal_M23_g2___closed__9 = (const lean_object*)&lp_m23formal_M23_g2___closed__9_value;
static const lean_ctor_object lp_m23formal_M23_g2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g2___closed__9_value)}};
static const lean_object* lp_m23formal_M23_g2___closed__10 = (const lean_object*)&lp_m23formal_M23_g2___closed__10_value;
static const lean_ctor_object lp_m23formal_M23_g2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g2___closed__10_value)}};
static const lean_object* lp_m23formal_M23_g2___closed__11 = (const lean_object*)&lp_m23formal_M23_g2___closed__11_value;
static const lean_ctor_object lp_m23formal_M23_g2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g2___closed__11_value)}};
static const lean_object* lp_m23formal_M23_g2___closed__12 = (const lean_object*)&lp_m23formal_M23_g2___closed__12_value;
static const lean_ctor_object lp_m23formal_M23_g2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(15) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g2___closed__12_value)}};
static const lean_object* lp_m23formal_M23_g2___closed__13 = (const lean_object*)&lp_m23formal_M23_g2___closed__13_value;
static const lean_ctor_object lp_m23formal_M23_g2___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g2___closed__13_value)}};
static const lean_object* lp_m23formal_M23_g2___closed__14 = (const lean_object*)&lp_m23formal_M23_g2___closed__14_value;
static const lean_ctor_object lp_m23formal_M23_g2___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g2___closed__14_value)}};
static const lean_object* lp_m23formal_M23_g2___closed__15 = (const lean_object*)&lp_m23formal_M23_g2___closed__15_value;
static const lean_ctor_object lp_m23formal_M23_g2___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g2___closed__15_value)}};
static const lean_object* lp_m23formal_M23_g2___closed__16 = (const lean_object*)&lp_m23formal_M23_g2___closed__16_value;
static const lean_ctor_object lp_m23formal_M23_g2___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g2___closed__16_value)}};
static const lean_object* lp_m23formal_M23_g2___closed__17 = (const lean_object*)&lp_m23formal_M23_g2___closed__17_value;
static const lean_ctor_object lp_m23formal_M23_g2___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g2___closed__17_value)}};
static const lean_object* lp_m23formal_M23_g2___closed__18 = (const lean_object*)&lp_m23formal_M23_g2___closed__18_value;
static const lean_ctor_object lp_m23formal_M23_g2___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g2___closed__18_value)}};
static const lean_object* lp_m23formal_M23_g2___closed__19 = (const lean_object*)&lp_m23formal_M23_g2___closed__19_value;
static const lean_ctor_object lp_m23formal_M23_g2___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(22) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g2___closed__19_value)}};
static const lean_object* lp_m23formal_M23_g2___closed__20 = (const lean_object*)&lp_m23formal_M23_g2___closed__20_value;
static const lean_ctor_object lp_m23formal_M23_g2___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g2___closed__20_value)}};
static const lean_object* lp_m23formal_M23_g2___closed__21 = (const lean_object*)&lp_m23formal_M23_g2___closed__21_value;
static const lean_ctor_object lp_m23formal_M23_g2___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g2___closed__21_value)}};
static const lean_object* lp_m23formal_M23_g2___closed__22 = (const lean_object*)&lp_m23formal_M23_g2___closed__22_value;
LEAN_EXPORT const lean_object* lp_m23formal_M23_g2 = (const lean_object*)&lp_m23formal_M23_g2___closed__22_value;
static const lean_ctor_object lp_m23formal_M23_g3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_m23formal_M23_g3___closed__0 = (const lean_object*)&lp_m23formal_M23_g3___closed__0_value;
static const lean_ctor_object lp_m23formal_M23_g3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g3___closed__0_value)}};
static const lean_object* lp_m23formal_M23_g3___closed__1 = (const lean_object*)&lp_m23formal_M23_g3___closed__1_value;
static const lean_ctor_object lp_m23formal_M23_g3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g3___closed__1_value)}};
static const lean_object* lp_m23formal_M23_g3___closed__2 = (const lean_object*)&lp_m23formal_M23_g3___closed__2_value;
static const lean_ctor_object lp_m23formal_M23_g3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g3___closed__2_value)}};
static const lean_object* lp_m23formal_M23_g3___closed__3 = (const lean_object*)&lp_m23formal_M23_g3___closed__3_value;
static const lean_ctor_object lp_m23formal_M23_g3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g3___closed__3_value)}};
static const lean_object* lp_m23formal_M23_g3___closed__4 = (const lean_object*)&lp_m23formal_M23_g3___closed__4_value;
static const lean_ctor_object lp_m23formal_M23_g3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g3___closed__4_value)}};
static const lean_object* lp_m23formal_M23_g3___closed__5 = (const lean_object*)&lp_m23formal_M23_g3___closed__5_value;
static const lean_ctor_object lp_m23formal_M23_g3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g3___closed__5_value)}};
static const lean_object* lp_m23formal_M23_g3___closed__6 = (const lean_object*)&lp_m23formal_M23_g3___closed__6_value;
static const lean_ctor_object lp_m23formal_M23_g3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g3___closed__6_value)}};
static const lean_object* lp_m23formal_M23_g3___closed__7 = (const lean_object*)&lp_m23formal_M23_g3___closed__7_value;
static const lean_ctor_object lp_m23formal_M23_g3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(22) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g3___closed__7_value)}};
static const lean_object* lp_m23formal_M23_g3___closed__8 = (const lean_object*)&lp_m23formal_M23_g3___closed__8_value;
static const lean_ctor_object lp_m23formal_M23_g3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g3___closed__8_value)}};
static const lean_object* lp_m23formal_M23_g3___closed__9 = (const lean_object*)&lp_m23formal_M23_g3___closed__9_value;
static const lean_ctor_object lp_m23formal_M23_g3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g3___closed__9_value)}};
static const lean_object* lp_m23formal_M23_g3___closed__10 = (const lean_object*)&lp_m23formal_M23_g3___closed__10_value;
static const lean_ctor_object lp_m23formal_M23_g3___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g3___closed__10_value)}};
static const lean_object* lp_m23formal_M23_g3___closed__11 = (const lean_object*)&lp_m23formal_M23_g3___closed__11_value;
static const lean_ctor_object lp_m23formal_M23_g3___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g3___closed__11_value)}};
static const lean_object* lp_m23formal_M23_g3___closed__12 = (const lean_object*)&lp_m23formal_M23_g3___closed__12_value;
static const lean_ctor_object lp_m23formal_M23_g3___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g3___closed__12_value)}};
static const lean_object* lp_m23formal_M23_g3___closed__13 = (const lean_object*)&lp_m23formal_M23_g3___closed__13_value;
static const lean_ctor_object lp_m23formal_M23_g3___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(15) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g3___closed__13_value)}};
static const lean_object* lp_m23formal_M23_g3___closed__14 = (const lean_object*)&lp_m23formal_M23_g3___closed__14_value;
static const lean_ctor_object lp_m23formal_M23_g3___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g3___closed__14_value)}};
static const lean_object* lp_m23formal_M23_g3___closed__15 = (const lean_object*)&lp_m23formal_M23_g3___closed__15_value;
static const lean_ctor_object lp_m23formal_M23_g3___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g3___closed__15_value)}};
static const lean_object* lp_m23formal_M23_g3___closed__16 = (const lean_object*)&lp_m23formal_M23_g3___closed__16_value;
static const lean_ctor_object lp_m23formal_M23_g3___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g3___closed__16_value)}};
static const lean_object* lp_m23formal_M23_g3___closed__17 = (const lean_object*)&lp_m23formal_M23_g3___closed__17_value;
static const lean_ctor_object lp_m23formal_M23_g3___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g3___closed__17_value)}};
static const lean_object* lp_m23formal_M23_g3___closed__18 = (const lean_object*)&lp_m23formal_M23_g3___closed__18_value;
static const lean_ctor_object lp_m23formal_M23_g3___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g3___closed__18_value)}};
static const lean_object* lp_m23formal_M23_g3___closed__19 = (const lean_object*)&lp_m23formal_M23_g3___closed__19_value;
static const lean_ctor_object lp_m23formal_M23_g3___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g3___closed__19_value)}};
static const lean_object* lp_m23formal_M23_g3___closed__20 = (const lean_object*)&lp_m23formal_M23_g3___closed__20_value;
static const lean_ctor_object lp_m23formal_M23_g3___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g3___closed__20_value)}};
static const lean_object* lp_m23formal_M23_g3___closed__21 = (const lean_object*)&lp_m23formal_M23_g3___closed__21_value;
static const lean_ctor_object lp_m23formal_M23_g3___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_m23formal_M23_g3___closed__21_value)}};
static const lean_object* lp_m23formal_M23_g3___closed__22 = (const lean_object*)&lp_m23formal_M23_g3___closed__22_value;
LEAN_EXPORT const lean_object* lp_m23formal_M23_g3 = (const lean_object*)&lp_m23formal_M23_g3___closed__22_value;
LEAN_EXPORT lean_object* lp_m23formal_M23_apply(lean_object* v_p_1_, lean_object* v_i_2_){
_start:
{
lean_object* v___x_3_; 
lean_inc(v_i_2_);
v___x_3_ = l_List_getD___redArg(v_p_1_, v_i_2_, v_i_2_);
lean_dec(v_i_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* lp_m23formal_M23_apply___boxed(lean_object* v_p_4_, lean_object* v_i_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = lp_m23formal_M23_apply(v_p_4_, v_i_5_);
lean_dec(v_p_4_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* lp_m23formal_List_mapTR_loop___at___00M23_comp_spec__0(lean_object* v_q_7_, lean_object* v_p_8_, lean_object* v_a_9_, lean_object* v_a_10_){
_start:
{
if (lean_obj_tag(v_a_9_) == 0)
{
lean_object* v___x_11_; 
v___x_11_ = l_List_reverse___redArg(v_a_10_);
return v___x_11_;
}
else
{
lean_object* v_head_12_; lean_object* v_tail_13_; lean_object* v___x_15_; uint8_t v_isShared_16_; uint8_t v_isSharedCheck_23_; 
v_head_12_ = lean_ctor_get(v_a_9_, 0);
v_tail_13_ = lean_ctor_get(v_a_9_, 1);
v_isSharedCheck_23_ = !lean_is_exclusive(v_a_9_);
if (v_isSharedCheck_23_ == 0)
{
v___x_15_ = v_a_9_;
v_isShared_16_ = v_isSharedCheck_23_;
goto v_resetjp_14_;
}
else
{
lean_inc(v_tail_13_);
lean_inc(v_head_12_);
lean_dec(v_a_9_);
v___x_15_ = lean_box(0);
v_isShared_16_ = v_isSharedCheck_23_;
goto v_resetjp_14_;
}
v_resetjp_14_:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_20_; 
lean_inc(v_head_12_);
v___x_17_ = l_List_getD___redArg(v_q_7_, v_head_12_, v_head_12_);
lean_dec(v_head_12_);
lean_inc(v___x_17_);
v___x_18_ = l_List_getD___redArg(v_p_8_, v___x_17_, v___x_17_);
lean_dec(v___x_17_);
if (v_isShared_16_ == 0)
{
lean_ctor_set(v___x_15_, 1, v_a_10_);
lean_ctor_set(v___x_15_, 0, v___x_18_);
v___x_20_ = v___x_15_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_22_; 
v_reuseFailAlloc_22_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_22_, 0, v___x_18_);
lean_ctor_set(v_reuseFailAlloc_22_, 1, v_a_10_);
v___x_20_ = v_reuseFailAlloc_22_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
v_a_9_ = v_tail_13_;
v_a_10_ = v___x_20_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_m23formal_List_mapTR_loop___at___00M23_comp_spec__0___boxed(lean_object* v_q_24_, lean_object* v_p_25_, lean_object* v_a_26_, lean_object* v_a_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = lp_m23formal_List_mapTR_loop___at___00M23_comp_spec__0(v_q_24_, v_p_25_, v_a_26_, v_a_27_);
lean_dec(v_p_25_);
lean_dec(v_q_24_);
return v_res_28_;
}
}
static lean_object* _init_lp_m23formal_M23_comp___closed__0(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_29_ = lean_unsigned_to_nat(23u);
v___x_30_ = l_List_range(v___x_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* lp_m23formal_M23_comp(lean_object* v_p_31_, lean_object* v_q_32_){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_33_ = lean_obj_once(&lp_m23formal_M23_comp___closed__0, &lp_m23formal_M23_comp___closed__0_once, _init_lp_m23formal_M23_comp___closed__0);
v___x_34_ = lean_box(0);
v___x_35_ = lp_m23formal_List_mapTR_loop___at___00M23_comp_spec__0(v_q_32_, v_p_31_, v___x_33_, v___x_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* lp_m23formal_M23_comp___boxed(lean_object* v_p_36_, lean_object* v_q_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = lp_m23formal_M23_comp(v_p_36_, v_q_37_);
lean_dec(v_q_37_);
lean_dec(v_p_36_);
return v_res_38_;
}
}
static lean_object* _init_lp_m23formal_M23_idPerm(void){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = lean_obj_once(&lp_m23formal_M23_comp___closed__0, &lp_m23formal_M23_comp___closed__0_once, _init_lp_m23formal_M23_comp___closed__0);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* lp_m23formal_M23_pow(lean_object* v_p_40_, lean_object* v_x_41_){
_start:
{
lean_object* v_zero_42_; uint8_t v_isZero_43_; 
v_zero_42_ = lean_unsigned_to_nat(0u);
v_isZero_43_ = lean_nat_dec_eq(v_x_41_, v_zero_42_);
if (v_isZero_43_ == 1)
{
lean_object* v___x_44_; 
v___x_44_ = lp_m23formal_M23_idPerm;
return v___x_44_;
}
else
{
lean_object* v_one_45_; lean_object* v_n_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v_one_45_ = lean_unsigned_to_nat(1u);
v_n_46_ = lean_nat_sub(v_x_41_, v_one_45_);
v___x_47_ = lp_m23formal_M23_pow(v_p_40_, v_n_46_);
lean_dec(v_n_46_);
v___x_48_ = lp_m23formal_M23_comp(v_p_40_, v___x_47_);
lean_dec(v___x_47_);
return v___x_48_;
}
}
}
LEAN_EXPORT lean_object* lp_m23formal_M23_pow___boxed(lean_object* v_p_49_, lean_object* v_x_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = lp_m23formal_M23_pow(v_p_49_, v_x_50_);
lean_dec(v_x_50_);
lean_dec(v_p_49_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* lp_m23formal_List_filterTR_loop___at___00M23_fixedPoints_spec__0(lean_object* v_p_52_, lean_object* v_a_53_, lean_object* v_a_54_){
_start:
{
if (lean_obj_tag(v_a_53_) == 0)
{
lean_object* v___x_55_; 
v___x_55_ = l_List_reverse___redArg(v_a_54_);
return v___x_55_;
}
else
{
lean_object* v_head_56_; lean_object* v_tail_57_; lean_object* v___x_59_; uint8_t v_isShared_60_; uint8_t v_isSharedCheck_68_; 
v_head_56_ = lean_ctor_get(v_a_53_, 0);
v_tail_57_ = lean_ctor_get(v_a_53_, 1);
v_isSharedCheck_68_ = !lean_is_exclusive(v_a_53_);
if (v_isSharedCheck_68_ == 0)
{
v___x_59_ = v_a_53_;
v_isShared_60_ = v_isSharedCheck_68_;
goto v_resetjp_58_;
}
else
{
lean_inc(v_tail_57_);
lean_inc(v_head_56_);
lean_dec(v_a_53_);
v___x_59_ = lean_box(0);
v_isShared_60_ = v_isSharedCheck_68_;
goto v_resetjp_58_;
}
v_resetjp_58_:
{
lean_object* v___x_61_; uint8_t v___x_62_; 
lean_inc(v_head_56_);
v___x_61_ = l_List_getD___redArg(v_p_52_, v_head_56_, v_head_56_);
v___x_62_ = lean_nat_dec_eq(v___x_61_, v_head_56_);
lean_dec(v___x_61_);
if (v___x_62_ == 0)
{
lean_del_object(v___x_59_);
lean_dec(v_head_56_);
v_a_53_ = v_tail_57_;
goto _start;
}
else
{
lean_object* v___x_65_; 
if (v_isShared_60_ == 0)
{
lean_ctor_set(v___x_59_, 1, v_a_54_);
v___x_65_ = v___x_59_;
goto v_reusejp_64_;
}
else
{
lean_object* v_reuseFailAlloc_67_; 
v_reuseFailAlloc_67_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_67_, 0, v_head_56_);
lean_ctor_set(v_reuseFailAlloc_67_, 1, v_a_54_);
v___x_65_ = v_reuseFailAlloc_67_;
goto v_reusejp_64_;
}
v_reusejp_64_:
{
v_a_53_ = v_tail_57_;
v_a_54_ = v___x_65_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_m23formal_List_filterTR_loop___at___00M23_fixedPoints_spec__0___boxed(lean_object* v_p_69_, lean_object* v_a_70_, lean_object* v_a_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = lp_m23formal_List_filterTR_loop___at___00M23_fixedPoints_spec__0(v_p_69_, v_a_70_, v_a_71_);
lean_dec(v_p_69_);
return v_res_72_;
}
}
LEAN_EXPORT lean_object* lp_m23formal_M23_fixedPoints(lean_object* v_p_73_){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_74_ = lean_obj_once(&lp_m23formal_M23_comp___closed__0, &lp_m23formal_M23_comp___closed__0_once, _init_lp_m23formal_M23_comp___closed__0);
v___x_75_ = lean_box(0);
v___x_76_ = lp_m23formal_List_filterTR_loop___at___00M23_fixedPoints_spec__0(v_p_73_, v___x_74_, v___x_75_);
v___x_77_ = l_List_lengthTR___redArg(v___x_76_);
lean_dec(v___x_76_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* lp_m23formal_M23_fixedPoints___boxed(lean_object* v_p_78_){
_start:
{
lean_object* v_res_79_; 
v_res_79_ = lp_m23formal_M23_fixedPoints(v_p_78_);
lean_dec(v_p_78_);
return v_res_79_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_m23formal_M23Formal(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_m23formal_M23_idPerm = _init_lp_m23formal_M23_idPerm();
lean_mark_persistent(lp_m23formal_M23_idPerm);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
