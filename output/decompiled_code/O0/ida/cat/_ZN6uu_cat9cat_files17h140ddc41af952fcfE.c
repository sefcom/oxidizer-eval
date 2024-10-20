_OWORD *__fastcall uu_cat::cat_files(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v4; // r14
  int *v5; // rax
  _OWORD *v6; // r12
  __int64 v7; // r13
  __int64 v8; // r12
  __ino_t v9; // r15
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbp
  __int64 v12; // r15
  int v13; // eax
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r13
  __int64 v18; // r12
  bool v19; // cf
  __int64 v20; // rax
  __int64 v21; // r12
  unsigned __int64 v22; // rdi
  int v23; // eax
  const char *v24; // rsi
  bool v25; // bp
  unsigned int v26; // ebp
  int v27; // edi
  unsigned int v28; // ebp
  __int64 v29; // r15
  bool v30; // zf
  __int64 v31; // rax
  __int64 v32; // rdi
  char *v33; // rdi
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r15
  unsigned __int64 v41; // r13
  __int64 v42; // r12
  __int64 v43; // rax
  __int64 v44; // r12
  unsigned __int64 v45; // rdi
  int v46; // eax
  const char *v47; // rsi
  char v48; // bp
  __int64 v49; // r15
  __int64 v50; // rax
  __int64 v51; // rdi
  char *v52; // rdi
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // r15
  unsigned __int64 v56; // r13
  __int64 v57; // rax
  __int64 v58; // r12
  unsigned __int64 v59; // rdi
  int v60; // eax
  const char *v61; // rsi
  char v62; // bp
  __int64 v63; // r12
  __dev_t st_dev_high; // r12
  int v65; // eax
  ssize_t v66; // rax
  unsigned __int64 v67; // r15
  char v68; // r13
  __int64 v69; // r15
  __int64 v70; // rax
  __int64 v71; // rdi
  __int64 v72; // r15
  __int64 v73; // rax
  __int64 v74; // rdi
  char *v75; // rdi
  __dev_t v76; // r12
  int v77; // ebp
  int v78; // eax
  ssize_t v79; // rax
  unsigned __int64 v80; // r15
  char v81; // r13
  volatile __int32 *v82; // r15
  __int64 v83; // rax
  volatile __int32 *v84; // rdi
  unsigned __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // r15
  __int64 v88; // rax
  __int64 v89; // rdi
  volatile __int32 *v90; // r15
  __int64 v91; // rax
  volatile __int32 *v92; // rdi
  __dev_t v93; // r12
  int v94; // ebp
  int v95; // eax
  ssize_t v96; // rax
  unsigned __int64 v97; // r15
  char v98; // r13
  unsigned __int64 v99; // rdx
  __int64 v100; // rax
  volatile __int32 *v101; // r15
  __int64 v102; // rax
  volatile __int32 *v103; // rdi
  volatile __int32 *v104; // r15
  __int64 v105; // rax
  volatile __int32 *v106; // rdi
  int v107; // edi
  __int64 v108; // rax
  __int64 v109; // rcx
  unsigned __int64 v110; // r12
  __int64 v111; // rax
  __int64 v112; // rcx
  __int128 v113; // xmm0
  volatile __int32 *v114; // r15
  __int64 v115; // rax
  volatile __int32 *v116; // rdi
  unsigned __int64 v117; // rdx
  __int64 v118; // rax
  volatile __int32 *v119; // r15
  __int64 v120; // rax
  volatile __int32 *v121; // rdi
  __int64 v122; // rax
  __int64 v123; // rbx
  __int64 v124; // r14
  __mode_t v125; // ebx
  _OWORD *v126; // rax
  __int128 v127; // xmm0
  char **v129; // rax
  char **v130; // rax
  char **v131; // rax
  __int64 v132; // [rsp-F000h] [rbp-10308h] BYREF
  unsigned __int64 v133; // [rsp-EFF8h] [rbp-10300h]
  __int64 v134; // [rsp-EFF0h] [rbp-102F8h] BYREF
  __int16 v135; // [rsp-EFE8h] [rbp-102F0h]
  char v136; // [rsp-EFE6h] [rbp-102EEh]
  char **v137; // [rsp-EFE0h] [rbp-102E8h]
  unsigned int v138; // [rsp-EFD4h] [rbp-102DCh] BYREF
  unsigned int v139; // [rsp-EFD0h] [rbp-102D8h] BYREF
  char v140; // [rsp-EFCCh] [rbp-102D4h]
  unsigned int v141; // [rsp-EFC8h] [rbp-102D0h] BYREF
  char v142; // [rsp-EFC4h] [rbp-102CCh]
  __int64 *v143; // [rsp-EFC0h] [rbp-102C8h] BYREF
  _QWORD v144[5]; // [rsp-EFB8h] [rbp-102C0h] BYREF
  volatile __int32 *v145; // [rsp-EF90h] [rbp-10298h] BYREF
  __int64 v146; // [rsp-EF88h] [rbp-10290h]
  __int64 **v147; // [rsp-EF80h] [rbp-10288h]
  __int64 v148; // [rsp-EF78h] [rbp-10280h]
  _BYTE *v149; // [rsp-EF70h] [rbp-10278h]
  __int64 v150; // [rsp-EF68h] [rbp-10270h]
  __int64 v151; // [rsp-EF60h] [rbp-10268h] BYREF
  unsigned __int64 v152; // [rsp-EF58h] [rbp-10260h]
  __int64 v153; // [rsp-EF50h] [rbp-10258h]
  __int64 v154; // [rsp-EF48h] [rbp-10250h] BYREF
  __int64 v155; // [rsp-EF40h] [rbp-10248h]
  __int64 v156; // [rsp-EF38h] [rbp-10240h]
  unsigned __int64 v157; // [rsp-EF30h] [rbp-10238h]
  __int64 *v158; // [rsp-EF28h] [rbp-10230h] BYREF
  __int64 (__fastcall *v159)(); // [rsp-EF20h] [rbp-10228h]
  __int64 v160; // [rsp-EF18h] [rbp-10220h] BYREF
  __int64 v161; // [rsp-EF10h] [rbp-10218h]
  unsigned __int64 v162; // [rsp-EF08h] [rbp-10210h]
  _BYTE v163[60]; // [rsp-EF00h] [rbp-10208h] BYREF
  __int128 v164; // [rsp-EEC4h] [rbp-101CCh]
  __int128 v165; // [rsp-EEB4h] [rbp-101BCh]
  __int128 v166; // [rsp-EEA4h] [rbp-101ACh]
  __int16 tv_nsec; // [rsp-EE94h] [rbp-1019Ch]
  int v168; // [rsp-EE8Ch] [rbp-10194h]
  __dev_t st_dev; // [rsp-EE88h] [rbp-10190h]
  __int64 v170; // [rsp-EE80h] [rbp-10188h] BYREF
  bool v171; // [rsp-EE78h] [rbp-10180h]
  __int128 v172; // [rsp-EE70h] [rbp-10178h] BYREF
  __int64 v173; // [rsp-EE60h] [rbp-10168h] BYREF
  __ino_t st_ino; // [rsp-EE58h] [rbp-10160h]
  __off_t st_size; // [rsp-EE50h] [rbp-10158h]
  unsigned __int64 v176; // [rsp-EE48h] [rbp-10150h]
  __int64 v177; // [rsp-EE40h] [rbp-10148h]
  _QWORD v178[3]; // [rsp-EE38h] [rbp-10140h] BYREF
  int v179; // [rsp-EE20h] [rbp-10128h] BYREF
  unsigned int v180; // [rsp-EE1Ch] [rbp-10124h]
  __ino_t v181; // [rsp-EE18h] [rbp-10120h]
  __int128 v182; // [rsp-EE10h] [rbp-10118h]
  __int64 v183; // [rsp-EE00h] [rbp-10108h]
  _QWORD v184[2]; // [rsp-EDF0h] [rbp-100F8h] BYREF
  _QWORD v185[2]; // [rsp-EDE0h] [rbp-100E8h] BYREF
  _QWORD v186[4]; // [rsp-EDD0h] [rbp-100D8h] BYREF
  _QWORD v187[3]; // [rsp-EDB0h] [rbp-100B8h] BYREF
  char v188; // [rsp-ED98h] [rbp-100A0h]
  __int128 v189; // [rsp-ED90h] [rbp-10098h] BYREF
  __int64 v190; // [rsp-ED80h] [rbp-10088h]
  __int128 v191; // [rsp-ED78h] [rbp-10080h] BYREF
  __int64 v192; // [rsp-ED68h] [rbp-10070h]
  _QWORD v193[3]; // [rsp-ED60h] [rbp-10068h] BYREF
  __int128 v194; // [rsp-ED48h] [rbp-10050h]
  struct stat v195[421]; // [rsp-ED30h] [rbp-10038h] BYREF

  do
    v195[0].st_ino = 0LL;
  while ( &v195[0].st_ino != (__ino_t *)((char *)&v195[28].st_atim - (char *)&unk_10000) );
  v4 = a1;
  std::io::stdio::stdout();
  v168 = fstat(1, v195);
  if ( v168 == -1 )
  {
    v5 = _errno_location();
    if ( ((unsigned __int8)v5 & 3) != 0 )
      goto LABEL_365;
    st_dev = (nix::errno::consts::from_i32((unsigned int)*v5) << 32) | 2;
    ((void (__fastcall *)(struct stat *, __dev_t))std::io::error::repr_bitpacked::decode_repr)(v195, st_dev);
    if ( LOBYTE(v195[0].st_dev) >= 3u )
      ((void (__fastcall *)(__ino_t *))core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>)(&v195[0].st_ino);
  }
  else
  {
    st_dev = v195[0].st_dev;
    st_ino = v195[0].st_ino;
    st_size = v195[0].st_size;
  }
  v134 = 1LL;
  v135 = 1;
  v136 = 0;
  v160 = 0LL;
  v161 = 8LL;
  v162 = 0LL;
  v6 = 0LL;
  if ( !a2 )
    goto LABEL_342;
  v177 = a1 + 24 * a2;
  v176 = 0x8000000000000003LL;
  v137 = &off_108A60;
  do
  {
    if ( !v4 )
      break;
    v7 = *(_QWORD *)(v4 + 8);
    if ( !v7 )
      goto LABEL_349;
    v8 = *(_QWORD *)(v4 + 16);
    if ( v8 < 0 )
      goto LABEL_349;
    LOBYTE(v9) = 2;
    if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, const char *, __int64))<[A] as core::slice::cmp::SlicePartialEq<B>>::equal)(
                             *(_QWORD *)(v4 + 8),
                             *(_QWORD *)(v4 + 16),
                             asc_1EDD2,
                             1LL) )
    {
      std::sys::pal::unix::fs::stat(v195);
      if ( v195[0].st_dev == 2 )
      {
        v9 = v195[0].st_ino;
        v145 = (volatile __int32 *)v195[0].st_ino;
        v10 = v195[0].st_ino & 3;
        v11 = 0x8000000000000000LL;
        if ( v10 >= 2 )
        {
          if ( (_DWORD)v10 == 2 )
          {
            if ( (v195[0].st_ino & 0xFFFFFFFF00000000LL) == 0x2800000000LL )
            {
              ((void (__fastcall *)(struct stat *, __ino_t))std::io::error::repr_bitpacked::decode_repr)(
                v195,
                v195[0].st_ino);
              if ( LOBYTE(v195[0].st_dev) >= 3u )
                ((void (__fastcall *)(__ino_t *))core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>)(&v195[0].st_ino);
              v11 = 0x8000000000000005LL;
            }
          }
          else if ( (unsigned __int8)((__int64 (__fastcall *)(__ino_t, __int64))std::io::error::repr_bitpacked::kind_from_prim)(
                                       HIDWORD(v195[0].st_ino),
                                       v7) == 41 )
          {
            core::hint::unreachable_unchecked::precondition_check();
          }
        }
      }
      else
      {
        LODWORD(v151) = v195[0].st_blksize;
        switch ( (unsigned __int64)((v195[0].st_blksize & 0xF000) - 4096) >> 12 )
        {
          case 0uLL:
            LOBYTE(v9) = 6;
            goto LABEL_13;
          case 1uLL:
            LOBYTE(v9) = 5;
            goto LABEL_13;
          case 3uLL:
            LOBYTE(v9) = 0;
            goto LABEL_13;
          case 5uLL:
            LOBYTE(v9) = 4;
            goto LABEL_13;
          case 7uLL:
            LOBYTE(v9) = 1;
            goto LABEL_13;
          case 9uLL:
            LOBYTE(v9) = 3;
            goto LABEL_13;
          case 0xBuLL:
            LOBYTE(v9) = 7;
            goto LABEL_13;
          default:
            v143 = &v151;
            v144[0] = <std::fs::FileType as core::fmt::Debug>::fmt;
            v195[0].st_dev = (__dev_t)&anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
            v195[0].st_ino = 1LL;
            v195[0].st_nlink = (__nlink_t)&v143;
            *(_QWORD *)&v195[0].st_mode = 1LL;
            *(_QWORD *)&v195[0].st_gid = 0LL;
            ((void (__fastcall *)(_BYTE *, struct stat *))alloc::fmt::format::format_inner)(v163, v195);
            v11 = *(_QWORD *)v163;
            v9 = *(_QWORD *)&v163[8];
            if ( *(_QWORD *)v163 == 0x8000000000000006LL )
              goto LABEL_13;
            v155 = *(_QWORD *)&v163[16];
            break;
        }
      }
      goto LABEL_296;
    }
LABEL_13:
    if ( !(_BYTE)v9 )
    {
      v9 = v133;
      v11 = v176;
      goto LABEL_296;
    }
    if ( (unsigned __int8)v9 == 2 )
    {
      v12 = std::io::stdio::stdin();
      std::io::stdio::stdin();
      v13 = isatty(0);
      v170 = v12;
      v171 = v13 != 0;
      if ( (a3[1] & 1) != 0 || (a3[3] & 1) != 0 || (a3[2] & 1) != 0 || (*a3 & 1) != 0 || a3[4] )
      {
        memset(v195, 0, 0x7C00uLL);
        v154 = std::io::stdio::stdout();
        v132 = ((__int64 (__fastcall *)(__int64 *))std::io::stdio::Stdout::lock)(&v154);
LABEL_33:
        while ( 1 )
        {
          v14 = ((__int64 (__fastcall *)(__int64 *, struct stat *, __int64))<std::io::stdio::Stdin as std::io::Read>::read)(
                  &v170,
                  v195,
                  31744LL);
          v16 = v15;
          v156 = v14;
          v157 = v15;
          if ( v14 )
            break;
          if ( !v15 )
            goto LABEL_102;
          if ( v15 > 0x7C00 )
            core::slice::index::slice_end_index_len_fail(v15, 31744LL, &off_108A28);
          v17 = 0LL;
          while ( 1 )
          {
            while ( *((_BYTE *)&v195[0].st_dev + v17) == 10 )
            {
              ((void (__fastcall *)(__int64 *, __int64 *, _BYTE *, __int64 *, bool))uu_cat::write_new_line)(
                &v151,
                &v132,
                a3,
                &v134,
                v171);
              v11 = v151;
              if ( v151 != 0x8000000000000006LL )
              {
                v133 = v152;
                v155 = v153;
                goto LABEL_83;
              }
              LOBYTE(v135) = 1;
              if ( ++v17 >= v16 )
                goto LABEL_33;
            }
            if ( (v135 & 0x100) != 0 )
            {
              v20 = ((__int64 (__fastcall *)(__int64 *, const char *, __int64))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                      &v132,
                      asc_1EDCF,
                      1LL);
              if ( v20 )
                goto LABEL_69;
              v135 = 0;
              v136 = 0;
            }
            else
            {
              v136 = 0;
              if ( (v135 & 1) != 0 && a3[4] )
              {
                v158 = &v134;
                v159 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
                *(_QWORD *)v163 = 2LL;
                *(_QWORD *)&v163[16] = 0LL;
                *(_QWORD *)&v163[24] = 6LL;
                *(_QWORD *)&v163[32] = 0LL;
                *(_QWORD *)&v163[40] = 32LL;
                v163[48] = 3;
                v145 = (volatile __int32 *)&unk_108A40;
                v146 = 2LL;
                v149 = v163;
                v150 = 1LL;
                v147 = &v158;
                v148 = 1LL;
                v20 = ((__int64 (__fastcall *)(__int64 *, volatile __int32 **))std::io::Write::write_fmt)(&v132, &v145);
                if ( v20 )
                  goto LABEL_69;
                if ( v134 == -1 )
                  goto LABEL_348;
                ++v134;
              }
            }
            v21 = ((__int64 (__fastcall *)(__int64 *, char *, unsigned __int64, _BYTE *))uu_cat::write_end)(
                    &v132,
                    (char *)v195 + v17,
                    v16 - v17,
                    a3);
            v22 = v17 + v21;
            if ( __CFADD__(v17, v21) )
            {
              v129 = &off_108A78;
LABEL_347:
              v137 = v129;
LABEL_348:
              core::panicking::panic_const::panic_const_add_overflow(v137);
            }
            if ( v22 == v16 )
              break;
            if ( v22 >= v16 )
              ((void (__fastcall __noreturn *)(unsigned __int64, unsigned __int64, char **))core::panicking::panic_bounds_check)(
                v22,
                v16,
                &off_108A90);
            v23 = *((unsigned __int8 *)&v195[0].st_dev + v22);
            if ( v23 == 10 )
            {
              v24 = asc_1EBDA;
              if ( (a3[2] & 1) == 0 )
                v24 = asc_1EBD9;
              v25 = v171;
              v20 = ((__int64 (__fastcall *)(__int64 *, const char *, __int64))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                      &v132,
                      v24,
                      (a3[2] & 1) + 1LL);
              if ( v20
                || v25
                && (v20 = ((__int64 (__fastcall *)(__int64 *))<std::io::stdio::StdoutLock as std::io::Write>::flush)(&v132)) != 0 )
              {
LABEL_69:
                v133 = v20;
                v11 = 0x8000000000000000LL;
LABEL_83:
                v29 = v132;
                v30 = (*(_DWORD *)(v132 + 12))-- == 1;
                if ( !v30 )
                  goto LABEL_295;
                v31 = ((__int64 (__fastcall *)(_QWORD, _QWORD))core::option::Option<T>::map_or)(0LL, 0LL);
                ((void (__fastcall *)(__int64, __int64, _QWORD))core::sync::atomic::atomic_store)(v29, v31, 0LL);
                v32 = v132;
                if ( _InterlockedExchange((volatile __int32 *)(v132 + 8), 0) != 2 )
                  goto LABEL_295;
                v33 = (char *)(v32 + 8);
LABEL_86:
                ((void (__fastcall *)(char *))std::sys::sync::mutex::futex::Mutex::wake)(v33);
                goto LABEL_295;
              }
              LOBYTE(v135) = 1;
              v18 = v21 + 1;
              if ( !v18 )
                goto LABEL_346;
            }
            else
            {
              if ( v23 != 13 )
              {
                v143 = 0LL;
                ((void (__fastcall __noreturn *)(_QWORD, char *, const char *, __int64 **, char **))core::panicking::assert_failed)(
                  0LL,
                  (char *)v195 + v22,
                  asc_1EBD9,
                  &v143,
                  &off_108AA8);
              }
              HIBYTE(v135) = 1;
              v18 = v21 + 1;
              if ( !v18 )
              {
LABEL_346:
                v129 = &off_108AC0;
                goto LABEL_347;
              }
            }
            v19 = __CFADD__(v18, v17);
            v17 += v18;
            if ( v19 )
            {
              v129 = &off_108AD8;
              goto LABEL_347;
            }
            if ( v17 >= v16 )
              goto LABEL_33;
          }
          LOBYTE(v135) = 0;
        }
        ((void (__fastcall *)(__int64 **, unsigned __int64))std::io::error::repr_bitpacked::decode_repr)(&v143, v15);
        if ( (unsigned __int8)v143 >= 3u )
          ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>)(v144);
LABEL_102:
        v34 = v132;
        v30 = (*(_DWORD *)(v132 + 12))-- == 1;
        if ( v30 )
        {
          v35 = ((__int64 (__fastcall *)(_QWORD, _QWORD))core::option::Option<T>::map_or)(0LL, 0LL);
          ((void (__fastcall *)(__int64, __int64, _QWORD))core::sync::atomic::atomic_store)(v34, v35, 0LL);
          v36 = v132;
          if ( _InterlockedExchange((volatile __int32 *)(v132 + 8), 0) == 2 )
          {
            v33 = (char *)(v36 + 8);
            v11 = 0x8000000000000006LL;
            goto LABEL_86;
          }
        }
        goto LABEL_281;
      }
      v151 = std::io::stdio::stdout();
      v145 = (volatile __int32 *)((__int64 (__fastcall *)(__int64 *))std::io::stdio::Stdout::lock)(&v151);
      if ( pipe((int *)v195) == -1 )
      {
        v5 = _errno_location();
        if ( ((unsigned __int8)v5 & 3) != 0 )
          goto LABEL_365;
        LODWORD(st_dev_high) = nix::errno::consts::from_i32((unsigned int)*v5);
      }
      else
      {
        st_dev_high = HIDWORD(v195[0].st_dev);
        if ( LODWORD(v195[0].st_dev) != -1 )
        {
          *(_DWORD *)v163 = HIDWORD(v195[0].st_dev);
          LODWORD(v143) = v195[0].st_dev;
          while ( 1 )
          {
            v65 = ((__int64 (__fastcall *)(_BYTE *))<std::sys::pal::unix::fd::FileDesc as std::os::fd::owned::AsFd>::as_fd)(v163);
            v66 = splice(
                    0,
                    0LL,
                    v65,
                    0LL,
                    (size_t)"ired typeIdentifier removedChannel number out of rangeLevel 2 not synchronizedLevel 3 haltedLevel 3 resetLink number out of rangeProtocol driver not attachedNo CSI structure availableLevel 2 haltedInvalid request descriptorExchange fullInvalid request codeInvalid slotBad font file formatDevice not a streamNo data availableTimer expiredOut of streams resourcesMachine is not on the networkPackage not installedLink has been severedAdvertise errorSrmount errorCommunication error on sendProtocol errorMultihop attemptedRFS specific errorNot a data messageValue too large for defined data typeName not unique on networkFile descriptor in bad stateRemote address changedCan not access a needed shared libraryAccessing a corrupted shared library.lib section in a.out corruptedAttempting to link in too many shared librariesCannot exec a shared library directlyIllegal byte sequenceInterrupted system call should be restartedStreams pipe errorToo many usersSocket operation on non-socketDestination address requiredProtocol wrong type for socketProtocol not availableProtocol not supportedSocket type not supportedOperation not supported on transport endpointProtocol family not supportedAddress family not supported by protocolAddress already in useCannot assign requested addressNetwork is downNetwork is unreachableNetwork dropped connection because of resetConnection reset by peerNo buffer space availableTransport endpoint is already connectedTransport endpoint is not connectedCannot send after transport endpoint shutdownToo many references: cannot spliceConnection timed outConnection refusedHost is downOperation already in progressOperation now in progressStale file handleStructure needs cleaningNot a XENIX named type fileNo XENIX semaphores availableIs a named type fileQuota exceededNo medium foundWrong medium typeOperation canceledRequired key not availableKey has expiredKey has been revokedKey was rejected by serviceOwner diedState not recoverableOperation not possible due to RF-killMemory page has hardware error",
                    0);
            v67 = v66;
            if ( !v66 )
            {
              v68 = 1;
              LOBYTE(st_dev_high) = 0;
              goto LABEL_226;
            }
            if ( v66 == -1 )
              break;
            if ( (unsigned int)((__int64 (__fastcall *)(__int64 **, ssize_t))uucore::features::pipes::splice_exact)(
                                 &v143,
                                 v66) != 134 )
            {
              LODWORD(st_dev_high) = uu_cat::splice::copy_exact((int)v143, v67);
              if ( (_DWORD)st_dev_high != 134 )
              {
                LODWORD(v67) = (unsigned int)st_dev_high >> 8;
                v11 = 0x8000000000000001LL;
                v68 = 0;
                goto LABEL_227;
              }
LABEL_225:
              LOBYTE(st_dev_high) = 1;
              LODWORD(v67) = 0;
              v68 = 1;
LABEL_226:
              v11 = 0x8000000000000006LL;
LABEL_227:
              ((void (__fastcall *)(_QWORD))std::sys::pal::unix::fs::debug_assert_fd_is_open)(*(unsigned int *)v163);
              close(*(int *)v163);
              ((void (__fastcall *)(_QWORD))std::sys::pal::unix::fs::debug_assert_fd_is_open)((unsigned int)v143);
              close((int)v143);
              if ( v68 )
              {
                if ( (st_dev_high & 1) == 0 )
                {
                  v11 = 0x8000000000000006LL;
                  goto LABEL_231;
                }
                memset(v195, 0, (size_t)&unk_10000);
                while ( 1 )
                {
                  v143 = (__int64 *)((__int64 (__fastcall *)(__int64 *, struct stat *, void *))<std::io::stdio::Stdin as std::io::Read>::read)(
                                      &v170,
                                      v195,
                                      &unk_10000);
                  v144[0] = v85;
                  if ( v143 )
                    break;
                  if ( !v85 )
                    goto LABEL_262;
                  if ( v85 >= (unsigned __int64)&unk_10001 )
                    core::slice::index::slice_end_index_len_fail(v85, &unk_10000, &off_108A10);
                  v86 = ((__int64 (__fastcall *)(volatile __int32 **, struct stat *))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                          &v145,
                          v195);
                  if ( v86 )
                    goto LABEL_263;
                }
                ((void (__fastcall *)(_BYTE *, unsigned __int64))std::io::error::repr_bitpacked::decode_repr)(v163, v85);
                if ( v163[0] >= 3u )
                  ((void (__fastcall *)(_BYTE *))core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>)(&v163[8]);
LABEL_262:
                v86 = ((__int64 (__fastcall *)(volatile __int32 **))<std::io::stdio::StdoutLock as std::io::Write>::flush)(&v145);
                if ( v86 )
                {
LABEL_263:
                  v11 = 0x8000000000000000LL;
                  v133 = v86;
LABEL_231:
                  v82 = v145;
                  v30 = (*((_DWORD *)v145 + 3))-- == 1;
                  if ( !v30 )
                    goto LABEL_295;
                  v83 = ((__int64 (__fastcall *)(_QWORD, _QWORD))core::option::Option<T>::map_or)(0LL, 0LL);
                  ((void (__fastcall *)(volatile __int32 *, __int64, _QWORD))core::sync::atomic::atomic_store)(
                    v82,
                    v83,
                    0LL);
                  v84 = v145;
                  if ( _InterlockedExchange(v145 + 2, 0) != 2 )
                    goto LABEL_295;
                  v33 = (char *)(v84 + 2);
                  goto LABEL_86;
                }
                v101 = v145;
                v30 = (*((_DWORD *)v145 + 3))-- == 1;
                if ( v30 )
                {
                  v102 = ((__int64 (__fastcall *)(_QWORD, _QWORD))core::option::Option<T>::map_or)(0LL, 0LL);
                  ((void (__fastcall *)(volatile __int32 *, __int64, _QWORD))core::sync::atomic::atomic_store)(
                    v101,
                    v102,
                    0LL);
                  v103 = v145;
                  if ( _InterlockedExchange(v145 + 2, 0) == 2 )
                  {
                    v33 = (char *)(v103 + 2);
                    v11 = 0x8000000000000006LL;
                    goto LABEL_86;
                  }
                }
LABEL_281:
                v11 = 0x8000000000000006LL;
                goto LABEL_295;
              }
LABEL_230:
              v133 = (unsigned int)((_DWORD)v67 << 8) | (unsigned __int8)st_dev_high | v133 & 0xFFFFFFFF00000000LL;
              goto LABEL_231;
            }
          }
          v5 = _errno_location();
          if ( ((unsigned __int8)v5 & 3) == 0 )
          {
            nix::errno::consts::from_i32((unsigned int)*v5);
            goto LABEL_225;
          }
LABEL_365:
          core::panicking::panic_misaligned_pointer_dereference(
            4LL,
            v5,
            &anon_77e16c7defca1adeda749c3345405d55_238_llvm_10211869485132708612);
        }
      }
      LODWORD(v67) = (unsigned int)st_dev_high >> 8;
      v11 = 0x8000000000000001LL;
      goto LABEL_230;
    }
    if ( (unsigned __int8)v9 != 7 )
    {
      v195[0].st_dev = 0x1B600000000LL;
      WORD2(v195[0].st_ino) = 0;
      LODWORD(v195[0].st_ino) = 1;
      ((void (__fastcall *)(int *, struct stat *, __int64, __int64))std::fs::OpenOptions::_open)(&v179, v195, v7, v8);
      if ( v179 )
      {
        v9 = v181;
        goto LABEL_74;
      }
      v28 = v180;
      if ( v168 != -1 )
      {
        if ( st_size < 0 )
        {
          v195[0].st_dev = (__dev_t)&anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_128_llvm_17209501424320820274;
          v195[0].st_ino = 1LL;
          v195[0].st_nlink = 8LL;
          *(_OWORD *)&v195[0].st_mode = 0LL;
          ((void (__fastcall __noreturn *)(struct stat *, char **))core::panicking::panic_fmt)(
            v195,
            &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_130_llvm_17209501424320820274);
        }
        if ( st_size )
        {
          if ( fstat(v180, v195) == -1 )
          {
            v5 = _errno_location();
            if ( ((unsigned __int8)v5 & 3) != 0 )
              goto LABEL_365;
            v37 = nix::errno::consts::from_i32((unsigned int)*v5);
            ((void (__fastcall *)(struct stat *, __int64))std::io::error::repr_bitpacked::decode_repr)(
              v195,
              (v37 << 32) | 2);
            if ( LOBYTE(v195[0].st_dev) >= 3u )
              ((void (__fastcall *)(__ino_t *))core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>)(&v195[0].st_ino);
          }
          else if ( v195[0].st_dev == st_dev && v195[0].st_ino == st_ino )
          {
            ((void (__fastcall *)(_QWORD))std::sys::pal::unix::fs::debug_assert_fd_is_open)(v28);
            close(v28);
            v11 = 0x8000000000000004LL;
            v9 = v133;
            goto LABEL_296;
          }
        }
      }
      v141 = v28;
      v142 = 0;
      if ( (a3[1] & 1) != 0 || (a3[3] & 1) != 0 || (a3[2] & 1) != 0 || (*a3 & 1) != 0 || a3[4] )
      {
        memset(v195, 0, 0x7C00uLL);
        v154 = std::io::stdio::stdout();
        v132 = ((__int64 (__fastcall *)(__int64 *))std::io::stdio::Stdout::lock)(&v154);
LABEL_114:
        while ( 1 )
        {
          v38 = ((__int64 (__fastcall *)(unsigned int *, struct stat *, __int64))<std::fs::File as std::io::Read>::read)(
                  &v141,
                  v195,
                  31744LL);
          v40 = v39;
          v156 = v38;
          v157 = v39;
          if ( v38 )
            break;
          if ( !v39 )
            goto LABEL_202;
          if ( v39 > 0x7C00 )
            core::slice::index::slice_end_index_len_fail(v39, 31744LL, &off_108A28);
          v41 = 0LL;
          while ( 1 )
          {
            while ( *((_BYTE *)&v195[0].st_dev + v41) == 10 )
            {
              ((void (__fastcall *)(__int64 *, __int64 *, _BYTE *, __int64 *, _QWORD))uu_cat::write_new_line)(
                &v151,
                &v132,
                a3,
                &v134,
                v142 & 1);
              v11 = v151;
              if ( v151 != 0x8000000000000006LL )
              {
                v133 = v152;
                v155 = v153;
                goto LABEL_149;
              }
              LOBYTE(v135) = 1;
              if ( ++v41 >= v40 )
                goto LABEL_114;
            }
            if ( (v135 & 0x100) != 0 )
            {
              v43 = ((__int64 (__fastcall *)(__int64 *, const char *, __int64))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                      &v132,
                      asc_1EDCF,
                      1LL);
              if ( v43 )
                goto LABEL_147;
              v135 = 0;
              v136 = 0;
            }
            else
            {
              v136 = 0;
              if ( (v135 & 1) != 0 && a3[4] )
              {
                v158 = &v134;
                v159 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
                *(_QWORD *)v163 = 2LL;
                *(_QWORD *)&v163[16] = 0LL;
                *(_QWORD *)&v163[24] = 6LL;
                *(_QWORD *)&v163[32] = 0LL;
                *(_QWORD *)&v163[40] = 32LL;
                v163[48] = 3;
                v145 = (volatile __int32 *)&unk_108A40;
                v146 = 2LL;
                v149 = v163;
                v150 = 1LL;
                v147 = &v158;
                v148 = 1LL;
                v43 = ((__int64 (__fastcall *)(__int64 *, volatile __int32 **))std::io::Write::write_fmt)(&v132, &v145);
                if ( v43 )
                  goto LABEL_147;
                if ( v134 == -1 )
                  goto LABEL_356;
                ++v134;
              }
            }
            v44 = ((__int64 (__fastcall *)(__int64 *, char *, unsigned __int64, _BYTE *))uu_cat::write_end)(
                    &v132,
                    (char *)v195 + v41,
                    v40 - v41,
                    a3);
            v45 = v41 + v44;
            if ( __CFADD__(v41, v44) )
            {
              v130 = &off_108A78;
LABEL_355:
              v137 = v130;
LABEL_356:
              core::panicking::panic_const::panic_const_add_overflow(v137);
            }
            if ( v45 == v40 )
              break;
            if ( v45 >= v40 )
              ((void (__fastcall __noreturn *)(unsigned __int64, unsigned __int64, char **))core::panicking::panic_bounds_check)(
                v45,
                v40,
                &off_108A90);
            v46 = *((unsigned __int8 *)&v195[0].st_dev + v45);
            if ( v46 == 10 )
            {
              v47 = asc_1EBDA;
              if ( (a3[2] & 1) == 0 )
                v47 = asc_1EBD9;
              v48 = v142;
              v43 = ((__int64 (__fastcall *)(__int64 *, const char *, __int64))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                      &v132,
                      v47,
                      (a3[2] & 1) + 1LL);
              if ( v43
                || (v48 & 1) != 0
                && (v43 = ((__int64 (__fastcall *)(__int64 *))<std::io::stdio::StdoutLock as std::io::Write>::flush)(&v132)) != 0 )
              {
LABEL_147:
                v133 = v43;
                v11 = 0x8000000000000000LL;
LABEL_149:
                v49 = v132;
                v30 = (*(_DWORD *)(v132 + 12))-- == 1;
                if ( v30 )
                {
                  v50 = ((__int64 (__fastcall *)(_QWORD, _QWORD))core::option::Option<T>::map_or)(0LL, 0LL);
                  ((void (__fastcall *)(__int64, __int64, _QWORD))core::sync::atomic::atomic_store)(v49, v50, 0LL);
                  v51 = v132;
                  if ( _InterlockedExchange((volatile __int32 *)(v132 + 8), 0) == 2 )
                  {
                    v52 = (char *)(v51 + 8);
                    goto LABEL_152;
                  }
                }
LABEL_293:
                ((void (__fastcall *)(_QWORD))std::sys::pal::unix::fs::debug_assert_fd_is_open)(v141);
                v107 = v141;
                goto LABEL_294;
              }
              LOBYTE(v135) = 1;
              v42 = v44 + 1;
              if ( !v42 )
                goto LABEL_353;
            }
            else
            {
              if ( v46 != 13 )
              {
                v143 = 0LL;
                ((void (__fastcall __noreturn *)(_QWORD, char *, const char *, __int64 **, char **))core::panicking::assert_failed)(
                  0LL,
                  (char *)v195 + v45,
                  asc_1EBD9,
                  &v143,
                  &off_108AA8);
              }
              HIBYTE(v135) = 1;
              v42 = v44 + 1;
              if ( !v42 )
              {
LABEL_353:
                v130 = &off_108AC0;
                goto LABEL_355;
              }
            }
            v19 = __CFADD__(v42, v41);
            v41 += v42;
            if ( v19 )
            {
              v130 = &off_108AD8;
              goto LABEL_355;
            }
            if ( v41 >= v40 )
              goto LABEL_114;
          }
          LOBYTE(v135) = 0;
        }
        ((void (__fastcall *)(__int64 **, unsigned __int64))std::io::error::repr_bitpacked::decode_repr)(&v143, v39);
        if ( (unsigned __int8)v143 >= 3u )
          ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>)(v144);
LABEL_202:
        v69 = v132;
        v30 = (*(_DWORD *)(v132 + 12))-- == 1;
        if ( v30 )
        {
          v70 = ((__int64 (__fastcall *)(_QWORD, _QWORD))core::option::Option<T>::map_or)(0LL, 0LL);
          ((void (__fastcall *)(__int64, __int64, _QWORD))core::sync::atomic::atomic_store)(v69, v70, 0LL);
          v71 = v132;
          if ( _InterlockedExchange((volatile __int32 *)(v132 + 8), 0) == 2 )
          {
            v52 = (char *)(v71 + 8);
            v11 = 0x8000000000000006LL;
            goto LABEL_152;
          }
        }
        goto LABEL_292;
      }
      v151 = std::io::stdio::stdout();
      v145 = (volatile __int32 *)((__int64 (__fastcall *)(__int64 *))std::io::stdio::Stdout::lock)(&v151);
      if ( pipe((int *)v195) == -1 )
      {
        v5 = _errno_location();
        if ( ((unsigned __int8)v5 & 3) != 0 )
          goto LABEL_365;
        LODWORD(v76) = nix::errno::consts::from_i32((unsigned int)*v5);
      }
      else
      {
        v76 = HIDWORD(v195[0].st_dev);
        if ( LODWORD(v195[0].st_dev) != -1 )
        {
          *(_DWORD *)v163 = HIDWORD(v195[0].st_dev);
          LODWORD(v143) = v195[0].st_dev;
          while ( 1 )
          {
            v77 = ((__int64 (__fastcall *)(unsigned int *))<std::sys::pal::unix::fd::FileDesc as std::os::fd::owned::AsFd>::as_fd)(&v141);
            v78 = ((__int64 (__fastcall *)(_BYTE *))<std::sys::pal::unix::fd::FileDesc as std::os::fd::owned::AsFd>::as_fd)(v163);
            v79 = splice(
                    v77,
                    0LL,
                    v78,
                    0LL,
                    (size_t)"ired typeIdentifier removedChannel number out of rangeLevel 2 not synchronizedLevel 3 haltedLevel 3 resetLink number out of rangeProtocol driver not attachedNo CSI structure availableLevel 2 haltedInvalid request descriptorExchange fullInvalid request codeInvalid slotBad font file formatDevice not a streamNo data availableTimer expiredOut of streams resourcesMachine is not on the networkPackage not installedLink has been severedAdvertise errorSrmount errorCommunication error on sendProtocol errorMultihop attemptedRFS specific errorNot a data messageValue too large for defined data typeName not unique on networkFile descriptor in bad stateRemote address changedCan not access a needed shared libraryAccessing a corrupted shared library.lib section in a.out corruptedAttempting to link in too many shared librariesCannot exec a shared library directlyIllegal byte sequenceInterrupted system call should be restartedStreams pipe errorToo many usersSocket operation on non-socketDestination address requiredProtocol wrong type for socketProtocol not availableProtocol not supportedSocket type not supportedOperation not supported on transport endpointProtocol family not supportedAddress family not supported by protocolAddress already in useCannot assign requested addressNetwork is downNetwork is unreachableNetwork dropped connection because of resetConnection reset by peerNo buffer space availableTransport endpoint is already connectedTransport endpoint is not connectedCannot send after transport endpoint shutdownToo many references: cannot spliceConnection timed outConnection refusedHost is downOperation already in progressOperation now in progressStale file handleStructure needs cleaningNot a XENIX named type fileNo XENIX semaphores availableIs a named type fileQuota exceededNo medium foundWrong medium typeOperation canceledRequired key not availableKey has expiredKey has been revokedKey was rejected by serviceOwner diedState not recoverableOperation not possible due to RF-killMemory page has hardware error",
                    0);
            v80 = v79;
            if ( !v79 )
            {
              v81 = 1;
              LOBYTE(v76) = 0;
              goto LABEL_252;
            }
            if ( v79 == -1 )
              break;
            if ( (unsigned int)((__int64 (__fastcall *)(__int64 **, ssize_t))uucore::features::pipes::splice_exact)(
                                 &v143,
                                 v79) != 134 )
            {
              LODWORD(v76) = uu_cat::splice::copy_exact((int)v143, v80);
              if ( (_DWORD)v76 != 134 )
              {
                LODWORD(v80) = (unsigned int)v76 >> 8;
                v11 = 0x8000000000000001LL;
                v81 = 0;
                goto LABEL_253;
              }
LABEL_250:
              LOBYTE(v76) = 1;
              LODWORD(v80) = 0;
              v81 = 1;
LABEL_252:
              v11 = 0x8000000000000006LL;
LABEL_253:
              ((void (__fastcall *)(_QWORD))std::sys::pal::unix::fs::debug_assert_fd_is_open)(*(unsigned int *)v163);
              close(*(int *)v163);
              ((void (__fastcall *)(_QWORD))std::sys::pal::unix::fs::debug_assert_fd_is_open)((unsigned int)v143);
              close((int)v143);
              if ( v81 )
              {
                if ( (v76 & 1) == 0 )
                {
                  v11 = 0x8000000000000006LL;
LABEL_257:
                  v90 = v145;
                  v30 = (*((_DWORD *)v145 + 3))-- == 1;
                  if ( !v30 )
                    goto LABEL_293;
                  v91 = ((__int64 (__fastcall *)(_QWORD, _QWORD))core::option::Option<T>::map_or)(0LL, 0LL);
                  ((void (__fastcall *)(volatile __int32 *, __int64, _QWORD))core::sync::atomic::atomic_store)(
                    v90,
                    v91,
                    0LL);
                  v92 = v145;
                  if ( _InterlockedExchange(v145 + 2, 0) != 2 )
                    goto LABEL_293;
                  v52 = (char *)(v92 + 2);
LABEL_152:
                  ((void (__fastcall *)(char *))std::sys::sync::mutex::futex::Mutex::wake)(v52);
                  goto LABEL_293;
                }
                memset(v195, 0, (size_t)&unk_10000);
                while ( 1 )
                {
                  v143 = (__int64 *)((__int64 (__fastcall *)(unsigned int *, struct stat *, void *))<std::fs::File as std::io::Read>::read)(
                                      &v141,
                                      v195,
                                      &unk_10000);
                  v144[0] = v99;
                  if ( v143 )
                    break;
                  if ( !v99 )
                    goto LABEL_287;
                  if ( v99 >= (unsigned __int64)&unk_10001 )
                    core::slice::index::slice_end_index_len_fail(v99, &unk_10000, &off_108A10);
                  v100 = ((__int64 (__fastcall *)(volatile __int32 **, struct stat *))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                           &v145,
                           v195);
                  if ( v100 )
                    goto LABEL_288;
                }
                ((void (__fastcall *)(_BYTE *, unsigned __int64))std::io::error::repr_bitpacked::decode_repr)(v163, v99);
                if ( v163[0] >= 3u )
                  ((void (__fastcall *)(_BYTE *))core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>)(&v163[8]);
LABEL_287:
                v100 = ((__int64 (__fastcall *)(volatile __int32 **))<std::io::stdio::StdoutLock as std::io::Write>::flush)(&v145);
                if ( v100 )
                {
LABEL_288:
                  v11 = 0x8000000000000000LL;
                  v133 = v100;
                  goto LABEL_257;
                }
                v104 = v145;
                v30 = (*((_DWORD *)v145 + 3))-- == 1;
                if ( v30 )
                {
                  v105 = ((__int64 (__fastcall *)(_QWORD, _QWORD))core::option::Option<T>::map_or)(0LL, 0LL);
                  ((void (__fastcall *)(volatile __int32 *, __int64, _QWORD))core::sync::atomic::atomic_store)(
                    v104,
                    v105,
                    0LL);
                  v106 = v145;
                  if ( _InterlockedExchange(v145 + 2, 0) == 2 )
                  {
                    v52 = (char *)(v106 + 2);
                    v11 = 0x8000000000000006LL;
                    goto LABEL_152;
                  }
                }
LABEL_292:
                v11 = 0x8000000000000006LL;
                goto LABEL_293;
              }
LABEL_256:
              v133 = (unsigned int)((_DWORD)v80 << 8) | (unsigned __int8)v76 | v133 & 0xFFFFFFFF00000000LL;
              goto LABEL_257;
            }
          }
          v5 = _errno_location();
          if ( ((unsigned __int8)v5 & 3) == 0 )
          {
            nix::errno::consts::from_i32((unsigned int)*v5);
            goto LABEL_250;
          }
          goto LABEL_365;
        }
      }
      LODWORD(v80) = (unsigned int)v76 >> 8;
      v11 = 0x8000000000000001LL;
      goto LABEL_256;
    }
    ((void (__fastcall *)(__int64 **, __int64, __int64))std::sys::pal::unix::net::Socket::new_raw)(&v143, 1LL, 1LL);
    if ( (_DWORD)v143 )
    {
      v9 = v144[0];
LABEL_74:
      v11 = 0x8000000000000000LL;
      goto LABEL_296;
    }
    v26 = HIDWORD(v143);
    ((void (__fastcall *)(struct stat *, __int64, __int64))std::os::unix::net::addr::sockaddr_un)(v195, v7, v8);
    if ( LODWORD(v195[0].st_dev) )
    {
      v9 = v195[0].st_ino;
      goto LABEL_72;
    }
    tv_nsec = v195[0].st_ctim.tv_nsec;
    v166 = *(_OWORD *)&v195[0].st_mtim.tv_nsec;
    v165 = *(_OWORD *)&v195[0].st_atim.tv_nsec;
    v164 = *(_OWORD *)&v195[0].st_blocks;
    *(_OWORD *)&v163[44] = *(_OWORD *)&v195[0].st_size;
    *(_OWORD *)&v163[28] = *(_OWORD *)&v195[0].st_gid;
    *(_OWORD *)&v163[12] = *(_OWORD *)&v195[0].st_nlink;
    *(_DWORD *)v163 = HIDWORD(v195[0].st_dev);
    *(_QWORD *)&v163[4] = v195[0].st_ino;
    if ( connect(v26, (const struct sockaddr *)v163, HIDWORD(v195[0].st_ctim.tv_nsec)) == -1 )
    {
      v9 = ((unsigned __int64)(unsigned int)std::sys::pal::unix::os::errno() << 32) | 2;
LABEL_72:
      ((void (__fastcall *)(_QWORD))std::sys::pal::unix::fs::debug_assert_fd_is_open)(v26);
      v27 = v26;
LABEL_73:
      close(v27);
      goto LABEL_74;
    }
    v138 = v26;
    v9 = ((__int64 (__fastcall *)(unsigned int *, __int64))std::net::tcp::TcpStream::shutdown)(&v138, 1LL);
    if ( v9 )
    {
      ((void (__fastcall *)(_QWORD))std::sys::pal::unix::fs::debug_assert_fd_is_open)(v138);
      v27 = v138;
      goto LABEL_73;
    }
    v139 = v138;
    v140 = 0;
    if ( (a3[1] & 1) == 0 && (a3[3] & 1) == 0 && (a3[2] & 1) == 0 && (*a3 & 1) == 0 && !a3[4] )
    {
      v151 = std::io::stdio::stdout();
      v145 = (volatile __int32 *)((__int64 (__fastcall *)(__int64 *))std::io::stdio::Stdout::lock)(&v151);
      if ( pipe((int *)v195) == -1 )
      {
        v5 = _errno_location();
        if ( ((unsigned __int8)v5 & 3) != 0 )
          goto LABEL_365;
        LODWORD(v93) = nix::errno::consts::from_i32((unsigned int)*v5);
      }
      else
      {
        v93 = HIDWORD(v195[0].st_dev);
        if ( LODWORD(v195[0].st_dev) != -1 )
        {
          *(_DWORD *)v163 = HIDWORD(v195[0].st_dev);
          LODWORD(v143) = v195[0].st_dev;
          while ( 1 )
          {
            v94 = ((__int64 (__fastcall *)(unsigned int *))<std::sys::pal::unix::pipe::AnonPipe as std::os::fd::owned::AsFd>::as_fd)(&v139);
            v95 = ((__int64 (__fastcall *)(_BYTE *))<std::sys::pal::unix::fd::FileDesc as std::os::fd::owned::AsFd>::as_fd)(v163);
            v96 = splice(
                    v94,
                    0LL,
                    v95,
                    0LL,
                    (size_t)"ired typeIdentifier removedChannel number out of rangeLevel 2 not synchronizedLevel 3 haltedLevel 3 resetLink number out of rangeProtocol driver not attachedNo CSI structure availableLevel 2 haltedInvalid request descriptorExchange fullInvalid request codeInvalid slotBad font file formatDevice not a streamNo data availableTimer expiredOut of streams resourcesMachine is not on the networkPackage not installedLink has been severedAdvertise errorSrmount errorCommunication error on sendProtocol errorMultihop attemptedRFS specific errorNot a data messageValue too large for defined data typeName not unique on networkFile descriptor in bad stateRemote address changedCan not access a needed shared libraryAccessing a corrupted shared library.lib section in a.out corruptedAttempting to link in too many shared librariesCannot exec a shared library directlyIllegal byte sequenceInterrupted system call should be restartedStreams pipe errorToo many usersSocket operation on non-socketDestination address requiredProtocol wrong type for socketProtocol not availableProtocol not supportedSocket type not supportedOperation not supported on transport endpointProtocol family not supportedAddress family not supported by protocolAddress already in useCannot assign requested addressNetwork is downNetwork is unreachableNetwork dropped connection because of resetConnection reset by peerNo buffer space availableTransport endpoint is already connectedTransport endpoint is not connectedCannot send after transport endpoint shutdownToo many references: cannot spliceConnection timed outConnection refusedHost is downOperation already in progressOperation now in progressStale file handleStructure needs cleaningNot a XENIX named type fileNo XENIX semaphores availableIs a named type fileQuota exceededNo medium foundWrong medium typeOperation canceledRequired key not availableKey has expiredKey has been revokedKey was rejected by serviceOwner diedState not recoverableOperation not possible due to RF-killMemory page has hardware error",
                    0);
            v97 = v96;
            if ( !v96 )
            {
              v98 = 1;
              LOBYTE(v93) = 0;
              goto LABEL_307;
            }
            if ( v96 == -1 )
              break;
            if ( (unsigned int)((__int64 (__fastcall *)(__int64 **, ssize_t))uucore::features::pipes::splice_exact)(
                                 &v143,
                                 v96) != 134 )
            {
              LODWORD(v93) = uu_cat::splice::copy_exact((int)v143, v97);
              if ( (_DWORD)v93 != 134 )
              {
                LODWORD(v97) = (unsigned int)v93 >> 8;
                v11 = 0x8000000000000001LL;
                v98 = 0;
                goto LABEL_308;
              }
LABEL_305:
              LOBYTE(v93) = 1;
              LODWORD(v97) = 0;
              v98 = 1;
LABEL_307:
              v11 = 0x8000000000000006LL;
LABEL_308:
              ((void (__fastcall *)(_QWORD))std::sys::pal::unix::fs::debug_assert_fd_is_open)(*(unsigned int *)v163);
              close(*(int *)v163);
              ((void (__fastcall *)(_QWORD))std::sys::pal::unix::fs::debug_assert_fd_is_open)((unsigned int)v143);
              close((int)v143);
              if ( v98 )
              {
                if ( (v93 & 1) == 0 )
                {
                  v11 = 0x8000000000000006LL;
LABEL_312:
                  v114 = v145;
                  v30 = (*((_DWORD *)v145 + 3))-- == 1;
                  if ( !v30 )
                    goto LABEL_329;
                  v115 = ((__int64 (__fastcall *)(_QWORD, _QWORD))core::option::Option<T>::map_or)(0LL, 0LL);
                  ((void (__fastcall *)(volatile __int32 *, __int64, _QWORD))core::sync::atomic::atomic_store)(
                    v114,
                    v115,
                    0LL);
                  v116 = v145;
                  if ( _InterlockedExchange(v145 + 2, 0) != 2 )
                    goto LABEL_329;
                  v75 = (char *)(v116 + 2);
LABEL_210:
                  ((void (__fastcall *)(char *))std::sys::sync::mutex::futex::Mutex::wake)(v75);
                  goto LABEL_329;
                }
                memset(v195, 0, (size_t)&unk_10000);
                while ( 1 )
                {
                  v143 = (__int64 *)((__int64 (__fastcall *)(unsigned int *, struct stat *, void *))<std::os::unix::net::stream::UnixStream as std::io::Read>::read)(
                                      &v139,
                                      v195,
                                      &unk_10000);
                  v144[0] = v117;
                  if ( v143 )
                    break;
                  if ( !v117 )
                    goto LABEL_323;
                  if ( v117 >= (unsigned __int64)&unk_10001 )
                    core::slice::index::slice_end_index_len_fail(v117, &unk_10000, &off_108A10);
                  v118 = ((__int64 (__fastcall *)(volatile __int32 **, struct stat *))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                           &v145,
                           v195);
                  if ( v118 )
                    goto LABEL_324;
                }
                ((void (__fastcall *)(_BYTE *, unsigned __int64))std::io::error::repr_bitpacked::decode_repr)(
                  v163,
                  v117);
                if ( v163[0] >= 3u )
                  ((void (__fastcall *)(_BYTE *))core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>)(&v163[8]);
LABEL_323:
                v118 = ((__int64 (__fastcall *)(volatile __int32 **))<std::io::stdio::StdoutLock as std::io::Write>::flush)(&v145);
                if ( v118 )
                {
LABEL_324:
                  v11 = 0x8000000000000000LL;
                  v133 = v118;
                  goto LABEL_312;
                }
                v119 = v145;
                v30 = (*((_DWORD *)v145 + 3))-- == 1;
                if ( v30 )
                {
                  v120 = ((__int64 (__fastcall *)(_QWORD, _QWORD))core::option::Option<T>::map_or)(0LL, 0LL);
                  ((void (__fastcall *)(volatile __int32 *, __int64, _QWORD))core::sync::atomic::atomic_store)(
                    v119,
                    v120,
                    0LL);
                  v121 = v145;
                  if ( _InterlockedExchange(v145 + 2, 0) == 2 )
                  {
                    v75 = (char *)(v121 + 2);
                    v11 = 0x8000000000000006LL;
                    goto LABEL_210;
                  }
                }
LABEL_328:
                v11 = 0x8000000000000006LL;
                goto LABEL_329;
              }
LABEL_311:
              v133 = (unsigned int)((_DWORD)v97 << 8) | (unsigned __int8)v93 | v133 & 0xFFFFFFFF00000000LL;
              goto LABEL_312;
            }
          }
          v5 = _errno_location();
          if ( ((unsigned __int8)v5 & 3) == 0 )
          {
            nix::errno::consts::from_i32((unsigned int)*v5);
            goto LABEL_305;
          }
          goto LABEL_365;
        }
      }
      LODWORD(v97) = (unsigned int)v93 >> 8;
      v11 = 0x8000000000000001LL;
      goto LABEL_311;
    }
    memset(v195, 0, 0x7C00uLL);
    v154 = std::io::stdio::stdout();
    v132 = ((__int64 (__fastcall *)(__int64 *))std::io::stdio::Stdout::lock)(&v154);
LABEL_160:
    v53 = ((__int64 (__fastcall *)(unsigned int *, struct stat *, __int64))<std::os::unix::net::stream::UnixStream as std::io::Read>::read)(
            &v139,
            v195,
            31744LL);
    v55 = v54;
    v156 = v53;
    v157 = v54;
    if ( v53 )
    {
      ((void (__fastcall *)(__int64 **, unsigned __int64))std::io::error::repr_bitpacked::decode_repr)(&v143, v54);
      if ( (unsigned __int8)v143 >= 3u )
        ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>)(v144);
LABEL_245:
      v87 = v132;
      v30 = (*(_DWORD *)(v132 + 12))-- == 1;
      if ( v30 )
      {
        v88 = ((__int64 (__fastcall *)(_QWORD, _QWORD))core::option::Option<T>::map_or)(0LL, 0LL);
        ((void (__fastcall *)(__int64, __int64, _QWORD))core::sync::atomic::atomic_store)(v87, v88, 0LL);
        v89 = v132;
        if ( _InterlockedExchange((volatile __int32 *)(v132 + 8), 0) == 2 )
        {
          v75 = (char *)(v89 + 8);
          v11 = 0x8000000000000006LL;
          goto LABEL_210;
        }
      }
      goto LABEL_328;
    }
    if ( !v54 )
      goto LABEL_245;
    if ( v54 > 0x7C00 )
      core::slice::index::slice_end_index_len_fail(v54, 31744LL, &off_108A28);
    v56 = 0LL;
    while ( *((_BYTE *)&v195[0].st_dev + v56) != 10 )
    {
      if ( (v135 & 0x100) != 0 )
      {
        v57 = ((__int64 (__fastcall *)(__int64 *, const char *, __int64))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                &v132,
                asc_1EDCF,
                1LL);
        if ( v57 )
          goto LABEL_205;
        v135 = 0;
        v136 = 0;
      }
      else
      {
        v136 = 0;
        if ( (v135 & 1) != 0 && a3[4] )
        {
          v158 = &v134;
          v159 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          *(_QWORD *)v163 = 2LL;
          *(_QWORD *)&v163[16] = 0LL;
          *(_QWORD *)&v163[24] = 6LL;
          *(_QWORD *)&v163[32] = 0LL;
          *(_QWORD *)&v163[40] = 32LL;
          v163[48] = 3;
          v145 = (volatile __int32 *)&unk_108A40;
          v146 = 2LL;
          v149 = v163;
          v150 = 1LL;
          v147 = &v158;
          v148 = 1LL;
          v57 = ((__int64 (__fastcall *)(__int64 *, volatile __int32 **))std::io::Write::write_fmt)(&v132, &v145);
          if ( v57 )
            goto LABEL_205;
          if ( v134 == -1 )
            goto LABEL_364;
          ++v134;
        }
      }
      v58 = ((__int64 (__fastcall *)(__int64 *, char *, unsigned __int64, _BYTE *))uu_cat::write_end)(
              &v132,
              (char *)v195 + v56,
              v55 - v56,
              a3);
      v59 = v56 + v58;
      if ( __CFADD__(v56, v58) )
      {
        v131 = &off_108A78;
        goto LABEL_363;
      }
      if ( v59 == v55 )
      {
        LOBYTE(v135) = 0;
        goto LABEL_160;
      }
      if ( v59 >= v55 )
        ((void (__fastcall __noreturn *)(unsigned __int64, unsigned __int64, char **))core::panicking::panic_bounds_check)(
          v59,
          v55,
          &off_108A90);
      v60 = *((unsigned __int8 *)&v195[0].st_dev + v59);
      if ( v60 == 10 )
      {
        v61 = asc_1EBDA;
        if ( (a3[2] & 1) == 0 )
          v61 = asc_1EBD9;
        v62 = v140;
        v57 = ((__int64 (__fastcall *)(__int64 *, const char *, __int64))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                &v132,
                v61,
                (a3[2] & 1) + 1LL);
        if ( v57
          || (v62 & 1) != 0
          && (v57 = ((__int64 (__fastcall *)(__int64 *))<std::io::stdio::StdoutLock as std::io::Write>::flush)(&v132)) != 0 )
        {
LABEL_205:
          v133 = v57;
          v11 = 0x8000000000000000LL;
          goto LABEL_207;
        }
        LOBYTE(v135) = 1;
      }
      else
      {
        if ( v60 != 13 )
        {
          v143 = 0LL;
          ((void (__fastcall __noreturn *)(_QWORD, char *, const char *, __int64 **, char **))core::panicking::assert_failed)(
            0LL,
            (char *)v195 + v59,
            asc_1EBD9,
            &v143,
            &off_108AA8);
        }
        HIBYTE(v135) = 1;
      }
      v63 = v58 + 1;
      if ( !v63 )
      {
        v131 = &off_108AC0;
        goto LABEL_363;
      }
      v19 = __CFADD__(v63, v56);
      v56 += v63;
      if ( v19 )
      {
        v131 = &off_108AD8;
LABEL_363:
        v137 = v131;
LABEL_364:
        core::panicking::panic_const::panic_const_add_overflow(v137);
      }
LABEL_164:
      if ( v56 >= v55 )
        goto LABEL_160;
    }
    ((void (__fastcall *)(__int64 *, __int64 *, _BYTE *, __int64 *, _QWORD))uu_cat::write_new_line)(
      &v151,
      &v132,
      a3,
      &v134,
      v140 & 1);
    v11 = v151;
    if ( v151 == 0x8000000000000006LL )
    {
      LOBYTE(v135) = 1;
      ++v56;
      goto LABEL_164;
    }
    v133 = v152;
    v155 = v153;
LABEL_207:
    v72 = v132;
    v30 = (*(_DWORD *)(v132 + 12))-- == 1;
    if ( v30 )
    {
      v73 = ((__int64 (__fastcall *)(_QWORD, _QWORD))core::option::Option<T>::map_or)(0LL, 0LL);
      ((void (__fastcall *)(__int64, __int64, _QWORD))core::sync::atomic::atomic_store)(v72, v73, 0LL);
      v74 = v132;
      if ( _InterlockedExchange((volatile __int32 *)(v132 + 8), 0) == 2 )
      {
        v75 = (char *)(v74 + 8);
        goto LABEL_210;
      }
    }
LABEL_329:
    ((void (__fastcall *)(_QWORD))std::sys::pal::unix::fs::debug_assert_fd_is_open)(v139);
    v107 = v139;
LABEL_294:
    close(v107);
LABEL_295:
    v9 = v133;
    if ( v11 != 0x8000000000000006LL )
    {
LABEL_296:
      v178[0] = v11;
      v178[1] = v9;
      v178[2] = v155;
      v108 = *(_QWORD *)(v4 + 8);
      if ( v108 )
      {
        v109 = *(_QWORD *)(v4 + 16);
        if ( v109 >= 0 )
        {
          v187[0] = 0LL;
          v187[1] = v108;
          v187[2] = v109;
          v188 = 0;
          v186[0] = v187;
          v186[1] = <os_display::Quoted as core::fmt::Display>::fmt;
          v186[2] = v178;
          v186[3] = <uu_cat::CatError as core::fmt::Display>::fmt;
          v195[0].st_dev = (__dev_t)&unk_1089F0;
          v195[0].st_ino = 2LL;
          v195[0].st_nlink = (__nlink_t)v186;
          *(_QWORD *)&v195[0].st_mode = 2LL;
          *(_QWORD *)&v195[0].st_gid = 0LL;
          ((void (__fastcall *)(__int128 *, struct stat *))alloc::fmt::format::format_inner)(&v189, v195);
          v182 = v189;
          v183 = v190;
          v110 = v162;
          if ( v162 == v160 )
            ((void (__fastcall *)(__int64 *))alloc::raw_vec::RawVec<T,A>::grow_one)(&v160);
          v111 = v161;
          v112 = 3 * v110;
          v113 = v182;
          *(_QWORD *)(v161 + 8 * v112 + 16) = v183;
          *(_OWORD *)(v111 + 8 * v112) = v113;
          v162 = v110 + 1;
          ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<uu_cat::CatError>)(v178);
          goto LABEL_301;
        }
      }
LABEL_349:
      ((void (__fastcall __noreturn *)(const char *, __int64))core::panicking::panic_nounwind)(aUnsafePrecondi_7, 162LL);
    }
LABEL_301:
    v4 += 24LL;
    v133 = v9;
  }
  while ( v4 != v177 );
  if ( (v135 & 0x100) != 0 )
  {
    v193[0] = &off_1089C0;
    v193[1] = 1LL;
    v193[2] = 8LL;
    v194 = 0LL;
    ((void (__fastcall *)(_QWORD *))std::io::stdio::_print)(v193);
  }
  if ( v162 )
  {
    v122 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v123 = *(_QWORD *)(v122 + 8);
    v124 = *(_QWORD *)(v122 + 16);
    core::slice::raw::from_raw_parts::precondition_check(v123, 1LL, 1LL, v124);
    v185[0] = v123;
    v185[1] = v124;
    v184[0] = v185;
    v184[1] = <&T as core::fmt::Display>::fmt;
    v195[0].st_dev = (__dev_t)&off_1089D0;
    v195[0].st_ino = 2LL;
    v195[0].st_nlink = (__nlink_t)v184;
    *(_QWORD *)&v195[0].st_mode = 1LL;
    *(_QWORD *)&v195[0].st_gid = 0LL;
    ((void (__fastcall *)(__int128 *, struct stat *))alloc::fmt::format::format_inner)(&v191, v195);
    v172 = v191;
    v173 = v192;
    if ( !v161 || (v161 & 7) != 0 || (v125 = v162, v162 >= 0x555555555555556LL) )
      ((void (__fastcall __noreturn *)(const char *, __int64))core::panicking::panic_nounwind)(
        anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788,
        162LL);
    if ( !*((_QWORD *)&v172 + 1) || v173 < 0 )
      goto LABEL_349;
    ((void (__fastcall *)(_BYTE *, __int64, unsigned __int64))alloc::str::join_generic_copy)(v163, v161, v162);
    v195[0].st_nlink = *(_QWORD *)&v163[16];
    *(_OWORD *)&v195[0].st_dev = *(_OWORD *)v163;
    v195[0].st_mode = v125;
    v126 = (_OWORD *)((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))alloc::alloc::Global::alloc_impl)(
                       1LL,
                       8LL,
                       32LL,
                       0LL);
    v6 = v126;
    if ( !v126 )
      ((void (__fastcall __noreturn *)(__int64, __int64))alloc::alloc::handle_alloc_error)(8LL, 32LL);
    v127 = *(_OWORD *)&v195[0].st_dev;
    v126[1] = *(_OWORD *)&v195[0].st_nlink;
    *v126 = v127;
    ((void (__fastcall *)(struct stat *, __int128 *))alloc::raw_vec::RawVec<T,A>::current_memory)(v195, &v172);
    if ( v195[0].st_ino )
      ((void (__fastcall *)(__int64 *, __dev_t, __ino_t, __nlink_t))<alloc::alloc::Global as core::alloc::Allocator>::deallocate)(
        &v173,
        v195[0].st_dev,
        v195[0].st_ino,
        v195[0].st_nlink);
  }
  else
  {
    v6 = 0LL;
  }
LABEL_342:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v160);
  return v6;
}
