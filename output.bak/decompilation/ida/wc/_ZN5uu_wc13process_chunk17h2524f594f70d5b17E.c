__int64 __fastcall uu_wc::process_chunk(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 v5; // r12
  unsigned int v6; // edx
  unsigned int v7; // r14d
  __int64 v8; // rbp
  __int64 v9; // r13
  int code_point; // eax
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 result; // rax
  _QWORD v15[8]; // [rsp+8h] [rbp-40h] BYREF

  v15[0] = a2;
  v15[1] = a3 + a2;
  v5 = *a4;
  if ( (unsigned int)core::str::validations::next_code_point(v15) )
  {
    v7 = v6;
    v8 = a1[2];
    v9 = a1[4];
    while ( 1 )
    {
      if ( v7 - 12 < 2 )
        goto LABEL_8;
      if ( v7 != 9 )
        break;
      v5 = (v5 & 0xFFFFFFFFFFFFFFF8LL) + 8;
      *a4 = v5;
LABEL_4:
      code_point = core::str::validations::next_code_point(v15);
      v7 = v11;
      if ( !code_point )
        goto LABEL_18;
    }
    if ( v7 == 10 )
    {
LABEL_8:
      v9 = core::cmp::max_by(v5, v9);
      a1[4] = v9;
      v5 = 0LL;
    }
    else
    {
      if ( v7 >= 0x7F )
      {
        if ( v7 <= 0x9F )
          v12 = 0LL;
        else
          v12 = unicode_width::tables::charwidth::lookup_width(v7);
      }
      else
      {
        v12 = v7 >= 0x20;
      }
      v5 += v12;
    }
    *a4 = v5;
    if ( v7 == 10 )
      a1[2] = ++v8;
    goto LABEL_4;
  }
  v9 = a1[4];
LABEL_18:
  *a1 += a3;
  result = core::cmp::max_by(v5, v9);
  a1[4] = result;
  return result;
}
