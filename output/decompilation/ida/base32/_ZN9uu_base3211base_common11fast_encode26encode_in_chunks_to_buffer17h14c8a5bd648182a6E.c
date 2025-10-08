__int64 __fastcall uu_base32::base_common::fast_encode::encode_in_chunks_to_buffer(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64, __int64, __int64),
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  __int64 contiguous; // rax
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // r13
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+8h] [rbp-C0h]
  __int64 v20; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+18h] [rbp-B0h] BYREF
  _QWORD v22[3]; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+38h] [rbp-90h]
  _QWORD v24[4]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v25[16]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v26; // [rsp+80h] [rbp-48h]
  __int64 v27; // [rsp+88h] [rbp-40h]

  v8 = a6;
  v9 = a5;
  v18 = a3;
  if ( a4 )
  {
    if ( a4 > a6 )
    {
      v22[0] = &off_10DA30;
      v22[1] = 1LL;
      v22[2] = 8LL;
      v23 = 0LL;
      core::panicking::panic_fmt(v22, &off_10E170);
    }
    core::slice::<impl [T]>::split_at_unchecked(v24, a5, a6);
    v19 = v24[2];
    v8 = v24[3];
    <alloc::collections::vec_deque::VecDeque<T,A> as alloc::collections::vec_deque::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      a8,
      v24[0],
      v24[0] + v24[1],
      &off_10E188);
    v20 = *(_QWORD *)(a8 + 24);
    if ( v20 != a3 )
    {
      v22[0] = 0LL;
      core::panicking::assert_failed(0LL, &v20, &v18, v22, &off_10E1A0);
    }
    contiguous = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(a8);
    result = a2(a1, contiguous, v12, a7);
    if ( result )
      return result;
    alloc::collections::vec_deque::VecDeque<T,A>::truncate(a8);
    *(_QWORD *)(a8 + 16) = 0LL;
    v9 = v19;
  }
  core::slice::<impl [T]>::chunks_exact(v25, v9, v8, a3, &off_10E1B8);
  v14 = v26;
  v15 = v27;
  while ( 1 )
  {
    v16 = <core::slice::iter::ChunksExact<T> as core::iter::traits::iterator::Iterator>::next(v25);
    if ( !v16 )
      break;
    v21 = v17;
    if ( v17 != v18 )
    {
      v22[0] = 0LL;
      core::panicking::assert_failed(0LL, &v21, &v18, v22, &off_10E1E8);
    }
    result = a2(a1, v16, v17, a7);
    if ( result )
      return result;
  }
  <alloc::collections::vec_deque::VecDeque<T,A> as alloc::collections::vec_deque::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    a8,
    v14,
    v14 + v15,
    &off_10E1D0);
  return 0LL;
}