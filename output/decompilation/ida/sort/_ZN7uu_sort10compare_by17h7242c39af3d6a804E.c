__int64 __fastcall uu_sort::compare_by(char **a1, char **a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  char *v5; // r11
  char *v6; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  double v10; // xmm0_8
  double v11; // xmm1_8
  unsigned __int8 v12; // al
  _QWORD *v13; // r14
  __int64 v14; // r12
  char *v15; // r13
  _QWORD *v16; // r15
  char v17; // al
  unsigned int v18; // ecx
  __int64 result; // rax
  bool v20; // zf
  _BYTE *v21; // r14
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r13
  __int64 v26; // rsi
  __int64 v27; // rbx
  unsigned __int8 v28; // al
  _BYTE *v29; // r15
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rax
  char *v33; // rdx
  size_t v34; // r10
  char *v35; // rbp
  size_t v36; // r12
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rdi
  char v41; // r8
  char v42; // r9
  _BYTE *v43; // r14
  unsigned __int8 v44; // al
  size_t v45; // rdx
  size_t v46; // rbx
  bool v47; // cf
  __int64 v48; // rbx
  int v49; // eax
  unsigned __int8 v50; // [rsp+0h] [rbp-148h]
  char v51; // [rsp+17h] [rbp-131h]
  unsigned __int64 v52; // [rsp+20h] [rbp-128h]
  unsigned __int64 v53; // [rsp+28h] [rbp-120h]
  __int128 v56; // [rsp+40h] [rbp-108h] BYREF
  __int64 v57; // [rsp+50h] [rbp-F8h]
  unsigned __int64 v58; // [rsp+58h] [rbp-F0h]
  unsigned __int64 v59; // [rsp+60h] [rbp-E8h]
  __int64 v60; // [rsp+68h] [rbp-E0h]
  __int64 v61; // [rsp+70h] [rbp-D8h]
  __int64 v62; // [rsp+78h] [rbp-D0h]
  __int64 v63; // [rsp+80h] [rbp-C8h]
  unsigned __int64 v64; // [rsp+88h] [rbp-C0h]
  unsigned __int64 v65; // [rsp+90h] [rbp-B8h]
  char *v66; // [rsp+98h] [rbp-B0h] BYREF
  size_t v67; // [rsp+A0h] [rbp-A8h]
  __int64 v68; // [rsp+A8h] [rbp-A0h]
  _BYTE *v69; // [rsp+B0h] [rbp-98h]
  __int128 *v70; // [rsp+B8h] [rbp-90h]
  __int64 v71; // [rsp+C0h] [rbp-88h]
  __int64 v72; // [rsp+C8h] [rbp-80h]
  __int64 v73; // [rsp+D0h] [rbp-78h]
  __int64 v74; // [rsp+D8h] [rbp-70h]
  char *v75; // [rsp+E0h] [rbp-68h]
  size_t v76; // [rsp+E8h] [rbp-60h]
  __int64 v77; // [rsp+F0h] [rbp-58h]
  __int64 v78; // [rsp+F8h] [rbp-50h]
  __int64 v79; // [rsp+100h] [rbp-48h]
  __int64 v80; // [rsp+108h] [rbp-40h]
  _BYTE *v81; // [rsp+110h] [rbp-38h]

  v5 = a1[2];
  v6 = a2[2];
  v8 = 0LL;
  if ( (unsigned __int64)v6 < a5[11] )
    v8 = a5[10] + 16LL * (_QWORD)a2[2];
  if ( (unsigned __int64)v5 >= a4[11] || (unsigned __int64)v6 >= a5[11] )
    goto LABEL_13;
  v9 = a4[10];
  if ( *(_DWORD *)(v9 + 16LL * (_QWORD)v5) != 1 || *(_DWORD *)v8 != 1 )
    goto LABEL_13;
  v10 = *(double *)(16LL * (_QWORD)v5 + v9 + 8);
  v11 = *(double *)(v8 + 8);
  if ( v11 < v10 )
  {
    v12 = 1;
    if ( v10 < v11 )
      goto LABEL_13;
LABEL_12:
    v18 = v12;
    result = (unsigned __int8)-v12;
    v20 = *(_BYTE *)(a3 + 130) == 0;
    goto LABEL_48;
  }
  v12 = -1;
  if ( v10 < v11 )
    goto LABEL_12;
  v13 = a4;
  v14 = a3;
  v15 = a1[2];
  v16 = a5;
  v17 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*a1, a1[1], *a2, a2[1]);
  a5 = v16;
  v5 = v15;
  a3 = v14;
  a4 = v13;
  if ( v17 )
  {
    v12 = 0;
    goto LABEL_12;
  }
LABEL_13:
  v21 = *(_BYTE **)(a3 + 8);
  v22 = *(_QWORD *)(a3 + 72);
  v81 = &v21[56 * *(_QWORD *)(a3 + 16)];
  v23 = *(_QWORD *)(a3 + 88);
  v80 = (_QWORD)v5 * v23;
  v78 = a4[1];
  v79 = (_QWORD)v6 * v23;
  v77 = a5[1];
  v64 = a5[2];
  v24 = *(_QWORD *)(a3 + 80);
  v74 = (_QWORD)v5 * v24;
  v73 = (_QWORD)v6 * v24;
  v58 = a5[8];
  v72 = a5[7];
  v63 = v22 * (_QWORD)v5;
  v62 = (_QWORD)v6 * v22;
  v52 = a5[5];
  v61 = a5[4];
  v65 = a4[2];
  v59 = a4[8];
  v71 = a4[7];
  v53 = a4[5];
  v60 = a4[4];
  v51 = *(_BYTE *)(a3 + 135);
  v69 = (_BYTE *)a3;
  v70 = (__int128 *)(a3 + 136);
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  while ( 2 )
  {
    v29 = v21;
    v21 += 56;
    if ( v29 == v81 )
    {
      v43 = v69;
      if ( v69[152] == 5 || v69[131] || v69[132] )
      {
        v44 = 0;
      }
      else
      {
        v45 = (size_t)a2[1];
        v46 = (size_t)a1[1];
        v47 = v46 < v45;
        v48 = v46 - v45;
        if ( v47 )
          v45 = (size_t)a1[1];
        v49 = memcmp(*a1, *a2, v45);
        if ( v49 )
          v48 = v49;
        v44 = (v48 > 0) - (v48 < 0);
      }
      v18 = v44;
      result = (unsigned __int8)-v44;
      v20 = v43[130] == 0;
    }
    else
    {
      if ( v29[55] )
      {
        v30 = v80 + v27;
        if ( v80 + v27 < v65 )
        {
          if ( v27 + v79 < v64 )
          {
            v31 = v78 + 16 * v30;
            v32 = v77 + 16 * (v27 + v79);
            ++v27;
            v33 = *(char **)v32;
            v34 = *(_QWORD *)(v32 + 8);
            v35 = *(char **)v31;
            v36 = *(_QWORD *)(v31 + 8);
            switch ( v29[53] )
            {
              case 0:
                goto LABEL_21;
              case 1:
                goto LABEL_31;
              case 2:
                goto LABEL_25;
              case 3:
                goto LABEL_29;
              case 4:
                goto LABEL_14;
              case 5:
                goto LABEL_35;
              case 6:
                goto LABEL_39;
            }
          }
          core::panicking::panic_bounds_check(v27 + v79, v64, &off_18D2E8);
        }
        core::panicking::panic_bounds_check(v30, v65, &off_18D2D0);
      }
      v33 = *a2;
      v34 = (size_t)a2[1];
      v35 = *a1;
      v36 = (size_t)a1[1];
      switch ( v29[53] )
      {
        case 0:
LABEL_21:
          v37 = v63 + v26;
          if ( v63 + v26 >= v53 )
            core::panicking::panic_bounds_check(v37, v53, &off_18D300);
          if ( v26 + v62 >= v52 )
            core::panicking::panic_bounds_check(v26 + v62, v52, &off_18D318);
          v66 = v35;
          v67 = v36;
          v68 = v60 + 16 * v37;
          *(_QWORD *)&v56 = v33;
          *((_QWORD *)&v56 + 1) = v34;
          v57 = v61 + 16 * (v26 + v62);
          v28 = uu_sort::numeric_str_cmp::numeric_str_cmp((__int64 *)&v66, (__int64 *)&v56);
          ++v26;
          if ( v28 )
            goto LABEL_42;
          continue;
        case 1:
LABEL_31:
          v40 = v63 + v26;
          if ( v63 + v26 >= v53 )
            core::panicking::panic_bounds_check(v40, v53, &off_18D330);
          if ( v26 + v62 >= v52 )
            core::panicking::panic_bounds_check(v26 + v62, v52, &off_18D348);
          v66 = v35;
          v67 = v36;
          v68 = v60 + 16 * v40;
          *(_QWORD *)&v56 = v33;
          *((_QWORD *)&v56 + 1) = v34;
          v57 = v61 + 16 * (v26 + v62);
          v28 = uu_sort::numeric_str_cmp::human_numeric_str_cmp((__int64 *)&v66, (__int64 *)&v56);
          ++v26;
          if ( v28 )
            goto LABEL_42;
          continue;
        case 2:
LABEL_25:
          v38 = v74 + v25;
          if ( v74 + v25 >= v59 )
            core::panicking::panic_bounds_check(v38, v59, &off_18D360);
          v39 = v25 + v73;
          if ( v25 + v73 >= v58 )
            core::panicking::panic_bounds_check(v25 + v73, v58, &off_18D378);
          ++v25;
          v28 = uu_sort::general_numeric_compare(
                  *(_QWORD *)(v71 + 16 * v38),
                  *(_QWORD *)(v72 + 16 * v39),
                  *(double *)(v71 + 16 * v38 + 8),
                  *(double *)(v72 + 16 * v39 + 8));
          if ( v28 )
            goto LABEL_42;
          continue;
        case 3:
LABEL_29:
          v28 = uu_sort::month_compare(v35, v36, v33, v34);
          if ( v28 )
            goto LABEL_42;
          continue;
        case 4:
LABEL_14:
          v28 = uucore::features::version_cmp::version_cmp(v35, v36, v33, v34);
          if ( !v28 )
            continue;
          goto LABEL_42;
        case 5:
LABEL_35:
          v41 = v29[51];
          v42 = v29[50];
          v50 = v29[49];
          v75 = v33;
          v76 = v34;
          if ( uu_sort::custom_str_cmp::custom_str_cmp(v35, v36, v33, v34, v41, v42, v50) )
          {
            if ( (v51 & 1) == 0 )
              core::option::unwrap_failed(&off_18D390);
            v56 = *v70;
            v28 = uu_sort::random_shuffle(v35, v36, v75, v76, &v56);
            if ( v28 )
              goto LABEL_42;
          }
          continue;
        case 6:
LABEL_39:
          v28 = uu_sort::custom_str_cmp::custom_str_cmp(v35, v36, v33, v34, v29[51], v29[50], v29[49]);
          if ( !v28 )
            continue;
LABEL_42:
          v18 = v28;
          result = (unsigned __int8)-v28;
          v20 = v29[52] == 0;
          break;
      }
    }
    break;
  }
LABEL_48:
  if ( v20 )
    return v18;
  return result;
}