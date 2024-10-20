        _QWORD *a5)
{
  unsigned __int8 *v5; // r9
  __int64 v6; // r10
  unsigned __int8 *v7; // rdi
  __int64 v8; // r11
  unsigned __int8 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // rsi
  unsigned __int8 *v13; // r14
  __int64 result; // rax
  unsigned __int8 *v15; // r10
  __int64 v16; // rdi
  unsigned __int8 **v17; // rdi
  unsigned __int8 **v18; // rax
  unsigned __int8 *v19; // rbp
  unsigned __int64 v20; // r13
  unsigned __int8 *v21; // r12
  unsigned __int64 v22; // r14
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  unsigned __int8 v27; // cl
  unsigned __int8 v28; // dl
  _QWORD *v29; // rdi
  __int64 v30; // rax
  unsigned __int8 *v31; // r14
  unsigned __int8 *v32; // r13
  unsigned int v33; // eax
  int v34; // edx
  int v35; // esi
  int v36; // r8d
  int v37; // edi
  unsigned __int8 v38; // dl
  unsigned int v39; // esi
  int v40; // edi
  int v41; // r9d
  int v42; // r8d
  unsigned __int8 v43; // si
  __int64 v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // rax
  unsigned __int64 v47; // rcx
  double v48; // xmm0_8
  double v49; // xmm1_8
  __int64 v50; // rax
  char *v51; // rdx
  char *v52; // r8
  char *v53; // r9
  char **v54; // rsi
  __int64 v55; // rcx
  char *v56; // rdi
  unsigned __int64 v57; // r10
  char v58; // r14
  char v59; // r12
  unsigned __int8 v60; // r14
  _BYTE *v61; // rax
  char **v62; // rsi
  __int64 v63; // rcx
  unsigned __int64 v64; // rdi
  char *v65; // r8
  unsigned __int64 v66; // r10
  char v67; // bp
  char v68; // r12
  unsigned __int8 v69; // cl
  __int64 v70; // rdi
  unsigned __int8 *v71; // r15
  __int64 v72; // rcx
  unsigned __int64 v73; // rsi
  int v74; // eax
  int v75; // edx
  int v76; // edi
  int v77; // esi
  int v78; // eax
  int v79; // edx
  int v80; // edi
  int v81; // esi
  unsigned __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rax
  int v86; // r14d
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rdx
  unsigned __int64 v90; // rcx
  __int64 v91; // rsi
  __int64 v92; // rdx
  __int64 v93; // rcx
  int v94; // r13d
  __int64 v95; // rsi
  bool v96; // dl
  unsigned __int8 v97; // al
  _BYTE *v98; // rdx
  size_t v99; // rdx
  size_t v100; // rbx
  __int64 v101; // rbx
  int v102; // eax
  unsigned int v103; // ecx
  bool v104; // zf
  bool v105; // cf
  char **v106; // rdx
  __int64 v107; // [rsp+0h] [rbp-1C8h]
  __int64 v108; // [rsp+0h] [rbp-1C8h]
  __int64 v109; // [rsp+8h] [rbp-1C0h]
  __int64 v110; // [rsp+8h] [rbp-1C0h]
  __int64 v111; // [rsp+10h] [rbp-1B8h]
  __int64 v112; // [rsp+10h] [rbp-1B8h]
  __int64 v113; // [rsp+18h] [rbp-1B0h]
  __int64 v114; // [rsp+18h] [rbp-1B0h]
  __int64 v115; // [rsp+20h] [rbp-1A8h]
  int v116; // [rsp+20h] [rbp-1A8h]
  unsigned __int64 v117; // [rsp+28h] [rbp-1A0h]
  unsigned __int64 v118; // [rsp+30h] [rbp-198h]
  __int64 v119; // [rsp+38h] [rbp-190h]
  __int64 v120; // [rsp+40h] [rbp-188h]
  __int64 v121; // [rsp+48h] [rbp-180h]
  _BYTE *v122; // [rsp+50h] [rbp-178h]
  unsigned __int64 v123; // [rsp+58h] [rbp-170h]
  unsigned __int64 v124; // [rsp+60h] [rbp-168h]
  __int64 v125; // [rsp+68h] [rbp-160h]
  __int64 v126; // [rsp+70h] [rbp-158h]
  __int64 v127; // [rsp+78h] [rbp-150h]
  __int64 v128; // [rsp+80h] [rbp-148h]
  __int64 v129; // [rsp+88h] [rbp-140h]
  __int64 v130; // [rsp+90h] [rbp-138h]
  __int64 v131; // [rsp+98h] [rbp-130h]
  __int64 v132; // [rsp+A0h] [rbp-128h]
  __int64 v133; // [rsp+A8h] [rbp-120h]
  __int64 v134; // [rsp+B0h] [rbp-118h]
  __int64 v135; // [rsp+B8h] [rbp-110h]
  unsigned __int64 v138; // [rsp+D0h] [rbp-F8h]
  unsigned __int64 v139; // [rsp+D8h] [rbp-F0h]
  __int64 v140; // [rsp+E0h] [rbp-E8h]
  __int64 v141; // [rsp+E8h] [rbp-E0h]
  __int64 v142; // [rsp+F0h] [rbp-D8h]
  __int64 v143; // [rsp+F8h] [rbp-D0h]
  __int64 v144; // [rsp+100h] [rbp-C8h]
  __int64 v145; // [rsp+108h] [rbp-C0h]
  __int64 v146; // [rsp+110h] [rbp-B8h]
  __int64 v147; // [rsp+118h] [rbp-B0h]
  __int64 v148; // [rsp+120h] [rbp-A8h]
  unsigned __int8 *v149; // [rsp+128h] [rbp-A0h]
  __int64 v150; // [rsp+130h] [rbp-98h]
  __int64 v151; // [rsp+138h] [rbp-90h]
  __int64 v152; // [rsp+140h] [rbp-88h]
  __int64 v153; // [rsp+148h] [rbp-80h]
  __int64 v154; // [rsp+150h] [rbp-78h]
  __int64 v155; // [rsp+158h] [rbp-70h]
  unsigned __int8 *v156; // [rsp+160h] [rbp-68h]
  _QWORD v157[3]; // [rsp+168h] [rbp-60h] BYREF
  _QWORD v158[9]; // [rsp+180h] [rbp-48h] BYREF

  v5 = *(unsigned __int8 **)(a3 + 8);
  v6 = *(_QWORD *)(a3 + 72);
  v156 = &v5[56 * *(_QWORD *)(a3 + 16)];
  v7 = a1[2];
  v8 = *(_QWORD *)(a3 + 88);
  v9 = a2[2];
  v154 = v8 * (_QWORD)v9;
  v155 = (_QWORD)v7 * v8;
  v153 = a5[1];
  v151 = (_QWORD)v7 * *(_QWORD *)(a3 + 80);
  v150 = (_QWORD)v9 * *(_QWORD *)(a3 + 80);
  v135 = v6 * (_QWORD)v7;
  v134 = (_QWORD)v9 * v6;
  v138 = a5[2];
  v123 = a5[8];
  v133 = a5[7];
  v117 = a5[5];
  v121 = a5[4];
  v152 = a4[1];
  v139 = a4[2];
  v124 = a4[8];
  v132 = a4[7];
  v118 = a4[5];
  v120 = a4[4];
  HIBYTE(v111) = *(_BYTE *)(a3 + 135);
  v148 = *(unsigned __int8 *)(a3 + 136);
  v147 = *(unsigned __int8 *)(a3 + 137);
  v146 = *(unsigned __int8 *)(a3 + 138);
  v145 = *(unsigned __int8 *)(a3 + 139);
  v144 = *(unsigned __int8 *)(a3 + 140);
  v143 = *(unsigned __int8 *)(a3 + 141);
  v142 = *(unsigned __int8 *)(a3 + 142);
  v141 = *(unsigned __int8 *)(a3 + 143);
  v140 = *(unsigned __int8 *)(a3 + 144);
  v131 = *(unsigned __int8 *)(a3 + 145);
  v130 = *(unsigned __int8 *)(a3 + 146);
  v129 = *(unsigned __int8 *)(a3 + 147);
  v128 = *(unsigned __int8 *)(a3 + 148);
  v127 = *(unsigned __int8 *)(a3 + 149);
  v126 = *(unsigned __int8 *)(a3 + 150);
  v122 = (_BYTE *)a3;
  v125 = *(unsigned __int8 *)(a3 + 151);
  v10 = 0LL;
  v119 = 0LL;
  v11 = 0LL;
  while ( 2 )
  {
    if ( v5 != v156 )
    {
      v15 = v5;
      if ( v5[55] )
      {
        v16 = v11 + v155;
        if ( v11 + v155 < v139 )
        {
          if ( v11 + v154 < v138 )
          {
            v17 = (unsigned __int8 **)(v152 + 16 * v16);
            v18 = (unsigned __int8 **)(v153 + 16 * (v11 + v154));
            v113 = ++v11;
            v19 = *v18;
            v20 = (unsigned __int64)v18[1];
            v21 = *v17;
            v22 = (unsigned __int64)v17[1];
            switch ( v5[53] )
            {
              case 0u:
                goto LABEL_12;
              case 1u:
                goto LABEL_83;
              case 2u:
                goto LABEL_49;
              case 3u:
                goto LABEL_55;
              case 4u:
                goto LABEL_2;
              case 5u:
                goto LABEL_86;
              case 6u:
                goto LABEL_91;
            }
          }
          core::panicking::panic_bounds_check(v11 + v154, v138, &off_192D80);
        }
        core::panicking::panic_bounds_check(v16, v139, &off_192D68);
      }
      v113 = v11;
      v19 = *a2;
      v20 = (unsigned __int64)a2[1];
      v21 = *a1;
      v22 = (unsigned __int64)a1[1];
      switch ( v5[53] )
      {
        case 0u:
LABEL_12:
          v23 = v119 + v135;
          if ( v119 + v135 >= v118 )
            core::panicking::panic_bounds_check(v23, v118, &off_192D98);
          v115 = v10;
          v24 = v119 + v134;
          if ( v119 + v134 >= v117 )
          {
            v106 = &off_192DB0;
LABEL_175:
            core::panicking::panic_bounds_check(v24, v117, v106);
          }
          v25 = 16 * v23;
          v26 = 16 * v24;
          v27 = *(_BYTE *)(v120 + v25 + 8);
          v28 = *(_BYTE *)(v121 + v26 + 8);
          if ( v27 != v28 )
          {
            v105 = v27 < v28;
            goto LABEL_159;
          }
          if ( v20 )
          {
            if ( v22 )
            {
              v29 = (_QWORD *)(v120 + v25);
              v30 = *(_QWORD *)(v121 + v26);
              if ( *v29 != v30 )
              {
                v96 = *v29 < v30;
                goto LABEL_142;
              }
            }
          }
          ++v119;
          v31 = &v21[v22];
          v32 = &v19[v20];
          while ( 1 )
          {
            do
            {
              v33 = 1114112;
              if ( v21 == v31 )
              {
                v21 = v31;
                break;
              }
              v34 = *v21;
              if ( (v34 & 0x80u) != 0 )
              {
                v35 = v34 & 0x1F;
                v36 = v21[1] & 0x3F;
                if ( (unsigned __int8)v34 <= 0xDFu )
                {
                  v21 += 2;
                  v34 = v36 | (v35 << 6);
                }
                else
                {
                  v37 = (v36 << 6) | v21[2] & 0x3F;
                  if ( (unsigned __int8)v34 < 0xF0u )
                  {
                    v21 += 3;
                    v34 = (v35 << 12) | v37;
                  }
                  else
                  {
                    v38 = v21[3];
                    v21 += 4;
                    v34 = ((v35 & 7) << 18) | (v37 << 6) | v38 & 0x3F;
                    if ( v34 == 1114112 )
                      break;
                  }
                }
              }
              else
              {
                ++v21;
              }
              if ( (unsigned int)(v34 - 48) >= 0xA )
                v34 = 1114112;
              v33 = v34;
            }
            while ( v34 == 1114112 );
            while ( 1 )
            {
              a3 = 1114112LL;
              if ( v19 == v32 )
                break;
              v39 = *v19;
              if ( (v39 & 0x80u) != 0 )
              {
                v40 = v39 & 0x1F;
                v41 = v19[1] & 0x3F;
                if ( (unsigned __int8)v39 <= 0xDFu )
                {
                  v19 += 2;
                  v39 = v41 | (v40 << 6);
                }
                else
                {
                  v42 = (v41 << 6) | v19[2] & 0x3F;
                  if ( (unsigned __int8)v39 < 0xF0u )
                  {
                    v19 += 3;
                    v39 = (v40 << 12) | v42;
                  }
                  else
                  {
                    v43 = v19[3];
                    v19 += 4;
                    v39 = ((v40 & 7) << 18) | (v42 << 6) | v43 & 0x3F;
                    if ( v39 == 1114112 )
                      goto LABEL_45;
                  }
                }
              }
              else
              {
                ++v19;
              }
              if ( v39 - 48 >= 0xA )
                v39 = 1114112;
              a3 = v39;
              if ( v39 != 1114112 )
                goto LABEL_45;
            }
            v19 = v32;
LABEL_45:
            if ( v33 == 1114112 )
            {
              if ( (_DWORD)a3 == 1114112 )
                goto LABEL_121;
              v11 = v113;
              if ( (_DWORD)a3 == 48 )
              {
                while ( v19 != v32 )
                {
                  v74 = *v19;
                  if ( (v74 & 0x80u) == 0 )
                  {
                    ++v19;
                  }
                  else
                  {
                    v75 = v74 & 0x1F;
                    v76 = v19[1] & 0x3F;
                    if ( (unsigned __int8)v74 <= 0xDFu )
                    {
                      v19 += 2;
                      a3 = v76 | (unsigned int)(v75 << 6);
                      v74 = a3;
                    }
                    else
                    {
                      v77 = (v76 << 6) | v19[2] & 0x3F;
                      if ( (unsigned __int8)v74 < 0xF0u )
                      {
                        v19 += 3;
                        a3 = (unsigned int)(v75 << 12);
                        v74 = a3 | v77;
                      }
                      else
                      {
                        a3 = (unsigned __int8)(v74 & 7) << 18;
                        v74 = a3 | (v77 << 6) | v19[3] & 0x3F;
                        if ( v74 == 1114112 )
                          break;
                        v19 += 4;
                      }
                    }
                  }
                  if ( (unsigned int)(v74 - 58) >= 0xFFFFFFF7 )
                    goto LABEL_157;
                }
                LOBYTE(result) = 0;
                goto LABEL_5;
              }
LABEL_157:
              v105 = v27 != 0;
LABEL_159:
              LOBYTE(result) = v105 ? -1 : 1;
              goto LABEL_160;
            }
            if ( (_DWORD)a3 == 1114112 )
              break;
            if ( v33 != (_DWORD)a3 )
            {
              v96 = v33 < (unsigned int)a3;
LABEL_142:
              LOBYTE(result) = v96 && v27 != 0 ? -1 : 1;
              if ( v27 || v96 )
              {
LABEL_160:
                v103 = (unsigned __int8)result;
                LOBYTE(result) = -(char)result;
                v104 = v15[52] == 0;
                goto LABEL_161;
              }
LABEL_156:
              LOBYTE(result) = -1;
              goto LABEL_160;
            }
          }
          if ( v33 != 48 )
          {
LABEL_155:
            LOBYTE(result) = 1;
            if ( v27 )
              goto LABEL_160;
            goto LABEL_156;
          }
          while ( v21 != v31 )
          {
            v78 = *v21;
            if ( (v78 & 0x80u) == 0 )
            {
              ++v21;
            }
            else
            {
              v79 = v78 & 0x1F;
              v80 = v21[1] & 0x3F;
              if ( (unsigned __int8)v78 <= 0xDFu )
              {
                v21 += 2;
                a3 = v80 | (unsigned int)(v79 << 6);
                v78 = a3;
              }
              else
              {
                v81 = (v80 << 6) | v21[2] & 0x3F;
                if ( (unsigned __int8)v78 < 0xF0u )
                {
                  v21 += 3;
                  a3 = (unsigned int)(v79 << 12);
                  v78 = a3 | v81;
                }
                else
                {
                  a3 = (unsigned __int8)(v78 & 7) << 18;
                  v78 = a3 | (v81 << 6) | v21[3] & 0x3F;
                  if ( v78 == 1114112 )
                    break;
                  v21 += 4;
                }
              }
            }
            if ( (unsigned int)(v78 - 58) >= 0xFFFFFFF7 )
              goto LABEL_155;
          }
LABEL_121:
          LOBYTE(result) = 0;
LABEL_4:
          v11 = v113;
LABEL_5:
          v5 = v15 + 56;
          v10 = v115;
          if ( (_BYTE)result )
            goto LABEL_160;
          continue;
        case 1u:
LABEL_83:
          v70 = v119 + v135;
          if ( v119 + v135 >= v118 )
            core::panicking::panic_bounds_check(v70, v118, &off_192DC8);
          v115 = v10;
          v24 = v119 + v134;
          if ( v119 + v134 < v117 )
          {
            v71 = v5;
            ++v119;
            v157[0] = v21;
            v157[1] = v22;
            v157[2] = v120 + 16 * v70;
            v158[0] = v19;
            v158[1] = v20;
            v158[2] = v121 + 16 * v24;
            LOBYTE(result) = uu_sort::numeric_str_cmp::human_numeric_str_cmp(v157, v158);
LABEL_95:
            v15 = v71;
            goto LABEL_4;
          }
          v106 = &off_192DE0;
          goto LABEL_175;
        case 2u:
LABEL_49:
          v44 = v10 + v151;
          if ( v10 + v151 >= v124 )
            core::panicking::panic_bounds_check(v44, v124, &off_192DF8);
          v11 = v113;
          if ( v10 + v150 >= v123 )
            core::panicking::panic_bounds_check(v10 + v150, v123, &off_192E10);
          v45 = 16 * v44;
          v46 = 16 * (v10 + v150);
          v115 = v10 + 1;
          v47 = *(_QWORD *)(v132 + v45);
          a3 = *(_QWORD *)(v133 + v46);
          if ( v47 == 3 && (_DWORD)a3 == 3 )
          {
            v48 = *(double *)(v133 + v46 + 8);
            v49 = *(double *)(v132 + v45 + 8);
            if ( v48 < v49 )
            {
              LOBYTE(result) = 1;
              if ( v49 < v48 )
                core::option::unwrap_failed(&off_192E58);
              goto LABEL_160;
            }
            LODWORD(result) = -(v49 < v48);
          }
          else
          {
            LOBYTE(result) = v47 != a3;
            if ( v47 < a3 )
              goto LABEL_156;
          }
          goto LABEL_5;
        case 3u:
LABEL_55:
          v149 = v5;
          v50 = core::str::<impl str>::trim_matches(v21, v22, a3, v10, v11, v5, v107, v109, v111, v113, v10);
          v54 = &off_192E70;
          v55 = 0LL;
          break;
        case 4u:
LABEL_2:
          v115 = v10;
          v12 = v22;
          v13 = v5;
          LOBYTE(result) = uucore::features::version_cmp::version_cmp(v21, v12, v19, v20);
          goto LABEL_3;
        case 5u:
LABEL_86:
          v115 = v10;
          v71 = v5;
          LODWORD(v107) = v5[49];
          if ( !(unsigned __int8)uu_sort::custom_str_cmp::custom_str_cmp(v21, v22, v19, v20, v5[51], v5[50]) )
          {
            LOBYTE(result) = 0;
            goto LABEL_95;
          }
          if ( (v111 & 0x100000000000000LL) == 0 )
            core::option::unwrap_failed(&off_192E28);
          result = 0xFDF4DF4E514C73ELL;
          v15 = v71;
          if ( v22 )
          {
            if ( v22 >= 8 )
            {
              v82 = v22 & 0xFFFFFFFFFFFFFFF8LL;
              v72 = 0xCBF29CE484222325LL;
              do
              {
                v83 = 0x100000001B3LL
                    * ((0x100000001B3LL
                      * ((0x100000001B3LL
                        * ((0x100000001B3LL
                          * ((0x100000001B3LL
                            * ((0x100000001B3LL * ((0x100000001B3LL * (v72 ^ *v21)) ^ v21[1])) ^ v21[2])) ^ v21[3])) ^ v21[4])) ^ v21[5])) ^ v21[6]);
                v84 = v21[7];
                v21 += 8;
                v72 = 0x100000001B3LL * (v83 ^ v84);
                v82 -= 8LL;
              }
              while ( v82 );
            }
            else
            {
              v72 = 0xCBF29CE484222325LL;
            }
            v85 = v72;
            v86 = v22 & 7;
            if ( v86 )
            {
              v87 = 0LL;
              do
              {
                v85 = 0x100000001B3LL * (v72 ^ v21[v87++]);
                v72 = v85;
              }
              while ( v86 != v87 );
            }
            result = 0x1EFAC7090AEF4A21LL * ((0x100000001B3LL * (v85 ^ 0xFF)) ^ 0x10);
          }
          v88 = 0xFDF4DF4E514C73ELL;
          if ( v20 )
          {
            if ( v20 >= 8 )
            {
              v90 = v20 & 0xFFFFFFFFFFFFFFF8LL;
              v89 = 0xCBF29CE484222325LL;
              do
              {
                v91 = 0x100000001B3LL
                    * ((0x100000001B3LL
                      * ((0x100000001B3LL
                        * ((0x100000001B3LL
                          * ((0x100000001B3LL
                            * ((0x100000001B3LL * ((0x100000001B3LL * (v89 ^ *v19)) ^ v19[1])) ^ v19[2])) ^ v19[3])) ^ v19[4])) ^ v19[5])) ^ v19[6]);
                v92 = v19[7];
                v19 += 8;
                v89 = 0x100000001B3LL * (v91 ^ v92);
                v90 -= 8LL;
              }
              while ( v90 );
            }
            else
            {
              v89 = 0xCBF29CE484222325LL;
            }
            v93 = v89;
            v94 = v20 & 7;
            if ( v94 )
            {
              v95 = 0LL;
              do
              {
                v93 = 0x100000001B3LL * (v89 ^ v19[v95++]);
                v89 = v93;
              }
              while ( v94 != v95 );
            }
            v88 = 0x1EFAC7090AEF4A21LL * ((0x100000001B3LL * (v93 ^ 0xFF)) ^ 0x10);
          }
          a3 = 0x100000001B3LL
             * (v125 ^ (0x100000001B3LL
                      * (v126 ^ (0x100000001B3LL
                               * (v127 ^ (0x100000001B3LL
                                        * (v128 ^ (0x100000001B3LL
                                                 * (v129 ^ (0x100000001B3LL
                                                          * (v130 ^ (0x100000001B3LL
                                                                   * (v131 ^ (0x100000001B3LL
                                                                            * (v140 ^ (0x100000001B3LL
                                                                                     * (v141 ^ (0x100000001B3LL
                                                                                              * (v142 ^ (0x100000001B3LL * (v143 ^ (0x100000001B3LL * (v144 ^ (0x100000001B3LL * (v145 ^ (0x100000001B3LL * (v146 ^ (0x100000001B3LL * (v147 ^ (0x100000001B3LL * (v148 ^ result)))))))))))))))))))))))))))))));
          LOBYTE(result) = result != v88;
          v11 = v113;
          if ( a3 < 0x100000001B3LL
                  * (v125 ^ (0x100000001B3LL
                           * (v126 ^ (0x100000001B3LL
                                    * (v127 ^ (0x100000001B3LL
                                             * (v128 ^ (0x100000001B3LL
                                                      * (v129 ^ (0x100000001B3LL
                                                               * (v130 ^ (0x100000001B3LL
                                                                        * (v131 ^ (0x100000001B3LL
                                                                                 * (v140 ^ (0x100000001B3LL
                                                                                          * (v141 ^ (0x100000001B3LL * (v142 ^ (0x100000001B3LL * (v143 ^ (0x100000001B3LL * (v144 ^ (0x100000001B3LL * (v145 ^ (0x100000001B3LL * (v146 ^ (0x100000001B3LL * (v147 ^ (0x100000001B3LL * (v148 ^ (unsigned __int64)v88))))))))))))))))))))))))))))))) )
            goto LABEL_156;
          goto LABEL_5;
        case 6u:
LABEL_91:
          v115 = v10;
          LODWORD(v107) = v5[49];
          v73 = v22;
          v13 = v5;
          LOBYTE(result) = uu_sort::custom_str_cmp::custom_str_cmp(v21, v73, v19, v20, v5[51], v5[50]);
LABEL_3:
          v15 = v13;
          goto LABEL_4;
      }
      while ( 1 )
      {
        v56 = v54[1];
        if ( !v56 )
        {
LABEL_67:
          v60 = *((_BYTE *)v54 + 16);
          goto LABEL_68;
        }
        v52 = *v54;
        if ( v56 >= v51 )
        {
          if ( v56 == v51 )
          {
LABEL_62:
            v53 = (char *)*(unsigned __int8 *)v50;
            if ( ((unsigned __int8)v53 | (unsigned __int8)(32 * ((unsigned __int8)((_BYTE)v53 - 65) < 0x1Au))) == ((unsigned __int8)*v52 | (unsigned __int8)(32 * ((unsigned __int8)(*v52 - 65) < 0x1Au))) )
            {
              v53 = v56 - 1;
              v57 = 0LL;
              do
              {
                if ( v53 == (char *)v57 )
                  goto LABEL_67;
                v58 = v52[v57 + 1];
                v59 = *(_BYTE *)(v50 + v57 + 1) | (32 * ((unsigned __int8)(*(_BYTE *)(v50 + v57 + 1) - 65) < 0x1Au));
                ++v57;
              }
              while ( v59 == ((unsigned __int8)v58 | (unsigned __int8)(32 * ((unsigned __int8)(v58 - 65) < 0x1Au))) );
              if ( v57 >= (unsigned __int64)v56 )
                goto LABEL_67;
            }
          }
        }
        else if ( v56[v50] > -65 )
        {
          goto LABEL_62;
        }
        v55 += 3LL;
        v54 = &(&off_192E70)[v55];
        if ( v55 == 36 )
        {
          v60 = 0;
LABEL_68:
          v61 = (_BYTE *)core::str::<impl str>::trim_matches(
                           v19,
                           v20,
                           v51,
                           v55 * 8,
                           v52,
                           v53,
                           v108,
                           v110,
                           v112,
                           v114,
                           v116);
          v62 = &off_192E70;
          v63 = 0LL;
          while ( 2 )
          {
            v64 = (unsigned __int64)v62[1];
            if ( !v64 )
            {
LABEL_80:
              v69 = *((_BYTE *)v62 + 16);
              goto LABEL_81;
            }
            v65 = *v62;
            if ( v64 >= a3 )
            {
              if ( v64 == a3 )
                goto LABEL_75;
            }
            else if ( (char)v61[v64] > -65 )
            {
LABEL_75:
              if ( (*v61 | (unsigned __int8)(32 * ((unsigned __int8)(*v61 - 65) < 0x1Au))) == ((unsigned __int8)*v65 | (unsigned __int8)(32 * ((unsigned __int8)(*v65 - 65) < 0x1Au))) )
              {
                v66 = 0LL;
                do
                {
                  if ( v64 - 1 == v66 )
                    goto LABEL_80;
                  v67 = v61[v66 + 1] | (32 * ((unsigned __int8)(v61[v66 + 1] - 65) < 0x1Au));
                  v68 = v65[v66 + 1] | (32 * ((unsigned __int8)(v65[v66 + 1] - 65) < 0x1Au));
                  ++v66;
                }
                while ( v67 == v68 );
                if ( v66 >= v64 )
                  goto LABEL_80;
              }
            }
            v63 += 3LL;
            v62 = &(&off_192E70)[v63];
            if ( v63 == 36 )
            {
              v69 = 0;
LABEL_81:
              LODWORD(result) = -(v60 < v69);
              v15 = v149;
              if ( v60 > v69 )
              {
                LOBYTE(result) = 1;
                goto LABEL_160;
              }
              goto LABEL_4;
            }
            continue;
          }
        }
      }
    }
    break;
  }
  v97 = 0;
  v98 = v122;
  if ( v122[152] != 5 && !v122[131] && !v122[132] )
  {
    v99 = (size_t)a2[1];
    v100 = (size_t)a1[1];
    v105 = v100 < v99;
    v101 = v100 - v99;
    if ( v105 )
      v99 = (size_t)a1[1];
    v102 = memcmp(*a1, *a2, v99);
    v98 = v122;
    if ( v102 )
      v101 = v102;
    v97 = -1;
    if ( v101 >= 0 )
      v97 = v101 != 0;
  }
  v103 = v97;
  LOBYTE(result) = -v97;
  v104 = v98[130] == 0;
LABEL_161:
  result = (unsigned __int8)result;
  if ( v104 )
    return v103;
  return result;
}
