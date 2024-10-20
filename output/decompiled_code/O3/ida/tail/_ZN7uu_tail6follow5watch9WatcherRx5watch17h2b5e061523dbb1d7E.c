__int64 __fastcall uu_tail::follow::watch::WatcherRx::watch(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  char v10; // [rsp+7h] [rbp-E1h] BYREF
  __int64 v11; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+10h] [rbp-D8h]
  __int64 v13; // [rsp+18h] [rbp-D0h]
  _OWORD v14[3]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-98h]
  _QWORD v16[7]; // [rsp+58h] [rbp-90h] BYREF
  char v17; // [rsp+90h] [rbp-58h]
  _OWORD v18[3]; // [rsp+98h] [rbp-50h] BYREF
  __int64 v19; // [rsp+C8h] [rbp-20h]

  (*(void (__fastcall **)(_OWORD *, __int64, __int64, __int64, __int64))(a2 + 24))(v18, a1, a3, a4, 1LL);
  if ( LODWORD(v18[0]) == 6 )
    return 0LL;
  v15 = v19;
  v14[2] = v18[2];
  v14[1] = v18[1];
  v14[0] = v18[0];
  v11 = 0LL;
  v12 = 1LL;
  v13 = 0LL;
  v16[6] = 32LL;
  v17 = 3;
  v16[0] = 0LL;
  v16[2] = 0LL;
  v16[4] = &v11;
  v16[5] = &off_15C8E0;
  if ( (unsigned __int8)<notify::error::Error as core::fmt::Display>::fmt(v14, v16) )
    core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v10, &unk_15C928, &off_15C910);
  v5 = v11;
  v6 = v12;
  v7 = v13;
  v8 = _rust_alloc(32LL, 8LL);
  if ( !v8 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  *(_QWORD *)v8 = v5;
  *(_QWORD *)(v8 + 8) = v6;
  *(_QWORD *)(v8 + 16) = v7;
  *(_DWORD *)(v8 + 24) = 1;
  v9 = v8;
  core::ptr::drop_in_place<notify::error::Error>(v14);
  return v9;
}
