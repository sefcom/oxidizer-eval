unsigned __int64 __fastcall uu_chroot::set_gid(__gid_t a1)
{
  if ( setgid(a1) )
    return ((unsigned __int64)(unsigned int)*_errno_location() << 32) | 2;
  else
    return 0LL;
}