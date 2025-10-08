unsigned __int64 __fastcall firecracker::api_server::request::logger::parse_put_logger(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r12
  unsigned __int64 result; // rax
  __int64 v6; // [rsp+0h] [rbp-148h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-140h]
  __int128 v8; // [rsp+10h] [rbp-138h]
  __int128 v9; // [rsp+20h] [rbp-128h]
  __int64 v10; // [rsp+30h] [rbp-118h]
  __int64 v11; // [rsp+38h] [rbp-110h] BYREF
  __int64 v12; // [rsp+40h] [rbp-108h]
  unsigned __int64 v13; // [rsp+48h] [rbp-100h]
  __int128 v14; // [rsp+50h] [rbp-F8h]
  __int128 v15; // [rsp+60h] [rbp-E8h]
  __int64 v16; // [rsp+70h] [rbp-D8h]
  _BYTE v17[88]; // [rsp+F0h] [rbp-58h] BYREF

  v4 = 1LL;
  <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
    (char *)&vmm::logger::metrics::METRICS + 352,
    1LL);
  v11 = a2;
  v12 = a3;
  v13 = 0LL;
  serde_json::de::from_trait(v17, &v11);
  core::result::Result<T,E>::inspect_err(&v6, v17);
  result = v7;
  if ( v6 == 0x8000000000000001LL )
  {
    *((_BYTE *)a1 + 8) = 4;
    a1[2] = result;
  }
  else
  {
    v16 = v10;
    v15 = v9;
    v14 = v8;
    v12 = v6;
    v13 = v7;
    v11 = 5LL;
    result = firecracker::api_server::parsed_request::ParsedRequest::new_sync(a1 + 1, &v11);
    v4 = 0LL;
  }
  *a1 = v4;
  return result;
}