unsigned __int64 *__fastcall uu_wc::process_chunk(_QWORD *a1, unsigned __int8 *a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 *result; // rax
  unsigned __int64 v5; // r10
  unsigned __int8 *v6; // rbx
  unsigned __int64 v7; // r11
  __int64 v8; // r14
  unsigned int v9; // ecx
  int v10; // r8d
  int v11; // ebp
  int v12; // r9d
  unsigned __int8 v13; // cl
  __int64 v14; // r8
  int v15; // r8d
  __int64 v16; // r9
  int v17; // r9d
  __int64 v18; // r8
  unsigned __int8 v19; // r8
  unsigned __int8 v20; // cl

  v5 = *a4;
  if ( a3 )
  {
    result = a4;
    v6 = &a2[a3];
    v7 = a1[4];
    v8 = a1[1] + 1LL;
    while ( 1 )
    {
      v9 = *a2;
      if ( (v9 & 0x80u) != 0 )
      {
        v10 = v9 & 0x1F;
        v11 = a2[1] & 0x3F;
        if ( (unsigned __int8)v9 <= 0xDFu )
        {
          a2 += 2;
          v9 = v11 | (v10 << 6);
        }
        else
        {
          v12 = (v11 << 6) | a2[2] & 0x3F;
          if ( (unsigned __int8)v9 < 0xF0u )
          {
            a2 += 3;
            v9 = (v10 << 12) | v12;
          }
          else
          {
            v13 = a2[3];
            a2 += 4;
            v9 = ((v10 & 7) << 18) | (v12 << 6) | v13 & 0x3F;
          }
        }
      }
      else
      {
        ++a2;
      }
      if ( v9 - 12 < 2 )
        goto LABEL_15;
      if ( v9 != 9 )
        break;
      v5 = (v5 & 0xFFFFFFFFFFFFFFF8LL) + 8;
LABEL_4:
      *result = v5;
      a1[1] = v8++;
      if ( a2 == v6 )
        goto LABEL_29;
    }
    if ( v9 != 10 )
    {
      if ( v9 >= 0x7F )
      {
        if ( v9 <= 0x9F )
        {
          v14 = 0LL;
        }
        else
        {
          v15 = unicode_width::tables::charwidth::TABLES_0[v9 >> 13] << 7;
          v16 = v15 | (v9 >> 6) & 0x7F;
          if ( (unsigned int)v16 > 0x97F )
            core::panicking::panic_bounds_check(v15 | (v9 >> 6) & 0x7F, 2432LL, &off_F3010);
          v17 = 16 * unicode_width::tables::charwidth::TABLES_1[v16];
          v18 = v17 | (v9 >> 2) & 0xF;
          if ( (unsigned int)v18 >= 0xEE0 )
            core::panicking::panic_bounds_check(v17 | (v9 >> 2) & 0xF, 3808LL, &off_F3028);
          v19 = (unicode_width::tables::charwidth::TABLES_2[v18] >> ((2 * v9) & 6)) & 3;
          v20 = 1;
          if ( v19 != 3 )
            v20 = v19;
          v14 = v20;
        }
      }
      else
      {
        v14 = v9 >= 0x20;
      }
      v5 += v14;
      goto LABEL_4;
    }
LABEL_15:
    if ( v5 <= v7 )
      v5 = v7;
    v7 = v5;
    a1[4] = v5;
    v5 = 0LL;
    goto LABEL_4;
  }
  v7 = a1[4];
LABEL_29:
  *a1 += a3;
  if ( v5 > v7 )
    v7 = v5;
  a1[4] = v7;
  return result;
}
