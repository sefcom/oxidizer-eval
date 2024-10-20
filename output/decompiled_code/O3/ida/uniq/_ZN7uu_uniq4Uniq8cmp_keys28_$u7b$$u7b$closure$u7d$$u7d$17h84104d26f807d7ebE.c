__int64 __fastcall uu_uniq::Uniq::cmp_keys::{{closure}}(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rbx
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // r13
  _BYTE *v9; // rbx
  __int64 (__fastcall *v10)(__int64); // r13
  __int64 v11; // r15
  int v12; // eax
  char v13; // dl
  unsigned __int8 v14; // al
  __int64 (__fastcall *v15)(__int64); // r13
  char v16; // dl
  char v17; // r12
  char v18; // dl
  __int64 (__fastcall *v19)(__int64); // r15
  char v20; // dl
  _BYTE *v21; // rax
  __int64 v22; // r13
  char v23; // dl
  unsigned __int8 v24; // al
  __int64 (__fastcall *v25)(__int64); // r13
  char v26; // dl
  char v27; // r12
  char v28; // dl
  __int64 v29; // rax
  _BYTE *v30; // rax
  __int64 (__fastcall *v31)(__int64); // r13
  char v32; // dl
  char v33; // r12
  char v34; // dl
  int v35; // eax
  _BYTE *v37; // [rsp+8h] [rbp-80h] BYREF
  _BYTE *v38; // [rsp+10h] [rbp-78h]
  unsigned __int64 v39; // [rsp+18h] [rbp-70h]
  __int64 v40; // [rsp+20h] [rbp-68h]
  __int64 v41; // [rsp+28h] [rbp-60h]
  _BYTE *v42; // [rsp+30h] [rbp-58h]
  signed __int64 v43; // [rsp+38h] [rbp-50h] BYREF
  _BYTE *v44; // [rsp+40h] [rbp-48h]
  __int64 v45; // [rsp+48h] [rbp-40h]
  unsigned __int64 v46; // [rsp+50h] [rbp-38h]

  v4 = *(__int64 **)a1;
  uu_uniq::Uniq::skip_fields(
    &v43,
    **(_QWORD **)a1,
    *(_QWORD *)(*(_QWORD *)a1 + 8LL),
    *(unsigned __int8 **)(a1 + 8),
    *(_QWORD *)(a1 + 16));
  v5 = v45;
  v6 = v4[4];
  if ( v4[2] )
  {
    v7 = v45;
    if ( v6 )
      v7 = v4[5];
    if ( v45 )
    {
      v8 = v4[3];
      if ( !*((_BYTE *)v4 + 52) )
      {
        if ( v8 )
          goto LABEL_52;
        goto LABEL_40;
      }
      goto LABEL_15;
    }
LABEL_22:
    v9 = v44;
    v37 = v44;
    v38 = &v44[v45];
    v15 = *(__int64 (__fastcall **)(__int64))(a3 + 24);
    LODWORD(v7) = 0;
    while ( (v15(a2) & 1) != 0 )
    {
      v17 = v16;
      if ( (<core::iter::adapters::copied::Copied<I> as core::iter::traits::iterator::Iterator>::next(&v37) & 1) == 0
        || v18 != v17 )
      {
        goto LABEL_64;
      }
    }
    goto LABEL_58;
  }
  if ( !v6 )
  {
    if ( v45 )
    {
      if ( !*((_BYTE *)v4 + 52) )
        goto LABEL_41;
      v8 = 0LL;
      v7 = v45;
      goto LABEL_15;
    }
    goto LABEL_22;
  }
  if ( !v45 )
    goto LABEL_22;
  v7 = v4[5];
  if ( !*((_BYTE *)v4 + 52) )
  {
LABEL_40:
    if ( v7 == v45 )
    {
LABEL_41:
      v9 = v44;
      v37 = v44;
      v38 = &v44[v45];
      v25 = *(__int64 (__fastcall **)(__int64))(a3 + 24);
      LODWORD(v7) = 0;
      while ( (v25(a2) & 1) != 0 )
      {
        v27 = v26;
        if ( (<core::iter::adapters::copied::Copied<I> as core::iter::traits::iterator::Iterator>::next(&v37) & 1) == 0
          || v28 != v27 )
        {
          goto LABEL_64;
        }
      }
LABEL_58:
      v35 = <core::iter::adapters::copied::Copied<I> as core::iter::traits::iterator::Iterator>::next(&v37);
LABEL_59:
      LODWORD(v7) = v35;
      LOBYTE(v7) = v35 ^ 1;
      goto LABEL_64;
    }
    v8 = 0LL;
LABEL_52:
    v9 = v44;
    v37 = v44;
    v38 = &v44[v45];
    v39 = v8;
    v40 = v7;
    v31 = *(__int64 (__fastcall **)(__int64))(a3 + 24);
    LODWORD(v7) = 0;
    while ( (v31(a2) & 1) != 0 )
    {
      v33 = v32;
      if ( (<core::iter::adapters::copied::Copied<I> as core::iter::traits::iterator::Iterator>::next(&v37) & 1) == 0
        || v34 != v33 )
      {
        goto LABEL_64;
      }
    }
    v35 = <core::iter::adapters::copied::Copied<I> as core::iter::traits::iterator::Iterator>::next(&v37);
    goto LABEL_59;
  }
  v8 = 0LL;
LABEL_15:
  v9 = v44;
  if ( !v8 && v7 == v45 )
  {
    v10 = *(__int64 (__fastcall **)(__int64))(a3 + 24);
    v11 = 0LL;
    while ( 1 )
    {
      v12 = v10(a2);
      LODWORD(v7) = v12;
      if ( (((unsigned __int8)v12 ^ 1) & 1) != 0 || v5 == v11 )
        break;
      v14 = v9[v11++];
      if ( (v14 | (unsigned __int8)(32 * ((unsigned __int8)(v14 - 65) < 0x1Au))) != v13 )
        goto LABEL_63;
    }
    LOBYTE(v7) = (v5 == v11) & (v12 ^ 1);
    goto LABEL_64;
  }
  v19 = *(__int64 (__fastcall **)(__int64))(a3 + 24);
  if ( (v19(a2) & 1) == 0 )
  {
    v29 = v7;
    LOBYTE(v7) = 1;
    if ( !v29 )
      goto LABEL_64;
    v30 = v9;
    if ( v8 )
    {
      if ( v5 <= v8 )
        goto LABEL_64;
      goto LABEL_63;
    }
    goto LABEL_62;
  }
  if ( !v7 )
    goto LABEL_63;
  v21 = v9;
  if ( v8 )
  {
    if ( v5 <= v8 )
      goto LABEL_63;
    v21 = &v9[v8];
  }
  v42 = v21;
  if ( (*v21 | (unsigned __int8)(32 * ((unsigned __int8)(*v21 - 65) < 0x1Au))) != v20 )
    goto LABEL_63;
  v41 = v7;
  v46 = v5 - v8;
  v22 = 1LL;
  while ( (v19(a2) & 1) != 0 )
  {
    LODWORD(v7) = 0;
    if ( v41 != v22 && v46 != v22 )
    {
      v24 = v42[v22++];
      LODWORD(v7) = 0;
      if ( (v24 | (unsigned __int8)(32 * ((unsigned __int8)(v24 - 65) < 0x1Au))) == v23 )
        continue;
    }
    goto LABEL_64;
  }
  LOBYTE(v7) = 1;
  if ( v41 != v22 )
  {
    v30 = &v42[v22];
LABEL_62:
    if ( v30 == &v9[v5] )
    {
      LOBYTE(v7) = 1;
      goto LABEL_64;
    }
LABEL_63:
    LODWORD(v7) = 0;
  }
LABEL_64:
  if ( v43 )
    _rust_dealloc(v9, v43, 1LL);
  LOBYTE(v7) = (v7 & 1) == 0;
  return (unsigned int)v7;
}
