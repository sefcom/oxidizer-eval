unsigned __int64 __fastcall firecracker::api_server::request::machine_configuration::parse_put_machine_config(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r13
  unsigned __int64 result; // rax
  __int128 v6; // xmm0
  __int128 v7; // [rsp+8h] [rbp-1E0h] BYREF
  __int64 v8; // [rsp+18h] [rbp-1D0h]
  _QWORD v9[3]; // [rsp+20h] [rbp-1C8h] BYREF
  _OWORD v10[2]; // [rsp+38h] [rbp-1B0h] BYREF
  _QWORD v11[2]; // [rsp+58h] [rbp-190h] BYREF
  __int128 v12; // [rsp+68h] [rbp-180h]
  __int128 v13; // [rsp+78h] [rbp-170h]
  __int128 v14; // [rsp+88h] [rbp-160h]
  __int128 v15; // [rsp+98h] [rbp-150h]
  __int64 v16; // [rsp+A8h] [rbp-140h]
  __int64 v17; // [rsp+B0h] [rbp-138h] BYREF
  unsigned __int64 v18; // [rsp+B8h] [rbp-130h]
  __int128 v19; // [rsp+C0h] [rbp-128h]
  __int128 v20; // [rsp+D0h] [rbp-118h]
  __int128 v21; // [rsp+E0h] [rbp-108h]
  __int128 v22; // [rsp+F0h] [rbp-F8h]
  __int64 v23; // [rsp+100h] [rbp-E8h]
  __int64 v24; // [rsp+108h] [rbp-E0h] BYREF
  __int128 v25; // [rsp+110h] [rbp-D8h]
  __int64 v26; // [rsp+120h] [rbp-C8h]

  v4 = 1LL;
  <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
    (char *)&vmm::logger::metrics::METRICS + 384,
    1LL);
  v9[0] = a2;
  v9[1] = a3;
  v9[2] = 0LL;
  serde_json::de::from_trait(&v24, v9);
  core::result::Result<T,E>::inspect_err(&v17, &v24);
  result = v18;
  if ( v17 == 0x8000000000000002LL )
  {
    *(_BYTE *)(a1 + 8) = 4;
    *(_QWORD *)(a1 + 16) = result;
  }
  else
  {
    v16 = v23;
    v15 = v22;
    v14 = v21;
    v13 = v20;
    v12 = v19;
    v11[0] = v17;
    v11[1] = v18;
    if ( v17 == 0x8000000000000001LL )
    {
      <vmm::vmm_config::machine_config::MachineConfigUpdate as core::convert::From<vmm::vmm_config::machine_config::MachineConfig>>::from(
        &v7,
        v11);
      v26 = v8;
      v25 = v7;
      v24 = 35LL;
      result = firecracker::api_server::parsed_request::ParsedRequest::new_sync(v10, &v24);
    }
    else
    {
      <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
        (char *)&vmm::logger::metrics::METRICS + 848,
        1LL);
      <vmm::vmm_config::machine_config::MachineConfigUpdate as core::convert::From<vmm::vmm_config::machine_config::MachineConfig>>::from(
        &v7,
        v11);
      v26 = v8;
      v25 = v7;
      v24 = 35LL;
      firecracker::api_server::parsed_request::ParsedRequest::new_sync(v10, &v24);
      result = firecracker::api_server::parsed_request::ParsingInfo::append_deprecation_message(
                 v10,
                 (__int64)aPutMachineConf,
                 54LL);
    }
    v6 = v10[0];
    *(_OWORD *)(a1 + 24) = v10[1];
    *(_OWORD *)(a1 + 8) = v6;
    v4 = 0LL;
  }
  *(_QWORD *)a1 = v4;
  return result;
}