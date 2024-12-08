_QWORD *__fastcall uu_numfmt::format::format_and_print_delimited(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r12
  unsigned __int64 v8; // r14
  char v9; // bl
  __int64 started; // rsi
  unsigned __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *result; // rax
  _QWORD *v18; // [rsp+0h] [rbp-1F8h]
  __int64 v19; // [rsp+8h] [rbp-1F0h]
  __int64 v20; // [rsp+10h] [rbp-1E8h] BYREF
  __int64 v21; // [rsp+18h] [rbp-1E0h]
  __int128 v22; // [rsp+20h] [rbp-1D8h]
  _QWORD *v23; // [rsp+30h] [rbp-1C8h]
  __int64 v24; // [rsp+40h] [rbp-1B8h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-1B0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-1A8h]
  __int64 v27; // [rsp+58h] [rbp-1A0h]
  __int64 *v28; // [rsp+60h] [rbp-198h] BYREF
  __int128 v29; // [rsp+68h] [rbp-190h]
  _QWORD *v30; // [rsp+78h] [rbp-180h]
  _QWORD v31[2]; // [rsp+80h] [rbp-178h] BYREF
  __int128 *v32; // [rsp+90h] [rbp-168h] BYREF
  __int64 v33; // [rsp+98h] [rbp-160h]
  __int64 **v34; // [rsp+A0h] [rbp-158h]
  __int64 v35; // [rsp+A8h] [rbp-150h]
  __int64 v36; // [rsp+B0h] [rbp-148h]
  __int64 v37; // [rsp+F8h] [rbp-100h]
  __int64 v38; // [rsp+100h] [rbp-F8h]
  __int16 v39; // [rsp+108h] [rbp-F0h]
  __int128 v40; // [rsp+110h] [rbp-E8h] BYREF
  _QWORD *v41; // [rsp+120h] [rbp-D8h]
  _QWORD v42[3]; // [rsp+128h] [rbp-D0h] BYREF
  __int128 v43; // [rsp+140h] [rbp-B8h]

  v18 = a1;
  if ( *(_QWORD *)(a4 + 112) == 0x8000000000000000LL )
    core::option::unwrap_failed(&off_136660);
  v19 = a4;
  v24 = a4 + 112;
  <&alloc::string::String as core::str::pattern::Pattern>::into_searcher(&v32, a4 + 112, a2, a3);
  v37 = 0LL;
  v38 = a3;
  v39 = 1;
  core::iter::traits::iterator::Iterator::zip(v42, &v32);
  <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v25, v42);
  v5 = v26;
  if ( !v26 )
  {
LABEL_11:
    v42[0] = &off_136678;
    v42[1] = 1LL;
    v42[2] = 8LL;
    v43 = 0LL;
    std::io::stdio::_print(v42);
    result = v18;
    *v18 = 0x8000000000000000LL;
    return result;
  }
  v6 = *(_QWORD *)(v19 + 96);
  v7 = *(_QWORD *)(v19 + 104);
  while ( 1 )
  {
    v8 = v25;
    v20 = v5;
    v21 = v27;
    v9 = uucore::features::ranges::contain(v6, v7, v25);
    if ( v8 > 1 )
    {
      v28 = &v24;
      *(_QWORD *)&v29 = <&T as core::fmt::Display>::fmt;
      v32 = &xmmword_16200;
      v33 = 1LL;
      v36 = 0LL;
      v34 = &v28;
      v35 = 1LL;
      std::io::stdio::_print(&v32);
    }
    if ( v9 )
      break;
    v28 = &v20;
    *(_QWORD *)&v29 = <&T as core::fmt::Display>::fmt;
    v32 = &xmmword_16200;
    v33 = 1LL;
    v36 = 0LL;
    v34 = &v28;
    v35 = 1LL;
    std::io::stdio::_print(&v32);
LABEL_5:
    <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v25, v42);
    v5 = v26;
    if ( !v26 )
      goto LABEL_11;
  }
  started = core::str::<impl str>::trim_start_matches(v20, v21);
  uu_numfmt::format::format_string(&v28, started, v11, v19, 0LL, v12);
  v22 = v29;
  v23 = v30;
  if ( !v28 )
  {
    v41 = v23;
    v40 = v22;
    v31[0] = &v40;
    v31[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v32 = &xmmword_16200;
    v33 = 1LL;
    v36 = 0LL;
    v34 = (__int64 **)v31;
    v35 = 1LL;
    std::io::stdio::_print(&v32);
    core::ptr::drop_in_place<alloc::string::String>(&v40, started, v13, v14, v15, v16, v18, v19, v20);
    goto LABEL_5;
  }
  result = v23;
  v18[2] = v23;
  *(_OWORD *)v18 = v22;
  return result;
}
