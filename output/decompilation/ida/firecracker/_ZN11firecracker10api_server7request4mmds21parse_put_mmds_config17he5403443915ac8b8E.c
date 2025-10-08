__int64 __fastcall firecracker::api_server::request::mmds::parse_put_mmds_config(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  char v5; // bp
  __int128 v6; // xmm0
  __int64 v7; // [rsp+0h] [rbp-128h] BYREF
  __int64 v8; // [rsp+8h] [rbp-120h]
  __int64 v9; // [rsp+10h] [rbp-118h]
  char v10; // [rsp+18h] [rbp-110h]
  _BYTE v11[7]; // [rsp+19h] [rbp-10Fh]
  _QWORD v12[3]; // [rsp+20h] [rbp-108h] BYREF
  _OWORD v13[2]; // [rsp+38h] [rbp-F0h] BYREF
  _QWORD v14[4]; // [rsp+58h] [rbp-D0h] BYREF
  char v15; // [rsp+78h] [rbp-B0h]
  _BYTE v16[7]; // [rsp+79h] [rbp-AFh]

  v12[0] = a2;
  v12[1] = a3;
  v12[2] = 0LL;
  serde_json::de::from_trait(v14, v12);
  core::result::Result<T,E>::inspect_err(&v7, v14);
  v3 = v8;
  if ( __OFSUB__(-v7, 1LL) )
  {
    *(_BYTE *)(a1 + 8) = 4;
    *(_QWORD *)(a1 + 16) = v3;
    result = 1LL;
  }
  else
  {
    v5 = v10;
    *(_DWORD *)&v16[3] = *(_DWORD *)&v11[3];
    *(_DWORD *)v16 = *(_DWORD *)v11;
    v14[1] = v7;
    v14[2] = v8;
    v14[3] = v9;
    v15 = v10;
    v14[0] = 26LL;
    firecracker::api_server::parsed_request::ParsedRequest::new_sync(v13, v14);
    if ( (v5 & 1) == 0 )
    {
      <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
        (char *)&vmm::logger::metrics::METRICS + 848,
        1LL);
      firecracker::api_server::parsed_request::ParsingInfo::append_deprecation_message(
        v13,
        (__int64)aPutMmdsConfigV,
        51LL);
    }
    v6 = v13[0];
    *(_OWORD *)(a1 + 24) = v13[1];
    *(_OWORD *)(a1 + 8) = v6;
    result = 0LL;
  }
  *(_QWORD *)a1 = result;
  return result;
}