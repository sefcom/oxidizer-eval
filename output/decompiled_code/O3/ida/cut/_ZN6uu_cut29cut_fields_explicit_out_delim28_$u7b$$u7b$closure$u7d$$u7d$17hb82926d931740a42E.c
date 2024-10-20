        unsigned __int64 a4)
{
  __int64 v6; // r15
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // r13
  _QWORD *v11; // r15
  __int64 v12; // rbx
  char v13; // al
  __int64 v14; // rcx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdi
  _BYTE *v17; // rax
  _QWORD *v18; // r14
  bool v19; // cf
  unsigned __int64 v20; // r12
  __int64 v21; // rdi
  __int64 v22; // rax
  _BYTE *v23; // rax
  _QWORD *v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rbx
  unsigned __int64 v27; // rcx
  __int64 v28; // rbx
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // r14
  __int64 v31; // rcx
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r14
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rdi
  bool v39; // [rsp+Fh] [rbp-D9h]
  unsigned __int64 v40; // [rsp+10h] [rbp-D8h]
  __int64 v42; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int64 v43; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v44; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v45; // [rsp+38h] [rbp-B0h]
  _QWORD *v46; // [rsp+40h] [rbp-A8h]
  __int64 v47; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v48; // [rsp+50h] [rbp-98h]
  _QWORD *v49; // [rsp+58h] [rbp-90h]
  _BYTE *v50; // [rsp+60h] [rbp-88h]
  __int64 v51; // [rsp+68h] [rbp-80h]
  unsigned __int64 v52; // [rsp+70h] [rbp-78h]
  __int64 v53; // [rsp+78h] [rbp-70h]
  unsigned __int64 v54; // [rsp+80h] [rbp-68h]
  unsigned __int64 v55; // [rsp+88h] [rbp-60h]
  __int64 v56; // [rsp+90h] [rbp-58h]
  unsigned __int64 v57; // [rsp+98h] [rbp-50h]
  unsigned __int64 v58; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v59; // [rsp+A8h] [rbp-40h]
  __int64 v60; // [rsp+B0h] [rbp-38h]

  v6 = a1;
  v7 = *a2;
  <uu_cut::matcher::ExactMatcher as uu_cut::matcher::Matcher>::next_match(&v42, *a2);
  if ( !v42 )
  {
    v17 = (_BYTE *)a2[1];
    if ( !*v17 )
    {
      v18 = (_QWORD *)a2[2];
      v17 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64))(v18[1] + 56LL))(*v18, a3, a4);
      if ( v17 )
        goto LABEL_63;
      v19 = a4 == 0;
      v20 = a4 - 1;
      if ( v19 )
        core::panicking::panic_bounds_check(v20, 0LL, &off_F1108);
      LOBYTE(v17) = *(_BYTE *)a2[3];
      if ( *(_BYTE *)(a3 + v20) != (_BYTE)v17 )
      {
        LOBYTE(v42) = *(_BYTE *)a2[3];
        v21 = *v18;
        v22 = v18[1];
        goto LABEL_62;
      }
    }
LABEL_64:
    *(_WORD *)v6 = 256;
    return (char)v17;
  }
  v49 = (_QWORD *)a2[2];
  v8 = a2[4];
  v9 = *(_QWORD *)(v8 + 8);
  if ( !v9 )
  {
    v23 = (_BYTE *)a2[3];
    goto LABEL_61;
  }
  v59 = v43;
  v10 = v44;
  v11 = *(_QWORD **)v8;
  v60 = *(_QWORD *)v8 + 16 * v9;
  v50 = (_BYTE *)a2[3];
  v55 = a2[5];
  v54 = a2[6];
  v58 = a4 - 1;
  v12 = 1LL;
  v13 = 0;
  v52 = v44;
  v14 = 1LL;
  v15 = 0LL;
  v16 = 0LL;
  v40 = a4;
  v47 = a3;
  v48 = v7;
  while ( 1 )
  {
    v25 = *v11;
    v56 = v11[1];
    v51 = v14;
    v53 = v25;
    if ( v25 == v14 )
    {
      v46 = v11;
    }
    else
    {
      v26 = v25 + ~v14;
      if ( (v13 & 1) != 0 )
      {
        v45 = v16;
        if ( v26 )
        {
          do
          {
            v27 = a4 - v10;
            if ( a4 < v10 )
              goto LABEL_67;
            <uu_cut::matcher::ExactMatcher as uu_cut::matcher::Matcher>::next_match(&v42, v7);
            if ( !v42 )
              goto LABEL_60;
            v10 += v44;
          }
          while ( --v26 );
        }
      }
      else
      {
        if ( !v26 )
        {
          v46 = v11;
          v12 = 2LL;
          v15 = v52;
          goto LABEL_29;
        }
        v45 = v16;
        v28 = v26 - 1;
        if ( v28 )
        {
          while ( 1 )
          {
            v27 = a4 - v10;
            if ( a4 < v10 )
              break;
            <uu_cut::matcher::ExactMatcher as uu_cut::matcher::Matcher>::next_match(&v42, v7);
            if ( !v42 )
              goto LABEL_60;
            v10 += v44;
            if ( !--v28 )
              goto LABEL_25;
          }
LABEL_67:
          core::slice::index::slice_start_index_len_fail(
            v10,
            a4,
            &anon_df4789226972a4341794054d7353bee8_17_llvm_10989571036595044754,
            v27);
        }
      }
LABEL_25:
      v27 = a4 - v10;
      if ( a4 < v10 )
        goto LABEL_67;
      <uu_cut::matcher::ExactMatcher as uu_cut::matcher::Matcher>::next_match(&v42, v7);
      if ( !v42 )
      {
LABEL_60:
        v6 = a1;
        v23 = v50;
LABEL_61:
        LOBYTE(v42) = *v23;
        v21 = *v49;
        v22 = v49[1];
LABEL_62:
        v17 = (_BYTE *)(*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(v22 + 56))(v21, &v42, 1LL);
        if ( v17 )
        {
LABEL_63:
          *(_QWORD *)(v6 + 8) = v17;
          *(_BYTE *)v6 = 1;
          return (char)v17;
        }
        goto LABEL_64;
      }
      v46 = v11;
      v10 += v44;
      v12 = 2LL;
      v15 = v10;
      v25 = v53;
      v16 = v45;
    }
LABEL_29:
    v29 = 0LL;
    v57 = v56 - v25;
    v39 = v56 != v25;
    LOBYTE(a4) = 1;
    if ( (v16 & 1) != 0 )
    {
      v45 = v16;
      a4 = v7;
      v30 = v15;
      v17 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(v49[1] + 56LL))(
                       *v49,
                       v55,
                       v54);
      v15 = v30;
      v7 = a4;
      LODWORD(a4) = v45;
      if ( v17 )
      {
LABEL_66:
        *(_QWORD *)(a1 + 8) = v17;
        *(_BYTE *)a1 = 1;
        return (char)v17;
      }
    }
    if ( v12 == 2 )
    {
      v45 = v15;
      if ( v40 < v10 )
        core::slice::index::slice_start_index_len_fail(
          v10,
          v40,
          &anon_df4789226972a4341794054d7353bee8_17_llvm_10989571036595044754,
          v40 - v10);
      <uu_cut::matcher::ExactMatcher as uu_cut::matcher::Matcher>::next_match(&v42, v7);
      if ( !v42 )
      {
        v37 = v45;
        goto LABEL_55;
      }
      v32 = v10 + v43;
      v10 += v44;
      v33 = v10;
      v15 = v45;
    }
    else
    {
      v33 = v52;
      v32 = v59;
    }
    if ( v32 < v15 )
      core::slice::index::slice_index_order_fail(v15, v32, &off_F10F0);
    if ( v32 > v40 )
LABEL_68:
      core::slice::index::slice_end_index_len_fail(v32, v40, &off_F10F0);
    a3 = v47;
    v17 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(v49[1] + 56LL))(
                     *v49,
                     v47 + v15,
                     v32 - v15);
    if ( v17 )
    {
LABEL_65:
      *(_QWORD *)(a1 + 8) = v17;
      LOBYTE(v17) = 1;
      *(_BYTE *)a1 = 1;
      return (char)v17;
    }
    v14 = v56 + 1;
    if ( v56 == v53 )
    {
      v15 = v33;
      v7 = v48;
      v24 = v46;
      goto LABEL_11;
    }
    v51 = v56 + 1;
    LOBYTE(v29) = v39;
    v34 = v57;
    if ( v57 < v29 )
    {
      v15 = v33;
LABEL_52:
      a3 = v47;
      v7 = v48;
      v24 = v46;
      v14 = v51;
      goto LABEL_11;
    }
    while ( 1 )
    {
      v35 = (v29 < v34) + v29;
      LOBYTE(a3) = 1;
      if ( (a4 & 1) != 0 )
      {
        v17 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64, __int64))(v49[1] + 56LL))(
                         *v49,
                         v55,
                         v54,
                         v14);
        LODWORD(a3) = a4;
        if ( v17 )
          goto LABEL_66;
      }
      a4 = v40;
      v27 = v40 - v10;
      if ( v40 < v10 )
        goto LABEL_67;
      <uu_cut::matcher::ExactMatcher as uu_cut::matcher::Matcher>::next_match(&v42, v48);
      if ( !v42 )
        break;
      v32 = v10 + v43;
      v36 = v10 + v43 - v33;
      if ( v10 + v43 < v33 )
        core::slice::index::slice_index_order_fail(v33, v32, &off_F10F0);
      if ( v32 > v40 )
        goto LABEL_68;
      v10 += v44;
      v17 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(v49[1] + 56LL))(
                       *v49,
                       v47 + v33,
                       v36);
      if ( v17 )
        goto LABEL_65;
      v34 = v57;
      if ( v29 < v57 )
      {
        v33 = v10;
        LODWORD(a4) = a3;
        v29 = v35;
        if ( v35 <= v57 )
          continue;
      }
      LODWORD(a4) = a3;
      v15 = v10;
      goto LABEL_52;
    }
    LODWORD(a4) = a3;
    v37 = v33;
    a3 = v47;
    v7 = v48;
LABEL_55:
    v24 = v46;
    if ( v40 < v37 )
      core::slice::index::slice_start_index_len_fail(v37, v40, &off_F10D8, v31);
    v17 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(v49[1] + 56LL))(
                     *v49,
                     v37 + a3,
                     v40 - v37);
    if ( v17 )
      goto LABEL_65;
    if ( !v40 )
      core::panicking::panic_bounds_check(v58, 0LL, &off_F10C0);
    v14 = v51;
    v15 = v37;
    if ( *(_BYTE *)(a3 + v40 - 1) == *v50 )
      break;
LABEL_11:
    v11 = v24 + 2;
    v12 = 2LL;
    v13 = 1;
    v16 = (unsigned int)a4;
    a4 = v40;
    if ( v11 == (_QWORD *)v60 )
      goto LABEL_60;
  }
  *(_BYTE *)(a1 + 1) = 1;
  LOBYTE(v17) = 0;
  *(_BYTE *)a1 = 0;
  return (char)v17;
}
