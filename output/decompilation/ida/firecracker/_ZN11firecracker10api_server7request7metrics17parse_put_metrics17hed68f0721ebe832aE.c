unsigned __int64 __fastcall firecracker::api_server::request::metrics::parse_put_metrics(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r12
  unsigned __int64 result; // rax
  __int64 v6; // [rsp+0h] [rbp-108h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-100h]
  __int64 v8; // [rsp+10h] [rbp-F8h]
  __int64 v9; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v10; // [rsp+20h] [rbp-E8h]
  unsigned __int64 v11; // [rsp+28h] [rbp-E0h]
  __int64 v12; // [rsp+30h] [rbp-D8h]
  _BYTE v13[56]; // [rsp+D0h] [rbp-38h] BYREF

  v4 = 1LL;
  <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
    (char *)&vmm::logger::metrics::METRICS + 448,
    1LL);
  v9 = a2;
  v10 = a3;
  v11 = 0LL;
  serde_json::de::from_trait(v13, &v9);
  core::result::Result<T,E>::inspect_err(&v6, v13);
  result = v7;
  if ( __OFSUB__(-v6, 1LL) )
  {
    *((_BYTE *)a1 + 8) = 4;
    a1[2] = result;
  }
  else
  {
    v10 = v6;
    v11 = v7;
    v12 = v8;
    v9 = 6LL;
    result = firecracker::api_server::parsed_request::ParsedRequest::new_sync(a1 + 1, &v9);
    v4 = 0LL;
  }
  *a1 = v4;
  return result;
}