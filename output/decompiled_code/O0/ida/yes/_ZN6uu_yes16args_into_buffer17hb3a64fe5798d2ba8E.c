__int64 __fastcall uu_yes::args_into_buffer(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm2
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rdx
  int v9; // [rsp+0h] [rbp-218h]
  int v10; // [rsp+8h] [rbp-210h]
  int v11[2]; // [rsp+10h] [rbp-208h]
  int v12; // [rsp+20h] [rbp-1F8h]
  int v13; // [rsp+28h] [rbp-1F0h]
  int v14[4]; // [rsp+30h] [rbp-1E8h] BYREF
  int v15[4]; // [rsp+40h] [rbp-1D8h]
  int v16[4]; // [rsp+50h] [rbp-1C8h]
  struct _Unwind_Exception *v17[2]; // [rsp+60h] [rbp-1B8h]
  _BYTE src[104]; // [rsp+78h] [rbp-1A0h] BYREF
  int v19[26]; // [rsp+E0h] [rbp-138h] BYREF
  int v20[16]; // [rsp+148h] [rbp-D0h] BYREF
  _BYTE dest[104]; // [rsp+188h] [rbp-90h] BYREF
  __int64 v22; // [rsp+1F0h] [rbp-28h]
  __int64 v23; // [rsp+1F8h] [rbp-20h]
  char v24; // [rsp+207h] [rbp-11h]

  v24 = 1;
  if ( *(_QWORD *)a2 != 0LL )
  {
    v24 = 0;
    v2 = *a2;
    v3 = a2[1];
    v4 = a2[2];
    *(_OWORD *)v17 = a2[3];
    *(_OWORD *)v16 = v4;
    *(_OWORD *)v15 = v3;
    *(_OWORD *)v14 = v2;
    core::iter::traits::iterator::Iterator::map(v20, v14);
    itertools::free::intersperse(
      (int)v19,
      (int)v20,
      (int)asc_152CE,
      1,
      v5,
      v6,
      v9,
      v10,
      a1,
      (int)a2,
      v12,
      v13,
      v14[0],
      v14[2],
      v15[0],
      v15[2],
      v16[0],
      v16[2],
      v17[0],
      (int)v17[1]);
    <I as core::iter::traits::collect::IntoIterator>::into_iter(src, v19);
    memcpy(dest, src, sizeof(dest));
    while ( 1 )
    {
      v22 = <itertools::intersperse::IntersperseWith<I,ElemF> as core::iter::traits::iterator::Iterator>::next(dest);
      v23 = v7;
      if ( !v22 )
        break;
      alloc::vec::Vec<T,A>::extend_from_slice(*(_QWORD *)v11, v22, v23);
    }
    alloc::vec::Vec<T,A>::push(*(_QWORD *)v11, 10LL);
  }
  else
  {
    alloc::vec::Vec<T,A>::extend_from_slice(a1, aY, 2LL);
  }
  return 0LL;
}
