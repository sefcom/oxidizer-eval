__int64 __fastcall uu_cat::cat_files(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned __int64 v3; // r15
  __int64 v4; // r12
  int *v5; // rax
  __int64 v6; // rbx
  char v7; // al
  unsigned __int8 v8; // si
  __int64 v9; // rcx
  const char *v10; // rdx
  struct stat *v11; // rsi
  __nlink_t v12; // rax
  __int64 v13; // r13
  int v14; // eax
  __int64 v15; // r14
  int v16; // eax
  ssize_t v17; // rax
  unsigned __int64 v18; // rbp
  int v19; // eax
  __dev_t st_dev; // rbx
  unsigned __int8 st_ino; // al
  unsigned __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rax
  int v25; // ecx
  __ino_t v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rbp
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r13
  unsigned __int64 v35; // rdi
  int v36; // eax
  bool v37; // bl
  int *v38; // rax
  unsigned int v39; // eax
  __int64 v40; // rdi
  bool v41; // zf
  __int64 v42; // r13
  int st_dev_high; // ebp
  __ino_t v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // r14
  int v48; // ebp
  int v49; // eax
  ssize_t v50; // rax
  unsigned __int64 v51; // rbp
  int v52; // eax
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // r13
  unsigned __int64 v56; // r14
  unsigned __int64 v57; // r15
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rbp
  unsigned __int64 v61; // rdi
  int v62; // eax
  char v63; // bl
  int *v64; // rax
  __int64 v65; // r14
  int v66; // ebp
  int v67; // eax
  ssize_t v68; // rax
  unsigned __int64 v69; // rbp
  int v70; // eax
  __int64 v71; // rax
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rbp
  unsigned __int64 v74; // r14
  unsigned __int64 v75; // r15
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // r13
  unsigned __int64 v79; // rdi
  int v80; // eax
  char v81; // bl
  int *v82; // rax
  unsigned int v83; // eax
  __int64 v84; // rdi
  int *v85; // rax
  unsigned int v86; // eax
  __ino_t v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rdi
  __ino_t v90; // rdx
  __int64 v91; // rax
  __int64 v92; // rbx
  __int64 v93; // rax
  __int64 v94; // rcx
  unsigned __int64 v95; // rax
  __int64 v96; // r15
  int v97; // ebp
  __int64 v98; // r12
  __int64 v99; // r13
  __int64 v100; // r14
  __int64 v101; // rax
  __int64 v102; // r14
  _QWORD *v103; // r15
  __int64 v104; // rsi
  bool v106; // [rsp-EFF2h] [rbp-1020Ah]
  unsigned __int8 v107; // [rsp-EFF1h] [rbp-10209h]
  __int64 v108; // [rsp-EFF0h] [rbp-10208h] BYREF
  __int16 v109; // [rsp-EFE8h] [rbp-10200h]
  char v110; // [rsp-EFE6h] [rbp-101FEh]
  __int64 v111; // [rsp-EFE0h] [rbp-101F8h] BYREF
  int v112; // [rsp-EFD8h] [rbp-101F0h] BYREF
  unsigned __int8 v113; // [rsp-EFD2h] [rbp-101EAh]
  unsigned __int8 v114; // [rsp-EFD1h] [rbp-101E9h]
  struct stat *v115; // [rsp-EFD0h] [rbp-101E8h]
  __int64 v116; // [rsp-EFC8h] [rbp-101E0h] BYREF
  __int64 v117; // [rsp-EFC0h] [rbp-101D8h] BYREF
  bool v118; // [rsp-EFB8h] [rbp-101D0h]
  struct stat *v119; // [rsp-EFB0h] [rbp-101C8h] BYREF
  __int64 (__fastcall *v120)(); // [rsp-EFA8h] [rbp-101C0h]
  __int64 *v121; // [rsp-EFA0h] [rbp-101B8h]
  __int64 (__fastcall *v122)(); // [rsp-EF98h] [rbp-101B0h]
  struct stat *v123; // [rsp-EF90h] [rbp-101A8h]
  __int64 v124; // [rsp-EF88h] [rbp-101A0h]
  __int64 v125; // [rsp-EF80h] [rbp-10198h] BYREF
  _QWORD v126[2]; // [rsp-EF78h] [rbp-10190h] BYREF
  __int64 v127; // [rsp-EF68h] [rbp-10180h]
  unsigned int v128; // [rsp-EF5Ch] [rbp-10174h]
  __int64 v129; // [rsp-EF58h] [rbp-10170h] BYREF
  __int64 v130; // [rsp-EF50h] [rbp-10168h]
  __int64 v131; // [rsp-EF48h] [rbp-10160h]
  __int64 *v132; // [rsp-EF40h] [rbp-10158h]
  __nlink_t st_nlink; // [rsp-EF38h] [rbp-10150h]
  _BYTE *v134; // [rsp-EF30h] [rbp-10148h]
  __nlink_t v135; // [rsp-EF28h] [rbp-10140h]
  struct stat v136; // [rsp-EF20h] [rbp-10138h] BYREF
  __int64 v137; // [rsp-EE90h] [rbp-100A8h]
  unsigned __int64 v138; // [rsp-EE88h] [rbp-100A0h] BYREF
  struct stat *v139; // [rsp-EE80h] [rbp-10098h]
  __int64 v140; // [rsp-EE78h] [rbp-10090h]
  int v141; // [rsp-EE6Ch] [rbp-10084h]
  __int64 v142; // [rsp-EE68h] [rbp-10080h]
  __int64 v143; // [rsp-EE60h] [rbp-10078h]
  __int64 v144; // [rsp-EE58h] [rbp-10070h]
  __int64 v145; // [rsp-EE50h] [rbp-10068h]
  __int128 v146; // [rsp-EE48h] [rbp-10060h] BYREF
  unsigned __int64 v147; // [rsp-EE38h] [rbp-10050h]
  __int64 v148; // [rsp-EE30h] [rbp-10048h] BYREF
  __int64 v149; // [rsp-EE28h] [rbp-10040h]
  __int64 v150; // [rsp-EE20h] [rbp-10038h]
  _QWORD v151[7619]; // [rsp-EE18h] [rbp-10030h] BYREF

  do
    v151[0] = 0LL;
  while ( v151 != (_QWORD *)((char *)&v151[512] - (char *)&unk_10000) );
  v134 = a3;
  v4 = a1;
  std::io::stdio::stdout();
  v141 = fstat(1, &v136);
  if ( v141 == -1 )
  {
    v5 = _errno_location();
    v151[1] = (((__int64 (__fastcall *)(_QWORD))nix::errno::consts::from_i32)((unsigned int)*v5) << 32) | 2;
    v151[0] = 1LL;
    ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<std::io::error::Error>)(&v151[1]);
  }
  else
  {
    memcpy(&v151[1], &v136, 0x90uLL);
    v143 = v151[1];
    v142 = v151[2];
    v144 = v151[7];
  }
  v108 = 1LL;
  v109 = 1;
  v110 = 0;
  v129 = 0LL;
  v130 = 8LL;
  v131 = 0LL;
  v6 = 0LL;
  if ( !a2 )
    goto LABEL_288;
  v145 = a1 + 24 * a2;
  v7 = v134[2];
  v8 = v134[3];
  v114 = v134[1];
  v113 = v8;
  v107 = v134[4];
  v106 = (v107 | (unsigned __int8)(*v134 | v7 | v8 | v114)) == 0;
  v9 = 0LL;
  v10 = asc_19272;
  if ( !v7 )
    v10 = asc_19259;
  v139 = (struct stat *)v10;
  LOBYTE(v9) = v7 != 0;
  v140 = v9 + 1;
  v132 = &v111;
  while ( 2 )
  {
    v11 = *(struct stat **)(v4 + 8);
    v12 = *(_QWORD *)(v4 + 16);
    LODWORD(v127) = v114;
    v128 = v113;
    v135 = v12;
    v115 = v11;
    if ( v12 != 1 || LOBYTE(v11->st_dev) != 45 )
    {
      std::sys::pal::unix::fs::stat(v151);
      if ( LODWORD(v151[0]) == 2 )
      {
        st_ino = v151[1];
        v151[0] = v151[1];
        v22 = v151[1] & 3;
        if ( v22 >= 2 && (_DWORD)v22 == 2 && (v151[1] & 0xFFFFFFFF00000000LL) == 0x2800000000LL )
        {
          ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<std::io::error::Error>)(v151);
          st_ino = v136.st_ino;
          st_dev = 0x8000000000000005LL;
        }
        else
        {
          v136.st_ino = v151[1];
          st_dev = 0x8000000000000000LL;
        }
LABEL_36:
        st_nlink = v136.st_nlink;
        v3 = ((unsigned __int64)((HIBYTE(v136.st_ino) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v136.st_ino
                                                                                                 + 5)) << 40) | ((unsigned __int64)*(unsigned int *)((char *)&v136.st_ino + 1) << 8) | st_ino;
        goto LABEL_37;
      }
      LODWORD(v125) = v151[7];
      v23 = (v151[7] & 0xF000) - 4096;
      if ( v23 < 0xC000 && (v24 = v23 >> 12, v25 = 2731, _bittest(&v25, v24)) )
      {
        st_ino = byte_192D4[v24];
        if ( !st_ino )
          goto LABEL_68;
      }
      else
      {
        v119 = (struct stat *)&v125;
        v120 = <std::fs::FileType as core::fmt::Debug>::fmt;
        v151[0] = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
        v151[1] = 1LL;
        v151[4] = 0LL;
        v151[2] = &v119;
        v151[3] = 1LL;
        v11 = (struct stat *)v151;
        ((void (__fastcall *)(struct stat *, _QWORD *))alloc::fmt::format::format_inner)(&v136, v151);
        st_dev = v136.st_dev;
        st_ino = v136.st_ino;
        if ( v136.st_dev != 0x8000000000000006LL )
          goto LABEL_36;
        if ( !LOBYTE(v136.st_ino) )
        {
LABEL_68:
          st_dev = 0x8000000000000003LL;
          goto LABEL_37;
        }
      }
      if ( st_ino != 2 )
      {
        if ( st_ino == 7 )
        {
          ((void (__fastcall *)(_QWORD *, struct stat *, __nlink_t))std::os::unix::net::stream::UnixStream::connect)(
            v151,
            v115,
            v135);
          if ( LODWORD(v151[0]) )
          {
            v3 = v151[1];
            st_dev = 0x8000000000000000LL;
          }
          else
          {
            v112 = HIDWORD(v151[0]);
            v11 = (struct stat *)(&dword_0 + 1);
            v42 = ((__int64 (__fastcall *)(int *, __int64))std::net::tcp::TcpStream::shutdown)(&v112, 1LL);
            if ( !v42 )
            {
              LODWORD(v111) = v112;
              BYTE4(v111) = 0;
              if ( v106 )
              {
                v125 = std::io::stdio::stdout();
                v119 = (struct stat *)((__int64 (__fastcall *)(__int64 *))std::io::stdio::Stdout::lock)(&v125);
                if ( pipe((int *)v151) == -1 )
                {
                  v85 = _errno_location();
                  LODWORD(v47) = ((__int64 (__fastcall *)(_QWORD))nix::errno::consts::from_i32)((unsigned int)*v85);
                }
                else
                {
                  v47 = HIDWORD(v151[0]);
                  if ( LODWORD(v151[0]) != -1 )
                  {
                    LODWORD(v136.st_dev) = v151[0];
                    LODWORD(v151[0]) = HIDWORD(v151[0]);
                    while ( 1 )
                    {
                      v48 = ((__int64 (__fastcall *)(__int64 *))<std::sys::pal::unix::pipe::AnonPipe as std::os::fd::owned::AsFd>::as_fd)(&v111);
                      v49 = ((__int64 (__fastcall *)(_QWORD *))<std::sys::pal::unix::fd::FileDesc as std::os::fd::owned::AsFd>::as_fd)(v151);
                      v11 = 0LL;
                      v50 = splice(v48, 0LL, v49, 0LL, (size_t)&unk_20000, 0);
                      if ( v50 == -1 )
                        break;
                      if ( !v50 )
                      {
                        v51 = v3;
                        LOBYTE(v47) = 0;
LABEL_231:
                        st_dev = 0x8000000000000006LL;
                        goto LABEL_232;
                      }
                      if ( (unsigned int)((__int64 (__fastcall *)(struct stat *, struct stat **, ssize_t))uucore::features::pipes::splice_exact)(
                                           &v136,
                                           &v119,
                                           v50) != 134 )
                      {
                        v51 = v3;
                        v11 = (struct stat *)&v119;
                        v52 = uu_cat::splice::copy_exact(v136.st_dev);
                        LOBYTE(v47) = v52;
                        st_dev = 0x8000000000000001LL;
                        if ( v52 == 134 )
                        {
                          LOBYTE(v47) = 1;
                          st_dev = 0x8000000000000006LL;
                        }
LABEL_232:
                        close(v151[0]);
                        close(v136.st_dev);
                        if ( st_dev == 0x8000000000000006LL )
                        {
                          v3 = v51;
                          if ( (_BYTE)v47 )
                          {
                            memset(v151, 0, (size_t)&unk_10000);
                            while ( 1 )
                            {
                              v11 = (struct stat *)v151;
                              v136.st_dev = ((__int64 (__fastcall *)(__int64 *, _QWORD *, void *))<std::os::unix::net::stream::UnixStream as std::io::Read>::read)(
                                              &v111,
                                              v151,
                                              &unk_10000);
                              v136.st_ino = v90;
                              if ( v136.st_dev )
                                break;
                              if ( !v90 )
                                goto LABEL_257;
                              if ( v90 >= (unsigned __int64)&unk_10001 )
                                ((void (__fastcall __noreturn *)(__ino_t, void *, char **))core::slice::index::slice_end_index_len_fail)(
                                  v90,
                                  &unk_10000,
                                  &off_E4E40);
                              v11 = (struct stat *)v151;
                              v91 = ((__int64 (__fastcall *)(struct stat **, _QWORD *))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                                      &v119,
                                      v151);
                              if ( v91 )
                                goto LABEL_258;
                            }
                            ((void (__fastcall *)(__ino_t *))core::ptr::drop_in_place<std::io::error::Error>)(&v136.st_ino);
LABEL_257:
                            v91 = ((__int64 (__fastcall *)(struct stat **))<std::io::stdio::StdoutLock as std::io::Write>::flush)(&v119);
                            if ( v91 )
                            {
LABEL_258:
                              st_dev = 0x8000000000000000LL;
                              v3 = v91;
                              goto LABEL_242;
                            }
                            v89 = (__int64)v119;
                            v41 = HIDWORD(v119->st_ino)-- == 1;
                            if ( v41 )
                            {
                              *(_QWORD *)v89 = 0LL;
                              if ( _InterlockedExchange((volatile __int32 *)(v89 + 8), 0) == 2 )
LABEL_261:
                                ((void (__fastcall *)(__int64))std::sys::sync::mutex::futex::Mutex::wake)(v89 + 8);
                            }
LABEL_262:
                            st_dev = 0x8000000000000006LL;
LABEL_263:
                            close(v111);
                            goto LABEL_264;
                          }
                          st_dev = 0x8000000000000006LL;
LABEL_242:
                          v84 = (__int64)v119;
                          v41 = HIDWORD(v119->st_ino)-- == 1;
                          if ( !v41 )
                            goto LABEL_263;
                          *(_QWORD *)v84 = 0LL;
                          if ( _InterlockedExchange((volatile __int32 *)(v84 + 8), 0) != 2 )
                            goto LABEL_263;
LABEL_244:
                          ((void (__fastcall *)(__int64))std::sys::sync::mutex::futex::Mutex::wake)(v84 + 8);
                          goto LABEL_263;
                        }
                        v86 = 0;
                        v3 = v51;
LABEL_241:
                        v3 = (v86 << 8) | (unsigned __int8)v47 | v3 & 0xFFFFFFFF00000000LL;
                        goto LABEL_242;
                      }
                    }
                    v51 = v3;
                    _errno_location();
                    LOBYTE(v47) = 1;
                    goto LABEL_231;
                  }
                }
                v86 = (unsigned int)v47 >> 8;
                st_dev = 0x8000000000000001LL;
                goto LABEL_241;
              }
              memset(v151, 0, 0x7C00uLL);
              v116 = std::io::stdio::stdout();
              v117 = ((__int64 (__fastcall *)(__int64 *))std::io::stdio::Stdout::lock)(&v116);
              while ( 1 )
              {
                v11 = (struct stat *)v151;
                v53 = ((__int64 (__fastcall *)(__int64 *, _QWORD *, __int64))<std::os::unix::net::stream::UnixStream as std::io::Read>::read)(
                        &v111,
                        v151,
                        31744LL);
                v55 = v54;
                v137 = v53;
                v138 = v54;
                if ( v53 )
                {
                  ((void (__fastcall *)(unsigned __int64 *))core::ptr::drop_in_place<std::io::error::Error>)(&v138);
LABEL_253:
                  v89 = v117;
                  v41 = (*(_DWORD *)(v117 + 12))-- == 1;
                  if ( v41 )
                  {
                    *(_QWORD *)v89 = 0LL;
                    if ( _InterlockedExchange((volatile __int32 *)(v89 + 8), 0) == 2 )
                      goto LABEL_261;
                  }
                  goto LABEL_262;
                }
                if ( !v54 )
                  goto LABEL_253;
                if ( v54 > 0x7C00 )
                  ((void (__fastcall __noreturn *)(unsigned __int64, __int64, char **))core::slice::index::slice_end_index_len_fail)(
                    v54,
                    31744LL,
                    &off_E4E58);
                v56 = v3;
                v57 = 0LL;
                while ( 1 )
                {
                  while ( *((_BYTE *)v151 + v57) == 10 )
                  {
                    v11 = (struct stat *)&v117;
                    ((void (__fastcall *)(struct stat *, __int64 *, _BYTE *, __int64 *, _QWORD))uu_cat::write_new_line)(
                      &v136,
                      &v117,
                      v134,
                      &v108,
                      BYTE4(v111));
                    st_dev = v136.st_dev;
                    if ( v136.st_dev != 0x8000000000000006LL )
                    {
                      v3 = v136.st_ino;
                      st_nlink = v136.st_nlink;
                      goto LABEL_205;
                    }
                    LOBYTE(v109) = 1;
                    if ( ++v57 >= v55 )
                      goto LABEL_153;
                  }
                  if ( HIBYTE(v109) )
                  {
                    v11 = (struct stat *)asc_19258;
                    v58 = ((__int64 (__fastcall *)(__int64 *, const char *, __int64))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                            &v117,
                            asc_19258,
                            1LL);
                    if ( v58 )
                      goto LABEL_201;
                    v109 = 0;
                    v110 = 0;
                  }
                  else
                  {
                    v110 = 0;
                    if ( (_BYTE)v109 && v107 )
                    {
                      v125 = (__int64)&v108;
                      v126[0] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
                      v136.st_dev = 2LL;
                      v136.st_nlink = 0LL;
                      *(_QWORD *)&v136.st_mode = 6LL;
                      *(_QWORD *)&v136.st_gid = 0LL;
                      v136.st_rdev = 32LL;
                      LOBYTE(v136.st_size) = 3;
                      v119 = (struct stat *)&unk_E4E70;
                      v120 = (__int64 (__fastcall *)())(&dword_0 + 2);
                      v123 = &v136;
                      v124 = 1LL;
                      v121 = &v125;
                      v122 = (__int64 (__fastcall *)())(&dword_0 + 1);
                      v11 = (struct stat *)&v119;
                      v58 = ((__int64 (__fastcall *)(__int64 *, struct stat **))std::io::Write::write_fmt)(&v117, &v119);
                      if ( v58 )
                        goto LABEL_201;
                      ++v108;
                    }
                  }
                  v59 = ((__int64 (__fastcall *)(__int64 *, char *, unsigned __int64, _QWORD, _QWORD))uu_cat::write_end)(
                          &v117,
                          (char *)v151 + v57,
                          v55 - v57,
                          (unsigned int)v127,
                          v128);
                  v60 = v59;
                  v61 = v59 + v57;
                  if ( v59 + v57 == v55 )
                    break;
                  if ( v59 + v57 >= v55 )
                    ((void (__fastcall __noreturn *)(unsigned __int64, unsigned __int64, char **))core::panicking::panic_bounds_check)(
                      v61,
                      v55,
                      &off_E4E90);
                  v62 = *((unsigned __int8 *)v151 + v61);
                  if ( v62 == 10 )
                  {
                    v63 = BYTE4(v111);
                    v11 = v139;
                    v58 = ((__int64 (__fastcall *)(__int64 *, struct stat *, __int64))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                            &v117,
                            v139,
                            v140);
                    if ( v58
                      || v63
                      && (v58 = ((__int64 (__fastcall *)(__int64 *))<std::io::stdio::StdoutLock as std::io::Write>::flush)(&v117)) != 0 )
                    {
LABEL_201:
                      v3 = v58;
                      st_dev = 0x8000000000000000LL;
LABEL_205:
                      v84 = v117;
                      v41 = (*(_DWORD *)(v117 + 12))-- == 1;
                      if ( !v41 )
                        goto LABEL_263;
                      *(_QWORD *)v84 = 0LL;
                      if ( _InterlockedExchange((volatile __int32 *)(v84 + 8), 0) != 2 )
                        goto LABEL_263;
                      goto LABEL_244;
                    }
                    LOBYTE(v109) = 1;
                  }
                  else
                  {
                    if ( v62 != 13 )
                    {
                      v136.st_dev = 0LL;
                      ((void (__fastcall __noreturn *)(_QWORD, char *, const char *, struct stat *, char **))core::panicking::assert_failed)(
                        0LL,
                        (char *)v151 + v61,
                        asc_19259,
                        &v136,
                        &off_E4EA8);
                    }
                    HIBYTE(v109) = 1;
                  }
                  v57 += v60 + 1;
                  if ( v57 >= v55 )
                    goto LABEL_153;
                }
                LOBYTE(v109) = 0;
LABEL_153:
                v3 = v56;
              }
            }
            close(v112);
            st_dev = 0x8000000000000000LL;
            v3 = v42;
          }
        }
        else
        {
          v151[0] = 0x1B600000000LL;
          WORD2(v151[1]) = 0;
          LODWORD(v151[1]) = 1;
          v11 = (struct stat *)v151;
          ((void (__fastcall *)(struct stat *, _QWORD *, struct stat *, __nlink_t))std::fs::OpenOptions::_open)(
            &v136,
            v151,
            v115,
            v135);
          if ( !LODWORD(v136.st_dev) )
          {
            st_dev_high = HIDWORD(v136.st_dev);
            v112 = HIDWORD(v136.st_dev);
            if ( v141 != -1 )
            {
              if ( v144 < 0 )
              {
                v151[0] = &anon_9b9ba72dabd212696498d24b7f543cb0_48_llvm_3928628070634382108;
                v151[1] = 1LL;
                v151[2] = 8LL;
                *(_OWORD *)&v151[3] = 0LL;
                ((void (__fastcall __noreturn *)(_QWORD *, char **))core::panicking::panic_fmt)(
                  v151,
                  &anon_9b9ba72dabd212696498d24b7f543cb0_50_llvm_3928628070634382108);
              }
              if ( v144 )
              {
                v11 = &v136;
                if ( fstat(SHIDWORD(v136.st_dev), &v136) == -1 )
                {
                  v64 = _errno_location();
                  v151[1] = (((__int64 (__fastcall *)(_QWORD))nix::errno::consts::from_i32)((unsigned int)*v64) << 32) | 2;
                  v151[0] = 1LL;
                  ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<std::io::error::Error>)(&v151[1]);
                }
                else
                {
                  v11 = &v136;
                  memcpy(&v151[1], &v136, 0x90uLL);
                  if ( v151[1] == v143 && v151[2] == v142 )
                  {
                    close(st_dev_high);
                    st_dev = 0x8000000000000004LL;
                    goto LABEL_37;
                  }
                }
              }
            }
            LODWORD(v111) = st_dev_high;
            BYTE4(v111) = 0;
            if ( v106 )
            {
              v125 = std::io::stdio::stdout();
              v119 = (struct stat *)((__int64 (__fastcall *)(__int64 *))std::io::stdio::Stdout::lock)(&v125);
              if ( pipe((int *)v151) == -1 )
              {
                v82 = _errno_location();
                LODWORD(v65) = ((__int64 (__fastcall *)(_QWORD))nix::errno::consts::from_i32)((unsigned int)*v82);
              }
              else
              {
                v65 = HIDWORD(v151[0]);
                if ( LODWORD(v151[0]) != -1 )
                {
                  LODWORD(v136.st_dev) = v151[0];
                  LODWORD(v151[0]) = HIDWORD(v151[0]);
                  while ( 1 )
                  {
                    v66 = ((__int64 (__fastcall *)(__int64 *))<std::sys::pal::unix::fd::FileDesc as std::os::fd::owned::AsFd>::as_fd)(&v111);
                    v67 = ((__int64 (__fastcall *)(_QWORD *))<std::sys::pal::unix::fd::FileDesc as std::os::fd::owned::AsFd>::as_fd)(v151);
                    v11 = 0LL;
                    v68 = splice(v66, 0LL, v67, 0LL, (size_t)&unk_20000, 0);
                    if ( v68 == -1 )
                      break;
                    if ( !v68 )
                    {
                      v69 = v3;
                      LOBYTE(v65) = 0;
LABEL_210:
                      st_dev = 0x8000000000000006LL;
                      goto LABEL_211;
                    }
                    if ( (unsigned int)((__int64 (__fastcall *)(struct stat *, struct stat **, ssize_t))uucore::features::pipes::splice_exact)(
                                         &v136,
                                         &v119,
                                         v68) != 134 )
                    {
                      v69 = v3;
                      v11 = (struct stat *)&v119;
                      v70 = uu_cat::splice::copy_exact(v136.st_dev);
                      LOBYTE(v65) = v70;
                      st_dev = 0x8000000000000001LL;
                      if ( v70 == 134 )
                      {
                        LOBYTE(v65) = 1;
                        st_dev = 0x8000000000000006LL;
                      }
LABEL_211:
                      close(v151[0]);
                      close(v136.st_dev);
                      if ( st_dev == 0x8000000000000006LL )
                      {
                        v3 = v69;
                        if ( (_BYTE)v65 )
                        {
                          memset(v151, 0, (size_t)&unk_10000);
                          while ( 1 )
                          {
                            v11 = (struct stat *)v151;
                            v136.st_dev = ((__int64 (__fastcall *)(__int64 *, _QWORD *, void *))<std::fs::File as std::io::Read>::read)(
                                            &v111,
                                            v151,
                                            &unk_10000);
                            v136.st_ino = v87;
                            if ( v136.st_dev )
                              break;
                            if ( !v87 )
                              goto LABEL_246;
                            if ( v87 >= (unsigned __int64)&unk_10001 )
                              ((void (__fastcall __noreturn *)(__ino_t, void *, char **))core::slice::index::slice_end_index_len_fail)(
                                v87,
                                &unk_10000,
                                &off_E4E40);
                            v11 = (struct stat *)v151;
                            v88 = ((__int64 (__fastcall *)(struct stat **, _QWORD *))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                                    &v119,
                                    v151);
                            if ( v88 )
                              goto LABEL_247;
                          }
                          ((void (__fastcall *)(__ino_t *))core::ptr::drop_in_place<std::io::error::Error>)(&v136.st_ino);
LABEL_246:
                          v88 = ((__int64 (__fastcall *)(struct stat **))<std::io::stdio::StdoutLock as std::io::Write>::flush)(&v119);
                          if ( !v88 )
                          {
                            v89 = (__int64)v119;
                            v41 = HIDWORD(v119->st_ino)-- == 1;
                            if ( v41 )
                            {
                              *(_QWORD *)v89 = 0LL;
                              if ( _InterlockedExchange((volatile __int32 *)(v89 + 8), 0) == 2 )
                                goto LABEL_261;
                            }
                            goto LABEL_262;
                          }
LABEL_247:
                          st_dev = 0x8000000000000000LL;
                          v3 = v88;
                        }
                        else
                        {
                          st_dev = 0x8000000000000006LL;
                        }
LABEL_221:
                        v84 = (__int64)v119;
                        v41 = HIDWORD(v119->st_ino)-- == 1;
                        if ( !v41 )
                          goto LABEL_263;
                        *(_QWORD *)v84 = 0LL;
                        if ( _InterlockedExchange((volatile __int32 *)(v84 + 8), 0) != 2 )
                          goto LABEL_263;
                        goto LABEL_244;
                      }
                      v83 = 0;
                      v3 = v69;
LABEL_220:
                      v3 = (v83 << 8) | (unsigned __int8)v65 | v3 & 0xFFFFFFFF00000000LL;
                      goto LABEL_221;
                    }
                  }
                  v69 = v3;
                  _errno_location();
                  LOBYTE(v65) = 1;
                  goto LABEL_210;
                }
              }
              v83 = (unsigned int)v65 >> 8;
              st_dev = 0x8000000000000001LL;
              goto LABEL_220;
            }
            memset(v151, 0, 0x7C00uLL);
            v116 = std::io::stdio::stdout();
            v117 = ((__int64 (__fastcall *)(__int64 *))std::io::stdio::Stdout::lock)(&v116);
            while ( 1 )
            {
              v11 = (struct stat *)v151;
              v71 = ((__int64 (__fastcall *)(__int64 *, _QWORD *, __int64))<std::fs::File as std::io::Read>::read)(
                      &v111,
                      v151,
                      31744LL);
              v73 = v72;
              v137 = v71;
              v138 = v72;
              if ( v71 )
              {
                ((void (__fastcall *)(unsigned __int64 *))core::ptr::drop_in_place<std::io::error::Error>)(&v138);
LABEL_226:
                v89 = v117;
                v41 = (*(_DWORD *)(v117 + 12))-- == 1;
                if ( v41 )
                {
                  *(_QWORD *)v89 = 0LL;
                  if ( _InterlockedExchange((volatile __int32 *)(v89 + 8), 0) == 2 )
                    goto LABEL_261;
                }
                goto LABEL_262;
              }
              if ( !v72 )
                goto LABEL_226;
              if ( v72 > 0x7C00 )
                ((void (__fastcall __noreturn *)(unsigned __int64, __int64, char **))core::slice::index::slice_end_index_len_fail)(
                  v72,
                  31744LL,
                  &off_E4E58);
              v74 = v3;
              v75 = 0LL;
              while ( 1 )
              {
                while ( *((_BYTE *)v151 + v75) == 10 )
                {
                  v11 = (struct stat *)&v117;
                  ((void (__fastcall *)(struct stat *, __int64 *, _BYTE *, __int64 *, _QWORD))uu_cat::write_new_line)(
                    &v136,
                    &v117,
                    v134,
                    &v108,
                    BYTE4(v111));
                  st_dev = v136.st_dev;
                  if ( v136.st_dev != 0x8000000000000006LL )
                  {
                    v3 = v136.st_ino;
                    st_nlink = v136.st_nlink;
                    goto LABEL_198;
                  }
                  LOBYTE(v109) = 1;
                  if ( ++v75 >= v73 )
                    goto LABEL_193;
                }
                if ( HIBYTE(v109) )
                {
                  v11 = (struct stat *)asc_19258;
                  v76 = ((__int64 (__fastcall *)(__int64 *, const char *, __int64))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                          &v117,
                          asc_19258,
                          1LL);
                  if ( v76 )
                    goto LABEL_194;
                  v109 = 0;
                  v110 = 0;
                }
                else
                {
                  v110 = 0;
                  if ( (_BYTE)v109 && v107 )
                  {
                    v125 = (__int64)&v108;
                    v126[0] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
                    v136.st_dev = 2LL;
                    v136.st_nlink = 0LL;
                    *(_QWORD *)&v136.st_mode = 6LL;
                    *(_QWORD *)&v136.st_gid = 0LL;
                    v136.st_rdev = 32LL;
                    LOBYTE(v136.st_size) = 3;
                    v119 = (struct stat *)&unk_E4E70;
                    v120 = (__int64 (__fastcall *)())(&dword_0 + 2);
                    v123 = &v136;
                    v124 = 1LL;
                    v121 = &v125;
                    v122 = (__int64 (__fastcall *)())(&dword_0 + 1);
                    v11 = (struct stat *)&v119;
                    v76 = ((__int64 (__fastcall *)(__int64 *, struct stat **))std::io::Write::write_fmt)(&v117, &v119);
                    if ( v76 )
                      goto LABEL_194;
                    ++v108;
                  }
                }
                v77 = ((__int64 (__fastcall *)(__int64 *, char *, unsigned __int64, _QWORD, _QWORD))uu_cat::write_end)(
                        &v117,
                        (char *)v151 + v75,
                        v73 - v75,
                        (unsigned int)v127,
                        v128);
                v78 = v77;
                v79 = v77 + v75;
                if ( v77 + v75 == v73 )
                  break;
                if ( v77 + v75 >= v73 )
                  ((void (__fastcall __noreturn *)(unsigned __int64, unsigned __int64, char **))core::panicking::panic_bounds_check)(
                    v79,
                    v73,
                    &off_E4E90);
                v80 = *((unsigned __int8 *)v151 + v79);
                if ( v80 == 10 )
                {
                  v81 = BYTE4(v111);
                  v11 = v139;
                  v76 = ((__int64 (__fastcall *)(__int64 *, struct stat *, __int64))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                          &v117,
                          v139,
                          v140);
                  if ( v76
                    || v81
                    && (v76 = ((__int64 (__fastcall *)(__int64 *))<std::io::stdio::StdoutLock as std::io::Write>::flush)(&v117)) != 0 )
                  {
LABEL_194:
                    v3 = v76;
                    st_dev = 0x8000000000000000LL;
LABEL_198:
                    v84 = v117;
                    v41 = (*(_DWORD *)(v117 + 12))-- == 1;
                    if ( !v41 )
                      goto LABEL_263;
                    *(_QWORD *)v84 = 0LL;
                    if ( _InterlockedExchange((volatile __int32 *)(v84 + 8), 0) != 2 )
                      goto LABEL_263;
                    goto LABEL_244;
                  }
                  LOBYTE(v109) = 1;
                }
                else
                {
                  if ( v80 != 13 )
                  {
                    v136.st_dev = 0LL;
                    ((void (__fastcall __noreturn *)(_QWORD, char *, const char *, struct stat *, char **))core::panicking::assert_failed)(
                      0LL,
                      (char *)v151 + v79,
                      asc_19259,
                      &v136,
                      &off_E4EA8);
                  }
                  HIBYTE(v109) = 1;
                }
                v75 += v78 + 1;
                if ( v75 >= v73 )
                  goto LABEL_193;
              }
              LOBYTE(v109) = 0;
LABEL_193:
              v3 = v74;
            }
          }
          st_dev = 0x8000000000000000LL;
          v3 = v136.st_ino;
        }
LABEL_37:
        v26 = (__ino_t)v115;
        goto LABEL_265;
      }
    }
    v13 = std::io::stdio::stdin();
    std::io::stdio::stdin();
    v14 = isatty(0);
    v117 = v13;
    v118 = v14 != 0;
    if ( !v106 )
    {
      memset(v151, 0, 0x7C00uLL);
      v111 = std::io::stdio::stdout();
      v116 = ((__int64 (__fastcall *)(__int64 *))std::io::stdio::Stdout::lock)(&v111);
      while ( 1 )
      {
        v11 = (struct stat *)v151;
        v27 = ((__int64 (__fastcall *)(__int64 *, _QWORD *, __int64))<std::io::stdio::Stdin as std::io::Read>::read)(
                &v117,
                v151,
                31744LL);
        v29 = v28;
        v137 = v27;
        v138 = v28;
        if ( v27 )
        {
          ((void (__fastcall *)(unsigned __int64 *))core::ptr::drop_in_place<std::io::error::Error>)(&v138);
LABEL_105:
          v46 = v116;
          v41 = (*(_DWORD *)(v116 + 12))-- == 1;
          if ( v41 )
          {
            *(_QWORD *)v46 = 0LL;
            if ( _InterlockedExchange((volatile __int32 *)(v46 + 8), 0) == 2 )
              goto LABEL_123;
          }
          goto LABEL_124;
        }
        if ( !v28 )
          goto LABEL_105;
        if ( v28 > 0x7C00 )
          ((void (__fastcall __noreturn *)(unsigned __int64, __int64, char **))core::slice::index::slice_end_index_len_fail)(
            v28,
            31744LL,
            &off_E4E58);
        v30 = v3;
        v31 = 0LL;
        while ( 1 )
        {
          while ( *((_BYTE *)v151 + v31) == 10 )
          {
            v11 = (struct stat *)&v116;
            ((void (__fastcall *)(struct stat *, __int64 *, _BYTE *, __int64 *, bool))uu_cat::write_new_line)(
              &v136,
              &v116,
              v134,
              &v108,
              v118);
            st_dev = v136.st_dev;
            if ( v136.st_dev != 0x8000000000000006LL )
            {
              v3 = v136.st_ino;
              st_nlink = v136.st_nlink;
LABEL_75:
              v40 = v116;
              v41 = (*(_DWORD *)(v116 + 12))-- == 1;
              if ( !v41 )
                goto LABEL_264;
              *(_QWORD *)v40 = 0LL;
              if ( _InterlockedExchange((volatile __int32 *)(v40 + 8), 0) != 2 )
                goto LABEL_264;
LABEL_77:
              ((void (__fastcall *)(__int64))std::sys::sync::mutex::futex::Mutex::wake)(v40 + 8);
              goto LABEL_264;
            }
            LOBYTE(v109) = 1;
            if ( ++v31 >= v29 )
              goto LABEL_66;
          }
          if ( HIBYTE(v109) )
          {
            v11 = (struct stat *)asc_19258;
            v32 = ((__int64 (__fastcall *)(__int64 *, const char *, __int64))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                    &v116,
                    asc_19258,
                    1LL);
            if ( v32 )
              goto LABEL_69;
            v109 = 0;
            v110 = 0;
          }
          else
          {
            v110 = 0;
            if ( (_BYTE)v109 && v107 )
            {
              v125 = (__int64)&v108;
              v126[0] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
              v136.st_dev = 2LL;
              v136.st_nlink = 0LL;
              *(_QWORD *)&v136.st_mode = 6LL;
              *(_QWORD *)&v136.st_gid = 0LL;
              v136.st_rdev = 32LL;
              LOBYTE(v136.st_size) = 3;
              v119 = (struct stat *)&unk_E4E70;
              v120 = (__int64 (__fastcall *)())(&dword_0 + 2);
              v123 = &v136;
              v124 = 1LL;
              v121 = &v125;
              v122 = (__int64 (__fastcall *)())(&dword_0 + 1);
              v11 = (struct stat *)&v119;
              v32 = ((__int64 (__fastcall *)(__int64 *, struct stat **))std::io::Write::write_fmt)(&v116, &v119);
              if ( v32 )
                goto LABEL_69;
              ++v108;
            }
          }
          v33 = ((__int64 (__fastcall *)(__int64 *, char *, unsigned __int64, _QWORD, _QWORD))uu_cat::write_end)(
                  &v116,
                  (char *)v151 + v31,
                  v29 - v31,
                  (unsigned int)v127,
                  v128);
          v34 = v33;
          v35 = v33 + v31;
          if ( v33 + v31 == v29 )
            break;
          if ( v33 + v31 >= v29 )
            ((void (__fastcall __noreturn *)(unsigned __int64, unsigned __int64, char **))core::panicking::panic_bounds_check)(
              v35,
              v29,
              &off_E4E90);
          v36 = *((unsigned __int8 *)v151 + v35);
          if ( v36 == 10 )
          {
            v37 = v118;
            v11 = v139;
            v32 = ((__int64 (__fastcall *)(__int64 *, struct stat *, __int64))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                    &v116,
                    v139,
                    v140);
            if ( v32
              || v37
              && (v32 = ((__int64 (__fastcall *)(__int64 *))<std::io::stdio::StdoutLock as std::io::Write>::flush)(&v116)) != 0 )
            {
LABEL_69:
              v3 = v32;
              st_dev = 0x8000000000000000LL;
              goto LABEL_75;
            }
            LOBYTE(v109) = 1;
          }
          else
          {
            if ( v36 != 13 )
            {
              v136.st_dev = 0LL;
              ((void (__fastcall __noreturn *)(_QWORD, char *, const char *, struct stat *, char **))core::panicking::assert_failed)(
                0LL,
                (char *)v151 + v35,
                asc_19259,
                &v136,
                &off_E4EA8);
            }
            HIBYTE(v109) = 1;
          }
          v31 += v34 + 1;
          if ( v31 >= v29 )
            goto LABEL_66;
        }
        LOBYTE(v109) = 0;
LABEL_66:
        v3 = v30;
      }
    }
    v125 = std::io::stdio::stdout();
    v119 = (struct stat *)((__int64 (__fastcall *)(__int64 *))std::io::stdio::Stdout::lock)(&v125);
    if ( pipe((int *)v151) == -1 )
    {
      v38 = _errno_location();
      LODWORD(v15) = ((__int64 (__fastcall *)(_QWORD))nix::errno::consts::from_i32)((unsigned int)*v38);
LABEL_73:
      v39 = (unsigned int)v15 >> 8;
      st_dev = 0x8000000000000001LL;
      goto LABEL_99;
    }
    v15 = HIDWORD(v151[0]);
    if ( LODWORD(v151[0]) == -1 )
      goto LABEL_73;
    LODWORD(v136.st_dev) = v151[0];
    LODWORD(v151[0]) = HIDWORD(v151[0]);
    do
    {
      v16 = ((__int64 (__fastcall *)(_QWORD *))<std::sys::pal::unix::fd::FileDesc as std::os::fd::owned::AsFd>::as_fd)(v151);
      v11 = 0LL;
      v17 = splice(0, 0LL, v16, 0LL, (size_t)&unk_20000, 0);
      if ( v17 == -1 )
      {
        v18 = v3;
        _errno_location();
        LOBYTE(v15) = 1;
LABEL_89:
        st_dev = 0x8000000000000006LL;
        goto LABEL_90;
      }
      if ( !v17 )
      {
        v18 = v3;
        LOBYTE(v15) = 0;
        goto LABEL_89;
      }
    }
    while ( (unsigned int)((__int64 (__fastcall *)(struct stat *, struct stat **, ssize_t))uucore::features::pipes::splice_exact)(
                            &v136,
                            &v119,
                            v17) == 134 );
    v18 = v3;
    v11 = (struct stat *)&v119;
    v19 = uu_cat::splice::copy_exact(v136.st_dev);
    LOBYTE(v15) = v19;
    st_dev = 0x8000000000000001LL;
    if ( v19 == 134 )
    {
      LOBYTE(v15) = 1;
      st_dev = 0x8000000000000006LL;
    }
LABEL_90:
    close(v151[0]);
    close(v136.st_dev);
    if ( st_dev != 0x8000000000000006LL )
    {
      v39 = 0;
      v3 = v18;
LABEL_99:
      v28 = 0xFFFFFFFF00000000LL;
      v3 = (v39 << 8) | (unsigned __int8)v15 | v3 & 0xFFFFFFFF00000000LL;
LABEL_100:
      v40 = (__int64)v119;
      v41 = HIDWORD(v119->st_ino)-- == 1;
      if ( !v41 )
        goto LABEL_264;
      *(_QWORD *)v40 = 0LL;
      if ( _InterlockedExchange((volatile __int32 *)(v40 + 8), 0) != 2 )
        goto LABEL_264;
      goto LABEL_77;
    }
    v3 = v18;
    if ( !(_BYTE)v15 )
    {
      st_dev = 0x8000000000000006LL;
      goto LABEL_100;
    }
    memset(v151, 0, (size_t)&unk_10000);
    while ( 1 )
    {
      v11 = (struct stat *)v151;
      v136.st_dev = ((__int64 (__fastcall *)(__int64 *, _QWORD *, void *))<std::io::stdio::Stdin as std::io::Read>::read)(
                      &v117,
                      v151,
                      &unk_10000);
      v136.st_ino = v44;
      if ( v136.st_dev )
        break;
      if ( !v44 )
        goto LABEL_119;
      if ( v44 >= (unsigned __int64)&unk_10001 )
        ((void (__fastcall __noreturn *)(__ino_t, void *, char **))core::slice::index::slice_end_index_len_fail)(
          v44,
          &unk_10000,
          &off_E4E40);
      v11 = (struct stat *)v151;
      v45 = ((__int64 (__fastcall *)(struct stat **, _QWORD *))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
              &v119,
              v151);
      if ( v45 )
        goto LABEL_120;
    }
    ((void (__fastcall *)(__ino_t *))core::ptr::drop_in_place<std::io::error::Error>)(&v136.st_ino);
LABEL_119:
    v45 = ((__int64 (__fastcall *)(struct stat **))<std::io::stdio::StdoutLock as std::io::Write>::flush)(&v119);
    if ( v45 )
    {
LABEL_120:
      st_dev = 0x8000000000000000LL;
      v3 = v45;
      goto LABEL_100;
    }
    v46 = (__int64)v119;
    v41 = HIDWORD(v119->st_ino)-- == 1;
    if ( v41 )
    {
      *(_QWORD *)v46 = 0LL;
      if ( _InterlockedExchange((volatile __int32 *)(v46 + 8), 0) == 2 )
LABEL_123:
        ((void (__fastcall *)(__int64))std::sys::sync::mutex::futex::Mutex::wake)(v46 + 8);
    }
LABEL_124:
    st_dev = 0x8000000000000006LL;
LABEL_264:
    v26 = (__ino_t)v115;
    if ( st_dev != 0x8000000000000006LL )
    {
LABEL_265:
      v125 = st_dev;
      v126[0] = v3;
      v126[1] = st_nlink;
      v136.st_dev = 0LL;
      v136.st_ino = v26;
      v136.st_nlink = v135;
      LOBYTE(v136.st_mode) = 0;
      v119 = &v136;
      v120 = <os_display::Quoted as core::fmt::Display>::fmt;
      v121 = &v125;
      v122 = <uu_cat::CatError as core::fmt::Display>::fmt;
      v151[0] = &unk_E4E20;
      v151[1] = 2LL;
      v151[4] = 0LL;
      v151[2] = &v119;
      v151[3] = 2LL;
      ((void (__fastcall *)(__int128 *, _QWORD *))alloc::fmt::format::format_inner)(&v146, v151);
      v92 = v131;
      if ( v131 == v129 )
        ((void (__fastcall *)(__int64 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v129);
      v93 = v130;
      v94 = 3 * v92;
      v28 = v147;
      *(_QWORD *)(v130 + 8 * v94 + 16) = v147;
      *(_OWORD *)(v93 + 8 * v94) = v146;
      v131 = v92 + 1;
      v11 = (struct stat *)v125;
      v95 = v125 ^ 0x8000000000000000LL;
      v26 = 2LL;
      if ( (v125 ^ 0x8000000000000000LL) >= 6 )
        v95 = 2LL;
      if ( v95 == 2 )
      {
        if ( v125 )
          _rust_dealloc(v126[0], v125, 1LL);
      }
      else if ( !v95 )
      {
        ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<std::io::error::Error>)(v126);
      }
    }
    v4 += 24LL;
    if ( v4 != v145 )
      continue;
    break;
  }
  if ( HIBYTE(v109) )
  {
    v151[0] = &off_E4D48;
    v151[1] = 1LL;
    v151[2] = 8LL;
    *(_OWORD *)&v151[3] = 0LL;
    ((void (__fastcall *)(_QWORD *, struct stat *, unsigned __int64, __ino_t))std::io::stdio::_print)(
      v151,
      v11,
      v28,
      v26);
  }
  if ( v131 )
  {
    if ( uucore::UTIL_NAME != 2 )
      once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    *(_OWORD *)&v136.st_dev = xmmword_E9A40;
    v119 = &v136;
    v120 = <&T as core::fmt::Display>::fmt;
    v151[0] = &off_E4D58;
    v151[1] = 2LL;
    v151[4] = 0LL;
    v151[2] = &v119;
    v151[3] = 1LL;
    ((void (__fastcall *)(__int64 *, _QWORD *, unsigned __int64, __ino_t))alloc::fmt::format::format_inner)(
      &v148,
      v151,
      v28,
      v26);
    v127 = v148;
    v96 = v149;
    v97 = v131;
    ((void (__fastcall *)(_QWORD *, __int64, __int64, __int64, __int64))alloc::str::join_generic_copy)(
      v151,
      v130,
      v131,
      v149,
      v150);
    v98 = v151[0];
    v99 = v151[1];
    v100 = v151[2];
    v101 = ((__int64 (__fastcall *)(__int64, __int64))_rust_alloc)(32LL, 8LL);
    if ( !v101 )
      ((void (__fastcall __noreturn *)(__int64, __int64))alloc::alloc::handle_alloc_error)(8LL, 32LL);
    v6 = v101;
    *(_QWORD *)v101 = v98;
    *(_QWORD *)(v101 + 8) = v99;
    *(_QWORD *)(v101 + 16) = v100;
    *(_DWORD *)(v101 + 24) = v97;
    if ( v127 )
      _rust_dealloc(v96, v127, 1LL);
    v102 = v131;
    if ( v131 )
    {
      v103 = (_QWORD *)(v130 + 8);
      do
      {
        v104 = *(v103 - 1);
        if ( v104 )
          _rust_dealloc(*v103, v104, 1LL);
        v103 += 3;
        --v102;
      }
      while ( v102 );
    }
  }
  else
  {
    v6 = 0LL;
  }
LABEL_288:
  if ( v129 )
    _rust_dealloc(v130, 24 * v129, 8LL);
  return v6;
}
