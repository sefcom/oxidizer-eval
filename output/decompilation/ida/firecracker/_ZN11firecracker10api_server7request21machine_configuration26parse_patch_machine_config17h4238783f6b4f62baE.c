__int64 __fastcall firecracker::api_server::request::machine_configuration::parse_patch_machine_config(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r12
  __int128 v8; // xmm0
  _QWORD v9[3]; // [rsp+0h] [rbp-128h] BYREF
  __int64 v10; // [rsp+18h] [rbp-110h] BYREF
  __int64 v11; // [rsp+20h] [rbp-108h]
  __int64 v12; // [rsp+28h] [rbp-100h]
  _OWORD v13[2]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v14; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-D0h]
  __int64 v16; // [rsp+60h] [rbp-C8h]
  __int64 v17; // [rsp+68h] [rbp-C0h]

  <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
    (char *)&vmm::logger::metrics::METRICS + 64,
    1LL);
  v14 = a2;
  v15 = a3;
  v16 = 0LL;
  serde_json::de::from_trait(v9, &v14);
  result = core::result::Result<T,E>::inspect_err(&v10, v9);
  v5 = v10;
  v6 = v11;
  if ( v10 == 2 )
  {
    *(_BYTE *)(a1 + 8) = 4;
    *(_QWORD *)(a1 + 16) = v6;
    *(_QWORD *)a1 = 1LL;
  }
  else
  {
    v7 = v12;
    v9[0] = v10;
    v9[1] = v11;
    v9[2] = v12;
    if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD *))vmm::vmm_config::machine_config::MachineConfigUpdate::is_empty)(v9) )
    {
      return firecracker::api_server::parsed_request::method_to_error(a1);
    }
    else
    {
      if ( (v7 & 0xFF0000000000LL) == 0x60000000000LL )
      {
        v15 = v5;
        v16 = v6;
        v17 = v7;
        v14 = 35LL;
        result = firecracker::api_server::parsed_request::ParsedRequest::new_sync(v13, &v14);
      }
      else
      {
        <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
          (char *)&vmm::logger::metrics::METRICS + 848,
          1LL);
        v15 = v5;
        v16 = v6;
        v17 = v7;
        v14 = 35LL;
        firecracker::api_server::parsed_request::ParsedRequest::new_sync(v13, &v14);
        result = firecracker::api_server::parsed_request::ParsingInfo::append_deprecation_message(
                   v13,
                   (__int64)aPatchMachineCo,
                   56LL);
      }
      v8 = v13[0];
      *(_OWORD *)(a1 + 24) = v13[1];
      *(_OWORD *)(a1 + 8) = v8;
      *(_QWORD *)a1 = 0LL;
    }
  }
  return result;
}