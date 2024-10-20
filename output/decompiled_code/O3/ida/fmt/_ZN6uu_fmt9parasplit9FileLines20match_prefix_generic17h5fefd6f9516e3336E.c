bool __fastcall uu_fmt::parasplit::FileLines::match_prefix_generic(void *s1, size_t n, char *s2, size_t a4, char a5)
{
  char *v7; // r9
  bool result; // al
  int v9; // eax
  size_t v10; // r13
  unsigned __int8 *v11; // r12
  unsigned int v12; // r14d
  unsigned __int8 *v13; // rbp
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // ecx
  char v18; // cl
  int v19; // eax
  char v20; // cl
  unsigned __int8 *v22; // [rsp+8h] [rbp-40h]

  v7 = s2;
  if ( a4 >= n )
  {
    v9 = bcmp(s1, s2, n);
    v7 = s2;
    result = v9 == 0;
  }
  else
  {
    result = 0;
  }
  if ( !result && !a5 )
  {
    if ( a4 )
    {
      v22 = (unsigned __int8 *)&v7[a4];
      v10 = 0LL;
      v11 = (unsigned __int8 *)v7;
      while ( 1 )
      {
        v12 = *v11;
        if ( (v12 & 0x80u) != 0 )
        {
          v14 = v12 & 0x1F;
          v15 = v11[1] & 0x3F;
          if ( (unsigned __int8)v12 <= 0xDFu )
          {
            v13 = v11 + 2;
            v12 = v15 | (v14 << 6);
            if ( v10 )
              goto LABEL_26;
          }
          else
          {
            v16 = (v15 << 6) | v11[2] & 0x3F;
            if ( (unsigned __int8)v12 < 0xF0u )
            {
              v13 = v11 + 3;
              v12 = (v14 << 12) | v16;
              if ( v10 )
              {
LABEL_26:
                if ( a4 <= v10 )
                {
                  if ( a4 != v10 )
LABEL_44:
                    core::str::slice_error_fail(v7, a4, v10, a4, &off_EC380);
                }
                else if ( v7[v10] <= -65 )
                {
                  goto LABEL_44;
                }
              }
            }
            else
            {
              v13 = v11 + 4;
              v12 = ((v12 & 7) << 18) | (v16 << 6) | v11[3] & 0x3F;
              if ( v10 )
                goto LABEL_26;
            }
          }
        }
        else
        {
          v13 = v11 + 1;
          if ( v10 )
            goto LABEL_26;
        }
        if ( a4 - v10 >= n )
        {
          v19 = bcmp(s1, &v7[v10], n);
          v7 = s2;
          if ( !v19 )
            return 1;
        }
        v10 = (size_t)&v13[v10 - (_QWORD)v11];
        if ( v12 - 9 < 5 || v12 == 32 )
        {
          v11 = v13;
          if ( v13 == v22 )
            return 0;
        }
        else
        {
          if ( v12 < 0x80 )
            return 0;
          v17 = v12 >> 8;
          result = 0;
          if ( v12 >> 8 > 0x1F )
          {
            if ( v17 != 32 )
            {
              if ( v17 != 48 )
                return result;
              v18 = v12 == 12288;
              goto LABEL_39;
            }
            v20 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v12] >> 1;
          }
          else
          {
            if ( v17 )
            {
              if ( v17 != 22 )
                return result;
              v18 = v12 == 5760;
              goto LABEL_39;
            }
            v20 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v12];
          }
          v18 = v20 & 1;
LABEL_39:
          result = 0;
          if ( !v18 )
            return result;
          v11 = v13;
          if ( v13 == v22 )
            return result;
        }
      }
    }
    return 0;
  }
  return result;
}
