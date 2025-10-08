__int64 __fastcall uu_wc::process_chunk(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, char *a5)
{
  char v6; // r14
  unsigned int v7; // edx
  unsigned int v8; // ebp
  __int64 v9; // r12
  char code_point; // al
  unsigned int v11; // edx
  __int64 result; // rax
  __int64 v13; // [rsp+0h] [rbp-58h]
  _QWORD v16[8]; // [rsp+18h] [rbp-40h] BYREF

  v16[0] = a2;
  v16[1] = a3 + a2;
  v6 = *a5;
  if ( (core::str::validations::next_code_point(v16) & 1) != 0 )
  {
    v8 = v7;
    v9 = a1[2];
    v13 = a1[3];
    do
    {
      if ( v8 - 9 < 5 || v8 == 32 || v8 >= 0x80 && (unsigned __int8)core::unicode::unicode_data::white_space::lookup(v8) )
      {
        *a5 = 0;
        v6 = 0;
      }
      else if ( (v6 & 1) == 0 )
      {
        *a5 = 1;
        a1[3] = ++v13;
        v6 = 1;
      }
      if ( v8 == 10 )
        a1[2] = ++v9;
      code_point = core::str::validations::next_code_point(v16);
      v8 = v11;
    }
    while ( (code_point & 1) != 0 );
  }
  *a1 += a3;
  result = core::cmp::Ord::max(a4, a1[4]);
  a1[4] = result;
  return result;
}