__int64 __fastcall uu_wc::process_chunk(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 v5; // r12
  unsigned int v6; // edx
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 result; // rax
  _QWORD v12[8]; // [rsp+8h] [rbp-40h] BYREF

  v12[0] = a2;
  v12[1] = a3 + a2;
  v5 = *a4;
  if ( (unsigned int)core::str::validations::next_code_point(v12) )
  {
    v7 = a1[4];
    v8 = a1[1] + 1LL;
    while ( 1 )
    {
      if ( v6 - 12 >= 2 )
      {
        if ( v6 == 9 )
        {
          v5 = (v5 & 0xFFFFFFFFFFFFFFF8LL) + 8;
          goto LABEL_4;
        }
        if ( v6 != 10 )
        {
          if ( v6 >= 0x7F )
          {
            if ( v6 <= 0x9F )
              v9 = 0LL;
            else
              v9 = unicode_width::tables::charwidth::lookup_width(v6);
          }
          else
          {
            v9 = v6 >= 0x20;
          }
          v5 += v9;
          goto LABEL_4;
        }
      }
      v7 = core::cmp::max_by(v5, v7);
      a1[4] = v7;
      v5 = 0LL;
LABEL_4:
      *a4 = v5;
      a1[1] = v8++;
      if ( !(unsigned int)core::str::validations::next_code_point(v12) )
        goto LABEL_16;
    }
  }
  v7 = a1[4];
LABEL_16:
  *a1 += a3;
  result = core::cmp::max_by(v5, v7);
  a1[4] = result;
  return result;
}
