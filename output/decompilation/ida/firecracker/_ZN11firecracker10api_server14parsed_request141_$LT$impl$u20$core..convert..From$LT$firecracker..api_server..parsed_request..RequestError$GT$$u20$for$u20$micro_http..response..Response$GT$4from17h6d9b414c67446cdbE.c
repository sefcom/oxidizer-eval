__int64 __fastcall firecracker::api_server::parsed_request::<impl core::convert::From<firecracker::api_server::parsed_request::RequestError> for micro_http::response::Response>::from(
        void *dest,
        _BYTE *a2,
        __int64 a3)
{
  unsigned int v4; // eax
  __int64 v5; // rsi
  _QWORD v7[2]; // [rsp+8h] [rbp-90h] BYREF
  _QWORD v8[6]; // [rsp+18h] [rbp-80h] BYREF
  _BYTE v9[24]; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v10[56]; // [rsp+60h] [rbp-38h] BYREF

  v7[0] = a2;
  v7[1] = <firecracker::api_server::parsed_request::RequestError as core::fmt::Display>::fmt;
  v8[0] = &unk_30B60;
  v8[1] = 1LL;
  v8[4] = 0LL;
  v8[2] = v7;
  v8[3] = 1LL;
  core::option::Option<T>::map_or_else(v10, 0LL, a3, v8);
  firecracker::api_server::ApiServer::json_fault_message(v9, v10);
  v4 = (unsigned __int8)a2[1];
  v5 = 3LL;
  if ( *a2 == 1 )
    v5 = v4;
  firecracker::api_server::ApiServer::json_response(dest);
  return core::ptr::drop_in_place<firecracker::api_server::parsed_request::RequestError>(a2, v5);
}