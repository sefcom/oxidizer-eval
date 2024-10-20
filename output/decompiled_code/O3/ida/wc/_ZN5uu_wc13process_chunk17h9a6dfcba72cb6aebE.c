        char *a5)
{
  unsigned __int64 *result; // rax
  unsigned __int64 v6; // r11
  unsigned __int8 *v7; // r14
  char v8; // r12
  __int64 v9; // r15
  unsigned __int64 v10; // rbx
  unsigned int v11; // ecx
  int v12; // r9d
  int v13; // r13d
  int v14; // r10d
  unsigned __int8 v15; // cl
  unsigned int v16; // r9d
  bool v17; // zf
  __int64 v18; // r9
  int v19; // r9d
  __int64 v20; // r10
  int v21; // r10d
  __int64 v22; // r9
  unsigned __int8 v23; // r9
  unsigned __int8 v24; // cl
  char v25; // r9

  v6 = *a4;
  if ( a3 )
  {
    result = a4;
    v7 = &a2[a3];
    v8 = *a5;
    v9 = a1[3];
    v10 = a1[4];
    while ( 1 )
    {
      v11 = *a2;
      if ( (v11 & 0x80u) != 0 )
      {
        v12 = v11 & 0x1F;
        v13 = a2[1] & 0x3F;
        if ( (unsigned __int8)v11 <= 0xDFu )
        {
          a2 += 2;
          v11 = v13 | (v12 << 6);
        }
        else
        {
          v14 = (v13 << 6) | a2[2] & 0x3F;
          if ( (unsigned __int8)v11 < 0xF0u )
          {
            a2 += 3;
            v11 = (v12 << 12) | v14;
          }
          else
          {
            v15 = a2[3];
            a2 += 4;
            v11 = ((v12 & 7) << 18) | (v14 << 6) | v15 & 0x3F;
          }
        }
      }
      else
      {
        ++a2;
      }
      if ( v11 - 9 < 5 || v11 == 32 )
      {
LABEL_13:
        *a5 = 0;
        v8 = 0;
        goto LABEL_14;
      }
      if ( v11 >= 0x80 )
      {
        v16 = v11 >> 8;
        if ( v11 >> 8 > 0x1F )
        {
          if ( v16 != 32 )
          {
            if ( v16 != 48 )
              goto LABEL_44;
            v17 = v11 == 12288;
            goto LABEL_39;
          }
          v25 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v11] >> 1;
        }
        else
        {
          if ( v16 )
          {
            if ( v16 != 22 )
              goto LABEL_44;
            v17 = v11 == 5760;
LABEL_39:
            if ( v17 )
              goto LABEL_13;
            goto LABEL_44;
          }
          v25 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v11];
        }
        if ( (v25 & 1) != 0 )
          goto LABEL_13;
      }
LABEL_44:
      if ( !v8 )
      {
        *a5 = 1;
        a1[3] = ++v9;
        v8 = 1;
      }
LABEL_14:
      if ( v11 - 12 < 2 )
        goto LABEL_17;
      if ( v11 != 9 )
      {
        if ( v11 != 10 )
        {
          if ( v11 >= 0x7F )
          {
            if ( v11 <= 0x9F )
            {
              v18 = 0LL;
            }
            else
            {
              v19 = unicode_width::tables::charwidth::TABLES_0[v11 >> 13] << 7;
              v20 = v19 | (v11 >> 6) & 0x7F;
              if ( (unsigned int)v20 > 0x97F )
                core::panicking::panic_bounds_check(v19 | (v11 >> 6) & 0x7F, 2432LL, &off_F3010);
              v21 = 16 * unicode_width::tables::charwidth::TABLES_1[v20];
              v22 = v21 | (v11 >> 2) & 0xF;
              if ( (unsigned int)v22 >= 0xEE0 )
                core::panicking::panic_bounds_check(v21 | (v11 >> 2) & 0xF, 3808LL, &off_F3028);
              v23 = (unicode_width::tables::charwidth::TABLES_2[v22] >> ((2 * v11) & 6)) & 3;
              v24 = 1;
              if ( v23 != 3 )
                v24 = v23;
              v18 = v24;
            }
          }
          else
          {
            v18 = v11 >= 0x20;
          }
          v6 += v18;
          goto LABEL_4;
        }
LABEL_17:
        if ( v6 <= v10 )
          v6 = v10;
        v10 = v6;
        a1[4] = v6;
        v6 = 0LL;
        goto LABEL_4;
      }
      v6 = (v6 & 0xFFFFFFFFFFFFFFF8LL) + 8;
LABEL_4:
      *result = v6;
      if ( a2 == v7 )
        goto LABEL_47;
    }
  }
  v10 = a1[4];
LABEL_47:
  *a1 += a3;
  if ( v6 > v10 )
    v10 = v6;
  a1[4] = v10;
  return result;
}
