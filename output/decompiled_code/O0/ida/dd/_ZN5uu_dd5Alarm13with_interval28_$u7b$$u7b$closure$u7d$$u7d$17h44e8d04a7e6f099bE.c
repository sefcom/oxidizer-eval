volatile signed __int64 *__fastcall uu_dd::Alarm::with_interval::{{closure}}(__int64 **a1)
{
  volatile signed __int64 *result; // rax
  __int64 *v2; // r15
  __int64 *v3; // r12
  __int64 v4; // rdx
  volatile signed __int64 *v5; // [rsp+0h] [rbp-38h] BYREF

  v5 = result;
  v2 = *a1;
  if ( *a1 == (__int64 *)-1LL )
    return result;
  v3 = 0LL;
  while ( 2 )
  {
    v4 = *v2;
    do
    {
      if ( !v4 )
      {
        v3 = *a1;
        if ( *a1 == (__int64 *)-1LL )
          return result;
        goto LABEL_13;
      }
      if ( v4 < 0 )
        alloc::sync::Weak<T,A>::upgrade::checked_increment::panic_cold_display(
          &anon_6ec04cc158f36395b4c5957766f7f953_1_llvm_13014179843882398300,
          &anon_6ec04cc158f36395b4c5957766f7f953_6_llvm_13014179843882398300);
      result = (volatile signed __int64 *)core::sync::atomic::atomic_compare_exchange_weak(v2, v4, v4 + 1, 2LL, 0LL);
    }
    while ( result );
    result = *a1;
    if ( !*a1 )
    {
LABEL_13:
      if ( !_InterlockedDecrement64(v3 + 1) )
        return (volatile signed __int64 *)_rust_dealloc(*a1, 24LL, 8LL);
      return result;
    }
    v5 = *a1;
    std::thread::sleep(a1[1], *((unsigned int *)a1 + 4));
    result = v5;
    *((_BYTE *)v5 + 16) = 1;
    if ( !_InterlockedDecrement64(result) )
      result = (volatile signed __int64 *)alloc::sync::Arc<T,A>::drop_slow(&v5);
    v2 = *a1;
    if ( *a1 != (__int64 *)-1LL )
      continue;
    return result;
  }
}
