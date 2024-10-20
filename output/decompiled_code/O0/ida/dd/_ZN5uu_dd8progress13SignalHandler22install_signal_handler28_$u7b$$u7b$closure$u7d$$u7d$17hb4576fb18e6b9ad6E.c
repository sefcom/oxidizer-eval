__int64 __fastcall uu_dd::progress::SignalHandler::install_signal_handler::{{closure}}(__int64 a1)
{
  volatile signed __int64 *v1; // rax
  int v2; // edx
  __int64 v4; // [rsp+0h] [rbp-438h] BYREF
  volatile signed __int64 *v5[2]; // [rsp+8h] [rbp-430h] BYREF
  _BYTE s[1056]; // [rsp+18h] [rbp-420h] BYREF

  memset(s, 0, 0x400uLL);
  while ( recv(*(_DWORD *)(a1 + 48), s, 0x400uLL, 64) > 0 )
    ;
  if ( _InterlockedIncrement64(*(volatile signed __int64 **)(a1 + 40)) <= 0 )
    BUG();
  v1 = *(volatile signed __int64 **)(a1 + 40);
  v4 = a1;
  v5[0] = v1;
  v5[1] = 0LL;
  while ( (unsigned int)<signal_hook::iterator::Forever<E> as core::iter::traits::iterator::Iterator>::next(&v4) )
  {
    if ( v2 != 10 )
      core::panicking::panic(
        anon_bff3183e4c196cdaa7c150408020b06b_103_llvm_10102786401241998662,
        40LL,
        &anon_bff3183e4c196cdaa7c150408020b06b_104_llvm_10102786401241998662);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 64) + 40LL))(*(_QWORD *)(a1 + 56));
  }
  if ( !_InterlockedDecrement64(v5[0]) )
    alloc::sync::Arc<T,A>::drop_slow(v5);
  return core::ptr::drop_in_place<uu_dd::progress::SignalHandler::install_signal_handler::{{closure}}>(a1);
}
