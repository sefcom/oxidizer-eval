unsigned __int64 *__fastcall uu_wc::process_chunk(_QWORD *a1, unsigned __int8 *a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 *result; // rax
  unsigned __int64 v5; // r9
  unsigned __int8 *v6; // r11
  unsigned __int64 v7; // r10
  __int64 v8; // r14
  __int64 v9; // rbx
  unsigned int v10; // ebp
  int v11; // ecx
  int v12; // r15d
  int v13; // r8d
  unsigned __int8 v14; // bp
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // r8
  int v18; // r8d
  char v19; // r8

  v5 = *a4;
  if ( a3 )
  {
    result = a4;
    v6 = &a2[a3];
    v7 = a1[4];
    v8 = a1[2];
    v9 = a1[1] + 1LL;
    while ( 1 )
    {
      v10 = *a2;
      if ( (v10 & 0x80u) != 0 )
      {
        v11 = v10 & 0x1F;
        v12 = a2[1] & 0x3F;
        if ( (unsigned __int8)v10 <= 0xDFu )
        {
          a2 += 2;
          v10 = v12 | (v11 << 6);
        }
        else
        {
          v13 = (v12 << 6) | a2[2] & 0x3F;
          if ( (unsigned __int8)v10 < 0xF0u )
          {
            a2 += 3;
            v10 = (v11 << 12) | v13;
          }
          else
          {
            v14 = a2[3];
            a2 += 4;
            v10 = ((v11 & 7) << 18) | (v13 << 6) | v14 & 0x3F;
          }
        }
      }
      else
      {
        ++a2;
      }
      if ( v10 - 12 < 2 )
        goto LABEL_15;
      if ( v10 != 9 )
        break;
      v5 = (v5 & 0xFFFFFFFFFFFFFFF8LL) + 8;
      *result = v5;
LABEL_4:
      a1[1] = v9++;
      if ( a2 == v6 )
        goto LABEL_31;
    }
    if ( v10 == 10 )
    {
LABEL_15:
      if ( v5 <= v7 )
        v5 = v7;
      a1[4] = v5;
      v7 = v5;
      v5 = 0LL;
    }
    else
    {
      if ( v10 >= 0x7F )
      {
        if ( v10 <= 0x9F )
        {
          v15 = 0LL;
        }
        else
        {
          v16 = unicode_width::tables::charwidth::TABLES_0[v10 >> 13] << 7;
          v17 = v16 | (v10 >> 6) & 0x7F;
          if ( (unsigned int)v17 > 0x97F )
            core::panicking::panic_bounds_check(v16 | (v10 >> 6) & 0x7F, 2432LL, &off_F3010);
          v18 = 16 * unicode_width::tables::charwidth::TABLES_1[v17];
          v15 = v18 | (v10 >> 2) & 0xF;
          if ( (unsigned int)v15 >= 0xEE0 )
            core::panicking::panic_bounds_check(v18 | (v10 >> 2) & 0xF, 3808LL, &off_F3028);
          v19 = (unicode_width::tables::charwidth::TABLES_2[v15] >> ((2 * v10) & 6)) & 3;
          LOBYTE(v15) = 1;
          if ( v19 != 3 )
            LOBYTE(v15) = v19;
          v15 = (unsigned __int8)v15;
        }
      }
      else
      {
        v15 = v10 >= 0x20;
      }
      v5 += v15;
    }
    *result = v5;
    if ( v10 == 10 )
      a1[2] = ++v8;
    goto LABEL_4;
  }
  v7 = a1[4];
LABEL_31:
  *a1 += a3;
  if ( v5 > v7 )
    v7 = v5;
  a1[4] = v7;
  return result;
}
