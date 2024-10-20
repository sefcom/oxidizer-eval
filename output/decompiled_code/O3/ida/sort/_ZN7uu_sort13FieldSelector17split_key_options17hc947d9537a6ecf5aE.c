__int64 __fastcall uu_sort::FieldSelector::split_key_options(_QWORD *a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  __int64 result; // rax
  unsigned __int8 *v6; // rbp
  unsigned __int8 *v7; // r12
  unsigned __int8 *v8; // rbx
  unsigned int v9; // edi
  unsigned __int8 *v10; // r13
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  __int64 v14; // r14

  result = 1LL;
  if ( a3 )
  {
    v6 = &a3[(_QWORD)a2];
    v7 = 0LL;
    v8 = a2;
    while ( 1 )
    {
      v9 = *v8;
      if ( (v9 & 0x80u) != 0 )
      {
        v11 = v9 & 0x1F;
        v12 = v8[1] & 0x3F;
        if ( (unsigned __int8)v9 <= 0xDFu )
        {
          v10 = v8 + 2;
          v9 = v12 | (v11 << 6);
        }
        else
        {
          v13 = (v12 << 6) | v8[2] & 0x3F;
          if ( (unsigned __int8)v9 < 0xF0u )
          {
            v10 = v8 + 3;
            v9 = (v11 << 12) | v13;
          }
          else
          {
            v10 = v8 + 4;
            v9 = ((v9 & 7) << 18) | (v13 << 6) | v8[3] & 0x3F;
          }
        }
      }
      else
      {
        v10 = v8 + 1;
      }
      if ( (v9 & 0xFFFFFFDF) - 65 < 0x1A
        || v9 >= 0x80 && (unsigned __int8)core::unicode::unicode_data::alphabetic::lookup() )
      {
        break;
      }
      v7 = &v10[v7 - v8];
      v8 = v10;
      if ( v10 == v6 )
      {
        v7 = a3;
        v14 = 0LL;
        result = 1LL;
        goto LABEL_22;
      }
    }
    if ( v7 )
    {
      if ( a3 <= v7 )
      {
        if ( a3 != v7 )
LABEL_17:
          core::str::slice_error_fail(a2, a3, 0LL, v7, &off_192AC8);
      }
      else if ( (char)v7[(_QWORD)a2] <= -65 )
      {
        goto LABEL_17;
      }
    }
    v14 = a3 - v7;
    result = (__int64)&v7[(_QWORD)a2];
    goto LABEL_22;
  }
  v7 = 0LL;
  v14 = 0LL;
LABEL_22:
  *a1 = a2;
  a1[1] = v7;
  a1[2] = result;
  a1[3] = v14;
  return result;
}
