__int64 __fastcall uu_tail::follow::watch::WatcherRx::unwatch(__int64 a1, __int64 a2)
{
  _OWORD v3[3]; // [rsp+8h] [rbp-70h] BYREF
  __int64 v4; // [rsp+38h] [rbp-40h]
  _OWORD v5[3]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v6; // [rsp+70h] [rbp-8h]

  (*(void (__fastcall **)(_OWORD *, __int64))(a2 + 32))(v3, a1);
  if ( LODWORD(v3[0]) == 6 )
    return 0LL;
  v6 = v4;
  v5[2] = v3[2];
  v5[1] = v3[1];
  v5[0] = v3[0];
  return uu_tail::follow::watch::WatcherRx::unwatch::{{closure}}(v5);
}
