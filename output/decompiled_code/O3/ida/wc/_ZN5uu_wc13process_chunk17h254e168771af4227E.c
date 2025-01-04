__int64 __fastcall uu_wc::process_chunk(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 *a4, char *a5)
{
  unsigned __int64 v5; // r13
  unsigned int v6; // edx
  unsigned int v7; // r14d
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // r12
  int code_point; // eax
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 result; // rax
  char v15; // [rsp+4h] [rbp-64h]
  __int64 v16; // [rsp+8h] [rbp-60h]
  _QWORD v20[8]; // [rsp+28h] [rbp-40h] BYREF

  v20[0] = a2;
  v20[1] = a3 + a2;
  v15 = *a5;
  v5 = *a4;
  if ( (unsigned int)core::str::validations::next_code_point(v20) )
  {
    v7 = v6;
    v16 = a1[3];
    v8 = a1[4];
    v9 = a1[2];
    v10 = a1[1] + 1LL;
    while ( 1 )
    {
      if ( v7 - 9 < 5 || v7 == 32 || v7 >= 0x80 && (unsigned __int8)core::unicode::unicode_data::white_space::lookup(v7) )
      {
        *a5 = 0;
        v15 = 0;
      }
      else if ( !v15 )
      {
        *a5 = 1;
        a1[3] = ++v16;
        v15 = 1;
      }
      if ( v7 - 12 < 2 )
        goto LABEL_10;
      if ( v7 != 9 )
        break;
      v5 = (v5 & 0xFFFFFFFFFFFFFFF8LL) + 8;
      *a4 = v5;
LABEL_4:
      a1[1] = v10;
      code_point = core::str::validations::next_code_point(v20);
      v7 = v12;
      ++v10;
      if ( !code_point )
        goto LABEL_25;
    }
    if ( v7 == 10 )
    {
LABEL_10:
      v8 = core::cmp::max_by(v5, v8);
      a1[4] = v8;
      v5 = 0LL;
    }
    else
    {
      if ( v7 >= 0x7F )
      {
        if ( v7 <= 0x9F )
          v13 = 0LL;
        else
          v13 = unicode_width::tables::charwidth::lookup_width(v7);
      }
      else
      {
        v13 = v7 >= 0x20;
      }
      v5 += v13;
    }
    *a4 = v5;
    if ( v7 == 10 )
      a1[2] = ++v9;
    goto LABEL_4;
  }
  v8 = a1[4];
LABEL_25:
  *a1 += a3;
  result = core::cmp::max_by(v5, v8);
  a1[4] = result;
  return result;
}
