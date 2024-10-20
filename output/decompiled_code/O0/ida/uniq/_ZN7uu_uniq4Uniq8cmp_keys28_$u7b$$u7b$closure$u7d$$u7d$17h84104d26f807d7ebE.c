char __fastcall uu_uniq::Uniq::cmp_keys::{{closure}}(__int64 *a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  char v8; // si
  __int64 v9; // rbx
  char v10; // al
  bool v11; // di
  void *v12; // rcx
  __int64 v13; // rdi
  char v14; // bl
  __int64 v16; // [rsp+8h] [rbp-50h] BYREF
  __int64 v17; // [rsp+10h] [rbp-48h]
  __int64 v18; // [rsp+18h] [rbp-40h]
  __int64 v19; // [rsp+20h] [rbp-38h]
  __int64 v20; // [rsp+28h] [rbp-30h] BYREF
  __int64 v21; // [rsp+30h] [rbp-28h]
  __int64 v22; // [rsp+38h] [rbp-20h]

  v5 = (_QWORD *)*a1;
  uu_uniq::Uniq::skip_fields(&v20, (_QWORD *)*a1, (unsigned __int8 *)a1[1], a1[2]);
  v6 = v5[2];
  if ( v6 )
    v6 = v5[3];
  v7 = v22;
  if ( v5[4] )
    v7 = v5[5];
  if ( v22 )
  {
    v8 = *((_BYTE *)v5 + 52);
    if ( (v8 & 1) == 0 && !v6 && v7 == v22 )
    {
      if ( v22 >= 0 )
      {
        v9 = v21;
        if ( v21 )
        {
          v16 = v21;
          v17 = v21 + v22;
          v10 = core::iter::traits::iterator::Iterator::eq_by(a2, a3, &v16, &unk_11C990);
          goto LABEL_25;
        }
      }
LABEL_28:
      core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
    }
    v9 = v21;
    v11 = v21 == 0 || v22 < 0;
    if ( (v8 & 1) != 0 && !v6 && v7 == v22 )
    {
      if ( v11 )
        goto LABEL_28;
      v16 = v21;
      v17 = v21 + v22;
      v12 = &unk_11C9C8;
LABEL_22:
      v10 = core::iter::traits::iterator::Iterator::eq_by(a2, a3, &v16, v12);
      goto LABEL_25;
    }
    if ( (v8 & 1) == 0 )
    {
      if ( v11 )
        goto LABEL_28;
      v16 = v21;
      v17 = v21 + v22;
      v18 = v6;
      v19 = v7;
      v12 = &unk_11CA00;
      goto LABEL_22;
    }
    if ( v11 )
      goto LABEL_28;
    v16 = v21;
    v17 = v21 + v22;
    v18 = v6;
    v19 = v7;
    v10 = core::iter::traits::iterator::Iterator::eq_by(a2, a3, &v16, &unk_11CA38);
  }
  else
  {
    v9 = v21;
    if ( !v21 )
      goto LABEL_28;
    v16 = v21;
    v17 = v21;
    v10 = core::iter::traits::iterator::Iterator::eq_by(a2, a3, &v16, &unk_11C990);
  }
LABEL_25:
  if ( v20 )
  {
    v13 = v9;
    v14 = v10;
    _rust_dealloc(v13, v20, 1LL);
    v10 = v14;
  }
  return v10 ^ 1;
}
