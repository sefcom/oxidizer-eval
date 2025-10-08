unsigned __int64 __fastcall firecracker::api_server::request::net::parse_patch_net(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 result; // rax
  __int64 v9; // r13
  __int64 v10; // rbp
  __int64 (__fastcall *v11)(); // r15
  int v12; // ecx
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // [rsp+0h] [rbp-258h] BYREF
  __int64 v21; // [rsp+8h] [rbp-250h]
  __int64 v22; // [rsp+10h] [rbp-248h]
  _QWORD v23[2]; // [rsp+18h] [rbp-240h] BYREF
  __int128 v24; // [rsp+28h] [rbp-230h] BYREF
  __int64 v25; // [rsp+38h] [rbp-220h]
  _OWORD v26[11]; // [rsp+40h] [rbp-218h] BYREF
  char *v27; // [rsp+F8h] [rbp-160h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+100h] [rbp-158h]
  _QWORD src[17]; // [rsp+108h] [rbp-150h] BYREF
  _QWORD v30[25]; // [rsp+190h] [rbp-C8h] BYREF

  <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
    (char *)&vmm::logger::metrics::METRICS + 32,
    1LL);
  if ( !a4 )
  {
    result = <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
               (char *)&vmm::logger::metrics::METRICS + 32,
               1LL);
    *(_BYTE *)(a1 + 8) = 0;
    goto LABEL_7;
  }
  firecracker::api_server::parsed_request::checked_id((__int64)v26, a4, a5);
  result = LOBYTE(v26[0]);
  if ( LOBYTE(v26[0]) != 5 )
  {
    v12 = *(_DWORD *)((char *)v26 + 1);
    *(_DWORD *)(a1 + 12) = DWORD1(v26[0]);
    *(_DWORD *)(a1 + 9) = v12;
    v13 = *((_QWORD *)&v26[0] + 1);
    v14 = v26[1];
    *(_BYTE *)(a1 + 8) = result;
    *(_QWORD *)(a1 + 16) = v13;
    *(_OWORD *)(a1 + 24) = v14;
    goto LABEL_7;
  }
  v9 = *((_QWORD *)&v26[0] + 1);
  v10 = *(_QWORD *)&v26[1];
  v23[0] = *((_QWORD *)&v26[0] + 1);
  v23[1] = *(_QWORD *)&v26[1];
  v20 = a2;
  v21 = a3;
  v22 = 0LL;
  serde_json::de::from_trait(v26);
  result = core::result::Result<T,E>::inspect_err(&v27, v26);
  v11 = v28;
  if ( v27 == &byte_4 )
  {
    *(_BYTE *)(a1 + 8) = 4;
    *(_QWORD *)(a1 + 16) = v11;
LABEL_7:
    *(_QWORD *)a1 = 1LL;
    return result;
  }
  memcpy(&v30[2], src, 0x88uLL);
  v30[0] = v27;
  v30[1] = v28;
  v15 = v30[17];
  v16 = v30[18];
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, v30[17], v30[18]) )
  {
    memcpy((char *)v26 + 8, v30, 0x98uLL);
    *(_QWORD *)&v26[0] = 34LL;
    result = firecracker::api_server::parsed_request::ParsedRequest::new_sync((_QWORD *)(a1 + 8), v26);
    *(_QWORD *)a1 = 0LL;
  }
  else
  {
    <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
      (char *)&vmm::logger::metrics::METRICS + 32,
      1LL);
    v20 = v15;
    v21 = v16;
    v27 = (char *)v23;
    v28 = <&T as core::fmt::Display>::fmt;
    src[0] = &v20;
    src[1] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v26[0] = &off_3A3870;
    *((_QWORD *)&v26[0] + 1) = 3LL;
    *(_QWORD *)&v26[2] = 0LL;
    *(_QWORD *)&v26[1] = &v27;
    *((_QWORD *)&v26[1] + 1) = 2LL;
    core::option::Option<T>::map_or_else(&v24, 0LL, v17, v26);
    *(_OWORD *)((char *)v26 + 6) = v24;
    *(_QWORD *)((char *)&v26[1] + 6) = v25;
    *(_WORD *)(a1 + 8) = 769;
    v18 = *(_QWORD *)((char *)v26 + 14);
    v19 = *(_QWORD *)((char *)&v26[1] + 6);
    *(_OWORD *)(a1 + 10) = v26[0];
    *(_QWORD *)(a1 + 24) = v18;
    *(_QWORD *)(a1 + 32) = v19;
    *(_QWORD *)a1 = 1LL;
    return core::ptr::drop_in_place<vmm::vmm_config::net::NetworkInterfaceUpdateConfig>(v30);
  }
  return result;
}