__int64 __fastcall just::justfile::Justfile::invocation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7)
{
  unsigned __int64 v10; // r13
  __int64 *v11; // rbp
  unsigned __int64 v12; // r14
  __int64 recipe; // rax
  __int64 v14; // r12
  __int64 result; // rax

  v10 = a7;
  v11 = (__int64 *)(a5 + 24 * a7 + 16);
  v12 = a6 - 1;
  while ( v12 != v10 )
  {
    if ( v10 >= a6 )
      core::panicking::panic_bounds_check(v10, a6, &off_430208);
    a2 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(
           *(_QWORD *)(a2 + 672),
           *(_QWORD *)(a2 + 680),
           *(v11 - 1),
           *v11);
    v11 += 3;
    ++v10;
    if ( !a2 )
      core::option::unwrap_failed(&off_430220);
  }
  if ( v10 >= a6 )
    core::panicking::panic_bounds_check(v10, a6, &off_430238);
  recipe = just::justfile::Justfile::get_recipe(a2, *(v11 - 1), *v11);
  if ( !recipe )
    core::option::unwrap_failed(&off_430250);
  v14 = recipe;
  result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 8, a3);
  *(_QWORD *)(a1 + 32) = v14;
  *(_BYTE *)a1 = 56;
  return result;
}