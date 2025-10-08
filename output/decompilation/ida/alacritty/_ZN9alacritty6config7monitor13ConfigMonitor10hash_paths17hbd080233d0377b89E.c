__int64 __fastcall alacritty::config::monitor::ConfigMonitor::hash_paths(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 i; // rax
  __int64 v4; // rdx
  char v5; // [rsp+Fh] [rbp-2059h] BYREF
  _QWORD v6[4]; // [rsp+10h] [rbp-2058h] BYREF
  __int128 v7; // [rsp+30h] [rbp-2038h]
  __int128 v8; // [rsp+40h] [rbp-2028h]
  __int64 v9; // [rsp+50h] [rbp-2018h]
  _QWORD s[1026]; // [rsp+58h] [rbp-2010h] BYREF

  s[512] = 0LL;
  s[0] = 0LL;
  if ( a2 > 0x400 )
    return 0LL;
  memset(s, 0, 0x2000uLL);
  v6[0] = a1;
  v6[1] = a1 + 24 * a2;
  v6[2] = 0LL;
  for ( i = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v6);
        v4;
        i = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v6) )
  {
    if ( i >= 0x400 )
      core::panicking::panic_bounds_check(i, 1024LL, &off_881988);
    s[i] = v4;
  }
  core::slice::sort::unstable::ipnsort(s, &v5);
  qmemcpy(v6, "uespemosarenegylmodnarodsetybdet", sizeof(v6));
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  core::hash::Hash::hash_slice(s, v6);
  <core::hash::sip::Hasher<S> as core::hash::Hasher>::finish(v6);
  return 1LL;
}