        unsigned __int64 *a8)
{
  unsigned __int64 v8; // r14
  __int64 v12; // rbp
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 contiguous; // rax
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 result; // rax
  __int64 v20; // rbx
  unsigned __int64 v21; // r14
  bool v22; // cf
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rsi
  __int64 v26; // [rsp+8h] [rbp-70h]
  char **v27; // [rsp+18h] [rbp-60h] BYREF
  __int64 v28; // [rsp+20h] [rbp-58h]
  __int64 v29; // [rsp+28h] [rbp-50h]
  __int128 v30; // [rsp+30h] [rbp-48h]

  v8 = a6;
  if ( !a4 )
  {
    v12 = a5;
    v17 = a2;
LABEL_12:
    if ( !a3 )
    {
      v27 = &anon_2e379de88427cfdda108dad8baf8b250_34_llvm_16806681140142669859;
      v28 = 1LL;
      v29 = 8LL;
      v30 = 0LL;
      core::panicking::panic_fmt(&v27, &off_12C728);
    }
    if ( (a3 | v8) >> 32 )
      v20 = v8 % a3;
    else
      v20 = (unsigned int)v8 % (unsigned int)a3;
    v21 = v8 - v20;
    core::slice::raw::from_raw_parts::precondition_check(v12, 1LL, 1LL);
    v26 = v21 + v12;
    core::slice::raw::from_raw_parts::precondition_check(v21 + v12, 1LL, 1LL);
    while ( 1 )
    {
      v22 = v21 < a3;
      v21 -= a3;
      if ( v22 )
        break;
      core::slice::raw::from_raw_parts::precondition_check(v12, 1LL, 1LL, a3);
      core::slice::raw::from_raw_parts::precondition_check(a3 + v12, 1LL, 1LL, v21);
      if ( !v12 )
        break;
      result = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, __int64))(v17 + 40))(a1, v12, a3, a7);
      v12 += a3;
      if ( result )
        return result;
    }
    if ( v20 >= 0 )
    {
      core::slice::raw::from_raw_parts::precondition_check(v26, 1LL, 1LL, v20);
      alloc::collections::vec_deque::VecDeque<T,A>::reserve(a8, v20);
      v23 = *a8;
      v24 = a8[3] + a8[2];
      if ( v24 < *a8 )
        v23 = 0LL;
      alloc::collections::vec_deque::VecDeque<T,A>::copy_slice(a8, v24 - v23, v26, v20);
      result = 0LL;
      a8[3] += v20;
      return result;
    }
LABEL_26:
    core::panicking::panic_nounwind(anon_ae8952ae9441db6e5a60df1f33c061da_5_llvm_4574362696010241249, 71LL);
  }
  v8 = a6 - a4;
  if ( a6 < a4 )
  {
    v27 = &anon_2e379de88427cfdda108dad8baf8b250_39_llvm_16806681140142669859;
    v28 = 1LL;
    v29 = 8LL;
    v30 = 0LL;
    core::panicking::panic_fmt(&v27, &off_12C6F8);
  }
  core::slice::raw::from_raw_parts::precondition_check(a5, 1LL, 1LL);
  v12 = a4 + a5;
  core::slice::raw::from_raw_parts::precondition_check(a4 + a5, 1LL, 1LL);
  if ( a4 < 0 )
    goto LABEL_26;
  core::slice::raw::from_raw_parts::precondition_check(a5, 1LL, 1LL, a4);
  alloc::collections::vec_deque::VecDeque<T,A>::reserve(a8, a4);
  v13 = a8[3] + a8[2];
  v14 = 0LL;
  if ( v13 >= *a8 )
    v14 = *a8;
  alloc::collections::vec_deque::VecDeque<T,A>::copy_slice(a8, v13 - v14, a5, a4);
  v15 = a8[3] + a4;
  a8[3] = v15;
  if ( v15 != a3 )
    core::panicking::panic(aAssertionFaile_0, 67LL, &off_12C710);
  contiguous = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(a8);
  v17 = a2;
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(a2 + 40))(a1, contiguous, v18, a7);
  if ( !result )
  {
    if ( a8[3] )
    {
      alloc::collections::vec_deque::VecDeque<T,A>::slice_ranges(&v27, a8);
      a8[3] = 0LL;
    }
    a8[2] = 0LL;
    goto LABEL_12;
  }
  return result;
}
