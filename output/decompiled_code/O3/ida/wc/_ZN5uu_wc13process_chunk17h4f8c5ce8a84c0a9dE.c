__int64 __fastcall uu_wc::process_chunk(_QWORD *a1, __int64 a2, __int64 a3, char *a4)
{
  char v5; // bp
  unsigned int v6; // edx
  unsigned int v7; // r13d
  __int64 v8; // r14
  int code_point; // eax
  unsigned int v10; // edx
  __int64 result; // rax
  __int64 v12; // [rsp+8h] [rbp-50h]
  _QWORD v14[8]; // [rsp+18h] [rbp-40h] BYREF

  v14[0] = a2;
  v14[1] = a3 + a2;
  v5 = *a4;
  if ( (unsigned int)core::str::validations::next_code_point(v14) )
  {
    v7 = v6;
    v8 = a1[2];
    v12 = a1[3];
    do
    {
      if ( v7 - 9 < 5 || v7 == 32 || v7 >= 0x80 && (unsigned __int8)core::unicode::unicode_data::white_space::lookup(v7) )
      {
        *a4 = 0;
        v5 = 0;
      }
      else if ( !v5 )
      {
        *a4 = 1;
        a1[3] = ++v12;
        v5 = 1;
      }
      if ( v7 == 10 )
        a1[2] = ++v8;
      code_point = core::str::validations::next_code_point(v14);
      v7 = v10;
    }
    while ( code_point );
  }
  *a1 += a3;
  result = core::cmp::max_by(0LL, a1[4]);
  a1[4] = result;
  return result;
}
