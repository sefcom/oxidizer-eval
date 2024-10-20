void __fastcall uu_dd::Alarm::manual_trigger_fn::{{closure}}(__int64 **a1)
{
  __int64 *v1; // r14
  __int64 v2; // rdx
  __int64 *v3; // rax
  __int64 *v4; // [rsp+8h] [rbp-20h] BYREF

  v1 = *a1;
  if ( *a1 != (__int64 *)-1LL )
  {
    v2 = *v1;
    while ( v2 )
    {
      if ( v2 < 0 )
        alloc::sync::Weak<T,A>::upgrade::checked_increment::panic_cold_display(
          &anon_6ec04cc158f36395b4c5957766f7f953_1_llvm_13014179843882398300,
          &anon_6ec04cc158f36395b4c5957766f7f953_6_llvm_13014179843882398300);
      if ( !core::sync::atomic::atomic_compare_exchange_weak(v1, v2, v2 + 1, 2LL, 0LL) )
      {
        v3 = *a1;
        if ( *a1 )
        {
          v4 = *a1;
          *((_BYTE *)v3 + 16) = 2;
          if ( !_InterlockedDecrement64(v3) )
            alloc::sync::Arc<T,A>::drop_slow(&v4);
        }
        return;
      }
    }
  }
}
