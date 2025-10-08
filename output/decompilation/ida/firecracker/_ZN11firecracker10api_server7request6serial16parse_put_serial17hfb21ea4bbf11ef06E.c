unsigned __int64 __fastcall firecracker::api_server::request::serial::parse_put_serial(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v4; // r12
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // [rsp+8h] [rbp-F0h] BYREF
  unsigned __int64 v8; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v9; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v10; // [rsp+20h] [rbp-D8h]
  _BYTE v11[56]; // [rsp+C0h] [rbp-38h] BYREF

  v4 = 1LL;
  <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
    (char *)&vmm::logger::metrics::METRICS + 576,
    1LL);
  v7 = a2;
  v8 = a3;
  v9 = 0LL;
  serde_json::de::from_trait(v11, &v7);
  core::result::Result<T,E>::inspect_err(&v7, v11);
  result = v8;
  if ( v7 == 0x8000000000000001LL )
  {
    *((_BYTE *)a1 + 8) = 4;
    a1[2] = result;
  }
  else
  {
    v6 = v9;
    v8 = v7;
    v9 = result;
    v10 = v6;
    v7 = 7LL;
    result = firecracker::api_server::parsed_request::ParsedRequest::new_sync(a1 + 1, &v7);
    v4 = 0LL;
  }
  *a1 = v4;
  return result;
}