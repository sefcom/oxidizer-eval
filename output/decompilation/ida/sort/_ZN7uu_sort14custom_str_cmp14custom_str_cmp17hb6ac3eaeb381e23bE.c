char __fastcall uu_sort::custom_str_cmp::custom_str_cmp(
        char *a1,
        size_t a2,
        char *a3,
        size_t a4,
        char a5,
        char a6,
        unsigned __int8 a7)
{
  unsigned int v7; // r13d
  unsigned int v8; // eax
  char result; // al
  __int64 v10; // rbx
  int v11; // eax
  char v12; // [rsp+6h] [rbp-72h] BYREF
  char v13; // [rsp+7h] [rbp-71h] BYREF
  _QWORD v14[2]; // [rsp+8h] [rbp-70h] BYREF
  _QWORD v15[2]; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v16[2]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v17[8]; // [rsp+38h] [rbp-40h] BYREF

  v12 = a5;
  v13 = a6;
  if ( (a7 | (unsigned __int8)(a6 | a5)) == 1 )
  {
    v14[0] = a1;
    v14[1] = &a1[a2];
    v15[0] = &v12;
    v15[1] = &v13;
    v16[0] = a3;
    v16[1] = &a3[a4];
    v17[0] = &v12;
    v17[1] = &v13;
    while ( 1 )
    {
      v7 = core::iter::traits::iterator::Iterator::try_fold(v14, v15);
      v8 = core::iter::traits::iterator::Iterator::try_fold(v16, v17);
      if ( v7 == 1114112 )
        return -(v8 != 1114112);
      if ( v8 == 1114112 )
        break;
      result = uu_sort::custom_str_cmp::cmp_chars(v7, v8, a7);
      if ( result )
        return result;
    }
    return 1;
  }
  else
  {
    v10 = a2 - a4;
    if ( a2 < a4 )
      a4 = a2;
    v11 = memcmp(a1, a3, a4);
    if ( v11 )
      v10 = v11;
    return (v10 > 0) - (v10 < 0);
  }
}