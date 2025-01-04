__int64 __fastcall uu_uniq::Uniq::cmp_key(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v15; // [rsp+0h] [rbp-48h] BYREF
  __int64 v16; // [rsp+8h] [rbp-40h]
  __int64 v17; // [rsp+10h] [rbp-38h]
  __int64 v18; // [rsp+18h] [rbp-30h]
  __int64 v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+28h] [rbp-20h]
  __int64 v21; // [rsp+30h] [rbp-18h]

  uu_uniq::Uniq::skip_fields(&v19, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), a2, a3);
  v5 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 16) )
  {
    v6 = v21;
    if ( v5 )
      v6 = *(_QWORD *)(a1 + 40);
    if ( !v21 )
      goto LABEL_21;
    v7 = *(_QWORD *)(a1 + 24);
    if ( !*(_BYTE *)(a1 + 52) )
    {
      if ( v7 )
        goto LABEL_23;
      goto LABEL_20;
    }
  }
  else
  {
    if ( !v5 )
    {
      if ( !v21 || !*(_BYTE *)(a1 + 52) )
        goto LABEL_21;
      v7 = 0LL;
      v6 = v21;
      goto LABEL_13;
    }
    if ( !v21 )
      goto LABEL_21;
    v6 = *(_QWORD *)(a1 + 40);
    if ( !*(_BYTE *)(a1 + 52) )
    {
LABEL_20:
      if ( v6 == v21 )
      {
LABEL_21:
        v15 = v20;
        v16 = v20 + v21;
        v8 = uu_uniq::Uniq::cmp_keys::{{closure}}(a4, &v15, &unk_130318);
        goto LABEL_24;
      }
      v7 = 0LL;
LABEL_23:
      v15 = v20;
      v16 = v20 + v21;
      v17 = v7;
      v18 = v6;
      v8 = uu_uniq::Uniq::cmp_keys::{{closure}}(a4, &v15, &unk_130350);
      goto LABEL_24;
    }
    v7 = 0LL;
  }
  if ( v7 )
  {
LABEL_18:
    v15 = v20;
    v16 = v20 + v21;
    v17 = v7;
    v18 = v6;
    v8 = uu_uniq::Uniq::cmp_keys::{{closure}}(a4, &v15, &unk_1303C0);
    goto LABEL_24;
  }
LABEL_13:
  if ( v6 != v21 )
    goto LABEL_18;
  v15 = v20;
  v16 = v20 + v21;
  v8 = uu_uniq::Uniq::cmp_keys::{{closure}}(a4, &v15, &unk_130388);
LABEL_24:
  v13 = v8;
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v19, &v15, v9, v10, v11, v12, v15, v16, v17);
  return v13;
}
