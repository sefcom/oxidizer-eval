char __fastcall uu_sort::compare_by(const void **a1, const void **a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  _BYTE *v5; // rcx
  __int64 v6; // rbp
  unsigned __int64 v7; // rax
  const void **v8; // r9
  const void **v9; // r10
  __int64 v10; // r15
  unsigned __int64 v11; // rax
  _BYTE *v12; // r14
  char *v13; // r12
  char *v14; // r13
  const void **v15; // r11
  char *v16; // rbx
  unsigned __int64 v17; // rcx
  unsigned __int128 v18; // rax
  unsigned __int64 v19; // rdi
  __int64 v20; // r11
  unsigned __int64 v21; // rsi
  unsigned __int128 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdi
  char **v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int128 v28; // rax
  unsigned __int64 v29; // rdi
  __int64 v30; // rbp
  unsigned __int64 v31; // rsi
  unsigned __int128 v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // rsi
  __int64 v36; // rbp
  __int64 *v37; // rcx
  unsigned __int8 v38; // al
  const void **v39; // rdx
  __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  unsigned __int128 v42; // rax
  unsigned __int64 v43; // rdi
  __int64 v44; // r11
  unsigned __int64 v45; // rsi
  unsigned __int128 v46; // rax
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r11
  double *v50; // rcx
  double v51; // rdx
  double v52; // xmm0_8
  double v53; // xmm1_8
  char *v54; // rsi
  const void **v55; // r13
  unsigned __int8 v56; // r12
  unsigned __int8 v57; // cl
  unsigned __int64 v58; // rcx
  unsigned __int128 v59; // rax
  unsigned __int64 v60; // rdi
  char *v61; // r15
  _QWORD *v62; // rbx
  char *v63; // r13
  __int64 v64; // r12
  unsigned __int64 v65; // rsi
  unsigned __int128 v66; // rax
  unsigned __int64 v67; // rax
  __int64 v68; // rbp
  __int64 *v69; // rbp
  unsigned __int8 v70; // al
  char *v71; // r12
  _QWORD *v72; // r13
  int v73; // edx
  unsigned __int8 v74; // bl
  char *v75; // rcx
  __int64 v76; // rbx
  char *v77; // rbp
  char *v78; // r15
  unsigned __int64 hash; // r12
  unsigned __int8 v80; // al
  unsigned __int8 v81; // dl
  bool v82; // cf
  bool v83; // zf
  unsigned int v84; // ebx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  int v89; // edx
  unsigned __int8 v90; // al
  char *v91; // rdi
  char v92; // cl
  char v93; // al
  __int64 v94; // rdx
  __int64 v95; // rcx
  char v96; // al
  unsigned __int8 v97; // al
  unsigned __int8 v98; // cl
  unsigned int v99; // ebx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  unsigned int v104; // eax
  char v105; // cl
  size_t v106; // rdx
  size_t v107; // rbx
  __int64 v108; // rbx
  int v109; // eax
  char v110; // bl
  int v111; // ecx
  _QWORD *v114; // [rsp+10h] [rbp-138h]
  const void **v115; // [rsp+18h] [rbp-130h]
  __int64 v118; // [rsp+30h] [rbp-118h]
  __int64 v119; // [rsp+38h] [rbp-110h]
  __int64 v120; // [rsp+38h] [rbp-110h]
  const void **v121; // [rsp+40h] [rbp-108h]
  __int64 v122; // [rsp+48h] [rbp-100h]
  __int64 v123; // [rsp+50h] [rbp-F8h]
  char *v124; // [rsp+58h] [rbp-F0h] BYREF
  char *v125; // [rsp+60h] [rbp-E8h]
  _QWORD v126[2]; // [rsp+68h] [rbp-E0h] BYREF
  _QWORD *v127; // [rsp+78h] [rbp-D0h]
  _QWORD v128[2]; // [rsp+80h] [rbp-C8h] BYREF
  _QWORD v129[2]; // [rsp+90h] [rbp-B8h] BYREF
  char *v130; // [rsp+A0h] [rbp-A8h] BYREF
  char *v131; // [rsp+A8h] [rbp-A0h]
  _QWORD v132[2]; // [rsp+B0h] [rbp-98h] BYREF
  char *v133; // [rsp+C0h] [rbp-88h]
  char *v134; // [rsp+C8h] [rbp-80h]
  _OWORD *v135; // [rsp+D0h] [rbp-78h]
  _BYTE *v136; // [rsp+D8h] [rbp-70h]
  _QWORD v137[2]; // [rsp+E0h] [rbp-68h] BYREF
  _QWORD v138[2]; // [rsp+F0h] [rbp-58h] BYREF
  _OWORD v139[4]; // [rsp+100h] [rbp-48h] BYREF

  v5 = *(_BYTE **)(a3 + 8);
  if ( !v5 || ((unsigned __int8)v5 & 7) != 0 || (v6 = a3, v7 = *(_QWORD *)(a3 + 16), v7 >= 0x24924924924924ALL) )
LABEL_177:
    core::panicking::panic_nounwind(anon_1499ffac6f47c489d51642f1e0e6062b_33_llvm_17008735617955824143, 162LL);
  v8 = a2;
  v9 = a1;
  v136 = &v5[56 * v7];
  v135 = (_OWORD *)(a3 + 136);
  v123 = 0LL;
  v118 = 0LL;
  v10 = 0LL;
  v115 = a2;
  v114 = a5;
LABEL_8:
  if ( v5 == v136 )
  {
    if ( *(_BYTE *)(v6 + 152) == 5 || (*(_BYTE *)(v6 + 131) & 1) != 0 || (*(_BYTE *)(v6 + 132) & 1) != 0 )
    {
      v110 = 0;
    }
    else
    {
      v106 = (size_t)v8[1];
      v107 = (size_t)v9[1];
      v82 = v107 < v106;
      v108 = v107 - v106;
      if ( v82 )
        v106 = (size_t)v9[1];
      v109 = memcmp(*v9, *v8, v106);
      if ( v109 )
        v108 = v109;
      v110 = (v108 > 0) + (v108 >> 63);
    }
    LOBYTE(v11) = -v110;
    if ( (*(_BYTE *)(v6 + 130) & 1) == 0 )
      LOBYTE(v11) = v110;
    return v11;
  }
  v12 = v5;
  if ( (v5[55] & 1) == 0 )
  {
    v13 = (char *)*v9;
    v14 = (char *)v9[1];
    v15 = (const void **)*v8;
    v16 = (char *)v8[1];
    switch ( v5[53] )
    {
      case 0:
        goto LABEL_25;
      case 1:
        goto LABEL_64;
      case 2:
        goto LABEL_44;
      case 3:
        goto LABEL_62;
      case 4:
        goto LABEL_5;
      case 5:
        goto LABEL_82;
      case 6:
        goto LABEL_85;
    }
  }
  v17 = *(_QWORD *)(v6 + 88);
  v18 = (unsigned __int64)v9[2] * (unsigned __int128)v17;
  if ( !is_mul_ok((unsigned __int64)v9[2], v17) )
    core::panicking::panic_const::panic_const_mul_overflow(&off_1D3118, a2, *((_QWORD *)&v18 + 1));
  v19 = v10 + v18;
  if ( __CFADD__(v10, (_QWORD)v18) )
    core::panicking::panic_const::panic_const_add_overflow(&off_1D3118, a2, *((_QWORD *)&v18 + 1), v17);
  v20 = a4[1];
  if ( !v20 )
    goto LABEL_176;
  if ( (v20 & 7) != 0 )
    goto LABEL_176;
  v21 = a4[2];
  if ( v21 > 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_176;
  if ( v21 <= v19 )
    core::panicking::panic_bounds_check(v19, v21, &off_1D3130);
  v22 = (unsigned __int64)v8[2] * (unsigned __int128)v17;
  if ( !is_mul_ok((unsigned __int64)v8[2], v17) )
    core::panicking::panic_const::panic_const_mul_overflow(&off_1D3148, v21, *((_QWORD *)&v22 + 1));
  v82 = __CFADD__(v10, (_QWORD)v22);
  v23 = v10 + v22;
  if ( v82 )
    core::panicking::panic_const::panic_const_add_overflow(&off_1D3148, v21, *((_QWORD *)&v22 + 1), v17);
  v24 = a5[1];
  if ( !v24 || (v24 & 7) != 0 || (a2 = (const void **)a5[2], (unsigned __int64)a2 > 0x7FFFFFFFFFFFFFFLL) )
LABEL_176:
    core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
  if ( (unsigned __int64)a2 <= v23 )
    core::panicking::panic_bounds_check(v23, a2, &off_1D3160);
  if ( !++v10 )
    core::panicking::panic_const::panic_const_add_overflow(&off_1D3178, a2, 0x7FFFFFFFFFFFFFFLL, v24);
  v25 = 16 * v19;
  v13 = *(char **)(v20 + v25);
  v14 = *(char **)(v20 + v25 + 8);
  v26 = (char **)(16 * v23 + v24);
  v15 = (const void **)*v26;
  v16 = v26[1];
  switch ( v12[53] )
  {
    case 0:
LABEL_25:
      v27 = *(_QWORD *)(v6 + 72);
      v28 = (unsigned __int64)v9[2] * (unsigned __int128)v27;
      if ( !is_mul_ok((unsigned __int64)v9[2], v27) )
        core::panicking::panic_const::panic_const_mul_overflow(&off_1D3190, a2, *((_QWORD *)&v28 + 1));
      v29 = v118 + v28;
      if ( __CFADD__(v118, (_QWORD)v28) )
        core::panicking::panic_const::panic_const_add_overflow(&off_1D3190, a2, *((_QWORD *)&v28 + 1), v27);
      v30 = a4[4];
      if ( !v30 )
        goto LABEL_177;
      if ( (v30 & 7) != 0 )
        goto LABEL_177;
      v31 = a4[5];
      if ( v31 > 0x7FFFFFFFFFFFFFFLL )
        goto LABEL_177;
      if ( v31 <= v29 )
        core::panicking::panic_bounds_check(v29, v31, &off_1D31A8);
      v32 = (unsigned __int64)v8[2] * (unsigned __int128)v27;
      if ( !is_mul_ok((unsigned __int64)v8[2], v27) )
        core::panicking::panic_const::panic_const_mul_overflow(&off_1D31C0, v31, *((_QWORD *)&v32 + 1));
      v82 = __CFADD__(v118, (_QWORD)v32);
      v33 = v118 + v32;
      if ( v82 )
        core::panicking::panic_const::panic_const_add_overflow(&off_1D31C0, v31, *((_QWORD *)&v32 + 1), v27);
      v34 = a5[4];
      if ( !v34 )
        goto LABEL_177;
      if ( (v34 & 7) != 0 )
        goto LABEL_177;
      v35 = a5[5];
      if ( v35 > 0x7FFFFFFFFFFFFFFLL )
        goto LABEL_177;
      if ( v35 <= v33 )
        core::panicking::panic_bounds_check(v33, v35, &off_1D31D8);
      if ( !++v118 )
        core::panicking::panic_const::panic_const_add_overflow(&off_1D31F0, v35, 0x7FFFFFFFFFFFFFFLL, v34);
      v36 = 16 * v29 + v30;
      v37 = (__int64 *)(16 * v33 + v34);
      v38 = *(_BYTE *)(v36 + 8);
      v39 = (const void **)*((unsigned __int8 *)v37 + 8);
      a2 = v39;
      LOBYTE(a2) = v38 ^ (unsigned __int8)v39;
      if ( ((v38 ^ (unsigned __int8)v39) & 1) != 0 )
      {
        v80 = v38 & 1;
        v81 = (unsigned __int8)v39 & 1;
        v82 = v80 < v81;
        v83 = v80 == v81;
LABEL_88:
        LOBYTE(v11) = (!v82 && !v83) - v82;
        v6 = a3;
        goto LABEL_7;
      }
      v40 = *v37;
      if ( *(_QWORD *)v36 != v40 && v14 && v16 )
      {
        LOBYTE(v11) = (*(_QWORD *)v36 > v40) - (*(_QWORD *)v36 < v40);
        if ( (*(_BYTE *)(v36 + 8) & 1) != 0 )
          goto LABEL_43;
        goto LABEL_141;
      }
      v128[0] = v13;
      v128[1] = &v14[(_QWORD)v13];
      v129[0] = v15;
      v129[1] = &v16[(_QWORD)v15];
      break;
    case 1:
LABEL_64:
      v119 = v10;
      v58 = *(_QWORD *)(v6 + 72);
      v59 = (unsigned __int64)v9[2] * (unsigned __int128)v58;
      if ( !is_mul_ok((unsigned __int64)v9[2], v58) )
        core::panicking::panic_const::panic_const_mul_overflow(&off_1D3208, a2, *((_QWORD *)&v59 + 1));
      v60 = v118 + v59;
      if ( __CFADD__(v118, (_QWORD)v59) )
        core::panicking::panic_const::panic_const_add_overflow(&off_1D3208, a2, *((_QWORD *)&v59 + 1), v58);
      v61 = v16;
      v62 = v14;
      v63 = v13;
      v64 = a4[4];
      if ( !v64 )
        goto LABEL_177;
      if ( (v64 & 7) != 0 )
        goto LABEL_177;
      v65 = a4[5];
      if ( v65 > 0x7FFFFFFFFFFFFFFLL )
        goto LABEL_177;
      if ( v65 <= v60 )
        core::panicking::panic_bounds_check(v60, v65, &off_1D3220);
      v66 = (unsigned __int64)v8[2] * (unsigned __int128)v58;
      if ( !is_mul_ok((unsigned __int64)v8[2], v58) )
        core::panicking::panic_const::panic_const_mul_overflow(&off_1D3238, v65, *((_QWORD *)&v66 + 1));
      v82 = __CFADD__(v118, (_QWORD)v66);
      v67 = v118 + v66;
      if ( v82 )
        core::panicking::panic_const::panic_const_add_overflow(&off_1D3238, v65, *((_QWORD *)&v66 + 1), v58);
      v68 = a5[4];
      if ( !v68 )
        goto LABEL_177;
      if ( (v68 & 7) != 0 )
        goto LABEL_177;
      a2 = (const void **)a5[5];
      if ( (unsigned __int64)a2 > 0x7FFFFFFFFFFFFFFLL )
        goto LABEL_177;
      if ( (unsigned __int64)a2 <= v67 )
        core::panicking::panic_bounds_check(v67, a2, &off_1D3250);
      if ( !++v118 )
        core::panicking::panic_const::panic_const_add_overflow(
          &off_1D3268,
          a2,
          *((_QWORD *)&v66 + 1),
          0x7FFFFFFFFFFFFFFLL);
      v69 = (__int64 *)(16 * v67 + v68);
      v122 = 16 * v60 + v64;
      v70 = *(_BYTE *)(v122 + 8);
      if ( ((v70 ^ *((_BYTE *)v69 + 8)) & 1) != 0 )
      {
        LOBYTE(v11) = ((unsigned __int8)(v70 & 1) > (unsigned __int8)(v69[1] & 1))
                    - ((unsigned __int8)(v70 & 1) < (unsigned __int8)(v69[1] & 1));
        v6 = a3;
        v10 = v119;
        goto LABEL_7;
      }
      v71 = v63;
      v72 = v62;
      v127 = v61;
      v121 = v15;
      v137[0] = v71;
      v134 = (char *)v62 + (_QWORD)v71;
      v137[1] = (char *)v62 + (_QWORD)v71;
      v10 = v119;
      if ( (unsigned int)core::str::validations::next_code_point_reverse(v137) )
      {
        a2 = v121;
        if ( (v73 ^ 0xD800u) - 2048 >= (unsigned int)&loc_10F800 )
          goto LABEL_206;
        v74 = 0;
        switch ( v73 )
        {
          case 'E':
            v74 = 6;
            break;
          case 'G':
            v74 = 3;
            break;
          case 'K':
          case 'k':
            v74 = 1;
            break;
          case 'M':
            v74 = 2;
            break;
          case 'P':
            v74 = 5;
            break;
          case 'T':
            v74 = 4;
            break;
          case 'Y':
            v74 = 8;
            break;
          case 'Z':
            v74 = 7;
            break;
          default:
            break;
        }
      }
      else
      {
        v74 = 0;
        a2 = v121;
      }
      v138[0] = a2;
      v133 = (char *)v127 + (_QWORD)a2;
      v138[1] = (char *)v127 + (_QWORD)a2;
      if ( (unsigned int)core::str::validations::next_code_point_reverse(v138) )
      {
        v8 = v115;
        a5 = v114;
        if ( (v89 ^ 0xD800u) - 2048 >= (unsigned int)&loc_10F800 )
LABEL_206:
          core::panicking::panic_nounwind(anon_106514630be1c9ef1de9e84b8238e531_0_llvm_16179947721019886102, 57LL);
        v90 = 0;
        v9 = a1;
        v91 = (char *)v121;
        switch ( v89 )
        {
          case 'E':
            v90 = 6;
            break;
          case 'G':
            v90 = 3;
            break;
          case 'K':
          case 'k':
            v90 = 1;
            break;
          case 'M':
            v90 = 2;
            break;
          case 'P':
            v90 = 5;
            break;
          case 'T':
            v90 = 4;
            break;
          case 'Y':
            v90 = 8;
            break;
          case 'Z':
            v90 = 7;
            break;
          default:
            break;
        }
      }
      else
      {
        v90 = 0;
        v8 = v115;
        v9 = a1;
        a5 = v114;
        v91 = (char *)v121;
      }
      v92 = (v74 > v90) - (v74 < v90);
      v83 = v74 > v90 == v74 < v90;
      v93 = *(_BYTE *)(v122 + 8);
      if ( !v83 )
      {
        v83 = (v93 & 1) == 0;
        LOBYTE(v11) = -v92;
        if ( !v83 )
          LOBYTE(v11) = v92;
        v6 = a3;
        goto LABEL_7;
      }
      v94 = *((unsigned __int8 *)v69 + 8);
      LOBYTE(v94) = v93 ^ v94;
      if ( (v94 & 1) != 0 )
      {
        v97 = v93 & 1;
        v98 = v69[1] & 1;
        v82 = v97 < v98;
        v83 = v97 == v98;
        goto LABEL_88;
      }
      v95 = *v69;
      if ( *(_QWORD *)v122 != *v69 && v72 && v127 )
      {
        v96 = (*(_QWORD *)v122 > v95) - (*(_QWORD *)v122 < v95);
        v6 = a3;
      }
      else
      {
        v130 = v71;
        v131 = v134;
        v124 = v91;
        v125 = v133;
        v6 = a3;
        while ( 1 )
        {
          v99 = core::iter::traits::iterator::Iterator::try_fold(&v130, v132, v94, v95, a5, v8);
          a2 = (const void **)v126;
          v104 = core::iter::traits::iterator::Iterator::try_fold(&v124, v126, v100, v101, v102, v103);
          if ( v99 == 1114112 )
          {
            if ( v104 == 48 )
            {
              v96 = core::iter::traits::iterator::Iterator::all(&v124) - 1;
            }
            else if ( v104 == 1114112 )
            {
              v96 = 0;
            }
            else
            {
              v96 = -1;
            }
            goto LABEL_152;
          }
          if ( v104 == 1114112 )
            break;
          v96 = (v99 > v104) - (v99 < v104);
          if ( v96 )
            goto LABEL_152;
        }
        v96 = 1;
        if ( v99 == 48 )
          v96 = core::iter::traits::iterator::Iterator::all(&v130) ^ 1;
      }
LABEL_152:
      v105 = v96;
      LOBYTE(v11) = -v96;
      if ( (*(_BYTE *)(v122 + 8) & 1) != 0 )
        LOBYTE(v11) = v105;
      goto LABEL_63;
    case 2:
LABEL_44:
      v41 = *(_QWORD *)(v6 + 80);
      v42 = (unsigned __int64)v9[2] * (unsigned __int128)v41;
      if ( !is_mul_ok((unsigned __int64)v9[2], v41) )
        core::panicking::panic_const::panic_const_mul_overflow(&off_1D3280, a2, *((_QWORD *)&v42 + 1));
      v43 = v123 + v42;
      if ( __CFADD__(v123, (_QWORD)v42) )
        core::panicking::panic_const::panic_const_add_overflow(&off_1D3280, a2, *((_QWORD *)&v42 + 1), v41);
      v44 = a4[7];
      if ( !v44 )
        goto LABEL_177;
      if ( (v44 & 7) != 0 )
        goto LABEL_177;
      v45 = a4[8];
      if ( v45 > 0x7FFFFFFFFFFFFFFLL )
        goto LABEL_177;
      if ( v45 <= v43 )
        core::panicking::panic_bounds_check(v43, v45, &off_1D3298);
      v46 = (unsigned __int64)v8[2] * (unsigned __int128)v41;
      if ( !is_mul_ok((unsigned __int64)v8[2], v41) )
        core::panicking::panic_const::panic_const_mul_overflow(&off_1D32B0, v45, *((_QWORD *)&v46 + 1));
      v82 = __CFADD__(v123, (_QWORD)v46);
      v47 = v123 + v46;
      if ( v82 )
        core::panicking::panic_const::panic_const_add_overflow(&off_1D32B0, v45, *((_QWORD *)&v46 + 1), v41);
      v48 = a5[7];
      if ( !v48 )
        goto LABEL_177;
      if ( (v48 & 7) != 0 )
        goto LABEL_177;
      a2 = (const void **)a5[8];
      if ( (unsigned __int64)a2 > 0x7FFFFFFFFFFFFFFLL )
        goto LABEL_177;
      if ( (unsigned __int64)a2 <= v47 )
        core::panicking::panic_bounds_check(v47, a2, &off_1D32C8);
      if ( !++v123 )
        core::panicking::panic_const::panic_const_add_overflow(&off_1D32E0, a2, 0x7FFFFFFFFFFFFFFLL, v48);
      v49 = 16 * v43 + v44;
      v50 = (double *)(16 * v47 + v48);
      v51 = *v50;
      if ( *(_QWORD *)v49 == 3LL && *(_QWORD *)&v51 == 3LL )
      {
        v52 = *(double *)(v49 + 8);
        v53 = v50[1];
        if ( v53 < v52 )
        {
          LOBYTE(v11) = 1;
          if ( v52 < v53 )
            core::option::unwrap_failed(&off_1D3358);
          goto LABEL_171;
        }
        if ( v52 < v53 )
        {
          LOBYTE(v11) = -1;
          if ( (v12[52] & 1) != 0 )
            goto LABEL_172;
          return v11;
        }
        LOBYTE(v11) = 0;
      }
      else
      {
        LOBYTE(v11) = (*(_QWORD *)v49 > *(_QWORD *)&v51) - (*(_QWORD *)v49 < *(_QWORD *)&v51);
      }
      goto LABEL_7;
    case 3:
LABEL_62:
      v54 = v14;
      v55 = v15;
      v56 = uu_sort::month_parse(v13, v54);
      a2 = (const void **)v16;
      v57 = uu_sort::month_parse(v55, v16);
      LODWORD(v11) = -(v56 < v57);
      if ( v56 <= v57 )
        goto LABEL_63;
      goto LABEL_170;
    case 4:
LABEL_5:
      a2 = (const void **)v14;
      LOBYTE(v11) = uucore::features::version_cmp::version_cmp(v13, v14, v15, v16);
      goto LABEL_6;
    case 5:
LABEL_82:
      v120 = v10;
      v75 = v16;
      v76 = v6;
      a2 = (const void **)v14;
      v77 = (char *)v15;
      v78 = v75;
      if ( (unsigned __int8)uu_sort::custom_str_cmp::custom_str_cmp(
                              v13,
                              v14,
                              v15,
                              v75,
                              v12[51] & 1,
                              v12[50] & 1,
                              v12[49] & 1) )
      {
        if ( (*(_BYTE *)(v76 + 135) & 1) == 0 )
          core::option::unwrap_failed(&off_1D32F8);
        v139[0] = *v135;
        v130 = v13;
        v131 = v14;
        v132[0] = v139;
        v132[1] = 16LL;
        hash = uu_sort::get_hash(&v130);
        v124 = v77;
        v125 = v78;
        v126[0] = v139;
        v126[1] = 16LL;
        v11 = uu_sort::get_hash(&v124);
        LOBYTE(v11) = (hash > v11) - (hash < v11);
      }
      else
      {
        LOBYTE(v11) = 0;
      }
      v8 = v115;
      v9 = a1;
      a5 = v114;
      v6 = v76;
      v10 = v120;
      goto LABEL_7;
    case 6:
LABEL_85:
      a2 = (const void **)v14;
      LOBYTE(v11) = uu_sort::custom_str_cmp::custom_str_cmp(v13, v14, v15, v16, v12[51] & 1, v12[50] & 1, v12[49] & 1);
LABEL_6:
      a5 = v114;
      v9 = a1;
      v8 = v115;
      goto LABEL_7;
  }
  while ( 1 )
  {
    v84 = core::iter::traits::iterator::Iterator::try_fold(v128, v129, v39, v40, a5, v8);
    a2 = (const void **)&v130;
    LODWORD(v11) = core::iter::traits::iterator::Iterator::try_fold(v129, &v130, v85, v86, v87, v88);
    if ( v84 == 1114112 )
    {
      if ( (_DWORD)v11 == 48 )
      {
        LOBYTE(v124) = core::iter::traits::iterator::Iterator::try_fold(v129, &v130);
        a2 = (const void **)&anon_8012e1ef25b0b3807da7d204fab9cdcd_19_llvm_15792747221160264835;
        LOBYTE(v11) = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(
                        &v124,
                        &anon_8012e1ef25b0b3807da7d204fab9cdcd_19_llvm_15792747221160264835)
                    - 1;
LABEL_140:
        if ( (*(_BYTE *)(v36 + 8) & 1) != 0 )
          goto LABEL_43;
        goto LABEL_141;
      }
      if ( (_DWORD)v11 == 1114112 )
      {
        LOBYTE(v11) = 0;
        if ( (*(_BYTE *)(v36 + 8) & 1) != 0 )
          goto LABEL_43;
        goto LABEL_141;
      }
      LOBYTE(v11) = -1;
      if ( (*(_BYTE *)(v36 + 8) & 1) == 0 )
        goto LABEL_141;
LABEL_43:
      v6 = a3;
LABEL_63:
      v8 = v115;
      v9 = a1;
      a5 = v114;
LABEL_7:
      v5 = v12 + 56;
      if ( (_BYTE)v11 )
        goto LABEL_171;
      goto LABEL_8;
    }
    if ( (_DWORD)v11 == 1114112 )
      break;
    LOBYTE(v11) = (v84 > (unsigned int)v11) - (v84 < (unsigned int)v11);
    if ( (_BYTE)v11 )
      goto LABEL_140;
  }
  LOBYTE(v11) = 1;
  if ( v84 != 48 )
    goto LABEL_140;
  LOBYTE(v124) = core::iter::traits::iterator::Iterator::try_fold(v128, v129);
  a2 = (const void **)&anon_8012e1ef25b0b3807da7d204fab9cdcd_19_llvm_15792747221160264835;
  LOBYTE(v11) = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(
                  &v124,
                  &anon_8012e1ef25b0b3807da7d204fab9cdcd_19_llvm_15792747221160264835) ^ 1;
  if ( (*(_BYTE *)(v36 + 8) & 1) != 0 )
    goto LABEL_43;
LABEL_141:
  v6 = a3;
  v8 = v115;
  v9 = a1;
  a5 = v114;
  if ( !(_BYTE)v11 )
    goto LABEL_7;
  v111 = (unsigned __int8)v11;
  LOBYTE(v11) = -1;
  if ( v111 != 1 )
LABEL_170:
    LOBYTE(v11) = 1;
LABEL_171:
  if ( (v12[52] & 1) != 0 )
LABEL_172:
    LOBYTE(v11) = (_BYTE)v11 != 0xFF ? -1 : 1;
  return v11;
}
