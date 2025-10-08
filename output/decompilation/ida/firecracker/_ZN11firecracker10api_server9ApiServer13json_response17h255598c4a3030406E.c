void *__fastcall firecracker::api_server::ApiServer::json_response(void *dest, unsigned int a2, __int64 a3)
{
  _BYTE v5[24]; // [rsp+0h] [rbp-C8h] BYREF
  _BYTE src[176]; // [rsp+18h] [rbp-B0h] BYREF

  micro_http::response::Response::new(src, 1LL, a2);
  <T as core::convert::Into<U>>::into(v5, a3);
  micro_http::response::Response::set_body(src, v5);
  return memcpy(dest, src, 0x90uLL);
}