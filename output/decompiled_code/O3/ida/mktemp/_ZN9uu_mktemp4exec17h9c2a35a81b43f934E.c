        char a9)
{
  __int64 v12; // r12
  _OWORD *v13; // rax
  __int64 v14; // r14
  _OWORD *v15; // r13
  __int128 v16; // xmm0
  __int64 v17; // r14
  __int64 v18; // r12
  _OWORD *v19; // r12
  __int64 (__fastcall **v20)(); // r14
  __int64 v21; // rax
  _OWORD *v22; // rax
  __int128 v23; // xmm0
  int v24; // r13d
  void *v25; // rbp
  __int64 v26; // r9
  __int128 v27; // kr10_16
  void *v28; // r15
  void *v29; // r13
  size_t v30; // r14
  __int64 v31; // rax
  _OWORD *v32; // rax
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int64 v35; // rdi
  __int64 v36; // r9
  __int64 v37; // r14
  __int64 v38; // rbp
  __int64 v39; // r12
  void *v40; // r15
  void *v41; // r13
  size_t v42; // r14
  _DWORD *v43; // rax
  _OWORD *v44; // rax
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int64 v48; // rax
  __int64 v49; // r9
  char **v50; // rdi
  char v51; // [rsp+7h] [rbp-171h] BYREF
  __int64 v52; // [rsp+8h] [rbp-170h]
  __int128 v53; // [rsp+10h] [rbp-168h] BYREF
  __int128 v54; // [rsp+20h] [rbp-158h]
  __int128 v55; // [rsp+30h] [rbp-148h]
  __int64 v56; // [rsp+40h] [rbp-138h]
  char v57; // [rsp+48h] [rbp-130h]
  __int128 v58; // [rsp+50h] [rbp-128h] BYREF
  __int64 v59; // [rsp+60h] [rbp-118h]
  void *v60; // [rsp+70h] [rbp-108h] BYREF
  void *src; // [rsp+78h] [rbp-100h]
  size_t n; // [rsp+80h] [rbp-F8h]
  __int64 v63; // [rsp+88h] [rbp-F0h]
  __int64 v64; // [rsp+90h] [rbp-E8h]
  _BYTE v65[24]; // [rsp+A0h] [rbp-D8h] BYREF
  int fd; // [rsp+B8h] [rbp-C0h]
  __int64 v67; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v68; // [rsp+C8h] [rbp-B0h]
  __int64 v69; // [rsp+D0h] [rbp-A8h]
  __int64 v70; // [rsp+D8h] [rbp-A0h] BYREF
  __int64 v71; // [rsp+E0h] [rbp-98h]
  __int64 v72; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v73; // [rsp+F0h] [rbp-88h]
  int v74; // [rsp+F8h] [rbp-80h] BYREF
  __int64 v75; // [rsp+100h] [rbp-78h]
  __int64 v76; // [rsp+108h] [rbp-70h]
  __int64 v77; // [rsp+110h] [rbp-68h]
  __int64 v78; // [rsp+118h] [rbp-60h]
  __int64 v79; // [rsp+120h] [rbp-58h]
  __int16 v80; // [rsp+128h] [rbp-50h]
  __int128 v81; // [rsp+130h] [rbp-48h] BYREF
  __int64 v82; // [rsp+140h] [rbp-38h]

  if ( a9 )
  {
    v70 = a4;
    v71 = a5;
    v72 = a7;
    v73 = a8;
    v80 = 0;
    v74 = 0;
    v75 = a4;
    v76 = a5;
    v79 = a6;
    v77 = a7;
    v78 = a8;
    v52 = a3;
    tempfile::Builder::tempdir_in(&v67, &v74, a2, a3);
    if ( (_BYTE)v69 == 2 )
    {
      v12 = v67;
      if ( (unsigned __int8)std::io::error::Error::kind(v67) )
      {
        *(_QWORD *)&v53 = 0x8000000000000000LL;
        *((_QWORD *)&v54 + 1) = v12;
        v13 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v13 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_9:
        v15 = v13;
        v16 = v53;
        v13[1] = v54;
        *v13 = v16;
LABEL_14:
        v20 = &anon_9b9ba72dabd212696498d24b7f543cb0_73_llvm_3928628070634382108;
LABEL_39:
        a1[1] = v15;
        a1[2] = v20;
        *a1 = 0x8000000000000000LL;
        return a1;
      }
      alloc::str::<impl str>::repeat(v65, asc_1B0B9, 1LL, a6);
      *(_QWORD *)&v53 = &v70;
      *((_QWORD *)&v53 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v54 = v65;
      *((_QWORD *)&v54 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v55 = &v72;
      *((_QWORD *)&v55 + 1) = <&T as core::fmt::Display>::fmt;
      v60 = &unk_1B0C0;
      src = &dword_0 + 3;
      v64 = 0LL;
      n = (size_t)&v53;
      v63 = 3LL;
      alloc::fmt::format::format_inner(&v58, &v60);
      if ( *(_QWORD *)v65 )
        _rust_dealloc(*(_QWORD *)&v65[8], *(_QWORD *)v65, 1LL);
      v27 = v58;
      std::path::Path::_join(v65, a2, v52, *((_QWORD *)&v58 + 1), v59, v26);
      if ( (_QWORD)v27 )
        _rust_dealloc(*((_QWORD *)&v27 + 1), v27, 1LL);
      v52 = *(_QWORD *)&v65[8];
      v58 = *(_OWORD *)&v65[8];
      v60 = 0LL;
      src = &dword_0 + 1;
      n = 0LL;
      v56 = 32LL;
      v57 = 3;
      *(_QWORD *)&v53 = 0LL;
      *(_QWORD *)&v54 = 0LL;
      *(_QWORD *)&v55 = &v60;
      *((_QWORD *)&v55 + 1) = &off_F0000;
      if ( (unsigned __int8)<std::path::Display as core::fmt::Display>::fmt(&v58, &v53) )
        core::result::unwrap_failed(aADisplayImplem, 55LL, &v51, &unk_F00A8, &off_F0030);
      v28 = v60;
      v29 = src;
      v30 = n;
      v31 = _rust_alloc(9LL, 1LL);
      if ( !v31 )
        alloc::raw_vec::handle_error(1LL, 9LL);
      *(_QWORD *)v31 = 0x726F746365726964LL;
      *(_BYTE *)(v31 + 8) = 121;
      *((_QWORD *)&v54 + 1) = v28;
      *(_QWORD *)&v55 = v29;
      *((_QWORD *)&v55 + 1) = v30;
      *(_QWORD *)&v53 = 9LL;
      *((_QWORD *)&v53 + 1) = v31;
      *(_QWORD *)&v54 = 9LL;
      v32 = (_OWORD *)_rust_alloc(48LL, 8LL);
      if ( !v32 )
        alloc::alloc::handle_alloc_error(8LL, 48LL);
      v15 = v32;
      v33 = v53;
      v34 = v54;
      v32[2] = v55;
      v32[1] = v34;
      *v32 = v33;
      if ( *(_QWORD *)v65 )
        _rust_dealloc(v52, *(_QWORD *)v65, 1LL);
      v35 = v12;
      goto LABEL_37;
    }
    v17 = v67;
    v18 = v68;
    *(_QWORD *)&v53 = 0LL;
    *((_QWORD *)&v53 + 1) = 1LL;
    *(_QWORD *)&v54 = 0LL;
    std::ffi::os_str::OsString::into_boxed_os_str(&v53);
    std::path::Path::into_path_buf(&v60, v17, v18);
    v19 = src;
    v20 = (__int64 (__fastcall **)())n;
    v21 = std::sys::pal::unix::fs::set_perm(src, n);
    if ( v21 )
    {
      *(_QWORD *)&v53 = 0x8000000000000000LL;
      *((_QWORD *)&v54 + 1) = v21;
      v22 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v22 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v15 = v22;
      v23 = v53;
      v22[1] = v54;
      *v22 = v23;
      if ( v60 )
        _rust_dealloc(v19, v60, 1LL);
      goto LABEL_14;
    }
    v25 = v60;
    v15 = v19;
    if ( v60 == (void *)0x8000000000000000LL )
      goto LABEL_39;
  }
  else
  {
    v70 = a4;
    v71 = a5;
    v72 = a7;
    v73 = a8;
    v80 = 0;
    v74 = 0;
    v75 = a4;
    v76 = a5;
    v79 = a6;
    v77 = a7;
    v78 = a8;
    tempfile::util::create_helper((unsigned int)v65, a2, a3, a4, a5, a7, a8, a6, (__int64)&v74);
    if ( v65[16] == 2 )
    {
      v14 = *(_QWORD *)v65;
      if ( (unsigned __int8)std::io::error::Error::kind(*(_QWORD *)v65) )
      {
        *(_QWORD *)&v53 = 0x8000000000000000LL;
        *((_QWORD *)&v54 + 1) = v14;
        v13 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v13 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        goto LABEL_9;
      }
      v52 = v14;
      alloc::str::<impl str>::repeat(&v58, asc_1B0B9, 1LL, a6);
      *(_QWORD *)&v53 = &v70;
      *((_QWORD *)&v53 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v54 = &v58;
      *((_QWORD *)&v54 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v55 = &v72;
      *((_QWORD *)&v55 + 1) = <&T as core::fmt::Display>::fmt;
      v60 = &unk_1B0C0;
      src = &dword_0 + 3;
      v64 = 0LL;
      n = (size_t)&v53;
      v63 = 3LL;
      alloc::fmt::format::format_inner(&v67, &v60);
      if ( (_QWORD)v58 )
        _rust_dealloc(*((_QWORD *)&v58 + 1), v58, 1LL);
      v37 = v67;
      v38 = v68;
      std::path::Path::_join(&v58, a2, a3, v68, v69, v36);
      if ( v37 )
        _rust_dealloc(v38, v37, 1LL);
      v39 = *((_QWORD *)&v58 + 1);
      v67 = *((_QWORD *)&v58 + 1);
      v68 = v59;
      v60 = 0LL;
      src = &dword_0 + 1;
      n = 0LL;
      v56 = 32LL;
      v57 = 3;
      *(_QWORD *)&v53 = 0LL;
      *(_QWORD *)&v54 = 0LL;
      *(_QWORD *)&v55 = &v60;
      *((_QWORD *)&v55 + 1) = &off_F0000;
      if ( (unsigned __int8)<std::path::Display as core::fmt::Display>::fmt(&v67, &v53) )
        core::result::unwrap_failed(aADisplayImplem, 55LL, &v51, &unk_F00A8, &off_F0030);
      v40 = v60;
      v41 = src;
      v42 = n;
      v43 = (_DWORD *)_rust_alloc(4LL, 1LL);
      if ( !v43 )
        alloc::raw_vec::handle_error(1LL, 4LL);
      *v43 = 1701603686;
      *((_QWORD *)&v54 + 1) = v40;
      *(_QWORD *)&v55 = v41;
      *((_QWORD *)&v55 + 1) = v42;
      *(_QWORD *)&v53 = 4LL;
      *((_QWORD *)&v53 + 1) = v43;
      *(_QWORD *)&v54 = 4LL;
      v44 = (_OWORD *)_rust_alloc(48LL, 8LL);
      if ( !v44 )
        alloc::alloc::handle_alloc_error(8LL, 48LL);
      v15 = v44;
      v45 = v53;
      v46 = v54;
      v44[2] = v55;
      v44[1] = v46;
      *v44 = v45;
      if ( (_QWORD)v58 )
        _rust_dealloc(v39, v58, 1LL);
      v35 = v52;
LABEL_37:
      core::ptr::drop_in_place<std::io::error::Error>(v35);
      v20 = &off_F02E8;
      goto LABEL_39;
    }
    v59 = *(_QWORD *)&v65[16];
    v58 = *(_OWORD *)v65;
    v24 = fd;
    v60 = 0LL;
    src = &dword_0 + 1;
    n = 0LL;
    std::ffi::os_str::OsString::into_boxed_os_str(&v60);
    v52 = a3;
    std::path::Path::into_path_buf(&v53, v58, *((_QWORD *)&v58 + 1));
    v19 = (_OWORD *)*((_QWORD *)&v53 + 1);
    v25 = (void *)v53;
    v20 = (__int64 (__fastcall **)())v54;
    close(v24);
    v15 = v19;
    if ( v25 == (void *)0x8000000000000000LL )
      goto LABEL_39;
  }
  v48 = std::path::Path::file_name(v19, v20);
  if ( !v48 )
  {
    v50 = &off_F0358;
    goto LABEL_47;
  }
  std::sys::os_str::bytes::Slice::to_str(&v53, v48);
  if ( (_QWORD)v53 )
  {
    v50 = &off_F0370;
LABEL_47:
    core::option::unwrap_failed(v50);
  }
  std::path::Path::_join(&v81, a2, v52, *((_QWORD *)&v53 + 1), v54, v49);
  a1[2] = v82;
  *(_OWORD *)a1 = v81;
  if ( v25 )
    _rust_dealloc(v19, v25, 1LL);
  return a1;
}
