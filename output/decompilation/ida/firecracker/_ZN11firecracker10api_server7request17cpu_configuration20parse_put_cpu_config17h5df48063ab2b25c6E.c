unsigned __int64 __fastcall firecracker::api_server::request::cpu_configuration::parse_put_cpu_config(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // r14
  unsigned __int64 result; // rax
  __int64 v7; // [rsp+8h] [rbp-120h] BYREF
  __int64 v8; // [rsp+10h] [rbp-118h]
  __int64 v9; // [rsp+18h] [rbp-110h]
  __int128 v10; // [rsp+20h] [rbp-108h]
  __int128 v11; // [rsp+30h] [rbp-F8h]
  __int128 v12; // [rsp+40h] [rbp-E8h]
  _QWORD v13[2]; // [rsp+50h] [rbp-D8h] BYREF
  char v14; // [rsp+60h] [rbp-C8h]
  _BYTE v15[7]; // [rsp+61h] [rbp-C7h]
  __int64 v16; // [rsp+68h] [rbp-C0h]
  __int128 v17; // [rsp+70h] [rbp-B8h]
  __int128 v18; // [rsp+80h] [rbp-A8h]
  __int128 v19; // [rsp+90h] [rbp-98h]

  v4 = 1LL;
  <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
    (char *)&vmm::logger::metrics::METRICS + 416,
    1LL);
  vmm::cpu_config::templates::<impl core::convert::TryFrom<&[u8]> for vmm::cpu_config::x86_64::custom_cpu_template::CustomCpuTemplate>::try_from(
    &v7,
    a2,
    a3);
  if ( __OFSUB__(-v7, 1LL) )
  {
    v5 = v8;
    result = <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
               (char *)&vmm::logger::metrics::METRICS + 432,
               1LL);
    *((_BYTE *)a1 + 8) = 4;
    a1[2] = v5;
  }
  else
  {
    *(_DWORD *)v15 = *(_DWORD *)((char *)&v8 + 1);
    *(_DWORD *)&v15[3] = HIDWORD(v8);
    v17 = v10;
    v18 = v11;
    v19 = v12;
    v13[1] = v7;
    v14 = v8;
    v16 = v9;
    v13[0] = 23LL;
    result = firecracker::api_server::parsed_request::ParsedRequest::new_sync(a1 + 1, v13);
    v4 = 0LL;
  }
  *a1 = v4;
  return result;
}