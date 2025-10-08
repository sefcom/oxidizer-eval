_QWORD *__fastcall uu_numfmt::format::format_and_print_delimited(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r12
  unsigned __int64 v8; // r14
  char v9; // bl
  __int64 started; // rax
  __int64 v11; // rdx
  __int64 v12; // r9
  _QWORD *result; // rax
  __int64 v15; // [rsp+10h] [rbp-1E8h] BYREF
  __int64 v16; // [rsp+18h] [rbp-1E0h]
  __int128 v17; // [rsp+20h] [rbp-1D8h]
  _QWORD *v18; // [rsp+30h] [rbp-1C8h]
  _QWORD *v19; // [rsp+40h] [rbp-1B8h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-1B0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-1A8h]
  __int64 v22; // [rsp+58h] [rbp-1A0h]
  __int64 *v23; // [rsp+60h] [rbp-198h] BYREF
  __int128 v24; // [rsp+68h] [rbp-190h]
  _QWORD *v25; // [rsp+78h] [rbp-180h]
  _QWORD v26[2]; // [rsp+80h] [rbp-178h] BYREF
  void *v27; // [rsp+90h] [rbp-168h] BYREF
  __int64 v28; // [rsp+98h] [rbp-160h]
  __int64 **v29; // [rsp+A0h] [rbp-158h]
  __int64 v30; // [rsp+A8h] [rbp-150h]
  __int64 v31; // [rsp+B0h] [rbp-148h]
  __int64 v32; // [rsp+F8h] [rbp-100h]
  __int64 v33; // [rsp+100h] [rbp-F8h]
  __int16 v34; // [rsp+108h] [rbp-F0h]
  __int128 v35; // [rsp+110h] [rbp-E8h] BYREF
  _QWORD *v36; // [rsp+120h] [rbp-D8h]
  _QWORD v37[3]; // [rsp+128h] [rbp-D0h] BYREF
  __int128 v38; // [rsp+140h] [rbp-B8h]

  if ( __OFSUB__(0LL, a4[14]) )
    core::option::unwrap_failed(&off_102528);
  v19 = a4 + 14;
  <&alloc::string::String as core::str::pattern::Pattern>::into_searcher(&v27, a4 + 14, a2, a3);
  v32 = 0LL;
  v33 = a3;
  v34 = 1;
  core::iter::traits::iterator::Iterator::zip(v37, &v27);
  <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v20, v37);
  v5 = v21;
  if ( !v21 )
  {
LABEL_11:
    v37[0] = &off_102518;
    v37[1] = 1LL;
    v37[2] = 8LL;
    v38 = 0LL;
    std::io::stdio::_print(v37);
    result = a1;
    *a1 = 0x8000000000000000LL;
    return result;
  }
  v6 = a4[12];
  v7 = a4[13];
  while ( 1 )
  {
    v8 = v20;
    v15 = v5;
    v16 = v22;
    v9 = uucore::features::ranges::contain(v6, v7, v20);
    if ( v8 > 1 )
    {
      v23 = (__int64 *)&v19;
      *(_QWORD *)&v24 = <&T as core::fmt::Display>::fmt;
      v27 = &unk_198C0;
      v28 = 1LL;
      v31 = 0LL;
      v29 = &v23;
      v30 = 1LL;
      std::io::stdio::_print(&v27);
    }
    if ( v9 )
      break;
    v23 = &v15;
    *(_QWORD *)&v24 = <&T as core::fmt::Display>::fmt;
    v27 = &unk_198C0;
    v28 = 1LL;
    v31 = 0LL;
    v29 = &v23;
    v30 = 1LL;
    std::io::stdio::_print(&v27);
LABEL_5:
    <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v20, v37);
    v5 = v21;
    if ( !v21 )
      goto LABEL_11;
  }
  started = core::str::<impl str>::trim_start_matches(v15, v16);
  uu_numfmt::format::format_string(&v23, started, v11, (__int64)a4, 0LL, v12);
  v17 = v24;
  v18 = v25;
  if ( ((unsigned __int8)v23 & 1) == 0 )
  {
    v36 = v18;
    v35 = v17;
    v26[0] = &v35;
    v26[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v27 = &unk_198C0;
    v28 = 1LL;
    v31 = 0LL;
    v29 = (__int64 **)v26;
    v30 = 1LL;
    std::io::stdio::_print(&v27);
    core::ptr::drop_in_place<alloc::string::String>(&v35);
    goto LABEL_5;
  }
  result = v18;
  a1[2] = v18;
  *(_OWORD *)a1 = v17;
  return result;
}