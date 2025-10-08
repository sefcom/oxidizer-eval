unsigned __int64 __fastcall firecracker::api_server::request::vsock::parse_put_vsock(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // r14
  unsigned __int64 result; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r13
  __int128 v10; // xmm0
  __int128 v11; // [rsp+0h] [rbp-168h]
  __int64 v12; // [rsp+10h] [rbp-158h]
  _QWORD v13[3]; // [rsp+18h] [rbp-150h] BYREF
  __int64 v14; // [rsp+30h] [rbp-138h] BYREF
  __int64 v15; // [rsp+38h] [rbp-130h]
  __int64 v16; // [rsp+40h] [rbp-128h]
  unsigned __int64 v17; // [rsp+48h] [rbp-120h]
  __int128 v18; // [rsp+50h] [rbp-118h]
  __int64 v19; // [rsp+60h] [rbp-108h]
  _OWORD v20[2]; // [rsp+68h] [rbp-100h] BYREF
  __int64 v21; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v22; // [rsp+90h] [rbp-D8h]
  __int64 v23; // [rsp+98h] [rbp-D0h]
  __int64 v24; // [rsp+A0h] [rbp-C8h]
  unsigned __int64 v25; // [rsp+A8h] [rbp-C0h]
  __int128 v26; // [rsp+B0h] [rbp-B8h]
  __int64 v27; // [rsp+C0h] [rbp-A8h]

  v4 = 1LL;
  <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
    (char *)&vmm::logger::metrics::METRICS + 544,
    1LL);
  v13[0] = a2;
  v13[1] = a3;
  v13[2] = 0LL;
  serde_json::de::from_trait(&v21, v13);
  core::result::Result<T,E>::inspect_err(&v14, &v21);
  v5 = v14;
  v6 = v15;
  result = -v14;
  if ( __OFSUB__(-v14, 1LL) )
  {
    *(_BYTE *)(a1 + 8) = 4;
    *(_QWORD *)(a1 + 16) = v6;
  }
  else
  {
    v8 = v16;
    v9 = v17;
    v11 = v18;
    v12 = v19;
    if ( v17 == 0x8000000000000000LL )
    {
      v22 = v14;
      v23 = v15;
      v24 = v16;
      v25 = 0x8000000000000000LL;
      v26 = v18;
      v27 = v19;
      v21 = 27LL;
      result = firecracker::api_server::parsed_request::ParsedRequest::new_sync(v20, &v21);
    }
    else
    {
      <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
        (char *)&vmm::logger::metrics::METRICS + 848,
        1LL);
      v22 = v5;
      v23 = v6;
      v24 = v8;
      v25 = v9;
      v26 = v11;
      v27 = v12;
      v21 = 27LL;
      firecracker::api_server::parsed_request::ParsedRequest::new_sync(v20, &v21);
      result = firecracker::api_server::parsed_request::ParsingInfo::append_deprecation_message(
                 v20,
                 (__int64)aPutVsockVsockI,
                 41LL);
    }
    v10 = v20[0];
    *(_OWORD *)(a1 + 24) = v20[1];
    *(_OWORD *)(a1 + 8) = v10;
    v4 = 0LL;
  }
  *(_QWORD *)a1 = v4;
  return result;
}