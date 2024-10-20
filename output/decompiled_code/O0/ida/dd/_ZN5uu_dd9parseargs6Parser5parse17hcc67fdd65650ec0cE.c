__int64 *__fastcall uu_dd::parseargs::Parser::parse(__int64 *a1, __int64 *a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v5; // r13
  char v6; // al
  const void *v7; // rbp
  size_t v8; // r15
  size_t v9; // rbx
  char *v10; // r12
  void *v11; // rbp
  unsigned __int16 *v12; // r15
  unsigned __int64 v13; // rbp
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  char *v17; // rax
  char *v18; // rbx
  size_t v19; // r12
  char *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  char *v25; // rbx
  size_t v26; // r12
  char *v27; // rbx
  _BYTE *v28; // rax
  int v29; // eax
  void *v30; // rbp
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  _BYTE *v33; // rax
  char *v34; // rbp
  size_t v35; // r12
  char *v36; // rbp
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rbx
  unsigned __int64 v40; // r13
  unsigned __int8 v41; // r9
  unsigned __int8 v42; // al
  __int64 v43; // rdi
  char v44; // si
  char v45; // r8
  char *v46; // rsi
  bool v47; // zf
  char *v48; // rdi
  char v49; // r11
  char v50; // r10
  __int64 *v51; // rbx
  __int64 *result; // rax
  __int64 v53; // rcx
  char v54; // di
  bool v55; // r8
  char v56; // cl
  char v57; // r15
  unsigned __int64 v58; // r9
  unsigned __int128 v59; // rax
  char v60; // cl
  char v61; // r12
  char v62; // r8
  char v63; // r14
  char v64; // r15
  __int64 v65; // rdi
  __int64 v66; // r9
  __int64 *v67; // rbx
  void *v68; // rdi
  char *v69; // rsi
  char *v70; // rdi
  unsigned __int16 *src; // [rsp+8h] [rbp-350h]
  char srca; // [rsp+8h] [rbp-350h]
  __int64 v73; // [rsp+10h] [rbp-348h] BYREF
  unsigned __int64 v74; // [rsp+18h] [rbp-340h]
  void *v75; // [rsp+20h] [rbp-338h] BYREF
  char *v76; // [rsp+28h] [rbp-330h] BYREF
  char *v77; // [rsp+30h] [rbp-328h]
  void *dest; // [rsp+38h] [rbp-320h] BYREF
  size_t v79; // [rsp+40h] [rbp-318h]
  __int64 v80; // [rsp+48h] [rbp-310h]
  size_t v81; // [rsp+50h] [rbp-308h]
  int v82; // [rsp+58h] [rbp-300h]
  int v83; // [rsp+5Ch] [rbp-2FCh]
  char v84; // [rsp+60h] [rbp-2F8h]
  __int16 v85; // [rsp+68h] [rbp-2F0h]
  char *v86; // [rsp+70h] [rbp-2E8h]
  char v87; // [rsp+7Fh] [rbp-2D9h] BYREF
  void **p_dest; // [rsp+80h] [rbp-2D8h]
  char *v89; // [rsp+88h] [rbp-2D0h]
  _QWORD *v90; // [rsp+90h] [rbp-2C8h]
  char *v91; // [rsp+98h] [rbp-2C0h]
  char *v92; // [rsp+A0h] [rbp-2B8h]
  _QWORD *v93; // [rsp+A8h] [rbp-2B0h]
  __int64 *v94; // [rsp+B0h] [rbp-2A8h]
  _QWORD *v95; // [rsp+B8h] [rbp-2A0h]
  _QWORD v96[3]; // [rsp+C0h] [rbp-298h] BYREF
  _QWORD v97[3]; // [rsp+D8h] [rbp-280h] BYREF
  _QWORD v98[3]; // [rsp+F0h] [rbp-268h] BYREF
  _BYTE *v99; // [rsp+108h] [rbp-250h]
  __int64 *v100; // [rsp+110h] [rbp-248h]
  char *v101; // [rsp+118h] [rbp-240h]
  _BYTE *v102; // [rsp+120h] [rbp-238h]
  _BYTE *v103; // [rsp+128h] [rbp-230h]
  _BYTE *v104; // [rsp+130h] [rbp-228h]
  __int64 *v105; // [rsp+138h] [rbp-220h]
  char *v106; // [rsp+140h] [rbp-218h]
  char *v107; // [rsp+148h] [rbp-210h]
  _BYTE *v108; // [rsp+150h] [rbp-208h]
  _BYTE *v109; // [rsp+158h] [rbp-200h]
  _BYTE *v110; // [rsp+160h] [rbp-1F8h]
  _BYTE *v111; // [rsp+168h] [rbp-1F0h]
  _BYTE *v112; // [rsp+170h] [rbp-1E8h]
  _BYTE *v113; // [rsp+178h] [rbp-1E0h]
  _BYTE *v114; // [rsp+180h] [rbp-1D8h]
  _BYTE *v115; // [rsp+188h] [rbp-1D0h]
  _BYTE *v116; // [rsp+190h] [rbp-1C8h]
  _BYTE *v117; // [rsp+198h] [rbp-1C0h]
  _BYTE *v118; // [rsp+1A0h] [rbp-1B8h]
  char *v119; // [rsp+1A8h] [rbp-1B0h]
  char *v120; // [rsp+1B0h] [rbp-1A8h]
  char *v121; // [rsp+1B8h] [rbp-1A0h]
  _BYTE *v122; // [rsp+1C0h] [rbp-198h]
  _BYTE *v123; // [rsp+1C8h] [rbp-190h]
  _BYTE *v124; // [rsp+1D0h] [rbp-188h]
  _BYTE *v125; // [rsp+1D8h] [rbp-180h]
  _BYTE *v126; // [rsp+1E0h] [rbp-178h]
  _BYTE *v127; // [rsp+1E8h] [rbp-170h]
  _BYTE *v128; // [rsp+1F0h] [rbp-168h]
  _BYTE *v129; // [rsp+1F8h] [rbp-160h]
  char *v130; // [rsp+200h] [rbp-158h]
  char *v131; // [rsp+208h] [rbp-150h]
  char *v132; // [rsp+210h] [rbp-148h]
  char *v133; // [rsp+218h] [rbp-140h]
  char *v134; // [rsp+220h] [rbp-138h]
  char *v135; // [rsp+228h] [rbp-130h]
  _QWORD v136[5]; // [rsp+230h] [rbp-128h] BYREF
  _OWORD v137[11]; // [rsp+258h] [rbp-100h] BYREF
  _QWORD v138[2]; // [rsp+308h] [rbp-50h] BYREF
  unsigned __int16 *v139; // [rsp+318h] [rbp-40h]
  size_t n; // [rsp+320h] [rbp-38h]

  v94 = a1;
  if ( !a4 )
  {
LABEL_192:
    v39 = *a2;
    v13 = a2[1];
    v10 = (char *)a2[2];
    v40 = a2[3];
    v8 = a2[4];
    if ( *a2 == 2 )
      goto LABEL_289;
    memcpy(v137, a2 + 5, sizeof(v137));
    v136[0] = v39;
    v136[1] = v13;
    v89 = v10;
    v136[2] = v10;
    v136[3] = v40;
    v136[4] = v8;
    LOBYTE(v90) = HIBYTE(v137[7]);
    LOBYTE(v92) = BYTE1(v137[8]);
    LOBYTE(v86) = BYTE5(v137[8]);
    LOBYTE(v93) = BYTE7(v137[8]);
    v41 = BYTE10(v137[7]) & 1;
    if ( (BYTE8(v137[7]) & 1) != 0 )
    {
      v43 = 1LL;
      if ( v41 | BYTE9(v137[7]) & 1 )
        goto LABEL_226;
      v42 = 0;
    }
    else if ( (BYTE9(v137[7]) & 1) != 0 )
    {
      v43 = 1LL;
      v42 = 1;
      if ( v41 )
        goto LABEL_226;
    }
    else
    {
      v42 = v41 ^ 3;
    }
    v44 = BYTE12(v137[7]) & 1;
    if ( (BYTE11(v137[7]) & 1) != 0 )
    {
      v43 = 2LL;
      v45 = 1;
      if ( v44 )
        goto LABEL_226;
    }
    else
    {
      v45 = (2 * v44) ^ 2;
    }
    if ( v42 == 3 )
    {
      if ( v45 == 2 )
      {
        v46 = 0LL;
        goto LABEL_224;
      }
      v47 = v45 == 0;
      v48 = "";
      v46 = (char *)&unk_27507;
    }
    else
    {
      if ( v45 == 2 )
      {
        v46 = (char *)dword_27D08 + dword_27D08[v42];
        goto LABEL_224;
      }
      if ( v42 )
      {
        v47 = v45 == 0;
        if ( v42 == 1 )
        {
          v48 = (char *)&unk_27B07;
          v46 = (char *)&unk_27C07;
        }
        else
        {
          v48 = (char *)&unk_27A07;
          v46 = (char *)&unk_27907;
        }
      }
      else
      {
        v47 = v45 == 0;
        v48 = (char *)&unk_27907;
        v46 = (char *)&unk_27A07;
      }
    }
    if ( v47 )
      v46 = v48;
LABEL_224:
    v49 = BYTE3(v137[8]) & 1;
    v50 = BYTE4(v137[8]) & 1;
    if ( (BYTE4(v137[8]) & 1) != 0 )
    {
      v43 = 4LL;
      if ( v49 )
        goto LABEL_226;
    }
    if ( *((_QWORD *)&v137[0] + 1) == 1LL )
    {
      v91 = *(char **)&v137[1];
      if ( v42 != 3 )
      {
        v53 = v42 == 0;
        if ( !v46 )
          goto LABEL_234;
        goto LABEL_238;
      }
      if ( (BYTE13(v137[7]) & 1) == 0 )
      {
        v53 = 2LL - (BYTE14(v137[7]) & 1);
        if ( !v46 )
          goto LABEL_234;
        goto LABEL_238;
      }
      v43 = 3LL;
      if ( (BYTE14(v137[7]) & 1) == 0 )
      {
        v53 = 0LL;
        if ( !v46 )
        {
LABEL_234:
          if ( v53 )
          {
            if ( (_DWORD)v53 == 2 )
              v54 = 7;
            else
              v54 = 2;
          }
          else
          {
            v54 = 1;
          }
          goto LABEL_248;
        }
LABEL_238:
        v54 = 0;
        if ( v53 )
        {
          if ( (_DWORD)v53 == 2 )
            v91 = v46;
          else
            v54 = (v42 == 0) + 5;
        }
        else
        {
          v54 = (v42 == 0) + 3;
        }
LABEL_248:
        v55 = (_DWORD)v53 != 2;
        if ( v39 == 1 )
        {
          v56 = BYTE8(v137[9]) & 1;
        }
        else
        {
          v56 = 1;
          if ( !v39 )
          {
            v13 = 512LL;
            if ( !v89 )
              v40 = 512LL;
            if ( v8 )
              v13 = *(_QWORD *)&v137[0];
LABEL_256:
            v57 = (char)v86;
            v58 = *(_QWORD *)&v137[2];
            if ( !*((_QWORD *)&v137[1] + 1) && (BYTE7(v137[9]) & 1) == 0 )
            {
              v59 = v40 * (unsigned __int128)*(unsigned __int64 *)&v137[2];
              if ( !is_mul_ok(v40, *(unsigned __int64 *)&v137[2]) )
                goto LABEL_300;
              v58 = v40 * *(_QWORD *)&v137[2];
            }
            *(_QWORD *)&v59 = *(_QWORD *)&v137[3];
            LOBYTE(v86) = v56;
            v89 = (char *)v58;
            if ( *((_QWORD *)&v137[2] + 1)
              || (BYTE7(v137[10]) & 1) != 0
              || (v59 = v13 * (unsigned __int128)*(unsigned __int64 *)&v137[3],
                  is_mul_ok(v13, *(unsigned __int64 *)&v137[3])) )
            {
              v60 = v54;
              v61 = v137[8] & 1;
              LOBYTE(v90) = (unsigned __int8)v90 & 1;
              v62 = 32 * v55;
              LOBYTE(v92) = (unsigned __int8)v92 & 1;
              v63 = BYTE2(v137[8]) & 1;
              v64 = v57 & 1;
              srca = BYTE6(v137[8]) & 1;
              LOBYTE(v93) = (unsigned __int8)v93 & 1;
              v65 = *(_QWORD *)&v137[4];
              v66 = 2LL;
              if ( *((_QWORD *)&v137[3] + 1) != 2LL )
              {
                v66 = 1LL;
                if ( (BYTE6(v137[9]) & 1) == 0 )
                  v66 = *((_QWORD *)&v137[3] + 1);
                if ( *((_QWORD *)&v137[3] + 1) )
                  v66 = *((_QWORD *)&v137[3] + 1);
              }
              BYTE8(v59) = BYTE8(v137[10]);
              v67 = v94;
              *v94 = v66;
              v67[1] = v65;
              v67[4] = *((_QWORD *)&v137[5] + 1);
              *((_OWORD *)v67 + 1) = *(_OWORD *)((char *)&v137[4] + 8);
              *(_OWORD *)(v67 + 5) = v137[6];
              v67[7] = *(_QWORD *)&v137[7];
              *((_OWORD *)v67 + 4) = *(_OWORD *)((char *)&v137[8] + 8);
              *((_BYTE *)v67 + 80) = v60;
              *((_BYTE *)v67 + 81) = v61;
              v67[11] = (__int64)v91;
              v67[12] = (__int64)v46;
              *((_BYTE *)v67 + 104) = v61;
              *((_BYTE *)v67 + 105) = v62;
              *((_BYTE *)v67 + 106) = (_BYTE)v90;
              *((_BYTE *)v67 + 107) = (_BYTE)v92;
              v67[14] = v40;
              v67[15] = v13;
              v67[16] = (__int64)v89;
              v67[17] = v59;
              *((_BYTE *)v67 + 144) = v63;
              *((_BYTE *)v67 + 145) = v49;
              *((_BYTE *)v67 + 146) = v50;
              *((_BYTE *)v67 + 147) = v64;
              *((_BYTE *)v67 + 148) = srca;
              *((_BYTE *)v67 + 149) = (_BYTE)v93;
              *(_QWORD *)&v59 = *(_QWORD *)((char *)&v137[9] + 9);
              *(__int64 *)((char *)v67 + 157) = *(_QWORD *)&v137[10];
              *(__int64 *)((char *)v67 + 150) = v59;
              result = v67;
              *((_BYTE *)v67 + 165) = (_BYTE)v86;
              *((_BYTE *)v67 + 166) = BYTE8(v59);
              return result;
            }
LABEL_300:
            core::panicking::panic_const::panic_const_mul_overflow(
              &anon_58dd99f240cb7732bfa404b8c0d77df7_5_llvm_12656870414327897742,
              v46,
              *((_QWORD *)&v59 + 1));
          }
        }
        v40 = v13;
        goto LABEL_256;
      }
    }
    else
    {
      v43 = 9LL;
      if ( ((BYTE14(v137[7]) | BYTE13(v137[7])) & 1) == 0 )
      {
        v53 = 2LL;
        if ( !v46 )
          goto LABEL_234;
        goto LABEL_238;
      }
    }
LABEL_226:
    v51 = v94;
    v94[1] = v43;
    *v51 = 3LL;
    core::ptr::drop_in_place<uu_dd::parseargs::Parser>(v136);
    return v51;
  }
  v5 = a3;
  v93 = &a3[2 * a4];
  v99 = (char *)a2 + 193;
  v104 = (char *)a2 + 201;
  v118 = (char *)a2 + 199;
  v117 = (char *)a2 + 198;
  v116 = (char *)a2 + 197;
  v115 = (char *)a2 + 196;
  v103 = (char *)a2 + 202;
  v114 = (char *)a2 + 195;
  v113 = (char *)a2 + 207;
  v102 = (char *)a2 + 203;
  v112 = a2 + 25;
  v111 = (char *)a2 + 183;
  v129 = (char *)a2 + 181;
  v128 = (char *)a2 + 180;
  v127 = (char *)a2 + 179;
  v126 = (char *)a2 + 178;
  v110 = a2 + 23;
  v125 = (char *)a2 + 177;
  v124 = (char *)a2 + 191;
  v123 = (char *)a2 + 190;
  v109 = (char *)a2 + 189;
  v108 = (char *)a2 + 185;
  v122 = (char *)a2 + 182;
  v92 = (char *)(a2 + 20);
  p_dest = &dest;
  v121 = (char *)a2 + 171;
  v133 = (char *)(a2 + 21);
  v86 = (char *)a2 + 167;
  v107 = (char *)a2 + 173;
  v120 = (char *)a2 + 172;
  v132 = (char *)a2 + 169;
  v89 = (char *)a2 + 166;
  v91 = (char *)a2 + 162;
  v135 = (char *)a2 + 174;
  v131 = (char *)a2 + 170;
  v134 = (char *)a2 + 161;
  v101 = (char *)a2 + 175;
  v106 = (char *)a2 + 165;
  v119 = (char *)a2 + 163;
  v130 = (char *)a2 + 164;
  v90 = a2 + 17;
  v105 = a2 + 19;
  v95 = a2 + 14;
  v100 = a2 + 16;
  while ( 2 )
  {
    if ( !v5 )
      goto LABEL_192;
    v7 = (const void *)*v5;
    v8 = v5[1];
    core::str::<impl str>::split_once(v138, *v5, v8, 61LL);
    if ( !v138[0] )
      goto LABEL_206;
    src = v139;
    v9 = n;
    switch ( v138[1] )
    {
      case 2LL:
        switch ( *(_WORD *)v138[0] )
        {
          case 0x7362:
            uu_dd::parseargs::parse_bytes_with_opt_multiplier(&v76, v139, n);
            v13 = (unsigned __int64)v76;
            v10 = v77;
            if ( v76 != &byte_9[5] )
              goto LABEL_210;
            *a2 = 1LL;
            a2[1] = (__int64)v10;
            break;
          case 0x6669:
            alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v76, n, 0LL);
            v10 = v77;
            if ( v76 )
              goto LABEL_296;
            v30 = dest;
            core::intrinsics::copy_nonoverlapping::precondition_check(src, dest, 1LL, 1LL, v9);
            memcpy(v30, src, v9);
            if ( *v95 != 0x8000000000000000LL )
            {
              alloc::raw_vec::RawVec<T,A>::current_memory(&v76, v95);
              if ( v77 )
                <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v100, v76, v77, dest);
            }
            a2[14] = (__int64)v10;
            a2[15] = (__int64)v30;
            a2[16] = v9;
            break;
          case 0x666F:
            alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v76, n, 0LL);
            v10 = v77;
            if ( v76 )
              goto LABEL_296;
            v11 = dest;
            core::intrinsics::copy_nonoverlapping::precondition_check(src, dest, 1LL, 1LL, v9);
            memcpy(v11, src, v9);
            if ( *v90 != 0x8000000000000000LL )
            {
              alloc::raw_vec::RawVec<T,A>::current_memory(&v76, v90);
              if ( v77 )
                <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v105, v76, v77, dest);
            }
            a2[17] = (__int64)v10;
            a2[18] = (__int64)v11;
            a2[19] = v9;
            break;
          default:
            goto LABEL_206;
        }
        goto LABEL_5;
      case 3LL:
        if ( *(_WORD *)v138[0] ^ 0x6263 | *(unsigned __int8 *)(v138[0] + 2LL) ^ 0x73 )
        {
          if ( *(_WORD *)v138[0] ^ 0x6269 | *(unsigned __int8 *)(v138[0] + 2LL) ^ 0x73 )
          {
            if ( *(_WORD *)v138[0] ^ 0x626F | *(unsigned __int8 *)(v138[0] + 2LL) ^ 0x73 )
            {
LABEL_206:
              alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v76, v8, 0LL);
              v10 = v77;
              if ( !v76 )
              {
                v40 = (unsigned __int64)dest;
                core::intrinsics::copy_nonoverlapping::precondition_check(v7, dest, 1LL, 1LL, v8);
                memcpy((void *)v40, v7, v8);
                v13 = 0LL;
                goto LABEL_288;
              }
LABEL_296:
              v70 = v10;
              goto LABEL_297;
            }
            uu_dd::parseargs::parse_bytes_with_opt_multiplier(&v76, v139, n);
            v13 = (unsigned __int64)v76;
            v10 = v77;
            if ( v76 != &byte_9[5] )
              goto LABEL_210;
            a2[4] = 1LL;
            a2[5] = (__int64)v10;
          }
          else
          {
            uu_dd::parseargs::parse_bytes_with_opt_multiplier(&v76, v139, n);
            v13 = (unsigned __int64)v76;
            v10 = v77;
            if ( v76 != &byte_9[5] )
            {
LABEL_210:
              v40 = (unsigned __int64)dest;
              v8 = v79;
              goto LABEL_288;
            }
            a2[2] = 1LL;
            a2[3] = (__int64)v10;
          }
        }
        else
        {
          uu_dd::parseargs::parse_bytes_with_opt_multiplier(&v76, v139, n);
          v13 = (unsigned __int64)v76;
          v10 = v77;
          if ( v76 != &byte_9[5] )
            goto LABEL_210;
          a2[6] = 1LL;
          a2[7] = (__int64)v10;
        }
        goto LABEL_5;
      case 4LL:
        if ( *(_DWORD *)v138[0] == 1986948963 )
        {
          *((_BYTE *)a2 + 192) = 1;
          LODWORD(v73) = 0;
          core::char::methods::encode_utf8_raw(44LL, &v73, 4LL);
          v16 = (__int64)src;
          if ( v15 >= 0x100 )
            goto LABEL_298;
          v76 = 0LL;
          v77 = (char *)v9;
          dest = src;
          v79 = v9;
          v80 = 0LL;
          v81 = v9;
          v82 = v73;
          v83 = 44;
          v84 = v15;
          v85 = 1;
          while ( 2 )
          {
            v18 = (char *)dest;
            v19 = v79;
            <core::str::pattern::CharSearcher as core::str::pattern::Searcher>::next_match(&v73, &dest, v15, v16);
            if ( v73 )
            {
              v8 = v74 - (_QWORD)v76;
              if ( v74 < (unsigned __int64)v76 || v74 > v19 )
                goto LABEL_295;
              v16 = (__int64)v75;
              v20 = &v18[(_QWORD)v76];
              v76 = (char *)v75;
              if ( v20 )
                goto LABEL_58;
            }
            else if ( (v85 & 0x100) == 0 )
            {
              HIBYTE(v85) = 1;
              if ( (v85 & 1) != 0 || v77 != v76 )
              {
                v8 = v77 - v76;
                if ( v77 < v76 || (unsigned __int64)v77 > v79 )
LABEL_295:
                  core::panicking::panic_nounwind(
                    anon_8fd984650b32faced47dbe24bc844e61_4_llvm_1964130512766541972,
                    102LL);
                v20 = &v76[(_QWORD)dest];
                if ( &v76[(_QWORD)dest] )
                {
LABEL_58:
                  switch ( v8 )
                  {
                    case 3uLL:
                      v16 = (unsigned __int8)v20[2] ^ 0x6Du;
                      LOWORD(v16) = *(_WORD *)v20 ^ 0x6269 | (unsigned __int8)v20[2] ^ 0x6D;
                      v17 = v91;
                      if ( (_WORD)v16 )
                        goto LABEL_211;
                      goto LABEL_46;
                    case 4uLL:
                      v17 = v86;
                      if ( *(_DWORD *)v20 != 1650554739 )
                      {
                        v17 = v133;
                        if ( *(_DWORD *)v20 != 1668184435 )
                        {
                          v17 = v121;
                          if ( *(_DWORD *)v20 != 1818458213 )
                            goto LABEL_211;
                        }
                      }
                      goto LABEL_46;
                    case 5uLL:
                      v16 = *(_DWORD *)v20 ^ 0x69637361 | (unsigned __int8)v20[4] ^ 0x69u;
                      v17 = v92;
                      if ( *(_DWORD *)v20 ^ 0x69637361 | (unsigned __int8)v20[4] ^ 0x69 )
                      {
                        v16 = *(_DWORD *)v20 ^ 0x7361636C | (unsigned __int8)v20[4] ^ 0x65u;
                        v17 = v130;
                        if ( *(_DWORD *)v20 ^ 0x7361636C | (unsigned __int8)v20[4] ^ 0x65 )
                        {
                          v16 = *(_DWORD *)v20 ^ 0x73616375 | (unsigned __int8)v20[4] ^ 0x65u;
                          v17 = v119;
                          if ( *(_DWORD *)v20 ^ 0x73616375 | (unsigned __int8)v20[4] ^ 0x65 )
                          {
                            v16 = *(_DWORD *)v20 ^ 0x636F6C62 | (unsigned __int8)v20[4] ^ 0x6Bu;
                            v17 = v106;
                            if ( *(_DWORD *)v20 ^ 0x636F6C62 | (unsigned __int8)v20[4] ^ 0x6B )
                            {
                              v16 = *(_DWORD *)v20 ^ 0x6E797366 | (unsigned __int8)v20[4] ^ 0x63u;
                              v17 = v101;
                              if ( *(_DWORD *)v20 ^ 0x6E797366 | (unsigned __int8)v20[4] ^ 0x63 )
                                goto LABEL_211;
                            }
                          }
                        }
                      }
                      goto LABEL_46;
                    case 6uLL:
                      v16 = *(_DWORD *)v20 ^ 0x64636265 | *((unsigned __int16 *)v20 + 2) ^ 0x6369u;
                      v17 = v134;
                      if ( *(_DWORD *)v20 ^ 0x64636265 | *((unsigned __int16 *)v20 + 2) ^ 0x6369 )
                      {
                        v16 = *(_DWORD *)v20 ^ 0x72617073 | *((unsigned __int16 *)v20 + 2) ^ 0x6573u;
                        v17 = v131;
                        if ( *(_DWORD *)v20 ^ 0x72617073 | *((unsigned __int16 *)v20 + 2) ^ 0x6573 )
                          goto LABEL_211;
                      }
                      goto LABEL_46;
                    case 7uLL:
                      v15 = 1801678700LL;
                      v16 = *(_DWORD *)v20 ^ 0x6C626E75 | *(_DWORD *)(v20 + 3) ^ 0x6B636F6Cu;
                      v17 = v89;
                      if ( *(_DWORD *)v20 ^ 0x6C626E75 | *(_DWORD *)(v20 + 3) ^ 0x6B636F6C )
                      {
                        v15 = 1919906418LL;
                        v16 = *(_DWORD *)v20 ^ 0x72656F6E | *(_DWORD *)(v20 + 3) ^ 0x726F7272u;
                        v17 = v132;
                        if ( *(_DWORD *)v20 ^ 0x72656F6E | *(_DWORD *)(v20 + 3) ^ 0x726F7272 )
                        {
                          v15 = 1952540018LL;
                          v16 = *(_DWORD *)v20 ^ 0x72636F6E | *(_DWORD *)(v20 + 3) ^ 0x74616572u;
                          v17 = v120;
                          if ( *(_DWORD *)v20 ^ 0x72636F6E | *(_DWORD *)(v20 + 3) ^ 0x74616572 )
                          {
                            v15 = 1668183410LL;
                            v16 = *(_DWORD *)v20 ^ 0x72746F6E | *(_DWORD *)(v20 + 3) ^ 0x636E7572u;
                            v17 = v107;
                            if ( *(_DWORD *)v20 ^ 0x72746F6E | *(_DWORD *)(v20 + 3) ^ 0x636E7572 )
                              goto LABEL_211;
                          }
                        }
                      }
                      goto LABEL_46;
                    case 9uLL:
                      v16 = *(_QWORD *)v20 ^ 0x6E79736174616466LL | (unsigned __int8)v20[8] ^ 0x63LL;
                      v17 = v135;
                      if ( v16 )
                        goto LABEL_211;
LABEL_46:
                      *v17 = 1;
                      if ( (v85 & 0x100) == 0 )
                        continue;
                      goto LABEL_5;
                    default:
LABEL_211:
                      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v73, v8, 0LL);
                      v10 = (char *)v74;
                      if ( v73 )
                        goto LABEL_299;
                      v40 = (unsigned __int64)v75;
                      core::intrinsics::copy_nonoverlapping::precondition_check(v20, v75, 1LL, 1LL, v8);
                      memcpy((void *)v40, v20, v8);
                      v13 = 6LL;
                      break;
                  }
                  goto LABEL_288;
                }
              }
            }
            goto LABEL_5;
          }
        }
        if ( *(_DWORD *)v138[0] == 1801807219 )
          goto LABEL_89;
        if ( *(_DWORD *)v138[0] != 1885956979 )
          goto LABEL_206;
        goto LABEL_32;
      case 5LL:
        if ( !(*(_DWORD *)v138[0] ^ 0x6E756F63 | *(unsigned __int8 *)(v138[0] + 4LL) ^ 0x74) )
        {
          uu_dd::parseargs::parse_bytes_with_opt_multiplier(&v76, v139, n);
          v13 = (unsigned __int64)v76;
          v10 = v77;
          if ( v76 != &byte_9[5] )
            goto LABEL_210;
          if ( v9 > 0xF )
          {
            if ( core::slice::memchr::memchr_aligned(66LL, src, v9) != 1 )
            {
LABEL_151:
              v21 = 0LL;
              goto LABEL_152;
            }
          }
          else
          {
            v21 = 0LL;
            if ( !v9 )
            {
LABEL_152:
              a2[12] = v21;
              a2[13] = (__int64)v10;
              goto LABEL_5;
            }
            while ( *((_BYTE *)src + v21) != 66 )
            {
              if ( v9 == ++v21 )
                goto LABEL_151;
            }
          }
          v21 = 1LL;
          goto LABEL_152;
        }
        if ( !(*(_DWORD *)v138[0] ^ 0x616C6669 | *(unsigned __int8 *)(v138[0] + 4LL) ^ 0x67) )
        {
          LODWORD(v73) = 0;
          core::char::methods::encode_utf8_raw(44LL, &v73, 4LL);
          v24 = (__int64)src;
          if ( v23 < 0x100 )
          {
            v76 = 0LL;
            v77 = (char *)v9;
            dest = src;
            v79 = v9;
            v80 = 0LL;
            v81 = v9;
            v82 = v73;
            v83 = 44;
            v84 = v23;
            v85 = 1;
            while ( 1 )
            {
              v25 = (char *)dest;
              v26 = v79;
              <core::str::pattern::CharSearcher as core::str::pattern::Searcher>::next_match(&v73, &dest, v23, v24);
              if ( v73 )
              {
                v8 = v74 - (_QWORD)v76;
                if ( v74 < (unsigned __int64)v76 || v74 > v26 )
                  goto LABEL_295;
                v24 = (__int64)v75;
                v27 = &v25[(_QWORD)v76];
                v76 = (char *)v75;
                if ( !v27 )
                  goto LABEL_5;
              }
              else
              {
                if ( (v85 & 0x100) != 0 )
                  goto LABEL_5;
                HIBYTE(v85) = 1;
                if ( (v85 & 1) == 0 && v77 == v76 )
                  goto LABEL_5;
                v8 = v77 - v76;
                if ( v77 < v76 || (unsigned __int64)v77 > v79 )
                  goto LABEL_295;
                v27 = &v76[(_QWORD)dest];
                if ( !&v76[(_QWORD)dest] )
                  goto LABEL_5;
              }
              switch ( v8 )
              {
                case 3uLL:
                  if ( *(_WORD *)v27 ^ 0x6963 | (unsigned __int8)v27[2] ^ 0x6F )
                    goto LABEL_281;
                  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v73, 3LL, 0LL);
                  v10 = (char *)v74;
                  if ( v73 )
                    goto LABEL_299;
                  v40 = (unsigned __int64)v75;
                  core::intrinsics::copy_nonoverlapping::precondition_check(v27, v75, 1LL, 1LL, 3LL);
                  *(_BYTE *)(v40 + 2) = v27[2];
                  *(_WORD *)v40 = *(_WORD *)v27;
                  v13 = 11LL;
                  v8 = 3LL;
                  goto LABEL_288;
                case 4uLL:
                  v28 = v128;
                  if ( *(_DWORD *)v27 == 1668184435 )
                    goto LABEL_135;
                  if ( *(_DWORD *)v27 != 1954047348 )
                    goto LABEL_281;
                  <str as alloc::string::ToString>::to_string(v98, v27, 4LL);
LABEL_279:
                  v10 = (char *)v98[0];
                  v40 = v98[1];
                  v13 = 11LL;
                  v8 = v98[2];
                  goto LABEL_288;
                case 5uLL:
                  v24 = *(_DWORD *)v27 ^ 0x6E797364 | (unsigned __int8)v27[4] ^ 0x63u;
                  v28 = v127;
                  if ( *(_DWORD *)v27 ^ 0x6E797364 | (unsigned __int8)v27[4] ^ 0x63 )
                    goto LABEL_281;
                  goto LABEL_135;
                case 6uLL:
                  v24 = *(_DWORD *)v27 ^ 0x65726964 | *((unsigned __int16 *)v27 + 2) ^ 0x7463u;
                  v28 = v125;
                  if ( !(*(_DWORD *)v27 ^ 0x65726964 | *((unsigned __int16 *)v27 + 2) ^ 0x7463) )
                    goto LABEL_135;
                  v24 = *(_DWORD *)v27 ^ 0x74636F6E | *((unsigned __int16 *)v27 + 2) ^ 0x7974u;
                  v28 = v110;
                  if ( !(*(_DWORD *)v27 ^ 0x74636F6E | *((unsigned __int16 *)v27 + 2) ^ 0x7974) )
                    goto LABEL_135;
                  if ( !(*(_DWORD *)v27 ^ 0x616E6962 | *((unsigned __int16 *)v27 + 2) ^ 0x7972) )
                  {
                    <str as alloc::string::ToString>::to_string(v97, v27, 6LL);
                    goto LABEL_291;
                  }
                  v29 = *(_DWORD *)v27 ^ 0x65707061;
                  v24 = v29 | *((unsigned __int16 *)v27 + 2) ^ 0x646Eu;
                  if ( v29 | *((unsigned __int16 *)v27 + 2) ^ 0x646E )
                  {
LABEL_281:
                    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v73, v8, 0LL);
                    v10 = (char *)v74;
                    if ( !v73 )
                    {
                      v40 = (unsigned __int64)v75;
                      core::intrinsics::copy_nonoverlapping::precondition_check(v27, v75, 1LL, 1LL, v8);
                      v68 = (void *)v40;
                      v69 = v27;
LABEL_287:
                      memcpy(v68, v69, v8);
                      v13 = 5LL;
                      goto LABEL_288;
                    }
LABEL_299:
                    v70 = v10;
                    p_dest = &v75;
LABEL_297:
                    alloc::raw_vec::handle_error(v70, *p_dest);
                  }
LABEL_136:
                  if ( (v85 & 0x100) != 0 )
                    goto LABEL_5;
                  break;
                case 7uLL:
                  v23 = 1701340001LL;
                  v24 = *(_DWORD *)v27 ^ 0x61636F6E | *(_DWORD *)(v27 + 3) ^ 0x65686361u;
                  v28 = v129;
                  if ( !(*(_DWORD *)v27 ^ 0x61636F6E | *(_DWORD *)(v27 + 3) ^ 0x65686361) )
                    goto LABEL_135;
                  v23 = 1701669236LL;
                  v24 = *(_DWORD *)v27 ^ 0x74616F6E | *(_DWORD *)(v27 + 3) ^ 0x656D6974u;
                  v28 = v111;
                  if ( !(*(_DWORD *)v27 ^ 0x74616F6E | *(_DWORD *)(v27 + 3) ^ 0x656D6974) )
                    goto LABEL_135;
                  if ( *(_DWORD *)v27 ^ 0x696C6F6E | *(_DWORD *)(v27 + 3) ^ 0x736B6E69 )
                    goto LABEL_281;
                  <str as alloc::string::ToString>::to_string(v96, v27, 7LL);
LABEL_294:
                  v10 = (char *)v96[0];
                  v40 = v96[1];
                  v13 = 11LL;
                  v8 = v96[2];
                  goto LABEL_288;
                case 8uLL:
                  v28 = v122;
                  v24 = 0x6B636F6C626E6F6ELL;
                  if ( *(_QWORD *)v27 != 0x6B636F6C626E6F6ELL )
                  {
                    v28 = v108;
                    v24 = 0x776F6C6C6F666F6ELL;
                    if ( *(_QWORD *)v27 != 0x776F6C6C6F666F6ELL )
                      goto LABEL_281;
                  }
                  goto LABEL_135;
                case 9uLL:
                  v24 = *(_QWORD *)v27 ^ 0x726F746365726964LL | (unsigned __int8)v27[8] ^ 0x79LL;
                  v28 = v126;
                  if ( v24 )
                  {
                    v24 = *(_QWORD *)v27 ^ 0x636F6C626C6C7566LL | (unsigned __int8)v27[8] ^ 0x6BLL;
                    v28 = v109;
                    if ( v24 )
                      goto LABEL_281;
                  }
                  goto LABEL_135;
                case 0xAuLL:
                  v24 = *(_QWORD *)v27 ^ 0x7479625F70696B73LL | *((unsigned __int16 *)v27 + 4) ^ 0x7365LL;
                  v28 = v124;
                  if ( !v24 )
                    goto LABEL_135;
                  v24 = *(_QWORD *)v27 ^ 0x7479625F6B656573LL | *((unsigned __int16 *)v27 + 4) ^ 0x7365LL;
                  if ( v24 )
                    goto LABEL_281;
                  goto LABEL_136;
                case 0xBuLL:
                  v23 = 0x73657479625F746ELL;
                  v24 = *(_QWORD *)v27 ^ 0x79625F746E756F63LL | *(_QWORD *)(v27 + 3) ^ 0x73657479625F746ELL;
                  v28 = v123;
                  if ( v24 )
                    goto LABEL_281;
LABEL_135:
                  *v28 = 1;
                  goto LABEL_136;
                default:
                  goto LABEL_281;
              }
            }
          }
LABEL_298:
          core::result::unwrap_failed(
            "char len should be less than 255\x01",
            32LL,
            &v87,
            &anon_cf3a0699d036d4a433c5534177ef0521_7_llvm_15788873575520176247,
            &anon_02b40c0e5390e28ea90696fc8ba4da26_29_llvm_16801938774416938183);
        }
        if ( *(_DWORD *)v138[0] ^ 0x616C666F | *(unsigned __int8 *)(v138[0] + 4LL) ^ 0x67 )
        {
          if ( !(*(_DWORD *)v138[0] ^ 0x6565736F | *(unsigned __int8 *)(v138[0] + 4LL) ^ 0x6B) )
          {
LABEL_89:
            uu_dd::parseargs::parse_bytes_with_opt_multiplier(&v76, v139, n);
            v13 = (unsigned __int64)v76;
            v10 = v77;
            if ( v76 != &byte_9[5] )
              goto LABEL_210;
            if ( v9 > 0xF )
            {
              if ( core::slice::memchr::memchr_aligned(66LL, src, v9) == 1 )
                goto LABEL_150;
LABEL_190:
              v22 = 0LL;
            }
            else
            {
              v22 = 0LL;
              if ( v9 )
              {
                while ( *((_BYTE *)src + v22) != 66 )
                {
                  if ( v9 == ++v22 )
                    goto LABEL_190;
                }
LABEL_150:
                v22 = 1LL;
              }
            }
            a2[10] = v22;
            a2[11] = (__int64)v10;
            goto LABEL_5;
          }
          if ( *(_DWORD *)v138[0] ^ 0x65657369 | *(unsigned __int8 *)(v138[0] + 4LL) ^ 0x6B )
            goto LABEL_206;
LABEL_32:
          uu_dd::parseargs::parse_bytes_with_opt_multiplier(&v76, v139, n);
          v13 = (unsigned __int64)v76;
          v10 = v77;
          if ( v76 != &byte_9[5] )
            goto LABEL_210;
          if ( v9 > 0xF )
          {
            if ( core::slice::memchr::memchr_aligned(66LL, src, v9) != 1 )
            {
LABEL_145:
              v14 = 0LL;
              goto LABEL_146;
            }
            goto LABEL_98;
          }
          v14 = 0LL;
          if ( v9 )
          {
            while ( *((_BYTE *)src + v14) != 66 )
            {
              if ( v9 == ++v14 )
                goto LABEL_145;
            }
LABEL_98:
            v14 = 1LL;
          }
LABEL_146:
          a2[8] = v14;
          a2[9] = (__int64)v10;
LABEL_5:
          v5 += 2;
          if ( v5 == v93 )
            goto LABEL_192;
          continue;
        }
        LODWORD(v73) = 0;
        core::char::methods::encode_utf8_raw(44LL, &v73, 4LL);
        v32 = (__int64)src;
        if ( v31 >= 0x100 )
          goto LABEL_298;
        v76 = 0LL;
        v77 = (char *)v9;
        dest = src;
        v79 = v9;
        v80 = 0LL;
        v81 = v9;
        v82 = v73;
        v83 = 44;
        v84 = v31;
        v85 = 1;
        while ( 2 )
        {
          v34 = (char *)dest;
          v35 = v79;
          <core::str::pattern::CharSearcher as core::str::pattern::Searcher>::next_match(&v73, &dest, v31, v32);
          if ( v73 )
          {
            v8 = v74 - (_QWORD)v76;
            if ( v74 < (unsigned __int64)v76 || v74 > v35 )
              goto LABEL_295;
            v32 = (__int64)v75;
            v36 = &v34[(_QWORD)v76];
            v76 = (char *)v75;
            if ( !v36 )
              goto LABEL_5;
          }
          else
          {
            if ( (v85 & 0x100) != 0 )
              goto LABEL_5;
            HIBYTE(v85) = 1;
            if ( (v85 & 1) == 0 && v77 == v76 )
              goto LABEL_5;
            v8 = v77 - v76;
            if ( v77 < v76 || (unsigned __int64)v77 > v79 )
              goto LABEL_295;
            v36 = &v76[(_QWORD)dest];
            if ( !&v76[(_QWORD)dest] )
              goto LABEL_5;
          }
          switch ( v8 )
          {
            case 3uLL:
              if ( *(_WORD *)v36 ^ 0x6963 | (unsigned __int8)v36[2] ^ 0x6F )
                goto LABEL_285;
              alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v73, v9, 0LL);
              v10 = (char *)v74;
              if ( v73 )
                goto LABEL_299;
              v40 = (unsigned __int64)v75;
              core::intrinsics::copy_nonoverlapping::precondition_check(src, v75, 1LL, 1LL, v9);
              memcpy((void *)v40, src, v9);
              v13 = 11LL;
              goto LABEL_219;
            case 4uLL:
              v33 = v117;
              if ( *(_DWORD *)v36 == 1668184435 )
                goto LABEL_156;
              if ( *(_DWORD *)v36 != 1954047348 )
                goto LABEL_285;
              <str as alloc::string::ToString>::to_string(v98, v36, 4LL);
              goto LABEL_279;
            case 5uLL:
              v32 = *(_DWORD *)v36 ^ 0x6E797364 | (unsigned __int8)v36[4] ^ 0x63u;
              v33 = v116;
              if ( !(*(_DWORD *)v36 ^ 0x6E797364 | (unsigned __int8)v36[4] ^ 0x63) )
                goto LABEL_156;
              goto LABEL_285;
            case 6uLL:
              v32 = *(_DWORD *)v36 ^ 0x65726964 | *((unsigned __int16 *)v36 + 2) ^ 0x7463u;
              v33 = v114;
              if ( !(*(_DWORD *)v36 ^ 0x65726964 | *((unsigned __int16 *)v36 + 2) ^ 0x7463) )
                goto LABEL_156;
              v32 = *(_DWORD *)v36 ^ 0x74636F6E | *((unsigned __int16 *)v36 + 2) ^ 0x7974u;
              v33 = v103;
              if ( !(*(_DWORD *)v36 ^ 0x74636F6E | *((unsigned __int16 *)v36 + 2) ^ 0x7974) )
                goto LABEL_156;
              if ( *(_DWORD *)v36 ^ 0x616E6962 | *((unsigned __int16 *)v36 + 2) ^ 0x7972 )
              {
                v32 = *(_DWORD *)v36 ^ 0x65707061 | *((unsigned __int16 *)v36 + 2) ^ 0x646Eu;
                v33 = v99;
                if ( *(_DWORD *)v36 ^ 0x65707061 | *((unsigned __int16 *)v36 + 2) ^ 0x646E )
                {
LABEL_285:
                  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v73, v8, 0LL);
                  v10 = (char *)v74;
                  if ( !v73 )
                  {
                    v40 = (unsigned __int64)v75;
                    core::intrinsics::copy_nonoverlapping::precondition_check(v36, v75, 1LL, 1LL, v8);
                    v68 = (void *)v40;
                    v69 = v36;
                    goto LABEL_287;
                  }
                  goto LABEL_299;
                }
LABEL_156:
                *v33 = 1;
LABEL_157:
                if ( (v85 & 0x100) != 0 )
                  goto LABEL_5;
                continue;
              }
              <str as alloc::string::ToString>::to_string(v97, v36, 6LL);
LABEL_291:
              v10 = (char *)v97[0];
              v40 = v97[1];
              v13 = 11LL;
              v8 = v97[2];
LABEL_288:
              core::ptr::drop_in_place<uu_dd::parseargs::Parser>(a2);
LABEL_289:
              result = v94;
              v94[1] = v13;
              result[2] = (__int64)v10;
              result[3] = v40;
              result[4] = v8;
              *result = 3LL;
              return result;
            case 7uLL:
              v31 = 1701340001LL;
              v32 = *(_DWORD *)v36 ^ 0x61636F6E | *(_DWORD *)(v36 + 3) ^ 0x65686361u;
              v33 = v118;
              if ( !(*(_DWORD *)v36 ^ 0x61636F6E | *(_DWORD *)(v36 + 3) ^ 0x65686361) )
                goto LABEL_156;
              v31 = 1701669236LL;
              v32 = *(_DWORD *)v36 ^ 0x74616F6E | *(_DWORD *)(v36 + 3) ^ 0x656D6974u;
              v33 = v104;
              if ( !(*(_DWORD *)v36 ^ 0x74616F6E | *(_DWORD *)(v36 + 3) ^ 0x656D6974) )
                goto LABEL_156;
              if ( *(_DWORD *)v36 ^ 0x696C6F6E | *(_DWORD *)(v36 + 3) ^ 0x736B6E69 )
                goto LABEL_285;
              <str as alloc::string::ToString>::to_string(v96, v36, 7LL);
              goto LABEL_294;
            case 8uLL:
              v33 = v112;
              v32 = 0x6B636F6C626E6F6ELL;
              if ( *(_QWORD *)v36 != 0x6B636F6C626E6F6ELL )
              {
                v33 = v102;
                v32 = 0x776F6C6C6F666F6ELL;
                if ( *(_QWORD *)v36 != 0x776F6C6C6F666F6ELL )
                  goto LABEL_285;
              }
              goto LABEL_156;
            case 9uLL:
              v32 = *(_QWORD *)v36 ^ 0x726F746365726964LL | (unsigned __int8)v36[8] ^ 0x79LL;
              v33 = v115;
              if ( !v32 )
                goto LABEL_156;
              v37 = *(_QWORD *)v36 ^ 0x636F6C626C6C7566LL;
              v38 = (unsigned __int8)v36[8] ^ 0x6BLL;
              goto LABEL_182;
            case 0xAuLL:
              v32 = *(_QWORD *)v36 ^ 0x7479625F6B656573LL | *((unsigned __int16 *)v36 + 4) ^ 0x7365LL;
              v33 = v113;
              if ( !v32 )
                goto LABEL_156;
              v37 = *(_QWORD *)v36 ^ 0x7479625F70696B73LL;
              v38 = *((unsigned __int16 *)v36 + 4) ^ 0x7365LL;
LABEL_182:
              v32 = v37 | v38;
              if ( v32 )
                goto LABEL_285;
              goto LABEL_157;
            case 0xBuLL:
              v37 = *(_QWORD *)v36 ^ 0x79625F746E756F63LL;
              v31 = 0x73657479625F746ELL;
              v38 = *(_QWORD *)(v36 + 3) ^ 0x73657479625F746ELL;
              goto LABEL_182;
            default:
              goto LABEL_285;
          }
        }
      case 6LL:
        if ( *(_DWORD *)v138[0] ^ 0x74617473 | *(unsigned __int16 *)(v138[0] + 4LL) ^ 0x7375 )
          goto LABEL_206;
        if ( n == 8 )
        {
          v12 = v139;
          if ( *(_QWORD *)v139 != 0x73736572676F7270LL )
            goto LABEL_217;
          v6 = 0;
        }
        else
        {
          v12 = v139;
          if ( n == 6 )
          {
            v6 = 1;
            if ( *(_DWORD *)v139 ^ 0x66786F6E | v139[2] ^ 0x7265 )
              goto LABEL_217;
          }
          else if ( n != 4 || (v6 = 2, *(_DWORD *)v139 != 1701736302) )
          {
LABEL_217:
            alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v76, n, 0LL);
            v10 = v77;
            if ( !v76 )
            {
              v40 = (unsigned __int64)dest;
              core::intrinsics::copy_nonoverlapping::precondition_check(v12, dest, 1LL, 1LL, v9);
              memcpy((void *)v40, v12, v9);
              v13 = 10LL;
LABEL_219:
              v8 = v9;
              goto LABEL_288;
            }
            goto LABEL_296;
          }
        }
        *((_BYTE *)a2 + 208) = v6;
        goto LABEL_5;
      default:
        goto LABEL_206;
    }
  }
}
