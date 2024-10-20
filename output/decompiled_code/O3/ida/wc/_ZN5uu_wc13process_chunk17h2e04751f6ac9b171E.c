unsigned __int64 *__fastcall uu_wc::process_chunk(_QWORD *a1, unsigned __int8 *a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 *result; // rax
  unsigned __int64 v5; // r9
  unsigned __int8 *v6; // r11
  __int64 v7; // rbx
  unsigned __int64 v8; // r10
  unsigned int v9; // r13d
  int v10; // ecx
  int v11; // ebp
  int v12; // r8d
  unsigned __int8 v13; // r13
  __int64 v14; // rcx
  int v15; // ecx
  __int64 v16; // r8
  int v17; // r8d
  char v18; // r8

  v5 = *a4;
  if ( a3 )
  {
    result = a4;
    v6 = &a2[a3];
    v7 = a1[2];
    v8 = a1[4];
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
      *result = v5;
LABEL_4:
      if ( a2 == v6 )
        goto LABEL_31;
    }
    if ( v9 == 10 )
    {
LABEL_15:
      if ( v5 <= v8 )
        v5 = v8;
      a1[4] = v5;
      v8 = v5;
      v5 = 0LL;
    }
    else
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
          v14 = v17 | (v9 >> 2) & 0xF;
          if ( (unsigned int)v14 >= 0xEE0 )
            core::panicking::panic_bounds_check(v17 | (v9 >> 2) & 0xF, 3808LL, &off_F3028);
          v18 = (unicode_width::tables::charwidth::TABLES_2[v14] >> ((2 * v9) & 6)) & 3;
          LOBYTE(v14) = 1;
          if ( v18 != 3 )
            LOBYTE(v14) = v18;
          v14 = (unsigned __int8)v14;
        }
      }
      else
      {
        v14 = v9 >= 0x20;
      }
      v5 += v14;
    }
    *result = v5;
    if ( v9 == 10 )
      a1[2] = ++v7;
    goto LABEL_4;
  }
  v8 = a1[4];
LABEL_31:
  *a1 += a3;
  if ( v5 > v8 )
    v8 = v5;
  a1[4] = v8;
  return result;
}
