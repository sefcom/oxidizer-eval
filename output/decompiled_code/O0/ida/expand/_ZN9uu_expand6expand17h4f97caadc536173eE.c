_OWORD *__fastcall uu_expand::expand(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  unsigned __int64 v3; // rax
  _OWORD *v4; // r14
  _OWORD *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r14
  const void *v11; // r12
  void *v12; // r15
  char v13; // al
  __int64 v14; // rbx
  __int64 *v15; // rax
  __int64 *v16; // rbx
  size_t *v17; // rdx
  void *v18; // r14
  __int64 v19; // rbx
  void *v20; // r13
  _OWORD *v21; // rax
  __int128 v22; // xmm0
  __int64 (__fastcall **v23)(); // rcx
  int v24; // ebp
  _DWORD *v25; // rax
  __int64 v26; // rsi
  __int128 v27; // xmm0
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  unsigned __int128 v30; // rax
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // rsi
  int v34; // eax
  size_t v35; // r13
  __int64 v36; // r12
  __int64 v37; // rax
  unsigned __int64 v38; // r12
  bool v39; // cc
  size_t v40; // r12
  bool v41; // cf
  __int64 v42; // rsi
  char v43; // al
  unsigned __int64 v44; // r12
  const void *v45; // rbx
  size_t v46; // r12
  void *v47; // r14
  unsigned __int64 v48; // r12
  unsigned __int64 v49; // r12
  __int64 v50; // rax
  unsigned __int64 v51; // r12
  unsigned __int64 v52; // kr00_8
  __int64 v53; // rsi
  void *v54; // r14
  size_t v55; // rbx
  size_t v56; // r12
  void *v57; // rdi
  void *v58; // r14
  __int64 v59; // rax
  size_t v60; // r14
  void *v61; // rbx
  void *v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rbx
  __int64 v65; // r14
  __int64 (__fastcall **v66)(); // rax
  __int64 v67; // rax
  __int64 v68; // rbx
  size_t v69; // r15
  __int64 v70; // rbx
  size_t v71; // r14
  _OWORD *v72; // rax
  __int128 v73; // xmm0
  __int64 v74; // rax
  char **v76; // rax
  char **v77; // rax
  char v78; // [rsp+4h] [rbp-314h]
  char **v79; // [rsp+8h] [rbp-310h]
  char **v80; // [rsp+10h] [rbp-308h]
  void *src; // [rsp+18h] [rbp-300h]
  void *srca; // [rsp+18h] [rbp-300h]
  void *srcb; // [rsp+18h] [rbp-300h]
  __int64 v84; // [rsp+20h] [rbp-2F8h] BYREF
  __int64 v85; // [rsp+28h] [rbp-2F0h]
  __int64 v86; // [rsp+30h] [rbp-2E8h]
  __int64 v87; // [rsp+38h] [rbp-2E0h] BYREF
  size_t v88; // [rsp+40h] [rbp-2D8h]
  size_t v89; // [rsp+48h] [rbp-2D0h]
  char v90; // [rsp+50h] [rbp-2C8h]
  __int64 v91; // [rsp+58h] [rbp-2C0h] BYREF
  _OWORD *v92; // [rsp+60h] [rbp-2B8h] BYREF
  __int64 (__fastcall **v93)(); // [rsp+68h] [rbp-2B0h]
  __int128 v94; // [rsp+70h] [rbp-2A8h] BYREF
  size_t n[5]; // [rsp+80h] [rbp-298h] BYREF
  __int128 v96; // [rsp+A8h] [rbp-270h] BYREF
  void *dest[2]; // [rsp+B8h] [rbp-260h]
  unsigned __int64 v98; // [rsp+C8h] [rbp-250h]
  unsigned __int64 *v99; // [rsp+D0h] [rbp-248h]
  __int64 v100; // [rsp+D8h] [rbp-240h] BYREF
  _OWORD *v101; // [rsp+E0h] [rbp-238h]
  __int64 (__fastcall **v102)(); // [rsp+E8h] [rbp-230h]
  __int128 v103; // [rsp+F0h] [rbp-228h]
  __int128 v104; // [rsp+100h] [rbp-218h]
  char **v105; // [rsp+110h] [rbp-208h]
  char **v106; // [rsp+118h] [rbp-200h]
  __int64 v107; // [rsp+120h] [rbp-1F8h]
  __int64 v108; // [rsp+128h] [rbp-1F0h]
  _QWORD *v109; // [rsp+130h] [rbp-1E8h]
  __int64 v110; // [rsp+138h] [rbp-1E0h] BYREF
  __int64 v111; // [rsp+140h] [rbp-1D8h]
  __int64 v112; // [rsp+148h] [rbp-1D0h]
  _DWORD v113[2]; // [rsp+150h] [rbp-1C8h] BYREF
  void *v114; // [rsp+158h] [rbp-1C0h]
  void *v115; // [rsp+160h] [rbp-1B8h]
  _QWORD v116[2]; // [rsp+168h] [rbp-1B0h] BYREF
  _QWORD v117[2]; // [rsp+178h] [rbp-1A0h] BYREF
  _QWORD v118[2]; // [rsp+188h] [rbp-190h] BYREF
  _QWORD v119[2]; // [rsp+198h] [rbp-180h] BYREF
  _QWORD v120[2]; // [rsp+1A8h] [rbp-170h] BYREF
  _QWORD v121[2]; // [rsp+1B8h] [rbp-160h] BYREF
  __int64 v122; // [rsp+1C8h] [rbp-150h] BYREF
  __int64 v123; // [rsp+1D0h] [rbp-148h]
  __int64 v124; // [rsp+1D8h] [rbp-140h]
  char v125; // [rsp+1E0h] [rbp-138h] BYREF
  __int128 v126; // [rsp+200h] [rbp-118h]
  __int128 v127; // [rsp+210h] [rbp-108h]
  _QWORD v128[6]; // [rsp+228h] [rbp-F0h] BYREF
  _QWORD v129[6]; // [rsp+258h] [rbp-C0h] BYREF
  _QWORD v130[6]; // [rsp+288h] [rbp-90h] BYREF
  _QWORD v131[12]; // [rsp+2B8h] [rbp-60h] BYREF

  v1 = std::io::stdio::stdout();
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v94, 0x2000LL, 0LL);
  if ( (_QWORD)v94 )
    alloc::raw_vec::handle_error(*((_QWORD *)&v94 + 1), n[0]);
  v87 = *((_QWORD *)&v94 + 1);
  v88 = n[0];
  v89 = 0LL;
  v90 = 0;
  v91 = v1;
  v99 = (unsigned __int64 *)a1[4];
  if ( !v99 || ((unsigned __int8)v99 & 7) != 0 || (v98 = a1[5], v98 >> 60) )
LABEL_166:
    core::panicking::panic_nounwind(anon_aaac0ddc4ff511c8d0d06f52b75d74e5_33_llvm_5208339479224688215, 162LL);
  v84 = 0LL;
  v85 = 1LL;
  v86 = 0LL;
  v2 = a1[1];
  if ( !v2 || (v2 & 7) != 0 || (v3 = a1[2], v3 >= 0x555555555555556LL) )
    core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
  v109 = a1;
  v4 = 0LL;
  if ( !v3 )
    goto LABEL_160;
  v112 = v2 + 24 * v3;
  v111 = 8 * v98;
  v108 = 8 * v98 - 8;
  v106 = &off_10AB38;
  v105 = &off_10AA48;
  v80 = &off_10AA60;
  v79 = &off_10AAF0;
  while ( 1 )
  {
    v110 = v2;
    v6 = *(_QWORD *)(v2 + 8);
    v7 = *(_QWORD *)(v2 + 16);
    core::slice::raw::from_raw_parts::precondition_check(v6, 1LL, 1LL, v7);
    if ( (unsigned __int8)std::path::Path::is_dir(v6, v7) )
    {
      v8 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v9 = *(_QWORD *)(v8 + 8);
      v10 = *(_QWORD *)(v8 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v9, 1LL, 1LL, v10);
      v117[0] = v9;
      v117[1] = v10;
      v116[0] = v117;
      v116[1] = <&T as core::fmt::Display>::fmt;
      v128[0] = &unk_10ABC8;
      v128[1] = 2LL;
      v128[4] = 0LL;
      v128[2] = v116;
      v128[3] = 1LL;
      std::io::stdio::_eprint(v128);
      v118[0] = &v110;
      v118[1] = <&T as core::fmt::Display>::fmt;
      v129[0] = &unk_10AC08;
      v129[1] = 2LL;
      v129[4] = 0LL;
      v129[2] = v118;
      v129[3] = 1LL;
      std::io::stdio::_eprint(v129);
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
      goto LABEL_12;
    }
    v11 = *(const void **)(v110 + 8);
    if ( !v11 )
      goto LABEL_166;
    v12 = *(void **)(v110 + 16);
    if ( (__int64)v12 < 0 )
      goto LABEL_166;
    v13 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
            *(_QWORD *)(v110 + 8),
            *(_QWORD *)(v110 + 16),
            asc_1ECD6,
            1LL);
    v107 = v2;
    if ( v13 )
    {
      v14 = std::io::stdio::stdin();
      v15 = (__int64 *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 8LL, 0LL);
      if ( !v15 )
        alloc::alloc::handle_alloc_error(8LL, 8LL);
      *v15 = v14;
      v16 = &v122;
      std::io::buffered::bufreader::BufReader<R>::new(&v122, v15, &unk_10A9C0);
      v17 = (size_t *)&v125;
      goto LABEL_26;
    }
    *(_QWORD *)&v96 = 0x1B600000000LL;
    WORD6(v96) = 0;
    DWORD2(v96) = 1;
    std::fs::OpenOptions::_open(v113, &v96, v11, v12);
    if ( !v113[0] )
      break;
    v18 = v114;
    v115 = v114;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v96, v12, 0LL);
    v19 = *((_QWORD *)&v96 + 1);
    if ( (_QWORD)v96 )
      alloc::raw_vec::handle_error(*((_QWORD *)&v96 + 1), dest[0]);
    v20 = dest[0];
    core::intrinsics::copy_nonoverlapping::precondition_check(v11, dest[0], 1LL, 1LL, v12);
    memcpy(v20, v11, (size_t)v12);
    *(_QWORD *)&v96 = v19;
    *((_QWORD *)&v96 + 1) = v20;
    dest[0] = v12;
    dest[1] = v18;
    v21 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    if ( !v21 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v22 = v96;
    v21[1] = *(_OWORD *)dest;
    *v21 = v22;
    v23 = &off_10A6D8;
LABEL_134:
    v92 = v21;
    v93 = v23;
    v63 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v64 = *(_QWORD *)(v63 + 8);
    v65 = *(_QWORD *)(v63 + 16);
    core::slice::raw::from_raw_parts::precondition_check(v64, 1LL, 1LL, v65);
    v120[0] = v64;
    v120[1] = v65;
    v119[0] = v120;
    v119[1] = <&T as core::fmt::Display>::fmt;
    v130[0] = &unk_10ABC8;
    v130[1] = 2LL;
    v130[4] = 0LL;
    v130[2] = v119;
    v130[3] = 1LL;
    std::io::stdio::_eprint(v130);
    v121[0] = &v92;
    v121[1] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v131[0] = &unk_10ABE8;
    v131[1] = 2LL;
    v131[4] = 0LL;
    v131[2] = v121;
    v131[3] = 1LL;
    std::io::stdio::_eprint(v131);
    _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
    v66 = v93;
    if ( *v93 )
    {
      ((void (__fastcall *)(_OWORD *))*v93)(v92);
      v66 = v93;
    }
    if ( v66[1] )
    {
      v5 = v92;
LABEL_11:
      _rust_dealloc(v5);
    }
LABEL_12:
    v2 += 24LL;
    if ( v2 == v112 )
    {
      v4 = 0LL;
      if ( v84 )
        goto LABEL_159;
      goto LABEL_160;
    }
  }
  v24 = v113[1];
  v25 = (_DWORD *)alloc::alloc::Global::alloc_impl(1LL, 4LL, 4LL, 0LL);
  if ( !v25 )
    alloc::alloc::handle_alloc_error(4LL, 4LL);
  *v25 = v24;
  v16 = (__int64 *)&v94;
  std::io::buffered::bufreader::BufReader<R>::new(&v94, v25, &off_10A968);
  v17 = &n[1];
  v2 = v107;
LABEL_26:
  v26 = *v16;
  v21 = (_OWORD *)v16[1];
  v23 = (__int64 (__fastcall **)())v16[2];
  v27 = *(_OWORD *)v17;
  v127 = *((_OWORD *)v17 + 1);
  v126 = v27;
  if ( !v26 )
    goto LABEL_134;
  v100 = v26;
  v101 = v21;
  v102 = v23;
  v104 = v127;
  v103 = v126;
  while ( 1 )
  {
    if ( std::io::read_until(&v100, 10LL, &v84) )
    {
      if ( v86 )
      {
        std::io::error::repr_bitpacked::decode_repr(&v94, v28);
        if ( (unsigned __int8)v94 >= 3u )
          core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v94 + 8);
LABEL_140:
        if ( v101 )
          _rust_dealloc(v100);
        v67 = *((_QWORD *)&v104 + 1);
        if ( **((_QWORD **)&v104 + 1) )
        {
          (**((void (__fastcall ***)(_QWORD))&v104 + 1))(v104);
          v67 = *((_QWORD *)&v104 + 1);
        }
        if ( *(_QWORD *)(v67 + 8) )
        {
          v5 = (_OWORD *)v104;
          goto LABEL_11;
        }
        goto LABEL_12;
      }
      std::io::error::repr_bitpacked::decode_repr(&v94, v28);
      if ( (unsigned __int8)v94 >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v94 + 8);
    }
    else if ( !v28 )
    {
      goto LABEL_140;
    }
    *(_QWORD *)&v30 = v86;
    if ( v86 )
      break;
LABEL_131:
    *(_QWORD *)&v30 = std::io::buffered::bufwriter::BufWriter<W>::flush_buf(&v87);
    v2 = v107;
    if ( (_QWORD)v30 )
      goto LABEL_150;
    *(_QWORD *)&v30 = <std::io::stdio::Stdout as std::io::Write>::flush(&v91);
    if ( (_QWORD)v30 )
      goto LABEL_150;
    v86 = 0LL;
  }
  v78 = 1;
  v31 = 0LL;
  v32 = 0LL;
  while ( 2 )
  {
    v33 = v85;
    LOBYTE(v29) = v85 == 0 || (v30 & 0x8000000000000000LL) != 0LL;
    *((_QWORD *)&v30 + 1) = v109;
    if ( (*((_BYTE *)v109 + 73) & 1) == 0 )
    {
      if ( (_BYTE)v29 )
        goto LABEL_161;
      v34 = *(unsigned __int8 *)(v85 + v32);
      v35 = 1LL;
      if ( v34 != 8 )
      {
        v36 = 1LL;
        if ( v34 == 9 )
          goto LABEL_39;
        goto LABEL_51;
      }
LABEL_61:
      v41 = v31-- == 0;
      if ( v41 )
        v31 = 0LL;
LABEL_63:
      if ( !v85 || (v42 = v86, v86 < 0) )
LABEL_161:
        core::panicking::panic_nounwind(anon_7bf8453590977c7a3fe5e2865e6df318_8_llvm_976352915506230263, 162LL);
      if ( v86 <= v32 )
        core::panicking::panic_bounds_check(v32, v86, &off_10AB80);
      v43 = v78;
      if ( *(_BYTE *)(v85 + v32) != 32 )
        v43 = 0;
      v78 = v43;
      v44 = v32 + v35;
      if ( v86 < v32 + v35 )
      {
        v106 = &off_10AB98;
LABEL_164:
        core::slice::index::slice_end_index_len_fail(v44, v42, v106, v29);
      }
      v45 = (const void *)(v32 + v85);
      v46 = v89;
      if ( v87 - v89 > v35 )
      {
        v47 = (void *)(v89 + v88);
        core::intrinsics::copy_nonoverlapping::precondition_check(v45, v89 + v88, 1LL, 1LL, v35);
        v33 = (unsigned __int64)v45;
        memcpy(v47, v45, v35);
        v89 = v35 + v46;
        goto LABEL_73;
      }
LABEL_71:
      v33 = (unsigned __int64)v45;
      *(_QWORD *)&v30 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v87, v45, v35);
LABEL_72:
      if ( (_QWORD)v30 )
        goto LABEL_150;
LABEL_73:
      v41 = __CFADD__(v35, v32);
      v32 += v35;
      if ( !v41 )
      {
        *(_QWORD *)&v30 = v86;
        if ( v32 >= v86 )
          goto LABEL_131;
        continue;
      }
      v76 = &off_10ABB0;
LABEL_176:
      v79 = v76;
LABEL_177:
      core::panicking::panic_const::panic_const_add_overflow(v79, v33, *((_QWORD *)&v30 + 1));
    }
    break;
  }
  if ( (_BYTE)v29 )
    goto LABEL_161;
  v35 = (*(char *)(v85 + v32) < 0) + 1LL;
  *((_QWORD *)&v30 + 1) = v35 + v32;
  if ( __CFADD__(v35, v32) )
    goto LABEL_177;
  v36 = 1LL;
  if ( *((_QWORD *)&v30 + 1) > (unsigned __int64)v30
    || (v33 = v32 + v85, core::str::converts::from_utf8(&v122, v32 + v85), v122)
    || (*(_QWORD *)&v96 = v123,
        *((_QWORD *)&v96 + 1) = v123 + v124,
        !(unsigned int)core::str::validations::next_code_point(&v96)) )
  {
LABEL_50:
    v35 = 1LL;
    goto LABEL_51;
  }
  if ( (DWORD2(v30) ^ 0xD800u) - 2048 >= (unsigned int)&off_10F800 )
    core::panicking::panic_nounwind(anon_aaac0ddc4ff511c8d0d06f52b75d74e5_29_llvm_5208339479224688215, 57LL);
  if ( DWORD2(v30) == 8 )
    goto LABEL_61;
  if ( DWORD2(v30) != 9 )
  {
    if ( DWORD2(v30) != (_DWORD)&unk_110000 )
    {
      if ( DWORD2(v30) >= 0x7F )
      {
        if ( DWORD2(v30) >= 0xA0 )
        {
          v33 = 0LL;
          v36 = unicode_width::tables::charwidth::lookup_width(DWORD2(v30), 0LL);
          goto LABEL_51;
        }
      }
      else if ( DWORD2(v30) > 0x1F )
      {
        goto LABEL_51;
      }
      v36 = 0LL;
LABEL_51:
      v41 = __CFADD__(v36, v31);
      v31 += v36;
      if ( !v41 )
        goto LABEL_63;
      v76 = &off_10AB68;
      goto LABEL_176;
    }
    goto LABEL_50;
  }
LABEL_39:
  if ( *((_BYTE *)v109 + 74) )
  {
    *((_QWORD *)&v30 + 1) = v99;
    v33 = v98;
    if ( *((_BYTE *)v109 + 74) == 1 )
    {
      v37 = v108;
      v29 = (unsigned __int64)v99;
      if ( !v98 )
      {
        v77 = &off_10AA30;
LABEL_182:
        v80 = v77;
LABEL_183:
        core::panicking::panic_const::panic_const_sub_overflow(v80, v33, *((_QWORD *)&v30 + 1), v29);
      }
      while ( v37 && v29 )
      {
        v38 = *(_QWORD *)v29;
        v29 += 8LL;
        v37 -= 8LL;
        v39 = v38 <= v31;
        v40 = v38 - v31;
        if ( !v39 )
          goto LABEL_102;
      }
      v48 = v99[v98 - 1];
      if ( !v48 )
        goto LABEL_184;
LABEL_89:
      v29 = (v48 | v31) >> 32;
      if ( v29 )
      {
        *((_QWORD *)&v30 + 1) = v31 % v48;
        v40 = v48 - v31 % v48;
      }
      else
      {
        *((_QWORD *)&v30 + 1) = (unsigned int)v31 % (unsigned int)v48;
        v40 = v48 - DWORD2(v30);
      }
    }
    else
    {
      v50 = v108;
      v29 = (unsigned __int64)v99;
      if ( !v98 )
        goto LABEL_183;
      while ( v50 && v29 )
      {
        v51 = *(_QWORD *)v29;
        v29 += 8LL;
        v50 -= 8LL;
        v39 = v51 <= v31;
        v40 = v51 - v31;
        if ( !v39 )
          goto LABEL_102;
      }
      if ( v98 == 1 )
      {
        v77 = &off_10AA78;
        goto LABEL_182;
      }
      v29 = v31 - v99[v98 - 2];
      if ( v31 < v99[v98 - 2] )
      {
        v77 = &off_10AA90;
        goto LABEL_182;
      }
      v33 = v99[v98 - 1];
      if ( !v33 )
        core::panicking::panic_const::panic_const_div_by_zero(&off_10AAA8, 0LL, v99, v29);
      if ( (v33 | v29) >> 32 )
      {
        *((_QWORD *)&v30 + 1) = v29 % v33;
        *(_QWORD *)&v30 = v29 / v33 + 1;
        if ( v29 / v33 == -1LL )
          goto LABEL_175;
      }
      else
      {
        *((_QWORD *)&v30 + 1) = (unsigned int)v29 % (unsigned int)v33;
        *(_QWORD *)&v30 = (unsigned int)v29 / (unsigned int)v33 + 1LL;
        if ( (unsigned int)v29 / (unsigned int)v33 == -1LL )
        {
LABEL_175:
          v76 = &off_10AAC0;
          goto LABEL_176;
        }
      }
      v52 = v30;
      v30 = v33 * (unsigned __int128)(unsigned __int64)v30;
      if ( !is_mul_ok(v33, v52) )
        core::panicking::panic_const::panic_const_mul_overflow(&off_10AAD8, v33, *((_QWORD *)&v30 + 1));
      if ( (unsigned __int64)v30 < v29 )
      {
        v77 = &off_10AAD8;
        goto LABEL_182;
      }
      v40 = v30 - v29;
    }
  }
  else
  {
    *(_QWORD *)&v30 = v111;
    *((_QWORD *)&v30 + 1) = v99;
    v29 = (unsigned __int64)v99;
    if ( v98 == 1 )
    {
      v48 = *v99;
      if ( !*v99 )
      {
        v105 = &off_10AA18;
LABEL_184:
        core::panicking::panic_const::panic_const_rem_by_zero(v105, v33, *((_QWORD *)&v30 + 1), v29);
      }
      goto LABEL_89;
    }
    do
    {
      v40 = 1LL;
      if ( !(_QWORD)v30 )
        break;
      if ( !v29 )
        break;
      v49 = *(_QWORD *)v29;
      v29 += 8LL;
      *(_QWORD *)&v30 = v30 - 8;
      v39 = v49 <= v31;
      v40 = v49 - v31;
    }
    while ( v39 );
  }
LABEL_102:
  v41 = __CFADD__(v40, v31);
  v31 += v40;
  if ( v41 )
  {
    v76 = &off_10AB08;
    goto LABEL_176;
  }
  if ( (v78 & 1) == 0 && (v109[9] & 1) != 0 )
  {
    v44 = v35 + v32;
    if ( __CFADD__(v35, v32) )
    {
      v76 = &off_10AB20;
      goto LABEL_176;
    }
    if ( !v85 )
      goto LABEL_166;
    v42 = v86;
    if ( v86 < 0 )
      goto LABEL_166;
    if ( v86 < v44 )
      goto LABEL_164;
    v40 = v35;
    v45 = (const void *)(v32 + v85);
    v60 = v89;
    if ( v87 - v89 <= v35 )
      goto LABEL_71;
    srcb = (void *)(v89 + v88);
    core::intrinsics::copy_nonoverlapping::precondition_check(v45, v89 + v88, 1LL, 1LL, v35);
    v62 = srcb;
    v33 = (unsigned __int64)v45;
LABEL_121:
    memcpy(v62, (const void *)v33, v40);
    v89 = v40 + v60;
    goto LABEL_73;
  }
  v53 = v109[8];
  if ( v40 <= v53 )
  {
    if ( v53 < 0 )
      goto LABEL_166;
    v59 = v109[7];
    if ( !v59 )
      goto LABEL_166;
    if ( v40 && v53 > v40 && *(char *)(v59 + v40) <= -65 )
      core::str::slice_error_fail(v109[7], v53, 0LL, v40, &off_10AB50);
    v60 = v89;
    if ( v87 - v89 <= v40 )
    {
      v33 = v109[7];
      *(_QWORD *)&v30 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v87, v59, v40);
      goto LABEL_72;
    }
    v61 = (void *)(v89 + v88);
    srca = (void *)v109[7];
    core::intrinsics::copy_nonoverlapping::precondition_check(srca, v89 + v88, 1LL, 1LL, v40);
    v62 = v61;
    v33 = (unsigned __int64)srca;
    goto LABEL_121;
  }
  alloc::str::<impl str>::repeat(&v94, asc_1ECD5, 1LL, v40);
  v54 = (void *)*((_QWORD *)&v94 + 1);
  v55 = n[0];
  core::slice::raw::from_raw_parts::precondition_check(*((_QWORD *)&v94 + 1), 1LL, 1LL, n[0]);
  v56 = v89;
  if ( v87 - v89 > v55 )
  {
    v57 = v54;
    src = v54;
    v58 = (void *)(v89 + v88);
    core::intrinsics::copy_nonoverlapping::precondition_check(v57, v89 + v88, 1LL, 1LL, v55);
    memcpy(v58, src, v55);
    v89 = v55 + v56;
    goto LABEL_123;
  }
  *(_QWORD *)&v30 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v87, v54, v55);
  if ( !(_QWORD)v30 )
  {
LABEL_123:
    v33 = v94;
    if ( (_QWORD)v94 )
      _rust_dealloc(*((_QWORD *)&v94 + 1));
    goto LABEL_73;
  }
  if ( (_QWORD)v94 )
  {
    v68 = v30;
    _rust_dealloc(*((_QWORD *)&v94 + 1));
    *(_QWORD *)&v30 = v68;
  }
LABEL_150:
  v69 = v30;
  v122 = v30;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v94, 22LL, 0LL);
  v70 = *((_QWORD *)&v94 + 1);
  if ( (_QWORD)v94 )
    alloc::raw_vec::handle_error(*((_QWORD *)&v94 + 1), n[0]);
  v71 = n[0];
  core::intrinsics::copy_nonoverlapping::precondition_check("failed to write output", n[0], 1LL, 1LL, 22LL);
  *(_QWORD *)(v71 + 14) = 0x74757074756F2065LL;
  *(_OWORD *)v71 = *(_OWORD *)"failed to write output";
  *(_QWORD *)&v94 = v70;
  *((_QWORD *)&v94 + 1) = v71;
  n[0] = 22LL;
  n[1] = v69;
  v72 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  v4 = v72;
  if ( !v72 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v73 = v94;
  v72[1] = *(_OWORD *)n;
  *v72 = v73;
  if ( v101 )
    _rust_dealloc(v100);
  v74 = *((_QWORD *)&v104 + 1);
  if ( **((_QWORD **)&v104 + 1) )
  {
    (**((void (__fastcall ***)(_QWORD))&v104 + 1))(v104);
    v74 = *((_QWORD *)&v104 + 1);
  }
  if ( *(_QWORD *)(v74 + 8) )
    _rust_dealloc(v104);
  if ( v84 )
LABEL_159:
    _rust_dealloc(v85);
LABEL_160:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(&v87);
  return v4;
}
