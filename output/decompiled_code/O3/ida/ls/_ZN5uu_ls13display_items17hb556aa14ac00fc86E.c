__int64 __fastcall uu_ls::display_items(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  unsigned __int64 v6; // r13
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r15
  bool v11; // r12
  __int64 v12; // r14
  int v13; // eax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 *v20; // r15
  __int64 v21; // rax
  const char *v22; // rax
  _BOOL8 v23; // rax
  const char *v24; // rcx
  __int64 v25; // rax
  int v26; // r8d
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rbx
  _QWORD *v30; // rax
  __int64 v31; // r15
  __int64 v32; // r12
  unsigned __int8 has_acl; // r14
  _BOOL8 v34; // rax
  const char *v35; // rcx
  const char *v36; // rax
  char v37; // al
  __int64 v38; // r15
  char v39; // al
  unsigned __int64 v40; // r13
  unsigned int v41; // r14d
  __int64 v42; // r15
  char v43; // al
  __int64 v44; // r15
  char v45; // al
  __int64 v46; // r14
  __int64 v47; // r12
  char v48; // al
  __int64 v49; // rbx
  __int64 v50; // rsi
  const char *v51; // rdi
  unsigned __int64 v52; // rsi
  bool v53; // cf
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rsi
  const char *v56; // r12
  __int64 v57; // r14
  char v58; // al
  const char *v59; // r14
  __int64 system_time; // rax
  int v61; // edx
  unsigned __int32 v62; // r14d
  __int64 v63; // r15
  int v64; // r12d
  unsigned __int32 v65; // eax
  unsigned __int32 v66; // ebx
  unsigned __int64 v67; // r15
  __int64 v68; // rax
  __int64 v69; // rax
  int v70; // r8d
  char v71; // r14
  _BYTE *v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rbx
  __int64 v75; // r15
  __int64 v76; // r13
  __int64 v77; // r14
  __int64 v78; // rdi
  __int64 v79; // rdx
  __int64 v80; // rsi
  __int64 v81; // rsi
  __int64 v82; // rdi
  __int64 v83; // rbp
  __int64 v84; // r12
  __int64 v85; // r13
  __int64 v86; // r13
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rcx
  char v90; // al
  __int64 v91; // rax
  __int64 v92; // rbx
  __int64 v93; // r13
  __int32 v94; // eax
  __int32 v95; // r13d
  unsigned __int32 v96; // r12d
  unsigned __int32 v97; // r15d
  char v98; // r14
  int v99; // r14d
  int v100; // r14d
  __int64 v101; // rax
  __int64 v102; // r15
  bool v103; // zf
  __m256i *v104; // r14
  bool v105; // r13
  int v106; // r12d
  bool v107; // zf
  int v108; // r14d
  __int64 v109; // rcx
  __int64 v110; // r15
  __int64 v111; // r12
  __int64 v112; // rsi
  __int64 v113; // rax
  __int64 v114; // rcx
  __int64 v115; // rbx
  __int64 v116; // rbx
  _QWORD *v117; // r14
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // r15
  _QWORD *v122; // r12
  __int64 v123; // rsi
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rbx
  __int64 v127; // rbp
  unsigned __int16 v128; // r15
  unsigned __int64 v129; // r14
  __int64 v130; // rax
  int v131; // r12d
  __int64 v132; // rax
  _OWORD *v133; // rax
  __int128 v134; // xmm0
  __int64 v135; // rsi
  __int64 v136; // rdi
  __int64 v137; // rax
  _OWORD *v138; // rax
  __int128 v139; // xmm0
  _BOOL8 v140; // r8
  __int64 v141; // rsi
  __int64 v142; // rdx
  __int64 v143; // rax
  __int64 v144; // r12
  __int64 v145; // r15
  unsigned __int64 v146; // rbx
  __int64 v147; // rax
  __int64 v148; // rax
  _OWORD *v149; // rax
  __int128 v150; // xmm0
  __int64 v151; // rax
  _QWORD *v152; // r15
  unsigned __int64 v153; // rbx
  __int64 v154; // rsi
  _QWORD *v155; // rbp
  unsigned __int64 v156; // r14
  __int64 v157; // rsi
  __int64 v158; // r14
  __int64 v159; // r15
  __int64 v160; // rax
  char v162; // [rsp+Fh] [rbp-2E9h] BYREF
  __m256i v163; // [rsp+10h] [rbp-2E8h] BYREF
  __m256i *v164; // [rsp+30h] [rbp-2C8h]
  __int64 (__fastcall **v165)(); // [rsp+38h] [rbp-2C0h]
  __int64 v166; // [rsp+40h] [rbp-2B8h]
  char v167; // [rsp+48h] [rbp-2B0h]
  __m256i v168; // [rsp+50h] [rbp-2A8h] BYREF
  __m256i *v169; // [rsp+70h] [rbp-288h]
  __int64 (__fastcall **v170)(); // [rsp+78h] [rbp-280h]
  _BYTE *v171; // [rsp+80h] [rbp-278h]
  __int64 (__fastcall *v172)(); // [rsp+88h] [rbp-270h]
  __int64 v173; // [rsp+90h] [rbp-268h] BYREF
  int v174; // [rsp+9Ch] [rbp-25Ch]
  _BYTE v175[24]; // [rsp+A0h] [rbp-258h] BYREF
  __int64 v176; // [rsp+B8h] [rbp-240h]
  __int128 v177; // [rsp+C8h] [rbp-230h] BYREF
  __int64 v178; // [rsp+D8h] [rbp-220h]
  __m256i v179; // [rsp+E0h] [rbp-218h] BYREF
  const char *v180; // [rsp+100h] [rbp-1F8h]
  __int64 v181; // [rsp+108h] [rbp-1F0h]
  char v182; // [rsp+11Ch] [rbp-1DCh]
  char v183; // [rsp+11Dh] [rbp-1DBh]
  char v184; // [rsp+11Eh] [rbp-1DAh]
  char v185; // [rsp+11Fh] [rbp-1D9h]
  __int64 v186; // [rsp+120h] [rbp-1D8h]
  __int64 v187; // [rsp+128h] [rbp-1D0h]
  unsigned __int8 v188; // [rsp+135h] [rbp-1C3h]
  unsigned __int8 v189; // [rsp+136h] [rbp-1C2h]
  bool v190; // [rsp+137h] [rbp-1C1h]
  __int64 v191; // [rsp+138h] [rbp-1C0h]
  __int64 v192; // [rsp+140h] [rbp-1B8h]
  __int64 v193; // [rsp+148h] [rbp-1B0h] BYREF
  __int64 v194; // [rsp+150h] [rbp-1A8h]
  __int64 v195; // [rsp+158h] [rbp-1A0h]
  __int128 v196; // [rsp+160h] [rbp-198h] BYREF
  __int64 v197; // [rsp+170h] [rbp-188h]
  __int64 v198; // [rsp+178h] [rbp-180h]
  __int64 v199; // [rsp+180h] [rbp-178h]
  _QWORD *v200; // [rsp+188h] [rbp-170h]
  __m128 v201; // [rsp+190h] [rbp-168h]
  __m256i v202; // [rsp+1A0h] [rbp-158h] BYREF
  unsigned __int64 v203; // [rsp+1C0h] [rbp-138h]
  unsigned __int64 v204; // [rsp+1C8h] [rbp-130h]
  unsigned __int64 v205; // [rsp+1D0h] [rbp-128h]
  unsigned __int64 v206; // [rsp+1D8h] [rbp-120h]
  __int64 v207; // [rsp+1E0h] [rbp-118h]
  __int64 v208; // [rsp+1E8h] [rbp-110h]
  const char *v209; // [rsp+1F0h] [rbp-108h] BYREF
  __int64 v210; // [rsp+1F8h] [rbp-100h]
  __int64 v211; // [rsp+200h] [rbp-F8h]
  __int64 v212; // [rsp+208h] [rbp-F0h]
  __int64 v213; // [rsp+210h] [rbp-E8h]
  const char *v214; // [rsp+218h] [rbp-E0h] BYREF
  __int64 v215; // [rsp+220h] [rbp-D8h]
  __m256i v216; // [rsp+228h] [rbp-D0h] BYREF
  const char *v217; // [rsp+248h] [rbp-B0h]
  __int64 v218; // [rsp+250h] [rbp-A8h]
  __int64 v219; // [rsp+258h] [rbp-A0h]
  __m256i *v220; // [rsp+260h] [rbp-98h]
  unsigned __int64 v221; // [rsp+268h] [rbp-90h]
  unsigned __int64 v222; // [rsp+270h] [rbp-88h]
  __int64 v223; // [rsp+278h] [rbp-80h]
  __int128 v224; // [rsp+280h] [rbp-78h] BYREF
  __int64 v225; // [rsp+290h] [rbp-68h]
  __int128 v226; // [rsp+298h] [rbp-60h] BYREF
  __int64 v227; // [rsp+2A8h] [rbp-50h]
  _BYTE v228[72]; // [rsp+2B0h] [rbp-48h] BYREF

  v200 = a6;
  v191 = a5;
  v187 = a3;
  v8 = a3 + 245;
  v9 = 304 * a2;
  v186 = a1;
  v10 = a1;
  do
  {
    v192 = v9;
    if ( !v9 )
      break;
    v11 = 0;
    uucore::features::quoting_style::escape_name_inner(&v168, *(_QWORD *)(v10 + 8), *(_QWORD *)(v10 + 16), v8, 0LL);
    if ( v168.m256i_i64[2] )
      v11 = *(_BYTE *)v168.m256i_i64[1] == 39;
    if ( v168.m256i_i64[0] )
      _rust_dealloc(v168.m256i_i64[1], v168.m256i_i64[0], 1LL);
    v10 += 304LL;
    v9 = v192 - 304;
  }
  while ( !v11 );
  v12 = v187;
  v13 = *(unsigned __int8 *)(v187 + 248);
  v198 = a4;
  if ( v13 == 1 )
  {
    uu_ls::calculate_padding_collection(&v202, v186, a2, v187, a4);
    v190 = *(_WORD *)(v12 + 233) == 0;
    v14 = 4LL;
    if ( (*(_QWORD *)(v12 + 184) ^ 0x8000000000000000LL) < 4 )
      v14 = *(_QWORD *)(v12 + 184) ^ 0x8000000000000000LL;
    v221 = v14;
    if ( a2 )
    {
      LOBYTE(v208) = *(_BYTE *)(v187 + 238);
      v185 = *(_BYTE *)(v187 + 226);
      v189 = *(_BYTE *)(v187 + 227);
      v184 = *(_BYTE *)(v187 + 225);
      v183 = *(_BYTE *)(v187 + 235);
      v182 = *(_BYTE *)(v187 + 224);
      v223 = *(_QWORD *)(v187 + 208);
      v188 = *(_BYTE *)(v187 + 241);
      v220 = *(__m256i **)(v187 + 192);
      v219 = *(_QWORD *)(v187 + 200);
      v218 = v187 + 250;
      v15 = 304 * a2;
      do
      {
        v213 = v15;
        if ( !v190 )
        {
          uu_ls::display_additional_leading_info((__int64)&v168, v186, v202.m256i_i64[0], v207, v187, a4);
          v16 = v168.m256i_i64[1];
          if ( v168.m256i_i64[0] == 0x8000000000000000LL )
            return v16;
          *(_OWORD *)v163.m256i_i8 = *(_OWORD *)v168.m256i_i8;
          v163.m256i_i64[2] = v168.m256i_i64[2];
          v179.m256i_i64[0] = (__int64)&v163;
          v179.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
          v168.m256i_i64[0] = (__int64)anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
          v168.m256i_i64[1] = 1LL;
          v169 = 0LL;
          v168.m256i_i64[2] = (__int64)&v179;
          v168.m256i_i64[3] = 1LL;
          v17 = std::io::Write::write_fmt(a4, &v168);
          if ( v17 )
          {
            v168.m256i_i64[0] = 0x8000000000000000LL;
            v168.m256i_i64[3] = v17;
            v149 = (_OWORD *)_rust_alloc(32LL, 8LL);
            if ( !v149 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            v16 = (__int64)v149;
            v150 = *(_OWORD *)v168.m256i_i8;
            v149[1] = *(_OWORD *)&v168.m256i_u64[2];
            *v149 = v150;
            if ( v163.m256i_i64[0] )
              _rust_dealloc(v163.m256i_i64[1], v163.m256i_i64[0], 1LL);
            return v16;
          }
          if ( v163.m256i_i64[0] )
            _rust_dealloc(v163.m256i_i64[1], v163.m256i_i64[0], 1LL);
        }
        v193 = 0LL;
        v194 = 1LL;
        v195 = 0LL;
        if ( *((_BYTE *)v200 + 29) != 2 )
        {
          v18 = lscolors::LsColors::style_for_indicator(*v200, 0LL);
          if ( v18 )
          {
            *(__int64 *)((char *)&v179.m256i_i64[1] + 5) = *(_QWORD *)(v18 + 13);
            *(_OWORD *)v179.m256i_i8 = *(_OWORD *)v18;
            *(__int64 *)((char *)&v168.m256i_i64[1] + 5) = *(__int64 *)((char *)&v179.m256i_i64[1] + 5);
            *(_OWORD *)v168.m256i_i8 = *(_OWORD *)v179.m256i_i8;
            uu_ls::colors::StyleManager::get_style_code(&v163, v200, &v168);
          }
          else
          {
            v163.m256i_i64[0] = 0LL;
            *(_OWORD *)&v163.m256i_u64[1] = 1uLL;
          }
          v179.m256i_i64[0] = (__int64)&v163;
          v179.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
          v168.m256i_i64[0] = (__int64)anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
          v168.m256i_i64[1] = 1LL;
          v169 = 0LL;
          v168.m256i_i64[2] = (__int64)&v179;
          v168.m256i_i64[3] = 1LL;
          if ( (unsigned __int8)core::fmt::write(&v193, &off_1AC0E8, &v168) )
            core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v162, &unk_1AC1A0, &off_1AC858);
          if ( v163.m256i_i64[0] )
            _rust_dealloc(v163.m256i_i64[1], v163.m256i_i64[0], 1LL);
        }
        if ( (_BYTE)v208 )
        {
          v19 = v195;
          if ( (unsigned __int64)(v193 - v195) <= 1 )
          {
            alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v193, v195, 2LL);
            v19 = v195;
          }
          *(_WORD *)(v194 + v19) = 8224;
          v195 += 2LL;
        }
        v20 = (__int64 *)(v186 + 72);
        v21 = *(_QWORD *)(v186 + 72);
        if ( v21 == 3 )
        {
          core::cell::once::OnceCell<T>::try_init(v186 + 72, v186, a4);
          v21 = *v20;
        }
        if ( v21 == 2 )
        {
          if ( (*(_BYTE *)(v186 + 248) & 1) != 0 )
          {
            v22 = (const char *)&unk_2F27B;
            switch ( __ROL4__((*(_DWORD *)(v186 + 252) & 0xF000) - 0x2000, 19) )
            {
              case 0:
                v22 = aC_0;
                break;
              case 1:
                v22 = (const char *)&unk_2F27C;
                break;
              case 2:
                break;
              case 4:
                v22 = (const char *)&unk_2E1EC;
                break;
              default:
                goto LABEL_34;
            }
          }
          else
          {
LABEL_34:
            v22 = asc_2F27D;
          }
          v214 = v22;
          v215 = 1LL;
          v23 = *(_QWORD *)(v186 + 64) >= 2uLL;
          v24 = (_BYTE *)(&dword_0 + 1);
          if ( *(_QWORD *)(v186 + 64) >= 2uLL )
            v24 = asc_2D85D;
          *(_QWORD *)&v196 = v24;
          *((_QWORD *)&v196 + 1) = v23;
          *(_QWORD *)&v177 = asc_2F272;
          *((_QWORD *)&v177 + 1) = 1LL;
          v179.m256i_i64[0] = (__int64)&v177;
          v179.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
          *(_OWORD *)&v179.m256i_u64[2] = v202.m256i_u64[1];
          v168.m256i_i64[0] = 2LL;
          v168.m256i_i64[2] = 1LL;
          v168.m256i_i64[3] = 1LL;
          v169 = 0LL;
          v170 = (__int64 (__fastcall **)())&qword_20;
          LOBYTE(v171) = 1;
          v163.m256i_i64[0] = (__int64)anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
          v163.m256i_i64[1] = 1LL;
          v164 = &v168;
          v165 = (__int64 (__fastcall **)())(&dword_0 + 1);
          v163.m256i_i64[2] = (__int64)&v179;
          v163.m256i_i64[3] = 2LL;
          alloc::fmt::format::format_inner(v175, &v163);
          v168.m256i_i64[0] = (__int64)&v214;
          v168.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
          v168.m256i_i64[2] = (__int64)&v196;
          v168.m256i_i64[3] = (__int64)<&T as core::fmt::Display>::fmt;
          v169 = (__m256i *)v175;
          v170 = (__int64 (__fastcall **)())<alloc::string::String as core::fmt::Display>::fmt;
          v163.m256i_i64[0] = (__int64)&unk_1AC9D8;
          v163.m256i_i64[1] = 3LL;
          v164 = 0LL;
          v163.m256i_i64[2] = (__int64)&v168;
          v163.m256i_i64[3] = 3LL;
          if ( (unsigned __int8)core::fmt::write(&v193, &off_1AC0E8, &v163) )
            core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v162, &unk_1AC1A0, &off_1ACA08);
          if ( *(_QWORD *)v175 )
            _rust_dealloc(*(_QWORD *)&v175[8], *(_QWORD *)v175, 1LL);
          if ( v185 )
          {
            *(_QWORD *)&v177 = asc_2F272;
            *((_QWORD *)&v177 + 1) = 1LL;
            v179.m256i_i64[0] = (__int64)&v177;
            v179.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
            *(_OWORD *)&v179.m256i_u64[2] = v202.m256i_u64[2];
            v168.m256i_i64[0] = 2LL;
            v168.m256i_i64[2] = 1LL;
            v168.m256i_i64[3] = 1LL;
            v169 = 0LL;
            v170 = (__int64 (__fastcall **)())&qword_20;
            LOBYTE(v171) = 0;
            v163.m256i_i64[0] = (__int64)anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
            v163.m256i_i64[1] = 1LL;
            v164 = &v168;
            v165 = (__int64 (__fastcall **)())(&dword_0 + 1);
            v163.m256i_i64[2] = (__int64)&v179;
            v163.m256i_i64[3] = 2LL;
            alloc::fmt::format::format_inner(v175, &v163);
            v163.m256i_i64[0] = (__int64)v175;
            v163.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
            v168.m256i_i64[0] = (__int64)&off_1AC8C8;
            v168.m256i_i64[1] = 1LL;
            v169 = 0LL;
            v168.m256i_i64[2] = (__int64)&v163;
            v168.m256i_i64[3] = 1LL;
            if ( (unsigned __int8)core::fmt::write(&v193, &off_1AC0E8, &v168) )
              core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v162, &unk_1AC1A0, &off_1ACA20);
            if ( *(_QWORD *)v175 )
              _rust_dealloc(*(_QWORD *)&v175[8], *(_QWORD *)v175, 1LL);
          }
          if ( v184 )
          {
            *(_QWORD *)&v177 = asc_2F272;
            *((_QWORD *)&v177 + 1) = 1LL;
            v179.m256i_i64[0] = (__int64)&v177;
            v179.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
            *(_OWORD *)&v179.m256i_u64[2] = v202.m256i_u64[3];
            v168.m256i_i64[0] = 2LL;
            v168.m256i_i64[2] = 1LL;
            v168.m256i_i64[3] = 1LL;
            v169 = 0LL;
            v170 = (__int64 (__fastcall **)())&qword_20;
            LOBYTE(v171) = 0;
            v163.m256i_i64[0] = (__int64)anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
            v163.m256i_i64[1] = 1LL;
            v164 = &v168;
            v165 = (__int64 (__fastcall **)())(&dword_0 + 1);
            v163.m256i_i64[2] = (__int64)&v179;
            v163.m256i_i64[3] = 2LL;
            alloc::fmt::format::format_inner(v175, &v163);
            v163.m256i_i64[0] = (__int64)v175;
            v163.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
            v168.m256i_i64[0] = (__int64)&off_1AC8C8;
            v168.m256i_i64[1] = 1LL;
            v169 = 0LL;
            v168.m256i_i64[2] = (__int64)&v163;
            v168.m256i_i64[3] = 1LL;
            if ( (unsigned __int8)core::fmt::write(&v193, &off_1AC0E8, &v168) )
              core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v162, &unk_1AC1A0, &off_1ACA38);
            if ( *(_QWORD *)v175 )
              _rust_dealloc(*(_QWORD *)&v175[8], *(_QWORD *)v175, 1LL);
          }
          if ( v183 )
          {
            v177 = *(_OWORD *)(v186 + 56);
            v179.m256i_i64[0] = (__int64)&v177;
            v179.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
            *(_OWORD *)&v179.m256i_u64[2] = v203;
            v168.m256i_i64[0] = 2LL;
            v168.m256i_i64[2] = 1LL;
            v168.m256i_i64[3] = 1LL;
            v169 = 0LL;
            v170 = (__int64 (__fastcall **)())&qword_20;
            LOBYTE(v171) = 0;
            v163.m256i_i64[0] = (__int64)anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
            v163.m256i_i64[1] = 1LL;
            v164 = &v168;
            v165 = (__int64 (__fastcall **)())(&dword_0 + 1);
            v163.m256i_i64[2] = (__int64)&v179;
            v163.m256i_i64[3] = 2LL;
            alloc::fmt::format::format_inner(v175, &v163);
            v163.m256i_i64[0] = (__int64)v175;
            v163.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
            v168.m256i_i64[0] = (__int64)&off_1AC8C8;
            v168.m256i_i64[1] = 1LL;
            v169 = 0LL;
            v168.m256i_i64[2] = (__int64)&v163;
            v168.m256i_i64[3] = 1LL;
            if ( (unsigned __int8)core::fmt::write(&v193, &off_1AC0E8, &v168) )
              core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v162, &unk_1AC1A0, &off_1ACA50);
            if ( *(_QWORD *)v175 )
              _rust_dealloc(*(_QWORD *)&v175[8], *(_QWORD *)v175, 1LL);
          }
          if ( v182 )
          {
            *(_QWORD *)&v177 = asc_2F272;
            *((_QWORD *)&v177 + 1) = 1LL;
            v179.m256i_i64[0] = (__int64)&v177;
            v179.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
            *(_OWORD *)&v179.m256i_u64[2] = v202.m256i_u64[2];
            v168.m256i_i64[0] = 2LL;
            v168.m256i_i64[2] = 1LL;
            v168.m256i_i64[3] = 1LL;
            v169 = 0LL;
            v170 = (__int64 (__fastcall **)())&qword_20;
            LOBYTE(v171) = 0;
            v163.m256i_i64[0] = (__int64)anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
            v163.m256i_i64[1] = 1LL;
            v164 = &v168;
            v165 = (__int64 (__fastcall **)())(&dword_0 + 1);
            v163.m256i_i64[2] = (__int64)&v179;
            v163.m256i_i64[3] = 2LL;
            alloc::fmt::format::format_inner(v175, &v163);
            v163.m256i_i64[0] = (__int64)v175;
            v163.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
            v168.m256i_i64[0] = (__int64)&off_1AC8C8;
            v168.m256i_i64[1] = 1LL;
            v169 = 0LL;
            v168.m256i_i64[2] = (__int64)&v163;
            v168.m256i_i64[3] = 1LL;
            if ( (unsigned __int8)core::fmt::write(&v193, &off_1AC0E8, &v168) )
              core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v162, &unk_1AC1A0, &off_1ACA68);
            if ( *(_QWORD *)v175 )
              _rust_dealloc(*(_QWORD *)&v175[8], *(_QWORD *)v175, 1LL);
          }
          v168.m256i_i64[0] = 0LL;
          *(_OWORD *)&v168.m256i_u64[1] = 1uLL;
          v25 = ansi_width::ansi_width(v194, v195);
          uu_ls::display_item_name((unsigned int)&v196, v186, v187, 0, v26, (unsigned int)&v168, a4, (__int64)v200, v25);
          *(_QWORD *)v175 = asc_2F272;
          *(_QWORD *)&v175[8] = 1LL;
          v179.m256i_i64[0] = (__int64)v175;
          v179.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
          *(_OWORD *)&v179.m256i_u64[2] = v204;
          v168.m256i_i64[0] = 2LL;
          v168.m256i_i64[2] = 1LL;
          v168.m256i_i64[3] = 1LL;
          v169 = 0LL;
          v170 = (__int64 (__fastcall **)())&qword_20;
          LOBYTE(v171) = 1;
          v163.m256i_i64[0] = (__int64)anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
          v163.m256i_i64[1] = 1LL;
          v164 = &v168;
          v165 = (__int64 (__fastcall **)())(&dword_0 + 1);
          v163.m256i_i64[2] = (__int64)&v179;
          v163.m256i_i64[3] = 2LL;
          alloc::fmt::format::format_inner(&v177, &v163);
          v209 = asc_2F272;
          v210 = 1LL;
          v179.m256i_i64[0] = (__int64)&v209;
          v179.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
          *(_OWORD *)&v179.m256i_u64[2] = 0xCuLL;
          v168.m256i_i64[0] = 2LL;
          v168.m256i_i64[2] = 1LL;
          v168.m256i_i64[3] = 1LL;
          v169 = 0LL;
          v170 = (__int64 (__fastcall **)())&qword_20;
          LOBYTE(v171) = 1;
          v163.m256i_i64[0] = (__int64)anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
          v163.m256i_i64[1] = 1LL;
          v164 = &v168;
          v165 = (__int64 (__fastcall **)())(&dword_0 + 1);
          v163.m256i_i64[2] = (__int64)&v179;
          v163.m256i_i64[3] = 2LL;
          alloc::fmt::format::format_inner(v175, &v163);
          v163.m256i_i64[0] = (__int64)&v177;
          v163.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
          v163.m256i_i64[2] = (__int64)v175;
          v163.m256i_i64[3] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
          v168.m256i_i64[0] = (__int64)&off_1ACA80;
          v168.m256i_i64[1] = 3LL;
          v169 = 0LL;
          v168.m256i_i64[2] = (__int64)&v163;
          v168.m256i_i64[3] = 2LL;
          if ( (unsigned __int8)core::fmt::write(&v193, &off_1AC0E8, &v168) )
            core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v162, &unk_1AC1A0, &off_1ACAB0);
          if ( *(_QWORD *)v175 )
            _rust_dealloc(*(_QWORD *)&v175[8], *(_QWORD *)v175, 1LL);
          if ( (_QWORD)v177 )
            _rust_dealloc(*((_QWORD *)&v177 + 1), v177, 1LL);
          if ( (_BYTE)v208 )
          {
            v27 = v195;
            core::str::<impl str>::trim_matches(*((_QWORD *)&v196 + 1), v197);
            v29 = v28;
            v30 = (_QWORD *)v191;
            v31 = *(_QWORD *)(v191 + 16);
            if ( v31 )
            {
              v30 = (_QWORD *)v191;
              v32 = *(_QWORD *)(16 * v31 + *(_QWORD *)(v191 + 8) - 16) + 2LL;
            }
            else
            {
              v32 = 2LL;
            }
            v76 = v30[6];
            if ( v31 == *v30 )
              alloc::raw_vec::RawVec<T,A>::grow_one(v191);
            v77 = v32 + v27;
            v78 = v191;
            v79 = *(_QWORD *)(v191 + 8);
            v80 = 16 * v31;
            *(_QWORD *)(v79 + v80) = v77 + v76 + 2;
            *(_QWORD *)(v79 + v80 + 8) = v76 + v29 + v77 + 2;
            *(_QWORD *)(v78 + 16) = v31 + 1;
            *(_QWORD *)(v78 + 48) = 0LL;
          }
          v163.m256i_i64[0] = (__int64)&v196;
          v163.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
          v163.m256i_i64[2] = v218;
          v163.m256i_i64[3] = (__int64)<uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
          v168.m256i_i64[0] = (__int64)"\x01";
          v168.m256i_i64[1] = 2LL;
          v169 = 0LL;
          v168.m256i_i64[2] = (__int64)&v163;
          v168.m256i_i64[3] = 2LL;
          if ( (unsigned __int8)core::fmt::write(&v193, &off_1AC0E8, &v168) )
            core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v162, &unk_1AC1A0, &off_1ACAC8);
          v81 = v196;
          if ( (_QWORD)v196 )
          {
            v82 = *((_QWORD *)&v196 + 1);
LABEL_155:
            _rust_dealloc(v82, v81, 1LL);
            goto LABEL_156;
          }
          goto LABEL_156;
        }
        has_acl = uucore::features::fsxattr::has_acl(*(_QWORD *)(v186 + 8), *(_QWORD *)(v186 + 16));
        uucore::features::fs::display_permissions_unix(&v177, *(unsigned int *)(v186 + 128), 1LL);
        v34 = *(_QWORD *)(v186 + 64) >= 2uLL;
        v35 = (_BYTE *)(&dword_0 + 1);
        if ( *(_QWORD *)(v186 + 64) >= 2uLL )
          v35 = asc_2D85D;
        v214 = v35;
        v215 = v34;
        v36 = (_BYTE *)(&dword_0 + 1);
        if ( has_acl )
          v36 = (const char *)&unk_2F27A;
        v209 = v36;
        v210 = has_acl;
        v179.m256i_i64[0] = *(_QWORD *)(v186 + 120);
        v163.m256i_i64[0] = 0LL;
        *(_OWORD *)&v163.m256i_u64[1] = 1uLL;
        v171 = (_BYTE *)&qword_20;
        LOBYTE(v172) = 3;
        v168.m256i_i64[0] = 0LL;
        v168.m256i_i64[2] = 0LL;
        v169 = &v163;
        v170 = &off_1AC0E8;
        v37 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt(&v179, &v168);
        v201.m128_u64[0] = (unsigned __int64)v20;
        if ( v37 )
          core::result::unwrap_failed(aADisplayImplem_0, 55LL, &v162, &unk_1AC1A0, &off_1AC118);
        v38 = v163.m256i_i64[1];
        v199 = v163.m256i_i64[0];
        v196 = *(_OWORD *)&v163.m256i_u64[1];
        v179.m256i_i64[0] = (__int64)&v196;
        v179.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        *(_OWORD *)&v179.m256i_u64[2] = v202.m256i_u64[1];
        v168.m256i_i64[0] = 2LL;
        v168.m256i_i64[2] = 1LL;
        v168.m256i_i64[3] = 1LL;
        v169 = 0LL;
        v170 = (__int64 (__fastcall **)())&qword_20;
        LOBYTE(v171) = 1;
        v163.m256i_i64[0] = (__int64)anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
        v163.m256i_i64[1] = 1LL;
        v164 = &v168;
        v165 = (__int64 (__fastcall **)())(&dword_0 + 1);
        v163.m256i_i64[2] = (__int64)&v179;
        v163.m256i_i64[3] = 2LL;
        alloc::fmt::format::format_inner(v175, &v163);
        v168.m256i_i64[0] = (__int64)&v177;
        v168.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
        v168.m256i_i64[2] = (__int64)&v214;
        v168.m256i_i64[3] = (__int64)<&T as core::fmt::Display>::fmt;
        v169 = (__m256i *)&v209;
        v170 = (__int64 (__fastcall **)())<&T as core::fmt::Display>::fmt;
        v171 = v175;
        v172 = <alloc::string::String as core::fmt::Display>::fmt;
        v163.m256i_i64[0] = (__int64)&unk_1AC870;
        v163.m256i_i64[1] = 4LL;
        v164 = 0LL;
        v163.m256i_i64[2] = (__int64)&v168;
        v163.m256i_i64[3] = 4LL;
        v39 = core::fmt::write(&v193, &off_1AC0E8, &v163);
        v40 = v201.m128_u64[0];
        if ( v39 )
          core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v162, &unk_1AC1A0, &off_1AC8B0);
        if ( *(_QWORD *)v175 )
          _rust_dealloc(*(_QWORD *)&v175[8], *(_QWORD *)v175, 1LL);
        if ( v199 )
          _rust_dealloc(v38, v199, 1LL);
        if ( (_QWORD)v177 )
          _rust_dealloc(*((_QWORD *)&v177 + 1), v177, 1LL);
        v41 = v189;
        if ( v185 )
        {
          uu_ls::display_uname(v175, *(unsigned int *)(v186 + 132), v189);
          v42 = *(_QWORD *)&v175[8];
          v196 = *(_OWORD *)&v175[8];
          v179.m256i_i64[0] = (__int64)&v196;
          v179.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
          *(_OWORD *)&v179.m256i_u64[2] = v202.m256i_u64[2];
          v168.m256i_i64[0] = 2LL;
          v168.m256i_i64[2] = 1LL;
          v168.m256i_i64[3] = 1LL;
          v169 = 0LL;
          v170 = (__int64 (__fastcall **)())&qword_20;
          LOBYTE(v171) = 0;
          v163.m256i_i64[0] = (__int64)anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
          v163.m256i_i64[1] = 1LL;
          v164 = &v168;
          v165 = (__int64 (__fastcall **)())(&dword_0 + 1);
          v163.m256i_i64[2] = (__int64)&v179;
          v163.m256i_i64[3] = 2LL;
          alloc::fmt::format::format_inner(&v177, &v163);
          v163.m256i_i64[0] = (__int64)&v177;
          v163.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
          v168.m256i_i64[0] = (__int64)&off_1AC8C8;
          v168.m256i_i64[1] = 1LL;
          v169 = 0LL;
          v168.m256i_i64[2] = (__int64)&v163;
          v168.m256i_i64[3] = 1LL;
          v43 = core::fmt::write(&v193, &off_1AC0E8, &v168);
          v40 = v201.m128_u64[0];
          if ( v43 )
            core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v162, &unk_1AC1A0, &off_1AC8D8);
          if ( (_QWORD)v177 )
            _rust_dealloc(*((_QWORD *)&v177 + 1), v177, 1LL);
          if ( *(_QWORD *)v175 )
            _rust_dealloc(v42, *(_QWORD *)v175, 1LL);
        }
        if ( v184 )
        {
          uu_ls::display_group(v175, *(unsigned int *)(v186 + 136), v41);
          v44 = *(_QWORD *)&v175[8];
          v196 = *(_OWORD *)&v175[8];
          v179.m256i_i64[0] = (__int64)&v196;
          v179.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
          *(_OWORD *)&v179.m256i_u64[2] = v202.m256i_u64[3];
          v168.m256i_i64[0] = 2LL;
          v168.m256i_i64[2] = 1LL;
          v168.m256i_i64[3] = 1LL;
          v169 = 0LL;
          v170 = (__int64 (__fastcall **)())&qword_20;
          LOBYTE(v171) = 0;
          v163.m256i_i64[0] = (__int64)anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
          v163.m256i_i64[1] = 1LL;
          v164 = &v168;
          v165 = (__int64 (__fastcall **)())(&dword_0 + 1);
          v163.m256i_i64[2] = (__int64)&v179;
          v163.m256i_i64[3] = 2LL;
          alloc::fmt::format::format_inner(&v177, &v163);
          v163.m256i_i64[0] = (__int64)&v177;
          v163.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
          v168.m256i_i64[0] = (__int64)&off_1AC8C8;
          v168.m256i_i64[1] = 1LL;
          v169 = 0LL;
          v168.m256i_i64[2] = (__int64)&v163;
          v168.m256i_i64[3] = 1LL;
          v45 = core::fmt::write(&v193, &off_1AC0E8, &v168);
          v40 = v201.m128_u64[0];
          if ( v45 )
            core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v162, &unk_1AC1A0, &off_1AC8F0);
          if ( (_QWORD)v177 )
            _rust_dealloc(*((_QWORD *)&v177 + 1), v177, 1LL);
          if ( *(_QWORD *)v175 )
            _rust_dealloc(v44, *(_QWORD *)v175, 1LL);
        }
        if ( v183 )
        {
          v177 = *(_OWORD *)(v186 + 56);
          v179.m256i_i64[0] = (__int64)&v177;
          v179.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
          *(_OWORD *)&v179.m256i_u64[2] = v203;
          v168.m256i_i64[0] = 2LL;
          v168.m256i_i64[2] = 1LL;
          v168.m256i_i64[3] = 1LL;
          v169 = 0LL;
          v170 = (__int64 (__fastcall **)())&qword_20;
          LOBYTE(v171) = 0;
          v163.m256i_i64[0] = (__int64)anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
          v163.m256i_i64[1] = 1LL;
          v164 = &v168;
          v165 = (__int64 (__fastcall **)())(&dword_0 + 1);
          v163.m256i_i64[2] = (__int64)&v179;
          v163.m256i_i64[3] = 2LL;
          alloc::fmt::format::format_inner(v175, &v163);
          v163.m256i_i64[0] = (__int64)v175;
          v163.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
          v168.m256i_i64[0] = (__int64)&off_1AC8C8;
          v168.m256i_i64[1] = 1LL;
          v169 = 0LL;
          v168.m256i_i64[2] = (__int64)&v163;
          v168.m256i_i64[3] = 1LL;
          if ( (unsigned __int8)core::fmt::write(&v193, &off_1AC0E8, &v168) )
            core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v162, &unk_1AC1A0, &off_1AC908);
          if ( *(_QWORD *)v175 )
            _rust_dealloc(*(_QWORD *)&v175[8], *(_QWORD *)v175, 1LL);
        }
        if ( v182 )
        {
          uu_ls::display_uname(v175, *(unsigned int *)(v186 + 132), v41);
          v46 = *(_QWORD *)&v175[8];
          v196 = *(_OWORD *)&v175[8];
          v179.m256i_i64[0] = (__int64)&v196;
          v179.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
          *(_OWORD *)&v179.m256i_u64[2] = v202.m256i_u64[2];
          v168.m256i_i64[0] = 2LL;
          v168.m256i_i64[2] = 1LL;
          v168.m256i_i64[3] = 1LL;
          v169 = 0LL;
          v170 = (__int64 (__fastcall **)())&qword_20;
          LOBYTE(v171) = 0;
          v163.m256i_i64[0] = (__int64)anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
          v163.m256i_i64[1] = 1LL;
          v164 = &v168;
          v165 = (__int64 (__fastcall **)())(&dword_0 + 1);
          v163.m256i_i64[2] = (__int64)&v179;
          v163.m256i_i64[3] = 2LL;
          alloc::fmt::format::format_inner(&v177, &v163);
          v163.m256i_i64[0] = (__int64)&v177;
          v163.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
          v168.m256i_i64[0] = (__int64)&off_1AC8C8;
          v168.m256i_i64[1] = 1LL;
          v169 = 0LL;
          v168.m256i_i64[2] = (__int64)&v163;
          v168.m256i_i64[3] = 1LL;
          if ( (unsigned __int8)core::fmt::write(&v193, &off_1AC0E8, &v168) )
            core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v162, &unk_1AC1A0, &off_1AC920);
          if ( (_QWORD)v177 )
            _rust_dealloc(*((_QWORD *)&v177 + 1), v177, 1LL);
          if ( *(_QWORD *)v175 )
            _rust_dealloc(v46, *(_QWORD *)v175, 1LL);
        }
        uu_ls::display_len_or_rdev(&v179, v40, v223, v188);
        v199 = v179.m256i_i64[1];
        v47 = v179.m256i_i64[0];
        if ( v179.m256i_i64[3] == 0x8000000000000000LL )
        {
          v196 = *(_OWORD *)&v179.m256i_u64[1];
          *(_QWORD *)v175 = &v196;
          *(_QWORD *)&v175[8] = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v175[16] = v204;
          v176 = 0LL;
          v168.m256i_i64[0] = 2LL;
          v168.m256i_i64[2] = 1LL;
          v168.m256i_i64[3] = 1LL;
          v169 = 0LL;
          v170 = (__int64 (__fastcall **)())&qword_20;
          LOBYTE(v171) = 1;
          v163.m256i_i64[0] = (__int64)anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
          v163.m256i_i64[1] = 1LL;
          v164 = &v168;
          v165 = (__int64 (__fastcall **)())(&dword_0 + 1);
          v163.m256i_i64[2] = (__int64)v175;
          v163.m256i_i64[3] = 2LL;
          alloc::fmt::format::format_inner(&v177, &v163);
          v163.m256i_i64[0] = (__int64)&v177;
          v163.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
          v168.m256i_i64[0] = (__int64)&off_1AC8C8;
          v168.m256i_i64[1] = 1LL;
          v169 = 0LL;
          v168.m256i_i64[2] = (__int64)&v163;
          v168.m256i_i64[3] = 1LL;
          v48 = core::fmt::write(&v193, &off_1AC0E8, &v168);
          v49 = v199;
          if ( v48 )
            core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v162, &unk_1AC1A0, &off_1AC938);
          v50 = v177;
          if ( (_QWORD)v177 )
          {
            v51 = (const char *)*((_QWORD *)&v177 + 1);
LABEL_115:
            _rust_dealloc(v51, v50, 1LL);
          }
        }
        else
        {
          v211 = v179.m256i_i64[3];
          v212 = v179.m256i_i64[0];
          v222 = v206;
          v52 = v206 + 2;
          if ( v206 >= 0xFFFFFFFFFFFFFFFELL )
            v52 = -1LL;
          v53 = v204 < v52;
          v54 = v204 - v52;
          v55 = 0LL;
          if ( !v53 )
            v55 = v54;
          if ( v205 > v55 )
            v55 = v205;
          v56 = v180;
          v57 = v181;
          v177 = *(_OWORD *)&v179.m256i_u64[1];
          *(_QWORD *)v175 = &v177;
          *(_QWORD *)&v175[8] = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v175[16] = v55;
          v176 = 0LL;
          v168.m256i_i64[0] = 2LL;
          v168.m256i_i64[2] = 1LL;
          v168.m256i_i64[3] = 1LL;
          v169 = 0LL;
          v170 = (__int64 (__fastcall **)())&qword_20;
          LOBYTE(v171) = 1;
          v163.m256i_i64[0] = (__int64)anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
          v163.m256i_i64[1] = 1LL;
          v164 = &v168;
          v165 = (__int64 (__fastcall **)())(&dword_0 + 1);
          v163.m256i_i64[2] = (__int64)v175;
          v163.m256i_i64[3] = 2LL;
          v217 = v180;
          alloc::fmt::format::format_inner(&v196, &v163);
          v209 = v56;
          v210 = v57;
          *(_QWORD *)v175 = &v209;
          *(_QWORD *)&v175[8] = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v175[16] = v222;
          v176 = 0LL;
          v168.m256i_i64[0] = 2LL;
          v168.m256i_i64[2] = 1LL;
          v168.m256i_i64[3] = 1LL;
          v169 = 0LL;
          v170 = (__int64 (__fastcall **)())&qword_20;
          LOBYTE(v171) = 1;
          v163.m256i_i64[0] = (__int64)anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
          v163.m256i_i64[1] = 1LL;
          v164 = &v168;
          v165 = (__int64 (__fastcall **)())(&dword_0 + 1);
          v163.m256i_i64[2] = (__int64)v175;
          v163.m256i_i64[3] = 2LL;
          alloc::fmt::format::format_inner(&v177, &v163);
          v163.m256i_i64[0] = (__int64)&v196;
          v163.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
          v163.m256i_i64[2] = (__int64)&v177;
          v163.m256i_i64[3] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
          v168.m256i_i64[0] = (__int64)&off_1AC950;
          v168.m256i_i64[1] = 2LL;
          v169 = 0LL;
          v168.m256i_i64[2] = (__int64)&v163;
          v168.m256i_i64[3] = 2LL;
          v47 = v212;
          v49 = v199;
          v58 = core::fmt::write(&v193, &off_1AC0E8, &v168);
          v40 = v201.m128_u64[0];
          a4 = v198;
          v59 = v217;
          if ( v58 )
            core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v162, &unk_1AC1A0, &off_1AC970);
          if ( (_QWORD)v177 )
            _rust_dealloc(*((_QWORD *)&v177 + 1), v177, 1LL);
          if ( (_QWORD)v196 )
            _rust_dealloc(*((_QWORD *)&v196 + 1), v196, 1LL);
          v50 = v211;
          if ( v211 )
          {
            v51 = v59;
            goto LABEL_115;
          }
        }
        if ( v47 )
          _rust_dealloc(v49, v47, 1LL);
        system_time = uu_ls::get_system_time(v40, v187);
        if ( v61 == 1000000000
          || (<chrono::datetime::DateTime<chrono::offset::utc::Utc> as core::convert::From<std::time::SystemTime>>::from(
                &v168,
                system_time),
              v62 = v168.m256i_i32[0],
              v63 = v168.m256i_u32[1],
              v64 = v168.m256i_i32[2],
              v65 = <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_utc_datetime(1LL, &v168),
              !v62) )
        {
          v68 = _rust_alloc(3LL, 1LL);
          if ( !v68 )
            alloc::raw_vec::handle_error(1LL, 3LL);
          *(_BYTE *)(v68 + 2) = 63;
          *(_WORD *)v68 = 16191;
          *(_QWORD *)v175 = 3LL;
          *(_QWORD *)&v175[8] = v68;
          *(_QWORD *)&v175[16] = 3LL;
        }
        else
        {
          v66 = v65;
          *(_QWORD *)&v177 = __PAIR64__(v63, v62);
          *((_QWORD *)&v177 + 1) = __PAIR64__(v65, v64);
          if ( v64 <= 999999999 )
          {
            if ( v64 < 0 )
            {
              v64 += 1000000000;
              v67 = v63 + 15778475;
            }
            else
            {
              v67 = v63 + 15778476;
            }
          }
          else if ( (unsigned int)(v64 - 1000000000) <= 0x3B9AC9FF )
          {
            v67 = v63 + 15778476;
            v64 -= 1000000000;
          }
          else
          {
            v64 -= 2000000000;
            v67 = v63 + 15778477;
          }
          v93 = (0xC22E4506728ALL * (unsigned __int128)v67) >> 64;
          v94 = chrono::naive::date::NaiveDate::add_days(v62, (unsigned int)v93);
          if ( !v94
            || (v168.m256i_i32[0] = v94,
                v168.m256i_i32[1] = v67 - 86400 * v93,
                v168.m256i_i32[2] = v64,
                <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_utc_datetime(&v162, &v168),
                (v95 = v168.m256i_i32[0]) == 0) )
          {
            core::option::expect_failed(aDatetimeTimede, 33LL, &off_1ACB30);
          }
          v96 = v168.m256i_u32[1];
          v97 = v168.m256i_u32[2];
          chrono::offset::local::Local::now(&v168);
          v98 = v95 != v168.m256i_i32[0];
          if ( v95 < v168.m256i_i32[0] )
            v98 = -1;
          if ( !v98 )
          {
            v98 = v96 != v168.m256i_i32[1];
            if ( v96 < v168.m256i_i32[1] )
              v98 = -1;
            if ( !v98 )
            {
              v98 = v97 != v168.m256i_i32[2];
              if ( v97 < v168.m256i_i32[2] )
                v98 = -1;
            }
          }
          switch ( v221 )
          {
            case 0uLL:
              chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(v175, &v177, v66);
              v99 = *(_DWORD *)v175;
              v201 = (__m128)*(unsigned __int64 *)&v175[4];
              v179.m256i_i64[0] = 0LL;
              *(_OWORD *)&v179.m256i_u64[1] = 1uLL;
              v166 = 32LL;
              v167 = 3;
              v163.m256i_i64[0] = 0LL;
              v163.m256i_i64[2] = 0LL;
              v164 = &v179;
              v165 = &anon_bf762aac0a3ee1168a8ca35479390a42_0_llvm_1218769951038035509;
              if ( (unsigned __int8)<chrono::offset::fixed::FixedOffset as core::fmt::Debug>::fmt(
                                      (char *)&v177 + 12,
                                      &v163) )
                core::result::unwrap_failed(
                  anon_bf762aac0a3ee1168a8ca35479390a42_1_llvm_1218769951038035509,
                  55LL,
                  &v162,
                  &anon_bf762aac0a3ee1168a8ca35479390a42_4_llvm_1218769951038035509,
                  &anon_bf762aac0a3ee1168a8ca35479390a42_3_llvm_1218769951038035509);
              *(_OWORD *)v168.m256i_i8 = *(_OWORD *)v179.m256i_i8;
              v168.m256i_i64[2] = v179.m256i_i64[2];
              v174 = v99;
              LODWORD(v173) = 1;
              _mm_storel_ps((double *)((char *)&v173 + 4), v201);
              v168.m256i_i32[6] = v66;
              v169 = (__m256i *)aYMDHMSFZ;
              v170 = (__int64 (__fastcall **)())(&dword_14 + 3);
              goto LABEL_191;
            case 1uLL:
              chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(v175, &v177, v66);
              v108 = *(_DWORD *)v175;
              v201 = (__m128)*(unsigned __int64 *)&v175[4];
              v179.m256i_i64[0] = 0LL;
              *(_OWORD *)&v179.m256i_u64[1] = 1uLL;
              v166 = 32LL;
              v167 = 3;
              v163.m256i_i64[0] = 0LL;
              v163.m256i_i64[2] = 0LL;
              v164 = &v179;
              v165 = &anon_bf762aac0a3ee1168a8ca35479390a42_0_llvm_1218769951038035509;
              if ( (unsigned __int8)<chrono::offset::fixed::FixedOffset as core::fmt::Debug>::fmt(
                                      (char *)&v177 + 12,
                                      &v163) )
                core::result::unwrap_failed(
                  anon_bf762aac0a3ee1168a8ca35479390a42_1_llvm_1218769951038035509,
                  55LL,
                  &v162,
                  &anon_bf762aac0a3ee1168a8ca35479390a42_4_llvm_1218769951038035509,
                  &anon_bf762aac0a3ee1168a8ca35479390a42_3_llvm_1218769951038035509);
              *(_OWORD *)v168.m256i_i8 = *(_OWORD *)v179.m256i_i8;
              v168.m256i_i64[2] = v179.m256i_i64[2];
              v174 = v108;
              LODWORD(v173) = 1;
              _mm_storel_ps((double *)((char *)&v173 + 4), v201);
              v168.m256i_i32[6] = v66;
              v169 = (__m256i *)aYMDHM;
              v170 = (__int64 (__fastcall **)())(byte_9 + 5);
              goto LABEL_191;
            case 2uLL:
              chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(v175, &v177, v66);
              v102 = 0LL;
              v103 = v98 == 1;
              v104 = (__m256i *)&unk_2F332;
              if ( v103 )
                v104 = (__m256i *)&unk_2F33B;
              v105 = v103;
              v106 = *(_DWORD *)v175;
              v201 = (__m128)*(unsigned __int64 *)&v175[4];
              v179.m256i_i64[0] = 0LL;
              *(_OWORD *)&v179.m256i_u64[1] = 1uLL;
              v166 = 32LL;
              v167 = 3;
              v163.m256i_i64[0] = 0LL;
              v163.m256i_i64[2] = 0LL;
              v164 = &v179;
              v165 = &anon_bf762aac0a3ee1168a8ca35479390a42_0_llvm_1218769951038035509;
              if ( (unsigned __int8)<chrono::offset::fixed::FixedOffset as core::fmt::Debug>::fmt(
                                      (char *)&v177 + 12,
                                      &v163) )
                core::result::unwrap_failed(
                  anon_bf762aac0a3ee1168a8ca35479390a42_1_llvm_1218769951038035509,
                  55LL,
                  &v162,
                  &anon_bf762aac0a3ee1168a8ca35479390a42_4_llvm_1218769951038035509,
                  &anon_bf762aac0a3ee1168a8ca35479390a42_3_llvm_1218769951038035509);
              goto LABEL_187;
            case 3uLL:
              chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(v175, &v177, v66);
              v102 = 0LL;
              v107 = v98 == 1;
              v104 = (__m256i *)&unk_2F346;
              if ( v107 )
                v104 = (__m256i *)&unk_2F34F;
              v105 = v107;
              v106 = *(_DWORD *)v175;
              v201 = (__m128)*(unsigned __int64 *)&v175[4];
              v179.m256i_i64[0] = 0LL;
              *(_OWORD *)&v179.m256i_u64[1] = 1uLL;
              v166 = 32LL;
              v167 = 3;
              v163.m256i_i64[0] = 0LL;
              v163.m256i_i64[2] = 0LL;
              v164 = &v179;
              v165 = &anon_bf762aac0a3ee1168a8ca35479390a42_0_llvm_1218769951038035509;
              if ( (unsigned __int8)<chrono::offset::fixed::FixedOffset as core::fmt::Debug>::fmt(
                                      (char *)&v177 + 12,
                                      &v163) )
                core::result::unwrap_failed(
                  anon_bf762aac0a3ee1168a8ca35479390a42_1_llvm_1218769951038035509,
                  55LL,
                  &v162,
                  &anon_bf762aac0a3ee1168a8ca35479390a42_4_llvm_1218769951038035509,
                  &anon_bf762aac0a3ee1168a8ca35479390a42_3_llvm_1218769951038035509);
LABEL_187:
              LOBYTE(v102) = v105;
              v101 = 2 * v102 + 9;
              *(_OWORD *)v168.m256i_i8 = *(_OWORD *)v179.m256i_i8;
              v168.m256i_i64[2] = v179.m256i_i64[2];
              v174 = v106;
              LODWORD(v173) = 1;
              _mm_storel_ps((double *)((char *)&v173 + 4), v201);
              v168.m256i_i32[6] = v66;
              v169 = v104;
              goto LABEL_188;
            case 4uLL:
              chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(v175, &v177, v66);
              v100 = *(_DWORD *)v175;
              v201 = (__m128)*(unsigned __int64 *)&v175[4];
              v179.m256i_i64[0] = 0LL;
              *(_OWORD *)&v179.m256i_u64[1] = 1uLL;
              v166 = 32LL;
              v167 = 3;
              v163.m256i_i64[0] = 0LL;
              v163.m256i_i64[2] = 0LL;
              v164 = &v179;
              v165 = &anon_bf762aac0a3ee1168a8ca35479390a42_0_llvm_1218769951038035509;
              if ( (unsigned __int8)<chrono::offset::fixed::FixedOffset as core::fmt::Debug>::fmt(
                                      (char *)&v177 + 12,
                                      &v163) )
                core::result::unwrap_failed(
                  anon_bf762aac0a3ee1168a8ca35479390a42_1_llvm_1218769951038035509,
                  55LL,
                  &v162,
                  &anon_bf762aac0a3ee1168a8ca35479390a42_4_llvm_1218769951038035509,
                  &anon_bf762aac0a3ee1168a8ca35479390a42_3_llvm_1218769951038035509);
              *(_OWORD *)v168.m256i_i8 = *(_OWORD *)v179.m256i_i8;
              v168.m256i_i64[2] = v179.m256i_i64[2];
              v174 = v100;
              LODWORD(v173) = 1;
              _mm_storel_ps((double *)((char *)&v173 + 4), v201);
              v168.m256i_i32[6] = v66;
              v169 = v220;
              v101 = v219;
LABEL_188:
              v170 = (__int64 (__fastcall **)())v101;
LABEL_191:
              v171 = &byte_8;
              v172 = 0LL;
              v179.m256i_i64[0] = 0LL;
              *(_OWORD *)&v179.m256i_u64[1] = 1uLL;
              v166 = 32LL;
              v167 = 3;
              v163.m256i_i64[0] = 0LL;
              v163.m256i_i64[2] = 0LL;
              v164 = &v179;
              v165 = &off_1AC0E8;
              if ( (unsigned __int8)<chrono::format::formatting::DelayedFormat<I> as core::fmt::Display>::fmt(
                                      &v168,
                                      &v163) )
                core::result::unwrap_failed(aADisplayImplem_0, 55LL, &v162, &unk_1AC1A0, &off_1AC118);
              *(_OWORD *)v175 = *(_OWORD *)v179.m256i_i8;
              *(_QWORD *)&v175[16] = v179.m256i_i64[2];
              if ( v168.m256i_i64[0] != 0x8000000000000000LL && v168.m256i_i64[0] )
                _rust_dealloc(v168.m256i_i64[1], v168.m256i_i64[0], 1LL);
              break;
          }
        }
        v163.m256i_i64[0] = (__int64)v175;
        v163.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
        v168.m256i_i64[0] = (__int64)&off_1AC988;
        v168.m256i_i64[1] = 2LL;
        v169 = 0LL;
        v168.m256i_i64[2] = (__int64)&v163;
        v168.m256i_i64[3] = 1LL;
        if ( (unsigned __int8)core::fmt::write(&v193, &off_1AC0E8, &v168) )
          core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v162, &unk_1AC1A0, &off_1AC9A8);
        if ( *(_QWORD *)v175 )
          _rust_dealloc(*(_QWORD *)&v175[8], *(_QWORD *)v175, 1LL);
        v168.m256i_i64[0] = 0LL;
        *(_OWORD *)&v168.m256i_u64[1] = 1uLL;
        v69 = ansi_width::ansi_width(v194, v195);
        uu_ls::display_item_name((unsigned int)v175, v186, v187, 0, v70, (unsigned int)&v168, a4, (__int64)v200, v69);
        v71 = 1;
        if ( v192 )
        {
          if ( !*(_QWORD *)&v175[16] || (v72 = v175, **(_BYTE **)&v175[8] != 39) )
          {
            v163.m256i_i64[0] = (__int64)v175;
            v163.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
            v168.m256i_i64[0] = (__int64)&off_1AC8C8;
            v168.m256i_i64[1] = 1LL;
            v169 = 0LL;
            v168.m256i_i64[2] = (__int64)&v163;
            v168.m256i_i64[3] = 1LL;
            alloc::fmt::format::format_inner(v228, &v168);
            v71 = 0;
            v72 = v228;
          }
        }
        else
        {
          v72 = v175;
        }
        v179.m256i_i64[2] = *((_QWORD *)v72 + 2);
        *(_OWORD *)v179.m256i_i8 = *(_OWORD *)v72;
        if ( (_BYTE)v208 )
        {
          v73 = (_QWORD *)v191;
          v74 = *(_QWORD *)(v191 + 16);
          if ( v74 )
          {
            v73 = (_QWORD *)v191;
            v75 = *(_QWORD *)(16 * v74 + *(_QWORD *)(v191 + 8) - 8) + 1LL;
          }
          else
          {
            v75 = 0LL;
          }
          v83 = v195;
          v84 = v179.m256i_i64[2];
          v85 = v73[6];
          if ( v74 == *v73 )
            alloc::raw_vec::RawVec<T,A>::grow_one(v191);
          v86 = v83 + v75 + v85;
          v87 = v191;
          v88 = *(_QWORD *)(v191 + 8);
          v89 = 16 * v74;
          *(_QWORD *)(v88 + v89) = v86;
          *(_QWORD *)(v88 + v89 + 8) = v86 + v84;
          *(_QWORD *)(v87 + 16) = v74 + 1;
          *(_QWORD *)(v87 + 48) = 0LL;
        }
        v163.m256i_i64[0] = (__int64)&v179;
        v163.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
        v163.m256i_i64[2] = v218;
        v163.m256i_i64[3] = (__int64)<uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
        v168.m256i_i64[0] = (__int64)"\x01";
        v168.m256i_i64[1] = 2LL;
        v169 = 0LL;
        v168.m256i_i64[2] = (__int64)&v163;
        v168.m256i_i64[3] = 2LL;
        v90 = core::fmt::write(&v193, &off_1AC0E8, &v168);
        a4 = v198;
        if ( v90 )
          core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v162, &unk_1AC1A0, &off_1AC9C0);
        if ( v179.m256i_i64[0] )
          _rust_dealloc(v179.m256i_i64[1], v179.m256i_i64[0], 1LL);
        if ( !v71 )
        {
          v81 = *(_QWORD *)v175;
          if ( *(_QWORD *)v175 )
          {
            v82 = *(_QWORD *)&v175[8];
            goto LABEL_155;
          }
        }
LABEL_156:
        v163.m256i_i64[0] = (__int64)&v193;
        v163.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
        v168.m256i_i64[0] = (__int64)anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
        v168.m256i_i64[1] = 1LL;
        v169 = 0LL;
        v168.m256i_i64[2] = (__int64)&v163;
        v168.m256i_i64[3] = 1LL;
        v91 = std::io::Write::write_fmt(a4, &v168);
        if ( v91 )
        {
          v168.m256i_i64[0] = 0x8000000000000000LL;
          v168.m256i_i64[3] = v91;
          v133 = (_OWORD *)_rust_alloc(32LL, 8LL);
          if ( !v133 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v16 = (__int64)v133;
          v134 = *(_OWORD *)v168.m256i_i8;
          v133[1] = *(_OWORD *)&v168.m256i_u64[2];
          *v133 = v134;
          v135 = v193;
          if ( v193 )
          {
            v136 = v194;
            goto LABEL_248;
          }
          return v16;
        }
        v92 = v213;
        if ( v193 )
          _rust_dealloc(v194, v193, 1LL);
        v186 += 304LL;
        v15 = v92 - 304;
      }
      while ( v92 != 304 );
    }
    return 0LL;
  }
  v103 = *(_BYTE *)(v187 + 235) == 0;
  LODWORD(v213) = v13;
  if ( v103 )
  {
    v191 = 0LL;
  }
  else if ( a2 )
  {
    v191 = 1LL;
    v109 = 0LL;
    v6 = 1LL;
    do
    {
      if ( *(_QWORD *)(v186 + v109 + 64) > v6 )
        v6 = *(_QWORD *)(v186 + v109 + 64);
      v109 += 304LL;
    }
    while ( 304 * a2 != v109 );
  }
  else
  {
    LODWORD(v6) = 1;
    v191 = 1LL;
  }
  uu_ls::calculate_padding_collection(&v168, v186, a2, v187, a4);
  if ( *((_BYTE *)v200 + 29) == 2 )
  {
LABEL_205:
    *(_QWORD *)&v177 = 0LL;
    *((_QWORD *)&v177 + 1) = 8LL;
    v178 = 0LL;
    if ( a2 )
    {
      v208 = v168.m256i_i64[0];
      v110 = v173;
      v111 = 304 * a2;
      v112 = v186;
      do
      {
        uu_ls::display_additional_leading_info((__int64)&v202, v112, v208, v110, v187, v198);
        v16 = v202.m256i_i64[1];
        if ( v202.m256i_i64[0] == 0x8000000000000000LL )
        {
          v121 = v178;
          if ( v178 )
          {
            v122 = (_QWORD *)(*((_QWORD *)&v177 + 1) + 8LL);
            do
            {
              v123 = *(v122 - 1);
              if ( v123 )
                _rust_dealloc(*v122, v123, 1LL);
              v122 += 3;
              --v121;
            }
            while ( v121 );
          }
          if ( (_QWORD)v177 )
            _rust_dealloc(*((_QWORD *)&v177 + 1), 24 * v177, 8LL);
          return v16;
        }
        v226 = *(_OWORD *)v202.m256i_i8;
        v227 = v202.m256i_i64[2];
        uu_ls::display_item_name(
          (unsigned int)&v224,
          v112,
          v187,
          v191,
          v6,
          (unsigned int)&v226,
          v198,
          (__int64)v200,
          0LL);
        v116 = v178;
        if ( v178 == (_QWORD)v177 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v177);
        v112 += 304LL;
        v113 = *((_QWORD *)&v177 + 1);
        v114 = 3 * v116;
        *(_QWORD *)(*((_QWORD *)&v177 + 1) + 8 * v114 + 16) = v225;
        *(_OWORD *)(v113 + 8 * v114) = v224;
        v115 = v116 + 1;
        v178 = v115;
        v111 -= 304LL;
      }
      while ( v111 );
      v119 = *((_QWORD *)&v177 + 1);
      v120 = v177;
      a4 = v198;
    }
    else
    {
      v119 = 8LL;
      v115 = 0LL;
      v120 = 0LL;
    }
    v216.m256i_i64[0] = v119;
    v216.m256i_i64[2] = v120;
    v216.m256i_i64[1] = v119;
    v216.m256i_i64[3] = v119 + 24 * v115;
    if ( (_DWORD)v213 )
    {
      if ( (_DWORD)v213 != 3 )
      {
        if ( (_DWORD)v213 != 4 )
        {
          v179 = v216;
          v144 = v216.m256i_i64[3];
          v145 = v216.m256i_i64[1];
          if ( v216.m256i_i64[1] != v216.m256i_i64[3] )
          {
            v187 += 250LL;
            v146 = v216.m256i_i64[3] - v216.m256i_i64[1] - 24;
            while ( 1 )
            {
              v147 = *(_QWORD *)v145;
              v196 = *(_OWORD *)(v145 + 8);
              if ( v147 == 0x8000000000000000LL )
                break;
              *(_QWORD *)v175 = v147;
              *(_OWORD *)&v175[8] = v196;
              v163.m256i_i64[0] = (__int64)v175;
              v163.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
              v163.m256i_i64[2] = v187;
              v163.m256i_i64[3] = (__int64)<uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
              v202.m256i_i64[0] = (__int64)"\x01";
              v202.m256i_i64[1] = 2LL;
              v203 = 0LL;
              v202.m256i_i64[2] = (__int64)&v163;
              v202.m256i_i64[3] = 2LL;
              v148 = std::io::Write::write_fmt(v198, &v202);
              if ( v148 )
              {
                v179.m256i_i64[1] = v145 + 24;
                v16 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v148);
                if ( *(_QWORD *)v175 )
                  _rust_dealloc(*(_QWORD *)&v175[8], *(_QWORD *)v175, 1LL);
                <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v179);
                return v16;
              }
              if ( *(_QWORD *)v175 )
                _rust_dealloc(*(_QWORD *)&v175[8], *(_QWORD *)v175, 1LL);
              v145 += 24LL;
              v146 -= 24LL;
              if ( v145 == v144 )
                goto LABEL_275;
            }
            if ( v145 + 24 != v144 )
            {
              v152 = (_QWORD *)(v145 + 32);
              v153 = v146 / 0x18;
              do
              {
                v154 = *(v152 - 1);
                if ( v154 )
                  _rust_dealloc(*v152, v154, 1LL);
                v152 += 3;
                --v153;
              }
              while ( v153 );
            }
          }
LABEL_275:
          if ( v179.m256i_i64[2] )
            _rust_dealloc(v179.m256i_i64[0], 24 * v179.m256i_i64[2], 8LL);
          return 0LL;
        }
        if ( v115
          && (v216.m256i_i64[1] = v119 + 24,
              v124 = *(_QWORD *)v119,
              *(_OWORD *)v175 = *(_OWORD *)(v119 + 8),
              v124 != 0x8000000000000000LL) )
        {
          v163.m256i_i64[0] = v124;
          *(_OWORD *)&v163.m256i_u64[1] = *(_OWORD *)v175;
          v179.m256i_i64[0] = (__int64)&v163;
          v179.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
          v202.m256i_i64[0] = (__int64)anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
          v202.m256i_i64[1] = 1LL;
          v203 = 0LL;
          v202.m256i_i64[2] = (__int64)&v179;
          v202.m256i_i64[3] = 1LL;
          v151 = std::io::Write::write_fmt(a4, &v202);
          if ( v151 )
          {
            v16 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v151);
            if ( v163.m256i_i64[0] )
              _rust_dealloc(v163.m256i_i64[1], v163.m256i_i64[0], 1LL);
            <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v216);
            return v16;
          }
          v192 = ansi_width::ansi_width(v163.m256i_i64[1], v163.m256i_i64[2]);
          if ( v163.m256i_i64[0] )
            _rust_dealloc(v163.m256i_i64[1], v163.m256i_i64[0], 1LL);
          v125 = (unsigned int)(v192 + 2);
        }
        else
        {
          v125 = 0LL;
        }
        v192 = v125;
        v163 = v216;
        v126 = v216.m256i_i64[3];
        v127 = v216.m256i_i64[1];
        if ( v216.m256i_i64[1] != v216.m256i_i64[3] )
        {
          v128 = *(_WORD *)(v187 + 228);
          v129 = v216.m256i_i64[3] - v216.m256i_i64[1] - 24;
          while ( 1 )
          {
            v130 = *(_QWORD *)v127;
            v196 = *(_OWORD *)(v127 + 8);
            if ( v130 == 0x8000000000000000LL )
              break;
            v179.m256i_i64[0] = v130;
            *(_OWORD *)&v179.m256i_u64[1] = v196;
            v131 = ansi_width::ansi_width(v196, *((_QWORD *)&v196 + 1));
            if ( v128 && (unsigned __int16)(v131 + v192 + 1) > v128 )
            {
              *(_QWORD *)v175 = &v179;
              *(_QWORD *)&v175[8] = <alloc::string::String as core::fmt::Display>::fmt;
              v202.m256i_i64[0] = (__int64)&off_1AC820;
              v202.m256i_i64[1] = 1LL;
              v203 = 0LL;
              v202.m256i_i64[2] = (__int64)v175;
              v202.m256i_i64[3] = 1LL;
              v132 = std::io::Write::write_fmt(v198, &v202);
              if ( v132 )
                goto LABEL_295;
              v192 = (unsigned int)(v131 + 2);
            }
            else
            {
              *(_QWORD *)v175 = &v179;
              *(_QWORD *)&v175[8] = <alloc::string::String as core::fmt::Display>::fmt;
              v202.m256i_i64[0] = (__int64)&off_1AC810;
              v202.m256i_i64[1] = 1LL;
              v203 = 0LL;
              v202.m256i_i64[2] = (__int64)v175;
              v202.m256i_i64[3] = 1LL;
              v132 = std::io::Write::write_fmt(v198, &v202);
              if ( v132 )
              {
LABEL_295:
                v163.m256i_i64[1] = v127 + 24;
                v16 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v132);
                if ( v179.m256i_i64[0] )
                  _rust_dealloc(v179.m256i_i64[1], v179.m256i_i64[0], 1LL);
                <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v163);
                return v16;
              }
              v192 = (unsigned int)(v131 + v192 + 2);
            }
            if ( v179.m256i_i64[0] )
              _rust_dealloc(v179.m256i_i64[1], v179.m256i_i64[0], 1LL);
            v127 += 24LL;
            v129 -= 24LL;
            if ( v127 == v126 )
              goto LABEL_285;
          }
          if ( v127 + 24 != v126 )
          {
            v155 = (_QWORD *)(v127 + 32);
            v156 = v129 / 0x18;
            do
            {
              v157 = *(v155 - 1);
              if ( v157 )
                _rust_dealloc(*v155, v157, 1LL);
              v155 += 3;
              --v156;
            }
            while ( v156 );
          }
        }
LABEL_285:
        v158 = v198;
        v159 = v187;
        if ( v163.m256i_i64[2] )
          _rust_dealloc(v163.m256i_i64[0], 24 * v163.m256i_i64[2], 8LL);
        if ( !(_WORD)v192 )
          return 0LL;
        v163.m256i_i64[0] = v159 + 250;
        v163.m256i_i64[1] = (__int64)<uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
        v202.m256i_i64[0] = (__int64)anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
        v202.m256i_i64[1] = 1LL;
        v203 = 0LL;
        v202.m256i_i64[2] = (__int64)&v163;
        v202.m256i_i64[3] = 1LL;
        v160 = std::io::Write::write_fmt(v158, &v202);
        if ( !v160 )
          return 0LL;
        return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v160);
      }
      v140 = v192 != 0;
      v141 = *(unsigned int *)(v187 + 228);
      v142 = 0LL;
    }
    else
    {
      v140 = v192 != 0;
      v141 = *(unsigned int *)(v187 + 228);
      v142 = 1LL;
    }
    v143 = uu_ls::display_grid(&v216, v141, v142, a4, v140);
    if ( !v143 )
      return 0LL;
    return v143;
  }
  v117 = v200;
  v118 = lscolors::LsColors::style_for_indicator(*v200, 0LL);
  if ( v118 )
  {
    *(__int64 *)((char *)&v179.m256i_i64[1] + 5) = *(_QWORD *)(v118 + 13);
    *(_OWORD *)v179.m256i_i8 = *(_OWORD *)v118;
    *(__int64 *)((char *)&v202.m256i_i64[1] + 5) = *(__int64 *)((char *)&v179.m256i_i64[1] + 5);
    *(_OWORD *)v202.m256i_i8 = *(_OWORD *)v179.m256i_i8;
    uu_ls::colors::StyleManager::get_style_code(&v163, v117, &v202);
  }
  else
  {
    v163.m256i_i64[0] = 0LL;
    *(_OWORD *)&v163.m256i_u64[1] = 1uLL;
  }
  *(_QWORD *)v175 = &v163;
  *(_QWORD *)&v175[8] = <alloc::string::String as core::fmt::Display>::fmt;
  v202.m256i_i64[0] = (__int64)anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
  v202.m256i_i64[1] = 1LL;
  v203 = 0LL;
  v202.m256i_i64[2] = (__int64)v175;
  v202.m256i_i64[3] = 1LL;
  v137 = std::io::Write::write_fmt(a4, &v202);
  if ( !v137 )
  {
    if ( v163.m256i_i64[0] )
      _rust_dealloc(v163.m256i_i64[1], v163.m256i_i64[0], 1LL);
    goto LABEL_205;
  }
  v202.m256i_i64[0] = 0x8000000000000000LL;
  v202.m256i_i64[3] = v137;
  v138 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v138 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v16 = (__int64)v138;
  v139 = *(_OWORD *)v202.m256i_i8;
  v138[1] = *(_OWORD *)&v202.m256i_u64[2];
  *v138 = v139;
  v135 = v163.m256i_i64[0];
  if ( v163.m256i_i64[0] )
  {
    v136 = v163.m256i_i64[1];
LABEL_248:
    _rust_dealloc(v136, v135, 1LL);
  }
  return v16;
}
