__int64 __fastcall uu_wc::process_chunk(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 *a4, char *a5)
{
  char v5; // r15
  unsigned __int64 v6; // r13
  unsigned int v7; // edx
  unsigned int v8; // r14d
  __int64 v9; // rbp
  __int64 v10; // r12
  int code_point; // eax
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // [rsp+8h] [rbp-60h]
  _QWORD v19[8]; // [rsp+28h] [rbp-40h] BYREF

  v19[0] = a2;
  v19[1] = a3 + a2;
  v5 = *a5;
  v6 = *a4;
  if ( (unsigned int)core::str::validations::next_code_point(v19) )
  {
    v8 = v7;
    v15 = a1[3];
    v9 = a1[4];
    v10 = a1[1] + 1LL;
    while ( 1 )
    {
      if ( v8 - 9 < 5 || v8 == 32 || v8 >= 0x80 && (unsigned __int8)core::unicode::unicode_data::white_space::lookup(v8) )
      {
        *a5 = 0;
        v5 = 0;
      }
      else if ( !v5 )
      {
        *a5 = 1;
        a1[3] = ++v15;
        v5 = 1;
      }
      if ( v8 - 12 >= 2 )
      {
        if ( v8 == 9 )
        {
          v6 = (v6 & 0xFFFFFFFFFFFFFFF8LL) + 8;
          goto LABEL_4;
        }
        if ( v8 != 10 )
        {
          if ( v8 >= 0x7F )
          {
            if ( v8 <= 0x9F )
              v13 = 0LL;
            else
              v13 = unicode_width::tables::charwidth::lookup_width(v8);
          }
          else
          {
            v13 = v8 >= 0x20;
          }
          v6 += v13;
          goto LABEL_4;
        }
      }
      v9 = core::cmp::max_by(v6, v9);
      a1[4] = v9;
      v6 = 0LL;
LABEL_4:
      *a4 = v6;
      a1[1] = v10;
      code_point = core::str::validations::next_code_point(v19);
      v8 = v12;
      ++v10;
      if ( !code_point )
        goto LABEL_23;
    }
  }
  v9 = a1[4];
LABEL_23:
  *a1 += a3;
  result = core::cmp::max_by(v6, v9);
  a1[4] = result;
  return result;
}
