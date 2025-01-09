__int64 __fastcall uu_wc::process_chunk(_QWORD *a1, __int64 a2, __int64 a3, char *a4)
{
  __int64 v5; // r14
  char v6; // bp
  unsigned int v7; // edx
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 result; // rax
  __int64 v11; // [rsp+0h] [rbp-48h]
  _QWORD v12[8]; // [rsp+8h] [rbp-40h] BYREF

  v5 = a3;
  v12[0] = a2;
  v12[1] = a3 + a2;
  v6 = *a4;
  if ( (unsigned int)core::str::validations::next_code_point(v12) )
  {
    v11 = v5;
    v8 = a1[1];
    v9 = a1[3];
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
        a1[3] = ++v9;
        v6 = 1;
      }
      ++v8;
    }
    while ( (unsigned int)core::str::validations::next_code_point(v12) );
    a1[1] = v8;
    v5 = v11;
  }
  *a1 += v5;
  result = core::cmp::max_by(0LL, a1[4]);
  a1[4] = result;
  return result;
}
