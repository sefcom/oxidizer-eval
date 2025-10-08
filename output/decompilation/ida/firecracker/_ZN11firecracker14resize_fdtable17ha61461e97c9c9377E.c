__int64 firecracker::resize_fdtable()
{
  int rlim_cur; // ebp
  __int64 v1; // rbx
  int v2; // ebp
  struct rlimit v4; // [rsp+0h] [rbp-28h] BYREF

  v4 = 0LL;
  if ( getrlimit(RLIMIT_NOFILE, &v4) < 0 )
    return 0LL;
  rlim_cur = 2048;
  if ( v4.rlim_cur <= 0x7FFFFFFF )
    rlim_cur = v4.rlim_cur;
  v1 = 3LL;
  if ( rlim_cur >= 4 )
  {
    v2 = rlim_cur - 1;
    if ( dup2(0, v2) < 0 )
    {
      v1 = 1LL;
      goto LABEL_11;
    }
    if ( close(v2) < 0 )
    {
      v1 = 2LL;
LABEL_11:
      _errno_location();
    }
  }
  return v1;
}