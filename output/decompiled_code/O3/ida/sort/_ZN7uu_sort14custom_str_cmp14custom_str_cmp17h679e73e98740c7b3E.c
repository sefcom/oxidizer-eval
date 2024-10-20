        char a7)
{
  __int64 v7; // rbx
  int v8; // eax
  char result; // al
  unsigned __int8 *v10; // rsi
  unsigned __int8 *v11; // rcx
  __int64 v12; // rbx
  unsigned int v13; // r15d
  unsigned int v14; // r11d
  bool v15; // cf
  bool v16; // zf
  unsigned int v17; // eax
  unsigned int v18; // r14d
  int v19; // r15d
  int v20; // r13d
  int v21; // r12d
  unsigned __int8 v22; // r14
  unsigned int v23; // r14d
  unsigned int v24; // r15d
  int v25; // r12d
  int v26; // r11d
  int v27; // r13d
  unsigned __int8 v28; // r15

  if ( !a6 && !a7 && !a5 )
  {
    v7 = a2 - a4;
    if ( a2 < a4 )
      a4 = a2;
    v8 = memcmp(a1, a3, a4);
    if ( v8 )
      v7 = v8;
    result = -1;
    if ( v7 >= 0 )
      return v7 != 0;
    return result;
  }
  v10 = &a1[a2];
  v11 = &a3[a4];
  v12 = 0x100003600LL;
  do
  {
LABEL_20:
    v17 = 1114112;
    if ( a1 == v10 )
    {
      a1 = v10;
      break;
    }
    v18 = *a1;
    if ( (v18 & 0x80u) == 0 )
    {
      ++a1;
      if ( (_BYTE)a6 )
        goto LABEL_30;
      goto LABEL_34;
    }
    v19 = v18 & 0x1F;
    v20 = a1[1] & 0x3F;
    if ( (unsigned __int8)v18 <= 0xDFu )
    {
      a1 += 2;
      v18 = v20 | (v19 << 6);
      goto LABEL_29;
    }
    v21 = (v20 << 6) | a1[2] & 0x3F;
    if ( (unsigned __int8)v18 >= 0xF0u )
    {
      v22 = a1[3];
      a1 += 4;
      v18 = ((v19 & 7) << 18) | (v21 << 6) | v22 & 0x3F;
      if ( v18 == 1114112 )
        break;
LABEL_29:
      if ( (_BYTE)a6 )
        goto LABEL_30;
      goto LABEL_34;
    }
    a1 += 3;
    v18 = (v19 << 12) | v21;
    if ( (_BYTE)a6 )
    {
LABEL_30:
      if ( v18 - 48 >= 0xA && (v18 & 0xFFFFFFDF) - 65 >= 0x1A )
      {
        v17 = 1114112;
        if ( v18 > 0x20 || !_bittest64(&v12, v18) )
          continue;
      }
    }
LABEL_34:
    v17 = v18;
    if ( a5 )
      v17 = 1114112;
    if ( v18 - 127 >= 0xFFFFFFA1 )
      v17 = v18;
  }
  while ( v17 == 1114112 );
  while ( 1 )
  {
    v23 = 1114112;
    if ( a3 == v11 )
      break;
    v24 = *a3;
    if ( (v24 & 0x80u) == 0 )
    {
      ++a3;
      if ( !(_BYTE)a6 )
        goto LABEL_57;
      goto LABEL_53;
    }
    v25 = v24 & 0x1F;
    v26 = a3[1] & 0x3F;
    if ( (unsigned __int8)v24 <= 0xDFu )
    {
      a3 += 2;
      v24 = v26 | (v25 << 6);
      goto LABEL_52;
    }
    v27 = (v26 << 6) | a3[2] & 0x3F;
    if ( (unsigned __int8)v24 >= 0xF0u )
    {
      v28 = a3[3];
      a3 += 4;
      v24 = ((v25 & 7) << 18) | (v27 << 6) | v28 & 0x3F;
      if ( v24 == 1114112 )
        goto LABEL_66;
LABEL_52:
      if ( !(_BYTE)a6 )
        goto LABEL_57;
      goto LABEL_53;
    }
    a3 += 3;
    v24 = (v25 << 12) | v27;
    if ( !(_BYTE)a6 )
      goto LABEL_57;
LABEL_53:
    if ( v24 - 48 < 0xA || (v24 & 0xFFFFFFDF) - 65 < 0x1A || (v23 = 1114112, v24 <= 0x20) && _bittest64(&v12, v24) )
    {
LABEL_57:
      v23 = v24;
      if ( a5 )
        v23 = 1114112;
      if ( v24 - 127 >= 0xFFFFFFA1 )
        v23 = v24;
    }
    if ( v23 != 1114112 )
      goto LABEL_66;
  }
  a3 = v11;
LABEL_66:
  if ( v17 == 1114112 )
    return -(v23 != 1114112);
  if ( v23 != 1114112 )
  {
    if ( a7 )
    {
      v13 = v17 & 0x5F;
      if ( v17 - 97 >= 0x1A )
        v13 = v17;
      v14 = v23 & 0x5F;
      if ( v23 - 97 >= 0x1A )
        v14 = v23;
      v15 = v13 < v14;
      v16 = v13 == v14;
    }
    else
    {
      v15 = v17 < v23;
      v16 = v17 == v23;
    }
    result = !v16;
    if ( v15 )
      result = -1;
    if ( result )
      return result;
    goto LABEL_20;
  }
  return 1;
}
