_OWORD *__fastcall uu_tail::uu_tail(__int64 *a1)
{
  _OWORD *v1; // r13
  __int64 v2; // r14
  __int128 v3; // kr10_16
  __int64 v4; // rbx
  size_t v5; // rbp
  size_t v6; // rbx
  void *v7; // r8
  __int64 v8; // r13
  char v9; // r14
  char v10; // al
  char v11; // al
  __int128 *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r12
  char *v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  void (__fastcall *v19)(__int64, __int64, __int64); // r12
  __int64 v20; // r15
  __int64 v21; // rax
  void *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r12
  unsigned __int64 v26; // r14
  __int64 v27; // r12
  unsigned __int64 v28; // r15
  __int64 j; // rbp
  __int64 v30; // rdi
  unsigned __int64 v31; // rbx
  __int64 v32; // r15
  __int64 v33; // rdi
  __int64 v34; // r15
  int v35; // r13d
  __int64 v36; // rbx
  __int64 v37; // rbx
  void *v38; // rdx
  void *v39; // rax
  __int64 v40; // rdx
  int v41; // edi
  void *v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rax
  void (__fastcall *v45)(_QWORD, _QWORD, _QWORD); // r8
  __int64 v46; // r12
  unsigned __int64 v47; // r14
  __int64 v48; // r12
  unsigned __int64 v49; // r15
  __int64 v50; // rbx
  __int64 v51; // rdi
  void (__fastcall *v52)(_QWORD, _QWORD, _QWORD); // r14
  unsigned __int64 v53; // r15
  unsigned __int64 v54; // r14
  __int64 v55; // rbx
  __int64 v56; // rdi
  __int64 (__fastcall **v57)(); // rbx
  __int64 v58; // rax
  __int64 v59; // rdx
  void *v60; // rdx
  _OWORD *v61; // rax
  __int128 v62; // xmm0
  unsigned __int64 v63; // rbx
  int v64; // eax
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // r8
  __int64 v67; // rcx
  bool v68; // si
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // r13
  unsigned __int64 v75; // r14
  __int64 v76; // r13
  __int64 v77; // rbp
  __int64 i; // r12
  __int64 v79; // rdi
  __int64 v80; // r15
  __int64 v81; // rdi
  unsigned __int64 v82; // rbx
  __int64 (__fastcall **v83)(); // rdx
  unsigned __int64 v84; // rcx
  char v85; // al
  __int64 v86; // rdx
  __int64 v87; // rax
  __int64 v88; // rdx
  const void *buffer_with; // rax
  char *v90; // rdx
  __int64 v91; // r15
  __int64 v92; // r14
  char *v93; // rbx
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rbx
  __int64 v97; // r13
  __int128 v98; // kr20_16
  _OWORD *v99; // rax
  __int128 v100; // xmm1
  __int64 (__fastcall **v101)(); // rdx
  __int64 v102; // rbx
  __int64 v103; // r12
  _QWORD *v104; // r14
  __int64 v105; // rsi
  __int64 v106; // rsi
  __int64 v108; // rcx
  __int64 v109; // rdx
  bool v110; // zf
  __int64 v111; // rax
  __int64 v112; // rbx
  __int64 v113; // r14
  __int64 *v114; // r15
  __int64 v115; // rsi
  __int64 v116; // rsi
  char v117; // [rsp+Dh] [rbp-227Bh] BYREF
  unsigned __int8 v118; // [rsp+Eh] [rbp-227Ah]
  unsigned __int8 v119; // [rsp+Fh] [rbp-2279h]
  void *v120; // [rsp+10h] [rbp-2278h]
  __int64 v121; // [rsp+18h] [rbp-2270h]
  unsigned __int64 v122; // [rsp+20h] [rbp-2268h]
  __int64 *v123; // [rsp+28h] [rbp-2260h]
  _QWORD v124[7]; // [rsp+30h] [rbp-2258h] BYREF
  __int16 v125; // [rsp+68h] [rbp-2220h]
  char v126; // [rsp+6Ah] [rbp-221Eh]
  void *s2; // [rsp+78h] [rbp-2210h] BYREF
  __int64 v128; // [rsp+80h] [rbp-2208h] BYREF
  _BYTE v129[40]; // [rsp+88h] [rbp-2200h]
  __int16 v130; // [rsp+B0h] [rbp-21D8h]
  char v131; // [rsp+B2h] [rbp-21D6h]
  unsigned __int64 v132; // [rsp+B8h] [rbp-21D0h]
  unsigned __int64 v133; // [rsp+C0h] [rbp-21C8h]
  __int64 v134; // [rsp+C8h] [rbp-21C0h]
  __int64 v135; // [rsp+D0h] [rbp-21B8h] BYREF
  __int64 v136; // [rsp+D8h] [rbp-21B0h]
  __int64 v137; // [rsp+E0h] [rbp-21A8h]
  unsigned __int64 v138; // [rsp+E8h] [rbp-21A0h]
  size_t n[2]; // [rsp+F0h] [rbp-2198h] BYREF
  _BYTE v140[17]; // [rsp+100h] [rbp-2188h]
  _BYTE v141[23]; // [rsp+111h] [rbp-2177h]
  __int16 v142; // [rsp+128h] [rbp-2160h]
  char v143; // [rsp+12Ah] [rbp-215Eh]
  __int128 v144; // [rsp+130h] [rbp-2158h] BYREF
  _BYTE v145[23]; // [rsp+140h] [rbp-2148h]
  unsigned __int64 v146; // [rsp+158h] [rbp-2130h]
  unsigned __int64 v147; // [rsp+160h] [rbp-2128h]
  unsigned __int64 v148; // [rsp+168h] [rbp-2120h]
  __int64 v149; // [rsp+170h] [rbp-2118h]
  __int64 v150; // [rsp+178h] [rbp-2110h]
  __int128 v151; // [rsp+180h] [rbp-2108h] BYREF
  _BYTE v152[23]; // [rsp+190h] [rbp-20F8h]
  _BYTE src[144]; // [rsp+1B0h] [rbp-20D8h] BYREF
  _OWORD s[513]; // [rsp+240h] [rbp-2048h] BYREF
  unsigned __int8 v155; // [rsp+2250h] [rbp-38h]

  *((_QWORD *)&s[257] + 1) = 0LL;
  *((_QWORD *)&s[1] + 1) = 0LL;
  v117 = *((_BYTE *)a1 + 74);
  v118 = 1;
  uu_tail::follow::watch::Observer::from(src, a1);
  v123 = a1;
  v1 = (_OWORD *)uu_tail::follow::watch::Observer::start(src, a1);
  if ( v1 )
    goto LABEL_2;
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v135, v123 + 3);
  v2 = v136;
  if ( !v137 )
    goto LABEL_173;
  v150 = v136 + 48 * v137;
  v149 = *v123;
  v134 = v123[1];
  v148 = v134 - 1;
  v119 = *((_BYTE *)v123 + 16);
  v138 = v123[2];
  v147 = v138 - 1;
  while ( 1 )
  {
    if ( *(_QWORD *)(v2 + 24) == 0x8000000000000000LL )
      goto LABEL_22;
    std::sys::os_str::bytes::Slice::to_owned(s, aDevStdin_1, 10LL);
    v3 = s[0];
    v4 = *(_QWORD *)&s[1];
    std::path::Path::components(n, *(_QWORD *)(v2 + 32), *(_QWORD *)(v2 + 40));
    std::path::Path::components(&s2, *((_QWORD *)&v3 + 1), v4);
    v121 = v2;
    v5 = n[0];
    v6 = n[1];
    v7 = s2;
    v8 = v128;
    if ( n[1] != v128 )
    {
      v9 = v140[0];
      goto LABEL_15;
    }
    v9 = v140[0];
    if ( (_BYTE)v142 != (_BYTE)v130 || HIBYTE(v142) != 2 || HIBYTE(v130) != 2 )
      goto LABEL_15;
    if ( v140[0] == 6 )
    {
      if ( v129[0] <= 2u )
      {
        v10 = 6;
        goto LABEL_17;
      }
LABEL_99:
      v120 = s2;
      v64 = bcmp((const void *)n[0], s2, n[1]);
      v7 = v120;
      if ( !v64 )
      {
        v2 = v121;
        if ( (_QWORD)v3 )
          goto LABEL_21;
        goto LABEL_22;
      }
LABEL_15:
      v10 = 6;
      if ( v9 == 6 )
        goto LABEL_17;
      goto LABEL_16;
    }
    if ( v129[0] == 6 )
    {
      if ( v140[0] >= 3u )
        goto LABEL_99;
    }
    else if ( v140[0] < 3u == v129[0] < 3u )
    {
      goto LABEL_99;
    }
LABEL_16:
    *(_QWORD *)&v152[15] = *(_QWORD *)&v141[15];
    *(_OWORD *)v152 = *(_OWORD *)v141;
    v151 = *(_OWORD *)&v140[1];
    v10 = v9;
LABEL_17:
    v124[0] = v5;
    v124[1] = v6;
    LOBYTE(v124[2]) = v10;
    v124[6] = *(_QWORD *)&v152[15];
    *(_OWORD *)((char *)&v124[4] + 1) = *(_OWORD *)v152;
    *(_OWORD *)((char *)&v124[2] + 1) = v151;
    v125 = v142;
    v126 = v143;
    if ( v129[0] != 6 )
    {
      *(_QWORD *)&v145[15] = *(_QWORD *)&v129[32];
      *(_OWORD *)v145 = *(_OWORD *)&v129[17];
      v144 = *(_OWORD *)&v129[1];
    }
    *(_QWORD *)&s[0] = v7;
    *((_QWORD *)&s[0] + 1) = v8;
    LOBYTE(s[1]) = v129[0];
    *(_QWORD *)&s[3] = *(_QWORD *)&v145[15];
    *(_OWORD *)((char *)&s[2] + 1) = *(_OWORD *)v145;
    *(_OWORD *)((char *)&s[1] + 1) = v144;
    WORD4(s[3]) = v130;
    BYTE10(s[3]) = v131;
    v11 = core::iter::traits::iterator::Iterator::eq_by(v124, s);
    v2 = v121;
    if ( !v11 )
    {
      if ( (_QWORD)v3 )
        _rust_dealloc(*((_QWORD *)&v3 + 1), v3, 1LL);
      v1 = (_OWORD *)uu_tail::tail_file(
                       (_DWORD)v123,
                       (unsigned int)&v117,
                       v2,
                       *(_QWORD *)(v2 + 32),
                       *(_QWORD *)(v2 + 40),
                       (unsigned int)src,
                       0LL);
      if ( v1 )
      {
        v120 = v38;
        goto LABEL_186;
      }
      goto LABEL_5;
    }
    if ( (_QWORD)v3 )
LABEL_21:
      _rust_dealloc(*((_QWORD *)&v3 + 1), v3, 1LL);
LABEL_22:
    v12 = &v144;
    uu_tail::paths::Input::resolve(&v144, (_QWORD *)v2);
    v15 = v144;
    if ( (_QWORD)v144 == 0x8000000000000000LL )
    {
      *(_OWORD *)n = *(_OWORD *)(v2 + 8);
      if ( v117 )
      {
        v16 = (_BYTE *)(&dword_0 + 1);
        if ( !v118 )
          v16 = anon_c568fa996e9b1afffbd2fe86e67742f4_18_llvm_893476530518564186;
        s2 = v16;
        v128 = v118 ^ 1LL;
        v124[0] = &s2;
        v124[1] = <&T as core::fmt::Display>::fmt;
        v124[2] = n;
        v124[3] = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&s[0] = &anon_c568fa996e9b1afffbd2fe86e67742f4_21_llvm_893476530518564186;
        *((_QWORD *)&s[0] + 1) = 3LL;
        *(_QWORD *)&s[2] = 0LL;
        *(_QWORD *)&s[1] = v124;
        *((_QWORD *)&s[1] + 1) = 2LL;
        v12 = s;
        std::io::stdio::_print(s);
        v118 = 0;
      }
      v17 = std::io::stdio::stdin(v12, v2, v13, v14);
      v18 = _rust_alloc(0x2000LL, 1LL);
      if ( !v18 )
        alloc::raw_vec::handle_error(1LL, 0x2000LL);
      v124[0] = v18;
      v124[1] = 0x2000LL;
      memset(&v124[2], 0, 24);
      v124[5] = v17;
      v19 = (void (__fastcall *)(__int64, __int64, __int64))_rust_dealloc;
      *(_QWORD *)&v151 = std::io::stdio::stdout(0x2000LL, 1LL);
      v20 = std::io::stdio::Stdout::lock(&v151);
      v21 = _rust_alloc(0x2000LL, 1LL);
      if ( !v21 )
        alloc::raw_vec::handle_error(1LL, 0x2000LL);
      s2 = &stru_1FF0 + 16;
      v128 = v21;
      *(_QWORD *)v129 = 0LL;
      v129[8] = 0;
      *(_QWORD *)&v129[16] = v20;
      switch ( v149 )
      {
        case 0LL:
          LOBYTE(s[3]) = v119;
          *((_QWORD *)&s[2] + 1) = v134;
          *(_QWORD *)&s[0] = 0LL;
          *((_QWORD *)&s[0] + 1) = 8LL;
          memset(&s[1], 0, 24);
          v1 = uu_tail::chunks::LinesChunkBuffer::fill((unsigned __int64 *)s, (__int64)v124);
          v121 = v2;
          if ( !v1 )
          {
            v1 = uu_tail::chunks::LinesChunkBuffer::print((unsigned __int64 *)s, &s2);
            if ( !v1 )
            {
              if ( *((_QWORD *)&s[1] + 1) )
              {
                v71 = *((_QWORD *)&s[0] + 1);
                v72 = *(_QWORD *)&s[0];
                if ( *(_QWORD *)&s[1] < *(_QWORD *)&s[0] )
                  v72 = 0LL;
                v73 = *(_QWORD *)&s[1] - v72;
                v74 = *(_QWORD *)&s[1] - v72 + *((_QWORD *)&s[1] + 1);
                v120 = (void *)*((_QWORD *)&s[1] + 1);
                v122 = *(_QWORD *)&s[0] - (*(_QWORD *)&s[1] - v72);
                v75 = *((_QWORD *)&s[1] + 1) - v122;
                if ( *((_QWORD *)&s[1] + 1) < v122 )
                  v75 = 0LL;
                if ( *((_QWORD *)&s[1] + 1) > (unsigned __int64)(*(_QWORD *)&s[0] - v73) )
                  v74 = *(_QWORD *)&s[0];
                v76 = v74 - v73;
                if ( v76 )
                {
                  v77 = *((_QWORD *)&s[0] + 1) + 8 * v73;
                  for ( i = 0LL; i != v76; ++i )
                  {
                    v79 = *(_QWORD *)(v77 + 8 * i);
                    _rust_dealloc(v79, 8216LL, 8LL);
                  }
                }
                if ( v122 < (unsigned __int64)v120 )
                {
                  v80 = 0LL;
                  do
                  {
                    v81 = *(_QWORD *)(v71 + 8 * v80++);
                    _rust_dealloc(v81, 8216LL, 8LL);
                  }
                  while ( v75 != v80 );
                }
              }
              if ( *(_QWORD *)&s[0] )
                _rust_dealloc(*((_QWORD *)&s[0] + 1), 8LL * *(_QWORD *)&s[0], 8LL);
              v2 = v121;
              goto LABEL_159;
            }
          }
          v120 = v22;
          if ( *((_QWORD *)&s[1] + 1) )
          {
            v122 = *((_QWORD *)&s[0] + 1);
            v23 = *(_QWORD *)&s[0];
            if ( *(_QWORD *)&s[1] < *(_QWORD *)&s[0] )
              v23 = 0LL;
            v24 = *(_QWORD *)&s[1] - v23;
            v25 = *(_QWORD *)&s[1] - v23 + *((_QWORD *)&s[1] + 1);
            v133 = *((_QWORD *)&s[1] + 1);
            v132 = *(_QWORD *)&s[0] - (*(_QWORD *)&s[1] - v23);
            v26 = *((_QWORD *)&s[1] + 1) - v132;
            if ( *((_QWORD *)&s[1] + 1) < v132 )
              v26 = 0LL;
            if ( *((_QWORD *)&s[1] + 1) > (unsigned __int64)(*(_QWORD *)&s[0] - v24) )
              v25 = *(_QWORD *)&s[0];
            v27 = v25 - v24;
            if ( v27 )
            {
              v28 = v122 + 8 * v24;
              for ( j = 0LL; j != v27; ++j )
              {
                v30 = *(_QWORD *)(v28 + 8 * j);
                _rust_dealloc(v30, 8216LL, 8LL);
              }
            }
            v19 = (void (__fastcall *)(__int64, __int64, __int64))_rust_dealloc;
            v31 = v122;
            if ( v132 < v133 )
            {
              v32 = 0LL;
              do
              {
                v33 = *(_QWORD *)(v31 + 8 * v32++);
                _rust_dealloc(v33, 8216LL, 8LL);
              }
              while ( v26 != v32 );
            }
          }
LABEL_73:
          if ( *(_QWORD *)&s[0] )
            v19(*((_QWORD *)&s[0] + 1), 8LL * *(_QWORD *)&s[0], 8LL);
          v2 = v121;
          v57 = (__int64 (__fastcall **)())v120;
          goto LABEL_91;
        case 1LL:
          if ( v134 == 1 )
            goto LABEL_77;
          memset(s, 0, sizeof(s));
          v155 = v119;
          v63 = v148;
          while ( 2 )
          {
            uu_tail::chunks::LinesChunk::fill((__int64 *)n, (__int64)s, (__int64)v124);
            v1 = (_OWORD *)n[1];
            if ( n[0] )
            {
              v57 = *(__int64 (__fastcall ***)())v140;
            }
            else
            {
              if ( n[1] == 1 && v63 > *((_QWORD *)&s[512] + 1) )
              {
                v63 -= *((_QWORD *)&s[512] + 1);
                continue;
              }
              if ( !*(_QWORD *)&s[512] )
              {
LABEL_159:
                core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&s2);
                goto LABEL_160;
              }
              if ( *(_QWORD *)&s[512] >= 0x2001uLL )
                core::slice::index::slice_end_index_len_fail(
                  *(_QWORD *)&s[512],
                  0x2000LL,
                  &anon_260ad779062915721296377f2d114085_13_llvm_11775337101010531792);
              if ( v63 )
              {
                v65 = 0LL;
                do
                {
                  v66 = v65;
                  v67 = 0LL;
                  v68 = *((_BYTE *)s + v65++) == v155;
                  if ( *(_QWORD *)&s[512] - 1LL == v66 )
                    break;
                  LOBYTE(v67) = v68;
                  v63 -= v67;
                }
                while ( v63 );
              }
              else
              {
                v65 = 0LL;
              }
              v1 = uu_tail::chunks::LinesChunk::print_bytes((__int64)s, &s2, v65);
              if ( !v1 )
              {
                if ( v124[1] < 0x2000uLL || v124[1] < (unsigned __int64)s2 )
                  v87 = <std::io::buffered::bufwriter::BufWriter<I> as std::io::copy::BufferedWriterSpec>::copy_from(
                          &s2,
                          v124);
                else
                  v87 = <std::io::buffered::bufreader::BufReader<I> as std::io::copy::BufferedReaderSpec>::copy_to(
                          v124,
                          &s2);
                if ( !v87 )
                  goto LABEL_159;
LABEL_156:
                v95 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v88);
LABEL_157:
                v1 = (_OWORD *)v95;
              }
LABEL_158:
              v57 = v83;
            }
            break;
          }
LABEL_91:
          core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&s2);
          if ( v1 )
          {
            if ( v124[1] )
            {
              _rust_dealloc(v124[0], v124[1], 1LL);
              v120 = v57;
              goto LABEL_187;
            }
LABEL_163:
            v120 = v57;
            goto LABEL_187;
          }
LABEL_160:
          v96 = *(_QWORD *)(v2 + 8);
          v97 = *(_QWORD *)(v2 + 16);
          v98 = *(_OWORD *)v124;
          s[0] = *(_OWORD *)&v124[2];
          s[1] = *(_OWORD *)&v124[4];
          v99 = (_OWORD *)_rust_alloc(48LL, 8LL);
          if ( !v99 )
            alloc::alloc::handle_alloc_error(8LL, 48LL);
          *v99 = v98;
          v100 = s[1];
          v99[1] = s[0];
          v99[2] = v100;
          v1 = (_OWORD *)uu_tail::follow::watch::Observer::add_stdin(src, v96, v97, v99, &off_15C7B0, 1LL);
          if ( v1 )
          {
            v57 = v101;
            v19 = (void (__fastcall *)(__int64, __int64, __int64))_rust_dealloc;
            goto LABEL_163;
          }
          break;
        case 2LL:
LABEL_77:
          if ( v124[1] <= 0x1FFFuLL )
            v58 = <std::io::buffered::bufwriter::BufWriter<I> as std::io::copy::BufferedWriterSpec>::copy_from(
                    &s2,
                    v124);
          else
            v58 = <std::io::buffered::bufreader::BufReader<I> as std::io::copy::BufferedReaderSpec>::copy_to(v124, &s2);
          if ( !v58 )
            goto LABEL_159;
          *(_QWORD *)&s[0] = 0x8000000000000000LL;
          *((_QWORD *)&s[1] + 1) = v59;
          v61 = (_OWORD *)_rust_alloc(32LL, 8LL);
          if ( !v61 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_90:
          v1 = v61;
          v62 = s[0];
          v61[1] = s[1];
          *v61 = v62;
          v57 = &anon_9b9ba72dabd212696498d24b7f543cb0_73_llvm_3928628070634382108;
          goto LABEL_91;
        case 3LL:
          goto LABEL_159;
        case 4LL:
          switch ( v134 )
          {
            case 0LL:
              s[2] = v138;
              *(_QWORD *)&s[0] = 0LL;
              *((_QWORD *)&s[0] + 1) = 8LL;
              s[1] = 0LL;
              v1 = uu_tail::chunks::BytesChunkBuffer::fill((unsigned __int64 *)s, (__int64)v124);
              if ( !v1 )
              {
                v1 = uu_tail::chunks::BytesChunkBuffer::print((unsigned __int64 *)s, &s2);
                if ( !v1 )
                {
                  core::ptr::drop_in_place<uu_tail::chunks::BytesChunkBuffer>(s);
                  goto LABEL_159;
                }
              }
              v120 = v42;
              v121 = v2;
              if ( *((_QWORD *)&s[1] + 1) )
              {
                v122 = *((_QWORD *)&s[0] + 1);
                v43 = *(_QWORD *)&s[0];
                if ( *(_QWORD *)&s[1] < *(_QWORD *)&s[0] )
                  v43 = 0LL;
                v44 = *(_QWORD *)&s[1] - v43;
                v45 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))_rust_dealloc;
                v46 = *(_QWORD *)&s[1] - v43 + *((_QWORD *)&s[1] + 1);
                v133 = *((_QWORD *)&s[1] + 1);
                v132 = *(_QWORD *)&s[0] - (*(_QWORD *)&s[1] - v43);
                v47 = *((_QWORD *)&s[1] + 1) - v132;
                if ( *((_QWORD *)&s[1] + 1) < v132 )
                  v47 = 0LL;
                v146 = v47;
                if ( *((_QWORD *)&s[1] + 1) > (unsigned __int64)(*(_QWORD *)&s[0] - v44) )
                  v46 = *(_QWORD *)&s[0];
                v48 = v46 - v44;
                if ( v48 )
                {
                  v49 = v122 + 8 * v44;
                  v50 = 0LL;
                  do
                  {
                    v51 = *(_QWORD *)(v49 + 8 * v50++);
                    v52 = v45;
                    v45(v51, 8200LL, 8LL);
                    v45 = v52;
                  }
                  while ( v48 != v50 );
                }
                v19 = v45;
                v53 = v122;
                v54 = v146;
                if ( v132 < v133 )
                {
                  v55 = 0LL;
                  do
                  {
                    v56 = *(_QWORD *)(v53 + 8 * v55++);
                    v19(v56, 8200LL, 8LL);
                  }
                  while ( v54 != v55 );
                }
              }
              goto LABEL_73;
            case 1LL:
              if ( v138 == 1 )
                goto LABEL_110;
              memset(s, 0, 0x2008uLL);
              v82 = v147;
              while ( 2 )
              {
                uu_tail::chunks::BytesChunk::fill(n, (__int64)s, (__int64)v124);
                v1 = (_OWORD *)n[1];
                v83 = *(__int64 (__fastcall ***)())v140;
                if ( n[0] )
                  goto LABEL_158;
                if ( n[1] != 1 )
                {
                  v1 = 0LL;
                  goto LABEL_158;
                }
                v84 = v82 - *(_QWORD *)v140;
                v85 = v82 != *(_QWORD *)v140;
                v86 = 255LL;
                if ( v82 > *(_QWORD *)v140 )
                  v85 = -1;
                if ( v85 == -1 )
                {
                  v82 -= *(_QWORD *)v140;
                  continue;
                }
                break;
              }
              if ( !v85 )
                goto LABEL_155;
              buffer_with = (const void *)uu_tail::chunks::BytesChunk::get_buffer_with((__int64)s, v82);
              v91 = v2;
              v92 = *(_QWORD *)v129;
              if ( v90 >= (char *)s2 - *(_QWORD *)v129 )
              {
                v94 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&s2, buffer_with, v90);
                v2 = v91;
                if ( v94 )
                {
                  v95 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v94);
                  goto LABEL_157;
                }
              }
              else
              {
                v93 = v90;
                memcpy((void *)(*(_QWORD *)v129 + v128), buffer_with, (size_t)v90);
                *(_QWORD *)v129 = &v93[v92];
                v2 = v91;
              }
LABEL_155:
              if ( <std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(
                     v124,
                     &s2,
                     v86,
                     v84) )
              {
                goto LABEL_156;
              }
              goto LABEL_159;
            case 2LL:
LABEL_110:
              if ( v124[1] <= 0x1FFFuLL )
                v69 = <std::io::buffered::bufwriter::BufWriter<I> as std::io::copy::BufferedWriterSpec>::copy_from(
                        &s2,
                        v124);
              else
                v69 = <std::io::buffered::bufreader::BufReader<I> as std::io::copy::BufferedReaderSpec>::copy_to(
                        v124,
                        &s2);
              if ( !v69 )
                goto LABEL_159;
              *(_QWORD *)&s[0] = 0x8000000000000000LL;
              *((_QWORD *)&s[1] + 1) = v70;
              v61 = (_OWORD *)_rust_alloc(32LL, 8LL);
              if ( !v61 )
                alloc::alloc::handle_alloc_error(8LL, 32LL);
              goto LABEL_90;
            case 3LL:
              goto LABEL_159;
          }
      }
      goto LABEL_5;
    }
    v34 = *((_QWORD *)&v144 + 1);
    v35 = *(_DWORD *)v145;
    LODWORD(v124[0]) = 0;
    std::fs::File::metadata(s, v124, v13, v14);
    if ( LODWORD(s[0]) == 2 )
    {
      v36 = *((_QWORD *)&s[0] + 1);
      close(0);
      v124[0] = v36;
      BYTE4(v124[2]) = 2;
      core::ptr::drop_in_place<std::io::error::Error>(v124);
      v37 = 0LL;
    }
    else
    {
      LODWORD(v124[2]) = 0;
      *(_OWORD *)v124 = s[2];
      BYTE4(v124[2]) = 1;
      *(_QWORD *)&s[1] = v124[2];
      s[0] = s[2];
      v39 = (void *)<std::fs::File as std::io::Seek>::seek(&s[1], 2LL, 0LL);
      v37 = v40;
      s2 = v39;
      v128 = v40;
      if ( v39 )
      {
        v37 = 0LL;
        core::ptr::drop_in_place<std::io::error::Error>(&v128);
      }
      v41 = s[1];
      if ( BYTE4(s[1]) )
      {
        LODWORD(s[1]) = -1;
        if ( v41 == -1 )
          core::option::unwrap_failed(&anon_ddeda120bd542e9b42a19f5271c530d9_1_llvm_10160828019337689542);
      }
      else if ( LODWORD(s[1]) != -1 )
      {
        close(s[1]);
      }
    }
    v1 = (_OWORD *)uu_tail::tail_file((_DWORD)v123, (unsigned int)&v117, v2, v34, v35, (unsigned int)src, v37);
    if ( v1 )
      break;
    if ( v15 )
      _rust_dealloc(v34, v15, 1LL);
LABEL_5:
    v2 += 48LL;
    if ( v2 == v150 )
    {
      v2 = v136;
      v102 = v137;
      if ( v137 )
      {
        v103 = v136;
        v104 = (_QWORD *)(v136 + 32);
        do
        {
          v105 = *(v104 - 1);
          if ( v105 != 0x8000000000000000LL && v105 )
            _rust_dealloc(*v104, v105, 1LL);
          v106 = *(v104 - 4);
          if ( v106 )
            _rust_dealloc(*(v104 - 3), v106, 1LL);
          v104 += 6;
          --v102;
        }
        while ( v102 );
        v2 = v103;
      }
LABEL_173:
      if ( v135 )
        _rust_dealloc(v2, 48 * v135, 8LL);
      if ( *((_BYTE *)v123 + 76) != 2 )
      {
        v108 = v123[4];
        v109 = 48 * v123[5];
        while ( v109 )
        {
          v109 -= 48LL;
          v110 = *(_QWORD *)(v108 + 24) == 0x8000000000000000LL;
          v108 += 48LL;
          if ( !v110 )
          {
            memcpy(s, src, 0x90uLL);
            v111 = uu_tail::follow::watch::follow(s, v123);
            if ( !v111 )
              return 0LL;
            return (_OWORD *)v111;
          }
        }
      }
      core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(src);
      return 0LL;
    }
  }
  v120 = v60;
  if ( v15 )
    _rust_dealloc(v34, v15, 1LL);
LABEL_186:
  v19 = (void (__fastcall *)(__int64, __int64, __int64))_rust_dealloc;
LABEL_187:
  v112 = v136;
  v113 = v137;
  if ( v137 )
  {
    v114 = (__int64 *)(v136 + 32);
    do
    {
      v115 = *(v114 - 1);
      if ( v115 != 0x8000000000000000LL && v115 )
        v19(*v114, v115, 1LL);
      v116 = *(v114 - 4);
      if ( v116 )
        v19(*(v114 - 3), v116, 1LL);
      v114 += 6;
      --v113;
    }
    while ( v113 );
  }
  if ( v135 )
    _rust_dealloc(v112, 48 * v135, 8LL);
LABEL_2:
  core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(src);
  return v1;
}
