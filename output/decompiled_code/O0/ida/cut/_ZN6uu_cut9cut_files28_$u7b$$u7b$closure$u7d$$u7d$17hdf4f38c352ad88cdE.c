_OWORD *__fastcall uu_cut::cut_files::{{closure}}(_QWORD *a1, unsigned int a2)
{
  _QWORD *v2; // r14
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int8 v5; // bl
  void (__fastcall **v6)(__int64); // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  const char *v9; // rsi
  __int64 v10; // rax
  _OWORD *v11; // rax
  _OWORD *v12; // rbx
  __int128 v13; // xmm0
  void (__fastcall **v14)(__int64); // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  char v17; // dl
  unsigned __int8 v18; // bl
  __int64 v19; // rdi
  const char *v20; // r15
  __int64 v21; // r14
  void (__fastcall **v22)(__int64); // rdx
  __int64 v23; // rax
  _OWORD *v24; // rax
  __int128 v25; // xmm0
  void (__fastcall *v26)(__int64); // rcx
  const char *v27; // r15
  __int64 v28; // r14
  __int64 v29; // rax
  void (__fastcall **v30)(__int64); // rdx
  const char *v31; // rcx
  __int64 v32; // rax
  _OWORD *v33; // rax
  __int128 v34; // xmm0
  void (__fastcall **v35)(__int64); // rax
  void (__fastcall **v36)(__int64); // rdx
  __int64 v37; // rax
  _OWORD *v38; // rax
  __int128 v39; // xmm0
  void (__fastcall **v40)(__int64); // rax
  void (__fastcall *v41)(__int64); // rcx
  int v42; // edi
  void (__fastcall **v44)(__int64); // rax
  char v45; // [rsp+Eh] [rbp-13Ah] BYREF
  unsigned __int8 v46; // [rsp+Fh] [rbp-139h] BYREF
  __int64 v47; // [rsp+10h] [rbp-138h] BYREF
  void (__fastcall **v48)(__int64); // [rsp+18h] [rbp-130h]
  __int64 v49; // [rsp+20h] [rbp-128h] BYREF
  __int128 v50; // [rsp+28h] [rbp-120h] BYREF
  __int64 v51; // [rsp+38h] [rbp-110h]
  __int128 v52; // [rsp+40h] [rbp-108h] BYREF
  __int128 v53; // [rsp+50h] [rbp-F8h]
  __int64 v54; // [rsp+60h] [rbp-E8h] BYREF
  unsigned __int64 v55; // [rsp+68h] [rbp-E0h]
  _QWORD *v56; // [rsp+70h] [rbp-D8h] BYREF
  char *v57; // [rsp+78h] [rbp-D0h]
  __int64 *v58; // [rsp+80h] [rbp-C8h]
  char *v59; // [rsp+88h] [rbp-C0h]
  __int64 *v60; // [rsp+90h] [rbp-B8h]
  int fd; // [rsp+98h] [rbp-B0h]
  __int64 v62; // [rsp+A0h] [rbp-A8h] BYREF
  char v63[8]; // [rsp+A8h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+B0h] [rbp-98h]
  __int128 *v65; // [rsp+C0h] [rbp-88h]
  __int64 (__fastcall **v66)(); // [rsp+C8h] [rbp-80h]
  __int64 v67; // [rsp+D0h] [rbp-78h]
  char v68; // [rsp+D8h] [rbp-70h]
  __int64 *v69; // [rsp+E0h] [rbp-68h] BYREF
  __int64 *v70; // [rsp+E8h] [rbp-60h]
  __int64 *v71; // [rsp+F0h] [rbp-58h]
  char *v72; // [rsp+F8h] [rbp-50h]
  __int64 *v73; // [rsp+100h] [rbp-48h]
  const char *v74; // [rsp+108h] [rbp-40h]
  __int64 v75; // [rsp+110h] [rbp-38h]
  _QWORD v76[6]; // [rsp+118h] [rbp-30h] BYREF

  v2 = (_QWORD *)*a1;
  if ( *(_QWORD *)*a1 < 2uLL )
  {
    v3 = v2[8];
    if ( v3 )
    {
      if ( (v3 & 7) == 0 )
      {
        v4 = v2[9];
        if ( v4 <= 0x7FFFFFFFFFFFFFFLL )
        {
          v54 = v2[8];
          v55 = v4;
          v5 = *((_BYTE *)v2 + 48);
          LOBYTE(v49) = v5;
          std::io::buffered::bufreader::BufReader<R>::with_capacity(&v56, 0x2000LL, a2);
          v47 = uu_cut::stdout_writer();
          v48 = v6;
          v7 = v2[1];
          v8 = 1LL;
          if ( v7 )
            v8 = v2[2];
          v9 = asc_1FD1C;
          if ( v7 )
            v9 = (const char *)v2[1];
          v69 = &v54;
          v70 = &v47;
          v71 = (__int64 *)v9;
          v72 = (char *)v8;
          v73 = v2 + 1;
          v74 = (const char *)&v49;
          LOBYTE(v62) = v5;
          v10 = bstr::io::BufReadExt::for_byte_record_with_terminator(&v56, v5, &v69, &v62);
          if ( v10 )
          {
            v76[0] = v10;
            *(_QWORD *)&v50 = 0LL;
            *((_QWORD *)&v50 + 1) = 1LL;
            v51 = 0LL;
            v67 = 32LL;
            v68 = 3;
            v62 = 0LL;
            v64 = 0LL;
            v65 = &v50;
            v66 = &anon_f907210316a4f48a9c7de5c93e2a79ff_5_llvm_5503381581801417789;
            if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(v76, &v62) )
              core::result::unwrap_failed(
                anon_f907210316a4f48a9c7de5c93e2a79ff_7_llvm_5503381581801417789,
                55LL,
                &v52,
                &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
                &anon_f907210316a4f48a9c7de5c93e2a79ff_9_llvm_5503381581801417789);
            *(_QWORD *)&v53 = v51;
            v52 = v50;
            DWORD2(v53) = 1;
            v11 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
            v12 = v11;
            if ( !v11 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            v13 = v52;
            v11[1] = v53;
            *v11 = v13;
            std::io::error::repr_bitpacked::decode_repr(&v62, v76[0]);
            if ( (unsigned __int8)v62 >= 3u )
              core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v63);
            v14 = v48;
            if ( !*v48 )
              goto LABEL_42;
            (*v48)(v47);
LABEL_41:
            v14 = v48;
LABEL_42:
            if ( v14[1] )
              _rust_dealloc(v47);
            if ( v57 )
              _rust_dealloc(v56);
LABEL_69:
            std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd);
            v42 = fd;
            goto LABEL_70;
          }
          v35 = v48;
          if ( *v48 )
          {
            (*v48)(v47);
LABEL_63:
            v35 = v48;
          }
LABEL_64:
          if ( v35[1] )
            _rust_dealloc(v47);
          if ( v57 )
            _rust_dealloc(v56);
          v12 = 0LL;
          goto LABEL_69;
        }
      }
    }
LABEL_79:
    core::panicking::panic_nounwind(anon_8a413ea3e55ef2f27523b53f9db0d00f_41_llvm_16715495509781371082, 162LL);
  }
  v15 = v2[8];
  if ( !v15 )
    goto LABEL_79;
  if ( (v15 & 7) != 0 )
    goto LABEL_79;
  v16 = v2[9];
  if ( v16 > 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_79;
  v17 = *((_BYTE *)v2 + 40);
  if ( v17 == 2 )
    core::option::unwrap_failed(&off_11AD40);
  v18 = *((_BYTE *)v2 + 48);
  if ( !v2[3] )
  {
    v27 = (const char *)v2[1];
    v28 = v2[2];
    v54 = v15;
    v55 = v16;
    v45 = v17 & 1;
    v46 = v18;
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&v56, 0x2000LL, a2);
    v29 = uu_cut::stdout_writer();
    if ( !v27 )
      v28 = 1LL;
    v31 = asc_1FD1C;
    if ( v27 )
      v31 = v27;
    v47 = v29;
    v48 = v30;
    v69 = (__int64 *)&v52;
    v70 = (__int64 *)&v45;
    v71 = &v47;
    v72 = (char *)&v46;
    v73 = &v54;
    v74 = v31;
    v75 = v28;
    v32 = bstr::io::BufReadExt::for_byte_record_with_terminator(&v56, v18, &v69);
    if ( v32 )
    {
      v49 = v32;
      *(_QWORD *)&v50 = 0LL;
      *((_QWORD *)&v50 + 1) = 1LL;
      v51 = 0LL;
      v67 = 32LL;
      v68 = 3;
      v62 = 0LL;
      v64 = 0LL;
      v65 = &v50;
      v66 = &anon_f907210316a4f48a9c7de5c93e2a79ff_5_llvm_5503381581801417789;
      if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v49, &v62) )
        core::result::unwrap_failed(
          anon_f907210316a4f48a9c7de5c93e2a79ff_7_llvm_5503381581801417789,
          55LL,
          &v52,
          &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
          &anon_f907210316a4f48a9c7de5c93e2a79ff_9_llvm_5503381581801417789);
      *(_QWORD *)&v53 = v51;
      v52 = v50;
      DWORD2(v53) = 1;
      v33 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      v12 = v33;
      if ( !v33 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v34 = v52;
      v33[1] = v53;
      *v33 = v34;
      std::io::error::repr_bitpacked::decode_repr(&v62, v49);
      if ( (unsigned __int8)v62 >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v63);
      v14 = v48;
      v26 = *v48;
      if ( !*v48 )
        goto LABEL_42;
LABEL_40:
      v26(v47);
      goto LABEL_41;
    }
    v35 = v48;
    v41 = *v48;
    if ( !*v48 )
      goto LABEL_64;
LABEL_62:
    v41(v47);
    goto LABEL_63;
  }
  v19 = v2[4];
  if ( !v19 )
    core::panicking::panic(
      anon_8a413ea3e55ef2f27523b53f9db0d00f_56_llvm_16715495509781371082,
      36LL,
      &anon_8a413ea3e55ef2f27523b53f9db0d00f_58_llvm_16715495509781371082);
  v76[0] = v2[3];
  v76[1] = v19;
  v20 = (const char *)v2[1];
  if ( v20 )
  {
    v21 = v2[2];
    v54 = v15;
    v55 = v16;
    v45 = v17 & 1;
    v46 = v18;
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&v56, 0x2000LL, a2);
    v47 = uu_cut::stdout_writer();
    v48 = v22;
    v69 = v76;
    v70 = (__int64 *)&v45;
    v71 = &v47;
    v72 = (char *)&v46;
    v73 = &v54;
    v74 = v20;
    v75 = v21;
    v23 = bstr::io::BufReadExt::for_byte_record_with_terminator(&v56, v18, &v69);
    if ( v23 )
    {
      v49 = v23;
      *(_QWORD *)&v50 = 0LL;
      *((_QWORD *)&v50 + 1) = 1LL;
      v51 = 0LL;
      v67 = 32LL;
      v68 = 3;
      v62 = 0LL;
      v64 = 0LL;
      v65 = &v50;
      v66 = &anon_f907210316a4f48a9c7de5c93e2a79ff_5_llvm_5503381581801417789;
      if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v49, &v62) )
        core::result::unwrap_failed(
          anon_f907210316a4f48a9c7de5c93e2a79ff_7_llvm_5503381581801417789,
          55LL,
          &v52,
          &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
          &anon_f907210316a4f48a9c7de5c93e2a79ff_9_llvm_5503381581801417789);
      *(_QWORD *)&v53 = v51;
      v52 = v50;
      DWORD2(v53) = 1;
      v24 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      v12 = v24;
      if ( !v24 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v25 = v52;
      v24[1] = v53;
      *v24 = v25;
      std::io::error::repr_bitpacked::decode_repr(&v62, v49);
      if ( (unsigned __int8)v62 >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v63);
      v14 = v48;
      v26 = *v48;
      if ( !*v48 )
        goto LABEL_42;
      goto LABEL_40;
    }
    v35 = v48;
    v41 = *v48;
    if ( !*v48 )
      goto LABEL_64;
    goto LABEL_62;
  }
  v54 = v15;
  v55 = v16;
  v45 = v17 & 1;
  v46 = v18;
  std::io::buffered::bufreader::BufReader<R>::with_capacity(&v69, 0x2000LL, a2);
  v47 = uu_cut::stdout_writer();
  v48 = v36;
  v56 = v76;
  v57 = &v45;
  v58 = &v47;
  v59 = (char *)&v46;
  v60 = &v54;
  v37 = bstr::io::BufReadExt::for_byte_record_with_terminator(&v69, v18, &v56);
  if ( v37 )
  {
    v49 = v37;
    *(_QWORD *)&v50 = 0LL;
    *((_QWORD *)&v50 + 1) = 1LL;
    v51 = 0LL;
    v67 = 32LL;
    v68 = 3;
    v62 = 0LL;
    v64 = 0LL;
    v65 = &v50;
    v66 = &anon_f907210316a4f48a9c7de5c93e2a79ff_5_llvm_5503381581801417789;
    if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v49, &v62) )
      core::result::unwrap_failed(
        anon_f907210316a4f48a9c7de5c93e2a79ff_7_llvm_5503381581801417789,
        55LL,
        &v52,
        &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
        &anon_f907210316a4f48a9c7de5c93e2a79ff_9_llvm_5503381581801417789);
    *(_QWORD *)&v53 = v51;
    v52 = v50;
    DWORD2(v53) = 1;
    v38 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    v12 = v38;
    if ( !v38 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v39 = v52;
    v38[1] = v53;
    *v38 = v39;
    std::io::error::repr_bitpacked::decode_repr(&v62, v49);
    if ( (unsigned __int8)v62 >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v63);
    v40 = v48;
    if ( *v48 )
    {
      (*v48)(v47);
      v40 = v48;
    }
    if ( v40[1] )
      _rust_dealloc(v47);
    if ( v70 )
      _rust_dealloc(v69);
  }
  else
  {
    v44 = v48;
    if ( *v48 )
    {
      (*v48)(v47);
      v44 = v48;
    }
    if ( v44[1] )
      _rust_dealloc(v47);
    if ( v70 )
      _rust_dealloc(v69);
    v12 = 0LL;
  }
  std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)v74);
  v42 = (int)v74;
LABEL_70:
  close(v42);
  return v12;
}
