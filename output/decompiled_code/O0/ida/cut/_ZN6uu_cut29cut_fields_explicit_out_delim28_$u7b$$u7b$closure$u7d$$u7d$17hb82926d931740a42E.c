        unsigned __int64 a4)
{
  unsigned __int64 v4; // rbp
  __int64 *v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r15
  char v18; // r12
  unsigned int v19; // ebx
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rax
  bool v22; // cf
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rbx
  _QWORD *v28; // rax
  char v29; // al
  _QWORD *v30; // rcx
  bool v32; // [rsp+Dh] [rbp-EBh]
  char v33; // [rsp+Eh] [rbp-EAh] BYREF
  char v34; // [rsp+Fh] [rbp-E9h] BYREF
  __int64 v35; // [rsp+10h] [rbp-E8h]
  __int64 *v36; // [rsp+18h] [rbp-E0h]
  __int64 v37; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v38; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v39; // [rsp+30h] [rbp-C8h]
  __int64 v40; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v41; // [rsp+40h] [rbp-B8h]
  __int64 v42; // [rsp+48h] [rbp-B0h] BYREF
  unsigned __int64 v43; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v44; // [rsp+58h] [rbp-A0h]
  __int64 v45; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int64 v46; // [rsp+68h] [rbp-90h]
  unsigned __int64 v47; // [rsp+70h] [rbp-88h]
  __int64 v48; // [rsp+78h] [rbp-80h]
  __int64 v49; // [rsp+80h] [rbp-78h]
  unsigned __int64 v50; // [rsp+88h] [rbp-70h]
  unsigned __int64 v51; // [rsp+90h] [rbp-68h]
  unsigned __int64 *v52; // [rsp+98h] [rbp-60h]
  unsigned __int64 *v53; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v54; // [rsp+A8h] [rbp-50h]
  _QWORD v55[9]; // [rsp+B0h] [rbp-48h] BYREF

  v7 = a2;
  v8 = a1;
  v48 = *a2;
  v49 = a3;
  v50 = a4;
  <uu_cut::matcher::ExactMatcher as uu_cut::matcher::Matcher>::next_match(&v42);
  if ( !v42 )
  {
    if ( (*(_BYTE *)a2[1] & 1) == 0 )
    {
      v24 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64))(*(_QWORD *)(a2[2] + 8) + 56LL))(
              *(_QWORD *)a2[2],
              a3,
              a4);
      if ( v24 )
        goto LABEL_41;
      if ( !a4 )
        core::panicking::panic_const::panic_const_sub_overflow(&off_11AC80);
      if ( *(_BYTE *)(a4 + a3 - 1) != *(_BYTE *)a2[3] )
      {
        v30 = (_QWORD *)a2[2];
        v33 = *(_BYTE *)a2[3];
        v24 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(v30[1] + 56LL))(*v30, &v33, 1LL);
        if ( v24 )
          goto LABEL_41;
      }
    }
LABEL_49:
    *(_BYTE *)(v8 + 1) = 1;
    v29 = 0;
    goto LABEL_50;
  }
  v39 = a4;
  v35 = a1;
  v51 = v44;
  v45 = 1LL;
  v46 = v43;
  v47 = v44;
  v9 = a2[4];
  v10 = *(_QWORD *)(v9 + 8);
  if ( v10 )
  {
    v11 = *(unsigned __int64 **)v9;
    v52 = &v11[2 * v10];
    v12 = 1LL;
    v13 = 0LL;
    v37 = 0LL;
    v36 = v7;
    v40 = a3;
LABEL_4:
    if ( v11 )
    {
      v14 = (unsigned __int64)(v11 + 2);
      v53 = v11 + 2;
      v15 = *v11;
      if ( *v11 < v12 )
        core::panicking::panic_const::panic_const_sub_overflow(&off_11ABF0);
      v16 = v11[1];
      if ( *v11 == v12 )
        goto LABEL_9;
      <core::iter::adapters::peekable::Peekable<I> as core::iter::traits::iterator::Iterator>::nth(
        v55,
        &v45,
        v15 + ~v12);
      if ( v55[0] )
      {
        v13 = v55[2];
LABEL_9:
        v17 = v16 - v15;
        if ( v16 < v15 )
          core::panicking::panic_const::panic_const_sub_overflow(&off_11AC08);
        v38 = v16 + 1;
        v32 = v16 == -1LL;
        v18 = 0;
        v19 = v37;
        v20 = 0LL;
        while ( 1 )
        {
          v54 = v12;
          v21 = v20;
          v20 += v20 < v17;
          v22 = v21 < v17;
          v23 = 1LL;
          if ( !v22 )
            v18 = 1;
          LOBYTE(v23) = 1;
          v37 = v23;
          if ( (v19 & 1) != 0 )
          {
            v24 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(v36[2] + 8) + 56LL))(
                    *(_QWORD *)v36[2],
                    v36[5],
                    v36[6]);
            v14 = v19;
            v37 = v19;
            if ( v24 )
              goto LABEL_40;
          }
          v25 = v45;
          v45 = 2LL;
          if ( v25 == 2 )
          {
            if ( v50 < v51 )
              core::slice::index::slice_start_index_len_fail(
                v51,
                v50,
                &anon_af130a5461257101d5d5f055b63ff5a2_29_llvm_15515969997230408038,
                v50 - v51);
            <uu_cut::matcher::ExactMatcher as uu_cut::matcher::Matcher>::next_match(&v42);
            if ( v42 )
            {
              v26 = v51 + v43;
              if ( __CFADD__(v51, v43) )
                core::panicking::panic_const::panic_const_add_overflow(
                  &anon_af130a5461257101d5d5f055b63ff5a2_30_llvm_15515969997230408038,
                  v26);
              v27 = v44 + v51;
              if ( __CFADD__(v44, v51) )
                core::panicking::panic_const::panic_const_add_overflow(
                  &anon_af130a5461257101d5d5f055b63ff5a2_31_llvm_15515969997230408038,
                  v26);
              v51 += v44;
              v25 = 1LL;
            }
            else
            {
              v27 = v4;
              v25 = 0LL;
              v26 = v41;
            }
          }
          else
          {
            v26 = v46;
            v27 = v47;
          }
          v41 = v26;
          if ( !v25 )
            break;
          if ( v26 < v13 )
            core::slice::index::slice_index_order_fail(v13, v26, &off_11AC50);
          if ( v26 > v39 )
            core::slice::index::slice_end_index_len_fail(v41, v39, &off_11AC50);
          v24 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(*(_QWORD *)(v36[2] + 8) + 56LL))(
                  *(_QWORD *)v36[2],
                  v40 + v13,
                  v26 - v13);
          if ( v24 )
            goto LABEL_40;
          if ( v32 )
            core::panicking::panic_const::panic_const_add_overflow(&off_11AC68, v40 + v13);
          if ( (v18 & 1) != 0 )
          {
            v13 = v27;
LABEL_37:
            v12 = v38;
            v7 = v36;
LABEL_38:
            v4 = v27;
            v11 = v53;
            if ( v53 != v52 )
              goto LABEL_4;
            goto LABEL_39;
          }
          v12 = v38;
          v4 = v27;
          v13 = v27;
          v19 = v37;
          if ( v20 > v17 )
          {
            v27 = v4;
            v13 = v4;
            goto LABEL_37;
          }
        }
        if ( v39 < v13 )
          core::slice::index::slice_start_index_len_fail(v13, v39, &off_11AC20, v14);
        v7 = v36;
        v24 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(*(_QWORD *)(v36[2] + 8) + 56LL))(
                *(_QWORD *)v36[2],
                v40 + v13,
                v39 - v13);
        if ( v24 )
          goto LABEL_40;
        if ( !v39 )
          core::panicking::panic_const::panic_const_sub_overflow(&off_11AC38);
        v12 = v54;
        if ( *(_BYTE *)(v40 + v39 - 1) == *(_BYTE *)v36[3] )
          goto LABEL_48;
        goto LABEL_38;
      }
    }
  }
LABEL_39:
  v28 = (_QWORD *)v7[2];
  v34 = *(_BYTE *)v7[3];
  v24 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(v28[1] + 56LL))(*v28, &v34, 1LL);
  if ( !v24 )
  {
LABEL_48:
    v8 = v35;
    goto LABEL_49;
  }
LABEL_40:
  v8 = v35;
LABEL_41:
  *(_QWORD *)(v8 + 8) = v24;
  v29 = 1;
LABEL_50:
  *(_BYTE *)v8 = v29;
  return v8;
}
