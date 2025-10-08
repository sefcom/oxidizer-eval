void *__fastcall firecracker::api_server::parsed_request::ParsedRequest::success_response_with_mmds_value(
        void *dest,
        _BYTE *a2)
{
  __int128 v3; // [rsp+8h] [rbp-100h] BYREF
  const char *v4; // [rsp+18h] [rbp-F0h]
  __int64 v5; // [rsp+20h] [rbp-E8h]
  __int64 v6; // [rsp+28h] [rbp-E0h]
  __int128 v7; // [rsp+30h] [rbp-D8h] BYREF
  const char *v8; // [rsp+40h] [rbp-C8h]
  _BYTE v9[24]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD src[20]; // [rsp+68h] [rbp-A0h] BYREF

  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 3 )
  {
    src[0] = &off_3A3690;
    src[1] = 1LL;
    src[2] = 8LL;
    *(_OWORD *)&src[3] = 0LL;
    *(_QWORD *)&v3 = aFirecrackerApi;
    *((_QWORD *)&v3 + 1) = 39LL;
    v4 = aFirecrackerApi;
    v5 = 39LL;
    v6 = log::__private_api::loc(&off_3A36D0);
    log::__private_api::log_impl(src, 3LL, &v3);
  }
  micro_http::response::Response::new(src, 1LL, 1LL);
  if ( *a2 )
  {
    serde_json::ser::to_vec(&v3, a2);
    if ( __OFSUB__(0LL, (_QWORD)v3) )
    {
      *((_QWORD *)&v7 + 1) = *((_QWORD *)&v3 + 1);
      *(_QWORD *)&v7 = 0x8000000000000000LL;
    }
    else
    {
      v8 = v4;
      v7 = v3;
    }
    core::result::Result<T,E>::unwrap(v9, &v7, &off_3A36E8);
  }
  else
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v9);
  }
  micro_http::response::Response::set_body(src, v9);
  return memcpy(dest, src, 0x90uLL);
}