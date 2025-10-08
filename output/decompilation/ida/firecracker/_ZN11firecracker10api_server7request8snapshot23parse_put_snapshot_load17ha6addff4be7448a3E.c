__int64 __fastcall firecracker::api_server::request::snapshot::parse_put_snapshot_load(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // r14
  char v7; // bp
  char v8; // r12
  char v9; // al
  unsigned __int64 v10; // rcx
  char v11; // si
  __int128 v12; // xmm0
  const char *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  _BYTE v16[7]; // [rsp+0h] [rbp-198h]
  void *v17; // [rsp+8h] [rbp-190h]
  __int128 v18; // [rsp+10h] [rbp-188h] BYREF
  __m256i v19; // [rsp+20h] [rbp-178h]
  __m256i v20; // [rsp+40h] [rbp-158h]
  __int128 v21; // [rsp+60h] [rbp-138h]
  __int128 v22; // [rsp+70h] [rbp-128h]
  __int128 v23; // [rsp+80h] [rbp-118h]
  _OWORD v24[2]; // [rsp+90h] [rbp-108h] BYREF
  __m256i v25; // [rsp+B0h] [rbp-E8h] BYREF
  _BYTE v26[48]; // [rsp+D0h] [rbp-C8h]
  __int128 v27; // [rsp+100h] [rbp-98h]
  __int128 v28; // [rsp+110h] [rbp-88h]

  *(_QWORD *)&v18 = a2;
  *((_QWORD *)&v18 + 1) = a3;
  v19.m256i_i64[0] = 0LL;
  serde_json::de::from_trait(&v25, &v18);
  result = v25.m256i_i64[1];
  if ( __OFSUB__(-v25.m256i_i64[0], 1LL) )
  {
    *(_BYTE *)(a1 + 8) = 4;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)a1 = 1LL;
    return result;
  }
  v22 = v28;
  v21 = v27;
  v20 = *(__m256i *)&v26[16];
  *(_OWORD *)&v19.m256i_u64[2] = *(_OWORD *)v26;
  *(_OWORD *)v19.m256i_i8 = *(_OWORD *)&v25.m256i_u64[2];
  v18 = *(_OWORD *)v25.m256i_i8;
  v5 = *(_QWORD *)&v26[40];
  v6 = *(_QWORD *)&v26[16];
  if ( *(_QWORD *)&v26[40] != 0x8000000000000000LL )
  {
    if ( *(_QWORD *)&v26[16] == 0x8000000000000000LL )
    {
      v7 = BYTE8(v22);
      if ( BYTE8(v22) == 1 )
      {
        <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
          (char *)&vmm::logger::metrics::METRICS + 848,
          1LL);
        v17 = &unk_3830E;
      }
      else
      {
        v17 = 0LL;
      }
      v23 = v21;
      v9 = v22;
      *(_DWORD *)v16 = *(_DWORD *)((char *)&v22 + 1);
      *(_DWORD *)&v16[3] = DWORD1(v22);
      v8 = v7;
      v6 = 0x8000000000000000LL;
      v10 = v5;
      goto LABEL_11;
    }
    v13 = aTooManyFieldsE;
    v14 = 80LL;
LABEL_19:
    v15 = <serde_json::error::Error as serde_core::de::Error>::custom(v13, v14);
    *(_BYTE *)(a1 + 8) = 4;
    *(_QWORD *)(a1 + 16) = v15;
    *(_QWORD *)a1 = 1LL;
    return core::ptr::drop_in_place<vmm::vmm_config::snapshot::LoadSnapshotConfig>(&v18);
  }
  if ( *(_QWORD *)&v26[16] == 0x8000000000000000LL )
  {
    v13 = aMissingFieldEi;
    v14 = 66LL;
    goto LABEL_19;
  }
  <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
    (char *)&vmm::logger::metrics::METRICS + 848,
    1LL);
  v23 = *(_OWORD *)&v20.m256i_u64[1];
  v7 = BYTE8(v22);
  v8 = 1;
  v17 = &unk_3830E;
  v9 = 0;
  v10 = v6;
LABEL_11:
  v25.m256i_i64[3] = v19.m256i_i64[0];
  *(_OWORD *)&v25.m256i_u64[1] = v18;
  v11 = 1;
  if ( (v7 & 1) == 0 )
    v11 = BYTE9(v22);
  *(_OWORD *)&v26[32] = *(_OWORD *)&v19.m256i_u64[1];
  *(_QWORD *)&v27 = v19.m256i_i64[3];
  *(_QWORD *)v26 = v10;
  *(_OWORD *)&v26[8] = v23;
  v26[24] = v9;
  *(_DWORD *)&v26[25] = *(_DWORD *)v16;
  *(_DWORD *)&v26[28] = *(_DWORD *)&v16[3];
  BYTE8(v27) = v11;
  BYTE9(v27) = BYTE10(v22);
  v25.m256i_i64[0] = 19LL;
  result = firecracker::api_server::parsed_request::ParsedRequest::new_sync(v24, &v25);
  if ( v8 )
    result = firecracker::api_server::parsed_request::ParsingInfo::append_deprecation_message(v24, (__int64)v17, 82LL);
  v12 = v24[0];
  *(_OWORD *)(a1 + 24) = v24[1];
  *(_OWORD *)(a1 + 8) = v12;
  *(_QWORD *)a1 = 0LL;
  if ( v5 != 0x8000000000000000LL )
    return core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v6, v20.m256i_i64[1]);
  return result;
}