        __int64 a7)
{
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // r13
  const void *v15; // rcx
  signed __int64 v16; // r8
  _OWORD *v18; // r13
  __int64 **v19; // rax
  __int64 v20; // rcx
  const char *v21; // rdx
  _BOOL8 v22; // rax
  __int64 v23; // r15
  void *v24; // rbp
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rbp
  void *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // r13
  char v33; // al
  __int64 v34; // r15
  const void *v35; // rcx
  signed __int64 v36; // r8
  __int64 v37; // rax
  const void *v38; // rcx
  signed __int64 v39; // r8
  __int64 v40; // rcx
  const char *v41; // rdx
  _BOOL8 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // r15
  __int64 v45; // rcx
  __int64 ***v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  char v49; // al
  unsigned __int64 v50; // r15
  const void *v51; // rcx
  signed __int64 v52; // r8
  const void *v53; // rcx
  signed __int64 v54; // r8
  __int64 v55; // rdx
  _OWORD *result; // rax
  __int64 v57; // rbp
  unsigned __int64 v58; // rbp
  unsigned __int8 v59; // bl
  unsigned __int64 v60; // r13
  unsigned __int8 v61; // r14
  __int64 (__fastcall *v62)(_QWORD, _OWORD *, char *); // rax
  unsigned __int64 v63; // rax
  __int64 v64; // rdx
  __int128 v65; // xmm0
  __int64 v66; // rax
  __int64 v67; // r14
  __int64 v68; // r15
  __int64 v69; // rcx
  __int64 v70; // r12
  __int64 *v71; // rdx
  __int64 v72; // rbx
  __int64 v73; // r15
  __int64 v74; // rdx
  unsigned __int64 v75; // r15
  const void *v76; // r15
  signed __int64 v77; // r12
  _OWORD *v78; // rax
  __int128 v79; // xmm0
  __int128 v80; // xmm1
  __int64 v81; // rdx
  char **v82; // rax
  __int64 v83; // [rsp+0h] [rbp-2438h]
  __int64 v84; // [rsp+10h] [rbp-2428h]
  __int64 v85; // [rsp+10h] [rbp-2428h]
  __int64 v86; // [rsp+18h] [rbp-2420h]
  __int64 v87; // [rsp+18h] [rbp-2420h]
  __int64 v88; // [rsp+18h] [rbp-2420h]
  unsigned int v89; // [rsp+24h] [rbp-2414h] BYREF
  __int64 v90; // [rsp+28h] [rbp-2410h] BYREF
  _BOOL8 v91; // [rsp+30h] [rbp-2408h]
  __int64 v92; // [rsp+38h] [rbp-2400h]
  __int64 v93; // [rsp+40h] [rbp-23F8h]
  _QWORD *v94; // [rsp+48h] [rbp-23F0h]
  __int64 v95; // [rsp+50h] [rbp-23E8h]
  __int64 **v96; // [rsp+58h] [rbp-23E0h] BYREF
  __int64 v97; // [rsp+60h] [rbp-23D8h]
  __int64 *v98; // [rsp+68h] [rbp-23D0h] BYREF
  __int64 (__fastcall *v99)(); // [rsp+70h] [rbp-23C8h]
  __int64 ***v100; // [rsp+78h] [rbp-23C0h]
  __int64 (__fastcall *v101)(); // [rsp+80h] [rbp-23B8h]
  __int64 v102; // [rsp+88h] [rbp-23B0h]
  __int64 v103; // [rsp+90h] [rbp-23A8h] BYREF
  _DWORD v104[2]; // [rsp+98h] [rbp-23A0h] BYREF
  unsigned __int64 v105; // [rsp+A0h] [rbp-2398h]
  __int64 v106; // [rsp+A8h] [rbp-2390h] BYREF
  void *v107; // [rsp+B0h] [rbp-2388h]
  __int64 v108; // [rsp+B8h] [rbp-2380h]
  __int128 v109; // [rsp+C0h] [rbp-2378h] BYREF
  __int128 v110; // [rsp+D0h] [rbp-2368h]
  __int128 v111; // [rsp+E0h] [rbp-2358h]
  _QWORD v112[2]; // [rsp+F8h] [rbp-2340h] BYREF
  __int64 v113; // [rsp+108h] [rbp-2330h] BYREF
  _QWORD v114[2]; // [rsp+110h] [rbp-2328h] BYREF
  _QWORD v115[2]; // [rsp+120h] [rbp-2318h] BYREF
  _QWORD v116[2]; // [rsp+130h] [rbp-2308h] BYREF
  _QWORD v117[2]; // [rsp+140h] [rbp-22F8h] BYREF
  _QWORD v118[2]; // [rsp+150h] [rbp-22E8h] BYREF
  _QWORD v119[2]; // [rsp+160h] [rbp-22D8h] BYREF
  _QWORD v120[2]; // [rsp+170h] [rbp-22C8h] BYREF
  _QWORD v121[2]; // [rsp+180h] [rbp-22B8h] BYREF
  _QWORD v122[4]; // [rsp+190h] [rbp-22A8h] BYREF
  _QWORD v123[4]; // [rsp+1B0h] [rbp-2288h] BYREF
  _QWORD v124[4]; // [rsp+1D0h] [rbp-2268h] BYREF
  _QWORD v125[4]; // [rsp+1F0h] [rbp-2248h] BYREF
  __int128 v126; // [rsp+210h] [rbp-2228h]
  __int128 v127; // [rsp+220h] [rbp-2218h]
  __int128 v128; // [rsp+230h] [rbp-2208h]
  _QWORD v129[6]; // [rsp+240h] [rbp-21F8h] BYREF
  _QWORD v130[6]; // [rsp+270h] [rbp-21C8h] BYREF
  _QWORD v131[6]; // [rsp+2A0h] [rbp-2198h] BYREF
  _QWORD v132[6]; // [rsp+2D0h] [rbp-2168h] BYREF
  _QWORD v133[6]; // [rsp+300h] [rbp-2138h] BYREF
  _QWORD v134[6]; // [rsp+330h] [rbp-2108h] BYREF
  _QWORD v135[6]; // [rsp+360h] [rbp-20D8h] BYREF
  _OWORD v136[3]; // [rsp+390h] [rbp-20A8h] BYREF
  _OWORD v137[3]; // [rsp+3C0h] [rbp-2078h] BYREF
  _OWORD s[513]; // [rsp+3F0h] [rbp-2048h] BYREF
  unsigned __int8 v139; // [rsp+2400h] [rbp-38h] BYREF

  *((_QWORD *)&s[257] + 1) = 0LL;
  *((_QWORD *)&s[1] + 1) = 0LL;
  std::sys::pal::unix::fs::stat(s);
  if ( *(_QWORD *)&s[0] == 2LL )
  {
    v11 = a6;
    std::io::error::repr_bitpacked::decode_repr(s, *((_QWORD *)&s[0] + 1));
    if ( LOBYTE(s[0]) >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)s + 8);
    _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
    v12 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v13 = *(_QWORD *)(v12 + 8);
    v14 = *(_QWORD *)(v12 + 16);
    core::slice::raw::from_raw_parts::precondition_check(v13, 1LL, 1LL, v14);
    v115[0] = v13;
    v115[1] = v14;
    v114[0] = v115;
    v114[1] = <&T as core::fmt::Display>::fmt;
    v129[0] = &unk_18A928;
    v129[1] = 2LL;
    v129[4] = 0LL;
    v129[2] = v114;
    v129[3] = 1LL;
    std::io::stdio::_eprint(v129);
    v122[0] = a3;
    v122[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v122[2] = &off_18A978;
    v122[3] = <&T as core::fmt::Display>::fmt;
    v130[0] = &off_18A948;
    v130[1] = 3LL;
    v130[4] = 0LL;
    v130[2] = v122;
    v130[3] = 2LL;
    std::io::stdio::_eprint(v130);
    v15 = (const void *)a3[1];
    if ( v15 )
    {
      v16 = a3[2];
      if ( v16 >= 0 )
      {
        if ( (*(_BYTE *)(v11 + 140) & 1) != 0 && *(_BYTE *)(v11 + 142) != 2 )
          return uu_tail::follow::watch::Observer::add_path(v11, a4, a5, v15, v16, 0LL, v83, 0);
        return 0LL;
      }
    }
    goto LABEL_149;
  }
  if ( (unsigned __int8)std::path::Path::is_dir(a4, a5) )
  {
    _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
    v19 = (__int64 **)a3[1];
    if ( !v19 )
      goto LABEL_149;
    v20 = a3[2];
    if ( v20 < 0 )
      goto LABEL_149;
    v95 = a6;
    v96 = v19;
    v97 = v20;
    if ( (*a2 & 1) != 0 )
    {
      v21 = (_BYTE *)(&dword_0 + 1);
      if ( (a2[1] & 1) == 0 )
        v21 = anon_ab742581333cf5e7f01380032d71b570_114_llvm_1562610066123874583;
      v22 = !(a2[1] & 1);
      v90 = (__int64)v21;
      v91 = v22;
      v98 = &v90;
      v99 = <&T as core::fmt::Display>::fmt;
      v100 = &v96;
      v101 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&s[0] = &anon_ab742581333cf5e7f01380032d71b570_113_llvm_1562610066123874583;
      *((_QWORD *)&s[0] + 1) = 3LL;
      *(_QWORD *)&s[2] = 0LL;
      *(_QWORD *)&s[1] = &v98;
      *((_QWORD *)&s[1] + 1) = 2LL;
      std::io::stdio::_print(s);
      a2[1] = 0;
    }
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(s, 14LL, 0LL);
    v23 = *((_QWORD *)&s[0] + 1);
    if ( *(_QWORD *)&s[0] )
      alloc::raw_vec::handle_error(*((_QWORD *)&s[0] + 1), *(_QWORD *)&s[1]);
    v24 = *(void **)&s[1];
    core::intrinsics::copy_nonoverlapping::precondition_check(&unk_2D47B, *(_QWORD *)&s[1], 1LL, 1LL, 14LL);
    qmemcpy(v24, "Is a directory", 14);
    v106 = v23;
    v107 = v24;
    v108 = 14LL;
    v25 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v26 = *(_QWORD *)(v25 + 8);
    v27 = *(_QWORD *)(v25 + 16);
    core::slice::raw::from_raw_parts::precondition_check(v26, 1LL, 1LL, v27);
    v117[0] = v26;
    v117[1] = v27;
    v116[0] = v117;
    v116[1] = <&T as core::fmt::Display>::fmt;
    v131[0] = &unk_18A928;
    v131[1] = 2LL;
    v131[4] = 0LL;
    v131[2] = v116;
    v131[3] = 1LL;
    std::io::stdio::_eprint(v131);
    v123[0] = a3;
    v123[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v123[2] = &v106;
    v123[3] = <alloc::string::String as core::fmt::Display>::fmt;
    v132[0] = &off_18AA78;
    v132[1] = 3LL;
    v132[4] = 0LL;
    v132[2] = v123;
    v132[3] = 2LL;
    std::io::stdio::_eprint(v132);
    if ( *(_BYTE *)(a1 + 76) != 2 )
    {
      v28 = &dword_0 + 1;
      if ( (*(_BYTE *)(a1 + 72) & 1) == 0 )
        v28 = &unk_2D49B;
      v29 = 24LL;
      if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
        v29 = 0LL;
      v118[0] = v28;
      v118[1] = v29;
      v30 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v31 = *(_QWORD *)(v30 + 8);
      v32 = *(_QWORD *)(v30 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v31, 1LL, 1LL, v32);
      v120[0] = v31;
      v120[1] = v32;
      v119[0] = v120;
      v119[1] = <&T as core::fmt::Display>::fmt;
      v133[0] = &unk_18A928;
      v133[1] = 2LL;
      v133[4] = 0LL;
      v133[2] = v119;
      v133[3] = 1LL;
      std::io::stdio::_eprint(v133);
      v124[0] = a3;
      v124[1] = <alloc::string::String as core::fmt::Display>::fmt;
      v124[2] = v118;
      v124[3] = <&T as core::fmt::Display>::fmt;
      v134[0] = &unk_18AAA8;
      v134[1] = 3LL;
      v134[4] = 0LL;
      v134[2] = v124;
      v134[3] = 2LL;
      std::io::stdio::_eprint(v134);
    }
    v33 = *(_BYTE *)(v95 + 142);
    if ( (v33 & 1) != 0 && (*(_BYTE *)(v95 + 140) & 1) != 0 )
    {
      v38 = (const void *)a3[1];
      if ( !v38 )
        goto LABEL_149;
      v39 = a3[2];
      if ( v39 < 0 )
        goto LABEL_149;
      if ( v33 == 2 || (v18 = uu_tail::follow::watch::Observer::add_path(v95, a4, a5, v38, v39, 0LL, v83, 0)) == 0LL )
      {
        if ( v106 )
          _rust_dealloc(v107, v106, 1LL);
        return 0LL;
      }
    }
    else
    {
      v18 = 0LL;
    }
    if ( v106 )
      _rust_dealloc(v107, v106, 1LL);
    return v18;
  }
  if ( !(unsigned __int8)uu_tail::paths::Input::is_tailable(a3) )
  {
    v35 = (const void *)a3[1];
    if ( v35 )
    {
      v36 = a3[2];
      if ( v36 >= 0 )
      {
        if ( (*(_BYTE *)(a6 + 140) & 1) != 0 && *(_BYTE *)(a6 + 142) != 2 )
          return uu_tail::follow::watch::Observer::add_path(a6, a4, a5, v35, v36, 0LL, v83, 0);
        return 0LL;
      }
    }
LABEL_149:
    core::panicking::panic_nounwind(anon_25ca73c7ec58fbee70b780a6cb8b0c0a_11_llvm_4725413469243929574, 162LL);
  }
  v95 = a6;
  std::sys::pal::unix::fs::stat(s);
  v34 = *(_QWORD *)&s[0];
  if ( *(_QWORD *)&s[0] == 2LL )
  {
    std::io::error::repr_bitpacked::decode_repr(s, *((_QWORD *)&s[0] + 1));
    if ( LOBYTE(s[0]) >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)s + 8);
  }
  else
  {
    v86 = *(_QWORD *)&s[6];
  }
  *(_QWORD *)&s[0] = 0x1B600000000LL;
  DWORD2(s[0]) = 1;
  WORD6(s[0]) = 0;
  std::fs::OpenOptions::_open(v104, s, a4, a5);
  if ( !v104[0] )
  {
    v89 = v104[1];
    if ( !a3[1] )
      goto LABEL_149;
    v40 = a3[2];
    if ( v40 < 0 )
      goto LABEL_149;
    v96 = (__int64 **)a3[1];
    v97 = v40;
    if ( (*a2 & 1) != 0 )
    {
      v41 = (_BYTE *)(&dword_0 + 1);
      if ( (a2[1] & 1) == 0 )
        v41 = anon_ab742581333cf5e7f01380032d71b570_114_llvm_1562610066123874583;
      v42 = !(a2[1] & 1);
      v90 = (__int64)v41;
      v91 = v42;
      v98 = &v90;
      v99 = <&T as core::fmt::Display>::fmt;
      v100 = &v96;
      v101 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&s[0] = &anon_ab742581333cf5e7f01380032d71b570_113_llvm_1562610066123874583;
      *((_QWORD *)&s[0] + 1) = 3LL;
      *(_QWORD *)&s[2] = 0LL;
      *(_QWORD *)&s[1] = &v98;
      *((_QWORD *)&s[1] + 1) = 2LL;
      std::io::stdio::_print(s);
      a2[1] = 0;
    }
    if ( (*(_BYTE *)(a1 + 75) & 1) == 0 )
    {
      v43 = 0LL;
      if ( a3[3] == 0x8000000000000000LL )
        v43 = a7;
      if ( (unsigned __int8)<std::fs::File as uu_tail::paths::FileExtTail>::is_seekable(&v89, v43) )
      {
        if ( v34 == 2 )
          core::option::unwrap_failed(&off_18A988);
        if ( v86 )
        {
          uu_tail::bounded_tail(&v89, a1);
          std::io::buffered::bufreader::BufReader<R>::with_capacity(v136, 0x2000LL, v89);
          v111 = v136[2];
          v110 = v136[1];
          v109 = v136[0];
          goto LABEL_138;
        }
      }
    }
    std::io::buffered::bufreader::BufReader<R>::with_capacity(v137, 0x2000LL, v89);
    v111 = v137[2];
    v110 = v137[1];
    v109 = v137[0];
    v113 = std::io::stdio::stdout(v137, 0x2000LL);
    v44 = std::io::stdio::Stdout::lock(&v113);
    v90 = v44;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(s, 0x2000LL, 0LL);
    if ( *(_QWORD *)&s[0] )
      alloc::raw_vec::handle_error(*((_QWORD *)&s[0] + 1), *(_QWORD *)&s[1]);
    v98 = (__int64 *)*((_QWORD *)&s[0] + 1);
    v99 = *(__int64 (__fastcall **)())&s[1];
    v100 = 0LL;
    LOBYTE(v101) = 0;
    v102 = v44;
    switch ( *(_QWORD *)a1 )
    {
      case 0LL:
        v45 = *(_QWORD *)(a1 + 8);
        LOBYTE(s[3]) = *(_BYTE *)(a1 + 16);
        *((_QWORD *)&s[2] + 1) = v45;
        *(_QWORD *)&s[0] = 0LL;
        *((_QWORD *)&s[0] + 1) = 8LL;
        memset(&s[1], 0, 24);
        v46 = (__int64 ***)&v109;
        v18 = (_OWORD *)uu_tail::chunks::LinesChunkBuffer::fill((__int64)s, (__int64)&v109);
        if ( v18 )
          goto LABEL_115;
        v96 = &v98;
        alloc::collections::vec_deque::VecDeque<T,A>::slice_ranges(&v90, s, *((_QWORD *)&s[1] + 1));
        v85 = a5;
        v66 = *((_QWORD *)&s[0] + 1) + 8 * v91;
        v47 = *((_QWORD *)&s[0] + 1) + 8 * v93;
        v88 = v47;
        v67 = *((_QWORD *)&s[0] + 1) + 8 * v92;
        v68 = *((_QWORD *)&s[0] + 1) + 8 * v90;
        v94 = a3;
        while ( v68 != v66 )
        {
          v69 = v68 + 8;
          if ( !v68 )
            goto LABEL_110;
          v70 = a4;
          v71 = (__int64 *)v68;
          v72 = v66;
          v68 += 8LL;
LABEL_113:
          v46 = &v96;
          v18 = uu_tail::chunks::LinesChunk::print_bytes(*v71, &v96, 0LL);
          v66 = v72;
          a4 = v70;
          a3 = v94;
          if ( v18 )
          {
            a5 = v85;
LABEL_115:
            core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>>(
              s,
              v46,
              v47,
              v48);
            goto LABEL_136;
          }
        }
        v69 = v68;
LABEL_110:
        if ( !v67 || v67 == v88 )
        {
          core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>>(
            s,
            v88,
            v47,
            v69);
          a5 = v85;
          goto LABEL_135;
        }
        v70 = a4;
        v68 = v67 + 8;
        v71 = (__int64 *)v67;
        v72 = v88;
        v88 = v66;
        v67 = v69;
        goto LABEL_113;
      case 1LL:
        v57 = *(_QWORD *)(a1 + 8);
        if ( v57 == 1 )
          goto LABEL_102;
        v87 = a4;
        v84 = a5;
        if ( !v57 )
        {
          v82 = &off_18AD00;
LABEL_157:
          core::panicking::panic_const::panic_const_sub_overflow(v82);
        }
        v58 = v57 - 1;
        v59 = *(_BYTE *)(a1 + 16);
        memset(s, 0, sizeof(s));
        v139 = v59;
        while ( 2 )
        {
          uu_tail::chunks::BytesChunk::fill(&v90, (__int64)s, (__int64)&v109);
          if ( v90 )
          {
            v18 = (_OWORD *)v91;
          }
          else
          {
            if ( v91 )
            {
              v60 = *(_QWORD *)&s[512];
              if ( *(_QWORD *)&s[512] >= 0x2001uLL )
                goto LABEL_151;
              v61 = v139;
              v62 = (__int64 (__fastcall *)(_QWORD, _OWORD *, char *))core::sync::atomic::atomic_load(
                                                                        &memchr::arch::x86_64::memchr::count_raw::FN,
                                                                        0LL);
              v63 = v62(v61, s, (char *)s + v60);
              *((_QWORD *)&s[512] + 1) = v63;
              if ( v58 > v63 )
              {
                v58 -= v63;
                continue;
              }
            }
            else
            {
              *((_QWORD *)&s[512] + 1) = 0LL;
            }
            v60 = *(_QWORD *)&s[512];
            if ( *(_QWORD *)&s[512] )
            {
              a5 = v84;
              if ( *(_QWORD *)&s[512] <= 0x2000uLL )
              {
                v75 = 0LL;
                while ( 1 )
                {
                  v96 = (__int64 **)((char *)s + v75);
                  if ( !v58 )
                    break;
                  v90 = (__int64)&v139;
                  ++v75;
                  v58 -= (unsigned __int8)core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(&v96, &v90);
                  if ( v60 == v75 )
                  {
                    v75 = v60;
                    break;
                  }
                }
                a4 = v87;
                v18 = uu_tail::chunks::LinesChunk::print_bytes((__int64)s, &v98, v75);
                if ( !v18 )
                {
                  if ( <std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(
                         &v109,
                         &v98) )
                  {
                    v18 = (_OWORD *)<core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                                      v81,
                                      &off_18AD18);
                  }
                  else
                  {
LABEL_135:
                    v18 = 0LL;
                  }
                }
LABEL_136:
                core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v98);
                if ( v18 )
                {
                  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v109);
                  return v18;
                }
LABEL_138:
                v76 = (const void *)a3[1];
                if ( v76 )
                {
                  v77 = a3[2];
                  if ( v77 >= 0 )
                  {
                    v128 = v111;
                    v127 = v110;
                    v126 = v109;
                    v78 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 48LL, 0LL);
                    if ( !v78 )
                      alloc::alloc::handle_alloc_error(8LL, 48LL);
                    v79 = v126;
                    v80 = v127;
                    v78[2] = v128;
                    v78[1] = v80;
                    *v78 = v79;
                    return uu_tail::follow::watch::Observer::add_path(
                             v95,
                             a4,
                             a5,
                             v76,
                             v77,
                             (__int64)v78,
                             (__int64)&anon_05a4d4ca64bdea474ebd4b0eb3197a7a_35_llvm_11384070901547909942,
                             1u);
                  }
                }
                goto LABEL_149;
              }
LABEL_151:
              core::slice::index::slice_end_index_len_fail(
                v60,
                0x2000LL,
                &anon_d47df02a786f831a0d9960a1e02c39b9_25_llvm_1356039585147583896);
            }
            v18 = 0LL;
          }
          break;
        }
        a5 = v84;
        a4 = v87;
        goto LABEL_136;
      case 2LL:
LABEL_102:
        if ( !<std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(
                &v109,
                &v98) )
          goto LABEL_135;
        *(_QWORD *)&s[0] = 0x8000000000000000LL;
        *((_QWORD *)&s[1] + 1) = v64;
        v18 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
        if ( !v18 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_104:
        v65 = s[0];
        v18[1] = s[1];
        *v18 = v65;
        goto LABEL_136;
      case 3LL:
        goto LABEL_135;
      case 4LL:
        switch ( *(_QWORD *)(a1 + 8) )
        {
          case 0LL:
            s[2] = *(unsigned __int64 *)(a1 + 16);
            *(_QWORD *)&s[0] = 0LL;
            *((_QWORD *)&s[0] + 1) = 8LL;
            s[1] = 0LL;
            v18 = (_OWORD *)uu_tail::chunks::BytesChunkBuffer::fill((unsigned __int64 *)s, (__int64)&v109);
            if ( v18 || (v18 = uu_tail::chunks::BytesChunkBuffer::print((__int64)s, &v98)) != 0LL )
            {
              core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<alloc::boxed::Box<uu_tail::chunks::BytesChunk>>>(s);
              goto LABEL_136;
            }
            core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<alloc::boxed::Box<uu_tail::chunks::BytesChunk>>>(s);
            goto LABEL_135;
          case 1LL:
            v73 = *(_QWORD *)(a1 + 16);
            if ( v73 == 1 )
              goto LABEL_121;
            v94 = a3;
            if ( v73 )
            {
              v18 = 0LL;
              memset(s, 0, 0x2008uLL);
              uu_tail::chunks::BytesChunk::fill(&v90, (__int64)s, (__int64)&v109);
              if ( v90 )
              {
                v18 = (_OWORD *)v91;
              }
              else if ( v91 )
              {
                JUMPOUT(0xD6C48LL);
              }
              a3 = v94;
              goto LABEL_136;
            }
            v82 = &off_18ACA0;
            break;
          case 2LL:
LABEL_121:
            if ( !<std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(
                    &v109,
                    &v98) )
              goto LABEL_135;
            *(_QWORD *)&s[0] = 0x8000000000000000LL;
            *((_QWORD *)&s[1] + 1) = v74;
            v18 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
            if ( !v18 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            goto LABEL_104;
          case 3LL:
            goto LABEL_135;
        }
        goto LABEL_157;
    }
  }
  switch ( v105 & 3 )
  {
    case 0uLL:
      v37 = 16LL;
      goto LABEL_71;
    case 1uLL:
      v37 = 15LL;
LABEL_71:
      v49 = *(_BYTE *)(v105 + v37);
      break;
    case 2uLL:
      v49 = std::sys::pal::unix::decode_error_kind(HIDWORD(v105));
      break;
    case 3uLL:
      v49 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(v105));
      if ( v49 == 41 )
        core::hint::unreachable_unchecked::precondition_check();
      return result;
  }
  v50 = v105;
  if ( v49 == 1 )
  {
    v112[1] = v105;
    v51 = (const void *)a3[1];
    if ( !v51 )
      goto LABEL_149;
    v52 = a3[2];
    if ( v52 < 0 )
      goto LABEL_149;
    if ( (*(_BYTE *)(v95 + 140) & 1) == 0
      || *(_BYTE *)(v95 + 142) == 2
      || (v18 = uu_tail::follow::watch::Observer::add_path(v95, a4, a5, v51, v52, 0LL, v83, 0)) == 0LL )
    {
      v103 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
               v50,
               a3);
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
      v121[0] = uucore::util_name(v50, a3);
      v121[1] = v55;
      v125[0] = v121;
      v125[1] = <&T as core::fmt::Display>::fmt;
      v125[2] = &v103;
      v125[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v135[0] = &unk_18AA48;
      v135[1] = 3LL;
      v135[4] = 0LL;
      v135[2] = v125;
      v135[3] = 2LL;
      std::io::stdio::_eprint(v135);
      core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(&v103);
      return 0LL;
    }
    std::io::error::repr_bitpacked::decode_repr(s, v50);
    if ( LOBYTE(s[0]) >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)s + 8);
  }
  else
  {
    v112[0] = v105;
    v53 = (const void *)a3[1];
    if ( !v53 )
      goto LABEL_149;
    v54 = a3[2];
    if ( v54 < 0 )
      goto LABEL_149;
    if ( (*(_BYTE *)(v95 + 140) & 1) != 0
      && *(_BYTE *)(v95 + 142) != 2
      && (v18 = uu_tail::follow::watch::Observer::add_path(v95, a4, a5, v53, v54, 0LL, v83, 0)) != 0LL )
    {
      core::ptr::drop_in_place<std::io::error::Error>(v112);
    }
    else
    {
      return (_OWORD *)<std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                         v50,
                         a3);
    }
  }
  return v18;
}
