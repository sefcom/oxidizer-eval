__int64 __fastcall uu_tail::follow::watch::WatcherRx::watch(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OWORD v5[3]; // [rsp+8h] [rbp-70h] BYREF
  __int64 v6; // [rsp+38h] [rbp-40h]
  _OWORD v7[3]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v8; // [rsp+70h] [rbp-8h]

  (*(void (__fastcall **)(_OWORD *, __int64, __int64, __int64, __int64))(a2 + 24))(v5, a1, a3, a4, 1LL);
  if ( LODWORD(v5[0]) == 6 )
    return 0LL;
  v8 = v6;
  v7[2] = v5[2];
  v7[1] = v5[1];
  v7[0] = v5[0];
  return uu_tail::follow::watch::WatcherRx::watch::{{closure}}(v7);
}