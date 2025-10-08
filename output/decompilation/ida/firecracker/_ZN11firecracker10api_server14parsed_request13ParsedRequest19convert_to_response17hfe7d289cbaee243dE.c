void *__fastcall firecracker::api_server::parsed_request::ParsedRequest::convert_to_response(void *dest, __int64 a2)
{
  char v3; // bp
  __int64 v4; // rax
  unsigned __int8 v5; // bp
  char **v6; // rdi
  __int64 v7; // rcx
  void *result; // rax
  const char *v9; // [rsp+8h] [rbp-110h] BYREF
  __int64 v10; // [rsp+10h] [rbp-108h]
  const char *v11; // [rsp+18h] [rbp-100h]
  __int64 v12; // [rsp+20h] [rbp-F8h]
  __int64 v13; // [rsp+28h] [rbp-F0h]
  __int128 v14; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-D8h]
  __int128 *v16; // [rsp+48h] [rbp-D0h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+50h] [rbp-C8h]
  _QWORD src[23]; // [rsp+60h] [rbp-B8h] BYREF

  if ( *(_QWORD *)a2 == 13LL )
  {
    *(_QWORD *)&v14 = a2 + 8;
    v3 = *(_BYTE *)(a2 + 8);
    v4 = core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL);
    if ( v3 == 14 )
    {
      v5 = 7;
      if ( v4 )
      {
        v16 = &v14;
        v17 = <&T as core::fmt::Display>::fmt;
        src[0] = &off_3A3710;
        src[1] = 1LL;
        src[2] = &v16;
        *(_OWORD *)&src[3] = 1uLL;
        v6 = &off_3A3760;
LABEL_11:
        v9 = aFirecrackerApi;
        v10 = 39LL;
        v11 = aFirecrackerApi;
        v12 = 39LL;
        v13 = log::__private_api::loc(v6);
        log::__private_api::log_impl(src, 1LL, &v9);
      }
    }
    else
    {
      v5 = 3;
      if ( v4 )
      {
        v16 = &v14;
        v17 = <&T as core::fmt::Display>::fmt;
        src[0] = &off_3A3720;
        src[1] = 1LL;
        src[2] = &v16;
        *(_OWORD *)&src[3] = 1uLL;
        v6 = &off_3A3778;
        goto LABEL_11;
      }
    }
    micro_http::response::Response::new(src, 1LL, v5);
    <T as alloc::string::SpecToString>::spec_to_string(&v9, v14);
    firecracker::api_server::ApiServer::json_fault_message(&v16, &v9);
    micro_http::response::Response::set_body(src, &v16);
    return memcpy(dest, src, 0x90uLL);
  }
  v7 = 3LL;
  if ( (unsigned __int64)(*(_QWORD *)a2 - 5LL) < 8 )
    v7 = *(_QWORD *)a2 - 5LL;
  switch ( v7 )
  {
    case 0LL:
      result = (void *)firecracker::api_server::parsed_request::ParsedRequest::success_response_with_data(dest);
      break;
    case 1LL:
      result = firecracker::api_server::parsed_request::ParsedRequest::success_response_with_data(dest, a2 + 8);
      break;
    case 2LL:
      if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) > 2 )
      {
        src[0] = &off_3A3700;
        src[1] = 1LL;
        src[2] = 8LL;
        *(_OWORD *)&src[3] = 0LL;
        v9 = aFirecrackerApi;
        v10 = 39LL;
        v11 = aFirecrackerApi;
        v12 = 39LL;
        v13 = log::__private_api::loc(&off_3A3730);
        log::__private_api::log_impl(src, 3LL, &v9);
      }
      result = (void *)micro_http::response::Response::new(dest, 1LL, 2LL);
      break;
    case 3LL:
      result = (void *)firecracker::api_server::parsed_request::ParsedRequest::success_response_with_data(dest);
      break;
    case 4LL:
      result = (void *)firecracker::api_server::parsed_request::ParsedRequest::success_response_with_data(dest);
      break;
    case 5LL:
      result = firecracker::api_server::parsed_request::ParsedRequest::success_response_with_mmds_value(
                 dest,
                 (_BYTE *)(a2 + 8));
      break;
    case 6LL:
      result = (void *)firecracker::api_server::parsed_request::ParsedRequest::success_response_with_data(dest);
      break;
    case 7LL:
      *(_QWORD *)&v14 = 0LL;
      v15 = 0LL;
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v16);
      serde_core::ser::impls::<impl serde_core::ser::Serialize for &T>::serialize(
        src,
        *(_QWORD *)(a2 + 16),
        *(_QWORD *)(a2 + 24));
      core::result::Result<T,E>::unwrap(&v9, src, &off_3A3748);
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert(src, &v14, &v16, &v9);
      core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(src);
      *(_OWORD *)&src[1] = v14;
      src[3] = v15;
      LOBYTE(src[0]) = 5;
      firecracker::api_server::parsed_request::ParsedRequest::success_response_with_data(dest);
      result = (void *)core::ptr::drop_in_place<serde_json::value::Value>(src, src);
      break;
  }
  return result;
}