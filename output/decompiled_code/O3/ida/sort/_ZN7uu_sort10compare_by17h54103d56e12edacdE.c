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
  unsigned __int8 *v13; // rbx
  __int64 v14; // rdi
  const void **v15; // rdi
  const void **v16; // rax
  const void *v17; // r12
  const void *v18; // r13
  const void *v19; // r14
  const void *v20; // rbp
  __int64 v21; // rdi
  __int64 v22; // rax
  unsigned __int8 v23; // al
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdi
  unsigned int v27; // edx
  __int64 result; // rax
  unsigned __int8 v29; // al
  _BYTE *v30; // r14
  size_t v31; // rdx
  size_t v32; // rbx
  bool v33; // cf
  __int64 v34; // rbx
  int v35; // eax
  unsigned int v36; // ecx
  char **v37; // rdx
  char v38; // [rsp+17h] [rbp-131h]
  unsigned __int64 v39; // [rsp+18h] [rbp-130h]
  unsigned __int64 v40; // [rsp+20h] [rbp-128h]
  __int64 v41; // [rsp+28h] [rbp-120h]
  __int128 v42; // [rsp+30h] [rbp-118h] BYREF
  __int64 v43; // [rsp+40h] [rbp-108h]
  unsigned __int64 v44; // [rsp+48h] [rbp-100h]
  unsigned __int64 v45; // [rsp+50h] [rbp-F8h]
  __int64 v46; // [rsp+58h] [rbp-F0h]
  __int64 v47; // [rsp+60h] [rbp-E8h]
  __int64 v48; // [rsp+68h] [rbp-E0h]
  __int64 v49; // [rsp+70h] [rbp-D8h]
  __int64 v50; // [rsp+78h] [rbp-D0h]
  __int64 v51; // [rsp+80h] [rbp-C8h]
  __int64 v52; // [rsp+88h] [rbp-C0h]
  unsigned __int64 v53; // [rsp+90h] [rbp-B8h]
  unsigned __int64 v54; // [rsp+98h] [rbp-B0h]
  const void *v55; // [rsp+A0h] [rbp-A8h] BYREF
  const void *v56; // [rsp+A8h] [rbp-A0h]
  __int64 v57; // [rsp+B0h] [rbp-98h]
  _BYTE *v58; // [rsp+B8h] [rbp-90h]
  __int128 *v59; // [rsp+C0h] [rbp-88h]
  __int64 v60; // [rsp+C8h] [rbp-80h]
  __int64 v61; // [rsp+D0h] [rbp-78h]
  __int64 v62; // [rsp+D8h] [rbp-70h]
  __int64 v63; // [rsp+E0h] [rbp-68h]
  __int64 v64; // [rsp+E8h] [rbp-60h]
  __int64 v65; // [rsp+F0h] [rbp-58h]
  __int64 v66; // [rsp+F8h] [rbp-50h]
  __int64 v67; // [rsp+100h] [rbp-48h]
  _QWORD v68[8]; // [rsp+108h] [rbp-40h] BYREF

  v5 = *(_QWORD *)(a3 + 8) + 56LL * *(_QWORD *)(a3 + 16);
  v68[0] = *(_QWORD *)(a3 + 8);
  v68[1] = v5;
  v51 = a1;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(a3 + 88);
  v52 = a2;
  v8 = *(_QWORD *)(a2 + 16);
  v66 = v7 * v8;
  v67 = v6 * v7;
  v65 = a5[1];
  v53 = a5[2];
  v9 = *(_QWORD *)(a3 + 72);
  v10 = *(_QWORD *)(a3 + 80);
  v63 = v6 * v10;
  v62 = v8 * v10;
  v44 = a5[8];
  v50 = v9 * v6;
  v49 = v8 * v9;
  v61 = a5[7];
  v39 = a5[5];
  v47 = a5[4];
  v64 = a4[1];
  v54 = a4[2];
  v45 = a4[8];
  v60 = a4[7];
  v40 = a4[5];
  v46 = a4[4];
  v38 = *(_BYTE *)(a3 + 135);
  v58 = (_BYTE *)a3;
  v59 = (__int128 *)(a3 + 136);
  v11 = 0LL;
  v41 = 0LL;
  v48 = 0LL;
  while ( 1 )
  {
    v12 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v68);
    if ( !v12 )
      break;
    v13 = (unsigned __int8 *)v12;
    if ( *(_BYTE *)(v12 + 55) )
    {
      v14 = v11 + v67;
      if ( v11 + v67 < v54 )
      {
        if ( v11 + v66 < v53 )
        {
          v15 = (const void **)(v64 + 16 * v14);
          v16 = (const void **)(v65 + 16 * (v11 + v66));
          ++v11;
          v17 = *v16;
          v18 = v16[1];
          v19 = *v15;
          v20 = v15[1];
          switch ( v13[53] )
          {
            case 0u:
              goto LABEL_8;
            case 1u:
              goto LABEL_16;
            case 2u:
              goto LABEL_12;
            case 3u:
              goto LABEL_15;
            case 4u:
              goto LABEL_11;
            case 5u:
              goto LABEL_19;
            case 6u:
              goto LABEL_22;
          }
        }
        core::panicking::panic_bounds_check(v11 + v66, v53, &off_1FFD30);
      }
      core::panicking::panic_bounds_check(v14, v54, &off_1FFD18);
    }
    v17 = *(const void **)v52;
    v18 = *(const void **)(v52 + 8);
    v19 = *(const void **)v51;
    v20 = *(const void **)(v51 + 8);
    switch ( *(_BYTE *)(v12 + 53) )
    {
      case 0:
LABEL_8:
        v21 = v41 + v50;
        if ( v41 + v50 >= v40 )
          core::panicking::panic_bounds_check(v21, v40, &off_1FFD48);
        v22 = v41 + v49;
        if ( v41 + v49 >= v39 )
        {
          v37 = &off_1FFD60;
LABEL_49:
          core::panicking::panic_bounds_check(v22, v39, v37);
        }
        ++v41;
        v55 = v19;
        v56 = v20;
        v57 = v46 + 16 * v21;
        *(_QWORD *)&v42 = v17;
        *((_QWORD *)&v42 + 1) = v18;
        v43 = v47 + 16 * v22;
        v23 = uu_sort::numeric_str_cmp::numeric_str_cmp((__int64 *)&v55, (__int64 *)&v42);
        break;
      case 1:
LABEL_16:
        v26 = v41 + v50;
        if ( v41 + v50 >= v40 )
          core::panicking::panic_bounds_check(v26, v40, &off_1FFD78);
        v22 = v41 + v49;
        if ( v41 + v49 >= v39 )
        {
          v37 = &off_1FFD90;
          goto LABEL_49;
        }
        ++v41;
        v55 = v19;
        v56 = v20;
        v57 = v46 + 16 * v26;
        *(_QWORD *)&v42 = v17;
        *((_QWORD *)&v42 + 1) = v18;
        v43 = v47 + 16 * v22;
        v23 = uu_sort::numeric_str_cmp::human_numeric_str_cmp(&v55, &v42);
        break;
      case 2:
LABEL_12:
        v24 = v48 + v63;
        if ( v48 + v63 >= v45 )
          core::panicking::panic_bounds_check(v24, v45, &off_1FFDA8);
        v25 = v48 + v62;
        if ( v48 + v62 >= v44 )
          core::panicking::panic_bounds_check(v48 + v62, v44, &off_1FFDC0);
        ++v48;
        v23 = uu_sort::general_numeric_compare(
                *(_QWORD *)(v60 + 16 * v24),
                *(_QWORD *)(v61 + 16 * v25),
                *(double *)(v60 + 16 * v24 + 8),
                *(double *)(v61 + 16 * v25 + 8));
        break;
      case 3:
LABEL_15:
        v23 = uu_sort::month_compare(v19, v20, v17, v18);
        break;
      case 4:
LABEL_11:
        v23 = uucore::features::version_cmp::version_cmp(v19, v20, v17, v18);
        break;
      case 5:
LABEL_19:
        if ( !(unsigned __int8)uu_sort::custom_str_cmp::custom_str_cmp(v19, v20, v17, v18, v13[51], v13[50], v13[49]) )
          continue;
        if ( (v38 & 1) == 0 )
          core::option::unwrap_failed(&off_1FFDD8);
        v42 = *v59;
        v23 = uu_sort::random_shuffle(v19, v20, v17, v18, &v42);
        break;
      case 6:
LABEL_22:
        v23 = uu_sort::custom_str_cmp::custom_str_cmp(v19, v20, v17, v18, v13[51], v13[50], v13[49]);
        break;
    }
    if ( v23 )
    {
      v27 = v23;
      result = (unsigned __int8)-(v23 != 0xFF) | 1u;
      if ( !v13[52] )
        return v27;
      return result;
    }
  }
  v29 = 0;
  v30 = v58;
  if ( v58[152] != 5 && !v58[131] && !v58[132] )
  {
    v31 = *(_QWORD *)(v52 + 8);
    v32 = *(_QWORD *)(v51 + 8);
    v33 = v32 < v31;
    v34 = v32 - v31;
    if ( v33 )
      v31 = *(_QWORD *)(v51 + 8);
    v35 = memcmp(*(const void **)v51, *(const void **)v52, v31);
    if ( v35 )
      v34 = v35;
    v29 = -1;
    if ( v34 >= 0 )
      v29 = v34 != 0;
  }
  v36 = v29;
  result = (unsigned __int8)-v29;
  if ( !v30[130] )
    return v36;
  return result;
}
