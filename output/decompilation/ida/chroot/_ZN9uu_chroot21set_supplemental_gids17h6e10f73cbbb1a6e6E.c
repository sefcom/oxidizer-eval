unsigned __int64 __fastcall uu_chroot::set_supplemental_gids(__gid_t *groups, size_t n)
{
  if ( setgroups(n, groups) )
    return ((unsigned __int64)(unsigned int)*_errno_location() << 32) | 2;
  else
    return 0LL;
}