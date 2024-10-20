__int64 __fastcall uu_tail::follow::watch::WatcherRx::unwatch(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD v4[3]; // [rsp+8h] [rbp-70h] BYREF
  __int64 v5; // [rsp+38h] [rbp-40h]
  _OWORD v6[3]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v7; // [rsp+70h] [rbp-8h]

  (*(void (__fastcall **)(_OWORD *, _QWORD, __int64, __int64))(*(_QWORD *)(a1 + 24) + 32LL))(
    v4,
    *(_QWORD *)(a1 + 16),
    a2,
    a3);
  if ( *(_QWORD *)&v4[0] == 6LL )
    return 0LL;
  v7 = v5;
  v6[2] = v4[2];
  v6[1] = v4[1];
  v6[0] = v4[0];
  return uu_tail::follow::watch::WatcherRx::unwatch::{{closure}}(v6);
}
