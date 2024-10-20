        unsigned __int64 a4)
{
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // r15
  unsigned __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // zf
  __int64 v17; // r15
  __int64 v18; // rbx
  unsigned __int64 v19; // rcx
  __int64 v20; // r15
  unsigned __int64 v21; // r15
  __int64 v22; // r15
  unsigned __int64 v23; // rax
  _BYTE *v24; // rax
  _QWORD *v25; // rbx
  bool v26; // cf
  unsigned __int64 v27; // r14
  _BYTE *v28; // rcx
  __int64 v29; // r15
  __int64 *v30; // r13
  _BYTE *v31; // rcx
  _BYTE *v32; // rcx
  char **v33; // rdx
  __int64 v35; // [rsp+0h] [rbp-98h] BYREF
  unsigned __int64 v36; // [rsp+8h] [rbp-90h]
  unsigned __int64 v37; // [rsp+10h] [rbp-88h]
  __int64 v38; // [rsp+18h] [rbp-80h]
  _QWORD *v39; // [rsp+20h] [rbp-78h]
  unsigned __int64 v40; // [rsp+28h] [rbp-70h]
  __int64 v41; // [rsp+30h] [rbp-68h]
  __int64 v42; // [rsp+38h] [rbp-60h]
  __int64 *v43; // [rsp+40h] [rbp-58h]
  __int64 v44; // [rsp+48h] [rbp-50h]
  unsigned __int64 v45; // [rsp+50h] [rbp-48h]
  _QWORD *v46; // [rsp+58h] [rbp-40h]
  _QWORD *v47; // [rsp+60h] [rbp-38h]

  v6 = *a2;
  <uu_cut::matcher::ExactMatcher as uu_cut::matcher::Matcher>::next_match(&v35, *a2);
  if ( !v35 )
  {
    v24 = (_BYTE *)a2[1];
    if ( *v24 )
      goto LABEL_43;
    v25 = (_QWORD *)a2[2];
    v24 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64))(v25[1] + 56LL))(*v25, a3, a4);
    if ( !v24 )
    {
      v26 = a4 == 0;
      v27 = a4 - 1;
      if ( v26 )
      {
        v33 = &off_F1168;
LABEL_66:
        core::panicking::panic_bounds_check(v27, 0LL, v33);
      }
      LOBYTE(v24) = *(_BYTE *)a2[3];
      if ( *(_BYTE *)(a3 + v27) == (_BYTE)v24
        || (LOBYTE(v35) = *(_BYTE *)a2[3],
            (v24 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64))(v25[1] + 56LL))(*v25, &v35, 1LL)) == 0LL) )
      {
LABEL_43:
        *(_WORD *)a1 = 256;
        return (char)v24;
      }
    }
    *(_QWORD *)(a1 + 8) = v24;
    *(_BYTE *)a1 = 1;
    return (char)v24;
  }
  v38 = a1;
  v39 = (_QWORD *)a2[2];
  v43 = a2;
  v7 = a2[4];
  v8 = *(_QWORD *)(v7 + 8);
  if ( !v8 )
    goto LABEL_57;
  v40 = v36;
  v9 = v37;
  v10 = *(_QWORD **)v7;
  v46 = &v10[2 * v8];
  v11 = -1LL;
  v12 = 0LL;
  v45 = v37;
  v13 = 0LL;
  while ( 1 )
  {
    v47 = v10;
    v14 = *v10;
    v15 = v10[1];
    v16 = *v10 + v11 == 0;
    v17 = *v10 + v11;
    v44 = v15;
    if ( !v16 )
    {
      v18 = v17 - 1;
      if ( (v13 & 1) != 0 )
      {
        v41 = v13;
        v42 = v14;
        if ( v17 != 1 )
        {
          do
          {
            v19 = a4 - v9;
            if ( a4 < v9 )
              goto LABEL_60;
            <uu_cut::matcher::ExactMatcher as uu_cut::matcher::Matcher>::next_match(&v35, v6);
            if ( !v35 )
              goto LABEL_57;
            v9 += v37;
          }
          while ( --v18 );
        }
      }
      else
      {
        if ( v17 == 1 )
        {
          v12 = v45;
          v23 = v40;
LABEL_27:
          if ( (v13 & 1) != 0 )
            v12 = v23;
          v20 = v15 - v14;
LABEL_30:
          if ( v15 != v14 )
          {
            while ( 1 )
            {
              v19 = a4 - v9;
              if ( a4 < v9 )
                goto LABEL_60;
              <uu_cut::matcher::ExactMatcher as uu_cut::matcher::Matcher>::next_match(&v35, v6);
              if ( !v35 )
                goto LABEL_51;
              v9 += v37;
              if ( !--v20 )
                goto LABEL_34;
            }
          }
          goto LABEL_34;
        }
        v41 = v13;
        v42 = v14;
        v22 = v17 - 2;
        if ( v22 )
        {
          while ( 1 )
          {
            v19 = a4 - v9;
            if ( a4 < v9 )
              break;
            <uu_cut::matcher::ExactMatcher as uu_cut::matcher::Matcher>::next_match(&v35, v6);
            if ( !v35 )
              goto LABEL_57;
            v9 += v37;
            if ( !--v22 )
              goto LABEL_23;
          }
LABEL_60:
          core::slice::index::slice_start_index_len_fail(
            v9,
            a4,
            &anon_df4789226972a4341794054d7353bee8_17_llvm_10989571036595044754,
            v19);
        }
      }
LABEL_23:
      v19 = a4 - v9;
      if ( a4 < v9 )
        goto LABEL_60;
      <uu_cut::matcher::ExactMatcher as uu_cut::matcher::Matcher>::next_match(&v35, v6);
      if ( !v35 )
        goto LABEL_57;
      v23 = v9 + v36;
      v9 += v37;
      v12 = v9;
      v15 = v44;
      v14 = v42;
      LOBYTE(v13) = v41;
      goto LABEL_27;
    }
    v20 = v15 - v14;
    if ( (v13 & 1) != 0 )
      goto LABEL_30;
    if ( v15 == v14 )
    {
      v21 = v12;
      v12 = v40;
      goto LABEL_37;
    }
    while ( --v20 )
    {
      v19 = a4 - v9;
      if ( a4 < v9 )
        goto LABEL_60;
      <uu_cut::matcher::ExactMatcher as uu_cut::matcher::Matcher>::next_match(&v35, v6);
      if ( !v35 )
        goto LABEL_51;
      v9 += v37;
    }
LABEL_34:
    v21 = v12;
    v19 = a4 - v9;
    if ( a4 < v9 )
      goto LABEL_60;
    <uu_cut::matcher::ExactMatcher as uu_cut::matcher::Matcher>::next_match(&v35, v6);
    if ( !v35 )
      break;
    v12 = v9 + v36;
    v9 += v37;
LABEL_37:
    if ( v12 < v21 )
      core::slice::index::slice_index_order_fail(v21, v12, &off_F1150);
    if ( v12 > a4 )
      core::slice::index::slice_end_index_len_fail(v12, a4, &off_F1150);
    v13 = a3 + v21;
    v24 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(v39[1] + 56LL))(
                     *v39,
                     a3 + v21,
                     v12 - v21);
    if ( v24 )
    {
      v28 = (_BYTE *)v38;
      *(_QWORD *)(v38 + 8) = v24;
      LOBYTE(v24) = 1;
      *v28 = 1;
      return (char)v24;
    }
    v10 = v47 + 2;
    v11 = ~v44;
    LOBYTE(v13) = 1;
    if ( v47 + 2 == v46 )
      goto LABEL_57;
  }
LABEL_51:
  v29 = v38;
  v30 = v43;
  if ( a4 < v12 )
    core::slice::index::slice_index_order_fail(v12, a4, &off_F1120);
  v24 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(v39[1] + 56LL))(
                   *v39,
                   a3 + v12,
                   a4 - v12);
  if ( v24 )
  {
    *(_QWORD *)(v29 + 8) = v24;
    LOBYTE(v24) = 1;
    *(_BYTE *)v29 = 1;
    return (char)v24;
  }
  v26 = a4 == 0;
  v27 = a4 - 1;
  if ( v26 )
  {
    v33 = &off_F1138;
    goto LABEL_66;
  }
  if ( *(_BYTE *)(a3 + v27) == *(_BYTE *)v30[3] )
  {
    v31 = (_BYTE *)v38;
    *(_BYTE *)(v38 + 1) = 1;
    LOBYTE(v24) = 0;
    *v31 = 0;
    return (char)v24;
  }
LABEL_57:
  LOBYTE(v35) = *(_BYTE *)v43[3];
  v24 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64))(v39[1] + 56LL))(*v39, &v35, 1LL);
  if ( v24 )
  {
    v32 = (_BYTE *)v38;
    *(_QWORD *)(v38 + 8) = v24;
    *v32 = 1;
  }
  else
  {
    LOBYTE(v24) = v38;
    *(_WORD *)v38 = 256;
  }
  return (char)v24;
}
