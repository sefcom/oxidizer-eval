__int64 __fastcall uu_join::Input<Sep>::new(unsigned __int8 a1, char a2, char a3)
{
  unsigned __int16 v4; // [rsp+2h] [rbp-4h]

  LOBYTE(v4) = a2 & 1;
  HIBYTE(v4) = a3;
  return (a1 << 16) | (unsigned int)v4;
}
