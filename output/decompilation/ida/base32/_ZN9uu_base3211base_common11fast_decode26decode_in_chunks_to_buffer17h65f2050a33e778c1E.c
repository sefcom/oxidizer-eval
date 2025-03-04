__int64 __fastcall uu_base32::base_common::fast_decode::decode_in_chunks_to_buffer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // r13
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64); // rbp
  __int64 result; // rax
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // [rsp+8h] [rbp-B0h]
  __int64 v16; // [rsp+8h] [rbp-B0h]
  _QWORD v17[4]; // [rsp+10h] [rbp-A8h] BYREF
  _QWORD v18[3]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v19; // [rsp+48h] [rbp-70h]
  _BYTE v20[16]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v21; // [rsp+70h] [rbp-48h]
  __int64 v22; // [rsp+78h] [rbp-40h]

  v8 = a6;
  if ( a4 )
  {
    if ( a4 > a6 )
    {
      v18[0] = &off_149B48;
      v18[1] = 1LL;
      v18[2] = 8LL;
      v19 = 0LL;
      core::panicking::panic_fmt(v18, &off_149B88);
    }
    core::slice::<impl [T]>::split_at_unchecked(v17, a5, a6);
    v15 = v17[2];
    v8 = v17[3];
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      a8,
      v17[0],
      v17[0] + v17[1]);
    if ( *(_QWORD *)(a8 + 16) != a3 )
      core::panicking::panic(aAssertionFaile_15, 67LL, &off_149BA0);
    v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(a2 + 32);
    result = v10(a1, *(_QWORD *)(a8 + 8), a3, a7);
    if ( result )
      return result;
    *(_QWORD *)(a8 + 16) = 0LL;
    a5 = v15;
  }
  else
  {
    v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(a2 + 32);
  }
  core::slice::<impl [T]>::chunks_exact(v20, a5, v8, a3);
  v16 = v21;
  v12 = v22;
  while ( 1 )
  {
    v13 = <core::slice::iter::ChunksExact<T> as core::iter::traits::iterator::Iterator>::next(v20);
    if ( !v13 )
      break;
    if ( v14 != a3 )
      core::panicking::panic(aAssertionFaile_16, 54LL, &off_149BD0);
    result = v10(a1, v13, a3, a7);
    if ( result )
      return result;
  }
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    a8,
    v16,
    v16 + v12);
  return 0LL;
}
