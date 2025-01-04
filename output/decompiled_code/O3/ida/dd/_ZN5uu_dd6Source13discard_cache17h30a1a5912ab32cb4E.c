__int64 __fastcall uu_dd::Source::discard_cache(int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  if ( a1 )
    return 29LL;
  else
    return nix::fcntl::posix_fadvise::posix_fadvise(a2, a3, a4, 4LL);
}
