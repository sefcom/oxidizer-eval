unsigned __int64 __fastcall firecracker::api_server::request::mmds::parse_patch_mmds(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r12
  unsigned __int64 result; // rax
  char v6; // [rsp+8h] [rbp-110h] BYREF
  _BYTE v7[7]; // [rsp+9h] [rbp-10Fh]
  unsigned __int64 v8; // [rsp+10h] [rbp-108h]
  __int128 v9; // [rsp+18h] [rbp-100h]
  _QWORD v10[3]; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v11; // [rsp+40h] [rbp-D8h] BYREF
  char v12; // [rsp+48h] [rbp-D0h]
  _BYTE v13[7]; // [rsp+49h] [rbp-CFh]
  unsigned __int64 v14; // [rsp+50h] [rbp-C8h]
  __int128 v15; // [rsp+58h] [rbp-C0h]

  v4 = 1LL;
  <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
    (char *)&vmm::logger::metrics::METRICS + 96,
    1LL);
  v10[0] = a2;
  v10[1] = a3;
  v10[2] = 0LL;
  serde_json::de::from_trait(&v11, v10);
  core::result::Result<T,E>::inspect_err(&v6, &v11);
  if ( v6 == 6 )
  {
    result = v8;
    *((_BYTE *)a1 + 8) = 4;
    a1[2] = result;
  }
  else
  {
    *(_DWORD *)&v13[3] = *(_DWORD *)&v7[3];
    *(_DWORD *)v13 = *(_DWORD *)v7;
    v15 = v9;
    v12 = v6;
    v14 = v8;
    v11 = 20LL;
    result = firecracker::api_server::parsed_request::ParsedRequest::new_sync(a1 + 1, &v11);
    v4 = 0LL;
  }
  *a1 = v4;
  return result;
}