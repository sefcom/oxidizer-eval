__int64 __fastcall uu_head::uu_head(__int64 *a1)
{
  __int64 v1; // rbx
  char v2; // r14
  _BYTE *v3; // r15
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // rsi
  char v7; // dl
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r14
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r12
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // r12
  __int64 v23; // rbp
  __int64 v24; // rax
  unsigned __int64 v25; // r14
  char *v26; // rbp
  char *v27; // r14
  __int64 v28; // r15
  void *v29; // rdi
  __int128 *v30; // rsi
  __int64 v31; // r12
  __int64 v32; // rbp
  unsigned __int64 v33; // r15
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // r15
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  unsigned __int64 v41; // r14
  unsigned __int64 v42; // r12
  __int128 v43; // rax
  __int64 v44; // r15
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rdi
  unsigned __int64 v50; // r14
  _BYTE *v51; // rax
  bool v52; // zf
  __int64 v53; // r15
  __int64 v54; // r12
  __int64 v55; // r14
  __int64 v56; // rax
  unsigned __int64 v57; // r14
  __int64 (__fastcall **v58)(); // r15
  __int64 (__fastcall *v59)(); // rsi
  unsigned __int64 v60; // rax
  __int64 v61; // r14
  __int64 n_bytes; // rax
  __int64 v63; // rax
  __int64 v64; // r14
  unsigned __int64 v65; // rbp
  __int64 v66; // rax
  unsigned __int64 v67; // rdx
  __int64 v68; // r12
  _BYTE *v69; // r12
  char *v70; // rcx
  char *v71; // r15
  char *v72; // r14
  bool v73; // cf
  unsigned __int64 v74; // rbp
  __int64 (__fastcall **v75)(); // r14
  __int64 v76; // rax
  unsigned __int64 v77; // r12
  __int64 (__fastcall **v78)(); // rax
  size_t v79; // rbp
  unsigned __int64 v80; // r15
  unsigned __int64 v81; // rsi
  __int64 v82; // rax
  unsigned __int64 v83; // r12
  __int64 (__fastcall **v84)(); // rbp
  unsigned __int64 v85; // rdx
  __int64 v86; // rdi
  __int64 v87; // rdi
  __int64 v88; // rax
  unsigned __int64 v89; // rdx
  signed __int64 v90; // rbp
  __int64 v91; // r12
  __int64 v92; // r14
  char *v93; // rdi
  signed __int64 v94; // rdx
  unsigned __int64 v95; // rdx
  __int64 v96; // rax
  signed __int64 v97; // rdx
  __int64 v98; // rbp
  __int64 v99; // rdi
  __int64 v100; // rdi
  __int64 v101; // rax
  unsigned __int64 v102; // rdx
  __int64 v103; // rbp
  __int64 v104; // rax
  unsigned __int64 v105; // rdx
  unsigned __int64 v106; // rdx
  char **v108; // rax
  char **v109; // rax
  __int64 v110; // [rsp-F000h] [rbp-10168h]
  __int64 v111; // [rsp-EFF8h] [rbp-10160h]
  __int64 v112; // [rsp-EFF0h] [rbp-10158h] BYREF
  unsigned __int64 v113; // [rsp-EFE8h] [rbp-10150h] BYREF
  __int64 (__fastcall **v114)(); // [rsp-EFE0h] [rbp-10148h]
  unsigned __int64 v115; // [rsp-EFD8h] [rbp-10140h]
  __int64 v116; // [rsp-EFD0h] [rbp-10138h] BYREF
  unsigned __int64 v117; // [rsp-EFC8h] [rbp-10130h]
  char v118; // [rsp-EFB9h] [rbp-10121h]
  __int128 v119; // [rsp-EFB8h] [rbp-10120h] BYREF
  __m256i v120; // [rsp-EFA8h] [rbp-10110h]
  __int64 v121; // [rsp-EF88h] [rbp-100F0h]
  unsigned __int64 v122; // [rsp-EF80h] [rbp-100E8h]
  __int64 v123; // [rsp-EF78h] [rbp-100E0h] BYREF
  __int64 v124; // [rsp-EF70h] [rbp-100D8h] BYREF
  __int64 v125; // [rsp-EF68h] [rbp-100D0h]
  _QWORD v126[5]; // [rsp-EF60h] [rbp-100C8h] BYREF
  __int64 *v127; // [rsp-EF38h] [rbp-100A0h]
  __int64 v128; // [rsp-EF30h] [rbp-10098h]
  char **v129; // [rsp-EF28h] [rbp-10090h]
  __int64 v130; // [rsp-EF20h] [rbp-10088h]
  _BYTE *v131; // [rsp-EF18h] [rbp-10080h]
  __int64 v132; // [rsp-EF10h] [rbp-10078h] BYREF
  char *v133; // [rsp-EF08h] [rbp-10070h]
  __int64 v134; // [rsp-EF00h] [rbp-10068h]
  __int64 v135; // [rsp-EEF8h] [rbp-10060h]
  unsigned __int64 v136; // [rsp-EEF0h] [rbp-10058h]
  _QWORD v137[2]; // [rsp-EEE8h] [rbp-10050h] BYREF
  __int64 v138; // [rsp-EED8h] [rbp-10040h] BYREF
  __int128 v139; // [rsp-EED0h] [rbp-10038h] BYREF
  __m256i v140; // [rsp-EEC0h] [rbp-10028h] BYREF
  __int64 v141; // [rsp-EEA0h] [rbp-10008h]
  unsigned __int64 v142; // [rsp-EE80h] [rbp-FFE8h]
  unsigned __int64 v143; // [rsp-EE78h] [rbp-FFE0h]
  __int64 v144; // [rsp-DEC8h] [rbp-F030h] BYREF

  do
    *((_QWORD *)&v139 + 1) = 0LL;
  while ( (__int128 *)((char *)&v139 + 8) != (__int128 *)((char *)&v144 - (char *)&unk_10000) );
  v134 = a1[4];
  if ( v134 )
  {
    v1 = a1[3];
    v135 = v1 + 24 * v134;
    v118 = *((_BYTE *)a1 + 42);
    HIBYTE(v112) = *((_BYTE *)a1 + 41);
    BYTE6(v112) = HIBYTE(v112) == 0 && *((_BYTE *)a1 + 40) != 0;
    v130 = *a1;
    HIBYTE(v111) = *((_BYTE *)a1 + 43);
    v117 = a1[1];
    v136 = v117 + 1;
    v129 = &off_EFD68;
    v2 = 0;
    do
    {
      if ( v118 )
      {
        v3 = *(_BYTE **)(v1 + 8);
        v4 = *(_QWORD *)(v1 + 16);
        v1 += 24LL;
        goto LABEL_8;
      }
      for ( v1 += 24LL; ; v1 += 24LL )
      {
        v3 = *(_BYTE **)(v1 - 16);
        v4 = *(_QWORD *)(v1 - 8);
        if ( v4 == 1 && *v3 == 45 )
          break;
        v124 = *(_QWORD *)(v1 - 16);
        v125 = v4;
        *(_QWORD *)&v139 = 0x1B600000000LL;
        WORD6(v139) = 0;
        DWORD2(v139) = 1;
        ((void (__fastcall *)(unsigned __int64 *, __int128 *, _BYTE *, __int64))std::fs::OpenOptions::_open)(
          &v113,
          &v139,
          v3,
          v4);
        if ( !(_DWORD)v113 )
        {
          v131 = v3;
          LODWORD(v112) = HIDWORD(v113);
          if ( v134 == 1 )
          {
            if ( HIBYTE(v112) )
              goto LABEL_66;
          }
          else if ( !BYTE6(v112) )
          {
LABEL_66:
            if ( (v2 & 1) != 0 )
            {
              *(_QWORD *)&v139 = &off_EFDC8;
              *((_QWORD *)&v139 + 1) = 1LL;
              v140.m256i_i64[0] = 8LL;
              *(_OWORD *)&v140.m256i_u64[1] = 0LL;
              ((void (__fastcall *)(__int128 *))std::io::stdio::_print)(&v139);
            }
            *(_QWORD *)&v119 = &v124;
            *((_QWORD *)&v119 + 1) = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v139 = &off_EFDD8;
            *((_QWORD *)&v139 + 1) = 2LL;
            v140.m256i_i64[0] = (__int64)&v119;
            *(_OWORD *)&v140.m256i_u64[1] = 1uLL;
            ((void (__fastcall *)(__int128 *))std::io::stdio::_print)(&v139);
            switch ( v130 )
            {
              case 0LL:
                goto LABEL_91;
              case 1LL:
              case 3LL:
                goto LABEL_72;
              case 2LL:
                goto LABEL_95;
            }
          }
          switch ( v130 )
          {
            case 0LL:
LABEL_91:
              v36 = _rust_alloc(&unk_10000, 1LL);
              if ( !v36 )
                goto LABEL_268;
              *(_QWORD *)&v139 = v36;
              *((_QWORD *)&v139 + 1) = &unk_10000;
              memset(&v140, 0, 24);
              v140.m256i_i64[3] = (__int64)&v112;
              v126[0] = &v139;
              v126[1] = v117;
              LOBYTE(v126[2]) = HIBYTE(v111);
              v113 = std::io::stdio::stdout();
              v37 = std::io::stdio::Stdout::lock(&v113);
              v38 = _rust_alloc(0x4000LL, 1LL);
              if ( !v38 )
                alloc::raw_vec::handle_error(1LL, 0x4000LL);
              *(_QWORD *)&v119 = 0x4000LL;
              *((_QWORD *)&v119 + 1) = v38;
              v120.m256i_i64[0] = 0LL;
              v120.m256i_i8[8] = 0;
              v120.m256i_i64[2] = v37;
              if ( ((__int64 (__fastcall *)(__int128 *, _QWORD *))<std::io::buffered::bufwriter::BufWriter<I> as std::io::copy::BufferedWriterSpec>::copy_from)(
                     &v119,
                     v126) )
              {
                v33 = v39;
                ((void (__fastcall *)(__int128 *))core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>)(&v119);
              }
              else
              {
                ((void (__fastcall *)(__int128 *))core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>)(&v119);
                v33 = 0LL;
              }
              goto LABEL_102;
            case 1LL:
            case 3LL:
LABEL_72:
              ((void (__fastcall *)(__int128 *, __int64 *))std::fs::File::metadata)(&v139, &v112);
              if ( (_DWORD)v139 == 2 )
                goto LABEL_73;
              v41 = v142;
              v42 = v143;
              *(_QWORD *)&v43 = ((__int64 (__fastcall *)(__int64 *, __int64, _QWORD))<std::fs::File as std::io::Seek>::seek)(
                                  &v112,
                                  2LL,
                                  0LL);
              v44 = *((_QWORD *)&v43 + 1);
              v119 = v43;
              if ( (_QWORD)v43 )
              {
                ((void (__fastcall *)(char *))core::ptr::drop_in_place<std::io::error::Error>)((char *)&v119 + 8);
              }
              else
              {
                *(_QWORD *)&v139 = ((__int64 (__fastcall *)(__int64 *, __int64, _QWORD))<std::fs::File as std::io::Seek>::seek)(
                                     &v112,
                                     1LL,
                                     0LL);
                *((_QWORD *)&v139 + 1) = v45;
                if ( (_QWORD)v139
                  || (*(_QWORD *)&v139 = ((__int64 (__fastcall *)(__int64 *, _QWORD, __int64))<std::fs::File as std::io::Seek>::seek)(
                                           &v112,
                                           0LL,
                                           v44),
                      *((_QWORD *)&v139 + 1) = v48,
                      (_QWORD)v139) )
                {
                  ((void (__fastcall *)(char *))core::ptr::drop_in_place<std::io::error::Error>)((char *)&v139 + 8);
                }
                else
                {
                  v60 = 512LL;
                  if ( v42 < 0x20000001 )
                    v60 = v42;
                  if ( !v42 )
                    v60 = 512LL;
                  if ( v41 > v60 )
                  {
                    if ( v130 == 1 )
                    {
                      v88 = ((__int64 (__fastcall *)(__int64 *, __int64, _QWORD))<std::fs::File as std::io::Seek>::seek)(
                              &v112,
                              1LL,
                              0LL);
                      v33 = v89;
                      if ( v88 )
                        goto LABEL_246;
                      memset(&v139, 0, (size_t)&unk_10000);
                      v90 = (signed __int64)&unk_10000;
                      if ( v33 < (unsigned __int64)&unk_10000 )
                        v90 = v33;
                      if ( !v33 )
                      {
                        v104 = ((__int64 (__fastcall *)(__int64 *, __int64, _QWORD))<std::fs::File as std::io::Seek>::seek)(
                                 &v112,
                                 2LL,
                                 0LL);
                        v33 = v105;
                        if ( v104 )
                          goto LABEL_246;
                        v33 = ((__int64 (__fastcall *)(__int64 *, __int128 *, signed __int64))std::io::default_read_exact)(
                                &v112,
                                &v139,
                                v90);
                        if ( v33 )
                          goto LABEL_246;
                        goto LABEL_259;
                      }
                      v128 = -(__int64)v33;
                      v91 = -v90;
                      v133 = (char *)&v138 + v90 + 7;
                      v92 = 0LL;
                      v93 = 0LL;
                      do
                      {
                        v122 = (unsigned __int64)v93;
                        v94 = v33 - (_QWORD)v93;
                        if ( v90 < (__int64)(v33 - (_QWORD)v93) )
                          v94 = v90;
                        if ( ((__int64 (__fastcall *)(__int64 *, __int64, signed __int64))<std::fs::File as std::io::Seek>::seek)(
                               &v112,
                               2LL,
                               -v94) )
                        {
                          v33 = v95;
                          goto LABEL_246;
                        }
                        v96 = ((__int64 (__fastcall *)(__int64 *, __int128 *, signed __int64))std::io::default_read_exact)(
                                &v112,
                                &v139,
                                v90);
                        if ( v96 )
                        {
                          v33 = v96;
                          goto LABEL_246;
                        }
                        v97 = v90;
                        v93 = (char *)(v90 + v122);
                        v98 = 0LL;
                        do
                        {
                          v92 += v133[v98] == HIBYTE(v111);
                          if ( v92 == v136 )
                          {
                            v101 = ((__int64 (__fastcall *)(__int64 *, _QWORD, _QWORD))<std::fs::File as std::io::Seek>::seek)(
                                     &v112,
                                     0LL,
                                     0LL);
                            v103 = v98 - v128;
                            if ( v101 )
                            {
                              v33 = v102;
                              if ( v102 )
                                goto LABEL_246;
                            }
                            goto LABEL_253;
                          }
                          --v98;
                        }
                        while ( v91 != v98 );
                        v90 = v97;
                        v128 += v97;
                      }
                      while ( v93 != (char *)v33 );
LABEL_259:
                      if ( ((__int64 (__fastcall *)(__int64 *, _QWORD, _QWORD))<std::fs::File as std::io::Seek>::seek)(
                             &v112,
                             0LL,
                             0LL) )
                      {
                        v33 = v106;
                        v103 = 0LL;
                        if ( v106 )
                          goto LABEL_246;
                      }
                      else
                      {
                        v103 = 0LL;
                      }
LABEL_253:
                      ((void (__fastcall *)(__int128 *, void *, __int64 *))std::io::buffered::bufreader::BufReader<R>::with_capacity)(
                        &v139,
                        &unk_10000,
                        &v112);
                      n_bytes = uu_head::read_n_bytes((__int64)&v139, v103);
                    }
                    else
                    {
                      if ( v130 != 3 )
                        ((void (__fastcall __noreturn *)(const char *, __int64, char **))core::panicking::panic)(
                          aInternalErrorE,
                          40LL,
                          &off_EFDB0);
                      ((void (__fastcall *)(__int128 *, __int64 *))std::fs::File::metadata)(&v139, &v112);
                      if ( (_DWORD)v139 == 2 )
                      {
LABEL_73:
                        v33 = *((_QWORD *)&v139 + 1);
                        goto LABEL_246;
                      }
                      v61 = v142 - v117;
                      if ( v142 <= v117 )
                        goto LABEL_250;
                      ((void (__fastcall *)(__int128 *, void *, __int64 *))std::io::buffered::bufreader::BufReader<R>::with_capacity)(
                        &v139,
                        &unk_10000,
                        &v112);
                      n_bytes = uu_head::read_n_bytes((__int64)&v139, v61);
                    }
                    v33 = n_bytes;
                    v46 = *((_QWORD *)&v139 + 1);
                    if ( n_bytes )
                    {
LABEL_103:
                      if ( v46 )
                      {
                        v47 = v139;
                        goto LABEL_245;
                      }
LABEL_246:
                      v123 = v33;
                      close(v112);
                      goto LABEL_125;
                    }
                    if ( *((_QWORD *)&v139 + 1) )
                    {
                      v100 = v139;
LABEL_249:
                      _rust_dealloc(v100, v46, 1LL);
                    }
LABEL_250:
                    v33 = 0LL;
                    goto LABEL_246;
                  }
                }
              }
              v63 = _rust_alloc(&unk_10000, 1LL);
              if ( !v63 )
LABEL_268:
                alloc::raw_vec::handle_error(1LL, &unk_10000);
              v126[0] = v63;
              v126[1] = &unk_10000;
              memset(&v126[2], 0, 24);
              v127 = &v112;
              if ( v130 == 1 )
              {
                v132 = std::io::stdio::stdout();
                v116 = std::io::stdio::Stdout::lock(&v132);
                ((void (__fastcall *)(__int128 *, _QWORD *, _QWORD, unsigned __int64))uu_head::take::TakeAllBut<I>::new)(
                  &v119,
                  v126,
                  HIBYTE(v111),
                  v117);
                v141 = v121;
                v140 = v120;
                v139 = v119;
                while ( 1 )
                {
                  ((void (__fastcall *)(unsigned __int64 *, __int128 *))<uu_head::take::TakeAllBut<I> as core::iter::traits::iterator::Iterator>::next)(
                    &v113,
                    &v139);
                  v83 = v113;
                  if ( v113 == 0x8000000000000001LL )
                  {
                    ((void (__fastcall *)(__int128 *))<alloc::collections::vec_deque::VecDeque<T,A> as core::ops::drop::Drop>::drop)(&v139);
                    if ( (_QWORD)v139 )
                      _rust_dealloc(*((_QWORD *)&v139 + 1), 24 * v139, 8LL);
                    v87 = v116;
                    v52 = (*(_DWORD *)(v116 + 12))-- == 1;
                    if ( !v52 )
                      goto LABEL_247;
                    *(_QWORD *)v87 = 0LL;
                    if ( _InterlockedExchange((volatile __int32 *)(v87 + 8), 0) != 2 )
                      goto LABEL_247;
LABEL_235:
                    std::sys::sync::mutex::futex::Mutex::wake(v87 + 8);
                    goto LABEL_247;
                  }
                  v84 = v114;
                  if ( v113 == 0x8000000000000000LL )
                    break;
                  v33 = ((__int64 (__fastcall *)(__int64 *, __int64 (__fastcall **)(), unsigned __int64))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                          &v116,
                          v114,
                          v115);
                  if ( v33 )
                  {
                    if ( v83 )
                      _rust_dealloc(v84, v83, 1LL);
                    goto LABEL_209;
                  }
                  if ( v83 )
                    _rust_dealloc(v84, v83, 1LL);
                }
                v33 = (unsigned __int64)v114;
LABEL_209:
                ((void (__fastcall *)(__int128 *))<alloc::collections::vec_deque::VecDeque<T,A> as core::ops::drop::Drop>::drop)(&v139);
                if ( (_QWORD)v139 )
                  _rust_dealloc(*((_QWORD *)&v139 + 1), 24 * v139, 8LL);
                v86 = v116;
                v52 = (*(_DWORD *)(v116 + 12))-- == 1;
                if ( !v52 )
                  goto LABEL_243;
                *(_QWORD *)v86 = 0LL;
                if ( _InterlockedExchange((volatile __int32 *)(v86 + 8), 0) != 2 )
                  goto LABEL_243;
              }
              else
              {
                if ( v130 != 3 )
                  ((void (__fastcall __noreturn *)(const char *, __int64, char **))core::panicking::panic)(
                    aInternalErrorE,
                    40LL,
                    &off_EFD98);
                if ( v117 )
                {
                  v132 = std::io::stdio::stdout();
                  v116 = std::io::stdio::Stdout::lock(&v132);
                  v113 = 0LL;
                  v114 = (__int64 (__fastcall **)())(&dword_0 + 1);
                  v115 = 0LL;
                  memset(&v139, 0, (size_t)&unk_10000);
                  v128 = 1LL;
                  v122 = 0LL;
                  v133 = 0LL;
                  while ( 1 )
                  {
                    v64 = v126[2];
                    v65 = v126[3];
                    if ( v126[2] == v126[3] && v126[1] < (unsigned __int64)byte_10001 )
                      break;
                    v68 = v126[0];
                    if ( v126[2] >= v126[3] )
                    {
                      v119 = *(_OWORD *)v126;
                      v120.m256i_i64[0] = 0LL;
                      v120.m256i_i64[1] = v126[4];
                      v33 = ((__int64 (__fastcall *)(__int64 *, __int128 *, _QWORD))std::sys::pal::unix::fs::File::read_buf)(
                              v127,
                              &v119,
                              0LL);
                      if ( v33 )
                        goto LABEL_164;
                      v126[2] = 0LL;
                      v65 = v120.m256i_i64[0];
                      *(_OWORD *)&v126[3] = *(_OWORD *)v120.m256i_i8;
                      v64 = 0LL;
                    }
                    v33 = v65 - v64;
                    if ( v68 )
                    {
                      v69 = (_BYTE *)(v64 + v68);
                      v70 = (char *)&unk_10000;
                      if ( v33 < (unsigned __int64)&unk_10000 )
                        v70 = (char *)(v65 - v64);
                      if ( v33 == 1 )
                      {
                        LOBYTE(v139) = *v69;
                      }
                      else
                      {
                        v71 = v70;
                        memcpy(&v139, v69, (size_t)v70);
                        v70 = v71;
                      }
                      v72 = &v70[v64];
                      if ( (unsigned __int64)v72 >= v65 )
                        v72 = (char *)v65;
                      v126[2] = v72;
                      v33 = (unsigned __int64)v70;
LABEL_174:
                      if ( !v33 )
                      {
                        if ( v113 )
                          _rust_dealloc(v114, v113, 1LL);
                        v87 = v116;
                        v52 = (*(_DWORD *)(v116 + 12))-- == 1;
                        if ( !v52 )
                          goto LABEL_247;
                        *(_QWORD *)v87 = 0LL;
                        if ( _InterlockedExchange((volatile __int32 *)(v87 + 8), 0) != 2 )
                          goto LABEL_247;
                        goto LABEL_235;
                      }
                      v73 = v117 < (unsigned __int64)&v133[v33];
                      v74 = v117 - (_QWORD)&v133[v33];
                      v133 += v33;
                      if ( v73 )
                      {
                        v75 = v114;
                        v76 = ((__int64 (__fastcall *)(__int64 *, __int64 (__fastcall **)(), unsigned __int64))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                                &v116,
                                v114,
                                v122);
                        if ( v76 )
                          goto LABEL_236;
                        v77 = v33 - v117;
                        if ( v33 - v117 + v122 > (unsigned __int64)&unk_10000 )
                        {
                          v79 = v33 - v117 + v122;
                          v109 = &off_EFD50;
LABEL_279:
                          v129 = v109;
LABEL_282:
                          ((void (__fastcall __noreturn *)(size_t, void *, char **))core::slice::index::slice_end_index_len_fail)(
                            v79,
                            &unk_10000,
                            v129);
                        }
                        v76 = ((__int64 (__fastcall *)(__int64 *, __int128 *))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                                &v116,
                                &v139);
                        if ( v76 )
                        {
LABEL_236:
                          v33 = v76;
LABEL_237:
                          if ( v113 )
                            _rust_dealloc(v114, v113, 1LL);
                          v99 = v116;
                          v52 = (*(_DWORD *)(v116 + 12))-- == 1;
                          if ( v52 )
                          {
                            *(_QWORD *)v99 = 0LL;
                            if ( _InterlockedExchange((volatile __int32 *)(v99 + 8), 0) == 2 )
                              std::sys::sync::mutex::futex::Mutex::wake(v99 + 8);
                          }
                          if ( v33 )
                          {
LABEL_243:
                            v46 = v126[1];
                            if ( v126[1] )
                            {
                              v47 = v126[0];
LABEL_245:
                              _rust_dealloc(v47, v46, 1LL);
                            }
                            goto LABEL_246;
                          }
LABEL_247:
                          v46 = v126[1];
                          if ( v126[1] )
                          {
                            v100 = v126[0];
                            goto LABEL_249;
                          }
                          goto LABEL_250;
                        }
                        v115 = 0LL;
                        if ( v117 > v33 )
                          ((void (__fastcall __noreturn *)(unsigned __int64, unsigned __int64, char **))core::slice::index::slice_index_order_fail)(
                            v77,
                            v33,
                            &off_EFD68);
                        if ( v33 > (unsigned __int64)&unk_10000 )
                        {
                          v79 = v33;
                          goto LABEL_282;
                        }
                        v78 = v75;
                        v79 = (char *)&v139 + v33 - ((char *)&v139 + v77);
                        if ( v113 >= v79 )
                        {
                          v80 = 0LL;
                        }
                        else
                        {
                          ((void (__fastcall *)(unsigned __int64 *, _QWORD, signed __int64))alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle)(
                            &v113,
                            0LL,
                            (char *)&v139 + v33 - ((char *)&v139 + v77));
                          v78 = v114;
                          v80 = v115;
                        }
                        v128 = (__int64)v78;
                        memcpy((char *)v78 + v80, (char *)&v139 + v77, v79);
                      }
                      else
                      {
                        v79 = v33 + v74;
                        if ( v79 >= (unsigned __int64)byte_10001 )
                        {
                          v109 = &off_EFD80;
                          goto LABEL_279;
                        }
                        v81 = v122;
                        if ( v113 - v122 >= v79 )
                        {
                          v82 = v128;
                        }
                        else
                        {
                          ((void (__fastcall *)(unsigned __int64 *, unsigned __int64, size_t))alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle)(
                            &v113,
                            v122,
                            v79);
                          v82 = (__int64)v114;
                          v81 = v115;
                        }
                        v128 = v82;
                        memcpy((void *)(v82 + v81), &v139, v79);
                        v80 = v115;
                      }
                      v122 = v79 + v80;
                      v115 = v79 + v80;
                    }
                    else
                    {
LABEL_164:
                      *(_QWORD *)&v119 = v33;
                      if ( (unsigned __int8)((__int64 (__fastcall *)(unsigned __int64))std::io::error::Error::kind)(v33) != 35 )
                        goto LABEL_237;
                      ((void (__fastcall *)(__int128 *))core::ptr::drop_in_place<std::io::error::Error>)(&v119);
                    }
                  }
                  *(_OWORD *)&v126[2] = 0LL;
                  v66 = ((__int64 (__fastcall *)(__int64 *, __int128 *, void *))std::sys::pal::unix::fs::File::read)(
                          v127,
                          &v139,
                          &unk_10000);
                  v33 = v67;
                  if ( !v66 )
                    goto LABEL_174;
                  goto LABEL_164;
                }
                *(_QWORD *)&v139 = v126;
                *((_QWORD *)&v139 + 1) = -1LL;
                v113 = std::io::stdio::stdout();
                *(_QWORD *)&v119 = std::io::stdio::Stdout::lock(&v113);
                if ( !((__int64 (__fastcall *)(__int128 *, __int128 *))<std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy)(
                        &v139,
                        &v119) )
                {
                  v87 = v119;
                  v52 = (*(_DWORD *)(v119 + 12))-- == 1;
                  if ( !v52 )
                    goto LABEL_247;
                  *(_QWORD *)v87 = 0LL;
                  if ( _InterlockedExchange((volatile __int32 *)(v87 + 8), 0) != 2 )
                    goto LABEL_247;
                  goto LABEL_235;
                }
                v33 = v85;
                v86 = v119;
                v52 = (*(_DWORD *)(v119 + 12))-- == 1;
                if ( !v52 )
                  goto LABEL_243;
                *(_QWORD *)v86 = 0LL;
                if ( _InterlockedExchange((volatile __int32 *)(v86 + 8), 0) != 2 )
                  goto LABEL_243;
              }
              std::sys::sync::mutex::futex::Mutex::wake(v86 + 8);
              goto LABEL_243;
            case 2LL:
LABEL_95:
              v40 = _rust_alloc(&unk_10000, 1LL);
              if ( !v40 )
                goto LABEL_268;
              *(_QWORD *)&v139 = v40;
              *((_QWORD *)&v139 + 1) = &unk_10000;
              memset(&v140, 0, 24);
              v140.m256i_i64[3] = (__int64)&v112;
              v33 = uu_head::read_n_bytes((__int64)&v139, v117);
LABEL_102:
              v46 = *((_QWORD *)&v139 + 1);
              goto LABEL_103;
          }
        }
        v116 = ((__int64 (__fastcall *)(__int64 (__fastcall **)(), __int64, __int64))<std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context)(
                 v114,
                 v124,
                 v125);
        _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
        if ( uucore::UTIL_NAME != 2 )
          once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        *(_OWORD *)v126 = xmmword_F49E8;
        *(_QWORD *)&v119 = v126;
        *((_QWORD *)&v119 + 1) = <&T as core::fmt::Display>::fmt;
        v120.m256i_i64[0] = (__int64)&v116;
        v120.m256i_i64[1] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)&v139 = &unk_EFDF8;
        *((_QWORD *)&v139 + 1) = 3LL;
        v140.m256i_i64[0] = (__int64)&v119;
        *(_OWORD *)&v140.m256i_u64[1] = 2uLL;
        std::io::stdio::_eprint(&v139);
        v5 = v116;
        v6 = *(_QWORD *)v116;
        if ( *(_QWORD *)v116 != 0x8000000000000000LL && v6 )
          _rust_dealloc(*(_QWORD *)(v116 + 8), v6, 1LL);
        ((void (__fastcall *)(__int64))core::ptr::drop_in_place<std::io::error::Error>)(v5 + 24);
        _rust_dealloc(v5, 32LL, 8LL);
        v52 = v1 == v135;
        if ( v52 )
          return 0LL;
      }
      v4 = 1LL;
LABEL_8:
      v131 = v3;
      if ( v134 == 1 )
      {
        if ( !HIBYTE(v112) )
          goto LABEL_26;
      }
      else if ( BYTE6(v112) )
      {
        goto LABEL_26;
      }
      if ( (v2 & 1) != 0 )
      {
        *(_QWORD *)&v139 = &off_EFDC8;
        *((_QWORD *)&v139 + 1) = 1LL;
        v140.m256i_i64[0] = 8LL;
        *(_OWORD *)&v140.m256i_u64[1] = 0LL;
        ((void (__fastcall *)(__int128 *))std::io::stdio::_print)(&v139);
      }
      *(_QWORD *)&v139 = &off_EFE28;
      *((_QWORD *)&v139 + 1) = 1LL;
      v140.m256i_i64[0] = 8LL;
      *(_OWORD *)&v140.m256i_u64[1] = 0LL;
      ((void (__fastcall *)(__int128 *))std::io::stdio::_print)(&v139);
LABEL_26:
      v132 = std::io::stdio::stdin();
      v113 = ((__int64 (__fastcall *)(__int64 *))std::io::stdio::Stdin::lock)(&v132);
      LOBYTE(v114) = v7 & 1;
      switch ( v130 )
      {
        case 0LL:
          *(_QWORD *)&v119 = &v113;
          *((_QWORD *)&v119 + 1) = v117;
          v120.m256i_i8[0] = HIBYTE(v111);
          v126[0] = std::io::stdio::stdout();
          v8 = std::io::stdio::Stdout::lock(v126);
          v9 = _rust_alloc(0x4000LL, 1LL);
          if ( !v9 )
            alloc::raw_vec::handle_error(1LL, 0x4000LL);
          *(_QWORD *)&v139 = 0x4000LL;
          *((_QWORD *)&v139 + 1) = v9;
          v140.m256i_i64[0] = 0LL;
          v140.m256i_i8[8] = 0;
          v140.m256i_i64[2] = v8;
          if ( ((__int64 (__fastcall *)(__int128 *, __int128 *))<std::io::buffered::bufwriter::BufWriter<I> as std::io::copy::BufferedWriterSpec>::copy_from)(
                 &v139,
                 &v119) )
          {
            v11 = v10;
            ((void (__fastcall *)(__int128 *))core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>)(&v139);
          }
          else
          {
            ((void (__fastcall *)(__int128 *))core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>)(&v139);
            v11 = 0LL;
          }
          v123 = v11;
          goto LABEL_120;
        case 1LL:
          v116 = std::io::stdio::stdout();
          v124 = std::io::stdio::Stdout::lock(&v116);
          ((void (__fastcall *)(__int128 *, unsigned __int64 *, _QWORD, unsigned __int64))uu_head::take::TakeAllBut<I>::new)(
            &v119,
            &v113,
            HIBYTE(v111),
            v117);
          v141 = v121;
          v140 = v120;
          v139 = v119;
          while ( 2 )
          {
            ((void (__fastcall *)(_QWORD *, __int128 *))<uu_head::take::TakeAllBut<I> as core::iter::traits::iterator::Iterator>::next)(
              v126,
              &v139);
            v31 = v126[0];
            if ( v126[0] == 0x8000000000000001LL )
            {
              ((void (__fastcall *)(__int128 *))<alloc::collections::vec_deque::VecDeque<T,A> as core::ops::drop::Drop>::drop)(&v139);
              if ( (_QWORD)v139 )
                _rust_dealloc(*((_QWORD *)&v139 + 1), 24 * v139, 8LL);
              v34 = v124;
              v52 = (*(_DWORD *)(v124 + 12))-- == 1;
              if ( v52 )
              {
                *(_QWORD *)v34 = 0LL;
                if ( _InterlockedExchange((volatile __int32 *)(v34 + 8), 0) == 2 )
                  std::sys::sync::mutex::futex::Mutex::wake(v34 + 8);
              }
              v123 = 0LL;
              goto LABEL_120;
            }
            v32 = v126[1];
            if ( v126[0] == 0x8000000000000000LL )
            {
              v17 = v126[1];
            }
            else
            {
              v17 = ((__int64 (__fastcall *)(__int64 *, _QWORD, _QWORD))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                      &v124,
                      v126[1],
                      v126[2]);
              if ( !v17 )
              {
                if ( v31 )
                  _rust_dealloc(v32, v31, 1LL);
                continue;
              }
              if ( v31 )
                _rust_dealloc(v32, v31, 1LL);
            }
            break;
          }
          ((void (__fastcall *)(__int128 *))<alloc::collections::vec_deque::VecDeque<T,A> as core::ops::drop::Drop>::drop)(&v139);
          if ( (_QWORD)v139 )
            _rust_dealloc(*((_QWORD *)&v139 + 1), 24 * v139, 8LL);
          v35 = v124;
          v52 = (*(_DWORD *)(v124 + 12))-- == 1;
          if ( v52 )
          {
            *(_QWORD *)v35 = 0LL;
            if ( _InterlockedExchange((volatile __int32 *)(v35 + 8), 0) == 2 )
              goto LABEL_118;
          }
          goto LABEL_119;
        case 2LL:
          v123 = uu_head::read_n_bytes((__int64)&v113, v117);
          goto LABEL_120;
        case 3LL:
          if ( !v117 )
          {
            v123 = uu_head::read_n_bytes((__int64)&v113, -1LL);
            goto LABEL_120;
          }
          v124 = std::io::stdio::stdout();
          v126[0] = std::io::stdio::Stdout::lock(&v124);
          *(_QWORD *)&v119 = 0LL;
          *((_QWORD *)&v119 + 1) = 1LL;
          v120.m256i_i64[0] = 0LL;
          memset(&v139, 0, (size_t)&unk_10000);
          v122 = 0LL;
          break;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v16 = ((__int64 (__fastcall *)(unsigned __int64 *, __int128 *, void *))<std::io::stdio::StdinLock as std::io::Read>::read)(
                  &v113,
                  &v139,
                  &unk_10000);
          v17 = v12;
          if ( !v16 )
            break;
          if ( (unsigned __int8)((__int64 (__fastcall *)(unsigned __int64))std::io::error::Error::kind)(v12) != 35 )
            goto LABEL_114;
          if ( (v17 & 3) - 2 >= 2 && (v17 & 3) != 0 )
          {
            v18 = v17 - 1;
            v19 = *(_QWORD *)(v17 - 1);
            v20 = *(_QWORD *)(v17 + 7);
            if ( *(_QWORD *)v20 )
              (*(void (__fastcall **)(__int64))v20)(v19);
            v21 = *(_QWORD *)(v20 + 8);
            if ( v21 )
              _rust_dealloc(v19, v21, *(_QWORD *)(v20 + 16));
            _rust_dealloc(v18, 24LL, 8LL);
          }
        }
        if ( !v12 )
        {
          if ( (_QWORD)v119 )
            _rust_dealloc(*((_QWORD *)&v119 + 1), v119, 1LL);
          v49 = v126[0];
          v52 = (*(_DWORD *)(v126[0] + 12LL))-- == 1;
          if ( v52 )
          {
            *(_QWORD *)v49 = 0LL;
            if ( _InterlockedExchange((volatile __int32 *)(v49 + 8), 0) == 2 )
              std::sys::sync::mutex::futex::Mutex::wake(v49 + 8);
          }
          v17 = 0LL;
          goto LABEL_119;
        }
        v122 += v12;
        if ( v117 >= v122 )
        {
          v26 = (char *)(v12 + v117 - v122);
          if ( v26 >= byte_10001 )
          {
            v108 = &off_EFD80;
            goto LABEL_271;
          }
          v28 = v120.m256i_i64[0];
          if ( (__int64)v119 - v120.m256i_i64[0] < (unsigned __int64)v26 )
          {
            ((void (__fastcall *)(__int128 *, __int64, unsigned __int64))alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle)(
              &v119,
              v120.m256i_i64[0],
              v12 + v117 - v122);
            v28 = v120.m256i_i64[0];
          }
          v29 = (void *)(v28 + *((_QWORD *)&v119 + 1));
          v30 = &v139;
          goto LABEL_57;
        }
        v22 = *((_QWORD *)&v119 + 1);
        v23 = v120.m256i_i64[0];
        v24 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                v126,
                *((_QWORD *)&v119 + 1),
                v120.m256i_i64[0]);
        if ( v24 )
          break;
        v25 = v17 - v117;
        v26 = (char *)(v17 - v117 + v23);
        if ( v26 > (char *)&unk_10000 )
        {
          v108 = &off_EFD50;
LABEL_271:
          v129 = v108;
LABEL_273:
          ((void (__fastcall __noreturn *)(char *, void *, char **))core::slice::index::slice_end_index_len_fail)(
            v26,
            &unk_10000,
            v129);
        }
        v24 = ((__int64 (__fastcall *)(_QWORD *, __int128 *, char *))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                v126,
                &v139,
                v26);
        if ( v24 )
          break;
        v120.m256i_i64[0] = 0LL;
        if ( v117 > v17 )
          ((void (__fastcall __noreturn *)(unsigned __int64, unsigned __int64, char **))core::slice::index::slice_index_order_fail)(
            v25,
            v17,
            &off_EFD68);
        if ( v17 > (unsigned __int64)&unk_10000 )
        {
          v26 = (char *)v17;
          goto LABEL_273;
        }
        v27 = (char *)&v139 + v25;
        v26 = (char *)((char *)&v139 + v17 - v27);
        if ( (unsigned __int64)v119 >= (unsigned __int64)v26 )
        {
          v28 = 0LL;
        }
        else
        {
          ((void (__fastcall *)(__int128 *, _QWORD, signed __int64))alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle)(
            &v119,
            0LL,
            (char *)&v139 + v17 - v27);
          v22 = *((_QWORD *)&v119 + 1);
          v28 = v120.m256i_i64[0];
        }
        v29 = (void *)(v28 + v22);
        v30 = (__int128 *)v27;
LABEL_57:
        memcpy(v29, v30, (size_t)v26);
        v120.m256i_i64[0] = (__int64)&v26[v28];
      }
      v17 = v24;
LABEL_114:
      if ( (_QWORD)v119 )
        _rust_dealloc(*((_QWORD *)&v119 + 1), v119, 1LL);
      v35 = v126[0];
      v52 = (*(_DWORD *)(v126[0] + 12LL))-- == 1;
      if ( v52 )
      {
        *(_QWORD *)v35 = 0LL;
        if ( _InterlockedExchange((volatile __int32 *)(v35 + 8), 0) == 2 )
LABEL_118:
          std::sys::sync::mutex::futex::Mutex::wake(v35 + 8);
      }
LABEL_119:
      v123 = v17;
LABEL_120:
      v50 = v113;
      if ( !(_BYTE)v114 )
      {
        v13 = 0x7FFFFFFFFFFFFFFFLL;
        if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
        {
          *(_BYTE *)(v50 + 4) = 1;
        }
      }
      if ( _InterlockedExchange((volatile __int32 *)v50, 0) == 2 )
        std::sys::sync::mutex::futex::Mutex::wake(v50);
      v33 = v123;
LABEL_125:
      v51 = v131;
      if ( v33 )
      {
        if ( v4 == 1 )
        {
          v52 = *v131 == 45;
          v13 = (__int64)v131;
          if ( *v131 == 45 )
            v13 = (__int64)&unk_19EFD;
          v131 = (_BYTE *)v13;
          v4 = 1LL;
          if ( v52 )
            v4 = 14LL;
          v51 = v131;
        }
        v124 = (__int64)v51;
        v125 = v4;
        *(_QWORD *)&v119 = &v124;
        *((_QWORD *)&v119 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v139 = &off_EFE38;
        *((_QWORD *)&v139 + 1) = 2LL;
        v140.m256i_i64[0] = (__int64)&v119;
        *(_OWORD *)&v140.m256i_u64[1] = 1uLL;
        alloc::fmt::format::format_inner(v137, &v139, v12, v13, v14, v15, v110, v111, v112, v113, v114);
        v53 = v137[0];
        v54 = v137[1];
        v55 = v138;
        v56 = _rust_alloc(32LL, 8LL);
        if ( !v56 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        *(_QWORD *)v56 = v53;
        *(_QWORD *)(v56 + 8) = v54;
        *(_QWORD *)(v56 + 16) = v55;
        *(_DWORD *)(v56 + 24) = 1;
        v113 = v56;
        v114 = &off_EFE90;
        _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
        if ( uucore::UTIL_NAME != 2 )
          once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        *(_OWORD *)v126 = xmmword_F49E8;
        *(_QWORD *)&v119 = v126;
        *((_QWORD *)&v119 + 1) = <&T as core::fmt::Display>::fmt;
        v120.m256i_i64[0] = (__int64)&v113;
        v120.m256i_i64[1] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)&v139 = &unk_EFDF8;
        *((_QWORD *)&v139 + 1) = 3LL;
        v140.m256i_i64[0] = (__int64)&v119;
        *(_OWORD *)&v140.m256i_u64[1] = 2uLL;
        std::io::stdio::_eprint(&v139);
        v57 = v113;
        v58 = v114;
        if ( *v114 )
          ((void (__fastcall *)(unsigned __int64))*v114)(v113);
        v59 = v58[1];
        if ( v59 )
          _rust_dealloc(v57, v59, v58[2]);
        ((void (__fastcall *)(__int64 *))core::ptr::drop_in_place<std::io::error::Error>)(&v123);
      }
      v2 = 1;
    }
    while ( v1 != v135 );
  }
  return 0LL;
}
