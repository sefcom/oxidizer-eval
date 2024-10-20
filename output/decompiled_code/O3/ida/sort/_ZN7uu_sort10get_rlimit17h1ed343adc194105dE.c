__int64 *__fastcall uu_sort::get_rlimit(__int64 *a1)
{
  void *v1; // rax
  void *v2; // r14
  __int64 v3; // rax
  struct rlimit v5; // [rsp+0h] [rbp-28h] BYREF

  v5 = 0LL;
  if ( getrlimit(RLIMIT_NOFILE, &v5) )
  {
    v1 = (void *)_rust_alloc(22LL, 1LL);
    if ( !v1 )
      alloc::raw_vec::handle_error(1LL, 22LL);
    v2 = v1;
    qmemcpy(v1, "Failed to fetch rlimit", 22);
    v3 = _rust_alloc(32LL, 8LL);
    if ( !v3 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    *(_QWORD *)v3 = 22LL;
    *(_QWORD *)(v3 + 8) = v2;
    *(_QWORD *)(v3 + 16) = 22LL;
    *(_DWORD *)(v3 + 24) = 2;
    *a1 = v3;
    a1[1] = (__int64)&off_192CE0;
  }
  else
  {
    a1[1] = v5.rlim_cur;
    *a1 = 0LL;
  }
  return a1;
}
