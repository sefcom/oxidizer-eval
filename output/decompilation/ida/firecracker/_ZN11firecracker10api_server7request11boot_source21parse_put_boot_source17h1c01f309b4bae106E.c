unsigned __int64 __fastcall firecracker::api_server::request::boot_source::parse_put_boot_source(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r12
  unsigned __int64 result; // rax
  _QWORD v6[3]; // [rsp+0h] [rbp-138h] BYREF
  __int64 v7; // [rsp+18h] [rbp-120h] BYREF
  unsigned __int64 v8; // [rsp+20h] [rbp-118h]
  __int128 v9; // [rsp+28h] [rbp-110h]
  __int128 v10; // [rsp+38h] [rbp-100h]
  __int128 v11; // [rsp+48h] [rbp-F0h]
  __int64 v12; // [rsp+58h] [rbp-E0h]
  _QWORD v13[3]; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v14; // [rsp+78h] [rbp-C0h]
  __int128 v15; // [rsp+88h] [rbp-B0h]
  __int128 v16; // [rsp+98h] [rbp-A0h]
  __int64 v17; // [rsp+A8h] [rbp-90h]

  v4 = 1LL;
  <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
    (char *)&vmm::logger::metrics::METRICS + 288,
    1LL);
  v6[0] = a2;
  v6[1] = a3;
  v6[2] = 0LL;
  ((void (__fastcall *)(_QWORD *, _QWORD *))serde_json::de::from_trait)(v13, v6);
  core::result::Result<T,E>::inspect_err(&v7, v13);
  result = v8;
  if ( __OFSUB__(-v7, 1LL) )
  {
    *((_BYTE *)a1 + 8) = 4;
    a1[2] = result;
  }
  else
  {
    v17 = v12;
    v16 = v11;
    v15 = v10;
    v14 = v9;
    v13[1] = v7;
    v13[2] = v8;
    v13[0] = 4LL;
    result = firecracker::api_server::parsed_request::ParsedRequest::new_sync(a1 + 1, v13);
    v4 = 0LL;
  }
  *a1 = v4;
  return result;
}