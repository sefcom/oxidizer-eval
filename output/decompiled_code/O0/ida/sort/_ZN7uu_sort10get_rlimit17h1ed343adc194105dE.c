__int64 *__fastcall uu_sort::get_rlimit(__int64 *a1)
{
  __int64 v1; // rax
  rlim_t rlim_cur; // rdx
  struct rlimit v4; // [rsp+0h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( getrlimit(RLIMIT_NOFILE, &v4) )
  {
    v1 = uucore::mods::error::UUsageError::new(2LL, aFailedToFetchR, 22LL);
  }
  else
  {
    rlim_cur = v4.rlim_cur;
    v1 = 0LL;
  }
  a1[1] = rlim_cur;
  *a1 = v1;
  return a1;
}
