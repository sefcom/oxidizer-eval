        char a8)
{
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  void *v15; // r12
  size_t v16; // r13
  __int64 v17; // rax
  _OWORD *v18; // rax
  _OWORD *v19; // r12
  __int128 v20; // xmm0
  __int64 (__fastcall **v21)(); // r13
  unsigned int v22; // ebp
  __int64 v23; // r15
  _OWORD *v24; // rax
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // r15
  char **v30; // rdi
  char v31; // al
  char v32; // al
  __int64 v33; // r12
  __int64 v34; // r13
  __int128 v35; // kr20_16
  __int64 v36; // rbp
  __int64 v37; // r12
  __int64 v38; // r13
  _OWORD *v39; // rax
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int64 v43; // r12
  __int64 v44; // r13
  __int128 v45; // kr30_16
  __int64 v46; // rbp
  __int64 v47; // r12
  _DWORD *v48; // r13
  _OWORD *v49; // rax
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  _QWORD *result; // rax
  char v53; // [rsp+7h] [rbp-281h] BYREF
  __int128 v54; // [rsp+8h] [rbp-280h] BYREF
  __int128 v55; // [rsp+18h] [rbp-270h]
  __int128 *v56; // [rsp+28h] [rbp-260h]
  __int64 (__fastcall **v57)(); // [rsp+30h] [rbp-258h]
  __int64 v58; // [rsp+38h] [rbp-250h]
  char v59; // [rsp+40h] [rbp-248h]
  __int64 v60; // [rsp+48h] [rbp-240h]
  __int128 v61; // [rsp+50h] [rbp-238h] BYREF
  __int64 v62; // [rsp+60h] [rbp-228h]
  __int64 v63; // [rsp+70h] [rbp-218h] BYREF
  void *src; // [rsp+78h] [rbp-210h]
  size_t n; // [rsp+80h] [rbp-208h]
  __int64 v66; // [rsp+88h] [rbp-200h] BYREF
  __int64 v67; // [rsp+90h] [rbp-1F8h]
  char v68; // [rsp+98h] [rbp-1F0h]
  __int128 v69; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v70; // [rsp+B0h] [rbp-1D8h]
  int fd; // [rsp+B8h] [rbp-1D0h]
  __int128 v72; // [rsp+C0h] [rbp-1C8h]
  __m256i v73; // [rsp+D0h] [rbp-1B8h]
  __int64 v74; // [rsp+F0h] [rbp-198h]
  __int128 v75; // [rsp+F8h] [rbp-190h] BYREF
  __int64 v76; // [rsp+108h] [rbp-180h]
  void *v77; // [rsp+110h] [rbp-178h] BYREF
  size_t v78; // [rsp+118h] [rbp-170h]
  __int128 v79; // [rsp+120h] [rbp-168h] BYREF
  __int128 v80; // [rsp+130h] [rbp-158h]
  __int128 v81; // [rsp+140h] [rbp-148h]
  __int128 v82; // [rsp+158h] [rbp-130h] BYREF
  __int128 v83; // [rsp+168h] [rbp-120h]
  unsigned int v84; // [rsp+178h] [rbp-110h]
  __int64 v85; // [rsp+180h] [rbp-108h] BYREF
  __int64 v86; // [rsp+188h] [rbp-100h]
  __int64 v87; // [rsp+190h] [rbp-F8h]
  void **v88; // [rsp+198h] [rbp-F0h] BYREF
  __int64 (__fastcall *v89)(); // [rsp+1A0h] [rbp-E8h]
  __int64 *v90; // [rsp+1A8h] [rbp-E0h]
  __int64 (__fastcall *v91)(); // [rsp+1B0h] [rbp-D8h]
  __int128 *v92; // [rsp+1B8h] [rbp-D0h]
  __int64 (__fastcall *v93)(); // [rsp+1C0h] [rbp-C8h]
  int v94; // [rsp+1C8h] [rbp-C0h] BYREF
  void *v95; // [rsp+1D0h] [rbp-B8h]
  size_t v96; // [rsp+1D8h] [rbp-B0h]
  __int128 v97; // [rsp+1E0h] [rbp-A8h]
  __int64 v98; // [rsp+1F0h] [rbp-98h]
  __int16 v99; // [rsp+1F8h] [rbp-90h]
  __int128 v100; // [rsp+200h] [rbp-88h] BYREF
  __int64 v101; // [rsp+210h] [rbp-78h]
  _QWORD v102[3]; // [rsp+218h] [rbp-70h] BYREF
  _QWORD v103[2]; // [rsp+230h] [rbp-58h] BYREF
  __int128 v104; // [rsp+240h] [rbp-48h] BYREF
  __int64 v105; // [rsp+250h] [rbp-38h]

  if ( a8 )
  {
    v77 = a4;
    v78 = a5;
    v100 = a7;
    v99 = 0;
    v94 = 0;
    v95 = a4;
    v96 = a5;
    v98 = a6;
    v97 = a7;
    tempfile::Builder::tempdir_in(&v66, &v94, a2, a3);
    v11 = v66;
    if ( v68 == 2 )
    {
      switch ( v66 & 3 )
      {
        case 0LL:
          v12 = 16LL;
          goto LABEL_31;
        case 1LL:
          v12 = 15LL;
LABEL_31:
          v31 = *(_BYTE *)(v66 + v12);
          break;
        case 2LL:
          v60 = a2;
          v31 = std::sys::pal::unix::decode_error_kind(HIDWORD(v66));
          break;
        case 3LL:
          v60 = a2;
          v31 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(v66));
          if ( v31 == 41 )
            core::hint::unreachable_unchecked::precondition_check();
          return result;
      }
      if ( v31 )
      {
        *(_QWORD *)&v54 = 0x8000000000000000LL;
        *((_QWORD *)&v55 + 1) = v66;
        v19 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
        if ( !v19 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_53:
        v42 = v54;
        v19[1] = v55;
        *v19 = v42;
        v21 = &anon_f907210316a4f48a9c7de5c93e2a79ff_287_llvm_5503381581801417789;
        goto LABEL_68;
      }
      *(_QWORD *)&v75 = v66;
      alloc::str::<impl str>::repeat(&v69, asc_21A08, 1LL, a6);
      v88 = &v77;
      v89 = <&T as core::fmt::Display>::fmt;
      v90 = (__int64 *)&v69;
      v91 = <alloc::string::String as core::fmt::Display>::fmt;
      v92 = &v100;
      v93 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v54 = &unk_219D8;
      *((_QWORD *)&v54 + 1) = 3LL;
      *(_QWORD *)&v55 = &v88;
      *((_QWORD *)&v55 + 1) = 3LL;
      v56 = 0LL;
      alloc::fmt::format::format_inner(&v61, &v54);
      if ( (_QWORD)v69 )
        _rust_dealloc(*((_QWORD *)&v69 + 1), v69, 1LL);
      v33 = *((_QWORD *)&v61 + 1);
      if ( *((_QWORD *)&v61 + 1) && v62 >= 0 )
      {
        v34 = v61;
        std::path::Path::_join(&v82, a2, a3, *((_QWORD *)&v61 + 1), v62);
        if ( v34 )
          _rust_dealloc(v33, v34, 1LL);
        if ( *((_QWORD *)&v82 + 1) && (__int64)v83 >= 0 )
        {
          v85 = *((_QWORD *)&v82 + 1);
          v86 = v83;
          *(_QWORD *)&v79 = 0LL;
          *((_QWORD *)&v79 + 1) = 1LL;
          *(_QWORD *)&v80 = 0LL;
          v58 = 32LL;
          v59 = 3;
          *(_QWORD *)&v54 = 0LL;
          *(_QWORD *)&v55 = 0LL;
          v56 = &v79;
          v57 = &anon_d4b0c354e835dc672480ef32a1a5d569_18_llvm_11877717755312319128;
          if ( (unsigned __int8)<std::path::Display as core::fmt::Display>::fmt(&v85, &v54) )
            core::result::unwrap_failed(
              anon_d4b0c354e835dc672480ef32a1a5d569_19_llvm_11877717755312319128,
              55LL,
              &v53,
              &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
              &anon_d4b0c354e835dc672480ef32a1a5d569_21_llvm_11877717755312319128);
          v35 = v79;
          v36 = v80;
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v54, 9LL, 0LL);
          v37 = *((_QWORD *)&v54 + 1);
          if ( (_QWORD)v54 )
            alloc::raw_vec::handle_error(*((_QWORD *)&v54 + 1), v55);
          v38 = v55;
          core::intrinsics::copy_nonoverlapping::precondition_check(aDirectory, v55, 1LL, 1LL, 9LL);
          *(_QWORD *)v38 = 0x726F746365726964LL;
          *(_BYTE *)(v38 + 8) = 121;
          *(_QWORD *)&v72 = v37;
          *((_QWORD *)&v72 + 1) = v38;
          v73.m256i_i64[0] = 9LL;
          *(_OWORD *)&v73.m256i_u64[1] = v35;
          v73.m256i_i64[3] = v36;
          v39 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 48LL, 0LL);
          v19 = v39;
          if ( !v39 )
            alloc::alloc::handle_alloc_error(8LL, 48LL);
          v40 = v72;
          v41 = *(_OWORD *)v73.m256i_i8;
          v39[2] = *(_OWORD *)&v73.m256i_u64[2];
          v39[1] = v41;
          *v39 = v40;
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v82, 8LL);
          std::io::error::repr_bitpacked::decode_repr(&v54, v75);
          if ( (unsigned __int8)v54 >= 3u )
            core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v54 + 8);
          v21 = &anon_d4b0c354e835dc672480ef32a1a5d569_55_llvm_11877717755312319128;
          goto LABEL_68;
        }
      }
      goto LABEL_77;
    }
    v60 = a2;
    v14 = v67;
    *(_QWORD *)&v54 = 0LL;
    *((_QWORD *)&v54 + 1) = 1LL;
    *(_QWORD *)&v55 = 0LL;
    if ( !std::ffi::os_str::OsString::into_boxed_os_str(&v54) )
      core::panicking::panic_nounwind(anon_2564001a0de771dd00b72f3b26c5d2de_10_llvm_15052666072903451992, 93LL);
    std::path::Path::into_path_buf(&v63, v11, v14);
    v15 = src;
    v16 = n;
    core::slice::raw::from_raw_parts::precondition_check(src, 1LL, 1LL, n);
    v17 = std::sys::pal::unix::fs::set_perm(v15, v16);
    if ( v17 )
    {
      *(_QWORD *)&v54 = 0x8000000000000000LL;
      *((_QWORD *)&v55 + 1) = v17;
      v18 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      v19 = v18;
      if ( !v18 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v20 = v54;
      v18[1] = v55;
      *v18 = v20;
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v63, 8LL);
      v21 = &anon_f907210316a4f48a9c7de5c93e2a79ff_287_llvm_5503381581801417789;
      goto LABEL_68;
    }
    v74 = a3;
    v23 = v63;
    v19 = src;
    v21 = (__int64 (__fastcall **)())n;
    if ( v63 != 0x8000000000000000LL )
      goto LABEL_18;
LABEL_68:
    a1[1] = v19;
    a1[2] = v21;
    *a1 = 0x8000000000000000LL;
    return a1;
  }
  v103[0] = a4;
  v103[1] = a5;
  v75 = a7;
  v99 = 0;
  v94 = 0;
  v95 = a4;
  v96 = a5;
  v98 = a6;
  v97 = a7;
  tempfile::util::create_helper(
    (unsigned int)&v69,
    a2,
    a3,
    (_DWORD)a4,
    a5,
    a7,
    *((__int64 *)&a7 + 1),
    a6,
    (__int64)&v94);
  if ( (_BYTE)v70 == 2 )
  {
    switch ( v69 & 3 )
    {
      case 0LL:
        v13 = 16LL;
        goto LABEL_50;
      case 1LL:
        v13 = 15LL;
LABEL_50:
        v32 = *(_BYTE *)(v69 + v13);
        break;
      case 2LL:
        v32 = std::sys::pal::unix::decode_error_kind(DWORD1(v69));
        break;
      case 3LL:
        v32 = std::io::error::repr_bitpacked::kind_from_prim(DWORD1(v69));
        if ( v32 == 41 )
          core::hint::unreachable_unchecked::precondition_check();
        return result;
    }
    if ( v32 )
    {
      *(_QWORD *)&v54 = 0x8000000000000000LL;
      *((_QWORD *)&v55 + 1) = v69;
      v19 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      if ( !v19 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      goto LABEL_53;
    }
    v76 = v69;
    alloc::str::<impl str>::repeat(&v66, asc_21A08, 1LL, a6);
    v88 = (void **)v103;
    v89 = <&T as core::fmt::Display>::fmt;
    v90 = &v66;
    v91 = <alloc::string::String as core::fmt::Display>::fmt;
    v92 = &v75;
    v93 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v54 = &unk_219D8;
    *((_QWORD *)&v54 + 1) = 3LL;
    *(_QWORD *)&v55 = &v88;
    *((_QWORD *)&v55 + 1) = 3LL;
    v56 = 0LL;
    alloc::fmt::format::format_inner(&v85, &v54);
    if ( v66 )
      _rust_dealloc(v67, v66, 1LL);
    v43 = v86;
    if ( v86 && v87 >= 0 )
    {
      v44 = v85;
      std::path::Path::_join(&v63, a2, a3, v86, v87);
      if ( v44 )
        _rust_dealloc(v43, v44, 1LL);
      if ( src && (n & 0x8000000000000000LL) == 0LL )
      {
        v77 = src;
        v78 = n;
        *(_QWORD *)&v61 = 0LL;
        *((_QWORD *)&v61 + 1) = 1LL;
        v62 = 0LL;
        v58 = 32LL;
        v59 = 3;
        *(_QWORD *)&v54 = 0LL;
        *(_QWORD *)&v55 = 0LL;
        v56 = &v61;
        v57 = &anon_d4b0c354e835dc672480ef32a1a5d569_18_llvm_11877717755312319128;
        if ( (unsigned __int8)<std::path::Display as core::fmt::Display>::fmt(&v77, &v54) )
          core::result::unwrap_failed(
            anon_d4b0c354e835dc672480ef32a1a5d569_19_llvm_11877717755312319128,
            55LL,
            &v53,
            &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
            &anon_d4b0c354e835dc672480ef32a1a5d569_21_llvm_11877717755312319128);
        v45 = v61;
        v46 = v62;
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v54, 4LL, 0LL);
        v47 = *((_QWORD *)&v54 + 1);
        if ( (_QWORD)v54 )
          alloc::raw_vec::handle_error(*((_QWORD *)&v54 + 1), v55);
        v48 = (_DWORD *)v55;
        core::intrinsics::copy_nonoverlapping::precondition_check(&unk_18624, v55, 1LL, 1LL, 4LL);
        *v48 = 1701603686;
        *(_QWORD *)&v72 = v47;
        *((_QWORD *)&v72 + 1) = v48;
        v73.m256i_i64[0] = 4LL;
        *(_OWORD *)&v73.m256i_u64[1] = v45;
        v73.m256i_i64[3] = v46;
        v49 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 48LL, 0LL);
        v19 = v49;
        if ( !v49 )
          alloc::alloc::handle_alloc_error(8LL, 48LL);
        v50 = v72;
        v51 = *(_OWORD *)v73.m256i_i8;
        v49[2] = *(_OWORD *)&v73.m256i_u64[2];
        v49[1] = v51;
        *v49 = v50;
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v63, 8LL);
        std::io::error::repr_bitpacked::decode_repr(&v54, v76);
        if ( (unsigned __int8)v54 >= 3u )
          core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v54 + 8);
        v21 = &anon_d4b0c354e835dc672480ef32a1a5d569_55_llvm_11877717755312319128;
        goto LABEL_68;
      }
    }
LABEL_77:
    core::panicking::panic_nounwind(anon_d4b0c354e835dc672480ef32a1a5d569_41_llvm_11877717755312319128, 162LL);
  }
  v60 = a2;
  v62 = v70;
  v61 = v69;
  v22 = fd;
  tempfile::file::TempPath::keep(&v54, &v61);
  v21 = (__int64 (__fastcall **)())v55;
  if ( BYTE8(v55) != 2 )
  {
    v82 = v54;
    v83 = v55;
    v84 = v22;
    std::path::Path::to_path_buf(&v100, *((_QWORD *)&v54 + 1), v55);
    *(_QWORD *)&v80 = v101;
    v79 = v100;
    *((_QWORD *)&v80 + 1) = 0x8000000000000000LL;
    v24 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 48LL, 0LL);
    v19 = v24;
    if ( !v24 )
      alloc::alloc::handle_alloc_error(8LL, 48LL);
    v25 = v79;
    v26 = v80;
    v24[2] = v81;
    v24[1] = v26;
    *v24 = v25;
    core::ptr::drop_in_place<tempfile::file::PersistError>(&v82);
    v21 = &anon_d4b0c354e835dc672480ef32a1a5d569_55_llvm_11877717755312319128;
    goto LABEL_68;
  }
  v74 = a3;
  v19 = (_OWORD *)*((_QWORD *)&v54 + 1);
  v23 = v54;
  std::sys::pal::unix::fs::debug_assert_fd_is_open(v22);
  close(v22);
  if ( v23 == 0x8000000000000000LL )
    goto LABEL_68;
LABEL_18:
  v102[0] = v23;
  v102[1] = v19;
  v102[2] = v21;
  if ( !v19 || (__int64)v21 < 0 )
    goto LABEL_77;
  v27 = std::path::Path::file_name(v19, v21);
  v28 = v74;
  v29 = v60;
  if ( !v27 )
  {
    v30 = &off_11BD58;
    goto LABEL_76;
  }
  std::sys::os_str::bytes::Slice::to_str(&v54, v27);
  v30 = &off_11BD70;
  if ( (_QWORD)v54 || !*((_QWORD *)&v54 + 1) )
LABEL_76:
    core::option::unwrap_failed(v30);
  std::path::Path::_join(&v104, v29, v28, *((_QWORD *)&v54 + 1), v55);
  a1[2] = v105;
  *(_OWORD *)a1 = v104;
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v102, v29);
  return a1;
}
