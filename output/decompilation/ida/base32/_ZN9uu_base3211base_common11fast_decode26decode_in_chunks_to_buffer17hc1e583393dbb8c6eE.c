__int64 __fastcall uu_base32::base_common::fast_decode::decode_in_chunks_to_buffer(
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
  __int64 result; // rax
  __int64 v12; // r13
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+8h] [rbp-C0h]
  __int64 v18; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+18h] [rbp-B0h] BYREF
  _QWORD v20[3]; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v21; // [rsp+38h] [rbp-90h]
  _QWORD v22[4]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v23[16]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v24; // [rsp+80h] [rbp-48h]
  __int64 v25; // [rsp+88h] [rbp-40h]

  v8 = a6;
  v9 = a5;
  v16 = a3;
  if ( a4 )
  {
    if ( a4 > a6 )
    {
      v20[0] = &off_10DA30;
      v20[1] = 1LL;
      v20[2] = 8LL;
      v21 = 0LL;
      core::panicking::panic_fmt(v20, &off_10E320);
    }
    core::slice::<impl [T]>::split_at_unchecked(v22, a5, a6);
    v17 = v22[2];
    v8 = v22[3];
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      a8,
      v22[0],
      v22[0] + v22[1]);
    v18 = *(_QWORD *)(a8 + 16);
    if ( v18 != a3 )
    {
      v20[0] = 0LL;
      core::panicking::assert_failed(0LL, &v18, &v16, v20, &off_10E338);
    }
    result = a2(a1, *(_QWORD *)(a8 + 8), a3, a7);
    if ( result )
      return result;
    *(_QWORD *)(a8 + 16) = 0LL;
    v9 = v17;
  }
  core::slice::<impl [T]>::chunks_exact(v23, v9, v8, a3, &off_10E350);
  v12 = v24;
  v13 = v25;
  while ( 1 )
  {
    v14 = <core::slice::iter::ChunksExact<T> as core::iter::traits::iterator::Iterator>::next(v23);
    if ( !v14 )
      break;
    v19 = v15;
    if ( v15 != v16 )
    {
      v20[0] = 0LL;
      core::panicking::assert_failed(0LL, &v19, &v16, v20, &off_10E368);
    }
    result = a2(a1, v14, v15, a7);
    if ( result )
      return result;
  }
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    a8,
    v12,
    v12 + v13);
  return 0LL;
}