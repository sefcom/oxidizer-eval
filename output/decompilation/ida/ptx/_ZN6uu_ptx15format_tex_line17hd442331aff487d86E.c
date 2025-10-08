__int64 __fastcall uu_ptx::format_tex_line(
        __int64 a1,
        _BYTE *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned __int8 v14; // al
  unsigned __int8 v15; // al
  __int64 v16; // r12
  unsigned __int8 v17; // al
  __int128 v19; // [rsp+0h] [rbp-208h] BYREF
  __int64 v20; // [rsp+10h] [rbp-1F8h]
  __int128 v21; // [rsp+18h] [rbp-1F0h] BYREF
  void **v22; // [rsp+28h] [rbp-1E0h]
  __int128 v23; // [rsp+30h] [rbp-1D8h]
  __int64 (__fastcall *v24)(); // [rsp+40h] [rbp-1C8h]
  __int128 v25; // [rsp+48h] [rbp-1C0h]
  _QWORD *v26; // [rsp+58h] [rbp-1B0h]
  __int128 v27; // [rsp+60h] [rbp-1A8h]
  __int64 v28; // [rsp+70h] [rbp-198h]
  __int128 v29; // [rsp+78h] [rbp-190h]
  __int64 v30; // [rsp+88h] [rbp-180h]
  __int128 v31; // [rsp+90h] [rbp-178h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-168h]
  __int128 v33; // [rsp+B0h] [rbp-158h] BYREF
  __int64 (__fastcall *v34)(); // [rsp+C0h] [rbp-148h]
  __int128 v35; // [rsp+D0h] [rbp-138h] BYREF
  _QWORD *v36; // [rsp+E0h] [rbp-128h]
  __int128 v37; // [rsp+F0h] [rbp-118h] BYREF
  __int64 v38; // [rsp+100h] [rbp-108h]
  __int128 v39; // [rsp+110h] [rbp-F8h] BYREF
  __int64 v40; // [rsp+120h] [rbp-E8h]
  __int64 v41; // [rsp+128h] [rbp-E0h]
  void *v42; // [rsp+130h] [rbp-D8h] BYREF
  __int64 (__fastcall *v43)(); // [rsp+138h] [rbp-D0h]
  __int128 *v44; // [rsp+140h] [rbp-C8h]
  __int64 v45; // [rsp+148h] [rbp-C0h]
  __int64 v46; // [rsp+150h] [rbp-B8h]
  _QWORD v47[3]; // [rsp+160h] [rbp-A8h] BYREF
  _BYTE v48[24]; // [rsp+178h] [rbp-90h] BYREF
  _BYTE v49[24]; // [rsp+190h] [rbp-78h] BYREF
  _BYTE v50[24]; // [rsp+1A8h] [rbp-60h] BYREF
  _BYTE v51[72]; // [rsp+1C0h] [rbp-48h] BYREF

  *(_QWORD *)&v19 = 0LL;
  *((_QWORD *)&v19 + 1) = 1LL;
  v20 = 0LL;
  v42 = a2;
  v43 = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v21 = &off_251A90;
  *((_QWORD *)&v21 + 1) = 2LL;
  v22 = &v42;
  v23 = 1uLL;
  v14 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v19, &v21);
  core::result::Result<T,E>::unwrap(v14, &off_251B30);
  uu_ptx::prepare_line_chunks((unsigned int)&v21, (_DWORD)a2, a3, a4, a5, a6, a7, a8, a9, a10);
  v32 = (__int64)v22;
  v31 = v21;
  v34 = v24;
  v33 = v23;
  v36 = v26;
  v35 = v25;
  v38 = v28;
  v37 = v27;
  v40 = v30;
  v39 = v29;
  uu_ptx::format_tex_field((__int64)v48, *((__int64 *)&v21 + 1), (__int64)v22);
  uu_ptx::format_tex_field((__int64)v49, *((__int64 *)&v33 + 1), (__int64)v34);
  uu_ptx::format_tex_field((__int64)v50, *((__int64 *)&v35 + 1), (__int64)v36);
  v41 = a1;
  uu_ptx::format_tex_field((__int64)v51, *((__int64 *)&v37 + 1), v38);
  uu_ptx::format_tex_field((__int64)v47, *((__int64 *)&v39 + 1), v40);
  *(_QWORD *)&v21 = v48;
  *((_QWORD *)&v21 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  v22 = (void **)v49;
  *(_QWORD *)&v23 = <alloc::string::String as core::fmt::Display>::fmt;
  *((_QWORD *)&v23 + 1) = v50;
  v24 = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v25 = v51;
  *((_QWORD *)&v25 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  v26 = v47;
  *(_QWORD *)&v27 = <alloc::string::String as core::fmt::Display>::fmt;
  v42 = &off_251AB0;
  v43 = (__int64 (__fastcall *)())&byte_6;
  v46 = 0LL;
  v44 = &v21;
  v45 = 5LL;
  v15 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v19, &v42);
  core::result::Result<T,E>::unwrap(v15, &off_251B48);
  core::ptr::drop_in_place<alloc::string::String>(v47);
  core::ptr::drop_in_place<alloc::string::String>(v51);
  core::ptr::drop_in_place<alloc::string::String>(v50);
  core::ptr::drop_in_place<alloc::string::String>(v49);
  core::ptr::drop_in_place<alloc::string::String>(v48);
  v16 = v41;
  if ( a2[89] || a2[90] == 1 )
  {
    uu_ptx::format_tex_field((__int64)&v42, a9, a10);
    v47[0] = &v42;
    v47[1] = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v21 = &off_251B10;
    *((_QWORD *)&v21 + 1) = 2LL;
    v22 = (void **)v47;
    v23 = 1uLL;
    v17 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v19, &v21);
    core::result::Result<T,E>::unwrap(v17, &off_251B60);
    core::ptr::drop_in_place<alloc::string::String>(&v42);
  }
  *(_QWORD *)(v16 + 16) = v20;
  *(_OWORD *)v16 = v19;
  core::ptr::drop_in_place<alloc::string::String>(&v39);
  core::ptr::drop_in_place<alloc::string::String>(&v37);
  core::ptr::drop_in_place<alloc::string::String>(&v35);
  core::ptr::drop_in_place<alloc::string::String>(&v33);
  return core::ptr::drop_in_place<alloc::string::String>(&v31);
}