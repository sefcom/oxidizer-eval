__int64 __fastcall uu_uniq::Uniq::cmp_keys(__int64 a1, unsigned __int8 *a2, signed __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // [rsp+8h] [rbp-60h] BYREF
  __int64 v13; // [rsp+10h] [rbp-58h]
  __int64 v14; // [rsp+18h] [rbp-50h]
  __int64 v15; // [rsp+20h] [rbp-48h]
  signed __int64 v16; // [rsp+28h] [rbp-40h] BYREF
  __int64 v17; // [rsp+30h] [rbp-38h]
  __int64 v18; // [rsp+38h] [rbp-30h]
  _QWORD v19[5]; // [rsp+40h] [rbp-28h] BYREF

  v19[0] = a1;
  v19[1] = a4;
  v19[2] = a5;
  uu_uniq::Uniq::skip_fields(&v16, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), a2, a3);
  v6 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 16) )
  {
    v5 = v18;
    if ( v6 )
      v5 = *(_QWORD *)(a1 + 40);
    if ( !v18 )
      goto LABEL_21;
    v7 = *(_QWORD *)(a1 + 24);
    if ( !*(_BYTE *)(a1 + 52) )
    {
      if ( v7 )
        goto LABEL_23;
      goto LABEL_20;
    }
LABEL_12:
    if ( v7 )
    {
LABEL_18:
      v8 = v17;
      v12 = v17;
      v13 = v17 + v18;
      v14 = v7;
      v15 = v5;
      result = uu_uniq::Uniq::cmp_keys::{{closure}}(v19, &v12, &unk_F2BF0, v5);
      goto LABEL_24;
    }
LABEL_13:
    if ( v5 == v18 )
    {
      v8 = v17;
      v12 = v17;
      v13 = v17 + v18;
      result = uu_uniq::Uniq::cmp_keys::{{closure}}(v19, &v12, &unk_F2BB8, v5);
      goto LABEL_24;
    }
    goto LABEL_18;
  }
  if ( !v6 )
  {
    if ( !v18 || !*(_BYTE *)(a1 + 52) )
      goto LABEL_21;
    v7 = 0LL;
    v5 = v18;
    goto LABEL_13;
  }
  if ( !v18 )
    goto LABEL_21;
  v5 = *(_QWORD *)(a1 + 40);
  if ( *(_BYTE *)(a1 + 52) )
  {
    v7 = 0LL;
    goto LABEL_12;
  }
LABEL_20:
  if ( v5 == v18 )
  {
LABEL_21:
    v8 = v17;
    v12 = v17;
    v13 = v17 + v18;
    result = uu_uniq::Uniq::cmp_keys::{{closure}}(v19, &v12, &unk_F2B48, v5);
    goto LABEL_24;
  }
  v7 = 0LL;
LABEL_23:
  v8 = v17;
  v12 = v17;
  v13 = v17 + v18;
  v14 = v7;
  v15 = v5;
  result = uu_uniq::Uniq::cmp_keys::{{closure}}(v19, &v12, &unk_F2B80, v5);
LABEL_24:
  if ( v16 )
  {
    v10 = v8;
    v11 = result;
    _rust_dealloc(v10, v16, 1LL);
    return v11;
  }
  return result;
}
