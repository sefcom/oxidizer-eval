__int64 __fastcall uu_test::eval(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v9; // xmm1
  char v10; // al
  char v11; // al
  char v12; // cl
  char v13; // dl
  char v14; // si
  char v15; // di
  char v16; // r8
  char v17; // r9
  char v18; // al
  unsigned __int64 v19; // rsi
  __int64 v20; // r8
  __int128 v21; // xmm1
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int128 v25; // xmm1
  __int64 v26; // rbp
  __int64 v27; // r14
  __int64 v28; // r12
  __int64 v29; // r13
  __int64 v30; // r15
  unsigned __int64 v31; // rbp
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // r13
  unsigned __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // rsi
  __int128 *v37; // rdi
  __int64 v38; // rcx
  _WORD *v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // rdx
  __int128 v42; // xmm1
  char v43; // al
  char v44; // bp
  char v45; // r15
  char v46; // r15
  char v47; // al
  char v48; // dl
  char v49; // cl
  __int64 *v50; // rdi
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int128 v55; // xmm1
  __int64 v56; // rax
  unsigned __int64 v57; // rsi
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  unsigned __int64 v64; // rsi
  __int64 v65; // r8
  __int128 v66; // xmm1
  unsigned __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int128 v70; // xmm1
  __int64 v71; // r15
  char v72; // al
  bool v73; // al
  __int64 v74; // rdx
  __int64 v75; // rcx
  char v76; // al
  char v77; // al
  __int64 v78; // rax
  unsigned __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rsi
  __int64 v82; // rax
  char v83; // al
  char v84; // al
  bool v85; // dl
  bool v86; // al
  char v87; // al
  char v88; // al
  char v89; // al
  unsigned int v90; // ebp
  __int64 v91; // r14
  char v92; // cl
  __int64 v93; // rdi
  __int64 v94; // rsi
  unsigned int v95; // ebp
  __int64 v96; // r14
  char v97; // cl
  bool v98; // al
  bool v99; // sf
  bool v100; // of
  char v101; // al
  __int128 v102; // [rsp+0h] [rbp-708h] BYREF
  __int64 v103; // [rsp+10h] [rbp-6F8h] BYREF
  __int64 v104; // [rsp+18h] [rbp-6F0h]
  __m256i v105; // [rsp+20h] [rbp-6E8h] BYREF
  __int64 v106; // [rsp+40h] [rbp-6C8h]
  __int128 v107; // [rsp+50h] [rbp-6B8h] BYREF
  _QWORD src[20]; // [rsp+60h] [rbp-6A8h] BYREF
  __m256i v109; // [rsp+100h] [rbp-608h] BYREF
  __int64 v110; // [rsp+120h] [rbp-5E8h]
  __int64 v111; // [rsp+128h] [rbp-5E0h] BYREF
  __int64 v112; // [rsp+130h] [rbp-5D8h] BYREF
  __int64 v113; // [rsp+138h] [rbp-5D0h] BYREF
  __int64 v114; // [rsp+140h] [rbp-5C8h] BYREF
  __int64 v115; // [rsp+148h] [rbp-5C0h] BYREF
  __int64 v116; // [rsp+150h] [rbp-5B8h]
  __int64 v117; // [rsp+158h] [rbp-5B0h]
  __int128 v118; // [rsp+160h] [rbp-5A8h] BYREF
  __int64 v119; // [rsp+170h] [rbp-598h]
  __int128 v120; // [rsp+180h] [rbp-588h] BYREF
  __int64 v121; // [rsp+190h] [rbp-578h]
  __int128 v122; // [rsp+1A0h] [rbp-568h] BYREF
  __int64 v123; // [rsp+1B0h] [rbp-558h]
  __int128 v124; // [rsp+1C0h] [rbp-548h] BYREF
  __int64 v125; // [rsp+1D0h] [rbp-538h]
  _BYTE v126[24]; // [rsp+1D8h] [rbp-530h] BYREF
  _OWORD v127[2]; // [rsp+1F0h] [rbp-518h] BYREF
  __int64 v128; // [rsp+210h] [rbp-4F8h]
  _OWORD v129[2]; // [rsp+220h] [rbp-4E8h] BYREF
  __int64 v130; // [rsp+240h] [rbp-4C8h]
  __int128 v131; // [rsp+250h] [rbp-4B8h] BYREF
  __int64 v132; // [rsp+260h] [rbp-4A8h] BYREF
  __int128 v133; // [rsp+270h] [rbp-498h] BYREF
  __int64 v134; // [rsp+280h] [rbp-488h]
  __int128 v135; // [rsp+290h] [rbp-478h] BYREF
  __int64 v136; // [rsp+2A0h] [rbp-468h]
  __int128 v137; // [rsp+2B0h] [rbp-458h] BYREF
  __int64 v138; // [rsp+2C0h] [rbp-448h] BYREF
  __int128 v139; // [rsp+2D0h] [rbp-438h] BYREF
  __int64 v140; // [rsp+2E0h] [rbp-428h] BYREF
  __int128 v141; // [rsp+2F0h] [rbp-418h] BYREF
  __int64 v142; // [rsp+300h] [rbp-408h]
  __int128 v143; // [rsp+310h] [rbp-3F8h] BYREF
  __int64 v144; // [rsp+320h] [rbp-3E8h]
  __int64 v145; // [rsp+330h] [rbp-3D8h] BYREF
  unsigned int v146; // [rsp+338h] [rbp-3D0h]
  __int64 v147; // [rsp+340h] [rbp-3C8h] BYREF
  unsigned int v148; // [rsp+348h] [rbp-3C0h]
  __int64 v149; // [rsp+350h] [rbp-3B8h] BYREF
  unsigned int v150; // [rsp+358h] [rbp-3B0h]
  __int64 v151; // [rsp+360h] [rbp-3A8h] BYREF
  unsigned int v152; // [rsp+368h] [rbp-3A0h]
  __int128 v153; // [rsp+370h] [rbp-398h] BYREF
  _QWORD dest[20]; // [rsp+380h] [rbp-388h] BYREF
  __int128 v155; // [rsp+420h] [rbp-2E8h] BYREF
  __int64 v156; // [rsp+430h] [rbp-2D8h] BYREF
  __m256i v157; // [rsp+440h] [rbp-2C8h]
  __int64 v158; // [rsp+460h] [rbp-2A8h]
  __m256i v159; // [rsp+470h] [rbp-298h]
  __int64 v160; // [rsp+490h] [rbp-278h]
  __m256i v161; // [rsp+4A0h] [rbp-268h]
  __int64 v162; // [rsp+4C0h] [rbp-248h]
  __m256i v163; // [rsp+4D0h] [rbp-238h]
  __int64 v164; // [rsp+4F0h] [rbp-218h]
  __m256i v165; // [rsp+500h] [rbp-208h]
  __int128 *v166; // [rsp+520h] [rbp-1E8h]
  _OWORD v167[2]; // [rsp+530h] [rbp-1D8h]
  __int128 v168; // [rsp+550h] [rbp-1B8h]
  __int64 v169; // [rsp+560h] [rbp-1A8h]
  __int64 v170; // [rsp+570h] [rbp-198h] BYREF
  char v171; // [rsp+578h] [rbp-190h]
  _BYTE v172[23]; // [rsp+579h] [rbp-18Fh]
  _QWORD v173[3]; // [rsp+590h] [rbp-178h] BYREF
  char v174; // [rsp+5A8h] [rbp-160h]
  __int64 v175; // [rsp+5B0h] [rbp-158h] BYREF
  char v176; // [rsp+5B8h] [rbp-150h]
  _BYTE v177[23]; // [rsp+5B9h] [rbp-14Fh]
  __int64 v178; // [rsp+5D0h] [rbp-138h] BYREF
  char v179; // [rsp+5D8h] [rbp-130h]
  _BYTE v180[23]; // [rsp+5D9h] [rbp-12Fh]
  __int64 v181; // [rsp+5F0h] [rbp-118h] BYREF
  char v182; // [rsp+5F8h] [rbp-110h]
  _BYTE v183[23]; // [rsp+5F9h] [rbp-10Fh]
  __int128 v184; // [rsp+610h] [rbp-F8h] BYREF
  _QWORD v185[20]; // [rsp+620h] [rbp-E8h] BYREF
  __int128 v186; // [rsp+6C0h] [rbp-48h] BYREF
  __int64 v187; // [rsp+6D0h] [rbp-38h]

  v3 = a2[2];
  if ( !v3 )
  {
    v105.m256i_i64[0] = 7LL;
LABEL_7:
    *(_BYTE *)(a1 + 8) = 0;
LABEL_8:
    *(_QWORD *)a1 = 7LL;
LABEL_9:
    v11 = 0;
LABEL_10:
    v12 = 0;
LABEL_11:
    v13 = 0;
    goto LABEL_12;
  }
  v5 = v3 - 1;
  a2[2] = v3 - 1;
  v6 = *a2;
  if ( v3 - 1 >= *a2 )
    goto LABEL_316;
  v7 = a2[1];
  v8 = *(_QWORD *)(v7 + 40 * v5 + 32);
  v9 = *(_OWORD *)(v7 + 40 * v5 + 16);
  *(_OWORD *)v105.m256i_i8 = *(_OWORD *)(v7 + 40 * v5);
  v106 = v8;
  *(_OWORD *)&v105.m256i_u64[2] = v9;
  switch ( v105.m256i_i64[0] )
  {
    case 1LL:
      uu_test::eval(&v170, a2);
      v10 = v171;
      if ( v170 == 7 )
      {
        *(_BYTE *)(a1 + 8) = (v171 & 1) == 0;
        goto LABEL_8;
      }
      *(_QWORD *)a1 = v170;
      *(_BYTE *)(a1 + 8) = v10;
      *(_OWORD *)(a1 + 9) = *(_OWORD *)v172;
      *(_QWORD *)(a1 + 24) = *(_QWORD *)&v172[15];
      return a1;
    case 2LL:
      v139 = *(_OWORD *)&v105.m256i_u64[1];
      v140 = v105.m256i_i64[3];
      if ( !v105.m256i_i64[2] || v105.m256i_i64[3] < 0 )
        goto LABEL_317;
      if ( v105.m256i_i64[3] == 2
        && (*(_WORD *)v105.m256i_i64[2] == 24877 || *(_WORD *)v105.m256i_i64[2] == 28461)
        && v3 < 3 )
      {
        *(_QWORD *)&v153 = 0LL;
        *((_QWORD *)&v153 + 1) = 1LL;
        dest[0] = 0LL;
        src[4] = 32LL;
        LOBYTE(src[5]) = 3;
        *(_QWORD *)&v107 = 0LL;
        src[0] = 0LL;
        src[2] = &v153;
        src[3] = &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_35_llvm_17209501424320820274;
        std::sys::os_str::bytes::Slice::to_str(&v184);
        if ( (_QWORD)v184 || !*((_QWORD *)&v184 + 1) )
          v18 = os_display::unix::write_escaped(&v107, v105.m256i_i64[2], 2LL);
        else
          v18 = os_display::unix::write(&v107, *((_QWORD *)&v184 + 1), v185[0], 1LL);
        if ( v18 )
          core::result::unwrap_failed(
            anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_36_llvm_17209501424320820274,
            55LL,
            &v115,
            &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
            &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_38_llvm_17209501424320820274);
        v168 = v153;
        v169 = dest[0];
        *(_QWORD *)a1 = 6LL;
        *(_OWORD *)(a1 + 8) = v168;
        v56 = v169;
      }
      else
      {
        uu_test::eval(&v178, a2);
        v44 = v179;
        if ( v178 == 7 )
        {
          uu_test::eval(&v181, a2);
          v45 = v182;
          if ( v181 == 7 )
          {
            v46 = v182 & 1;
            v47 = <std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(&v139, &off_1066C8);
            v48 = 1;
            if ( !v46 )
              v48 = v44 & 1;
            v49 = v46 & v44 & 1;
            if ( !v47 )
              v49 = v48;
            *(_BYTE *)(a1 + 8) = v49;
            *(_QWORD *)a1 = 7LL;
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v139);
            v11 = 1;
            goto LABEL_10;
          }
          *(_QWORD *)a1 = v181;
          *(_BYTE *)(a1 + 8) = v45;
          *(_OWORD *)(a1 + 9) = *(_OWORD *)v183;
          v56 = *(_QWORD *)&v183[15];
        }
        else
        {
          *(_QWORD *)a1 = v178;
          *(_BYTE *)(a1 + 8) = v44;
          *(_OWORD *)(a1 + 9) = *(_OWORD *)v180;
          v56 = *(_QWORD *)&v180[15];
        }
      }
      *(_QWORD *)(a1 + 24) = v56;
      alloc::raw_vec::RawVec<T,A>::current_memory(&v107, &v139);
      if ( *((_QWORD *)&v107 + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v140, v107, *((_QWORD *)&v107 + 1), src[0]);
      return a1;
    case 3LL:
      v155 = *(_OWORD *)&v105.m256i_u64[1];
      v156 = v105.m256i_i64[3];
      if ( !v105.m256i_i64[2] || v105.m256i_i64[3] < 0 )
        goto LABEL_317;
      *(_BYTE *)(a1 + 8) = v105.m256i_i64[3] != 0;
      *(_QWORD *)a1 = 7LL;
      alloc::raw_vec::RawVec<T,A>::current_memory(&v107, &v155);
      if ( *((_QWORD *)&v107 + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v156, v107, *((_QWORD *)&v107 + 1), src[0]);
      v12 = 1;
      v11 = 0;
      goto LABEL_11;
    case 4LL:
      if ( v105.m256i_i64[1] )
      {
        if ( v105.m256i_i64[1] == 1 )
        {
          v134 = v106;
          v133 = *(_OWORD *)&v105.m256i_u64[2];
          if ( v3 == 1 )
          {
            v157.m256i_i64[0] = 7LL;
          }
          else
          {
            v19 = v3 - 2;
            a2[2] = v3 - 2;
            if ( v3 - 2 >= v6 )
              goto LABEL_316;
            v20 = *(_QWORD *)(v7 + 40 * v19 + 32);
            v21 = *(_OWORD *)(v7 + 40 * v19 + 16);
            *(_OWORD *)v157.m256i_i8 = *(_OWORD *)(v7 + 40 * v19);
            v158 = v20;
            *(_OWORD *)&v157.m256i_u64[2] = v21;
            if ( v157.m256i_i64[0] == 3 )
            {
              v119 = v157.m256i_i64[3];
              v118 = *(_OWORD *)&v157.m256i_u64[1];
              if ( v3 == 2 )
              {
                v159.m256i_i64[0] = 7LL;
                goto LABEL_327;
              }
              v22 = v3 - 3;
              a2[2] = v22;
              if ( v22 < v6 )
              {
                v23 = 5 * v22;
                v24 = *(_QWORD *)(v7 + 8 * v23 + 32);
                v25 = *(_OWORD *)(v7 + 8 * v23 + 16);
                *(_OWORD *)v159.m256i_i8 = *(_OWORD *)(v7 + 8 * v23);
                v160 = v24;
                *(_OWORD *)&v159.m256i_u64[2] = v25;
                if ( v159.m256i_i64[0] == 3 )
                {
                  v141 = *(_OWORD *)&v159.m256i_u64[1];
                  v26 = v159.m256i_i64[3];
                  v142 = v159.m256i_i64[3];
                  v27 = v159.m256i_i64[2];
                  if ( v159.m256i_i64[2] )
                  {
                    if ( v159.m256i_i64[3] >= 0 )
                    {
                      v28 = *((_QWORD *)&v118 + 1);
                      if ( *((_QWORD *)&v118 + 1) )
                      {
                        v29 = v119;
                        if ( v119 >= 0 )
                        {
                          v104 = *((_QWORD *)&v133 + 1);
                          if ( *((_QWORD *)&v133 + 1) )
                          {
                            v30 = v134;
                            if ( v134 >= 0 )
                            {
                              std::sys::os_str::bytes::Slice::to_str(&v107);
                              if ( (_QWORD)v107
                                || !*((_QWORD *)&v107 + 1)
                                || (core::num::<impl core::str::traits::FromStr for i128>::from_str(
                                      &v107,
                                      *((_QWORD *)&v107 + 1),
                                      src[0]),
                                    (v107 & 1) != 0) )
                              {
                                *(_QWORD *)&v153 = 0LL;
                                *((_QWORD *)&v153 + 1) = 1LL;
                                dest[0] = 0LL;
                                src[4] = 32LL;
                                LOBYTE(src[5]) = 3;
                                *(_QWORD *)&v107 = 0LL;
                                src[0] = 0LL;
                                src[2] = &v153;
                                src[3] = &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_35_llvm_17209501424320820274;
                                std::sys::os_str::bytes::Slice::to_str(&v184);
                                if ( (_QWORD)v184 || !*((_QWORD *)&v184 + 1) )
                                  v72 = os_display::unix::write_escaped(&v107, v27, v26);
                                else
                                  v72 = os_display::unix::write(&v107, *((_QWORD *)&v184 + 1), v185[0], 1LL);
                                if ( v72 )
                                  core::result::unwrap_failed(
                                    anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_36_llvm_17209501424320820274,
                                    55LL,
                                    &v115,
                                    &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
                                    &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_38_llvm_17209501424320820274);
                              }
                              else
                              {
                                v31 = src[0];
                                v32 = src[1];
                                std::sys::os_str::bytes::Slice::to_str(&v107);
                                if ( !(_QWORD)v107 )
                                {
                                  if ( *((_QWORD *)&v107 + 1) )
                                  {
                                    core::num::<impl core::str::traits::FromStr for i128>::from_str(
                                      &v107,
                                      *((_QWORD *)&v107 + 1),
                                      src[0]);
                                    if ( (v107 & 1) == 0 )
                                    {
                                      v33 = src[0];
                                      v34 = src[1];
                                      std::sys::os_str::bytes::Slice::to_str(&v107);
                                      if ( (_QWORD)v107 )
                                        v35 = 0LL;
                                      else
                                        v35 = *((_QWORD *)&v107 + 1);
                                      if ( !v35 || src[0] != 3LL )
                                      {
LABEL_249:
                                        *(_QWORD *)&v153 = 0LL;
                                        *((_QWORD *)&v153 + 1) = 1LL;
                                        dest[0] = 0LL;
                                        src[4] = 32LL;
                                        LOBYTE(src[5]) = 3;
                                        *(_QWORD *)&v107 = 0LL;
                                        src[0] = 0LL;
                                        src[2] = &v153;
                                        src[3] = &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_35_llvm_17209501424320820274;
                                        std::sys::os_str::bytes::Slice::to_str(&v184);
                                        if ( (_QWORD)v184 || !*((_QWORD *)&v184 + 1) )
                                          v89 = os_display::unix::write_escaped(&v107, v104, v30);
                                        else
                                          v89 = os_display::unix::write(&v107, *((_QWORD *)&v184 + 1), v185[0], 1LL);
                                        if ( v89 )
                                          core::result::unwrap_failed(
                                            anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_36_llvm_17209501424320820274,
                                            55LL,
                                            &v115,
                                            &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
                                            &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_38_llvm_17209501424320820274);
                                        v78 = *((_QWORD *)&v153 + 1);
                                        v79 = v153;
                                        v80 = dest[0];
                                        v81 = 4LL;
                                        goto LABEL_191;
                                      }
                                      if ( *(_WORD *)v35 ^ 0x652D | *(unsigned __int8 *)(v35 + 2) ^ 0x71 )
                                      {
                                        if ( *(_WORD *)v35 ^ 0x6E2D | *(unsigned __int8 *)(v35 + 2) ^ 0x65 )
                                        {
                                          if ( *(_WORD *)v35 ^ 0x672D | *(unsigned __int8 *)(v35 + 2) ^ 0x74 )
                                          {
                                            if ( !(*(_WORD *)v35 ^ 0x672D | *(unsigned __int8 *)(v35 + 2) ^ 0x65) )
                                            {
                                              v100 = __OFSUB__(__PAIR128__(v32, v31), __PAIR128__(v34, v33));
                                              v99 = (((__PAIR128__(v32, v31) - __PAIR128__(v34, v33)) >> 64) & 0x8000000000000000LL) != 0LL;
LABEL_292:
                                              v98 = v99 == v100;
                                              goto LABEL_293;
                                            }
                                            if ( *(_WORD *)v35 ^ 0x6C2D | *(unsigned __int8 *)(v35 + 2) ^ 0x74 )
                                            {
                                              if ( *(_WORD *)v35 ^ 0x6C2D | *(unsigned __int8 *)(v35 + 2) ^ 0x65 )
                                                goto LABEL_249;
                                              v100 = __OFSUB__(__PAIR128__(v34, v33), __PAIR128__(v32, v31));
                                              v99 = (((__PAIR128__(v34, v33) - __PAIR128__(v32, v31)) >> 64) & 0x8000000000000000LL) != 0LL;
                                              goto LABEL_292;
                                            }
                                            v98 = (__int128)__PAIR128__(v32, v31) < (__int128)__PAIR128__(v34, v33);
                                          }
                                          else
                                          {
                                            v98 = (__int128)__PAIR128__(v34, v33) < (__int128)__PAIR128__(v32, v31);
                                          }
                                        }
                                        else
                                        {
                                          v98 = (v33 ^ v31 | v34 ^ v32) != 0;
                                        }
                                      }
                                      else
                                      {
                                        v98 = (v33 ^ v31 | v34 ^ v32) == 0;
                                      }
LABEL_293:
                                      *(_BYTE *)(a1 + 8) = v98;
                                      *(_QWORD *)a1 = 7LL;
                                      core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v141);
                                      core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v118);
                                      core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v133);
                                      v16 = 1;
                                      v11 = 0;
                                      v12 = 0;
                                      v13 = 0;
                                      v14 = 0;
                                      v15 = 0;
                                      goto LABEL_15;
                                    }
                                  }
                                }
                                *(_QWORD *)&v153 = 0LL;
                                *((_QWORD *)&v153 + 1) = 1LL;
                                dest[0] = 0LL;
                                src[4] = 32LL;
                                LOBYTE(src[5]) = 3;
                                *(_QWORD *)&v107 = 0LL;
                                src[0] = 0LL;
                                src[2] = &v153;
                                src[3] = &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_35_llvm_17209501424320820274;
                                std::sys::os_str::bytes::Slice::to_str(&v184);
                                if ( (_QWORD)v184 || !*((_QWORD *)&v184 + 1) )
                                  v83 = os_display::unix::write_escaped(&v107, v28, v29);
                                else
                                  v83 = os_display::unix::write(&v107, *((_QWORD *)&v184 + 1), v185[0], 1LL);
                                if ( v83 )
                                  core::result::unwrap_failed(
                                    anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_36_llvm_17209501424320820274,
                                    55LL,
                                    &v115,
                                    &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
                                    &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_38_llvm_17209501424320820274);
                              }
                              v78 = *((_QWORD *)&v153 + 1);
                              v79 = v153;
                              v80 = dest[0];
                              v81 = 5LL;
LABEL_191:
                              *(_QWORD *)a1 = v81;
                              *(_BYTE *)(a1 + 8) = v79;
                              *(_BYTE *)(a1 + 15) = HIBYTE(v79);
                              *(_WORD *)(a1 + 13) = HIDWORD(v79) >> 8;
                              *(_DWORD *)(a1 + 9) = v79 >> 8;
                              *(_QWORD *)(a1 + 16) = v78;
                              *(_QWORD *)(a1 + 24) = v80;
                              core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v141);
                              core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v118);
                              v50 = (__int64 *)&v133;
                              goto LABEL_111;
                            }
                          }
                        }
                      }
                    }
                  }
LABEL_317:
                  core::panicking::panic_nounwind(
                    "unsafe precondition(s) violated: slice::from_raw_parts requires the pointer to be aligned and non-nu"
                    "ll, and the total size of the slice not to exceed `isize::MAX`expected valueexpected extra argument "
                    "missing argument after unknown operator : unary operator expected(!-asrc/uu/test/src/parser.rs)descr"
                    "iption() is deprecated; use Display",
                    162LL);
                }
LABEL_327:
                uu_test::eval::panic_cold_explicit();
              }
LABEL_316:
              core::panicking::panic_nounwind(anon_061acb23d90564cd8c861dcd3bded36d_9_llvm_876149539708535709, 104LL);
            }
          }
          uu_test::eval::panic_cold_explicit();
        }
        v136 = v106;
        v135 = *(_OWORD *)&v105.m256i_u64[2];
        if ( v3 == 1 )
        {
          v161.m256i_i64[0] = 7LL;
        }
        else
        {
          v64 = v3 - 2;
          a2[2] = v3 - 2;
          if ( v3 - 2 >= v6 )
            goto LABEL_316;
          v65 = *(_QWORD *)(v7 + 40 * v64 + 32);
          v66 = *(_OWORD *)(v7 + 40 * v64 + 16);
          *(_OWORD *)v161.m256i_i8 = *(_OWORD *)(v7 + 40 * v64);
          v162 = v65;
          *(_OWORD *)&v161.m256i_u64[2] = v66;
          if ( v161.m256i_i64[0] == 3 )
          {
            v121 = v161.m256i_i64[3];
            v120 = *(_OWORD *)&v161.m256i_u64[1];
            if ( v3 == 2 )
            {
              v163.m256i_i64[0] = 7LL;
            }
            else
            {
              v67 = v3 - 3;
              a2[2] = v67;
              if ( v67 >= v6 )
                goto LABEL_316;
              v68 = 5 * v67;
              v69 = *(_QWORD *)(v7 + 8 * v68 + 32);
              v70 = *(_OWORD *)(v7 + 8 * v68 + 16);
              *(_OWORD *)v163.m256i_i8 = *(_OWORD *)(v7 + 8 * v68);
              v164 = v69;
              *(_OWORD *)&v163.m256i_u64[2] = v70;
              if ( v163.m256i_i64[0] == 3 )
              {
                v143 = *(_OWORD *)&v163.m256i_u64[1];
                v144 = v163.m256i_i64[3];
                if ( !v163.m256i_i64[2] )
                  goto LABEL_317;
                if ( v163.m256i_i64[3] < 0 )
                  goto LABEL_317;
                if ( !*((_QWORD *)&v120 + 1) )
                  goto LABEL_317;
                if ( v121 < 0 )
                  goto LABEL_317;
                v104 = *((_QWORD *)&v135 + 1);
                if ( !*((_QWORD *)&v135 + 1) )
                  goto LABEL_317;
                v71 = v136;
                if ( v136 < 0 )
                  goto LABEL_317;
                std::sys::pal::unix::fs::stat(&v107);
                if ( (_QWORD)v107 == 2LL )
                {
                  std::io::error::repr_bitpacked::decode_repr(&v107, *((_QWORD *)&v107 + 1));
                  if ( (unsigned __int8)v107 >= 3u )
                    goto LABEL_154;
                }
                else
                {
                  memcpy(dest, src, sizeof(dest));
                  v153 = v107;
                  std::sys::pal::unix::fs::stat(&v107);
                  if ( (_QWORD)v107 != 2LL )
                  {
                    memcpy(v185, src, sizeof(v185));
                    v184 = v107;
                    std::sys::os_str::bytes::Slice::to_str(&v107);
                    if ( (_QWORD)v107 )
                      v82 = 0LL;
                    else
                      v82 = *((_QWORD *)&v107 + 1);
                    if ( v82 && src[0] == 3LL )
                    {
                      if ( !(*(_WORD *)v82 ^ 0x652D | *(unsigned __int8 *)(v82 + 2) ^ 0x66) )
                      {
                        if ( dest[3] == v185[3] )
                        {
                          v73 = dest[2] == v185[2];
                          goto LABEL_156;
                        }
                        goto LABEL_155;
                      }
                      if ( !(*(_WORD *)v82 ^ 0x6E2D | *(unsigned __int8 *)(v82 + 2) ^ 0x74) )
                      {
                        std::fs::Metadata::modified(&v145, &v153);
                        v90 = v146;
                        if ( v146 == 1000000000 )
                        {
                          v112 = v145;
                          core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v112, &off_1066A8, &off_1067C0);
                        }
                        v91 = v145;
                        std::fs::Metadata::modified(&v147, &v184);
                        if ( v148 == 1000000000 )
                        {
                          v111 = v147;
                          core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v111, &off_1066A8, &off_1067D8);
                        }
                        v92 = (v91 > v147) - (v91 < v147);
                        if ( v91 > v147 == v91 < v147 )
                          v92 = (v90 > v148) - (v90 < v148);
                        v73 = v92 == 1;
                        goto LABEL_156;
                      }
                      if ( !(*(_WORD *)v82 ^ 0x6F2D | *(unsigned __int8 *)(v82 + 2) ^ 0x74) )
                      {
                        std::fs::Metadata::modified(&v149, &v153);
                        v95 = v150;
                        if ( v150 == 1000000000 )
                        {
                          v114 = v149;
                          core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v114, &off_1066A8, &off_106790);
                        }
                        v96 = v149;
                        std::fs::Metadata::modified(&v151, &v184);
                        if ( v152 == 1000000000 )
                        {
                          v113 = v151;
                          core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v113, &off_1066A8, &off_1067A8);
                        }
                        v97 = (v96 > v151) - (v96 < v151);
                        if ( v96 > v151 == v96 < v151 )
                          v97 = (v95 > v152) - (v95 < v152);
                        v73 = v97 == -1;
                        goto LABEL_156;
                      }
                    }
                    *(_QWORD *)v126 = 0LL;
                    *(_QWORD *)&v126[8] = 1LL;
                    *(_QWORD *)&v126[16] = 0LL;
                    src[4] = 32LL;
                    LOBYTE(src[5]) = 3;
                    *(_QWORD *)&v107 = 0LL;
                    src[0] = 0LL;
                    src[2] = v126;
                    src[3] = &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_35_llvm_17209501424320820274;
                    std::sys::os_str::bytes::Slice::to_str(&v115);
                    if ( v115 || !v116 )
                      v87 = os_display::unix::write_escaped(&v107, v104, v71);
                    else
                      v87 = os_display::unix::write(&v107, v116, v117, 1LL);
                    if ( v87 )
                      core::result::unwrap_failed(
                        anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_36_llvm_17209501424320820274,
                        55LL,
                        &v115,
                        &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
                        &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_38_llvm_17209501424320820274);
                    v88 = v126[0];
                    v167[0] = *(_OWORD *)&v126[1];
                    *(_QWORD *)((char *)v167 + 15) = *(_QWORD *)&v126[16];
                    *(_QWORD *)a1 = 4LL;
                    *(_BYTE *)(a1 + 8) = v88;
                    *(_OWORD *)(a1 + 9) = v167[0];
                    *(_QWORD *)(a1 + 24) = *(_QWORD *)((char *)v167 + 15);
                    core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v143);
                    core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v120);
                    v50 = (__int64 *)&v135;
                    goto LABEL_111;
                  }
                  std::io::error::repr_bitpacked::decode_repr(&v107, *((_QWORD *)&v107 + 1));
                  if ( (unsigned __int8)v107 >= 3u )
LABEL_154:
                    core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v107 + 8);
                }
LABEL_155:
                v73 = 0;
LABEL_156:
                *(_BYTE *)(a1 + 8) = v73;
                *(_QWORD *)a1 = 7LL;
                core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v143);
                core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v120);
                core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v135);
                v15 = 1;
                v11 = 0;
                v12 = 0;
                v13 = 0;
                v14 = 0;
                goto LABEL_14;
              }
            }
            uu_test::eval::panic_cold_explicit();
          }
        }
        uu_test::eval::panic_cold_explicit();
      }
      v132 = v106;
      v131 = *(_OWORD *)&v105.m256i_u64[2];
      if ( v3 == 1 )
      {
        *(_QWORD *)&v127[0] = 7LL;
      }
      else
      {
        v57 = v3 - 2;
        a2[2] = v3 - 2;
        if ( v3 - 2 >= v6 )
          goto LABEL_316;
        v58 = *(_OWORD *)(v7 + 40 * v57);
        v59 = *(_OWORD *)(v7 + 40 * v57 + 16);
        v128 = *(_QWORD *)(v7 + 40 * v57 + 32);
        v127[1] = v59;
        v127[0] = v58;
        if ( v3 != 2 )
        {
          v60 = v3 - 3;
          a2[2] = v60;
          if ( v60 >= v6 )
            goto LABEL_316;
          v61 = 5 * v60;
          v62 = *(_OWORD *)(v7 + 8 * v61);
          v63 = *(_OWORD *)(v7 + 8 * v61 + 16);
          v130 = *(_QWORD *)(v7 + 8 * v61 + 32);
          v129[1] = v63;
          v129[0] = v62;
LABEL_164:
          if ( !*((_QWORD *)&v131 + 1) || v132 < 0 )
            goto LABEL_317;
          if ( v132 == 2 )
          {
            v74 = *(_QWORD *)&v129[0];
            v75 = *(_QWORD *)&v127[0];
            if ( **((_WORD **)&v131 + 1) == 15649 )
            {
              v76 = *(_QWORD *)&v129[0] == 7LL && *(_QWORD *)&v127[0] == 7LL;
              if ( *(_QWORD *)&v129[0] != 7LL && *(_QWORD *)&v127[0] != 7LL )
                v76 = <uu_test::parser::Symbol as core::cmp::PartialEq>::eq(v129, v127);
              v77 = v76 ^ 1;
LABEL_176:
              *(_BYTE *)(a1 + 8) = v77;
              *(_QWORD *)a1 = 7LL;
              if ( *(_QWORD *)&v129[0] != 7LL )
                core::ptr::drop_in_place<uu_test::parser::Symbol>(v129);
              if ( *(_QWORD *)&v127[0] != 7LL )
                core::ptr::drop_in_place<uu_test::parser::Symbol>(v127);
              alloc::raw_vec::RawVec<T,A>::current_memory(&v107, &v131);
              if ( *((_QWORD *)&v107 + 1) )
                <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
                  &v132,
                  v107,
                  *((_QWORD *)&v107 + 1),
                  src[0]);
              v17 = 1;
              v11 = 0;
              v12 = 0;
              v13 = 0;
              v14 = 0;
              v15 = 0;
              v16 = 0;
              goto LABEL_16;
            }
          }
          else
          {
            v74 = *(_QWORD *)&v129[0];
            v75 = *(_QWORD *)&v127[0];
          }
          v77 = v74 == 7 && v75 == 7;
          if ( v74 != 7 && v75 != 7 )
            v77 = <uu_test::parser::Symbol as core::cmp::PartialEq>::eq(v129, v127);
          goto LABEL_176;
        }
      }
      *(_QWORD *)&v129[0] = 7LL;
      goto LABEL_164;
    case 5LL:
      if ( v105.m256i_i64[1] )
      {
        v137 = *(_OWORD *)&v105.m256i_u64[2];
        v138 = v106;
        v36 = v105.m256i_i64[3];
        if ( !v105.m256i_i64[3] || v106 < 0 )
          goto LABEL_317;
        v37 = &v107;
        std::sys::os_str::bytes::Slice::to_str(&v107);
        if ( (_QWORD)v107 || (v39 = (_WORD *)*((_QWORD *)&v107 + 1)) == 0LL )
          core::option::unwrap_failed(&off_106748);
        v40 = a2[2];
        if ( v40 )
        {
          v38 = src[0];
          v41 = v40 - 1;
          a2[2] = v41;
          if ( v41 >= *a2 )
            goto LABEL_316;
          v36 = a2[1];
          v40 = 5 * v41;
          v37 = *(__int128 **)(v36 + 8 * v40 + 32);
          v42 = *(_OWORD *)(v36 + 8 * v40 + 16);
          *(_OWORD *)v165.m256i_i8 = *(_OWORD *)(v36 + 8 * v40);
          v166 = v37;
          *(_OWORD *)&v165.m256i_u64[2] = v42;
          if ( v165.m256i_i64[0] == 3 )
          {
            v103 = v165.m256i_i64[3];
            v102 = *(_OWORD *)&v165.m256i_u64[1];
            if ( v38 != 2 )
              goto LABEL_318;
            if ( *v39 != 25133 )
            {
              switch ( *v39 )
              {
                case 0x632D:
                  if ( !*((_QWORD *)&v102 + 1) || v103 < 0 )
                    goto LABEL_317;
                  v43 = uu_test::path(*((_QWORD *)&v102 + 1), v103, &unk_1EA63);
                  goto LABEL_311;
                case 0x642D:
                  if ( !*((_QWORD *)&v102 + 1) || v103 < 0 )
                    goto LABEL_317;
                  v43 = uu_test::path(*((_QWORD *)&v102 + 1), v103, &unk_1EA62);
                  goto LABEL_311;
                case 0x652D:
                  if ( !*((_QWORD *)&v102 + 1) || v103 < 0 )
                    goto LABEL_317;
                  v43 = uu_test::path(*((_QWORD *)&v102 + 1), v103, &unk_1EA61);
                  goto LABEL_311;
                case 0x662D:
                  if ( !*((_QWORD *)&v102 + 1) || v103 < 0 )
                    goto LABEL_317;
                  v43 = uu_test::path(*((_QWORD *)&v102 + 1), v103, &unk_1EA60);
                  goto LABEL_311;
                case 0x672D:
                  if ( !*((_QWORD *)&v102 + 1) || v103 < 0 )
                    goto LABEL_317;
                  v43 = uu_test::path(*((_QWORD *)&v102 + 1), v103, &unk_1EA5F);
                  goto LABEL_311;
                case 0x472D:
                  if ( !*((_QWORD *)&v102 + 1) || v103 < 0 )
                    goto LABEL_317;
                  v43 = uu_test::path(*((_QWORD *)&v102 + 1), v103, &unk_1EA5E);
                  goto LABEL_311;
                case 0x682D:
                  v93 = *((_QWORD *)&v102 + 1);
                  if ( !*((_QWORD *)&v102 + 1) )
                    goto LABEL_317;
                  v94 = v103;
                  if ( v103 < 0 )
                    goto LABEL_317;
                  break;
                case 0x6B2D:
                  if ( !*((_QWORD *)&v102 + 1) || v103 < 0 )
                    goto LABEL_317;
                  v43 = uu_test::path(*((_QWORD *)&v102 + 1), v103, &unk_1EA5D);
                  goto LABEL_311;
                case 0x4C2D:
                  v93 = *((_QWORD *)&v102 + 1);
                  if ( !*((_QWORD *)&v102 + 1) )
                    goto LABEL_317;
                  v94 = v103;
                  if ( v103 < 0 )
                    goto LABEL_317;
                  break;
                default:
                  switch ( *v39 )
                  {
                    case 0x4E2D:
                      if ( !*((_QWORD *)&v102 + 1) || v103 < 0 )
                        goto LABEL_317;
                      v43 = uu_test::path(*((_QWORD *)&v102 + 1), v103, &unk_1EA5B);
                      break;
                    case 0x4F2D:
                      if ( !*((_QWORD *)&v102 + 1) || v103 < 0 )
                        goto LABEL_317;
                      v43 = uu_test::path(*((_QWORD *)&v102 + 1), v103, &unk_1EA5A);
                      break;
                    case 0x702D:
                      if ( !*((_QWORD *)&v102 + 1) || v103 < 0 )
                        goto LABEL_317;
                      v43 = uu_test::path(*((_QWORD *)&v102 + 1), v103, &unk_1EA59);
                      break;
                    case 0x722D:
                      if ( !*((_QWORD *)&v102 + 1) || v103 < 0 )
                        goto LABEL_317;
                      v43 = uu_test::path(*((_QWORD *)&v102 + 1), v103, &unk_1EA58);
                      break;
                    case 0x532D:
                      if ( !*((_QWORD *)&v102 + 1) || v103 < 0 )
                        goto LABEL_317;
                      v43 = uu_test::path(*((_QWORD *)&v102 + 1), v103, &unk_1EA57);
                      break;
                    case 0x732D:
                      if ( !*((_QWORD *)&v102 + 1) || v103 < 0 )
                        goto LABEL_317;
                      v43 = uu_test::path(*((_QWORD *)&v102 + 1), v103, &unk_1EA56);
                      break;
                    case 0x742D:
                      if ( !*((_QWORD *)&v102 + 1) || v103 < 0 )
                        goto LABEL_317;
                      uu_test::isatty(&v175);
                      v101 = v176;
                      if ( v175 != 7 )
                      {
                        *(_QWORD *)a1 = v175;
                        *(_BYTE *)(a1 + 8) = v101;
                        *(_OWORD *)(a1 + 9) = *(_OWORD *)v177;
                        *(_QWORD *)(a1 + 24) = *(_QWORD *)&v177[15];
                        core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v102);
                        v50 = (__int64 *)&v137;
                        goto LABEL_111;
                      }
                      v43 = v176 & 1;
                      break;
                    case 0x752D:
                      if ( !*((_QWORD *)&v102 + 1) || v103 < 0 )
                        goto LABEL_317;
                      v43 = uu_test::path(*((_QWORD *)&v102 + 1), v103, &unk_1EA55);
                      break;
                    case 0x772D:
                      if ( !*((_QWORD *)&v102 + 1) || v103 < 0 )
                        goto LABEL_317;
                      v43 = uu_test::path(*((_QWORD *)&v102 + 1), v103, &unk_1EA54);
                      break;
                    case 0x782D:
                      if ( !*((_QWORD *)&v102 + 1) || v103 < 0 )
                        goto LABEL_317;
                      v43 = uu_test::path(*((_QWORD *)&v102 + 1), v103, &unk_1EA53);
                      break;
                    default:
LABEL_318:
                      uu_test::eval::panic_cold_explicit(v37);
                  }
LABEL_311:
                  *(_BYTE *)(a1 + 8) = v43;
                  *(_QWORD *)a1 = 7LL;
                  alloc::raw_vec::RawVec<T,A>::current_memory(&v107, &v102);
                  if ( *((_QWORD *)&v107 + 1) )
                    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
                      &v103,
                      v107,
                      *((_QWORD *)&v107 + 1),
                      src[0]);
                  alloc::raw_vec::RawVec<T,A>::current_memory(&v107, &v137);
                  if ( *((_QWORD *)&v107 + 1) )
                    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
                      &v138,
                      v107,
                      *((_QWORD *)&v107 + 1),
                      src[0]);
                  v13 = 1;
                  v11 = 0;
                  v12 = 0;
LABEL_12:
                  v14 = 0;
LABEL_13:
                  v15 = 0;
LABEL_14:
                  v16 = 0;
LABEL_15:
                  v17 = 0;
LABEL_16:
                  switch ( v105.m256i_i64[0] )
                  {
                    case 2LL:
                      if ( !v11 )
                        goto LABEL_27;
                      return a1;
                    case 3LL:
                      if ( !v12 )
                      {
LABEL_27:
                        alloc::raw_vec::RawVec<T,A>::current_memory(&v107, &v105.m256i_u64[1]);
                        if ( *((_QWORD *)&v107 + 1) )
                          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
                            &v105.m256i_u64[3],
                            v107,
                            *((_QWORD *)&v107 + 1),
                            src[0]);
                      }
                      return a1;
                    case 4LL:
                      if ( v105.m256i_i64[1] == 2 )
                      {
                        if ( !v15 )
                          goto LABEL_110;
                      }
                      else if ( v105.m256i_i64[1] == 1 )
                      {
                        if ( !v16 )
                          goto LABEL_110;
                      }
                      else if ( !v17 )
                      {
                        goto LABEL_110;
                      }
                      return a1;
                    case 5LL:
                      if ( v105.m256i_i64[1] )
                      {
                        if ( v13 )
                          return a1;
                      }
                      else if ( v14 )
                      {
                        return a1;
                      }
LABEL_110:
                      v50 = &v105.m256i_i64[2];
                      goto LABEL_111;
                    default:
                      return a1;
                  }
              }
              v43 = uu_test::path(v93, v94, &unk_1EA5C);
              goto LABEL_311;
            }
            if ( !*((_QWORD *)&v102 + 1) || v103 < 0 )
              goto LABEL_317;
            v43 = uu_test::path(*((_QWORD *)&v102 + 1), v103, &unk_1EA64);
            goto LABEL_311;
          }
        }
        else
        {
          v165.m256i_i64[0] = 7LL;
        }
        uu_test::eval::panic_cold_explicit(v37, v36, v40, v38);
      }
      v123 = v106;
      v122 = *(_OWORD *)&v105.m256i_u64[2];
      if ( v3 == 1 )
      {
        v109.m256i_i64[0] = 7LL;
        goto LABEL_161;
      }
      v52 = v3 - 2;
      a2[2] = v52;
      if ( v52 >= v6 )
        goto LABEL_316;
      v53 = 5 * v52;
      v54 = *(_QWORD *)(v7 + 8 * v53 + 32);
      v55 = *(_OWORD *)(v7 + 8 * v53 + 16);
      *(_OWORD *)v109.m256i_i8 = *(_OWORD *)(v7 + 8 * v53);
      v110 = v54;
      *(_OWORD *)&v109.m256i_u64[2] = v55;
      if ( v109.m256i_i64[0] == 3 )
      {
        v125 = v109.m256i_i64[3];
        v124 = *(_OWORD *)&v109.m256i_u64[1];
        goto LABEL_203;
      }
      if ( v109.m256i_i64[0] == 6 )
      {
        std::sys::os_str::bytes::Slice::to_owned(&v107, 1LL, 0LL);
        v125 = src[0];
        v124 = v107;
        if ( (v109.m256i_i64[0] | 4) != 7 )
          core::ptr::drop_in_place<uu_test::parser::Symbol>(&v109);
LABEL_203:
        v84 = <std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(&v122, &off_106738);
        v85 = *((_QWORD *)&v124 + 1) == 0LL || v125 < 0;
        if ( v84 )
        {
          if ( v85 )
            goto LABEL_317;
          v86 = v125 == 0;
        }
        else
        {
          if ( v85 )
            goto LABEL_317;
          v86 = v125 != 0;
        }
        *(_BYTE *)(a1 + 8) = v86;
        *(_QWORD *)a1 = 7LL;
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v124);
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v122);
        v14 = 1;
        v11 = 0;
        v12 = 0;
        v13 = 0;
        goto LABEL_13;
      }
      if ( v109.m256i_i64[0] != 7 )
      {
        if ( *((_QWORD *)&v122 + 1) && v123 >= 0 )
        {
          v173[0] = 1LL;
          v173[1] = *((_QWORD *)&v122 + 1);
          v173[2] = v123;
          v174 = 1;
          <T as alloc::string::ToString>::to_string(&v186, v173);
          *(_QWORD *)a1 = 3LL;
          *(_QWORD *)(a1 + 24) = v187;
          *(_OWORD *)(a1 + 8) = v186;
          if ( v109.m256i_i64[0] == 3 )
          {
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v109.m256i_u64[1]);
          }
          else if ( v109.m256i_i64[0] != 7 )
          {
            core::ptr::drop_in_place<uu_test::parser::Symbol>(&v109);
          }
          v50 = (__int64 *)&v122;
          goto LABEL_111;
        }
        goto LABEL_317;
      }
LABEL_161:
      *(_BYTE *)(a1 + 8) = 1;
      *(_QWORD *)a1 = 7LL;
      v50 = (__int64 *)&v122;
LABEL_111:
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(v50);
      return a1;
    case 6LL:
    case 7LL:
      goto LABEL_7;
    default:
      *(_QWORD *)a1 = 0LL;
      goto LABEL_9;
  }
}
