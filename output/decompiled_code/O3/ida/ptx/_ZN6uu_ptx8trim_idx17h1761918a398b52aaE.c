unsigned __int64 __fastcall uu_ptx::trim_idx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  char v4; // r8
  char v5; // r8
  unsigned int v6; // r8d
  unsigned int v7; // r9d
  char v8; // r9
  char v9; // r9
  __int64 v10; // rax
  unsigned int v11; // r9d
  unsigned int v12; // r10d

  if ( a3 > a4 )
    core::panicking::panic(aAssertionFaile_5, 28LL, &off_27B5C0);
  if ( a4 > a2 )
    core::panicking::panic(aAssertionFaile_0, 32LL, &off_27B5D8);
  if ( a3 < a4 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(a1 + 4 * a3);
      if ( v6 - 9 >= 5 && v6 != 32 )
        break;
LABEL_8:
      if ( a4 == ++a3 )
        return a4;
    }
    if ( v6 < 0x80 )
      goto LABEL_20;
    v7 = v6 >> 8;
    if ( v6 >> 8 > 0x1F )
    {
      if ( v7 != 32 )
      {
        if ( v7 != 48 )
          goto LABEL_20;
        v5 = v6 == 12288;
        goto LABEL_7;
      }
      v4 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v6] >> 1;
    }
    else
    {
      if ( v7 )
      {
        if ( v7 != 22 )
          goto LABEL_20;
        v5 = v6 == 5760;
        goto LABEL_7;
      }
      v4 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v6];
    }
    v5 = v4 & 1;
LABEL_7:
    if ( !v5 )
      goto LABEL_20;
    goto LABEL_8;
  }
LABEL_20:
  if ( a3 < a4 )
  {
    while ( 1 )
    {
      v10 = a4--;
      if ( a4 >= a2 )
        core::panicking::panic_bounds_check(v10 - 1, a2, &off_27B650);
      v11 = *(_DWORD *)(a1 + 4 * a4);
      if ( v11 - 9 >= 5 && v11 != 32 )
        break;
LABEL_26:
      if ( a3 >= a4 )
        return a3;
    }
    if ( v11 < 0x80 )
      return a3;
    v12 = v11 >> 8;
    if ( v11 >> 8 > 0x1F )
    {
      if ( v12 != 32 )
      {
        if ( v12 != 48 )
          return a3;
        v9 = v11 == 12288;
        goto LABEL_25;
      }
      v8 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v11] >> 1;
    }
    else
    {
      if ( v12 )
      {
        if ( v12 != 22 )
          return a3;
        v9 = v11 == 5760;
        goto LABEL_25;
      }
      v8 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v11];
    }
    v9 = v8 & 1;
LABEL_25:
    if ( !v9 )
      return a3;
    goto LABEL_26;
  }
  return a3;
}
