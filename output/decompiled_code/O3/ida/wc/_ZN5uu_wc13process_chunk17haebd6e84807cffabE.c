__int64 __fastcall uu_wc::process_chunk(_QWORD *a1, __int64 a2, __int64 a3, char *a4)
{
  __int64 v5; // r14
  char v6; // bp
  unsigned int v7; // edx
  unsigned int v8; // r13d
  __int64 v9; // r14
  __int64 v10; // r12
  int code_point; // eax
  unsigned int v12; // edx
  __int64 result; // rax
  __int64 v14; // [rsp+8h] [rbp-50h]
  __int64 v15; // [rsp+10h] [rbp-48h]
  _QWORD v16[8]; // [rsp+18h] [rbp-40h] BYREF

  v5 = a3;
  v16[0] = a2;
  v16[1] = a3 + a2;
  v6 = *a4;
  if ( (unsigned int)core::str::validations::next_code_point(v16) )
  {
    v8 = v7;
    v15 = v5;
    v14 = a1[3];
    v9 = a1[1];
    v10 = a1[2];
    do
    {
      if ( v8 - 9 < 5 || v8 == 32 || v8 >= 0x80 && (unsigned __int8)core::unicode::unicode_data::white_space::lookup(v8) )
      {
        *a4 = 0;
        v6 = 0;
      }
      else if ( !v6 )
      {
        *a4 = 1;
        a1[3] = ++v14;
        v6 = 1;
      }
      if ( v8 == 10 )
        a1[2] = ++v10;
      ++v9;
      code_point = core::str::validations::next_code_point(v16);
      v8 = v12;
    }
    while ( code_point );
    a1[1] = v9;
    v5 = v15;
  }
  *a1 += v5;
  result = core::cmp::max_by(0LL, a1[4]);
  a1[4] = result;
  return result;
}
