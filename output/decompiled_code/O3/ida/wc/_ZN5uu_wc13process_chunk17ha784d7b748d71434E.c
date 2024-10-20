        char *a5)
{
  unsigned __int64 *result; // rax
  unsigned __int64 v6; // r11
  unsigned __int8 *v7; // r14
  char v8; // bp
  __int64 v9; // r12
  unsigned __int64 v10; // rbx
  __int64 v11; // r15
  unsigned int v12; // ecx
  int v13; // r9d
  int v14; // r13d
  int v15; // r10d
  unsigned __int8 v16; // cl
  unsigned int v17; // r9d
  bool v18; // zf
  __int64 v19; // r9
  int v20; // r9d
  __int64 v21; // r10
  int v22; // r10d
  __int64 v23; // r9
  unsigned __int8 v24; // r9
  unsigned __int8 v25; // cl
  char v26; // r9

  v6 = *a4;
  if ( a3 )
  {
    result = a4;
    v7 = &a2[a3];
    v8 = *a5;
    v9 = a1[3];
    v10 = a1[4];
    v11 = a1[1] + 1LL;
    while ( 1 )
    {
      v12 = *a2;
      if ( (v12 & 0x80u) != 0 )
      {
        v13 = v12 & 0x1F;
        v14 = a2[1] & 0x3F;
        if ( (unsigned __int8)v12 <= 0xDFu )
        {
          a2 += 2;
          v12 = v14 | (v13 << 6);
        }
        else
        {
          v15 = (v14 << 6) | a2[2] & 0x3F;
          if ( (unsigned __int8)v12 < 0xF0u )
          {
            a2 += 3;
            v12 = (v13 << 12) | v15;
          }
          else
          {
            v16 = a2[3];
            a2 += 4;
            v12 = ((v13 & 7) << 18) | (v15 << 6) | v16 & 0x3F;
          }
        }
      }
      else
      {
        ++a2;
      }
      if ( v12 - 9 < 5 || v12 == 32 )
      {
LABEL_13:
        *a5 = 0;
        v8 = 0;
        goto LABEL_14;
      }
      if ( v12 >= 0x80 )
      {
        v17 = v12 >> 8;
        if ( v12 >> 8 > 0x1F )
        {
          if ( v17 != 32 )
          {
            if ( v17 != 48 )
              goto LABEL_44;
            v18 = v12 == 12288;
            goto LABEL_39;
          }
          v26 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v12] >> 1;
        }
        else
        {
          if ( v17 )
          {
            if ( v17 != 22 )
              goto LABEL_44;
            v18 = v12 == 5760;
LABEL_39:
            if ( v18 )
              goto LABEL_13;
            goto LABEL_44;
          }
          v26 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v12];
        }
        if ( (v26 & 1) != 0 )
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
      if ( v12 - 12 < 2 )
        goto LABEL_17;
      if ( v12 != 9 )
      {
        if ( v12 != 10 )
        {
          if ( v12 >= 0x7F )
          {
            if ( v12 <= 0x9F )
            {
              v19 = 0LL;
            }
            else
            {
              v20 = unicode_width::tables::charwidth::TABLES_0[v12 >> 13] << 7;
              v21 = v20 | (v12 >> 6) & 0x7F;
              if ( (unsigned int)v21 > 0x97F )
                core::panicking::panic_bounds_check(v20 | (v12 >> 6) & 0x7F, 2432LL, &off_F3010);
              v22 = 16 * unicode_width::tables::charwidth::TABLES_1[v21];
              v23 = v22 | (v12 >> 2) & 0xF;
              if ( (unsigned int)v23 >= 0xEE0 )
                core::panicking::panic_bounds_check(v22 | (v12 >> 2) & 0xF, 3808LL, &off_F3028);
              v24 = (unicode_width::tables::charwidth::TABLES_2[v23] >> ((2 * v12) & 6)) & 3;
              v25 = 1;
              if ( v24 != 3 )
                v25 = v24;
              v19 = v25;
            }
          }
          else
          {
            v19 = v12 >= 0x20;
          }
          v6 += v19;
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
      a1[1] = v11++;
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
