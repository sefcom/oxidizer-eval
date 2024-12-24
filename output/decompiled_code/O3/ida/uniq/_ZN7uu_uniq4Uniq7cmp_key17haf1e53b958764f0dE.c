__int64 __fastcall uu_uniq::Uniq::cmp_key(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ebx
  __int64 v18; // [rsp+8h] [rbp-50h] BYREF
  __int64 v19; // [rsp+10h] [rbp-48h]
  __int64 v20; // [rsp+18h] [rbp-40h]
  __int64 v21; // [rsp+20h] [rbp-38h]
  __int64 v22; // [rsp+28h] [rbp-30h] BYREF
  __int64 v23; // [rsp+30h] [rbp-28h]
  __int64 v24; // [rsp+38h] [rbp-20h]

  uu_uniq::Uniq::skip_fields(&v22, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), a2, a3);
  v7 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 16) )
  {
    v8 = v24;
    if ( v7 )
      v8 = *(_QWORD *)(a1 + 40);
    if ( !v24 )
      goto LABEL_21;
    v9 = *(_QWORD *)(a1 + 24);
    if ( !*(_BYTE *)(a1 + 52) )
    {
      if ( v9 )
        goto LABEL_23;
      goto LABEL_20;
    }
  }
  else
  {
    if ( !v7 )
    {
      if ( !v24 || !*(_BYTE *)(a1 + 52) )
        goto LABEL_21;
      v9 = 0LL;
      v8 = v24;
      goto LABEL_13;
    }
    if ( !v24 )
      goto LABEL_21;
    v8 = *(_QWORD *)(a1 + 40);
    if ( !*(_BYTE *)(a1 + 52) )
    {
LABEL_20:
      if ( v8 == v24 )
      {
LABEL_21:
        v18 = v23;
        v19 = v23 + v24;
        v10 = a5;
        v11 = uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a4, a5, &v18, &unk_130EE8);
        goto LABEL_24;
      }
      v9 = 0LL;
LABEL_23:
      v18 = v23;
      v19 = v23 + v24;
      v20 = v9;
      v21 = v8;
      v10 = a5;
      v11 = uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a4, a5, &v18, &unk_130F20);
      goto LABEL_24;
    }
    v9 = 0LL;
  }
  if ( v9 )
  {
LABEL_18:
    v18 = v23;
    v19 = v23 + v24;
    v20 = v9;
    v21 = v8;
    v10 = a5;
    v11 = uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a4, a5, &v18, &unk_130F90);
    goto LABEL_24;
  }
LABEL_13:
  if ( v8 != v24 )
    goto LABEL_18;
  v18 = v23;
  v19 = v23 + v24;
  v10 = a5;
  v11 = uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a4, a5, &v18, &unk_130F58);
LABEL_24:
  v16 = v11;
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v22, v10, v12, v13, v14, v15);
  return v16;
}
