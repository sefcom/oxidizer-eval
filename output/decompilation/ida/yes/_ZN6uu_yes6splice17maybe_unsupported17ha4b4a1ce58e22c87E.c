unsigned __int64 __fastcall uu_yes::splice::maybe_unsupported(unsigned int a1)
{
  __int64 v1; // rdx

  if ( a1 <= 0x26 && (v1 = 0x4000400200LL, _bittest64(&v1, a1)) )
    return 0LL;
  else
    return ((unsigned __int64)a1 << 32) | 2;
}
