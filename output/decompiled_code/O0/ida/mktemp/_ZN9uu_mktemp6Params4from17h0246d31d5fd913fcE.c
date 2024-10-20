__int64 __fastcall uu_mktemp::Params::from(__int64 a1, __int128 *a2)
{
  char *v2; // r14
  __int64 v3; // r12
  void **v4; // rsi
  __int64 v5; // rdx
  char *v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rbx
  const void *v9; // rax
  size_t v10; // rdx
  __int128 v11; // xmm0
  _QWORD *v12; // rcx
  unsigned __int64 v13; // rax
  char v14; // bp
  char **v15; // rdi
  char *v16; // rax
  unsigned __int64 v17; // r12
  __int64 v18; // rbp
  const void *v19; // r15
  __int64 v20; // r14
  void *v21; // r13
  void *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r13
  __int64 v26; // rsi
  void *v27; // rbp
  __int64 v28; // r14
  unsigned __int64 v29; // rax
  const void *v30; // rax
  size_t v31; // rdx
  unsigned __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  void *v36; // r15
  __int64 v37; // rbx
  __int128 v38; // xmm0
  char v39; // bl
  __int64 v40; // rax
  void *v41; // r14
  void *v42; // r13
  size_t v43; // rbp
  __int64 v44; // rax
  unsigned __int64 v45; // rbx
  __int128 *v46; // rdx
  __int64 v47; // rdi
  __int64 v48; // rcx
  bool v49; // cf
  __int64 v50; // rcx
  __int64 v51; // r13
  __int64 v52; // rbp
  __int64 v53; // rax
  void *v54; // rsi
  __int64 v55; // rsi
  _QWORD *v56; // rax
  unsigned __int64 v58; // rbx
  void *v59; // rsi
  __int128 *v60; // [rsp+8h] [rbp-230h]
  __int64 v61; // [rsp+10h] [rbp-228h]
  void *v62; // [rsp+18h] [rbp-220h]
  unsigned __int64 v63; // [rsp+20h] [rbp-218h]
  __int64 v64; // [rsp+28h] [rbp-210h]
  char *v66; // [rsp+38h] [rbp-200h] BYREF
  unsigned __int64 v67; // [rsp+40h] [rbp-1F8h]
  __int64 v68; // [rsp+48h] [rbp-1F0h]
  __int64 v69; // [rsp+50h] [rbp-1E8h]
  __int64 v70; // [rsp+58h] [rbp-1E0h]
  __int64 *v71; // [rsp+60h] [rbp-1D8h]
  size_t v72; // [rsp+68h] [rbp-1D0h]
  void *v73; // [rsp+70h] [rbp-1C8h]
  const char *v74; // [rsp+78h] [rbp-1C0h] BYREF
  void *v75; // [rsp+80h] [rbp-1B8h] BYREF
  void *dest; // [rsp+88h] [rbp-1B0h] BYREF
  unsigned __int64 v77; // [rsp+90h] [rbp-1A8h]
  void **v78; // [rsp+98h] [rbp-1A0h]
  __int64 (__fastcall **v79)(); // [rsp+A0h] [rbp-198h]
  __int64 v80; // [rsp+A8h] [rbp-190h]
  __int64 v81; // [rsp+B0h] [rbp-188h]
  __int64 v82; // [rsp+C0h] [rbp-178h]
  __int64 v83; // [rsp+C8h] [rbp-170h]
  __int64 v84; // [rsp+D0h] [rbp-168h]
  __int64 v85; // [rsp+D8h] [rbp-160h]
  void *src[2]; // [rsp+E0h] [rbp-158h] BYREF
  size_t n; // [rsp+F0h] [rbp-148h]
  __int64 v88; // [rsp+100h] [rbp-138h] BYREF
  __int128 v89; // [rsp+108h] [rbp-130h]
  _QWORD *v90; // [rsp+118h] [rbp-120h]
  char *v91; // [rsp+120h] [rbp-118h]
  _QWORD v92[3]; // [rsp+128h] [rbp-110h] BYREF
  __int128 v93; // [rsp+140h] [rbp-F8h] BYREF
  __int64 v94; // [rsp+150h] [rbp-E8h]
  char v95[8]; // [rsp+158h] [rbp-E0h] BYREF
  __int64 v96; // [rsp+160h] [rbp-D8h]
  __int64 v97; // [rsp+168h] [rbp-D0h]
  __int64 v98; // [rsp+170h] [rbp-C8h] BYREF
  unsigned __int64 v99; // [rsp+178h] [rbp-C0h]
  _QWORD v100[2]; // [rsp+188h] [rbp-B0h] BYREF
  _QWORD v101[2]; // [rsp+198h] [rbp-A0h] BYREF
  _QWORD v102[2]; // [rsp+1A8h] [rbp-90h] BYREF
  _QWORD v103[3]; // [rsp+1B8h] [rbp-80h] BYREF
  __int64 v104; // [rsp+1D0h] [rbp-68h] BYREF
  __int64 v105; // [rsp+1D8h] [rbp-60h]
  __int64 v106; // [rsp+1E0h] [rbp-58h]
  _QWORD v107[10]; // [rsp+1E8h] [rbp-50h] BYREF

  v71 = (__int64 *)(a2 + 3);
  v60 = a2;
  if ( *((_QWORD *)a2 + 6) != 0x8000000000000000LL )
  {
    v7 = *((_QWORD *)a2 + 1);
    if ( !v7 )
      goto LABEL_137;
    v8 = *((_QWORD *)a2 + 2);
    if ( v8 < 0 )
      goto LABEL_137;
    LODWORD(v74) = 0;
    v9 = (const void *)core::char::methods::encode_utf8_raw(88LL, &v74, 4LL);
    if ( v8 < v10 || bcmp(v9, (const void *)(v8 - v10 + v7), v10) )
    {
      v11 = *a2;
      v12 = (_QWORD *)a1;
      *(_QWORD *)(a1 + 24) = *((_QWORD *)a2 + 2);
      *(_OWORD *)(a1 + 8) = v11;
      v13 = 0x8000000000000001LL;
      v14 = 0;
      goto LABEL_41;
    }
  }
  v2 = (char *)*((_QWORD *)a2 + 1);
  if ( !v2 )
    goto LABEL_137;
  v3 = *((_QWORD *)a2 + 2);
  if ( v3 < 0 )
    goto LABEL_137;
  core::str::pattern::StrSearcher::new(&v74, *((_QWORD *)a2 + 1), v3, aXxx, 3LL);
  if ( v74 )
  {
    v4 = &v75;
    core::str::pattern::TwoWaySearcher::next_back((unsigned int)&v98, (unsigned int)&v75, v82, v83, v84, v85, v81 == -1);
    if ( v98 )
    {
      v6 = (char *)(v99 + 3);
      if ( v99 < 0xFFFFFFFFFFFFFFFDLL )
        goto LABEL_7;
LABEL_18:
      v15 = &off_11BC50;
      goto LABEL_144;
    }
LABEL_35:
    if ( *v71 == 0x8000000000000000LL )
    {
      v94 = *((_QWORD *)v60 + 2);
      v93 = *v60;
      v14 = 0;
    }
    else
    {
      v23 = *((_QWORD *)v60 + 1);
      if ( !v23 )
        goto LABEL_137;
      v24 = *((_QWORD *)v60 + 2);
      if ( v24 < 0 )
        goto LABEL_137;
      v103[0] = *((_QWORD *)v60 + 1);
      v103[1] = v24 + v23;
      v103[2] = v24;
      v14 = 1;
      <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(&v93, v103);
    }
    v12 = (_QWORD *)a1;
    *(_QWORD *)(a1 + 24) = v94;
    *(_OWORD *)(a1 + 8) = v93;
    v13 = 0x8000000000000002LL;
    a2 = v60;
LABEL_41:
    v12[4] = v13;
    *v12 = 0x8000000000000000LL;
    if ( *((_QWORD *)a2 + 3) != 0x8000000000000000LL )
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)a2 + 24);
    goto LABEL_118;
  }
  do
  {
    v4 = (void **)&v74;
    <core::str::pattern::StrSearcher as core::str::pattern::ReverseSearcher>::next_back(&v66, &v74);
  }
  while ( v66 == (_BYTE *)&dword_0 + 1 );
  if ( v66 )
    goto LABEL_35;
  v6 = (char *)(v67 + 3);
  if ( v67 >= 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_18;
LABEL_7:
  if ( (unsigned __int64)v6 >= v3 )
  {
    if ( v6 != (char *)v3 )
LABEL_9:
      core::str::slice_error_fail(v2, v3, 0LL, v6, &off_11BC68);
  }
  else if ( v6[(_QWORD)v2] < -64 )
  {
    goto LABEL_9;
  }
  if ( (unsigned __int64)v6 > v3 )
    core::panicking::panic_nounwind(anon_ff765ffa8c564fe4079308b568cc8f06_8_llvm_17873003023693898768, 102LL);
  v16 = &v6[(_QWORD)v2];
  v74 = v2;
  v91 = v6;
  v75 = v6;
  dest = v2;
  v77 = (unsigned __int64)&v6[(_QWORD)v2];
  v78 = 0LL;
  do
  {
    if ( v16 >= v2 )
    {
      if ( !(unsigned int)core::str::validations::next_code_point_reverse(&dest) )
        goto LABEL_28;
      if ( ((unsigned int)v5 ^ 0xD800) - 2048 >= 0x10F800 )
        core::panicking::panic_nounwind(anon_d4b0c354e835dc672480ef32a1a5d569_31_llvm_11877717755312319128, 57LL);
      v2 = (char *)dest;
      v16 = (char *)v77;
      if ( v77 >= (unsigned __int64)dest )
        continue;
    }
    core::panicking::panic_nounwind(anon_d4b0c354e835dc672480ef32a1a5d569_29_llvm_11877717755312319128, 71LL);
  }
  while ( (_DWORD)v5 == 88 );
  if ( (_DWORD)v5 == (_DWORD)&loc_110000 )
  {
LABEL_28:
    v17 = 0LL;
    goto LABEL_30;
  }
  v17 = (unsigned __int64)v78 + v77 - (_QWORD)dest + 1;
  if ( (void **)((char *)v78 + v77 - (_QWORD)dest) == (void **)-1LL )
  {
    v15 = &anon_39ca493e95a1eccf7c7f592fcc33ae19_59_llvm_18443158920372441921;
LABEL_144:
    core::panicking::panic_const::panic_const_add_overflow(v15, v4, v5, v6);
  }
LABEL_30:
  v90 = (_QWORD *)v60 + 1;
  *(_OWORD *)src = *(__int128 *)((char *)v60 + 24);
  n = *((_QWORD *)v60 + 5);
  if ( src[0] == (void *)0x8000000000000000LL )
  {
    v18 = 1LL;
LABEL_34:
    v21 = 0LL;
    v20 = 0LL;
    goto LABEL_44;
  }
  v19 = src[1];
  v20 = n;
  core::slice::raw::from_raw_parts::precondition_check(src[1], 1LL, 1LL, n);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v74, v20, 0LL);
  v21 = v75;
  if ( v74 )
    alloc::raw_vec::handle_error(v75, dest);
  v22 = dest;
  v18 = 1LL;
  core::intrinsics::copy_nonoverlapping::precondition_check(v19, dest, 1LL, 1LL, v20);
  memcpy(v22, v19, v20);
  if ( v21 == (void *)0x8000000000000000LL )
    goto LABEL_34;
  v18 = (__int64)v22;
LABEL_44:
  v92[0] = v21;
  v92[1] = v18;
  v92[2] = v20;
  v25 = *((_QWORD *)v60 + 1);
  if ( !v25 )
    goto LABEL_137;
  v26 = *((_QWORD *)v60 + 2);
  if ( v26 < 0 )
    goto LABEL_137;
  if ( v17 )
  {
    if ( v26 <= v17 )
    {
      if ( v26 != v17 )
LABEL_49:
        core::str::slice_error_fail(*((_QWORD *)v60 + 1), v26, 0LL, v17, &off_11BC98);
    }
    else if ( *(char *)(v25 + v17) < -64 )
    {
      goto LABEL_49;
    }
  }
  if ( v26 < v17 )
    goto LABEL_138;
  if ( !v18 || v20 < 0 || (std::path::Path::_join(v95, v18, v20, *((_QWORD *)v60 + 1), v17), !v96) || v97 < 0 )
LABEL_137:
    core::panicking::panic_nounwind(anon_d4b0c354e835dc672480ef32a1a5d569_41_llvm_11877717755312319128, 162LL);
  v100[0] = v96;
  v100[1] = v97;
  v66 = 0LL;
  v67 = 1LL;
  v68 = 0LL;
  v80 = 32LL;
  LOBYTE(v81) = 3;
  v74 = 0LL;
  dest = 0LL;
  v78 = (void **)&v66;
  v79 = &anon_d4b0c354e835dc672480ef32a1a5d569_18_llvm_11877717755312319128;
  if ( (unsigned __int8)<std::path::Display as core::fmt::Display>::fmt(v100, &v74) )
    core::result::unwrap_failed(
      anon_d4b0c354e835dc672480ef32a1a5d569_19_llvm_11877717755312319128,
      55LL,
      &v98,
      &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
      &anon_d4b0c354e835dc672480ef32a1a5d569_21_llvm_11877717755312319128);
  v27 = v66;
  v63 = v67;
  v28 = v68;
  v73 = v66;
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v95, &v74);
  if ( (*((_BYTE *)v60 + 75) & 1) != 0 )
  {
    if ( v17 > 0xF )
    {
      if ( core::slice::memchr::memchr_aligned(47LL, v25, v17) != 1 )
        goto LABEL_58;
    }
    else
    {
      if ( !v17 )
        goto LABEL_58;
      v33 = 0LL;
      while ( *(_BYTE *)(v25 + v33) != 47 )
      {
        if ( v17 == ++v33 )
          goto LABEL_58;
      }
    }
    v29 = 0x8000000000000003LL;
    goto LABEL_77;
  }
LABEL_58:
  if ( src[0] != (void *)0x8000000000000000LL && (unsigned __int8)std::path::Path::is_absolute(v25, v17) )
  {
    v29 = 0x8000000000000005LL;
LABEL_77:
    v38 = *v60;
    *(_QWORD *)(a1 + 24) = *((_QWORD *)v60 + 2);
    *(_OWORD *)(a1 + 8) = v38;
    *(_QWORD *)(a1 + 32) = v29;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    v39 = 1;
    v14 = 0;
LABEL_113:
    v54 = v73;
    if ( v73 )
      _rust_dealloc(v63, v73, 1LL);
    goto LABEL_115;
  }
  if ( !v63 || v28 < 0 )
    goto LABEL_137;
  LODWORD(v74) = 0;
  v30 = (const void *)core::char::methods::encode_utf8_raw(47LL, &v74, 4LL);
  if ( v28 >= v31 )
  {
    v32 = v63;
    if ( !bcmp(v30, (const void *)(v63 + v28 - v31), v31) )
    {
      v72 = 0LL;
      v70 = 1LL;
      v69 = 1LL;
      v62 = 0LL;
      v64 = v63;
      v36 = v27;
      goto LABEL_86;
    }
  }
  else
  {
    v32 = v63;
  }
  v64 = 1LL;
  core::slice::raw::from_raw_parts::precondition_check(v32, 1LL, 1LL, v28);
  v34 = std::path::Path::parent(v32, v28);
  if ( v34 )
  {
    v101[0] = v34;
    v101[1] = v35;
    v66 = 0LL;
    v67 = 1LL;
    v68 = 0LL;
    v80 = 32LL;
    LOBYTE(v81) = 3;
    v74 = 0LL;
    dest = 0LL;
    v78 = (void **)&v66;
    v79 = &anon_d4b0c354e835dc672480ef32a1a5d569_18_llvm_11877717755312319128;
    if ( (unsigned __int8)<std::path::Display as core::fmt::Display>::fmt(v101, &v74) )
      core::result::unwrap_failed(
        anon_d4b0c354e835dc672480ef32a1a5d569_19_llvm_11877717755312319128,
        55LL,
        &v98,
        &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
        &anon_d4b0c354e835dc672480ef32a1a5d569_21_llvm_11877717755312319128);
    v36 = v66;
    v64 = v67;
    v37 = v68;
  }
  else
  {
    v36 = 0LL;
    v37 = 0LL;
  }
  v40 = std::path::Path::file_name(v63, v28);
  if ( v40 )
  {
    std::sys::os_str::bytes::Slice::to_str(&v74, v40);
    if ( v74 || (v41 = v75) == 0LL )
      core::option::unwrap_failed(&off_11BCB0);
    v72 = (size_t)dest;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v74, dest, 0LL);
    v62 = v75;
    if ( v74 )
      alloc::raw_vec::handle_error(v75, dest);
    v42 = dest;
    v43 = v72;
    core::intrinsics::copy_nonoverlapping::precondition_check(v41, dest, 1LL, 1LL, v72);
    v69 = (__int64)v42;
    memcpy(v42, v41, v43);
    v70 = 0LL;
    v28 = v37;
  }
  else
  {
    v69 = 1LL;
    v72 = 0LL;
    v62 = 0LL;
    v28 = v37;
    v70 = 0LL;
  }
LABEL_86:
  v44 = *v71;
  v45 = (unsigned __int64)v91;
  if ( *v71 == 0x8000000000000000LL )
  {
    v89 = 1uLL;
    v44 = 0LL;
    v46 = v60;
  }
  else
  {
    v46 = v60;
    v89 = *(__int128 *)((char *)v60 + 56);
  }
  v88 = v44;
  v47 = *((_QWORD *)v46 + 1);
  if ( !v47 )
    goto LABEL_137;
  v48 = *((_QWORD *)v46 + 2);
  if ( v48 < 0 )
    goto LABEL_137;
  if ( v91 )
  {
    if ( v48 <= (unsigned __int64)v91 )
    {
      if ( (char *)v48 != v91 )
LABEL_94:
        core::str::slice_error_fail(v47, *((_QWORD *)v46 + 2), v91, v48, &off_11BCC8);
    }
    else if ( v91[v47] < -64 )
    {
      goto LABEL_94;
    }
  }
  v49 = v48 < (unsigned __int64)v91;
  v50 = v48 - (_QWORD)v91;
  if ( v49 )
LABEL_138:
    core::panicking::panic_nounwind(anon_d4b0c354e835dc672480ef32a1a5d569_30_llvm_11877717755312319128, 102LL);
  v102[0] = &v91[v47];
  v102[1] = v50;
  v107[0] = v102;
  v107[1] = <&T as core::fmt::Display>::fmt;
  v107[2] = &v88;
  v107[3] = <alloc::string::String as core::fmt::Display>::fmt;
  v74 = "\x01";
  v75 = &dword_0 + 2;
  dest = v107;
  v77 = 2LL;
  v78 = 0LL;
  alloc::fmt::format::format_inner(&v104, &v74);
  v51 = v105;
  if ( !v105 )
    goto LABEL_137;
  v52 = v106;
  if ( v106 < 0 )
    goto LABEL_137;
  v61 = v104;
  if ( (unsigned __int64)v106 > 0xF )
  {
    if ( core::slice::memchr::memchr_aligned(47LL, v105, v106) == 1 )
      goto LABEL_106;
LABEL_126:
    v49 = v45 < v17;
    v58 = v45 - v17;
    if ( v49 )
      core::panicking::panic_const::panic_const_sub_overflow(&off_11BCE0);
    *(_QWORD *)a1 = v36;
    *(_QWORD *)(a1 + 8) = v64;
    *(_QWORD *)(a1 + 16) = v28;
    *(_QWORD *)(a1 + 24) = v62;
    *(_QWORD *)(a1 + 32) = v69;
    *(_QWORD *)(a1 + 40) = v72;
    *(_QWORD *)(a1 + 48) = v61;
    *(_QWORD *)(a1 + 56) = v51;
    *(_QWORD *)(a1 + 64) = v52;
    *(_QWORD *)(a1 + 72) = v58;
    if ( v88 )
      _rust_dealloc(v89, v88, 1LL);
    v59 = v73;
    if ( ((v73 == 0LL) | (unsigned __int8)v70) != 1 )
      _rust_dealloc(v63, v73, 1LL);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v92, v59);
    if ( src[0] != (void *)0x8000000000000000LL )
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(src);
    v55 = *(_QWORD *)v60;
    v56 = v90;
    if ( *(_QWORD *)v60 )
      goto LABEL_124;
    return a1;
  }
  if ( !v106 )
    goto LABEL_126;
  v53 = 0LL;
  while ( *(_BYTE *)(v105 + v53) != 47 )
  {
    if ( v106 == ++v53 )
      goto LABEL_126;
  }
LABEL_106:
  *(_QWORD *)(a1 + 8) = v61;
  *(_QWORD *)(a1 + 16) = v51;
  *(_QWORD *)(a1 + 24) = v52;
  *(_QWORD *)(a1 + 32) = 0x8000000000000004LL;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  if ( v88 )
    _rust_dealloc(v89, v88, 1LL);
  v54 = v62;
  if ( v62 )
    _rust_dealloc(v69, v62, 1LL);
  if ( v36 )
  {
    v54 = v36;
    _rust_dealloc(v64, v36, 1LL);
  }
  v14 = 1;
  v39 = 0;
  if ( !(_BYTE)v70 )
    goto LABEL_113;
LABEL_115:
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v92, v54);
  if ( src[0] != (void *)0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(src);
  if ( v39 )
  {
LABEL_118:
    if ( *v71 != 0x8000000000000000LL )
    {
      alloc::raw_vec::RawVec<T,A>::current_memory(&v74);
      if ( v75 )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v60 + 4, v74, v75, dest);
    }
  }
  if ( v14 )
  {
    v55 = *(_QWORD *)v60;
    if ( *(_QWORD *)v60 )
    {
      v56 = (_QWORD *)v60 + 1;
LABEL_124:
      _rust_dealloc(*v56, v55, 1LL);
    }
  }
  return a1;
}
