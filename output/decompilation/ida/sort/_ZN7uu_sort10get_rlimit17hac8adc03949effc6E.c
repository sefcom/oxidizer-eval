__int64 *__fastcall uu_sort::get_rlimit(__int64 *a1)
{
  __int64 v1; // rax
  __int64 (__fastcall **rlim_cur)(); // rcx
  struct rlimit v4; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v5[24]; // [rsp+18h] [rbp-30h] BYREF
  int v6; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  if ( getrlimit(RLIMIT_NOFILE, &v4) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v5, aFailedToFetchR, 22LL);
    v6 = 2;
    v1 = alloc::boxed::Box<T>::new(v5);
    rlim_cur = &off_18D250;
  }
  else
  {
    rlim_cur = (__int64 (__fastcall **)())v4.rlim_cur;
    v1 = 0LL;
  }
  a1[1] = (__int64)rlim_cur;
  *a1 = v1;
  return a1;
}