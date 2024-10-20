        int a4)
{
  _OWORD *i; // rax
  __int64 v5; // rcx
  _OWORD v7[16]; // [rsp+0h] [rbp-208h] BYREF
  _OWORD v8[16]; // [rsp+100h] [rbp-108h] BYREF

  if ( a4 )
  {
    memset(v7, 0, sizeof(v7));
    for ( i = v7; a3; --a3 )
    {
      if ( !a2 )
        break;
      v5 = *a2;
      if ( (*((_BYTE *)v7 + v5) & 1) != 0 )
        core::panicking::panic(aAssertionFaile_9, 28LL, &off_12C3D0);
      ++a2;
      *((_BYTE *)v7 + v5) = 1;
    }
  }
  else
  {
    memset(v8, 1, sizeof(v8));
    BYTE10(v8[0]) = 0;
    BYTE13(v8[0]) = 0;
    i = v8;
  }
  memcpy(dest, i, 0x100uLL);
  return dest;
}
