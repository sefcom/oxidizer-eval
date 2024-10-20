__int64 __fastcall uu_uniq::Uniq::cmp_keys(__int64 a1, unsigned __int8 *a2, size_t a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  char v7; // si
  __int64 v8; // rbx
  __int64 result; // rax
  bool v10; // di
  void *v11; // rdx
  __int64 v12; // rdi
  unsigned int v13; // ebx
  __int64 v14; // [rsp+8h] [rbp-60h] BYREF
  __int64 v15; // [rsp+10h] [rbp-58h]
  __int64 v16; // [rsp+18h] [rbp-50h]
  __int64 v17; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+28h] [rbp-40h] BYREF
  __int64 v19; // [rsp+30h] [rbp-38h]
  __int64 v20; // [rsp+38h] [rbp-30h]
  _QWORD v21[5]; // [rsp+40h] [rbp-28h] BYREF

  v21[0] = a1;
  v21[1] = a4;
  v21[2] = a5;
  uu_uniq::Uniq::skip_fields(&v18, (_QWORD *)a1, a2, a3);
  v5 = *(_QWORD *)(a1 + 16);
  if ( v5 )
    v5 = *(_QWORD *)(a1 + 24);
  v6 = v20;
  if ( *(_QWORD *)(a1 + 32) )
    v6 = *(_QWORD *)(a1 + 40);
  if ( v20 )
  {
    v7 = *(_BYTE *)(a1 + 52);
    if ( (v7 & 1) == 0 && !v5 && v6 == v20 )
    {
      if ( v20 >= 0 )
      {
        v8 = v19;
        if ( v19 )
        {
          v14 = v19;
          v15 = v19 + v20;
          result = uu_uniq::Uniq::cmp_keys::{{closure}}(v21, &v14, &unk_11C990, 0LL);
          goto LABEL_25;
        }
      }
LABEL_28:
      core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
    }
    v8 = v19;
    v10 = v19 == 0 || v20 < 0;
    if ( (v7 & 1) != 0 && !v5 && v6 == v20 )
    {
      if ( v10 )
        goto LABEL_28;
      v14 = v19;
      v15 = v19 + v20;
      v11 = &unk_11CA70;
LABEL_22:
      result = uu_uniq::Uniq::cmp_keys::{{closure}}(v21, &v14, v11, v5);
      goto LABEL_25;
    }
    if ( (v7 & 1) == 0 )
    {
      if ( v10 )
        goto LABEL_28;
      v14 = v19;
      v15 = v19 + v20;
      v16 = v5;
      v17 = v6;
      v11 = &unk_11CA00;
      goto LABEL_22;
    }
    if ( v10 )
      goto LABEL_28;
    v14 = v19;
    v15 = v19 + v20;
    v16 = v5;
    v17 = v6;
    result = uu_uniq::Uniq::cmp_keys::{{closure}}(v21, &v14, &unk_11CAA8, v5);
  }
  else
  {
    v8 = v19;
    if ( !v19 )
      goto LABEL_28;
    v14 = v19;
    v15 = v19;
    result = uu_uniq::Uniq::cmp_keys::{{closure}}(v21, &v14, &unk_11C990, v5);
  }
LABEL_25:
  if ( v18 )
  {
    v12 = v8;
    v13 = result;
    _rust_dealloc(v12, v18, 1LL);
    return v13;
  }
  return result;
}
