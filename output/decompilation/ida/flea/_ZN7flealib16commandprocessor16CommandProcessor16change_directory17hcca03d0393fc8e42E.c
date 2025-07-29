__int64 __fastcall flealib::commandprocessor::CommandProcessor::change_directory(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r14
  char v7; // dl
  unsigned __int8 v8; // bp
  char v9; // dl
  __int128 v10; // xmm0
  const char *v12; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+10h] [rbp-C8h]
  const char *v14; // [rsp+18h] [rbp-C0h]
  __int64 v15; // [rsp+20h] [rbp-B8h]
  __int64 v16; // [rsp+28h] [rbp-B0h]
  __int128 v17; // [rsp+30h] [rbp-A8h] BYREF
  __int128 **v18; // [rsp+40h] [rbp-98h]
  __int128 v19; // [rsp+48h] [rbp-90h]
  __int128 v20; // [rsp+60h] [rbp-78h] BYREF
  __int64 v21; // [rsp+70h] [rbp-68h]
  __int128 *v22; // [rsp+80h] [rbp-58h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+88h] [rbp-50h]
  __int128 v24; // [rsp+90h] [rbp-48h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-38h]

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, asc_6A0D0, 2LL) )
  {
    std::sync::mutex::Mutex<T>::lock(&v17, a4 + 16);
    v6 = core::result::Result<T,E>::unwrap(&v17, &off_7086B8);
    v8 = v7 & 1;
    flealib::fileserver::FileServer::change_directory_up(&v24, v6 + 8);
    if ( __OFSUB__(0LL, (_QWORD)v24) )
    {
      if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) >= 4 )
      {
        *(_QWORD *)&v17 = &off_708628;
        *((_QWORD *)&v17 + 1) = 1LL;
        v18 = (__int128 **)&byte_8;
        v19 = 0LL;
        v12 = aFlealibCommand;
        v13 = 25LL;
        v14 = aFlealibCommand;
        v15 = 25LL;
        v16 = log::__private_api::loc(&off_7086D0);
        log::__private_api::log(&v17, 4LL, &v12);
      }
LABEL_10:
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v17, aDirectoryChang, 17LL);
      *(_QWORD *)(a1 + 16) = v18;
      v10 = v17;
LABEL_19:
      *(_OWORD *)a1 = v10;
      return core::ptr::drop_in_place<std::sync::mutex::MutexGuard<flealib::fileserver::FileServer>>(v6, v8);
    }
    v21 = v25;
    v20 = v24;
    if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) )
    {
      v22 = &v20;
      v23 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v17 = &off_708638;
      *((_QWORD *)&v17 + 1) = 1LL;
      v18 = &v22;
      v19 = 1uLL;
      v12 = aFlealibCommand;
      v13 = 25LL;
      v14 = aFlealibCommand;
      v15 = 25LL;
      v16 = log::__private_api::loc(&off_7086E8);
      log::__private_api::log(&v17, 1LL, &v12);
    }
    goto LABEL_18;
  }
  if ( a3 )
  {
    std::sync::mutex::Mutex<T>::lock(&v17, a4 + 16);
    v6 = core::result::Result<T,E>::unwrap(&v17, &off_708670);
    v8 = v9 & 1;
    flealib::fileserver::FileServer::change_directory(&v24, v6 + 8, a2, a3);
    if ( __OFSUB__(0LL, (_QWORD)v24) )
    {
      if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) >= 4 )
      {
        *(_QWORD *)&v17 = &off_708628;
        *((_QWORD *)&v17 + 1) = 1LL;
        v18 = (__int128 **)&byte_8;
        v19 = 0LL;
        v12 = aFlealibCommand;
        v13 = 25LL;
        v14 = aFlealibCommand;
        v15 = 25LL;
        v16 = log::__private_api::loc(&off_708688);
        log::__private_api::log(&v17, 4LL, &v12);
      }
      goto LABEL_10;
    }
    v21 = v25;
    v20 = v24;
    if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) )
    {
      v22 = &v20;
      v23 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v17 = &off_708638;
      *((_QWORD *)&v17 + 1) = 1LL;
      v18 = &v22;
      v19 = 1uLL;
      v12 = aFlealibCommand;
      v13 = 25LL;
      v14 = aFlealibCommand;
      v15 = 25LL;
      v16 = log::__private_api::loc(&off_7086A0);
      log::__private_api::log(&v17, 1LL, &v12);
    }
LABEL_18:
    *(_QWORD *)(a1 + 16) = v21;
    v10 = v20;
    goto LABEL_19;
  }
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) >= 4 )
  {
    *(_QWORD *)&v17 = &off_708648;
    *((_QWORD *)&v17 + 1) = 1LL;
    v18 = (__int128 **)&byte_8;
    v19 = 0LL;
    v12 = aFlealibCommand;
    v13 = 25LL;
    v14 = aFlealibCommand;
    v15 = 25LL;
    v16 = log::__private_api::loc(&off_708658);
    log::__private_api::log(&v17, 4LL, &v12);
  }
  return <T as alloc::slice::hack::ConvertVec>::to_vec(a1, aDirectoryNameI, 23LL);
}