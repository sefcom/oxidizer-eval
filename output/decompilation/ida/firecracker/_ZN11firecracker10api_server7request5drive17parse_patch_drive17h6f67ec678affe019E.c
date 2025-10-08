unsigned __int64 __fastcall firecracker::api_server::request::drive::parse_patch_drive(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 result; // rax
  __int64 v9; // r15
  __int64 v10; // r12
  int v11; // ecx
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD v16[3]; // [rsp+8h] [rbp-1E0h] BYREF
  __int128 v17; // [rsp+20h] [rbp-1C8h] BYREF
  __int128 v18; // [rsp+30h] [rbp-1B8h]
  __int128 v19; // [rsp+40h] [rbp-1A8h]
  __int128 v20; // [rsp+50h] [rbp-198h]
  __int128 v21; // [rsp+60h] [rbp-188h]
  __int128 v22; // [rsp+70h] [rbp-178h]
  __int128 v23; // [rsp+80h] [rbp-168h]
  _BYTE v24[40]; // [rsp+90h] [rbp-158h] BYREF
  __int128 v25; // [rsp+B8h] [rbp-130h]
  __int128 v26; // [rsp+C8h] [rbp-120h]
  __int128 v27; // [rsp+D8h] [rbp-110h]
  __int128 v28; // [rsp+E8h] [rbp-100h]
  __int128 v29; // [rsp+F8h] [rbp-F0h]
  __int128 v30; // [rsp+148h] [rbp-A0h] BYREF
  __int128 v31; // [rsp+158h] [rbp-90h]
  __int128 v32; // [rsp+168h] [rbp-80h]
  __int128 v33; // [rsp+178h] [rbp-70h]
  __int128 v34; // [rsp+188h] [rbp-60h]
  __int128 v35; // [rsp+198h] [rbp-50h]
  __int128 v36; // [rsp+1A8h] [rbp-40h]

  <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&vmm::logger::metrics::METRICS, 1LL);
  if ( !a4 )
  {
    result = <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
               (char *)&vmm::logger::metrics::METRICS + 16,
               1LL);
    *(_BYTE *)(a1 + 8) = 0;
    goto LABEL_7;
  }
  firecracker::api_server::parsed_request::checked_id((__int64)v24, a4, a5);
  result = v24[0];
  if ( v24[0] != 5 )
  {
    v11 = *(_DWORD *)&v24[1];
    *(_DWORD *)(a1 + 12) = *(_DWORD *)&v24[4];
    *(_DWORD *)(a1 + 9) = v11;
    v12 = *(_QWORD *)&v24[8];
    v13 = *(_OWORD *)&v24[16];
    *(_BYTE *)(a1 + 8) = result;
    *(_QWORD *)(a1 + 16) = v12;
    *(_OWORD *)(a1 + 24) = v13;
    goto LABEL_7;
  }
  v9 = *(_QWORD *)&v24[8];
  v10 = *(_QWORD *)&v24[16];
  v16[0] = a2;
  v16[1] = a3;
  v16[2] = 0LL;
  serde_json::de::from_trait(v24, v16);
  core::result::Result<T,E>::inspect_err(&v30, v24);
  result = *((_QWORD *)&v30 + 1);
  if ( (_QWORD)v30 == 4LL )
  {
    *(_BYTE *)(a1 + 8) = 4;
    *(_QWORD *)(a1 + 16) = result;
LABEL_7:
    *(_QWORD *)a1 = 1LL;
    return result;
  }
  v23 = v36;
  v22 = v35;
  v21 = v34;
  v20 = v33;
  v19 = v32;
  v18 = v31;
  v17 = v30;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, *((_QWORD *)&v34 + 1), v35) )
  {
    v29 = v23;
    v28 = v22;
    v27 = v21;
    v26 = v20;
    v25 = v19;
    *(_OWORD *)&v24[24] = v18;
    *(_OWORD *)&v24[8] = v17;
    *(_QWORD *)v24 = 33LL;
    result = firecracker::api_server::parsed_request::ParsedRequest::new_sync((_QWORD *)(a1 + 8), v24);
    *(_QWORD *)a1 = 0LL;
  }
  else
  {
    <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
      (char *)&vmm::logger::metrics::METRICS + 16,
      1LL);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v30);
    *(_QWORD *)&v24[22] = v31;
    *(_OWORD *)&v24[6] = v30;
    *(_WORD *)(a1 + 8) = 769;
    v14 = *(_QWORD *)&v24[14];
    v15 = *(_QWORD *)&v24[22];
    *(_OWORD *)(a1 + 10) = *(_OWORD *)v24;
    *(_QWORD *)(a1 + 24) = v14;
    *(_QWORD *)(a1 + 32) = v15;
    *(_QWORD *)a1 = 1LL;
    return core::ptr::drop_in_place<vmm::vmm_config::drive::BlockDeviceUpdateConfig>(&v17, aTheIdFromThePa);
  }
  return result;
}