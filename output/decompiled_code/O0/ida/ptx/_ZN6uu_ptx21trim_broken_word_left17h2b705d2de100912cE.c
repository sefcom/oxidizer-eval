        unsigned __int64 a4)
{
  unsigned int v4; // eax
  unsigned int v6; // esi
  char v7; // al
  char v8; // al
  unsigned int v9; // eax
  unsigned int v10; // r8d
  char v11; // si
  char v12; // si
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  char v15; // r9
  char v16; // r9
  unsigned __int64 v17; // r9
  unsigned int v18; // r10d

  if ( a3 > a4 )
    core::panicking::panic(aAssertionFaile_8, 28LL, &off_2AAC80);
  if ( a4 > a2 )
    core::panicking::panic(aAssertionFaile_7, 32LL, &off_2AAC98);
  if ( !a3 || a3 == a4 )
    return a3;
  if ( a3 >= a2 )
    core::panicking::panic_bounds_check(a3, a2, &off_2AACB0);
  v4 = *(_DWORD *)(a1 + 4 * a3);
  if ( v4 - 9 < 5 || v4 == 32 )
    return a3;
  if ( v4 >= 0x80 )
  {
    v6 = v4 >> 8;
    if ( v4 >> 8 > 0x1F )
    {
      if ( v6 != 32 )
      {
        if ( v6 != 48 )
          goto LABEL_21;
        v7 = v4 == 12288;
        goto LABEL_20;
      }
      v8 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v4] >> 1;
    }
    else
    {
      if ( v6 )
      {
        if ( v6 != 22 )
          goto LABEL_21;
        v7 = v4 == 5760;
        goto LABEL_20;
      }
      v8 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v4];
    }
    v7 = v8 & 1;
LABEL_20:
    if ( v7 )
      return a3;
  }
LABEL_21:
  v9 = *(_DWORD *)(a1 + 4 * a3 - 4);
  if ( v9 - 9 < 5 || v9 == 32 )
    return a3;
  if ( v9 <= 0x7F )
    goto LABEL_35;
  v10 = v9 >> 8;
  v11 = 0;
  if ( v9 >> 8 <= 0x1F )
  {
    if ( v10 )
    {
      if ( v10 == 22 )
        v11 = v9 == 5760;
      goto LABEL_34;
    }
    v12 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v9];
LABEL_33:
    v11 = v12 & 1;
    goto LABEL_34;
  }
  if ( v10 == 32 )
  {
    v12 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v9] >> 1;
    goto LABEL_33;
  }
  if ( v10 == 48 )
    v11 = v9 == 12288;
LABEL_34:
  if ( v11 )
    return a3;
LABEL_35:
  if ( a3 < a4 )
  {
    v13 = a3 + 1;
    if ( a4 > a3 + 1 )
      v13 = a4;
    v14 = 0x100003E00LL;
    while ( 1 )
    {
      v17 = *(unsigned int *)(a1 + 4 * a3);
      if ( v17 <= 0x20 && _bittest64(&v14, v17) )
        return a3;
      if ( (unsigned int)v17 >= 0x80 )
      {
        v18 = (unsigned int)v17 >> 8;
        if ( (unsigned int)v17 >> 8 > 0x1F )
        {
          if ( v18 == 32 )
          {
            v15 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v17] >> 1;
LABEL_40:
            v16 = v15 & 1;
            goto LABEL_41;
          }
          if ( v18 == 48 )
          {
            v16 = (_DWORD)v17 == 12288;
LABEL_41:
            if ( v16 )
              return a3;
          }
        }
        else
        {
          if ( !v18 )
          {
            v15 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v17];
            goto LABEL_40;
          }
          if ( v18 == 22 )
          {
            v16 = (_DWORD)v17 == 5760;
            goto LABEL_41;
          }
        }
      }
      if ( ++a3 >= a4 )
        return v13;
    }
  }
  return a3;
}
