__int64 __fastcall uu_dd::Dest::discard_cache(char a1, unsigned int a2, __int64 a3, __int64 a4)
{
  if ( a1 == 1 )
    return nix::fcntl::posix_fadvise::posix_fadvise(a2, a3, a4, 4LL);
  else
    return 29LL;
}
