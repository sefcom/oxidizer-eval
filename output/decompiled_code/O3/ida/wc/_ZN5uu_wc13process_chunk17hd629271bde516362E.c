__int64 __fastcall uu_wc::process_chunk(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 v6; // r12
  int code_point; // eax
  unsigned int v8; // edx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 result; // rax
  _QWORD v12[8]; // [rsp+8h] [rbp-40h] BYREF

  v12[0] = a2;
  v12[1] = a3 + a2;
  v6 = *a4;
  code_point = core::str::validations::next_code_point(v12);
  v9 = a1[4];
  if ( code_point )
  {
    do
    {
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
              v10 = 0LL;
            else
              v10 = unicode_width::tables::charwidth::lookup_width(v8);
          }
          else
          {
            v10 = v8 >= 0x20;
          }
          v6 += v10;
          goto LABEL_4;
        }
      }
      v9 = core::cmp::max_by(v6, v9);
      a1[4] = v9;
      v6 = 0LL;
LABEL_4:
      *a4 = v6;
    }
    while ( (unsigned int)core::str::validations::next_code_point(v12) );
  }
  *a1 += a3;
  result = core::cmp::max_by(v6, v9);
  a1[4] = result;
  return result;
}
