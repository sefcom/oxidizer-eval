void *__fastcall uu_hostname::uu_app(void *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rbx
  void *v26; // rbx
  _BYTE v28[712]; // [rsp+0h] [rbp-A78h] BYREF
  void *v29; // [rsp+2C8h] [rbp-7B0h]
  _OWORD dest[45]; // [rsp+2D0h] [rbp-7A8h] BYREF
  _OWORD src[37]; // [rsp+5A0h] [rbp-4D8h] BYREF
  _BYTE v32[588]; // [rsp+7F0h] [rbp-288h] BYREF
  char v33; // [rsp+A3Ch] [rbp-3Ch]
  __int16 v34; // [rsp+A3Dh] [rbp-3Bh]
  char v35; // [rsp+A3Fh] [rbp-39h]

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(v28, qword_E6888, qword_E6890);
  *(_QWORD *)&v28[608] = a0027;
  *(_QWORD *)&v28[616] = 6LL;
  memcpy(dest, v28, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v28, dest, aDisplayOrSetTh, 38LL);
  uucore::format_usage(src, aOptionHostname, 25LL);
  v1 = *(_QWORD *)&src[0];
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    dest[0] = *(_OWORD *)((char *)src + 8);
  v29 = a1;
  if ( *(_QWORD *)&v28[464] != 0x8000000000000000LL && *(_QWORD *)&v28[464] )
    _rust_dealloc(*(_QWORD *)&v28[472], *(_QWORD *)&v28[464], 1LL);
  *(_QWORD *)&v28[464] = v1;
  *(_OWORD *)&v28[472] = dest[0];
  memcpy(dest, v28, 0x2BCuLL);
  *(_QWORD *)((char *)&dest[43] + 12) = *(_QWORD *)&v28[700] | 0x8000000080LL;
  DWORD1(dest[44]) = *(_DWORD *)&v28[708];
  *(_OWORD *)&v28[120] = 0LL;
  *(_OWORD *)&v28[144] = 0LL;
  *(_OWORD *)&v28[168] = 0LL;
  *(_OWORD *)&v28[192] = 0LL;
  *(_OWORD *)&v28[216] = 0LL;
  *(_OWORD *)&v28[240] = 0LL;
  *(_OWORD *)&v28[264] = 0LL;
  *(_OWORD *)&v28[288] = 0LL;
  *(_OWORD *)&v28[312] = 0LL;
  *(_OWORD *)&v28[336] = 0LL;
  *(_OWORD *)&v28[360] = 0LL;
  *(_OWORD *)&v28[384] = 0LL;
  *(_OWORD *)&v28[408] = 0LL;
  *(_QWORD *)v28 = 0LL;
  *(_QWORD *)&v28[16] = 0LL;
  *(_QWORD *)&v28[40] = 0LL;
  *(_QWORD *)&v28[56] = 0LL;
  *(_QWORD *)&v28[80] = 5LL;
  *(_QWORD *)&v28[104] = 0LL;
  *(_QWORD *)&v28[112] = 8LL;
  *(_QWORD *)&v28[136] = 8LL;
  *(_QWORD *)&v28[160] = 8LL;
  *(_QWORD *)&v28[184] = 8LL;
  *(_QWORD *)&v28[208] = 8LL;
  *(_QWORD *)&v28[232] = 8LL;
  *(_QWORD *)&v28[256] = 8LL;
  *(_QWORD *)&v28[280] = 8LL;
  *(_QWORD *)&v28[304] = 8LL;
  *(_QWORD *)&v28[328] = 4LL;
  *(_QWORD *)&v28[352] = 8LL;
  *(_QWORD *)&v28[376] = 8LL;
  *(_QWORD *)&v28[400] = 8LL;
  *(_QWORD *)&v28[424] = 8LL;
  *(_QWORD *)&v28[432] = 0LL;
  *(_QWORD *)&v28[440] = 0x8000000000000000LL;
  *(_QWORD *)&v28[464] = 0x8000000000000000LL;
  *(_QWORD *)&v28[504] = 0x8000000000000001LL;
  *(_QWORD *)&v28[528] = aDomain;
  *(_QWORD *)&v28[536] = 6LL;
  *(_QWORD *)&v28[544] = aDomain;
  *(_QWORD *)&v28[552] = 6LL;
  *(_QWORD *)&v28[560] = 0LL;
  *(_QWORD *)&v28[576] = 0x11000000000064LL;
  *(_DWORD *)&v28[584] = 0;
  *(_WORD *)&v28[588] = 3337;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v28[128], 0LL, 4LL);
  v2 = *(_QWORD *)&v28[144];
  v3 = *(_QWORD *)&v28[136];
  v4 = 16LL * *(_QWORD *)&v28[144];
  *(_QWORD *)(*(_QWORD *)&v28[136] + v4) = aDomain;
  *(_QWORD *)(v3 + v4 + 8) = 6LL;
  *(_QWORD *)(v3 + v4 + 16) = aIpAddress;
  *(_QWORD *)(v3 + v4 + 24) = 10LL;
  *(_QWORD *)(v3 + v4 + 32) = &unk_10DC0;
  *(_QWORD *)(v3 + v4 + 40) = 4LL;
  *(_QWORD *)(v3 + v4 + 48) = aShort;
  *(_QWORD *)(v3 + v4 + 56) = 5LL;
  *(_QWORD *)&v28[144] = v2 + 4;
  memcpy(src, v28, sizeof(src));
  *(_QWORD *)v28 = 0LL;
  *(_QWORD *)&v28[8] = 1LL;
  *(_QWORD *)&v28[16] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v28, 0LL, 46LL);
  v5 = *(_QWORD *)&v28[8];
  v6 = *(_QWORD *)&v28[16];
  *(_OWORD *)(*(_QWORD *)&v28[8] + *(_QWORD *)&v28[16] + 30LL) = *(__int128 *)((char *)&xmmword_194D5 + 14);
  qmemcpy((void *)(v5 + v6), "Display the name of the DNS doma", 32);
  *(_QWORD *)&v28[16] = v6 + 46;
  v7 = *(_QWORD *)v28;
  *(_OWORD *)v32 = *(_OWORD *)&v28[8];
  if ( *(_QWORD *)v28 != 0x8000000000000000LL )
    *(_OWORD *)v28 = *(_OWORD *)v32;
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v7;
  src[28] = *(_OWORD *)v28;
  memcpy(v32, src, sizeof(v32));
  v34 = *(_WORD *)((char *)&src[36] + 13);
  v35 = HIBYTE(src[36]);
  v33 = 2;
  clap_builder::builder::command::Command::arg(v28, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = aIpAddress;
  *((_QWORD *)&dest[33] + 1) = 10LL;
  *(_QWORD *)&dest[34] = aIpAddress;
  *((_QWORD *)&dest[34] + 1) = 10LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000069LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&dest[8], 0LL, 4LL);
  v8 = *(_QWORD *)&dest[9];
  v9 = *((_QWORD *)&dest[8] + 1);
  v10 = 16LL * *(_QWORD *)&dest[9];
  *(_QWORD *)(*((_QWORD *)&dest[8] + 1) + v10) = aDomain;
  *(_QWORD *)(v9 + v10 + 8) = 6LL;
  *(_QWORD *)(v9 + v10 + 16) = aIpAddress;
  *(_QWORD *)(v9 + v10 + 24) = 10LL;
  *(_QWORD *)(v9 + v10 + 32) = &unk_10DC0;
  *(_QWORD *)(v9 + v10 + 40) = 4LL;
  *(_QWORD *)(v9 + v10 + 48) = aShort;
  *(_QWORD *)(v9 + v10 + 56) = 5LL;
  *(_QWORD *)&dest[9] = v8 + 4;
  memcpy(src, dest, sizeof(src));
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 43LL);
  v11 = *((_QWORD *)&dest[0] + 1);
  v12 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 27LL) = *(__int128 *)((char *)&xmmword_19503 + 11);
  qmemcpy((void *)(v11 + v12), "Display the network address(es) ", 32);
  *(_QWORD *)&dest[1] = v12 + 43;
  v13 = *(_QWORD *)&dest[0];
  *(_OWORD *)v32 = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = *(_OWORD *)v32;
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v13;
  src[28] = dest[0];
  memcpy(v32, src, sizeof(v32));
  v34 = *(_WORD *)((char *)&src[36] + 13);
  v35 = HIBYTE(src[36]);
  v33 = 2;
  clap_builder::builder::command::Command::arg(dest, v28);
  *(_OWORD *)&v28[120] = 0LL;
  *(_OWORD *)&v28[144] = 0LL;
  *(_OWORD *)&v28[168] = 0LL;
  *(_OWORD *)&v28[192] = 0LL;
  *(_OWORD *)&v28[216] = 0LL;
  *(_OWORD *)&v28[240] = 0LL;
  *(_OWORD *)&v28[264] = 0LL;
  *(_OWORD *)&v28[288] = 0LL;
  *(_OWORD *)&v28[312] = 0LL;
  *(_OWORD *)&v28[336] = 0LL;
  *(_OWORD *)&v28[360] = 0LL;
  *(_OWORD *)&v28[384] = 0LL;
  *(_OWORD *)&v28[408] = 0LL;
  *(_QWORD *)v28 = 0LL;
  *(_QWORD *)&v28[16] = 0LL;
  *(_QWORD *)&v28[40] = 0LL;
  *(_QWORD *)&v28[56] = 0LL;
  *(_QWORD *)&v28[80] = 5LL;
  *(_QWORD *)&v28[104] = 0LL;
  *(_QWORD *)&v28[112] = 8LL;
  *(_QWORD *)&v28[136] = 8LL;
  *(_QWORD *)&v28[160] = 8LL;
  *(_QWORD *)&v28[184] = 8LL;
  *(_QWORD *)&v28[208] = 8LL;
  *(_QWORD *)&v28[232] = 8LL;
  *(_QWORD *)&v28[256] = 8LL;
  *(_QWORD *)&v28[280] = 8LL;
  *(_QWORD *)&v28[304] = 8LL;
  *(_QWORD *)&v28[328] = 4LL;
  *(_QWORD *)&v28[352] = 8LL;
  *(_QWORD *)&v28[376] = 8LL;
  *(_QWORD *)&v28[400] = 8LL;
  *(_QWORD *)&v28[424] = 8LL;
  *(_QWORD *)&v28[432] = 0LL;
  *(_QWORD *)&v28[440] = 0x8000000000000000LL;
  *(_QWORD *)&v28[464] = 0x8000000000000000LL;
  *(_QWORD *)&v28[504] = 0x8000000000000001LL;
  *(_QWORD *)&v28[528] = &unk_10DC0;
  *(_QWORD *)&v28[536] = 4LL;
  *(_QWORD *)&v28[544] = &unk_10DC0;
  *(_QWORD *)&v28[552] = 4LL;
  *(_QWORD *)&v28[560] = 0LL;
  *(_QWORD *)&v28[576] = 0x11000000000066LL;
  *(_DWORD *)&v28[584] = 0;
  *(_WORD *)&v28[588] = 3337;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v28[128], 0LL, 4LL);
  v14 = *(_QWORD *)&v28[144];
  v15 = *(_QWORD *)&v28[136];
  v16 = 16LL * *(_QWORD *)&v28[144];
  *(_QWORD *)(*(_QWORD *)&v28[136] + v16) = aDomain;
  *(_QWORD *)(v15 + v16 + 8) = 6LL;
  *(_QWORD *)(v15 + v16 + 16) = aIpAddress;
  *(_QWORD *)(v15 + v16 + 24) = 10LL;
  *(_QWORD *)(v15 + v16 + 32) = &unk_10DC0;
  *(_QWORD *)(v15 + v16 + 40) = 4LL;
  *(_QWORD *)(v15 + v16 + 48) = aShort;
  *(_QWORD *)(v15 + v16 + 56) = 5LL;
  *(_QWORD *)&v28[144] = v14 + 4;
  memcpy(src, v28, sizeof(src));
  *(_QWORD *)v28 = 0LL;
  *(_QWORD *)&v28[8] = 1LL;
  *(_QWORD *)&v28[16] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v28, 0LL, 56LL);
  v17 = *(_QWORD *)&v28[8];
  v18 = *(_QWORD *)&v28[16];
  *(_OWORD *)(*(_QWORD *)&v28[8] + *(_QWORD *)&v28[16] + 32LL) = xmmword_1953E;
  qmemcpy((void *)(v17 + v18), "Display the FQDN (Fully Qualifie", 32);
  *(_QWORD *)(v17 + v18 + 48) = 0x29746C7561666564LL;
  *(_QWORD *)&v28[16] = v18 + 56;
  v19 = *(_QWORD *)v28;
  *(_OWORD *)v32 = *(_OWORD *)&v28[8];
  if ( *(_QWORD *)v28 != 0x8000000000000000LL )
    *(_OWORD *)v28 = *(_OWORD *)v32;
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v19;
  src[28] = *(_OWORD *)v28;
  memcpy(v32, src, sizeof(v32));
  v34 = *(_WORD *)((char *)&src[36] + 13);
  v35 = HIBYTE(src[36]);
  v33 = 2;
  clap_builder::builder::command::Command::arg(v28, dest);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = aShort;
  *((_QWORD *)&dest[33] + 1) = 5LL;
  *(_QWORD *)&dest[34] = aShort;
  *((_QWORD *)&dest[34] + 1) = 5LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000073LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&dest[8], 0LL, 4LL);
  v20 = *(_QWORD *)&dest[9];
  v21 = *((_QWORD *)&dest[8] + 1);
  v22 = 16LL * *(_QWORD *)&dest[9];
  *(_QWORD *)(*((_QWORD *)&dest[8] + 1) + v22) = aDomain;
  *(_QWORD *)(v21 + v22 + 8) = 6LL;
  *(_QWORD *)(v21 + v22 + 16) = aIpAddress;
  *(_QWORD *)(v21 + v22 + 24) = 10LL;
  *(_QWORD *)(v21 + v22 + 32) = &unk_10DC0;
  *(_QWORD *)(v21 + v22 + 40) = 4LL;
  *(_QWORD *)(v21 + v22 + 48) = aShort;
  *(_QWORD *)(v21 + v22 + 56) = 5LL;
  *(_QWORD *)&dest[9] = v20 + 4;
  memcpy(src, dest, sizeof(src));
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 73LL);
  v23 = *((_QWORD *)&dest[0] + 1);
  v24 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 57LL) = *(__int128 *)((char *)&xmmword_19586 + 9);
  qmemcpy((void *)(v23 + v24), "Display the short hostname (the portion before the first dot) if", 64);
  *(_QWORD *)&dest[1] = v24 + 73;
  v25 = *(_QWORD *)&dest[0];
  *(_OWORD *)v32 = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = *(_OWORD *)v32;
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v25;
  src[28] = dest[0];
  memcpy(v32, src, sizeof(v32));
  v34 = *(_WORD *)((char *)&src[36] + 13);
  v35 = HIBYTE(src[36]);
  v33 = 2;
  clap_builder::builder::command::Command::arg(dest, v28);
  *(_QWORD *)v28 = 0LL;
  *(_QWORD *)&v28[16] = 0LL;
  *(_QWORD *)&v28[40] = 0LL;
  *(_QWORD *)&v28[56] = 0LL;
  *(_QWORD *)&v28[80] = 5LL;
  *(_QWORD *)&v28[104] = 0LL;
  *(_QWORD *)&v28[112] = 8LL;
  *(_OWORD *)&v28[120] = 0LL;
  *(_QWORD *)&v28[136] = 8LL;
  *(_OWORD *)&v28[144] = 0LL;
  *(_QWORD *)&v28[160] = 8LL;
  *(_OWORD *)&v28[168] = 0LL;
  *(_QWORD *)&v28[184] = 8LL;
  *(_OWORD *)&v28[192] = 0LL;
  *(_QWORD *)&v28[208] = 8LL;
  *(_OWORD *)&v28[216] = 0LL;
  *(_QWORD *)&v28[232] = 8LL;
  *(_OWORD *)&v28[240] = 0LL;
  *(_QWORD *)&v28[256] = 8LL;
  *(_OWORD *)&v28[264] = 0LL;
  *(_QWORD *)&v28[280] = 8LL;
  *(_OWORD *)&v28[288] = 0LL;
  *(_QWORD *)&v28[304] = 8LL;
  *(_OWORD *)&v28[312] = 0LL;
  *(_QWORD *)&v28[328] = 4LL;
  *(_OWORD *)&v28[336] = 0LL;
  *(_QWORD *)&v28[352] = 8LL;
  *(_OWORD *)&v28[360] = 0LL;
  *(_QWORD *)&v28[376] = 8LL;
  *(_OWORD *)&v28[384] = 0LL;
  *(_QWORD *)&v28[400] = 8LL;
  *(_OWORD *)&v28[408] = 0LL;
  *(_QWORD *)&v28[424] = 8LL;
  *(_QWORD *)&v28[432] = 0LL;
  *(_QWORD *)&v28[440] = 0x8000000000000000LL;
  *(_QWORD *)&v28[464] = 0x8000000000000000LL;
  *(_QWORD *)&v28[504] = 0x8000000000000001LL;
  *(_QWORD *)&v28[528] = aHost;
  *(_QWORD *)&v28[536] = 4LL;
  *(_QWORD *)&v28[544] = 0LL;
  *(_QWORD *)&v28[560] = 0LL;
  *(_QWORD *)&v28[576] = 0x11000000110000LL;
  *(_DWORD *)&v28[584] = 0;
  *(_WORD *)&v28[588] = 3337;
  *(_QWORD *)v32 = 2LL;
  clap_builder::builder::arg::Arg::value_parser(src, v28);
  BYTE13(src[36]) = 10;
  memcpy(v28, src, 0x250uLL);
  v26 = v29;
  clap_builder::builder::command::Command::arg(v29, dest);
  return v26;
}
