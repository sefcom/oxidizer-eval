        char a7)
{
  __int64 v7; // r13
  int v8; // eax
  bool v9; // al
  __int64 v10; // r13
  unsigned int v11; // edx
  unsigned int v12; // esi
  bool v13; // cf
  bool v14; // zf
  unsigned int v15; // eax
  char v17; // [rsp+6h] [rbp-72h] BYREF
  char v18; // [rsp+7h] [rbp-71h] BYREF
  _QWORD v19[2]; // [rsp+8h] [rbp-70h] BYREF
  _QWORD v20[2]; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v21[2]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v22[8]; // [rsp+38h] [rbp-40h] BYREF

  v17 = a5;
  v18 = a6;
  if ( a7 || a6 || a5 )
  {
    v19[0] = a1;
    v19[1] = &a1[a2];
    v20[0] = &v17;
    v20[1] = &v18;
    v21[0] = a3;
    v21[1] = &a3[a4];
    v22[0] = &v17;
    v22[1] = &v18;
    while ( 1 )
    {
      LODWORD(v10) = core::iter::traits::iterator::Iterator::try_fold(v19, v20);
      v15 = core::iter::traits::iterator::Iterator::try_fold(v21, v22);
      if ( (_DWORD)v10 == 1114112 )
      {
        LOBYTE(v10) = -(v15 != 1114112);
        return (unsigned int)v10;
      }
      if ( v15 == 1114112 )
        break;
      if ( a7 )
      {
        v11 = v10 ^ 0x20;
        if ( (unsigned int)(v10 - 97) >= 0x1A )
          v11 = v10;
        v12 = v15 ^ 0x20;
        if ( v15 - 97 >= 0x1A )
          v12 = v15;
        v13 = v11 < v12;
        v14 = v11 == v12;
      }
      else
      {
        v13 = (unsigned int)v10 < v15;
        v14 = (_DWORD)v10 == v15;
      }
      LOBYTE(v10) = (!v13 && !v14) - v13;
      if ( (_BYTE)v10 )
        return (unsigned int)v10;
    }
    LOBYTE(v10) = 1;
  }
  else
  {
    v7 = a2 - a4;
    if ( a2 < a4 )
      a4 = a2;
    v8 = memcmp(a1, a3, a4);
    if ( v8 )
      v7 = v8;
    v9 = v7 > 0;
    v10 = v7 >> 63;
    LOBYTE(v10) = v9 + v10;
  }
  return (unsigned int)v10;
}
