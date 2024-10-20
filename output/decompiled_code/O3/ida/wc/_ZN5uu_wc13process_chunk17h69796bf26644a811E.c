        char *a5)
{
  unsigned __int64 *result; // rax
  unsigned __int64 v7; // r10
  unsigned __int8 *v8; // rbx
  char v9; // bp
  unsigned __int64 v10; // r11
  __int64 v11; // r12
  __int64 v12; // r15
  unsigned int v13; // r9d
  int v14; // ecx
  int v15; // r14d
  int v16; // edi
  unsigned __int8 v17; // r9
  unsigned int v18; // ecx
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rdi
  int v22; // edi
  char v23; // di
  char v24; // cl
  __int64 v25; // [rsp+0h] [rbp-38h]

  v7 = *a4;
  if ( a3 )
  {
    result = a4;
    v8 = &a2[a3];
    v9 = *a5;
    v25 = a1[3];
    v10 = a1[4];
    v11 = a1[2];
    v12 = a1[1] + 1LL;
    while ( 1 )
    {
      v13 = *a2;
      if ( (v13 & 0x80u) != 0 )
      {
        v14 = v13 & 0x1F;
        v15 = a2[1] & 0x3F;
        if ( (unsigned __int8)v13 <= 0xDFu )
        {
          a2 += 2;
          v13 = v15 | (v14 << 6);
        }
        else
        {
          v16 = (v15 << 6) | a2[2] & 0x3F;
          if ( (unsigned __int8)v13 < 0xF0u )
          {
            a2 += 3;
            v13 = (v14 << 12) | v16;
          }
          else
          {
            v17 = a2[3];
            a2 += 4;
            v13 = ((v14 & 7) << 18) | (v16 << 6) | v17 & 0x3F;
          }
        }
      }
      else
      {
        ++a2;
      }
      if ( v13 - 9 < 5 || v13 == 32 )
      {
LABEL_13:
        *a5 = 0;
        v9 = 0;
        goto LABEL_14;
      }
      if ( v13 >= 0x80 )
      {
        v18 = v13 >> 8;
        if ( v13 >> 8 > 0x1F )
        {
          if ( v18 != 32 )
          {
            if ( v18 != 48 )
              goto LABEL_46;
            v19 = v13 == 12288;
            goto LABEL_41;
          }
          v24 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v13] >> 1;
        }
        else
        {
          if ( v18 )
          {
            if ( v18 != 22 )
              goto LABEL_46;
            v19 = v13 == 5760;
LABEL_41:
            if ( v19 )
              goto LABEL_13;
            goto LABEL_46;
          }
          v24 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v13];
        }
        if ( (v24 & 1) != 0 )
          goto LABEL_13;
      }
LABEL_46:
      if ( !v9 )
      {
        *a5 = 1;
        a1[3] = ++v25;
        v9 = 1;
      }
LABEL_14:
      if ( v13 - 12 < 2 )
        goto LABEL_17;
      if ( v13 != 9 )
      {
        if ( v13 == 10 )
        {
LABEL_17:
          if ( v7 <= v10 )
            v7 = v10;
          a1[4] = v7;
          v10 = v7;
          v7 = 0LL;
        }
        else
        {
          if ( v13 >= 0x7F )
          {
            if ( v13 <= 0x9F )
            {
              v20 = 0LL;
            }
            else
            {
              v21 = (unicode_width::tables::charwidth::TABLES_0[v13 >> 13] << 7) | (v13 >> 6) & 0x7F;
              if ( (unsigned int)v21 > 0x97F )
                core::panicking::panic_bounds_check(v21, 2432LL, &off_F3010);
              v22 = 16 * unicode_width::tables::charwidth::TABLES_1[v21];
              v20 = v22 | (v13 >> 2) & 0xF;
              if ( (unsigned int)v20 >= 0xEE0 )
                core::panicking::panic_bounds_check(v22 | (v13 >> 2) & 0xF, 3808LL, &off_F3028);
              v23 = (unicode_width::tables::charwidth::TABLES_2[v20] >> ((2 * v13) & 6)) & 3;
              LOBYTE(v20) = 1;
              if ( v23 != 3 )
                LOBYTE(v20) = v23;
              v20 = (unsigned __int8)v20;
            }
          }
          else
          {
            v20 = v13 >= 0x20;
          }
          v7 += v20;
        }
        *result = v7;
        if ( v13 == 10 )
          a1[2] = ++v11;
        goto LABEL_4;
      }
      v7 = (v7 & 0xFFFFFFFFFFFFFFF8LL) + 8;
      *result = v7;
LABEL_4:
      a1[1] = v12++;
      if ( a2 == v8 )
        goto LABEL_49;
    }
  }
  v10 = a1[4];
LABEL_49:
  *a1 += a3;
  if ( v7 > v10 )
    v10 = v7;
  a1[4] = v10;
  return result;
}
