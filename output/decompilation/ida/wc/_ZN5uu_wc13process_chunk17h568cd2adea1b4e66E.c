__int64 __fastcall uu_wc::process_chunk(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 v4; // r12
  unsigned int v5; // edx
  unsigned int v6; // r14d
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // rbp
  int code_point; // eax
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 result; // rax
  _QWORD v16[8]; // [rsp+18h] [rbp-40h] BYREF

  v16[0] = a2;
  v16[1] = a3 + a2;
  v4 = *a4;
  if ( (unsigned int)core::str::validations::next_code_point(v16) )
  {
    v6 = v5;
    v7 = a1[4];
    v8 = a1[2];
    v9 = a1[1] + 1LL;
    while ( 1 )
    {
      if ( v6 - 12 < 2 )
        goto LABEL_8;
      if ( v6 != 9 )
        break;
      v4 = (v4 & 0xFFFFFFFFFFFFFFF8LL) + 8;
      *a4 = v4;
LABEL_4:
      a1[1] = v9;
      code_point = core::str::validations::next_code_point(v16);
      v6 = v11;
      ++v9;
      if ( !code_point )
        goto LABEL_18;
    }
    if ( v6 == 10 )
    {
LABEL_8:
      v7 = core::cmp::max_by(v4, v7);
      a1[4] = v7;
      v4 = 0LL;
    }
    else
    {
      if ( v6 >= 0x7F )
      {
        if ( v6 <= 0x9F )
          v12 = 0LL;
        else
          v12 = unicode_width::tables::charwidth::lookup_width(v6);
      }
      else
      {
        v12 = v6 >= 0x20;
      }
      v4 += v12;
    }
    *a4 = v4;
    if ( v6 == 10 )
      a1[2] = ++v8;
    goto LABEL_4;
  }
  v7 = a1[4];
LABEL_18:
  *a1 += a3;
  result = core::cmp::max_by(v4, v7);
  a1[4] = result;
  return result;
}
