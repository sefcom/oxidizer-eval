__int64 __fastcall firecracker::api_server::ApiServer::handle_request(void *dest, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int128 v6; // [rsp+0h] [rbp-168h] BYREF
  __int64 v7; // [rsp+10h] [rbp-158h]
  __m256i v8; // [rsp+18h] [rbp-150h] BYREF
  __int64 v9; // [rsp+38h] [rbp-130h]
  __int128 v10; // [rsp+40h] [rbp-128h] BYREF
  __int64 v11; // [rsp+50h] [rbp-118h]
  const char *v12; // [rsp+60h] [rbp-108h] BYREF
  __int64 v13; // [rsp+68h] [rbp-100h]
  const char *v14; // [rsp+70h] [rbp-F8h]
  __int64 v15; // [rsp+78h] [rbp-F0h]
  __int64 v16; // [rsp+80h] [rbp-E8h]
  _QWORD v17[2]; // [rsp+90h] [rbp-D8h] BYREF
  _QWORD v18[4]; // [rsp+A0h] [rbp-C8h] BYREF
  __m256i src[5]; // [rsp+C0h] [rbp-A8h] BYREF

  <firecracker::api_server::parsed_request::ParsedRequest as core::convert::TryFrom<&micro_http::request::Request>>::try_from(
    src,
    a3);
  if ( src[0].m256i_i32[0] == 1 )
  {
    v6 = *(_OWORD *)&src[0].m256i_u64[2];
    v7 = src[1].m256i_i64[0];
    v8 = *(__m256i *)((char *)src + 8);
    if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) )
    {
      *(_QWORD *)&v10 = &v8;
      *((_QWORD *)&v10 + 1) = <firecracker::api_server::parsed_request::RequestError as core::fmt::Debug>::fmt;
      src[0].m256i_i64[0] = (__int64)&unk_30B60;
      src[0].m256i_i64[1] = 1LL;
      src[1].m256i_i64[0] = 0LL;
      src[0].m256i_i64[2] = (__int64)&v10;
      src[0].m256i_i64[3] = 1LL;
      v4 = log::__private_api::loc(&off_3A39E0);
      v12 = aFirecrackerApi_0;
      v13 = 23LL;
      v14 = aFirecrackerApi_0;
      v15 = 23LL;
      v16 = v4;
      log::__private_api::log_impl(src, 1LL, &v12);
    }
    src[0] = v8;
    return firecracker::api_server::parsed_request::<impl core::convert::From<firecracker::api_server::parsed_request::RequestError> for micro_http::response::Response>::from(
             dest,
             src,
             v3);
  }
  else
  {
    v6 = *(_OWORD *)&src[0].m256i_u64[1];
    v7 = src[0].m256i_i64[3];
    *(_OWORD *)&v18[1] = *(_OWORD *)&src[0].m256i_u64[2];
    firecracker::api_server::ApiServer::serve_vmm_action_request(src);
    v18[0] = 0x8000000000000000LL;
    if ( __OFSUB__(0LL, (_QWORD)v6) )
    {
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v6);
    }
    else
    {
      v11 = v7;
      v10 = v6;
      if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) > 1 )
      {
        v17[0] = &v10;
        v17[1] = <alloc::string::String as core::fmt::Display>::fmt;
        v12 = (const char *)&unk_30B60;
        v13 = 1LL;
        v16 = 0LL;
        v14 = (const char *)v17;
        v15 = 1LL;
        v8.m256i_i64[0] = (__int64)aFirecrackerApi_0;
        v8.m256i_i64[1] = 23LL;
        v8.m256i_i64[2] = (__int64)aFirecrackerApi_0;
        v8.m256i_i64[3] = 23LL;
        v9 = log::__private_api::loc(&off_3A39C8);
        log::__private_api::log_impl(&v12, 2LL, &v8);
      }
      src[3].m256i_i8[9] = 1;
      core::ptr::drop_in_place<alloc::string::String>(&v10);
    }
    memcpy(dest, src, 0x90uLL);
    return core::ptr::drop_in_place<firecracker::api_server::parsed_request::ParsingInfo>(v18);
  }
}