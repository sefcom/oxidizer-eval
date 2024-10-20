        unsigned __int64 a4)
{
  unsigned int v4; // eax
  unsigned int v6; // esi
  char v7; // al
  char v8; // al
  unsigned int v9; // eax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r15
  char v12; // al
  unsigned __int64 v13; // r14
  __int64 v14; // r15
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r13
  char v17; // al

  if ( a3 > a4 )
    core::panicking::panic(aAssertionFaile_5, 28LL, &off_27B5C0);
  if ( a4 > a2 )
    core::panicking::panic(aAssertionFaile_0, 32LL, &off_27B5D8);
  if ( !a3 || a3 == a4 )
    return a3;
  if ( a3 >= a2 )
    core::panicking::panic_bounds_check(a3, a2, &off_27B5F0);
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
  if ( v9 - 9 >= 5 && v9 != 32 )
  {
    v10 = a4;
    if ( v9 < 0x80 )
    {
      if ( a3 >= a4 )
        return a3;
    }
    else
    {
      v11 = a3;
      v12 = core::unicode::unicode_data::white_space::lookup(v9);
      a3 = v11;
      if ( v11 >= v10 )
        return a3;
      a4 = v10;
      if ( v12 )
        return a3;
    }
    v13 = a3 + 1;
    if ( a4 > a3 + 1 )
      v13 = a4;
    v14 = 0x100003E00LL;
    while ( 1 )
    {
      v15 = *(unsigned int *)(a1 + 4 * a3);
      if ( v15 <= 0x20 )
      {
        if ( _bittest64(&v14, v15) )
          break;
      }
      if ( (unsigned int)v15 >= 0x80 )
      {
        v16 = a3;
        v17 = core::unicode::unicode_data::white_space::lookup((unsigned int)v15);
        a4 = v10;
        a3 = v16;
        if ( v17 )
          break;
      }
      if ( ++a3 >= a4 )
        return v13;
    }
  }
  return a3;
}
