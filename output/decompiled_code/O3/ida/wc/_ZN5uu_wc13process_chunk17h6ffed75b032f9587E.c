__int64 __fastcall uu_wc::process_chunk(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 *a4, char *a5)
{
  char v7; // bl
  unsigned __int64 v8; // r13
  unsigned int v9; // edx
  unsigned int v10; // r14d
  __int64 v11; // rbp
  int code_point; // eax
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // [rsp+8h] [rbp-50h]
  _QWORD v18[8]; // [rsp+18h] [rbp-40h] BYREF

  v18[0] = a2;
  v18[1] = a3 + a2;
  v7 = *a5;
  v8 = *a4;
  if ( (unsigned int)core::str::validations::next_code_point(v18) )
  {
    v10 = v9;
    v16 = a1[3];
    v11 = a1[4];
    while ( 1 )
    {
      if ( v10 - 9 < 5
        || v10 == 32
        || v10 >= 0x80 && (unsigned __int8)core::unicode::unicode_data::white_space::lookup(v10) )
      {
        *a5 = 0;
        v7 = 0;
      }
      else if ( !v7 )
      {
        *a5 = 1;
        a1[3] = ++v16;
        v7 = 1;
      }
      if ( v10 - 12 >= 2 )
      {
        if ( v10 == 9 )
        {
          v8 = (v8 & 0xFFFFFFFFFFFFFFF8LL) + 8;
          goto LABEL_4;
        }
        if ( v10 != 10 )
        {
          if ( v10 >= 0x7F )
          {
            if ( v10 <= 0x9F )
              v14 = 0LL;
            else
              v14 = unicode_width::tables::charwidth::lookup_width(v10);
          }
          else
          {
            v14 = v10 >= 0x20;
          }
          v8 += v14;
          goto LABEL_4;
        }
      }
      v11 = core::cmp::max_by(v8, v11);
      a1[4] = v11;
      v8 = 0LL;
LABEL_4:
      *a4 = v8;
      code_point = core::str::validations::next_code_point(v18);
      v10 = v13;
      if ( !code_point )
        goto LABEL_23;
    }
  }
  v11 = a1[4];
LABEL_23:
  *a1 += a3;
  result = core::cmp::max_by(v8, v11);
  a1[4] = result;
  return result;
}
