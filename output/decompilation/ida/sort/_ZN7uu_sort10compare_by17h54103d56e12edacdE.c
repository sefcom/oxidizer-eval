__int64 __fastcall uu_sort::compare_by(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v5; // r9
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r9
  __int64 v11; // r15
  __int64 v12; // rax
  _BYTE *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rax
  char *v17; // r12
  size_t v18; // r13
  char *v19; // r14
  size_t v20; // rbp
  __int64 v21; // rdi
  __int64 v22; // rax
  unsigned __int8 v23; // al
  __int64 v24; // rdi
  __int64 v25; // rdi
  unsigned int v26; // edx
  __int64 result; // rax
  unsigned __int8 v28; // al
  _BYTE *v29; // r14
  size_t v30; // rdx
  size_t v31; // rbx
  bool v32; // cf
  __int64 v33; // rbx
  int v34; // eax
  unsigned int v35; // ecx
  char **v36; // rdx
  char v37; // [rsp+17h] [rbp-131h]
  unsigned __int64 v38; // [rsp+18h] [rbp-130h]
  unsigned __int64 v39; // [rsp+20h] [rbp-128h]
  __int64 v40; // [rsp+28h] [rbp-120h]
  __int128 v41; // [rsp+30h] [rbp-118h] BYREF
  __int64 v42; // [rsp+40h] [rbp-108h]
  unsigned __int64 v43; // [rsp+48h] [rbp-100h]
  unsigned __int64 v44; // [rsp+50h] [rbp-F8h]
  __int64 v45; // [rsp+58h] [rbp-F0h]
  __int64 v46; // [rsp+60h] [rbp-E8h]
  __int64 v47; // [rsp+68h] [rbp-E0h]
  __int64 v48; // [rsp+70h] [rbp-D8h]
  __int64 v49; // [rsp+78h] [rbp-D0h]
  __int64 v50; // [rsp+80h] [rbp-C8h]
  __int64 v51; // [rsp+88h] [rbp-C0h]
  unsigned __int64 v52; // [rsp+90h] [rbp-B8h]
  unsigned __int64 v53; // [rsp+98h] [rbp-B0h]
  char *v54; // [rsp+A0h] [rbp-A8h] BYREF
  size_t v55; // [rsp+A8h] [rbp-A0h]
  __int64 v56; // [rsp+B0h] [rbp-98h]
  _BYTE *v57; // [rsp+B8h] [rbp-90h]
  __int128 *v58; // [rsp+C0h] [rbp-88h]
  __int64 v59; // [rsp+C8h] [rbp-80h]
  __int64 v60; // [rsp+D0h] [rbp-78h]
  __int64 v61; // [rsp+D8h] [rbp-70h]
  __int64 v62; // [rsp+E0h] [rbp-68h]
  __int64 v63; // [rsp+E8h] [rbp-60h]
  __int64 v64; // [rsp+F0h] [rbp-58h]
  __int64 v65; // [rsp+F8h] [rbp-50h]
  __int64 v66; // [rsp+100h] [rbp-48h]
  _QWORD v67[8]; // [rsp+108h] [rbp-40h] BYREF

  v5 = *(_QWORD *)(a3 + 8) + 56LL * *(_QWORD *)(a3 + 16);
  v67[0] = *(_QWORD *)(a3 + 8);
  v67[1] = v5;
  v50 = a1;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(a3 + 88);
  v51 = a2;
  v8 = *(_QWORD *)(a2 + 16);
  v65 = v7 * v8;
  v66 = v6 * v7;
  v64 = a5[1];
  v52 = a5[2];
  v9 = *(_QWORD *)(a3 + 72);
  v10 = *(_QWORD *)(a3 + 80);
  v62 = v6 * v10;
  v61 = v8 * v10;
  v43 = a5[8];
  v49 = v9 * v6;
  v48 = v8 * v9;
  v60 = a5[7];
  v38 = a5[5];
  v46 = a5[4];
  v63 = a4[1];
  v53 = a4[2];
  v44 = a4[8];
  v59 = a4[7];
  v39 = a4[5];
  v45 = a4[4];
  v37 = *(_BYTE *)(a3 + 135);
  v57 = (_BYTE *)a3;
  v58 = (__int128 *)(a3 + 136);
  v11 = 0LL;
  v40 = 0LL;
  v47 = 0LL;
  while ( 1 )
  {
    v12 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v67);
    if ( !v12 )
      break;
    v13 = (_BYTE *)v12;
    if ( *(_BYTE *)(v12 + 55) )
    {
      v14 = v11 + v66;
      if ( v11 + v66 < v53 )
      {
        if ( v11 + v65 < v52 )
        {
          v15 = v63 + 16 * v14;
          v16 = v64 + 16 * (v11 + v65);
          ++v11;
          v17 = *(char **)v16;
          v18 = *(_QWORD *)(v16 + 8);
          v19 = *(char **)v15;
          v20 = *(_QWORD *)(v15 + 8);
          switch ( v13[53] )
          {
            case 0:
              goto LABEL_8;
            case 1:
              goto LABEL_16;
            case 2:
              goto LABEL_12;
            case 3:
              goto LABEL_15;
            case 4:
              goto LABEL_11;
            case 5:
              goto LABEL_19;
            case 6:
              goto LABEL_22;
          }
        }
        core::panicking::panic_bounds_check(v11 + v65, v52, &off_1FFD30);
      }
      core::panicking::panic_bounds_check(v14, v53, &off_1FFD18);
    }
    v17 = *(char **)v51;
    v18 = *(_QWORD *)(v51 + 8);
    v19 = *(char **)v50;
    v20 = *(_QWORD *)(v50 + 8);
    switch ( *(_BYTE *)(v12 + 53) )
    {
      case 0:
LABEL_8:
        v21 = v40 + v49;
        if ( v40 + v49 >= v39 )
          core::panicking::panic_bounds_check(v21, v39, &off_1FFD48);
        v22 = v40 + v48;
        if ( v40 + v48 >= v38 )
        {
          v36 = &off_1FFD60;
LABEL_49:
          core::panicking::panic_bounds_check(v22, v38, v36);
        }
        ++v40;
        v54 = v19;
        v55 = v20;
        v56 = v45 + 16 * v21;
        *(_QWORD *)&v41 = v17;
        *((_QWORD *)&v41 + 1) = v18;
        v42 = v46 + 16 * v22;
        v23 = uu_sort::numeric_str_cmp::numeric_str_cmp((__int64 *)&v54, (__int64 *)&v41);
        break;
      case 1:
LABEL_16:
        v25 = v40 + v49;
        if ( v40 + v49 >= v39 )
          core::panicking::panic_bounds_check(v25, v39, &off_1FFD78);
        v22 = v40 + v48;
        if ( v40 + v48 >= v38 )
        {
          v36 = &off_1FFD90;
          goto LABEL_49;
        }
        ++v40;
        v54 = v19;
        v55 = v20;
        v56 = v45 + 16 * v25;
        *(_QWORD *)&v41 = v17;
        *((_QWORD *)&v41 + 1) = v18;
        v42 = v46 + 16 * v22;
        v23 = uu_sort::numeric_str_cmp::human_numeric_str_cmp((__int64 *)&v54, (__int64 *)&v41);
        break;
      case 2:
LABEL_12:
        v24 = v47 + v62;
        if ( v47 + v62 >= v44 )
          core::panicking::panic_bounds_check(v24, v44, &off_1FFDA8);
        if ( v47 + v61 >= v43 )
          core::panicking::panic_bounds_check(v47 + v61, v43, &off_1FFDC0);
        ++v47;
        v23 = uu_sort::general_numeric_compare(*(_QWORD *)(v59 + 16 * v24));
        break;
      case 3:
LABEL_15:
        v23 = uu_sort::month_compare((__int64)v19, v20, (__int64)v17, v18);
        break;
      case 4:
LABEL_11:
        v23 = uucore::features::version_cmp::version_cmp(v19, v20, v17, v18);
        break;
      case 5:
LABEL_19:
        if ( !uu_sort::custom_str_cmp::custom_str_cmp(v19, v20, v17, v18, v13[51], (unsigned __int8)v13[50], v13[49]) )
          continue;
        if ( (v37 & 1) == 0 )
          core::option::unwrap_failed(&off_1FFDD8);
        v41 = *v58;
        v23 = uu_sort::random_shuffle((__int64)v19, v20, (__int64)v17, v18, (__int64)&v41);
        break;
      case 6:
LABEL_22:
        v23 = uu_sort::custom_str_cmp::custom_str_cmp(v19, v20, v17, v18, v13[51], (unsigned __int8)v13[50], v13[49]);
        break;
    }
    if ( v23 )
    {
      v26 = v23;
      result = (unsigned __int8)-(v23 != 0xFF) | 1u;
      if ( !v13[52] )
        return v26;
      return result;
    }
  }
  v28 = 0;
  v29 = v57;
  if ( v57[152] != 5 && !v57[131] && !v57[132] )
  {
    v30 = *(_QWORD *)(v51 + 8);
    v31 = *(_QWORD *)(v50 + 8);
    v32 = v31 < v30;
    v33 = v31 - v30;
    if ( v32 )
      v30 = *(_QWORD *)(v50 + 8);
    v34 = memcmp(*(const void **)v50, *(const void **)v51, v30);
    if ( v34 )
      v33 = v34;
    v28 = -1;
    if ( v33 >= 0 )
      v28 = v33 != 0;
  }
  v35 = v28;
  result = (unsigned __int8)-v28;
  if ( !v29[130] )
    return v35;
  return result;
}
