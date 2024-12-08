__int64 example::example_dividing_by_zero()
{
  char **v0; // rdx
  _BYTE *v1; // r8
  unsigned __int8 *v2; // rcx
  unsigned __int8 *v3; // rsi
  unsigned __int8 *v4; // rdx
  char v5; // r9
  char v6; // r9
  unsigned __int8 *v7; // r10
  unsigned __int8 *v8; // rax
  unsigned int v9; // r9d
  int v10; // esi
  int v11; // ebp
  int v12; // r11d
  unsigned int v13; // r10d
  char v14; // r10
  char v15; // r10
  unsigned __int8 *v16; // r9
  unsigned int v17; // r10d
  char v18; // r11
  char v19; // bp
  int v20; // ebp
  int v21; // r11d
  unsigned int v22; // r11d
  __int64 v23; // rax
  __int64 result; // rax
  __int64 v25; // [rsp+0h] [rbp-78h] BYREF
  __int64 v26; // [rsp+8h] [rbp-70h]
  __int64 v27; // [rsp+10h] [rbp-68h]
  int v28; // [rsp+1Ch] [rbp-5Ch] BYREF
  char **v29; // [rsp+20h] [rbp-58h] BYREF
  __int64 v30; // [rsp+28h] [rbp-50h]
  _QWORD *v31; // [rsp+30h] [rbp-48h]
  __int128 v32; // [rsp+38h] [rbp-40h]
  _QWORD v33[5]; // [rsp+50h] [rbp-28h] BYREF

  v29 = &off_57250;
  v30 = 1LL;
  v31 = (_QWORD *)&byte_8;
  v32 = 0LL;
  std::io::stdio::_print(&v29);
  v25 = 0LL;
  v26 = 1LL;
  v27 = 0LL;
  v33[0] = std::io::stdio::stdin();
  if ( std::io::stdio::Stdin::read_line(v33, &v25) )
  {
    v29 = v0;
    core::result::unwrap_failed(aFailedToReadLi, 19LL, &v29, &off_57138, &off_57260);
  }
  v2 = (unsigned __int8 *)(v26 + v27);
  if ( v27 )
  {
    v1 = core::unicode::unicode_data::white_space::WHITESPACE_MAP;
    v3 = 0LL;
    v4 = (unsigned __int8 *)v26;
    while ( 1 )
    {
      v7 = v4;
      v8 = v3;
      v9 = *v4;
      if ( (v9 & 0x80u) != 0 )
      {
        v10 = v9 & 0x1F;
        v11 = v4[1] & 0x3F;
        if ( (unsigned __int8)v9 <= 0xDFu )
        {
          v4 += 2;
          v9 = v11 | (v10 << 6);
        }
        else
        {
          v12 = (v11 << 6) | v4[2] & 0x3F;
          if ( (unsigned __int8)v9 < 0xF0u )
          {
            v4 += 3;
            v9 = (v10 << 12) | v12;
          }
          else
          {
            v4 += 4;
            v9 = ((v9 & 7) << 18) | (v12 << 6) | v7[3] & 0x3F;
          }
        }
      }
      else
      {
        ++v4;
      }
      v3 = &v8[v4 - v7];
      if ( v9 - 9 < 5 || v9 == 32 )
        goto LABEL_7;
      if ( v9 < 0x80 )
        goto LABEL_28;
      v13 = v9 >> 8;
      if ( v9 >> 8 > 0x1F )
      {
        if ( v13 != 32 )
        {
          if ( v13 != 48 )
            goto LABEL_28;
          v6 = v9 == 12288;
          goto LABEL_6;
        }
        v5 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v9] >> 1;
      }
      else
      {
        if ( v13 )
        {
          if ( v13 != 22 )
            goto LABEL_28;
          v6 = v9 == 5760;
          goto LABEL_6;
        }
        v5 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v9];
      }
      v6 = v5 & 1;
LABEL_6:
      if ( !v6 )
        goto LABEL_28;
LABEL_7:
      if ( v4 == v2 )
      {
        v8 = 0LL;
        v3 = 0LL;
        goto LABEL_55;
      }
    }
  }
  v8 = 0LL;
  v3 = 0LL;
  v4 = (unsigned __int8 *)v26;
LABEL_28:
  if ( v4 == v2 )
    goto LABEL_55;
  v1 = core::unicode::unicode_data::white_space::WHITESPACE_MAP;
  while ( 1 )
  {
    v16 = v2;
    v17 = *(v2 - 1);
    if ( (v17 & 0x80u) != 0 )
    {
      v18 = *(v2 - 2);
      if ( v18 >= -64 )
      {
        v2 -= 2;
        v21 = v18 & 0x1F;
      }
      else
      {
        v19 = *(v2 - 3);
        if ( v19 >= -64 )
        {
          v2 -= 3;
          v20 = v19 & 0xF;
        }
        else
        {
          v2 -= 4;
          v20 = ((*(v16 - 4) & 7) << 6) | v19 & 0x3F;
        }
        v21 = (v20 << 6) | v18 & 0x3F;
      }
      v17 = (v21 << 6) | v17 & 0x3F;
      if ( v17 - 9 < 5 )
        goto LABEL_33;
    }
    else
    {
      --v2;
      if ( v17 - 9 < 5 )
        goto LABEL_33;
    }
    if ( v17 == 32 )
      goto LABEL_33;
    if ( v17 < 0x80 )
      break;
    v22 = v17 >> 8;
    if ( v17 >> 8 <= 0x1F )
    {
      if ( v22 )
      {
        if ( v22 != 22 )
          break;
        v15 = v17 == 5760;
        goto LABEL_32;
      }
      v14 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v17];
      goto LABEL_31;
    }
    if ( v22 == 32 )
    {
      v14 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v17] >> 1;
LABEL_31:
      v15 = v14 & 1;
      goto LABEL_32;
    }
    if ( v22 != 48 )
      break;
    v15 = v17 == 12288;
LABEL_32:
    if ( !v15 )
      break;
LABEL_33:
    if ( v4 == v2 )
      goto LABEL_55;
  }
  v3 = &v16[v3 - v4];
LABEL_55:
  v23 = core::num::<impl core::str::traits::FromStr for i32>::from_str(&v8[v26], v3 - v8, v4, v2, v1);
  if ( (v23 & 1) != 0 )
  {
    v29 = &off_572B0;
    v30 = 1LL;
    v31 = (_QWORD *)&byte_8;
    v32 = 0LL;
    result = std::io::stdio::_print(&v29);
  }
  else
  {
    if ( !HIDWORD(v23) )
      core::panicking::panic_const::panic_const_div_by_zero(&off_57278);
    v28 = 10 / SHIDWORD(v23);
    v33[0] = &v28;
    v33[1] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v29 = &off_57290;
    v30 = 2LL;
    v31 = v33;
    v32 = 1uLL;
    result = std::io::stdio::_print(&v29);
  }
  if ( v25 )
    return _rust_dealloc(v26, v25, 1LL);
  return result;
}
