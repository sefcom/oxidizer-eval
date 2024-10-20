_OWORD *__fastcall uu_tac::tac(__m256i *p_dest, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __m256i *v6; // rbp
  char *v9; // r12
  char *v10; // rbx
  unsigned __int64 v11; // rdx
  size_t v12; // rsi
  __int64 v13; // rcx
  char *v14; // rbx
  _BYTE *v15; // r15
  char *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r14
  size_t v21; // r15
  __int64 v22; // r14
  void *v23; // rax
  void *v24; // rax
  __int64 v25; // r14
  _OWORD *v26; // rax
  __int128 v27; // xmm0
  __m256i *v28; // r14
  __int64 (__fastcall **v29)(); // r15
  __int64 (__fastcall *v30)(); // rax
  __int32 v31; // eax
  __int64 v32; // r14
  _OWORD *v33; // rax
  __int128 v34; // xmm0
  __int64 (__fastcall *v35)(); // rsi
  __m256i *v36; // r14
  int v37; // ebp
  void *v38; // r13
  __int64 v39; // r13
  _OWORD *v40; // rax
  __int128 v41; // xmm0
  __m256i *v42; // r14
  __int64 (__fastcall **v43)(); // r15
  __int64 (__fastcall *v44)(); // rsi
  __int64 v45; // rsi
  __int64 (__fastcall **v46)(); // rbx
  unsigned __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rax
  _OWORD *v50; // rax
  __int128 v51; // xmm0
  __int128 v52; // kr00_16
  __int64 v53; // rsi
  __int64 (__fastcall **v54)(); // r14
  unsigned __int64 v55; // rcx
  __int64 v56; // rdx
  unsigned __int64 v57; // rdx
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // r14
  __int64 v61; // rax
  void *v62; // r12
  __int64 v63; // r13
  __int64 v64; // rbx
  size_t v65; // rbp
  size_t v66; // r15
  __int64 v67; // rax
  size_t v68; // rcx
  _QWORD *v69; // rax
  __int64 (__fastcall ***v70)(); // rax
  __int64 (__fastcall **v71)(); // rdx
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 v74; // rax
  unsigned __int64 v75; // rsi
  size_t v76; // rdx
  __int64 (__fastcall **v77)(); // rdx
  char v78; // r12
  __int64 (__fastcall **v79)(); // r14
  size_t v80; // rdx
  char *v81; // rsi
  __int64 v82; // r14
  size_t v83; // r14
  size_t v84; // rbp
  size_t v85; // rdi
  size_t v86; // r12
  size_t v87; // rdx
  char *v88; // rsi
  size_t v89; // rbp
  __int64 v90; // rax
  __int64 v91; // r14
  __int64 v92; // r14
  __int64 v93; // rax
  __int64 v94; // rdx
  size_t v95; // r13
  size_t v96; // r14
  char *v97; // rsi
  __int64 v98; // rbx
  size_t v99; // rdx
  unsigned __int64 v100; // r14
  char *v101; // rsi
  __int64 v102; // rbx
  __int64 v103; // rax
  __int64 v104; // rbx
  size_t v105; // r14
  __int64 v106; // rbx
  void *v107; // rsi
  unsigned __int64 v108; // rcx
  __int64 v109; // rdx
  _OWORD *result; // rax
  __int128 v111; // xmm0
  __int64 v112; // rsi
  _OWORD *v113; // rax
  __int128 v114; // xmm0
  _OWORD *v115; // r14
  unsigned __int64 v116; // rbx
  unsigned __int64 v117; // rcx
  __int64 v118; // rdx
  unsigned __int64 v119; // rdx
  __int64 v120; // rcx
  char **v121; // rax
  char **v122; // rdx
  __int32 v123; // [rsp+0h] [rbp-2B8h]
  int v124; // [rsp+4h] [rbp-2B4h]
  __m256i *v125; // [rsp+8h] [rbp-2B0h]
  char *v126; // [rsp+10h] [rbp-2A8h]
  void *src; // [rsp+18h] [rbp-2A0h]
  int fd[4]; // [rsp+20h] [rbp-298h] BYREF
  __int64 v129; // [rsp+30h] [rbp-288h]
  char v130; // [rsp+38h] [rbp-280h]
  __int64 v131; // [rsp+40h] [rbp-278h]
  size_t v132; // [rsp+50h] [rbp-268h]
  size_t v133; // [rsp+58h] [rbp-260h]
  __int64 v134; // [rsp+60h] [rbp-258h] BYREF
  __int64 (__fastcall **v135)(); // [rsp+68h] [rbp-250h]
  size_t v136; // [rsp+70h] [rbp-248h]
  char v137; // [rsp+78h] [rbp-240h]
  __m256i v138; // [rsp+80h] [rbp-238h] BYREF
  __int128 v139; // [rsp+A0h] [rbp-218h]
  __int128 v140; // [rsp+B0h] [rbp-208h]
  char *v141; // [rsp+C0h] [rbp-1F8h]
  int v142; // [rsp+CCh] [rbp-1ECh]
  __int64 v143; // [rsp+D0h] [rbp-1E8h] BYREF
  __int64 (__fastcall **v144)(); // [rsp+D8h] [rbp-1E0h]
  __int128 v145; // [rsp+E0h] [rbp-1D8h] BYREF
  __m256i dest; // [rsp+F0h] [rbp-1C8h] BYREF
  __int128 v147; // [rsp+110h] [rbp-1A8h]
  __int128 v148; // [rsp+120h] [rbp-198h]
  __int64 v149; // [rsp+130h] [rbp-188h]
  size_t v150; // [rsp+138h] [rbp-180h]
  void *v151; // [rsp+140h] [rbp-178h]
  size_t v152; // [rsp+148h] [rbp-170h]
  char **v153; // [rsp+1A8h] [rbp-110h]
  char **v154; // [rsp+1B0h] [rbp-108h]
  char *v155; // [rsp+1B8h] [rbp-100h]
  __int128 v156; // [rsp+1C0h] [rbp-F8h]
  __int64 v157; // [rsp+1D0h] [rbp-E8h]
  __int64 v158; // [rsp+1D8h] [rbp-E0h]
  char *v159; // [rsp+1E0h] [rbp-D8h]
  _QWORD *v160; // [rsp+1E8h] [rbp-D0h]
  __int128 v161; // [rsp+1F0h] [rbp-C8h] BYREF
  size_t v162; // [rsp+200h] [rbp-B8h]
  __int64 v163; // [rsp+210h] [rbp-A8h]
  size_t v164; // [rsp+218h] [rbp-A0h]
  __m256i v165; // [rsp+220h] [rbp-98h] BYREF
  __int64 v166; // [rsp+248h] [rbp-70h]
  __int64 v167; // [rsp+250h] [rbp-68h]
  char *v168; // [rsp+258h] [rbp-60h]
  __int64 v169; // [rsp+260h] [rbp-58h]
  size_t v170; // [rsp+268h] [rbp-50h]
  __int128 v171; // [rsp+270h] [rbp-48h] BYREF
  __int64 v172; // [rsp+280h] [rbp-38h]

  v142 = a3;
  v9 = (char *)p_dest;
  if ( a4 )
  {
    p_dest = &v138;
    regex::regex::bytes::Regex::new(&v138, a5, a6);
    if ( !v138.m256i_i64[0] )
    {
      dest.m256i_i64[3] = v138.m256i_i64[3];
      *(_OWORD *)&dest.m256i_u64[1] = *(_OWORD *)&v138.m256i_u64[1];
      dest.m256i_i64[0] = 0x8000000000000000LL;
      result = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !result )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v111 = *(_OWORD *)dest.m256i_i8;
      result[1] = *(_OWORD *)&dest.m256i_u64[2];
      *result = v111;
      return result;
    }
    v163 = a5;
    v158 = a6;
    v165 = v138;
    if ( !a2 )
    {
LABEL_180:
      core::ptr::drop_in_place<core::option::Option<regex::regex::bytes::Regex>>(&v165);
      return 0LL;
    }
  }
  else
  {
    v163 = a5;
    v158 = a6;
    v165.m256i_i64[0] = 0LL;
    if ( !a2 )
      goto LABEL_180;
  }
  v10 = v9;
  v168 = &v9[16 * a2];
  v154 = &off_25FC80;
  v153 = &off_25FC20;
  while ( 1 )
  {
    v15 = *(_BYTE **)v10;
    v141 = v10;
    v16 = (char *)*((_QWORD *)v10 + 1);
    if ( v16 != (_BYTE *)&dword_0 + 1 || *v15 != 45 )
      break;
    v123 = 0;
    v124 = 0;
    *(_QWORD *)fd = std::io::stdio::stdin(p_dest);
    dest.m256i_i64[2] = 0LL;
    dest.m256i_i64[0] = 0LL;
    dest.m256i_i8[24] = 0;
    dest.m256i_i16[13] = 0;
    v123 = 0;
    v124 = 0;
    memmap2::MmapOptions::map(&v138, &dest, fd);
    if ( !v138.m256i_i64[0] )
    {
      v31 = v138.m256i_i32[2];
      v21 = v138.m256i_u64[2];
      src = (void *)v138.m256i_i64[1];
      v156 = *(_OWORD *)&v138.m256i_u64[1];
      LOBYTE(v31) = 1;
      v123 = v31;
      LODWORD(v16) = 0;
      goto LABEL_94;
    }
    v134 = 0LL;
    v123 = 0;
    v17 = v138.m256i_i64[1];
    v124 = 0;
    core::ptr::drop_in_place<std::io::error::Error>(v138.m256i_i64[1]);
    *(_QWORD *)fd = 0LL;
    *(_QWORD *)&fd[2] = 1LL;
    v129 = 0LL;
    v16 = (char *)&_rust_no_alloc_shim_is_unstable;
    v143 = std::io::stdio::stdin(v17);
    v18 = <std::io::stdio::Stdin as std::io::Read>::read_to_end(&v143, fd);
    v20 = v19;
    if ( v18 != 1 )
    {
      if ( v18 )
      {
        core::ptr::drop_in_place<std::io::error::Error>(v19);
        v9 = *(char **)fd;
        v6 = *(__m256i **)&fd[2];
        v21 = v129;
        LOBYTE(v16) = 1;
        if ( v134 )
        {
          v54 = v135;
          v55 = memmap2::os::page_size::PAGE_SIZE;
          if ( !memmap2::os::page_size::PAGE_SIZE )
          {
            v55 = sysconf(30);
            memmap2::os::page_size::PAGE_SIZE = v55;
            if ( !v55 )
            {
              v125 = v6;
              v126 = v9;
              v124 = 1;
              core::panicking::panic_const::panic_const_rem_by_zero(
                &anon_74520b1e2a4bb4a37bc22483efa2dbc4_3_llvm_5650606507723373874,
                fd,
                v56,
                0LL);
            }
          }
          if ( (v55 | (unsigned __int64)v54) >> 32 )
            v57 = (unsigned __int64)v54 % v55;
          else
            v57 = (unsigned int)v54 % (unsigned int)v55;
          v59 = -(__int64)v57;
          if ( !(v136 + v57) )
            v59 = 0LL;
          munmap((char *)v54 + v59, v57 + (v136 + v57 == 0) + v136);
        }
      }
      else
      {
        v9 = *(char **)fd;
        v6 = *(__m256i **)&fd[2];
        v21 = v129;
        LOBYTE(v16) = 1;
      }
      v123 = 0;
      src = v6;
      goto LABEL_94;
    }
    v49 = _rust_alloc(5LL, 1LL);
    if ( !v49 )
      alloc::raw_vec::handle_error(1LL, 5LL);
    *(_BYTE *)(v49 + 4) = 110;
    *(_DWORD *)v49 = 1768191091;
    dest.m256i_i64[0] = 5LL;
    dest.m256i_i64[1] = v49;
    dest.m256i_i64[2] = 5LL;
    dest.m256i_i64[3] = v20;
    v50 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v50 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v51 = *(_OWORD *)dest.m256i_i8;
    v50[1] = *(_OWORD *)&dest.m256i_u64[2];
    *v50 = v51;
    *(_QWORD *)&v145 = v50;
    *((_QWORD *)&v145 + 1) = &off_25FCE8;
    _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
    if ( uucore::UTIL_NAME != 2 )
      once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v161 = xmmword_29CE90;
    v138.m256i_i64[0] = (__int64)&v161;
    v138.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v138.m256i_i64[2] = (__int64)&v145;
    v138.m256i_i64[3] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    dest.m256i_i64[0] = (__int64)&unk_25FD58;
    dest.m256i_i64[1] = 3LL;
    *(_QWORD *)&v147 = 0LL;
    dest.m256i_i64[2] = (__int64)&v138;
    dest.m256i_i64[3] = 2LL;
    p_dest = &dest;
    std::io::stdio::_eprint(&dest);
    v52 = v145;
    if ( **((_QWORD **)&v145 + 1) )
    {
      p_dest = (__m256i *)v145;
      (**((void (__fastcall ***)(_QWORD))&v145 + 1))(v145);
    }
    v53 = *(_QWORD *)(*((_QWORD *)&v52 + 1) + 8LL);
    if ( v53 )
    {
      p_dest = (__m256i *)v52;
      _rust_dealloc(v52, v53, *(_QWORD *)(*((_QWORD *)&v52 + 1) + 16LL));
    }
    v45 = *(_QWORD *)fd;
    if ( *(_QWORD *)fd )
    {
      p_dest = *(__m256i **)&fd[2];
      _rust_dealloc(*(_QWORD *)&fd[2], *(_QWORD *)fd, 1LL);
    }
    if ( !v134 )
      goto LABEL_12;
    v46 = v135;
    v47 = memmap2::os::page_size::PAGE_SIZE;
    if ( !memmap2::os::page_size::PAGE_SIZE )
    {
      v47 = sysconf(30);
      memmap2::os::page_size::PAGE_SIZE = v47;
      if ( !v47 )
        goto LABEL_233;
    }
    if ( (v47 | (unsigned __int64)v46) >> 32 )
      v11 = (unsigned __int64)v46 % v47;
    else
      v11 = (unsigned int)v46 % (unsigned int)v47;
    v12 = v136;
LABEL_9:
    v13 = -(__int64)v11;
    if ( !(v12 + v11) )
      v13 = 0LL;
    p_dest = (__m256i *)((char *)v46 + v13);
    munmap((char *)v46 + v13, v11 + (v12 + v11 == 0) + v12);
LABEL_12:
    v14 = v141;
LABEL_13:
    v10 = v14 + 16;
    if ( v10 == v168 )
      goto LABEL_180;
  }
  v123 = 0;
  v124 = 0;
  if ( (unsigned __int8)std::path::Path::is_dir(v15, v16) )
  {
    if ( v16 )
    {
      if ( (__int64)v16 < 0 )
        goto LABEL_222;
      v22 = 1LL;
      v23 = (void *)_rust_alloc(v16, 1LL);
      if ( !v23 )
      {
LABEL_218:
        v155 = v16;
        goto LABEL_223;
      }
    }
    else
    {
      v23 = &dword_0 + 1;
    }
    v25 = (__int64)v23;
    memcpy(v23, v15, (size_t)v16);
    dest.m256i_i64[1] = (__int64)v16;
    v155 = (char *)v25;
    dest.m256i_i64[2] = v25;
    dest.m256i_i64[3] = (__int64)v16;
    dest.m256i_i64[0] = 0x8000000000000001LL;
    v26 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v26 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v27 = *(_OWORD *)dest.m256i_i8;
    v26[1] = *(_OWORD *)&dest.m256i_u64[2];
    *v26 = v27;
    v134 = (__int64)v26;
    v135 = &off_25FCE8;
    _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
    v14 = v141;
    if ( uucore::UTIL_NAME != 2 )
      once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    *(_OWORD *)fd = xmmword_29CE90;
    v138.m256i_i64[0] = (__int64)fd;
    v138.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v138.m256i_i64[2] = (__int64)&v134;
    v138.m256i_i64[3] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    dest.m256i_i64[0] = (__int64)&unk_25FD58;
    dest.m256i_i64[1] = 3LL;
    *(_QWORD *)&v147 = 0LL;
    dest.m256i_i64[2] = (__int64)&v138;
    dest.m256i_i64[3] = 2LL;
    p_dest = &dest;
    std::io::stdio::_eprint(&dest);
    v28 = (__m256i *)v134;
    v29 = v135;
    v30 = *v135;
    if ( !*v135 )
      goto LABEL_45;
    goto LABEL_44;
  }
  v123 = 0;
  v124 = 0;
  std::sys::pal::unix::fs::stat(&dest);
  if ( dest.m256i_i32[0] == 2 )
  {
    v123 = 0;
    v124 = 0;
    core::ptr::drop_in_place<std::io::error::Error>(dest.m256i_i64[1]);
    if ( v16 )
    {
      if ( (__int64)v16 < 0 )
      {
        v155 = (char *)v166;
LABEL_222:
        v22 = 0LL;
LABEL_223:
        v123 = 0;
        v124 = 0;
        alloc::raw_vec::handle_error(v22, v155);
      }
      v22 = 1LL;
      v24 = (void *)_rust_alloc(v16, 1LL);
      if ( !v24 )
        goto LABEL_218;
    }
    else
    {
      v24 = &dword_0 + 1;
    }
    v32 = (__int64)v24;
    memcpy(v24, v15, (size_t)v16);
    dest.m256i_i64[1] = (__int64)v16;
    v166 = v32;
    dest.m256i_i64[2] = v32;
    dest.m256i_i64[3] = (__int64)v16;
    dest.m256i_i64[0] = 0x8000000000000002LL;
    v33 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v33 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v34 = *(_OWORD *)dest.m256i_i8;
    v33[1] = *(_OWORD *)&dest.m256i_u64[2];
    *v33 = v34;
    v134 = (__int64)v33;
    v135 = &off_25FCE8;
    _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
    v14 = v141;
    if ( uucore::UTIL_NAME != 2 )
      once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    *(_OWORD *)fd = xmmword_29CE90;
    v138.m256i_i64[0] = (__int64)fd;
    v138.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v138.m256i_i64[2] = (__int64)&v134;
    v138.m256i_i64[3] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    dest.m256i_i64[0] = (__int64)&unk_25FD58;
    dest.m256i_i64[1] = 3LL;
    *(_QWORD *)&v147 = 0LL;
    dest.m256i_i64[2] = (__int64)&v138;
    dest.m256i_i64[3] = 2LL;
    p_dest = &dest;
    std::io::stdio::_eprint(&dest);
    v28 = (__m256i *)v134;
    v29 = v135;
    v30 = *v135;
    if ( !*v135 )
      goto LABEL_45;
LABEL_44:
    p_dest = (__m256i *)v134;
    ((void (__fastcall *)(__int64))v30)(v134);
LABEL_45:
    v35 = v29[1];
    if ( v35 )
    {
      p_dest = v28;
      _rust_dealloc(v28, v35, v29[2]);
    }
    goto LABEL_13;
  }
  dest.m256i_i64[0] = 0x1B600000000LL;
  dest.m256i_i16[6] = 0;
  dest.m256i_i32[2] = 1;
  v123 = 0;
  v124 = 0;
  std::fs::OpenOptions::_open(&v138, &dest, v15, v16);
  if ( v138.m256i_i32[0] )
  {
    v123 = 0;
    v124 = 0;
    core::ptr::drop_in_place<std::io::error::Error>(v138.m256i_i64[1]);
    *(_QWORD *)&v161 = 0LL;
  }
  else
  {
    v36 = v6;
    v37 = v138.m256i_i32[1];
    fd[0] = v138.m256i_i32[1];
    dest.m256i_i64[2] = 0LL;
    dest.m256i_i64[0] = 0LL;
    dest.m256i_i8[24] = 0;
    dest.m256i_i16[13] = 0;
    memmap2::MmapOptions::map(&v138, &dest, fd);
    v38 = (void *)v138.m256i_i64[1];
    if ( !v138.m256i_i64[0] )
    {
      v21 = v138.m256i_u64[2];
      v58 = close(v37);
      src = v38;
      *(_QWORD *)&v156 = v38;
      *((_QWORD *)&v156 + 1) = v21;
      LOBYTE(v58) = 1;
      v123 = v58;
      LODWORD(v16) = 0;
      v6 = v36;
      goto LABEL_94;
    }
    core::ptr::drop_in_place<std::io::error::Error>(v138.m256i_i64[1]);
    *(_QWORD *)&v161 = 0LL;
    close(fd[0]);
    v6 = v36;
  }
  std::fs::read::inner(&v134, v15, v16);
  v39 = (__int64)v135;
  if ( v134 == 0x8000000000000000LL )
  {
    v138.m256i_i64[0] = 0LL;
    v138.m256i_i64[1] = (__int64)v15;
    v138.m256i_i64[2] = (__int64)v16;
    v138.m256i_i8[24] = 1;
    *(_QWORD *)fd = &v138;
    *(_QWORD *)&fd[2] = <os_display::Quoted as core::fmt::Display>::fmt;
    dest.m256i_i64[0] = (__int64)&anon_ed1ebb40829bf58f514fb8171dd91230_55_llvm_9077216822178002531;
    dest.m256i_i64[1] = 1LL;
    *(_QWORD *)&v147 = 0LL;
    dest.m256i_i64[2] = (__int64)fd;
    dest.m256i_i64[3] = 1LL;
    alloc::fmt::format::format_inner(&v171, &dest);
    *(_OWORD *)fd = v171;
    v129 = v172;
    <alloc::string::String as core::clone::Clone>::clone(&v138, fd);
    dest.m256i_i64[2] = v138.m256i_i64[2];
    *(_OWORD *)dest.m256i_i8 = *(_OWORD *)v138.m256i_i8;
    dest.m256i_i64[3] = v39;
    v40 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v40 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v41 = *(_OWORD *)dest.m256i_i8;
    v40[1] = *(_OWORD *)&dest.m256i_u64[2];
    *v40 = v41;
    v143 = (__int64)v40;
    v144 = &off_25FCE8;
    _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
    if ( uucore::UTIL_NAME != 2 )
      once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v145 = xmmword_29CE90;
    v138.m256i_i64[0] = (__int64)&v145;
    v138.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v138.m256i_i64[2] = (__int64)&v143;
    v138.m256i_i64[3] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    dest.m256i_i64[0] = (__int64)&unk_25FD58;
    dest.m256i_i64[1] = 3LL;
    *(_QWORD *)&v147 = 0LL;
    dest.m256i_i64[2] = (__int64)&v138;
    dest.m256i_i64[3] = 2LL;
    p_dest = &dest;
    std::io::stdio::_eprint(&dest);
    v42 = (__m256i *)v143;
    v43 = v144;
    if ( *v144 )
    {
      p_dest = (__m256i *)v143;
      ((void (__fastcall *)(__int64))*v144)(v143);
    }
    v44 = v43[1];
    if ( v44 )
    {
      p_dest = v42;
      _rust_dealloc(v42, v44, v43[2]);
    }
    v45 = *(_QWORD *)fd;
    if ( *(_QWORD *)fd )
    {
      p_dest = *(__m256i **)&fd[2];
      _rust_dealloc(*(_QWORD *)&fd[2], *(_QWORD *)fd, 1LL);
    }
    if ( !(_QWORD)v161 )
      goto LABEL_12;
    v46 = (__int64 (__fastcall **)())*((_QWORD *)&v161 + 1);
    v47 = memmap2::os::page_size::PAGE_SIZE;
    if ( !memmap2::os::page_size::PAGE_SIZE )
    {
      v47 = sysconf(30);
      memmap2::os::page_size::PAGE_SIZE = v47;
      if ( !v47 )
      {
LABEL_233:
        v125 = v6;
        v126 = v9;
        v124 = 0;
        core::panicking::panic_const::panic_const_rem_by_zero(
          &anon_74520b1e2a4bb4a37bc22483efa2dbc4_3_llvm_5650606507723373874,
          v45,
          v48,
          v47);
      }
    }
    if ( (v47 | (unsigned __int64)v46) >> 32 )
      v11 = (unsigned __int64)v46 % v47;
    else
      v11 = (unsigned int)v46 % (unsigned int)v47;
    v12 = v162;
    goto LABEL_9;
  }
  v21 = v136;
  LOBYTE(v16) = 1;
  v123 = 0;
  src = v135;
  v6 = (__m256i *)v135;
  v9 = (char *)v134;
LABEL_94:
  v124 = (int)v16;
  v133 = v21;
  if ( !v165.m256i_i64[0] )
  {
    v134 = std::io::stdio::stdout();
    v92 = std::io::stdio::Stdout::lock(&v134);
    v93 = _rust_alloc(0x2000LL, 1LL);
    if ( !v93 )
    {
      v125 = v6;
      v126 = v9;
      alloc::raw_vec::handle_error(1LL, 0x2000LL);
    }
    *(_QWORD *)fd = 0x2000LL;
    *(_QWORD *)&fd[2] = v93;
    v129 = 0LL;
    v130 = 0;
    v131 = v92;
    dest.m256i_i8[0] = 1;
    memchr::memmem::FinderBuilder::build_reverse(&v138, &dest, v163, v158);
    v148 = v140;
    v147 = v139;
    dest = v138;
    v149 = 1LL;
    v150 = v21;
    v151 = src;
    v152 = v21;
    if ( (_BYTE)v142 )
    {
      v21 = v133;
      while ( 1 )
      {
        if ( !<memchr::memmem::FindRevIter as core::iter::traits::iterator::Iterator>::next(&dest) )
          goto LABEL_159;
        v95 = v99;
        v100 = v21 - v99;
        if ( v21 < v99 )
          break;
        if ( v21 > v133 )
        {
          v125 = v6;
          v126 = v9;
          v154 = &off_25FC98;
          goto LABEL_208;
        }
        v101 = (char *)src + v99;
        v102 = v129;
        if ( v100 < *(_QWORD *)fd - v129 )
        {
          memcpy((void *)(v129 + *(_QWORD *)&fd[2]), v101, v21 - v99);
          v129 = v100 + v102;
          v21 = v95;
        }
        else
        {
          v91 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(fd, v101, v21 - v99);
          v21 = v95;
          if ( v91 )
            goto LABEL_181;
        }
      }
      v125 = v6;
      v126 = v9;
      v154 = &off_25FC98;
LABEL_205:
      core::slice::index::slice_index_order_fail(v95, v21, v154);
    }
    while ( <memchr::memmem::FindRevIter as core::iter::traits::iterator::Iterator>::next(&dest) )
    {
      v95 = v158 + v94;
      v96 = v21 - (v158 + v94);
      if ( v21 < v158 + v94 )
      {
        v125 = v6;
        v126 = v9;
        goto LABEL_205;
      }
      if ( v21 > v133 )
      {
        v125 = v6;
        v126 = v9;
LABEL_208:
        core::slice::index::slice_end_index_len_fail(v21, v133, v154);
      }
      v97 = (char *)src + v95;
      v98 = v129;
      if ( v96 < *(_QWORD *)fd - v129 )
      {
        memcpy((void *)(v129 + *(_QWORD *)&fd[2]), v97, v21 - (v158 + v94));
        v129 = v96 + v98;
        v21 = v95;
      }
      else
      {
        v91 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(fd, v97, v21 - (v158 + v94));
        v21 = v95;
        if ( v91 )
        {
LABEL_181:
          if ( dest.m256i_i64[0] && dest.m256i_i64[2] )
            _rust_dealloc(dest.m256i_i64[1], dest.m256i_i64[2], 1LL);
          goto LABEL_187;
        }
      }
    }
LABEL_159:
    if ( dest.m256i_i64[0] && dest.m256i_i64[2] )
      _rust_dealloc(dest.m256i_i64[1], dest.m256i_i64[2], 1LL);
    if ( v21 > v133 )
    {
      v125 = v6;
      v126 = v9;
      core::slice::index::slice_end_index_len_fail(v21, v133, &off_25FC68);
    }
    v106 = v129;
    if ( v21 >= *(_QWORD *)fd - v129 )
    {
      v107 = src;
      v91 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(fd, src, v21);
      if ( !v91 )
        goto LABEL_171;
      goto LABEL_187;
    }
    v107 = src;
    memcpy((void *)(v129 + *(_QWORD *)&fd[2]), src, v21);
    v129 = v21 + v106;
LABEL_171:
    p_dest = (__m256i *)fd;
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(fd);
    v14 = v141;
    if ( (_BYTE)v124 && v9 )
    {
      p_dest = v6;
      v107 = v9;
      _rust_dealloc(v6, v9, 1LL);
    }
    if ( !(_BYTE)v123 )
      goto LABEL_13;
    v46 = (__int64 (__fastcall **)())v156;
    v108 = memmap2::os::page_size::PAGE_SIZE;
    if ( !memmap2::os::page_size::PAGE_SIZE )
    {
      v108 = sysconf(30);
      memmap2::os::page_size::PAGE_SIZE = v108;
      if ( !v108 )
        core::panicking::panic_const::panic_const_rem_by_zero(
          &anon_74520b1e2a4bb4a37bc22483efa2dbc4_3_llvm_5650606507723373874,
          v107,
          v109,
          0LL);
    }
    if ( (v108 | (unsigned __int64)v46) >> 32 )
      v11 = (unsigned __int64)v46 % v108;
    else
      v11 = (unsigned int)v46 % (unsigned int)v108;
    v12 = *((_QWORD *)&v156 + 1);
    goto LABEL_9;
  }
  v143 = std::io::stdio::stdout();
  v60 = std::io::stdio::Stdout::lock(&v143);
  v61 = _rust_alloc(0x2000LL, 1LL);
  if ( !v61 )
  {
    v125 = v6;
    v126 = v9;
    alloc::raw_vec::handle_error(1LL, 0x2000LL);
  }
  *(_QWORD *)fd = 0x2000LL;
  *(_QWORD *)&fd[2] = v61;
  v129 = 0LL;
  v130 = 0;
  v131 = v60;
  if ( !v21 )
  {
    v103 = 0x2000LL;
    v104 = 0LL;
    v105 = 0LL;
    goto LABEL_166;
  }
  v125 = v6;
  v126 = v9;
  v160 = (_QWORD *)v165.m256i_i64[0];
  v62 = src;
  v159 = (char *)src - 1;
  v170 = v21 - 1;
  v63 = -1LL;
  v64 = 0LL;
  v65 = v21;
  v132 = v21;
  v164 = v21;
  v169 = v165.m256i_i64[1];
  v157 = -(__int64)v21;
  while ( 2 )
  {
    if ( v65 > v21 )
      goto LABEL_214;
    v66 = v63 + v21;
    v134 = v66;
    v135 = (__int64 (__fastcall **)())v65;
    if ( v65 + 1 < v66 )
    {
      *(_QWORD *)&v161 = v65;
      v138.m256i_i64[0] = (__int64)&v134;
      v138.m256i_i64[1] = (__int64)<regex_automata::util::search::Span as core::fmt::Debug>::fmt;
      v138.m256i_i64[2] = (__int64)&v161;
      v138.m256i_i64[3] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      dest.m256i_i64[0] = (__int64)&off_25FBD0;
      dest.m256i_i64[1] = 2LL;
      *(_QWORD *)&v147 = 0LL;
      dest.m256i_i64[2] = (__int64)&v138;
      dest.m256i_i64[3] = 2LL;
      core::panicking::panic_fmt(&dest, &off_25FBF0);
    }
    --v164;
    v138.m256i_i32[0] = 0;
    v138.m256i_i64[1] = (__int64)v62;
    v138.m256i_i64[2] = v65;
    v138.m256i_i64[3] = v66;
    *(_QWORD *)&v139 = v65;
    BYTE8(v139) = 0;
    v67 = *(_QWORD *)(v160[4] + 168LL);
    if ( v170 == v64 || (*(_BYTE *)(v67 + 60) & 1) == 0 )
    {
      if ( !*(_QWORD *)v67 )
        goto LABEL_112;
      v68 = 0LL;
      if ( v65 >= v66 )
        v68 = v65 - v66;
      if ( v68 >= *(_QWORD *)(v67 + 8)
        && ((*(_BYTE *)(v67 + 60) & 1) == 0
         || (*(_BYTE *)(v67 + 64) & 2) == 0
         || !*(_QWORD *)(v67 + 16)
         || v68 <= *(_QWORD *)(v67 + 24)) )
      {
LABEL_112:
        v69 = (_QWORD *)(__readfsqword(0) - 16);
        if ( *v69 )
          v70 = (__int64 (__fastcall ***)())(v69 + 1);
        else
          v70 = (__int64 (__fastcall ***)())std::sys::thread_local::native::lazy::Storage<T,D>::initialize(
                                              __readfsqword(0) - 16,
                                              0LL);
        v71 = *v70;
        v72 = v169;
        if ( *v70 == *(__int64 (__fastcall ***)())(v169 + 40) )
        {
          *(_QWORD *)(v169 + 40) = 1LL;
          v136 = v72;
          v134 = 1LL;
          v135 = v71;
          v137 = 0;
          v73 = v72;
          v74 = v160[3];
          v75 = v160[2] + ((*(_QWORD *)(v74 + 16) - 1LL) & 0xFFFFFFFFFFFFFFF0LL) + 16;
          v76 = v73;
          goto LABEL_119;
        }
        regex_automata::util::pool::inner::Pool<T,F>::get_slow(&v134);
        v74 = v160[3];
        v75 = v160[2] + ((*(_QWORD *)(v74 + 16) - 1LL) & 0xFFFFFFFFFFFFFFF0LL) + 16;
        if ( v134 )
        {
          v76 = v136;
LABEL_119:
          v77 = (__int64 (__fastcall **)())(v76 + 48);
          v78 = 0;
        }
        else
        {
          v78 = 1;
          v77 = v135;
        }
        (*(void (__fastcall **)(__int128 *, unsigned __int64, __int64 (__fastcall **)(), __m256i *))(v74 + 104))(
          &v161,
          v75,
          v77,
          &v138);
        v79 = v135;
        if ( v78 )
        {
          v62 = src;
          if ( v137 )
          {
            core::ptr::drop_in_place<regex_automata::meta::regex::Cache>(v135);
            _rust_dealloc(v79, 1400LL, 8LL);
          }
          else
          {
            regex_automata::util::pool::inner::Pool<T,F>::put_value(v136, v135);
          }
        }
        else
        {
          *(_QWORD *)&v145 = v135;
          v62 = src;
          if ( v135 == (__int64 (__fastcall **)())((char *)&dword_0 + 2) )
          {
            dest.m256i_i64[0] = 0LL;
            core::panicking::assert_failed(
              1LL,
              &regex_automata::util::pool::inner::THREAD_ID_DROPPED,
              &v145,
              &dest,
              &off_25FBB8);
          }
          *(_QWORD *)(v136 + 40) = v135;
        }
        if ( (_QWORD)v161 )
        {
          if ( (_BYTE)v142 )
          {
            v65 = v132;
            if ( v132 < v66 )
            {
              v85 = v63 + v133;
              v122 = &off_25FC50;
LABEL_216:
              core::slice::index::slice_index_order_fail(v85, v132, v122);
            }
            if ( v132 > v133 )
            {
              v121 = &off_25FC50;
              goto LABEL_213;
            }
            v80 = v64 + v157 + v132 + 1;
            v81 = &v159[v133];
            v82 = v129;
            if ( v80 < *(_QWORD *)fd - v129 )
            {
              memcpy((void *)(v129 + *(_QWORD *)&fd[2]), v81, v80);
              v129 = v64 + v157 + v82 + v65 + 1;
              v132 = v66;
              v65 = v66;
              goto LABEL_99;
            }
            v91 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(fd, v81, v80);
            v132 = v66;
          }
          else
          {
            v83 = v162;
            v84 = v162 - *((_QWORD *)&v161 + 1);
            v85 = v162 - *((_QWORD *)&v161 + 1) + v133 + v63;
            if ( v132 < v85 )
            {
              v122 = &off_25FC38;
              goto LABEL_216;
            }
            if ( v132 > v133 )
            {
              v65 = v132;
              v121 = &off_25FC38;
LABEL_213:
              v153 = v121;
LABEL_214:
              core::slice::index::slice_end_index_len_fail(v65, v133, v153);
            }
            v86 = *((_QWORD *)&v161 + 1) + v132;
            v87 = *((_QWORD *)&v161 + 1) + v132 - v162 + v157 + v64 + 1;
            v88 = &v159[v133 + v84];
            v89 = v164 + v84;
            if ( v87 < *(_QWORD *)fd - v129 )
            {
              v132 = v157 + v64;
              v167 = v129;
              memcpy((void *)(v129 + *(_QWORD *)&fd[2]), v88, v87);
              v129 = v167 + v86 - v83 + v132 + 1;
              v132 = v89;
              v65 = v66;
              v62 = src;
              goto LABEL_99;
            }
            v90 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(fd, v88, v87);
            v62 = src;
            v91 = v90;
            v132 = v89;
          }
          v65 = v66;
          if ( v91 )
          {
            v9 = v126;
            v6 = v125;
            goto LABEL_187;
          }
        }
      }
    }
LABEL_99:
    ++v64;
    --v159;
    --v63;
    v21 = v133;
    if ( v133 != v64 )
      continue;
    break;
  }
  if ( v132 > v133 )
  {
    v65 = v132;
    v121 = &off_25FC08;
    goto LABEL_213;
  }
  v103 = *(_QWORD *)fd;
  v104 = v129;
  v9 = v126;
  v6 = v125;
  v105 = v132;
LABEL_166:
  if ( v105 < v103 - v104 )
  {
    v107 = src;
    memcpy((void *)(v104 + *(_QWORD *)&fd[2]), src, v105);
    v129 = v105 + v104;
    goto LABEL_171;
  }
  v107 = src;
  v91 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(fd, src, v105);
  if ( !v91 )
    goto LABEL_171;
LABEL_187:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(fd);
  dest.m256i_i64[1] = v91;
  dest.m256i_i64[0] = 0x8000000000000004LL;
  v112 = 8LL;
  v113 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v113 )
  {
    v125 = v6;
    v126 = v9;
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  }
  v114 = *(_OWORD *)dest.m256i_i8;
  v113[1] = *(_OWORD *)&dest.m256i_u64[2];
  v115 = v113;
  *v113 = v114;
  if ( (_BYTE)v124 && v9 )
  {
    v112 = (__int64)v9;
    _rust_dealloc(v6, v9, 1LL);
  }
  if ( (_BYTE)v123 )
  {
    v116 = v156;
    v117 = memmap2::os::page_size::PAGE_SIZE;
    if ( !memmap2::os::page_size::PAGE_SIZE )
    {
      v117 = sysconf(30);
      memmap2::os::page_size::PAGE_SIZE = v117;
      if ( !v117 )
        core::panicking::panic_const::panic_const_rem_by_zero(
          &anon_74520b1e2a4bb4a37bc22483efa2dbc4_3_llvm_5650606507723373874,
          v112,
          v118,
          0LL);
    }
    if ( (v117 | v116) >> 32 )
      v119 = v116 % v117;
    else
      v119 = (unsigned int)v116 % (unsigned int)v117;
    v120 = -(__int64)v119;
    if ( !(*((_QWORD *)&v156 + 1) + v119) )
      v120 = 0LL;
    munmap((void *)(v120 + v116), v119 + (*((_QWORD *)&v156 + 1) + v119 == 0) + *((_QWORD *)&v156 + 1));
  }
  core::ptr::drop_in_place<core::option::Option<regex::regex::bytes::Regex>>(&v165);
  return v115;
}
