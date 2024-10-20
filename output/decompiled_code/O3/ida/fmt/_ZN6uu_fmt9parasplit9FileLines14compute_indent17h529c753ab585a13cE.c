        unsigned __int8 *a5)
{
  __int64 v5; // rax
  unsigned __int8 *v6; // r10
  unsigned __int8 *v7; // r9
  unsigned __int64 v8; // r14
  unsigned __int64 result; // rax
  unsigned __int8 *v10; // r15
  __int64 v11; // rcx
  unsigned __int8 *v12; // r13
  int v13; // edx
  int v14; // ebx
  int v15; // r11d
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rtt
  unsigned int v19; // edx
  char v20; // dl
  int v21; // edx
  __int64 v22; // r11
  __int64 v23; // rbx
  unsigned __int8 v24; // cl
  __int64 v25; // [rsp-8h] [rbp-38h]

  v25 = v5;
  if ( !a4 )
  {
    result = 0LL;
    v10 = 0LL;
    v8 = 0LL;
    goto LABEL_43;
  }
  v6 = (unsigned __int8 *)a3;
  v7 = (unsigned __int8 *)(a3 + a4);
  v8 = 0LL;
  result = 0LL;
  v10 = 0LL;
  do
  {
    v11 = *v6;
    if ( (v11 & 0x80u) != 0LL )
    {
      v13 = v11 & 0x1F;
      v14 = v6[1] & 0x3F;
      if ( (unsigned __int8)v11 <= 0xDFu )
      {
        v12 = v6 + 2;
        a3 = v14 | (unsigned int)(v13 << 6);
        v11 = (unsigned int)a3;
      }
      else
      {
        v15 = (v14 << 6) | v6[2] & 0x3F;
        if ( (unsigned __int8)v11 < 0xF0u )
        {
          v12 = v6 + 3;
          a3 = (unsigned int)(v13 << 12);
          v11 = (unsigned int)a3 | v15;
        }
        else
        {
          v12 = v6 + 4;
          a3 = (unsigned __int8)(v11 & 7) << 18;
          v11 = (unsigned int)a3 | (v15 << 6) | v6[3] & 0x3F;
        }
      }
    }
    else
    {
      v12 = v6 + 1;
    }
    if ( v10 == a5 )
      v8 = result;
    if ( v10 >= a5 )
    {
      a3 = 1LL;
      if ( (_DWORD)v11 == 32 )
        goto LABEL_3;
      a3 = (unsigned int)(v11 - 9);
      if ( (unsigned int)a3 >= 5 )
      {
        if ( (unsigned int)v11 < 0x80 )
          goto LABEL_43;
        v19 = (unsigned int)v11 >> 8;
        if ( (unsigned int)v11 >> 8 > 0x1F )
        {
          if ( v19 != 32 )
          {
            if ( v19 != 48 )
              goto LABEL_43;
            v20 = (_DWORD)v11 == 12288;
            goto LABEL_34;
          }
          LOBYTE(v21) = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v11] >> 1;
        }
        else
        {
          if ( v19 )
          {
            if ( v19 != 22 )
              goto LABEL_43;
            v20 = (_DWORD)v11 == 5760;
            goto LABEL_34;
          }
          v21 = (unsigned __int8)core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v11];
        }
        v20 = v21 & 1;
LABEL_34:
        if ( !v20 )
          goto LABEL_43;
LABEL_35:
        a3 = 1LL;
        if ( (unsigned int)v11 >= 0xA0 )
        {
          v22 = (unicode_width::tables::charwidth::TABLES_0[(unsigned int)v11 >> 13] << 7) | ((unsigned int)v11 >> 6) & 0x7F;
          if ( (unsigned int)v22 > 0x97F )
            core::panicking::panic_bounds_check(v22, 2432LL, &off_EC328, v11);
          v23 = (16 * unicode_width::tables::charwidth::TABLES_1[v22]) | ((unsigned int)v11 >> 2) & 0xF;
          if ( (unsigned int)v23 >= 0xEE0 )
            core::panicking::panic_bounds_check(v23, 3808LL, &off_EC340, v11);
          v24 = (unicode_width::tables::charwidth::TABLES_2[v23] >> ((2 * v11) & 6)) & 3;
          if ( v24 == 3 )
            v24 = 1;
          a3 = v24;
        }
LABEL_3:
        result += a3;
        goto LABEL_4;
      }
    }
    if ( (_DWORD)v11 != 9 )
      goto LABEL_35;
    v16 = *(_QWORD *)(a2 + 64);
    if ( !v16 )
      core::panicking::panic_const::panic_const_div_by_zero(&off_EC398, a2, a3, 0LL, a5, v7, v25);
    if ( (v16 | result) >> 32 )
    {
      v18 = result;
      v17 = result / v16;
      a3 = v18 % v16;
    }
    else
    {
      a3 = (unsigned int)result % (unsigned int)v16;
      v17 = (unsigned int)result / (unsigned int)v16;
    }
    result = v16 * (v17 + 1);
LABEL_4:
    v10 = &v12[v10 - v6];
    v6 = v12;
  }
  while ( v12 != v7 );
  v10 = 0LL;
LABEL_43:
  *a1 = v10;
  a1[1] = (unsigned __int8 *)v8;
  a1[2] = (unsigned __int8 *)result;
  return result;
}
