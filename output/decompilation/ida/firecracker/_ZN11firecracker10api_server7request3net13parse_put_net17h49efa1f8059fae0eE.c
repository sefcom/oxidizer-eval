unsigned __int64 __fastcall firecracker::api_server::request::net::parse_put_net(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 result; // rax
  __int128 v9; // kr00_16
  __int64 (__fastcall *v10)(); // r14
  int v11; // ecx
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int64 v14; // rbp
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // [rsp+0h] [rbp-298h] BYREF
  __int64 v20; // [rsp+8h] [rbp-290h]
  __int64 v21; // [rsp+10h] [rbp-288h]
  __int128 v22; // [rsp+18h] [rbp-280h] BYREF
  __int128 v23; // [rsp+28h] [rbp-270h] BYREF
  __int64 v24; // [rsp+38h] [rbp-260h]
  __m256i v25; // [rsp+40h] [rbp-258h] BYREF
  __int64 v26; // [rsp+60h] [rbp-238h]
  char *v27; // [rsp+F8h] [rbp-1A0h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+100h] [rbp-198h]
  _QWORD src[21]; // [rsp+108h] [rbp-190h] BYREF
  _QWORD v30[2]; // [rsp+1B0h] [rbp-E8h] BYREF
  _QWORD dest[21]; // [rsp+1C0h] [rbp-D8h] BYREF

  <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
    (char *)&vmm::logger::metrics::METRICS + 480,
    1LL);
  if ( !a4 )
  {
    result = <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
               (char *)&vmm::logger::metrics::METRICS + 496,
               1LL);
    *(_BYTE *)(a1 + 8) = 0;
    goto LABEL_7;
  }
  firecracker::api_server::parsed_request::checked_id((__int64)&v25, a4, a5);
  result = v25.m256i_u8[0];
  if ( v25.m256i_i8[0] != 5 )
  {
    v11 = *(__int32 *)((char *)v25.m256i_i32 + 1);
    *(_DWORD *)(a1 + 12) = v25.m256i_i32[1];
    *(_DWORD *)(a1 + 9) = v11;
    v12 = v25.m256i_i64[1];
    v13 = *(_OWORD *)&v25.m256i_u64[2];
    *(_BYTE *)(a1 + 8) = result;
    *(_QWORD *)(a1 + 16) = v12;
    *(_OWORD *)(a1 + 24) = v13;
    goto LABEL_7;
  }
  v9 = *(_OWORD *)&v25.m256i_u64[1];
  v22 = *(_OWORD *)&v25.m256i_u64[1];
  v19 = a2;
  v20 = a3;
  v21 = 0LL;
  serde_json::de::from_trait(&v25);
  result = core::result::Result<T,E>::inspect_err(&v27, &v25);
  v10 = v28;
  if ( v27 == &byte_4 )
  {
    *(_BYTE *)(a1 + 8) = 4;
    *(_QWORD *)(a1 + 16) = v10;
LABEL_7:
    *(_QWORD *)a1 = 1LL;
    return result;
  }
  memcpy(dest, src, sizeof(dest));
  v30[0] = v27;
  v30[1] = v28;
  v14 = dest[15];
  v15 = dest[16];
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                          v9,
                          *((_QWORD *)&v9 + 1),
                          dest[15],
                          dest[16]) )
  {
    result = firecracker::api_server::parsed_request::ParsedRequest::new_sync((_QWORD *)(a1 + 8), v30);
    *(_QWORD *)a1 = 0LL;
  }
  else
  {
    <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
      (char *)&vmm::logger::metrics::METRICS + 496,
      1LL);
    v19 = v14;
    v20 = v15;
    v27 = (char *)&v22;
    v28 = <&T as core::fmt::Display>::fmt;
    src[0] = &v19;
    src[1] = <&T as core::fmt::Display>::fmt;
    v25.m256i_i64[0] = (__int64)&off_3A3870;
    v25.m256i_i64[1] = 3LL;
    v26 = 0LL;
    v25.m256i_i64[2] = (__int64)&v27;
    v25.m256i_i64[3] = 2LL;
    core::option::Option<T>::map_or_else(&v23, 0LL, v16, &v25);
    *(_OWORD *)&v25.m256i_u16[3] = v23;
    *(__int64 *)((char *)&v25.m256i_i64[2] + 6) = v24;
    *(_WORD *)(a1 + 8) = 769;
    v17 = *(__int64 *)((char *)&v25.m256i_i64[1] + 6);
    v18 = *(__int64 *)((char *)&v25.m256i_i64[2] + 6);
    *(_OWORD *)(a1 + 10) = *(_OWORD *)v25.m256i_i8;
    *(_QWORD *)(a1 + 24) = v17;
    *(_QWORD *)(a1 + 32) = v18;
    *(_QWORD *)a1 = 1LL;
    return core::ptr::drop_in_place<vmm::vmm_config::net::NetworkInterfaceConfig>(v30);
  }
  return result;
}