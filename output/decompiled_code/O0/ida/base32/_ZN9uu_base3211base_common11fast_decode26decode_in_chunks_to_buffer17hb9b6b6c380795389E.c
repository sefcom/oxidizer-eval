        __int64 a8)
{
  unsigned __int64 v8; // r13
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 result; // rax
  __int64 v17; // rdi
  __int64 v18; // rbp
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rbx
  __int64 v21; // r14
  bool v22; // cf
  __int64 v24; // [rsp+18h] [rbp-70h]
  char **v25; // [rsp+28h] [rbp-60h] BYREF
  __int64 v26; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+38h] [rbp-50h]
  __int128 v28; // [rsp+40h] [rbp-48h]

  v8 = a6;
  v10 = a2;
  v11 = a7;
  if ( a4 )
  {
    v8 = a6 - a4;
    if ( a6 < a4 )
    {
      v25 = &anon_2e379de88427cfdda108dad8baf8b250_39_llvm_16806681140142669859;
      v26 = 1LL;
      v27 = 8LL;
      v28 = 0LL;
      core::panicking::panic_fmt(&v25, &off_12C3E8);
    }
    core::slice::raw::from_raw_parts::precondition_check(a5, 1LL, 1LL);
    v14 = a5 + a4;
    core::slice::raw::from_raw_parts::precondition_check(v14, 1LL, 1LL);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      a8,
      a5,
      v14);
    if ( *(_QWORD *)(a8 + 16) != a3 )
      core::panicking::panic(aAssertionFaile_10, 67LL, &off_12C400);
    v10 = a2;
    if ( a3 < 0 || (v15 = *(_QWORD *)(a8 + 8)) == 0 )
      core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
    v11 = a7;
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v10 + 32))(a1, v15, a3, a7);
    if ( result )
      return result;
    if ( !*(_QWORD *)(a8 + 8) || *(__int64 *)(a8 + 16) < 0 )
      core::panicking::panic_nounwind(anon_7bf8453590977c7a3fe5e2865e6df318_13_llvm_976352915506230263, 166LL);
    *(_QWORD *)(a8 + 16) = 0LL;
    v17 = v14;
  }
  else
  {
    v17 = a5;
  }
  if ( !a3 )
  {
    v25 = &anon_2e379de88427cfdda108dad8baf8b250_34_llvm_16806681140142669859;
    v26 = 1LL;
    v27 = 8LL;
    v28 = 0LL;
    core::panicking::panic_fmt(&v25, &off_12C418);
  }
  v18 = v10;
  if ( (a3 | v8) >> 32 )
    v19 = v8 % a3;
  else
    v19 = (unsigned int)v8 % (unsigned int)a3;
  v20 = v8 - v19;
  core::slice::raw::from_raw_parts::precondition_check(v17, 1LL, 1LL);
  v24 = v8 - v19 + v17;
  core::slice::raw::from_raw_parts::precondition_check(v24, 1LL, 1LL);
  v21 = v17;
  while ( 1 )
  {
    v22 = v20 < a3;
    v20 -= a3;
    if ( v22 )
      break;
    core::slice::raw::from_raw_parts::precondition_check(v21, 1LL, 1LL, a3);
    core::slice::raw::from_raw_parts::precondition_check(v21 + a3, 1LL, 1LL, v20);
    if ( !v21 )
      break;
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v18 + 32))(a1, v21, a3, v11);
    v21 += a3;
    if ( result )
      return result;
  }
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    a8,
    v24,
    v8 + v17);
  return 0LL;
}
