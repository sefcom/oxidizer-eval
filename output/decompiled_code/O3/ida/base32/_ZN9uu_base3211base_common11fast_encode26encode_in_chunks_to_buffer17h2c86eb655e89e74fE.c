        __int64 a8)
{
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  __int64 contiguous; // rax
  __int64 (__fastcall *v12)(__int64, __int64, __int64, __int64); // rbp
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // [rsp+8h] [rbp-B0h]
  __int64 v19; // [rsp+8h] [rbp-B0h]
  _QWORD v20[4]; // [rsp+10h] [rbp-A8h] BYREF
  _QWORD v21[3]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v22; // [rsp+48h] [rbp-70h]
  _BYTE v23[16]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v24; // [rsp+70h] [rbp-48h]
  __int64 v25; // [rsp+78h] [rbp-40h]

  v8 = a6;
  v9 = a5;
  if ( a4 )
  {
    if ( a4 > a6 )
    {
      v21[0] = &off_149C90;
      v21[1] = 1LL;
      v21[2] = 8LL;
      v22 = 0LL;
      core::panicking::panic_fmt(v21, &off_149CA0);
    }
    core::slice::<impl [T]>::split_at_unchecked(v20, a5, a6);
    v18 = v20[2];
    v8 = v20[3];
    <alloc::collections::vec_deque::VecDeque<T,A> as alloc::collections::vec_deque::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      a8,
      v20[0],
      v20[0] + v20[1]);
    if ( *(_QWORD *)(a8 + 24) != a3 )
      core::panicking::panic(aAssertionFaile_17, 67LL, &off_149CB8);
    contiguous = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(a8);
    v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(a2 + 40);
    result = v12(a1, contiguous, v13, a7);
    if ( result )
      return result;
    alloc::collections::vec_deque::VecDeque<T,A>::truncate(a8, 0LL);
    *(_QWORD *)(a8 + 16) = 0LL;
    v9 = v18;
  }
  else
  {
    v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(a2 + 40);
  }
  core::slice::<impl [T]>::chunks_exact(v23, v9, v8, a3, &off_149CD0);
  v19 = v24;
  v15 = v25;
  while ( 1 )
  {
    v16 = <core::slice::iter::ChunksExact<T> as core::iter::traits::iterator::Iterator>::next(v23);
    if ( !v16 )
      break;
    if ( v17 != a3 )
      core::panicking::panic(aAssertionFaile_18, 54LL, &off_149CE8);
    result = v12(a1, v16, a3, a7);
    if ( result )
      return result;
  }
  <alloc::collections::vec_deque::VecDeque<T,A> as alloc::collections::vec_deque::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    a8,
    v19,
    v19 + v15);
  return 0LL;
}
