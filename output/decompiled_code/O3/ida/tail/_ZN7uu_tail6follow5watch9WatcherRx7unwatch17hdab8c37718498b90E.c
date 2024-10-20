__int64 __fastcall uu_tail::follow::watch::WatcherRx::unwatch(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  char v8; // [rsp+7h] [rbp-E1h] BYREF
  __int64 v9; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v10; // [rsp+10h] [rbp-D8h]
  __int64 v11; // [rsp+18h] [rbp-D0h]
  _OWORD v12[3]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+50h] [rbp-98h]
  _QWORD v14[7]; // [rsp+58h] [rbp-90h] BYREF
  char v15; // [rsp+90h] [rbp-58h]
  _OWORD v16[3]; // [rsp+98h] [rbp-50h] BYREF
  __int64 v17; // [rsp+C8h] [rbp-20h]

  (*(void (__fastcall **)(_OWORD *, __int64))(a2 + 32))(v16, a1);
  if ( LODWORD(v16[0]) == 6 )
    return 0LL;
  v13 = v17;
  v12[2] = v16[2];
  v12[1] = v16[1];
  v12[0] = v16[0];
  v9 = 0LL;
  v10 = 1LL;
  v11 = 0LL;
  v14[6] = 32LL;
  v15 = 3;
  v14[0] = 0LL;
  v14[2] = 0LL;
  v14[4] = &v9;
  v14[5] = &off_15C8E0;
  if ( (unsigned __int8)<notify::error::Error as core::fmt::Display>::fmt(v12, v14) )
    core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v8, &unk_15C928, &off_15C910);
  v3 = v9;
  v4 = v10;
  v5 = v11;
  v6 = _rust_alloc(32LL, 8LL);
  if ( !v6 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  *(_QWORD *)v6 = v3;
  *(_QWORD *)(v6 + 8) = v4;
  *(_QWORD *)(v6 + 16) = v5;
  *(_DWORD *)(v6 + 24) = 1;
  v7 = v6;
  core::ptr::drop_in_place<notify::error::Error>(v12);
  return v7;
}
