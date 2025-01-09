__int64 __fastcall uu_ptx::format_roff_line(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned __int8 v10; // al
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 started; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rsi
  char **v19; // r8
  __int64 v20; // r13
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r15
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int8 v28; // al
  unsigned __int8 v29; // al
  _OWORD *v30; // rcx
  unsigned __int8 v32; // [rsp+17h] [rbp-201h]
  __int128 v37; // [rsp+38h] [rbp-1E0h] BYREF
  __int64 v38; // [rsp+48h] [rbp-1D0h]
  __int128 v39; // [rsp+50h] [rbp-1C8h] BYREF
  char ***v40; // [rsp+60h] [rbp-1B8h]
  __int128 v41; // [rsp+68h] [rbp-1B0h]
  __int64 (__fastcall *v42)(); // [rsp+78h] [rbp-1A0h]
  __int128 v43; // [rsp+80h] [rbp-198h]
  _QWORD *v44; // [rsp+90h] [rbp-188h]
  __int128 v45; // [rsp+98h] [rbp-180h]
  __int64 v46; // [rsp+A8h] [rbp-170h]
  __int128 v47; // [rsp+B0h] [rbp-168h] BYREF
  char ***v48; // [rsp+C0h] [rbp-158h]
  __int128 v49; // [rsp+D0h] [rbp-148h] BYREF
  __int64 (__fastcall *v50)(); // [rsp+E0h] [rbp-138h]
  __int128 v51; // [rsp+F0h] [rbp-128h] BYREF
  _QWORD *v52; // [rsp+100h] [rbp-118h]
  __int128 v53; // [rsp+110h] [rbp-108h] BYREF
  __int64 v54; // [rsp+120h] [rbp-F8h]
  __int64 v55; // [rsp+128h] [rbp-F0h]
  __int64 v57; // [rsp+138h] [rbp-E0h]
  char **v58; // [rsp+140h] [rbp-D8h] BYREF
  __int64 (__fastcall *v59)(); // [rsp+148h] [rbp-D0h]
  __int128 *v60; // [rsp+150h] [rbp-C8h]
  __int64 v61; // [rsp+158h] [rbp-C0h]
  __int64 v62; // [rsp+160h] [rbp-B8h]
  _QWORD v63[3]; // [rsp+170h] [rbp-A8h] BYREF
  _BYTE v64[24]; // [rsp+188h] [rbp-90h] BYREF
  _BYTE v65[24]; // [rsp+1A0h] [rbp-78h] BYREF
  _BYTE v66[24]; // [rsp+1B8h] [rbp-60h] BYREF
  _BYTE v67[72]; // [rsp+1D0h] [rbp-48h] BYREF

  v57 = a4;
  v55 = a1;
  *(_QWORD *)&v37 = 0LL;
  *((_QWORD *)&v37 + 1) = 1LL;
  v38 = 0LL;
  v58 = (char **)a2;
  v59 = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v39 = &off_2EE100;
  *((_QWORD *)&v39 + 1) = 1LL;
  v40 = &v58;
  v41 = 1uLL;
  v10 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v37, &v39);
  core::result::Result<T,E>::unwrap(v10, &off_2EE190);
  v32 = *(_BYTE *)(a2 + 90);
  if ( v32 )
  {
    v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
            0LL,
            a3,
            a5,
            a6);
    if ( !v11 )
      core::str::slice_error_fail(a5, a6, 0LL, a3, &off_2EE1C0);
    v13 = v12;
    started = core::str::<impl str>::trim_start_matches(v11, v12, a9, a10);
    core::str::<impl str>::trim_start_matches(started, v15);
    v17 = a3 - v16;
    v18 = core::cmp::max_by(v13, a3 - v16);
    v19 = &off_2EE1D8;
  }
  else
  {
    v19 = &off_2EE1A8;
    v17 = 0LL;
    v18 = a3;
  }
  v20 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v17, v18, a7, a8, v19);
  v22 = v21;
  v23 = v57;
  if ( !core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
          a3,
          v57,
          a5,
          a6) )
    core::str::slice_error_fail(a5, a6, a3, v23, &off_2EE1F0);
  v25 = v24;
  v26 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v23, a8, a7, a8, &off_2EE208);
  uu_ptx::get_output_chunks((__int64)&v39, v20, v22, v25, v26, v27, (_QWORD *)a2);
  v48 = v40;
  v47 = v39;
  v50 = v42;
  v49 = v41;
  v52 = v44;
  v51 = v43;
  v54 = v46;
  v53 = v45;
  uu_ptx::format_roff_field();
  uu_ptx::format_roff_field();
  uu_ptx::format_roff_field();
  uu_ptx::format_roff_field();
  uu_ptx::format_roff_field();
  *(_QWORD *)&v39 = v64;
  *((_QWORD *)&v39 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  v40 = (char ***)v65;
  *(_QWORD *)&v41 = <alloc::string::String as core::fmt::Display>::fmt;
  *((_QWORD *)&v41 + 1) = v66;
  v42 = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v43 = v67;
  *((_QWORD *)&v43 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  v44 = v63;
  *(_QWORD *)&v45 = <alloc::string::String as core::fmt::Display>::fmt;
  v58 = &off_2EE110;
  v59 = (__int64 (__fastcall *)())&byte_6;
  v62 = 0LL;
  v60 = &v39;
  v61 = 5LL;
  v28 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v37, &v58);
  core::result::Result<T,E>::unwrap(v28, &off_2EE220);
  core::ptr::drop_in_place<alloc::string::String>(v63);
  core::ptr::drop_in_place<alloc::string::String>(v67);
  core::ptr::drop_in_place<alloc::string::String>(v66);
  core::ptr::drop_in_place<alloc::string::String>(v65);
  core::ptr::drop_in_place<alloc::string::String>(v64);
  if ( *(_BYTE *)(a2 + 89) | v32 )
  {
    uu_ptx::format_roff_field();
    v63[0] = &v58;
    v63[1] = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v39 = &off_2EE170;
    *((_QWORD *)&v39 + 1) = 2LL;
    v40 = (char ***)v63;
    v41 = 1uLL;
    v29 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v37, &v39);
    core::result::Result<T,E>::unwrap(v29, &off_2EE238);
    core::ptr::drop_in_place<alloc::string::String>(&v58);
  }
  v30 = (_OWORD *)v55;
  *(_QWORD *)(v55 + 16) = v38;
  *v30 = v37;
  core::ptr::drop_in_place<alloc::string::String>(&v53);
  core::ptr::drop_in_place<alloc::string::String>(&v51);
  core::ptr::drop_in_place<alloc::string::String>(&v49);
  return core::ptr::drop_in_place<alloc::string::String>(&v47);
}
