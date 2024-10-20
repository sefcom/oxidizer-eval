__int64 __fastcall uu_dd::Alarm::manual_trigger_fn::{{closure}}(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  signed __int64 v3; // rax
  signed __int64 v4; // rtt
  __int64 v6; // [rsp+0h] [rbp-8h] BYREF

  v6 = v1;
  v2 = *a1;
  if ( *a1 != -1 )
  {
    v3 = *(_QWORD *)v2;
    while ( v3 )
    {
      if ( v3 < 0 )
        alloc::sync::Weak<T,A>::upgrade::checked_increment::panic_cold_display();
      v4 = v3;
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)v2, v3 + 1, v3);
      if ( v4 == v3 )
      {
        v6 = v2;
        *(_BYTE *)(v2 + 16) = 2;
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v2) )
          alloc::sync::Arc<T,A>::drop_slow(&v6);
        return v6;
      }
    }
  }
  return v6;
}
