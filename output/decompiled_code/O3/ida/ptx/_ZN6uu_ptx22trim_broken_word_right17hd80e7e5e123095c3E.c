        unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // eax
  unsigned int v7; // r8d
  char v8; // al
  char v9; // al
  unsigned int v10; // eax
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r13
  char v13; // al
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rbp
  char v18; // al

  if ( a3 > a4 )
    core::panicking::panic(aAssertionFaile_5, 28LL, &off_27B5C0);
  if ( a4 > a2 )
    core::panicking::panic(aAssertionFaile_0, 32LL, &off_27B5D8);
  if ( a3 == a4 || a4 == a2 )
    return a4;
  v4 = a4 - 1;
  if ( a4 - 1 >= a2 )
    core::panicking::panic_bounds_check(a4 - 1, a2, &off_27B608);
  v5 = *(_DWORD *)(a1 + 4 * a4 - 4);
  if ( v5 - 9 < 5 || v5 == 32 )
    return a4;
  if ( v5 >= 0x80 )
  {
    v7 = v5 >> 8;
    if ( v5 >> 8 > 0x1F )
    {
      if ( v7 != 32 )
      {
        if ( v7 != 48 )
          goto LABEL_21;
        v8 = v5 == 12288;
        goto LABEL_20;
      }
      v9 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v5] >> 1;
    }
    else
    {
      if ( v7 )
      {
        if ( v7 != 22 )
          goto LABEL_21;
        v8 = v5 == 5760;
        goto LABEL_20;
      }
      v9 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v5];
    }
    v8 = v9 & 1;
LABEL_20:
    if ( v8 )
      return a4;
  }
LABEL_21:
  if ( a4 >= a2 )
    core::panicking::panic_bounds_check(a4, a2, &off_27B620);
  v10 = *(_DWORD *)(a1 + 4 * a4);
  if ( v10 - 9 >= 5 && v10 != 32 )
  {
    v11 = a3;
    if ( v10 < 0x80 )
    {
      if ( a4 <= a3 )
        return a4;
    }
    else
    {
      v12 = a4;
      v13 = core::unicode::unicode_data::white_space::lookup(v10);
      a4 = v12;
      if ( v12 <= v11 )
        return a4;
      a3 = v11;
      if ( v13 )
        return a4;
    }
    if ( a3 < v4 )
      v4 = a3;
    while ( 1 )
    {
      v14 = a4 - 1;
      if ( a4 - 1 >= a2 )
        core::panicking::panic_bounds_check(a4 - 1, a2, &off_27B638);
      v15 = *(unsigned int *)(a1 + 4 * v14);
      if ( v15 <= 0x20 )
      {
        v16 = 0x100003E00LL;
        if ( _bittest64(&v16, v15) )
          break;
      }
      if ( (unsigned int)v15 >= 0x80 )
      {
        v17 = a4;
        v18 = core::unicode::unicode_data::white_space::lookup((unsigned int)v15);
        a3 = v11;
        a4 = v17;
        if ( v18 )
          break;
      }
      a4 = v14;
      if ( v14 <= a3 )
        return v4;
    }
  }
  return a4;
}
