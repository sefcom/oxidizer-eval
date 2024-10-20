void __fastcall uu_wc::process_chunk(_QWORD *a1, unsigned __int8 *a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r11
  unsigned __int8 *v7; // rbx
  unsigned int v8; // ecx
  int v9; // r8d
  int v10; // ebp
  int v11; // r9d
  unsigned __int8 v12; // cl
  __int64 v13; // r8
  int v14; // r8d
  __int64 v15; // r9
  int v16; // r9d
  __int64 v17; // r8
  unsigned __int8 v18; // r8
  unsigned __int8 v19; // cl

  v4 = a1[4];
  v5 = *a4;
  if ( a3 )
  {
    v7 = &a2[a3];
    while ( 1 )
    {
      v8 = *a2;
      if ( (v8 & 0x80u) != 0 )
      {
        v9 = v8 & 0x1F;
        v10 = a2[1] & 0x3F;
        if ( (unsigned __int8)v8 <= 0xDFu )
        {
          a2 += 2;
          v8 = v10 | (v9 << 6);
        }
        else
        {
          v11 = (v10 << 6) | a2[2] & 0x3F;
          if ( (unsigned __int8)v8 < 0xF0u )
          {
            a2 += 3;
            v8 = (v9 << 12) | v11;
          }
          else
          {
            v12 = a2[3];
            a2 += 4;
            v8 = ((v9 & 7) << 18) | (v11 << 6) | v12 & 0x3F;
          }
        }
      }
      else
      {
        ++a2;
      }
      if ( v8 - 12 < 2 )
        goto LABEL_15;
      if ( v8 != 9 )
        break;
      v5 = (v5 & 0xFFFFFFFFFFFFFFF8LL) + 8;
LABEL_4:
      *a4 = v5;
      if ( a2 == v7 )
        goto LABEL_28;
    }
    if ( v8 != 10 )
    {
      if ( v8 >= 0x7F )
      {
        if ( v8 <= 0x9F )
        {
          v13 = 0LL;
        }
        else
        {
          v14 = unicode_width::tables::charwidth::TABLES_0[v8 >> 13] << 7;
          v15 = v14 | (v8 >> 6) & 0x7F;
          if ( (unsigned int)v15 > 0x97F )
            core::panicking::panic_bounds_check(v14 | (v8 >> 6) & 0x7F, 2432LL, &off_F3010);
          v16 = 16 * unicode_width::tables::charwidth::TABLES_1[v15];
          v17 = v16 | (v8 >> 2) & 0xF;
          if ( (unsigned int)v17 >= 0xEE0 )
            core::panicking::panic_bounds_check(v16 | (v8 >> 2) & 0xF, 3808LL, &off_F3028);
          v18 = (unicode_width::tables::charwidth::TABLES_2[v17] >> ((2 * v8) & 6)) & 3;
          v19 = 1;
          if ( v18 != 3 )
            v19 = v18;
          v13 = v19;
        }
      }
      else
      {
        v13 = v8 >= 0x20;
      }
      v5 += v13;
      goto LABEL_4;
    }
LABEL_15:
    if ( v5 <= v4 )
      v5 = v4;
    v4 = v5;
    a1[4] = v5;
    v5 = 0LL;
    goto LABEL_4;
  }
LABEL_28:
  *a1 += a3;
  if ( v5 > v4 )
    v4 = v5;
  a1[4] = v4;
}
