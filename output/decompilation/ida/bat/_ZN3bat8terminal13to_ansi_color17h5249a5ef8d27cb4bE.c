__int64 __fastcall bat::terminal::to_ansi_color(__int64 a1, __int64 a2, __int64 a3)
{
  if ( BYTE3(a1) == 1 )
    return 21LL;
  if ( BYTE3(a1) )
  {
    if ( (_BYTE)a2 )
      return ((_DWORD)a1 << 8) | 0x13u;
    else
      return ((unsigned __int8)ansi_colours::ansi256_from_rgb(a1, a2, a3, 19LL) << 8) | 0x12u;
  }
  else if ( (a1 & 0xF8) != 0 )
  {
    return ((unsigned __int8)a1 << 8) | 0x12u;
  }
  else
  {
    return *(unsigned int *)&byte_857A0[4 * (a1 & 7)];
  }
}