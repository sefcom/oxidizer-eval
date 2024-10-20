        __int64 a8)
{
  unsigned __int64 v8; // rbx
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 contiguous; // rax
  __int64 v14; // rdx
  __int64 result; // rax
  __int64 v16; // r14
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(__int64, __int64, unsigned __int64, __int64); // r15
  bool v21; // cf
  __int64 v22; // [rsp+0h] [rbp-78h]
  __int64 v23; // [rsp+8h] [rbp-70h]
  unsigned __int64 v24; // [rsp+10h] [rbp-68h]
  char **v25; // [rsp+18h] [rbp-60h] BYREF
  __int64 v26; // [rsp+20h] [rbp-58h]
  __int64 v27; // [rsp+28h] [rbp-50h]
  __int128 v28; // [rsp+30h] [rbp-48h]

  v8 = a6;
  v11 = a7;
  if ( a4 )
  {
    v8 = a6 - a4;
    if ( a6 < a4 )
    {
      v25 = &off_101E30;
      v26 = 1LL;
      v27 = 8LL;
      v28 = 0LL;
      core::panicking::panic_fmt(&v25, &off_101E40);
    }
    v12 = a5 + a4;
    <alloc::collections::vec_deque::VecDeque<T,A> as alloc::collections::vec_deque::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      a8,
      a5,
      a5 + a4);
    if ( *(_QWORD *)(a8 + 24) != a3 )
      core::panicking::panic(aAssertionFaile_11, 67LL, &off_101E58);
    contiguous = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(a8);
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(a2 + 40))(a1, contiguous, v14, a7);
    if ( result )
      return result;
    if ( *(_QWORD *)(a8 + 24) )
      *(_QWORD *)(a8 + 24) = 0LL;
    *(_QWORD *)(a8 + 16) = 0LL;
    v11 = a7;
  }
  else
  {
    v12 = a5;
  }
  if ( !a3 )
  {
    v25 = &off_101E00;
    v26 = 1LL;
    v27 = 8LL;
    v28 = 0LL;
    core::panicking::panic_fmt(&v25, &off_101E70);
  }
  v22 = v12;
  v16 = v11;
  if ( (a3 | v8) >> 32 )
    v17 = v8 % a3;
  else
    v17 = (unsigned int)v8 % (unsigned int)a3;
  v24 = v8;
  v18 = v8 - v17;
  v19 = v22;
  v23 = v22 + v18;
  v20 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, __int64))(a2 + 40);
  while ( 1 )
  {
    v21 = v18 < a3;
    v18 -= a3;
    if ( v21 )
      break;
    result = v20(a1, v19, a3, v16);
    v19 += a3;
    if ( result )
      return result;
  }
  <alloc::collections::vec_deque::VecDeque<T,A> as alloc::collections::vec_deque::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    a8,
    v23,
    v24 + v22);
  return 0LL;
}
