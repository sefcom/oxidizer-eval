__int64 __fastcall uu_wc::process_chunk(_QWORD *a1, __int64 a2, __int64 a3, char *a4)
{
  char v6; // bp
  unsigned int v7; // edx
  __int64 v8; // r13
  __int64 result; // rax
  _QWORD v10[8]; // [rsp+8h] [rbp-40h] BYREF

  v10[0] = a2;
  v10[1] = a3 + a2;
  v6 = *a4;
  if ( (unsigned int)core::str::validations::next_code_point(v10) )
  {
    v8 = a1[3];
    do
    {
      if ( v7 - 9 < 5 || v7 == 32 || v7 >= 0x80 && (unsigned __int8)core::unicode::unicode_data::white_space::lookup(v7) )
      {
        *a4 = 0;
        v6 = 0;
      }
      else if ( !v6 )
      {
        *a4 = 1;
        a1[3] = ++v8;
        v6 = 1;
      }
    }
    while ( (unsigned int)core::str::validations::next_code_point(v10) );
  }
  *a1 += a3;
  result = core::cmp::max_by(0LL, a1[4]);
  a1[4] = result;
  return result;
}
