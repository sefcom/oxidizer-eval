        unsigned __int64 a4)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 *v9; // r14
  __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r12
  char *v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rcx
  unsigned __int64 v16; // r13
  char *v17; // rbx
  char *v18; // rsi
  unsigned __int64 v19; // r12
  unsigned __int64 *v20; // r14
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // r13
  __int64 v23; // r12
  char *v24; // rbp
  unsigned __int64 v25; // r13
  char *v26; // rsi
  _QWORD *v27; // rax
  char v28; // al
  char v30; // [rsp+6h] [rbp-D2h] BYREF
  char v31; // [rsp+7h] [rbp-D1h] BYREF
  char *v32; // [rsp+8h] [rbp-D0h]
  __int64 v33; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v34; // [rsp+18h] [rbp-C0h]
  __int64 v35; // [rsp+20h] [rbp-B8h]
  _QWORD v36[3]; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-90h]
  _QWORD v39[7]; // [rsp+58h] [rbp-80h] BYREF
  _QWORD v40[2]; // [rsp+90h] [rbp-48h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-38h]

  v7 = a1;
  v39[3] = *(_QWORD *)a2;
  v39[4] = a3;
  v39[5] = a4;
  <uu_cut::matcher::ExactMatcher as uu_cut::matcher::Matcher>::next_match(v40);
  if ( !v40[0] )
  {
    if ( (**(_BYTE **)(a2 + 8) & 1) == 0 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL) + 56LL))(
              **(_QWORD **)(a2 + 16),
              a3,
              a4);
      if ( v14 )
        goto LABEL_42;
      if ( !a4 )
        core::panicking::panic_const::panic_const_sub_overflow(&off_11AD28);
      if ( *(_BYTE *)(a4 + a3 - 1) != **(_BYTE **)(a2 + 24) )
      {
        v15 = *(_QWORD **)(a2 + 16);
        v30 = **(_BYTE **)(a2 + 24);
        v14 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(v15[1] + 56LL))(*v15, &v30, 1LL);
        if ( v14 )
          goto LABEL_42;
      }
    }
LABEL_44:
    *(_BYTE *)(v7 + 1) = 1;
    v28 = 0;
    goto LABEL_45;
  }
  v35 = a3;
  v34 = a4;
  v33 = a1;
  v39[6] = v41;
  v39[0] = 1LL;
  v39[1] = v40[1];
  v39[2] = v41;
  v8 = *(_QWORD *)(a2 + 32);
  if ( *(_QWORD *)(v8 + 8) )
  {
    v9 = *(unsigned __int64 **)v8;
    if ( *(_QWORD *)v8 )
    {
      v10 = *(_QWORD *)(v8 + 8);
      v11 = *v9;
      v12 = v9[1];
      if ( *v9 == 1 )
      {
        v13 = 0LL;
      }
      else
      {
        if ( !v11 )
LABEL_48:
          core::panicking::panic_const::panic_const_sub_overflow(&off_11AC98);
        <core::iter::adapters::peekable::Peekable<I> as core::iter::traits::iterator::Iterator>::nth(v36, v39, v11 - 2);
        if ( v36[0] != 1LL )
          goto LABEL_40;
        v13 = (char *)v36[2];
      }
      v32 = v13;
      if ( v12 < v11 )
LABEL_47:
        core::panicking::panic_const::panic_const_sub_overflow(&off_11ACB0);
      <core::iter::adapters::peekable::Peekable<I> as core::iter::traits::iterator::Iterator>::nth(&v37, v39, v12 - v11);
      v16 = v34;
      if ( v37 )
      {
        v17 = (char *)v38;
        if ( v38 < (unsigned __int64)v32 )
        {
          v24 = (char *)v38;
LABEL_54:
          core::slice::index::slice_index_order_fail(v32, v24, &off_11ACF8);
        }
        if ( v38 > v34 )
          goto LABEL_51;
        v18 = &v32[v35];
        v14 = (*(__int64 (__fastcall **)(_QWORD, char *, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)
                                                                          + 56LL))(
                **(_QWORD **)(a2 + 16),
                &v32[v35],
                v38 - (_QWORD)v32);
        if ( v14 )
          goto LABEL_41;
        v19 = v12 + 1;
        if ( !v19 )
LABEL_49:
          core::panicking::panic_const::panic_const_add_overflow(&off_11AD10, v18);
        if ( v10 == 1 )
          goto LABEL_40;
        v32 = (char *)&v9[2 * v10];
        v20 = v9 + 2;
        while ( 1 )
        {
          v21 = *v20;
          if ( *v20 < v19 )
            goto LABEL_48;
          v22 = v20[1];
          if ( *v20 != v19 )
          {
            <core::iter::adapters::peekable::Peekable<I> as core::iter::traits::iterator::Iterator>::nth(
              v36,
              v39,
              v21 + ~v19);
            if ( v36[0] != 1LL )
              goto LABEL_40;
            v17 = (char *)v36[1];
          }
          if ( v22 < v21 )
            goto LABEL_47;
          <core::iter::adapters::peekable::Peekable<I> as core::iter::traits::iterator::Iterator>::nth(
            &v37,
            v39,
            v22 - v21);
          v23 = v35;
          if ( !v37 )
            break;
          v24 = (char *)v38;
          if ( v38 < (unsigned __int64)v17 )
          {
            v32 = v17;
            goto LABEL_54;
          }
          if ( v38 > v34 )
          {
            v17 = (char *)v38;
LABEL_51:
            core::slice::index::slice_end_index_len_fail(v17, v34, &off_11ACF8);
          }
          v18 = &v17[v35];
          v14 = (*(__int64 (__fastcall **)(_QWORD, char *, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)
                                                                            + 56LL))(
                  **(_QWORD **)(a2 + 16),
                  &v17[v35],
                  v38 - (_QWORD)v17);
          if ( v14 )
            goto LABEL_41;
          v25 = v22 + 1;
          if ( !v25 )
            goto LABEL_49;
          v20 += 2;
          v19 = v25;
          v17 = v24;
          if ( v20 == (unsigned __int64 *)v32 )
            goto LABEL_40;
        }
        v26 = v17;
        v16 = v34;
      }
      else
      {
        v23 = v35;
        v26 = v32;
      }
      v7 = v33;
      if ( v16 < (unsigned __int64)v26 )
        core::slice::index::slice_index_order_fail(v26, v16, &off_11ACC8);
      v14 = (*(__int64 (__fastcall **)(_QWORD, char *, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL) + 56LL))(
              **(_QWORD **)(a2 + 16),
              &v26[v23],
              v16 - (_QWORD)v26);
      if ( v14 )
        goto LABEL_42;
      if ( !v16 )
        core::panicking::panic_const::panic_const_sub_overflow(&off_11ACE0);
      if ( *(_BYTE *)(v16 + v23 - 1) == **(_BYTE **)(a2 + 24) )
        goto LABEL_43;
    }
  }
LABEL_40:
  v27 = *(_QWORD **)(a2 + 16);
  v31 = **(_BYTE **)(a2 + 24);
  v14 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(v27[1] + 56LL))(*v27, &v31, 1LL);
  if ( !v14 )
  {
LABEL_43:
    v7 = v33;
    goto LABEL_44;
  }
LABEL_41:
  v7 = v33;
LABEL_42:
  *(_QWORD *)(v7 + 8) = v14;
  v28 = 1;
LABEL_45:
  *(_BYTE *)v7 = v28;
  return v7;
}
