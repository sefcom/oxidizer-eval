__int64 __fastcall firecracker::api_server::ApiServer::run(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int128 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int128 v14; // [rsp+10h] [rbp-318h] BYREF
  __int128 v15; // [rsp+20h] [rbp-308h]
  __int128 v16; // [rsp+30h] [rbp-2F8h]
  __int64 v17; // [rsp+40h] [rbp-2E8h]
  __int64 time_us; // [rsp+50h] [rbp-2D8h] BYREF
  __int128 v19; // [rsp+58h] [rbp-2D0h] BYREF
  __int128 v20; // [rsp+68h] [rbp-2C0h]
  __int128 v21; // [rsp+78h] [rbp-2B0h]
  __int64 v22; // [rsp+88h] [rbp-2A0h]
  __int64 v23; // [rsp+90h] [rbp-298h]
  char **v24; // [rsp+98h] [rbp-290h] BYREF
  __int64 (__fastcall *v25)(); // [rsp+A0h] [rbp-288h]
  _QWORD *v26; // [rsp+A8h] [rbp-280h]
  __int64 v27; // [rsp+B0h] [rbp-278h]
  __int64 v28; // [rsp+B8h] [rbp-270h]
  _QWORD v29[5]; // [rsp+C8h] [rbp-260h] BYREF
  _QWORD v30[2]; // [rsp+F0h] [rbp-238h] BYREF
  _OWORD dest[9]; // [rsp+100h] [rbp-228h] BYREF
  _OWORD src[9]; // [rsp+190h] [rbp-198h] BYREF
  __int128 v33; // [rsp+220h] [rbp-108h] BYREF
  __int64 v34; // [rsp+230h] [rbp-F8h]
  _BYTE v35[32]; // [rsp+240h] [rbp-E8h] BYREF
  _BYTE v36[144]; // [rsp+260h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+2F0h] [rbp-38h]

  v23 = a1;
  *(_QWORD *)(a2 + 48) = a6;
  *(_QWORD *)&v7 = vmm::seccomp::apply_filter(a4, a5);
  v14 = v7;
  if ( (v7 & 1) != 0 )
  {
    *(_QWORD *)&v19 = *((_QWORD *)&v7 + 1);
    *(_QWORD *)&src[0] = &v19;
    *((_QWORD *)&src[0] + 1) = vmm::seccomp::_::<impl core::fmt::Display for vmm::seccomp::InstallationError>::fmt;
    *(_QWORD *)&dest[0] = &off_3A38B0;
    *((_QWORD *)&dest[0] + 1) = 1LL;
    *(_QWORD *)&dest[2] = 0LL;
    *(_QWORD *)&dest[1] = src;
    *((_QWORD *)&dest[1] + 1) = 1LL;
    core::panicking::panic_fmt(dest, &off_3A3920);
  }
  core::ptr::drop_in_place<core::result::Result<(),vmm::seccomp::InstallationError>>(&v14);
  micro_http::server::HttpServer::start_server(dest, a2);
  core::result::Result<T,E>::expect(dest, aCannotStartHtt, 24LL, &off_3A3938);
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 3 )
  {
    *(_QWORD *)&dest[0] = &off_3A38C0;
    *((_QWORD *)&dest[0] + 1) = 1LL;
    dest[1] = 8uLL;
    v8 = log::__private_api::loc(&off_3A3950);
    *(_QWORD *)&src[0] = aFirecrackerApi_0;
    *((_QWORD *)&src[0] + 1) = 23LL;
    *(_QWORD *)&src[1] = aFirecrackerApi_0;
    *((_QWORD *)&src[1] + 1) = 23LL;
    *(_QWORD *)&src[2] = v8;
    log::__private_api::log_impl(dest, 3LL, src);
  }
  vmm::logger::metrics::ProcessTimeReporter::report_start_time(a3);
  vmm::logger::metrics::ProcessTimeReporter::report_cpu_start_time(a3);
  while ( 1 )
  {
    while ( 1 )
    {
      micro_http::server::HttpServer::requests(src, a2);
      if ( *(_QWORD *)&src[0] != 28LL )
        break;
      v34 = *((_QWORD *)&src[1] + 1);
      v33 = *(_OWORD *)((char *)src + 8);
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v35, &v33);
      while ( 1 )
      {
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, v35);
        if ( *(_QWORD *)&src[0] == 0x8000000000000000LL )
          break;
        memcpy(dest, src, sizeof(dest));
        time_us = utils::time::get_time_us(0LL);
        firecracker::api_server::ApiServer::run::{{closure}}(v36, v23, &time_us, dest);
        v37 = *((_QWORD *)&dest[8] + 1);
        micro_http::server::HttpServer::respond(&v19, a2, v36);
        if ( (_DWORD)v19 == 28 )
        {
          core::ptr::drop_in_place<core::result::Result<(),micro_http::common::ServerError>>(&v19);
        }
        else
        {
          v17 = v22;
          v16 = v21;
          v15 = v20;
          v14 = v19;
          if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) )
          {
            v30[0] = &v14;
            v30[1] = <micro_http::common::ServerError as core::fmt::Display>::fmt;
            v24 = &off_3A38F0;
            v25 = (__int64 (__fastcall *)())(&dword_0 + 1);
            v28 = 0LL;
            v26 = v30;
            v27 = 1LL;
            v10 = log::__private_api::loc(&off_3A3968);
            v29[0] = aFirecrackerApi_0;
            v29[1] = 23LL;
            v29[2] = aFirecrackerApi_0;
            v29[3] = 23LL;
            v29[4] = v10;
            log::__private_api::log_impl(&v24, 1LL, v29);
          }
          core::ptr::drop_in_place<micro_http::common::ServerError>(&v14);
        }
        v29[0] = utils::time::get_time_us(0LL) - time_us;
        if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
        {
          v24 = (char **)v29;
          v25 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          *(_QWORD *)&v14 = &off_3A3900;
          *((_QWORD *)&v14 + 1) = 2LL;
          *(_QWORD *)&v16 = 0LL;
          *(_QWORD *)&v15 = &v24;
          *((_QWORD *)&v15 + 1) = 1LL;
          v11 = log::__private_api::loc(&off_3A3980);
          *(_QWORD *)&v19 = aFirecrackerApi_0;
          *((_QWORD *)&v19 + 1) = 23LL;
          *(_QWORD *)&v20 = aFirecrackerApi_0;
          *((_QWORD *)&v20 + 1) = 23LL;
          *(_QWORD *)&v21 = v11;
          log::__private_api::log_impl(&v14, 4LL, &v19);
        }
        core::ptr::drop_in_place<micro_http::server::ServerRequest>(dest);
      }
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<micro_http::server::ServerRequest>>(v35);
    }
    if ( LODWORD(src[0]) == 26 )
      break;
    *(_QWORD *)&dest[3] = *(_QWORD *)&src[3];
    dest[2] = src[2];
    dest[1] = src[1];
    dest[0] = src[0];
    if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) )
    {
      v24 = (char **)dest;
      v25 = <micro_http::common::ServerError as core::fmt::Display>::fmt;
      *(_QWORD *)&v14 = &off_3A38E0;
      *((_QWORD *)&v14 + 1) = 1LL;
      *(_QWORD *)&v16 = 0LL;
      *(_QWORD *)&v15 = &v24;
      *((_QWORD *)&v15 + 1) = 1LL;
      v9 = log::__private_api::loc(&off_3A39B0);
      *(_QWORD *)&v19 = aFirecrackerApi_0;
      *((_QWORD *)&v19 + 1) = 23LL;
      *(_QWORD *)&v20 = aFirecrackerApi_0;
      *((_QWORD *)&v20 + 1) = 23LL;
      *(_QWORD *)&v21 = v9;
      log::__private_api::log_impl(&v14, 1LL, &v19);
    }
    core::ptr::drop_in_place<micro_http::common::ServerError>(dest);
  }
  micro_http::server::HttpServer::flush_outgoing_writes(a2);
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) > 3 )
  {
    *(_QWORD *)&dest[0] = &off_3A38D0;
    *((_QWORD *)&dest[0] + 1) = 1LL;
    dest[1] = 8uLL;
    v12 = log::__private_api::loc(&off_3A3998);
    *(_QWORD *)&v14 = aFirecrackerApi_0;
    *((_QWORD *)&v14 + 1) = 23LL;
    *(_QWORD *)&v15 = aFirecrackerApi_0;
    *((_QWORD *)&v15 + 1) = 23LL;
    *(_QWORD *)&v16 = v12;
    log::__private_api::log_impl(dest, 4LL, &v14);
  }
  core::ptr::drop_in_place<micro_http::common::ServerError>(src);
  return core::ptr::drop_in_place<micro_http::server::HttpServer>(a2);
}