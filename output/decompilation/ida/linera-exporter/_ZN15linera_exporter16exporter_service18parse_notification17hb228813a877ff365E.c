__int64 __fastcall linera_exporter::exporter_service::parse_notification(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rdx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v19; // [rsp+0h] [rbp-138h] BYREF
  _BYTE v20[56]; // [rsp+10h] [rbp-128h]
  __int64 v21; // [rsp+48h] [rbp-F0h] BYREF
  _BYTE v22[48]; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v23; // [rsp+80h] [rbp-B8h]
  __int128 v24; // [rsp+90h] [rbp-A8h]
  __int128 v25; // [rsp+A0h] [rbp-98h]
  __int128 v26; // [rsp+B0h] [rbp-88h]
  __int128 v27; // [rsp+C0h] [rbp-78h]
  __int64 v28; // [rsp+D8h] [rbp-60h] BYREF
  __int128 v29; // [rsp+E0h] [rbp-58h]
  __int128 v30; // [rsp+F0h] [rbp-48h]
  __int128 v31; // [rsp+100h] [rbp-38h]

  v3 = 0x8000000000000010LL;
  v4 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)&v19 = 0x8000000000000010LL;
  if ( v4 == 0x8000000000000000LL )
  {
    v5 = *((_QWORD *)&v19 + 1);
LABEL_3:
    *(_QWORD *)(a1 + 8) = v3;
    *(_QWORD *)(a1 + 16) = v5;
    *(_QWORD *)a1 = 1LL;
    return core::ptr::drop_in_place<alloc::vec::Vec<u8>>(a2);
  }
  core::ptr::drop_in_place<linera_exporter::common::BadNotificationKind>(&v19);
  v29 = *(_OWORD *)(a2 + 32);
  v28 = v4;
  linera_rpc::grpc::conversions::<impl core::convert::TryFrom<linera_rpc::grpc::api::ChainId> for linera_base::identifiers::ChainId>::try_from(
    &v21,
    &v28);
  v6 = v21;
  v24 = *(_OWORD *)v22;
  v25 = *(_OWORD *)&v22[16];
  if ( v21 != 0x8000000000000010LL )
  {
    v11 = *(_QWORD *)&v22[32];
    v12 = v24;
    v30 = v24;
    v31 = v25;
    *(_OWORD *)(a1 + 32) = v25;
    *(_OWORD *)(a1 + 16) = v12;
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 48) = v11;
    *(_QWORD *)a1 = 1LL;
    return core::ptr::drop_in_place<alloc::vec::Vec<u8>>(a2);
  }
  v26 = v24;
  v27 = v25;
  v7 = *(_QWORD *)(a2 + 8);
  bincode::internal::deserialize_seed(&v19, v7, *(_QWORD *)(a2 + 16));
  v10 = v19;
  if ( (_QWORD)v19 == 4LL )
  {
    v5 = *((_QWORD *)&v19 + 1);
    v3 = 0x8000000000000011LL;
    goto LABEL_3;
  }
  v13 = *((_QWORD *)&v19 + 1);
  v14 = *(_QWORD *)v20;
  *(_OWORD *)&v22[16] = *(_OWORD *)&v20[8];
  *(_OWORD *)&v22[32] = *(_OWORD *)&v20[24];
  v23 = *(_OWORD *)&v20[40];
  v21 = v19;
  *(_OWORD *)v22 = __PAIR128__(*(unsigned __int64 *)v20, *((unsigned __int64 *)&v19 + 1));
  if ( (_QWORD)v19 )
  {
    *(_QWORD *)(a1 + 8) = 0x8000000000000011LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)a1 = 1LL;
    core::ptr::drop_in_place<linera_core::worker::Reason>(
      &v21,
      v7,
      v14,
      v10,
      v8,
      v9,
      v19,
      *((_QWORD *)&v19 + 1),
      *(_QWORD *)v20,
      *(_QWORD *)&v20[8],
      *(_QWORD *)&v20[16],
      *(_QWORD *)&v20[24],
      *(_QWORD *)&v20[32],
      *(_QWORD *)&v20[40]);
  }
  else
  {
    v15 = *(_OWORD *)&v22[8];
    *(_OWORD *)v20 = *(_OWORD *)&v22[24];
    v16 = *(_OWORD *)&v22[24];
    v19 = *(_OWORD *)&v22[8];
    v17 = v26;
    *(_OWORD *)&v20[16] = v26;
    *(_OWORD *)&v20[32] = v27;
    *(_OWORD *)(a1 + 56) = v27;
    *(_OWORD *)(a1 + 40) = v17;
    *(_OWORD *)(a1 + 24) = v16;
    *(_OWORD *)(a1 + 8) = v15;
    *(_QWORD *)(a1 + 72) = v13;
    *(_QWORD *)a1 = 0LL;
    core::ptr::drop_in_place<linera_core::worker::Reason>(
      &v21,
      v7,
      v14,
      &v22[8],
      v8,
      v9,
      v19,
      *((_QWORD *)&v19 + 1),
      *(_QWORD *)v20,
      *(_QWORD *)&v20[8],
      *(_QWORD *)&v20[16],
      *(_QWORD *)&v20[24],
      *(_QWORD *)&v20[32],
      *(_QWORD *)&v20[40]);
  }
  return core::ptr::drop_in_place<alloc::vec::Vec<u8>>(a2);
}