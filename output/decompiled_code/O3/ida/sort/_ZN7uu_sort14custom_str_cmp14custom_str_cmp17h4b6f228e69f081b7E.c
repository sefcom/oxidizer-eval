        unsigned __int8 a7)
{
  __int64 v7; // rbx
  int v8; // eax
  char result; // al
  unsigned int v10; // r13d
  unsigned int v11; // eax
  char v12; // [rsp+6h] [rbp-72h] BYREF
  char v13; // [rsp+7h] [rbp-71h] BYREF
  _QWORD v14[2]; // [rsp+8h] [rbp-70h] BYREF
  _QWORD v15[2]; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v16[2]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v17[8]; // [rsp+38h] [rbp-40h] BYREF

  v12 = a5;
  v13 = a6;
  if ( a6 || a7 || a5 )
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
      v10 = core::iter::traits::iterator::Iterator::try_fold(v14, v15);
      v11 = core::iter::traits::iterator::Iterator::try_fold(v16, v17);
      if ( v10 == (_DWORD)&loc_110000 )
        return -(v11 != (_DWORD)&loc_110000);
      if ( v11 == (_DWORD)&loc_110000 )
        break;
      result = uu_sort::custom_str_cmp::cmp_chars(v10, v11, a7);
      if ( result )
        return result;
    }
    return 1;
  }
  else
  {
    v7 = a2 - a4;
    if ( a2 < a4 )
      a4 = a2;
    v8 = memcmp(a1, a3, a4);
    if ( v8 )
      v7 = v8;
    result = -1;
    if ( v7 >= 0 )
      return v7 != 0;
  }
  return result;
}
