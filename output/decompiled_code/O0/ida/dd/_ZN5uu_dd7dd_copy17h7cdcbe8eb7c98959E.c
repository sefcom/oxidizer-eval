__int64 __fastcall uu_dd::dd_copy(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r13
  int v3; // edx
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int128 v8; // rax
  unsigned __int64 v9; // kr00_8
  char v10; // al
  __int64 v11; // rax
  void *v12; // r14
  void *v13; // rbx
  size_t v14; // r15
  __int64 v15; // rax
  volatile signed __int64 *v16; // r15
  volatile signed __int64 *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rdx
  volatile signed __int64 *v20; // r15
  volatile signed __int64 **v21; // rax
  char *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned __int128 v26; // rax
  size_t v27; // rcx
  signed __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // kr10_8
  unsigned __int64 v32; // rcx
  __int64 v33; // r15
  __int64 v34; // r14
  size_t v35; // r12
  unsigned __int64 v36; // r15
  unsigned __int64 v37; // rbp
  __int64 v38; // rbx
  bool v39; // cf
  bool v40; // cc
  unsigned __int64 v41; // rbp
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  size_t v45; // rbx
  size_t v46; // rbp
  size_t v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r15
  char *v50; // r13
  char *v51; // rbx
  char *v52; // rbp
  size_t v53; // r12
  __int64 v54; // r13
  size_t v55; // r14
  unsigned __int64 v56; // r15
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // r14
  _BYTE *v60; // r14
  __int64 v61; // r12
  bool v62; // zf
  __int64 v63; // r12
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // r13
  __int64 v66; // r15
  const void *v67; // r13
  size_t v68; // r12
  __int64 v69; // rbp
  void *v70; // r14
  int v71; // r15d
  __int64 v72; // r13
  off_t v73; // r12
  __int64 v74; // rbp
  _BOOL8 v75; // rtt
  _BOOL8 v76; // rtt
  char v77; // bl
  char v78; // al
  __int64 v79; // rax
  int v80; // edx
  off_t v81; // rdx
  char v82; // bp
  off_t v83; // rdx
  __int64 v84; // r14
  char **v86; // rax
  char **v87; // rdi
  char v88; // [rsp+Ch] [rbp-54Ch] BYREF
  char v89; // [rsp+Dh] [rbp-54Bh]
  char v90; // [rsp+Eh] [rbp-54Ah]
  char v91; // [rsp+Fh] [rbp-549h]
  _DWORD *v92; // [rsp+10h] [rbp-548h]
  unsigned __int64 v93; // [rsp+18h] [rbp-540h]
  void *src[2]; // [rsp+20h] [rbp-538h] BYREF
  size_t v95; // [rsp+30h] [rbp-528h]
  __int128 *v96; // [rsp+38h] [rbp-520h]
  __int64 v97; // [rsp+40h] [rbp-518h]
  int v98; // [rsp+4Ch] [rbp-50Ch]
  __int128 v99; // [rsp+50h] [rbp-508h] BYREF
  __int128 v100; // [rsp+60h] [rbp-4F8h]
  size_t n; // [rsp+70h] [rbp-4E8h]
  __int64 v102; // [rsp+78h] [rbp-4E0h]
  __int64 v103; // [rsp+80h] [rbp-4D8h]
  signed __int64 v104; // [rsp+88h] [rbp-4D0h]
  unsigned __int64 v105; // [rsp+90h] [rbp-4C8h]
  __int128 v106; // [rsp+98h] [rbp-4C0h] BYREF
  char **v107; // [rsp+A8h] [rbp-4B0h]
  __int64 v108; // [rsp+B0h] [rbp-4A8h]
  signed __int64 v109; // [rsp+B8h] [rbp-4A0h]
  volatile signed __int64 *v110[2]; // [rsp+C0h] [rbp-498h] BYREF
  int v111; // [rsp+D0h] [rbp-488h]
  __int64 v112; // [rsp+D8h] [rbp-480h]
  __int64 v113; // [rsp+E0h] [rbp-478h]
  unsigned __int64 v114; // [rsp+E8h] [rbp-470h]
  char *v115; // [rsp+F0h] [rbp-468h]
  __int64 v116; // [rsp+F8h] [rbp-460h] BYREF
  __int64 v117; // [rsp+100h] [rbp-458h]
  __int64 v118; // [rsp+108h] [rbp-450h]
  __int64 v119; // [rsp+110h] [rbp-448h]
  __int64 v120; // [rsp+118h] [rbp-440h] BYREF
  int v121; // [rsp+120h] [rbp-438h]
  unsigned __int64 v122; // [rsp+128h] [rbp-430h]
  __int128 v123; // [rsp+130h] [rbp-428h] BYREF
  __int64 v124; // [rsp+140h] [rbp-418h]
  _BYTE v125[48]; // [rsp+148h] [rbp-410h] BYREF
  __int64 v126; // [rsp+178h] [rbp-3E0h] BYREF
  __int64 v127; // [rsp+180h] [rbp-3D8h]
  __int64 v128; // [rsp+188h] [rbp-3D0h]
  _BYTE v129[40]; // [rsp+190h] [rbp-3C8h] BYREF
  _OWORD v130[2]; // [rsp+1B8h] [rbp-3A0h] BYREF
  __int64 v131; // [rsp+1E0h] [rbp-378h]
  char *v132; // [rsp+240h] [rbp-318h] BYREF
  _QWORD v133[3]; // [rsp+248h] [rbp-310h] BYREF
  _QWORD v134[2]; // [rsp+260h] [rbp-2F8h] BYREF
  __int64 v135[6]; // [rsp+270h] [rbp-2E8h] BYREF
  _QWORD v136[4]; // [rsp+2A0h] [rbp-2B8h] BYREF
  _QWORD v137[3]; // [rsp+2C0h] [rbp-298h] BYREF
  int v138; // [rsp+2D8h] [rbp-280h]
  __int128 v139; // [rsp+2E0h] [rbp-278h] BYREF
  __int64 v140; // [rsp+2F0h] [rbp-268h]
  __int64 v141; // [rsp+300h] [rbp-258h] BYREF
  int v142; // [rsp+308h] [rbp-250h]
  __int64 v143; // [rsp+310h] [rbp-248h]
  __int64 v144; // [rsp+318h] [rbp-240h]
  signed __int64 v145; // [rsp+320h] [rbp-238h]
  int v146; // [rsp+328h] [rbp-230h]
  unsigned __int64 v147; // [rsp+330h] [rbp-228h]
  signed __int64 v148; // [rsp+338h] [rbp-220h]
  __int64 v149; // [rsp+340h] [rbp-218h]
  __int64 v150; // [rsp+348h] [rbp-210h]
  char v151; // [rsp+350h] [rbp-208h]
  __int128 v152; // [rsp+360h] [rbp-1F8h] BYREF
  __int64 v153; // [rsp+370h] [rbp-1E8h]
  __int128 v154; // [rsp+380h] [rbp-1D8h] BYREF
  char v155; // [rsp+390h] [rbp-1C8h]
  _QWORD v156[6]; // [rsp+398h] [rbp-1C0h] BYREF
  __int128 v157; // [rsp+3C8h] [rbp-190h] BYREF
  size_t v158; // [rsp+3D8h] [rbp-180h]
  _BYTE v159[28]; // [rsp+3E0h] [rbp-178h] BYREF
  _OWORD v160[2]; // [rsp+400h] [rbp-158h] BYREF
  __int64 v161; // [rsp+420h] [rbp-138h] BYREF
  char v162; // [rsp+428h] [rbp-130h] BYREF
  _OWORD v163[3]; // [rsp+460h] [rbp-F8h] BYREF
  unsigned __int64 v164; // [rsp+490h] [rbp-C8h] BYREF
  __int128 v165; // [rsp+498h] [rbp-C0h]
  __int64 v166; // [rsp+4A8h] [rbp-B0h]
  char v167[152]; // [rsp+4C0h] [rbp-98h] BYREF

  v96 = (__int128 *)a2;
  v2 = (_DWORD *)a1;
  v92 = (_DWORD *)a1;
  v120 = std::time::Instant::now();
  v121 = v3;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL);
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 120LL);
  v6 = gcd::binary_usize(v4, v5);
  if ( !v6 )
    core::panicking::panic_const::panic_const_div_by_zero(&off_143FA0);
  if ( (v4 | v6) >> 32 )
    v7 = v4 / v6;
  else
    v7 = (unsigned int)v4 / (unsigned int)v6;
  v9 = v7;
  v8 = v5 * (unsigned __int128)v7;
  n = v8;
  if ( !is_mul_ok(v5, v9) )
    core::panicking::panic_const::panic_const_mul_overflow(&off_143FA0, v5, *((_QWORD *)&v8 + 1));
  std::sync::mpmc::channel(v129, v5, *((_QWORD *)&v8 + 1));
  v106 = *(_OWORD *)v129;
  v10 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 166LL);
  v154 = *(_OWORD *)&v129[16];
  v155 = v10;
  *(_QWORD *)&v129[16] = 0x8000000000000000LL;
  *(_QWORD *)v129 = 0LL;
  std::thread::Builder::spawn_unchecked_(&v99, v129, &v154, 0LL);
  if ( !(_QWORD)v99 )
  {
    *(_QWORD *)&v99 = *((_QWORD *)&v99 + 1);
    core::result::unwrap_failed(
      "failed to spawn threadmain",
      22LL,
      &v99,
      &anon_63782909c3cb7357905e62e141098beb_5_llvm_18118160920441741807,
      &anon_d179d40980a54bd62163da74a972a144_5_llvm_3947593861476151837);
  }
  v123 = v99;
  v124 = v100;
  v89 = *(_BYTE *)(*((_QWORD *)v96 + 2) + 147LL);
  v11 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)v11 == 2LL || *(_QWORD *)(v11 + 8) )
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v129, n, 0LL);
    if ( *(_QWORD *)v129 )
      alloc::raw_vec::handle_error(*(_QWORD *)&v129[8], *(_QWORD *)&v129[16]);
    v12 = *(void **)&v129[16];
    if ( !*(_QWORD *)&v129[16] )
      core::panicking::panic_nounwind(anon_9b87b42699a6e8db798014e3917c8532_3_llvm_5650560785558774950, 111LL);
    v13 = *(void **)&v129[8];
    v14 = n;
    memset(*(void **)&v129[16], 221, n);
    src[0] = v13;
    src[1] = v12;
    v95 = v14;
    v15 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 24LL, 0LL);
    v16 = (volatile signed __int64 *)v15;
    if ( !v15 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    *(_QWORD *)v15 = 1LL;
    v17 = (volatile signed __int64 *)(v15 + 8);
    *(_QWORD *)(v15 + 8) = 1LL;
    *(_BYTE *)(v15 + 16) = 0;
    v133[0] = v15;
LABEL_14:
    v18 = *v17;
    do
    {
      if ( v18 == -1 )
      {
        _mm_pause();
        goto LABEL_14;
      }
      if ( v18 < 0 )
        alloc::sync::Arc<T,A>::downgrade::panic_cold_display(
          &anon_6ec04cc158f36395b4c5957766f7f953_1_llvm_13014179843882398300,
          &anon_6ec04cc158f36395b4c5957766f7f953_3_llvm_13014179843882398300);
    }
    while ( core::sync::atomic::atomic_compare_exchange_weak(v16 + 1, v18, v18 + 1, 2LL, 0LL) );
    v116 = (__int64)v16;
    v117 = 1LL;
    LODWORD(v118) = 0;
    *(_QWORD *)&v129[16] = 0x8000000000000000LL;
    *(_QWORD *)v129 = 0LL;
    std::thread::Builder::spawn_unchecked_(&v99, v129, &v116, 0LL);
    if ( !(_QWORD)v99 )
    {
      v126 = *((_QWORD *)&v99 + 1);
      core::result::unwrap_failed(
        "failed to spawn threadmain",
        22LL,
        &v126,
        &anon_63782909c3cb7357905e62e141098beb_5_llvm_18118160920441741807,
        &anon_d179d40980a54bd62163da74a972a144_5_llvm_3947593861476151837);
    }
    core::ptr::drop_in_place<std::thread::JoinInner<()>>(&v99);
    v110[1] = (_QWORD *)(&dword_0 + 1);
    v111 = 0;
    v110[0] = v16;
LABEL_21:
    v19 = *v17;
    do
    {
      if ( v19 == -1 )
      {
        _mm_pause();
        v17 = v110[0] + 1;
        goto LABEL_21;
      }
      if ( v19 < 0 )
        alloc::sync::Arc<T,A>::downgrade::panic_cold_display(
          &anon_6ec04cc158f36395b4c5957766f7f953_1_llvm_13014179843882398300,
          &anon_6ec04cc158f36395b4c5957766f7f953_3_llvm_13014179843882398300);
    }
    while ( core::sync::atomic::atomic_compare_exchange_weak(v110[0] + 1, v19, v19 + 1, 2LL, 0LL) );
    v20 = v110[0];
    v21 = (volatile signed __int64 **)alloc::alloc::Global::alloc_impl(1LL, 8LL, 8LL, 0LL);
    if ( !v21 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    *v21 = v20;
    v22 = (char *)v21;
    uu_dd::progress::SignalHandler::install_signal_handler(&v161, v21, &off_143BB0);
    v23 = *(_QWORD *)(a1 + 8);
    if ( !v161 )
    {
      v132 = &v162;
      if ( *(_BYTE *)(v23 + 166) != 2 )
      {
        v134[0] = &v132;
        v134[1] = <&T as core::fmt::Display>::fmt;
        v156[0] = &off_143EA8;
        v156[1] = 2LL;
        v156[4] = 0LL;
        v156[2] = v134;
        v156[3] = 1LL;
        std::io::stdio::_eprint(v156);
        v23 = *(_QWORD *)(a1 + 8);
      }
    }
    v91 = *(_BYTE *)(v23 + 69);
    v24 = *((_QWORD *)v96 + 2);
    v90 = *(_BYTE *)(v24 + 156);
    if ( (*(_BYTE *)(v24 + 165) & 1) != 0 )
    {
      v99 = *v96;
      v22 = *(char **)(v24 + 120);
      *(_QWORD *)&v100 = v24;
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(v129, v22, 0LL);
      if ( *(_QWORD *)v129 )
        alloc::raw_vec::handle_error(*(_QWORD *)&v129[8], *(_QWORD *)&v129[16]);
      *(_OWORD *)&v125[24] = v99;
      *(_QWORD *)&v125[40] = v100;
      *(_OWORD *)v125 = *(_OWORD *)&v129[8];
      *(_QWORD *)&v125[16] = 0LL;
    }
    else
    {
      *(_QWORD *)&v125[24] = *((_QWORD *)v96 + 2);
      *(_OWORD *)&v125[8] = *v96;
      *(_QWORD *)v125 = 0x8000000000000000LL;
    }
    v114 = 0LL;
    v107 = &off_143FD0;
    v122 = 0LL;
    v115 = 0LL;
    v105 = 0LL;
    v104 = 0LL;
    v113 = 0LL;
    v112 = 0LL;
    v103 = 0LL;
    v102 = 0LL;
    v109 = 0LL;
    v98 = 0;
    while ( 1 )
    {
      v2 = v92;
      v25 = *((_QWORD *)v92 + 1);
      *((_QWORD *)&v26 + 1) = *(_QWORD *)v25;
      v27 = n;
      if ( *(_QWORD *)v25 != 2LL )
      {
        v28 = v109;
        if ( !*((_QWORD *)&v26 + 1) )
        {
          v28 = v102 + v103;
          if ( __CFADD__(v102, v103) )
          {
            v87 = &off_144018;
            goto LABEL_240;
          }
        }
        v29 = *(_QWORD *)(v25 + 8);
        if ( v28 >= v29 )
        {
LABEL_150:
          v163[2] = *(_OWORD *)&v125[32];
          v163[1] = *(_OWORD *)&v125[16];
          v163[0] = *(_OWORD *)v125;
          v137[0] = v103;
          v137[1] = v102;
          v137[2] = v109;
          v138 = v98;
          v136[0] = v105;
          v136[1] = v104;
          v136[2] = v113;
          v136[3] = v112;
          v152 = v123;
          v153 = v124;
          v38 = uu_dd::finalize(
                  (unsigned int)v163,
                  (unsigned int)v137,
                  (unsigned int)v136,
                  v120,
                  v121,
                  (unsigned int)&v106,
                  (__int64)&v152,
                  (v89 & 1) == 0);
          core::ptr::drop_in_place<core::result::Result<uu_dd::progress::SignalHandler,std::io::error::Error>>(&v161);
          if ( !_InterlockedDecrement64(v110[0]) )
            alloc::sync::Arc<T,A>::drop_slow(v110);
          if ( src[0] )
            _rust_dealloc(src[1], src[0], 1LL);
          if ( (_QWORD)v106 )
          {
            if ( (_QWORD)v106 == 1LL )
              std::sync::mpmc::counter::Sender<C>::release((char *)&v106 + 8);
            else
              std::sync::mpmc::counter::Sender<C>::release((char *)&v106 + 8);
          }
          else
          {
            std::sync::mpmc::counter::Sender<C>::release((char *)&v106 + 8);
          }
          goto LABEL_189;
        }
        v27 = n;
        if ( *((_QWORD *)&v26 + 1) != 2LL )
        {
          if ( *((_QWORD *)&v26 + 1) )
          {
            if ( v29 < __PAIR128__(v104, v105) )
            {
              v86 = &off_144000;
              goto LABEL_197;
            }
            v32 = (v29 - __PAIR128__(v104, v105)) >> 64;
            *(_QWORD *)&v26 = v29 - v105;
            *((_QWORD *)&v26 + 1) = (n - __PAIR128__(v32, v26)) >> 64;
            if ( n < __PAIR128__(v32, v26) )
              *(_QWORD *)&v26 = n;
            v27 = v26;
          }
          else
          {
            v28 = v102 + v103;
            if ( __CFADD__(v102, v103) )
            {
              v87 = &off_143FB8;
              goto LABEL_240;
            }
            v39 = v29 < v28;
            v30 = v29 - v28;
            if ( v39 )
              goto LABEL_198;
            v31 = v30;
            v26 = *(unsigned __int64 *)(v25 + 112) * (unsigned __int128)v30;
            if ( !is_mul_ok(*(_QWORD *)(v25 + 112), v31) )
              core::panicking::panic_const::panic_const_mul_overflow(&off_143FE8, v22, *((_QWORD *)&v26 + 1));
            v27 = v26;
            if ( n < (unsigned __int64)v26 )
              v27 = n;
          }
        }
      }
      v22 = (char *)(v27 - v95);
      if ( v27 <= v95 )
      {
        v95 = v27;
        if ( (*(_BYTE *)(v25 + 104) & 1) == 0 )
        {
LABEL_74:
          v52 = (char *)src[1];
          if ( src[1] )
          {
            v53 = v95;
            if ( (v95 & 0x8000000000000000LL) == 0LL )
            {
              v93 = *(_QWORD *)(v25 + 112);
              if ( !v93 )
              {
                *(_QWORD *)v129 = &anon_65aa358081e6352c97079f221a5f8f24_11_llvm_10906678994159972944;
                *(_QWORD *)&v129[8] = 1LL;
                *(_QWORD *)&v129[16] = 8LL;
                *(_OWORD *)&v129[24] = 0LL;
                core::panicking::panic_fmt(v129, &off_143CB8);
              }
              if ( v95 )
              {
                v54 = 0LL;
                v108 = 0LL;
                v55 = 0LL;
                do
                {
                  v56 = v93;
                  if ( v53 < v93 )
                    v56 = v53;
                  if ( !v52 )
                    break;
                  v22 = v52;
                  *(_QWORD *)&v26 = <uu_dd::Input as std::io::Read>::read(v92, v52, v56);
                  v38 = *((_QWORD *)&v26 + 1);
                  if ( (_QWORD)v26 )
                    goto LABEL_158;
                  v52 += v56;
                  v53 -= v56;
                  if ( *(_QWORD *)(*((_QWORD *)v92 + 1) + 112LL) == *((_QWORD *)&v26 + 1) )
                  {
                    v39 = __CFADD__(*((_QWORD *)&v26 + 1), v55);
                    v55 += *((_QWORD *)&v26 + 1);
                    if ( v39 )
                    {
                      v87 = &off_143D00;
                      goto LABEL_240;
                    }
                    if ( !++v54 )
                    {
                      v87 = &off_143D18;
                      goto LABEL_240;
                    }
                  }
                  else
                  {
                    if ( !*((_QWORD *)&v26 + 1) )
                      break;
                    v39 = __CFADD__(*((_QWORD *)&v26 + 1), v55);
                    v55 += *((_QWORD *)&v26 + 1);
                    if ( v39 )
                    {
                      v87 = &off_143CD0;
LABEL_240:
                      core::panicking::panic_const::panic_const_add_overflow(v87, v22, *((_QWORD *)&v26 + 1), v28);
                    }
                    if ( !++v108 )
                    {
                      v87 = &off_143CE8;
                      goto LABEL_240;
                    }
                  }
                }
                while ( v53 );
                v97 = v54;
                v28 = v95;
                v57 = v55;
                v39 = v95 < v55;
                v2 = v92;
                v34 = v108;
                if ( v39 )
                  goto LABEL_100;
              }
              else
              {
                v97 = 0LL;
                v57 = 0LL;
                v34 = 0LL;
                v2 = v92;
              }
              v95 = v57;
              v28 = v57;
              goto LABEL_100;
            }
          }
LABEL_235:
          core::panicking::panic_nounwind(anon_60fe5ecc8a5a6f6a64f7c14fee2afab1_17_llvm_16066862953719322457, 166LL);
        }
      }
      else
      {
        alloc::vec::Vec<T,A>::extend_with(src, v22, 221LL);
        v2 = v92;
        v25 = *((_QWORD *)v92 + 1);
        if ( (*(_BYTE *)(v25 + 104) & 1) == 0 )
          goto LABEL_74;
      }
      v28 = v95;
      if ( !v95 )
      {
        v97 = 0LL;
        v34 = 0LL;
        v35 = 0LL;
        v93 = 0LL;
        goto LABEL_98;
      }
      LOBYTE(v108) = *(_BYTE *)(v25 + 105);
      v33 = *(_QWORD *)(v25 + 112);
      v97 = 0LL;
      v34 = 0LL;
      v35 = 0LL;
      v93 = 0LL;
      while ( 1 )
      {
        v39 = __CFADD__(v35, v33);
        v36 = v35 + v33;
        if ( v39 )
        {
          v87 = &off_143D30;
          goto LABEL_240;
        }
        if ( v36 >= v28 )
          v36 = v28;
        v37 = v36 - v35;
        if ( v36 < v35 )
        {
          v86 = &off_143D48;
          goto LABEL_197;
        }
        if ( v28 < 0 || !src[1] )
          core::panicking::panic_nounwind(anon_71668def9d6f66a92d9ad7276690856e_18_llvm_9180203369577476064, 166LL);
        v22 = (char *)src[1] + v35;
        *(_QWORD *)&v26 = <uu_dd::Input as std::io::Read>::read(v2, (char *)src[1] + v35, v36 - v35);
        v38 = *((_QWORD *)&v26 + 1);
        if ( (_QWORD)v26 )
          goto LABEL_159;
        if ( !*((_QWORD *)&v26 + 1) )
          break;
        v39 = __CFADD__(*((_QWORD *)&v26 + 1), v93);
        v93 += *((_QWORD *)&v26 + 1);
        v40 = v37 <= *((_QWORD *)&v26 + 1);
        v41 = v37 - *((_QWORD *)&v26 + 1);
        if ( v40 )
        {
          if ( v39 )
          {
            v87 = &off_143D60;
            goto LABEL_240;
          }
          if ( !++v97 )
          {
            v87 = &off_143D78;
            goto LABEL_240;
          }
        }
        else
        {
          if ( v39 )
          {
            v87 = &off_143D90;
            goto LABEL_240;
          }
          if ( !++v34 )
          {
            v87 = &off_143DA8;
            goto LABEL_240;
          }
          v42 = (unsigned __int8)v108;
          alloc::vec::from_elem(&v126, (unsigned __int8)v108, v41);
          v39 = __CFADD__(v35, v38);
          v45 = v35 + v38;
          if ( v39 )
            core::panicking::panic_const::panic_const_add_overflow(&off_143DC0, v42, v43, v44);
          *(_QWORD *)&v99 = v127;
          *(_QWORD *)&v100 = v126;
          *((_QWORD *)&v99 + 1) = v127;
          *((_QWORD *)&v100 + 1) = v127 + v128;
          v46 = v95;
          v47 = core::slice::index::range(
                  v45,
                  v36,
                  v95,
                  &anon_728c1a3e36a105da66b25bdb8b167723_13_llvm_12607918655597418711);
          v49 = v48;
          v95 = v47;
          v50 = (char *)src[1];
          v51 = (char *)src[1] + v47;
          v22 = (_BYTE *)(&dword_0 + 1);
          core::slice::raw::from_raw_parts::precondition_check((char *)src[1] + v47, 1LL, 1LL, v48 - v47);
          v130[1] = v100;
          v130[0] = v99;
          *(_QWORD *)v129 = v51;
          *(_QWORD *)&v129[8] = &v50[v49];
          *(_QWORD *)&v129[16] = src;
          *(_QWORD *)&v129[24] = v49;
          *(_QWORD *)&v129[32] = v46 - v49;
          <alloc::vec::splice::Splice<I,A> as core::ops::drop::Drop>::drop(v129);
          v2 = v92;
          <alloc::vec::drain::Drain<T,A> as core::ops::drop::Drop>::drop(v129);
          <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(v130);
        }
        v33 = *(_QWORD *)(*((_QWORD *)v2 + 1) + 112LL);
        v39 = __CFADD__(v33, v35);
        v35 += v33;
        if ( v39 )
        {
          v87 = &off_143DD8;
          goto LABEL_240;
        }
        v28 = v95;
        if ( v35 >= v95 )
        {
          if ( v95 >= v35 )
            goto LABEL_98;
          goto LABEL_99;
        }
      }
      v28 = v95;
      if ( v95 >= v35 )
      {
LABEL_98:
        v95 = v35;
        v28 = v35;
      }
LABEL_99:
      v57 = v93;
LABEL_100:
      v116 = v97;
      v117 = v34;
      v118 = v57;
      LODWORD(v119) = 0;
      if ( !(v97 | v34) )
      {
        v58 = 0LL;
        v59 = v97;
        goto LABEL_118;
      }
      if ( (*(_BYTE *)(*((_QWORD *)v2 + 1) + 106LL) & 1) == 0 )
        goto LABEL_110;
      if ( v28 < 0 )
        goto LABEL_235;
      v60 = src[1];
      if ( !src[1] )
        goto LABEL_235;
      *(_QWORD *)&v99 = 1LL;
      v93 = v28;
      *((_QWORD *)&v99 + 1) = v28;
      core::iter::range::<impl core::iter::traits::iterator::Iterator for core::ops::range::Range<A>>::size_hint(
        v129,
        &v99);
      v61 = v129[0] & 1;
      v62 = (*(_QWORD *)v129 >> 1) + v61 == 0;
      v63 = (*(_QWORD *)v129 >> 1) + v61;
      v64 = v93;
      if ( !v62 )
      {
        v65 = v99;
        while ( v65 )
        {
          if ( v65 >= v64 )
            core::panicking::panic_bounds_check(v65, v93, &off_143F88);
          --v63;
          core::intrinsics::copy_nonoverlapping::precondition_check(&v60[v65], v129, 1LL, 1LL, 1LL);
          v129[0] = v60[v65];
          core::intrinsics::copy::precondition_check(&v60[v65 - 1], &v60[v65], 1LL);
          v60[v65] = v60[v65 - 1];
          core::intrinsics::copy_nonoverlapping::precondition_check(v129, &v60[v65 - 1], 1LL, 1LL, 1LL);
          v60[v65 - 1] = v129[0];
          v65 += 2LL;
          v64 = v93;
          if ( !v63 )
            goto LABEL_110;
        }
        v86 = &off_143F70;
LABEL_197:
        v107 = v86;
LABEL_198:
        core::panicking::panic_const::panic_const_sub_overflow(v107);
      }
LABEL_110:
      v2 = v92;
      v66 = *((_QWORD *)v92 + 1);
      if ( *(_BYTE *)(v66 + 80) == 7 )
      {
        v59 = v116;
        v58 = v117;
        v57 = v118;
      }
      else
      {
        v67 = src[1];
        if ( !src[1] || (v68 = v95, (v95 & 0x8000000000000000LL) != 0LL) )
          core::panicking::panic_nounwind(anon_965c7e9797bf363381d1deac3dc9c421_2_llvm_809249241883912370, 162LL);
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(v129, v95, 0LL);
        v69 = *(_QWORD *)&v129[8];
        if ( *(_QWORD *)v129 )
          alloc::raw_vec::handle_error(*(_QWORD *)&v129[8], *(_QWORD *)&v129[16]);
        v70 = *(void **)&v129[16];
        core::intrinsics::copy_nonoverlapping::precondition_check(v67, *(_QWORD *)&v129[16], 1LL, 1LL, v68);
        memcpy(v70, v67, v68);
        v133[0] = v69;
        v133[1] = v70;
        v133[2] = v68;
        uu_dd::blocks::conv_block_unblock_helper(&v157, v133, v66 + 80, &v116);
        if ( src[0] )
          _rust_dealloc(src[1], src[0], 1LL);
        v95 = v158;
        *(_OWORD *)src = v157;
        v59 = v116;
        v58 = v117;
        v57 = v118;
        v2 = v92;
      }
LABEL_118:
      v71 = v119;
      if ( !v59 && !v58 )
        goto LABEL_150;
      if ( !src[1] || (v95 & 0x8000000000000000LL) != 0LL )
        core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
      v72 = v58;
      if ( *(_QWORD *)v125 == 0x8000000000000000LL )
      {
        v22 = &v125[8];
        uu_dd::Output::write_blocks(v135, (__int64)&v125[8], (__int64)src[1], v95);
      }
      else
      {
        v22 = v125;
        uu_dd::bufferedoutput::BufferedOutput::write_blocks(v135, v125);
      }
      if ( v135[0] )
        break;
      v73 = v135[2];
      v74 = v135[3];
      v93 = v135[4];
      v97 = v135[5];
      if ( (v91 & 1) != 0 )
      {
        if ( (__int64)v115 < 0 )
          core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v88, &unk_143B90, &off_143EC8);
        if ( v57 < 0 )
          core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v88, &unk_143B90, &off_143EE0);
        v22 = v115;
        uu_dd::Input::discard_cache(v92, (off_t)v115, v57);
      }
      v39 = __CFADD__(v57, v115);
      v115 += v57;
      if ( v39 )
      {
        v87 = &off_143EF8;
        goto LABEL_240;
      }
      if ( (v90 & 1) != 0 )
      {
        if ( __PAIR128__(v122, v114) >= 0x8000000000000000LL )
          core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v88, &unk_143B90, &off_143F10);
        if ( __PAIR128__(v74, v73) >= 0x8000000000000000LL )
          core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v88, &unk_143B90, &off_143F28);
        v22 = (char *)v114;
        uu_dd::Output::discard_cache((__int64)&v125[16 * (*(_QWORD *)v125 != 0x8000000000000000LL) + 8], v114, v73);
      }
      v39 = __CFADD__(v73, v114);
      v114 += v73;
      v75 = v39;
      v39 = __CFADD__(v39, v122) | __CFADD__(v74, v39 + v122);
      v122 += v74 + v75;
      if ( v39 )
      {
        v87 = &off_143F40;
        goto LABEL_240;
      }
      v39 = __CFADD__(v59, v103);
      v103 += v59;
      v28 = v104;
      if ( v39 )
      {
        v87 = &anon_bff3183e4c196cdaa7c150408020b06b_90_llvm_10102786401241998662;
        goto LABEL_240;
      }
      v39 = __CFADD__(v72, v102);
      v102 += v72;
      if ( v39 )
      {
        v87 = &anon_bff3183e4c196cdaa7c150408020b06b_91_llvm_10102786401241998662;
        goto LABEL_240;
      }
      v39 = __CFADD__(v71, v98);
      v98 += v71;
      if ( v39 )
      {
        v87 = &anon_bff3183e4c196cdaa7c150408020b06b_92_llvm_10102786401241998662;
        goto LABEL_240;
      }
      v39 = __CFADD__(v57, v109);
      v109 += v57;
      if ( v39 )
      {
        v87 = &anon_bff3183e4c196cdaa7c150408020b06b_93_llvm_10102786401241998662;
        goto LABEL_240;
      }
      *((_QWORD *)&v26 + 1) = v93;
      v39 = __CFADD__(v93, v113);
      v113 += v93;
      if ( v39 )
      {
        v87 = &anon_bff3183e4c196cdaa7c150408020b06b_96_llvm_10102786401241998662;
        goto LABEL_240;
      }
      *((_QWORD *)&v26 + 1) = v97;
      v39 = __CFADD__(v97, v112);
      v112 += v97;
      if ( v39 )
      {
        v87 = &anon_bff3183e4c196cdaa7c150408020b06b_97_llvm_10102786401241998662;
        goto LABEL_240;
      }
      v39 = __CFADD__(v73, v105);
      v105 += v73;
      v76 = v39;
      v39 = __CFADD__(v39, v104) | __CFADD__(v74, v39 + v104);
      v28 = v74 + v76 + v104;
      v104 = v28;
      if ( v39 )
      {
        v87 = &anon_bff3183e4c196cdaa7c150408020b06b_98_llvm_10102786401241998662;
        goto LABEL_240;
      }
      v77 = 0;
      v78 = *((_BYTE *)v110[0] + 16);
      *((_BYTE *)v110[0] + 16) = 0;
      if ( v78 == 1 )
        goto LABEL_146;
      if ( v78 == 2 )
      {
        v77 = 1;
LABEL_146:
        v79 = std::time::Instant::elapsed(&v120);
        v143 = v103;
        v144 = v102;
        v145 = v109;
        v146 = v98;
        v147 = v105;
        v148 = v104;
        v149 = v113;
        v150 = v112;
        v141 = v79;
        v142 = v80;
        v151 = v77;
        v22 = (char *)&v106;
        std::sync::mpmc::Sender<T>::send(v167, &v106, &v141);
      }
    }
    v38 = v135[1];
LABEL_158:
    v2 = v92;
LABEL_159:
    core::ptr::drop_in_place<uu_dd::BlockWriter>(v125);
    core::ptr::drop_in_place<core::result::Result<uu_dd::progress::SignalHandler,std::io::error::Error>>(&v161);
    if ( !_InterlockedDecrement64(v110[0]) )
      alloc::sync::Arc<T,A>::drop_slow(v110);
    if ( src[0] )
      _rust_dealloc(src[1], src[0], 1LL);
    v82 = 0;
    goto LABEL_164;
  }
  if ( (*(_BYTE *)(v11 + 69) & 1) != 0 )
  {
    if ( *(_DWORD *)a1 )
    {
      v81 = 0LL;
    }
    else
    {
      std::fs::File::metadata(v129, a1 + 4);
      if ( *(_QWORD *)v129 == 2LL )
        goto LABEL_172;
      v81 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v131 >= 0 )
        v81 = v131;
    }
    uu_dd::Input::discard_cache((_DWORD *)a1, 0LL, v81);
    v11 = *(_QWORD *)(a1 + 8);
  }
  if ( (*(_BYTE *)(v11 + 156) & 1) == 0 )
    goto LABEL_180;
  if ( *(_BYTE *)v96 != 1 )
  {
    v83 = 0LL;
LABEL_179:
    uu_dd::Output::discard_cache((__int64)v96, 0LL, v83);
    goto LABEL_180;
  }
  std::fs::File::metadata(v129, (char *)v96 + 4);
  if ( *(_QWORD *)v129 != 2LL )
  {
    v83 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v131 >= 0 )
      v83 = v131;
    goto LABEL_179;
  }
LABEL_172:
  v38 = *(_QWORD *)&v129[8];
  v82 = 1;
  if ( *(_QWORD *)&v129[8] )
  {
LABEL_164:
    core::ptr::drop_in_place<std::thread::JoinInner<()>>(&v123);
    goto LABEL_181;
  }
LABEL_180:
  v166 = *((_QWORD *)v96 + 2);
  v165 = *v96;
  v164 = 0x8000000000000000LL;
  memset(v159, 0, sizeof(v159));
  memset(v160, 0, sizeof(v160));
  v139 = v123;
  v140 = v124;
  v82 = 0;
  v38 = uu_dd::finalize(
          (unsigned int)&v164,
          (unsigned int)v159,
          (unsigned int)v160,
          v120,
          v121,
          (unsigned int)&v106,
          (__int64)&v139,
          (v89 & 1) == 0);
LABEL_181:
  if ( (_QWORD)v106 )
  {
    if ( (_QWORD)v106 == 1LL )
      std::sync::mpmc::counter::Sender<C>::release((char *)&v106 + 8);
    else
      std::sync::mpmc::counter::Sender<C>::release((char *)&v106 + 8);
  }
  else
  {
    std::sync::mpmc::counter::Sender<C>::release((char *)&v106 + 8);
  }
  if ( v82 )
  {
    v84 = (__int64)v96;
    if ( (unsigned __int8)(*(_BYTE *)v96 - 1) <= 1u )
    {
      std::sys::pal::unix::fs::debug_assert_fd_is_open(*((unsigned int *)v96 + 1));
      close(*(_DWORD *)(v84 + 4));
    }
  }
LABEL_189:
  std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)v2[1]);
  close(v2[1]);
  return v38;
}
