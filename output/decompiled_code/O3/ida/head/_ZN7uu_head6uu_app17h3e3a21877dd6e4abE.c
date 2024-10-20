void *__fastcall uu_head::uu_app(void *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // rcx
  void *v34; // rbx
  _OWORD v36[45]; // [rsp+0h] [rbp-AE8h] BYREF
  _BYTE dest[712]; // [rsp+2D0h] [rbp-818h] BYREF
  void *v38; // [rsp+598h] [rbp-550h]
  _OWORD src[37]; // [rsp+5A0h] [rbp-548h] BYREF
  __int128 v40; // [rsp+7F0h] [rbp-2F8h]
  __int128 v41; // [rsp+800h] [rbp-2E8h]
  __int128 v42; // [rsp+810h] [rbp-2D8h]
  __int128 v43; // [rsp+820h] [rbp-2C8h]
  __int128 v44; // [rsp+830h] [rbp-2B8h]
  __int128 v45; // [rsp+840h] [rbp-2A8h]
  __int128 v46; // [rsp+850h] [rbp-298h]
  _BYTE v47[588]; // [rsp+860h] [rbp-288h] BYREF
  char v48; // [rsp+AACh] [rbp-3Ch]
  __int16 v49; // [rsp+AADh] [rbp-3Bh]
  char v50; // [rsp+AAFh] [rbp-39h]

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(v36, xmmword_F49E8, *((_QWORD *)&xmmword_F49E8 + 1));
  *(_QWORD *)&v36[38] = a0027;
  *((_QWORD *)&v36[38] + 1) = 6LL;
  memcpy(dest, v36, sizeof(dest));
  clap_builder::builder::command::Command::about(v36, dest, aPrintTheFirst1, 265LL);
  uucore::format_usage(src, aFlagFile, 22LL);
  v1 = *(_QWORD *)&src[0];
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    *(_OWORD *)dest = *(_OWORD *)((char *)src + 8);
  v38 = a1;
  if ( *(_QWORD *)&v36[29] != 0x8000000000000000LL && *(_QWORD *)&v36[29] )
    _rust_dealloc(*((_QWORD *)&v36[29] + 1), *(_QWORD *)&v36[29], 1LL);
  *(_QWORD *)&v36[29] = v1;
  *(_OWORD *)((char *)&v36[29] + 8) = *(_OWORD *)dest;
  memcpy(dest, v36, 0x2BCuLL);
  *(_QWORD *)&dest[700] = *(_QWORD *)((char *)&v36[43] + 12) | 0x8000000080LL;
  *(_DWORD *)&dest[708] = DWORD1(v36[44]);
  v36[7] = 8uLL;
  v36[9] = 0LL;
  v36[10] = 8uLL;
  v36[12] = 0LL;
  v36[13] = 8uLL;
  v36[15] = 0LL;
  v36[16] = 8uLL;
  v36[18] = 0LL;
  v36[19] = 8uLL;
  v36[21] = 0LL;
  v36[24] = 0LL;
  v36[25] = 8uLL;
  *(_QWORD *)&v36[0] = 0LL;
  *(_QWORD *)&v36[1] = 0LL;
  *(_OWORD *)((char *)&v36[1] + 8) = v46;
  *((_QWORD *)&v36[2] + 1) = 0LL;
  *((_QWORD *)&v36[3] + 1) = 0LL;
  v36[4] = v45;
  *(_QWORD *)&v36[5] = 5LL;
  *(_OWORD *)((char *)&v36[5] + 8) = v44;
  *((_QWORD *)&v36[6] + 1) = 0LL;
  *((_QWORD *)&v36[8] + 1) = 8LL;
  *((_QWORD *)&v36[11] + 1) = 8LL;
  *((_QWORD *)&v36[14] + 1) = 8LL;
  *((_QWORD *)&v36[17] + 1) = 8LL;
  *((_QWORD *)&v36[20] + 1) = 4LL;
  v36[22] = 8uLL;
  *((_QWORD *)&v36[23] + 1) = 8LL;
  *((_QWORD *)&v36[26] + 1) = 8LL;
  *(_QWORD *)&v36[27] = 0LL;
  *((_QWORD *)&v36[27] + 1) = 0x8000000000000000LL;
  v36[28] = v43;
  *(_QWORD *)&v36[29] = 0x8000000000000000LL;
  *(_OWORD *)((char *)&v36[29] + 8) = v41;
  *(_OWORD *)((char *)&v36[30] + 8) = v42;
  *((_QWORD *)&v36[31] + 1) = 0x8000000000000001LL;
  v36[32] = v40;
  *(_QWORD *)&v36[33] = aBytes_0;
  *((_QWORD *)&v36[33] + 1) = 5LL;
  *(_QWORD *)&v36[34] = aBytes_1;
  *((_QWORD *)&v36[34] + 1) = 5LL;
  *(_QWORD *)&v36[35] = 0LL;
  *(_QWORD *)&v36[36] = 0x11000000000063LL;
  DWORD2(v36[36]) = 0;
  WORD6(v36[36]) = 3337;
  *(_QWORD *)v47 = aNum;
  *(_QWORD *)&v47[8] = 6LL;
  *(_QWORD *)&v47[16] = 0LL;
  *(_QWORD *)&v47[24] = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(src, v47);
  if ( *((_QWORD *)&v36[21] + 1) )
    _rust_dealloc(8LL, 16LL * *((_QWORD *)&v36[21] + 1), 8LL);
  *((_QWORD *)&v36[22] + 1) = *(_QWORD *)&src[1];
  *(_OWORD *)((char *)&v36[21] + 8) = src[0];
  memcpy(src, v36, sizeof(src));
  *(_QWORD *)&v36[0] = 0LL;
  *((_QWORD *)&v36[0] + 1) = 1LL;
  *(_QWORD *)&v36[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v36, 0LL, 107LL);
  v2 = *((_QWORD *)&v36[0] + 1);
  v3 = *(_QWORD *)&v36[1];
  *(_OWORD *)(*((_QWORD *)&v36[0] + 1) + *(_QWORD *)&v36[1] + 91LL) = unk_19D33;
  qmemcpy(
    (void *)(v2 + v3),
    "print the first NUM bytes of each file;\nwith the leading '-', print all but the last\nNUM bytes o",
    96);
  *(_QWORD *)&v36[1] = v3 + 107;
  v4 = *(_QWORD *)&v36[0];
  *(_OWORD *)v47 = *(_OWORD *)((char *)v36 + 8);
  if ( *(_QWORD *)&v36[0] != 0x8000000000000000LL )
    v36[0] = *(_OWORD *)v47;
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v4;
  src[28] = v36[0];
  memcpy(v36, src, 0x250uLL);
  v5 = *(_QWORD *)&v36[9];
  if ( *(_QWORD *)&v36[8] - *(_QWORD *)&v36[9] <= 1uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v36[8], *(_QWORD *)&v36[9], 2LL);
    v5 = *(_QWORD *)&v36[9];
  }
  v6 = *((_QWORD *)&v36[8] + 1);
  v7 = 16 * v5;
  *(_QWORD *)(*((_QWORD *)&v36[8] + 1) + v7) = aBytes_0;
  *(_QWORD *)(v6 + v7 + 8) = 5LL;
  *(_QWORD *)(v6 + v7 + 16) = &unk_19D43;
  *(_QWORD *)(v6 + v7 + 24) = 5LL;
  *(_QWORD *)&v36[9] = v5 + 2;
  memcpy(src, v36, 0x248uLL);
  *((_QWORD *)&src[36] + 1) = *((_QWORD *)&v36[36] + 1) | 0x20LL;
  clap_builder::builder::command::Command::arg(v36, dest);
  *(_OWORD *)&dest[120] = 0LL;
  *(_OWORD *)&dest[144] = 0LL;
  *(_OWORD *)&dest[168] = 0LL;
  *(_OWORD *)&dest[192] = 0LL;
  *(_OWORD *)&dest[216] = 0LL;
  *(_OWORD *)&dest[240] = 0LL;
  *(_OWORD *)&dest[264] = 0LL;
  *(_OWORD *)&dest[288] = 0LL;
  *(_OWORD *)&dest[312] = 0LL;
  *(_OWORD *)&dest[336] = 0LL;
  *(_OWORD *)&dest[384] = 0LL;
  *(_OWORD *)&dest[408] = 0LL;
  *(_QWORD *)dest = 0LL;
  *(_QWORD *)&dest[16] = 0LL;
  *(_OWORD *)&dest[24] = v46;
  *(_QWORD *)&dest[40] = 0LL;
  *(_QWORD *)&dest[56] = 0LL;
  *(_OWORD *)&dest[64] = v45;
  *(_QWORD *)&dest[80] = 5LL;
  *(_OWORD *)&dest[88] = v44;
  *(_QWORD *)&dest[104] = 0LL;
  *(_QWORD *)&dest[112] = 8LL;
  *(_QWORD *)&dest[136] = 8LL;
  *(_QWORD *)&dest[160] = 8LL;
  *(_QWORD *)&dest[184] = 8LL;
  *(_QWORD *)&dest[208] = 8LL;
  *(_QWORD *)&dest[232] = 8LL;
  *(_QWORD *)&dest[256] = 8LL;
  *(_QWORD *)&dest[280] = 8LL;
  *(_QWORD *)&dest[304] = 8LL;
  *(_QWORD *)&dest[328] = 4LL;
  *(_QWORD *)&dest[352] = 8LL;
  *(_OWORD *)&dest[360] = 0LL;
  *(_QWORD *)&dest[376] = 8LL;
  *(_QWORD *)&dest[400] = 8LL;
  *(_QWORD *)&dest[424] = 8LL;
  *(_QWORD *)&dest[432] = 0LL;
  *(_QWORD *)&dest[440] = 0x8000000000000000LL;
  *(_OWORD *)&dest[448] = v43;
  *(_QWORD *)&dest[464] = 0x8000000000000000LL;
  *(_OWORD *)&dest[488] = v42;
  *(_OWORD *)&dest[472] = v41;
  *(_QWORD *)&dest[504] = 0x8000000000000001LL;
  *(_OWORD *)&dest[512] = v40;
  *(_QWORD *)&dest[528] = &unk_19D43;
  *(_QWORD *)&dest[536] = 5LL;
  *(_QWORD *)&dest[544] = aLines;
  *(_QWORD *)&dest[552] = 5LL;
  *(_QWORD *)&dest[560] = 0LL;
  *(_QWORD *)&dest[576] = 0x1100000000006ELL;
  *(_DWORD *)&dest[584] = 0;
  *(_WORD *)&dest[588] = 3337;
  *(_QWORD *)v47 = aNum;
  *(_QWORD *)&v47[8] = 6LL;
  *(_QWORD *)&v47[16] = 0LL;
  *(_QWORD *)&v47[24] = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(src, v47);
  if ( *(_QWORD *)&dest[344] )
    _rust_dealloc(8LL, 16LL * *(_QWORD *)&dest[344], 8LL);
  *(_QWORD *)&dest[360] = *(_QWORD *)&src[1];
  *(_OWORD *)&dest[344] = src[0];
  memcpy(src, dest, sizeof(src));
  *(_QWORD *)dest = 0LL;
  *(_QWORD *)&dest[8] = 1LL;
  *(_QWORD *)&dest[16] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 118LL);
  v8 = *(_QWORD *)&dest[8];
  v9 = *(_QWORD *)&dest[16];
  *(_OWORD *)(*(_QWORD *)&dest[8] + *(_QWORD *)&dest[16] + 96LL) = unk_19DAD;
  qmemcpy(
    (void *)(v8 + v9),
    "print the first NUM lines instead of the first 10;\nwith the leading '-', print all but the last\n",
    96);
  *(_QWORD *)(v8 + v9 + 110) = 0x656C696620686361LL;
  *(_QWORD *)&dest[16] = v9 + 118;
  v10 = *(_QWORD *)dest;
  *(_OWORD *)v47 = *(_OWORD *)&dest[8];
  if ( *(_QWORD *)dest != 0x8000000000000000LL )
    *(_OWORD *)dest = *(_OWORD *)v47;
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v10;
  src[28] = *(_OWORD *)dest;
  memcpy(dest, src, 0x250uLL);
  v11 = *(_QWORD *)&dest[144];
  if ( *(_QWORD *)&dest[128] - *(_QWORD *)&dest[144] <= 1uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&dest[128], *(_QWORD *)&dest[144], 2LL);
    v11 = *(_QWORD *)&dest[144];
  }
  v12 = *(_QWORD *)&dest[136];
  v13 = 16 * v11;
  *(_QWORD *)(*(_QWORD *)&dest[136] + v13) = &unk_19D43;
  *(_QWORD *)(v12 + v13 + 8) = 5LL;
  *(_QWORD *)(v12 + v13 + 16) = aBytes_0;
  *(_QWORD *)(v12 + v13 + 24) = 5LL;
  *(_QWORD *)&dest[144] = v11 + 2;
  memcpy(src, dest, 0x248uLL);
  *((_QWORD *)&src[36] + 1) = *(_QWORD *)&dest[584] | 0x20LL;
  clap_builder::builder::command::Command::arg(dest, v36);
  v36[7] = 8uLL;
  v36[9] = 0LL;
  v36[10] = 8uLL;
  v36[12] = 0LL;
  v36[13] = 8uLL;
  v36[15] = 0LL;
  v36[16] = 8uLL;
  v36[18] = 0LL;
  v36[19] = 8uLL;
  v36[21] = 0LL;
  v36[22] = 8uLL;
  v36[24] = 0LL;
  v36[25] = 8uLL;
  *(_QWORD *)&v36[0] = 0LL;
  *(_QWORD *)&v36[1] = 0LL;
  *((_QWORD *)&v36[2] + 1) = 0LL;
  *((_QWORD *)&v36[3] + 1) = 0LL;
  *(_QWORD *)&v36[5] = 5LL;
  *((_QWORD *)&v36[6] + 1) = 0LL;
  *((_QWORD *)&v36[8] + 1) = 8LL;
  *((_QWORD *)&v36[11] + 1) = 8LL;
  *((_QWORD *)&v36[14] + 1) = 8LL;
  *((_QWORD *)&v36[17] + 1) = 8LL;
  *((_QWORD *)&v36[20] + 1) = 4LL;
  *((_QWORD *)&v36[23] + 1) = 8LL;
  *((_QWORD *)&v36[26] + 1) = 8LL;
  *(_QWORD *)&v36[27] = 0LL;
  *((_QWORD *)&v36[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v36[29] = 0x8000000000000000LL;
  *((_QWORD *)&v36[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v36[33] = aQuiet;
  *((_QWORD *)&v36[33] + 1) = 5LL;
  *(_QWORD *)&v36[34] = aQuiet_0;
  *((_QWORD *)&v36[34] + 1) = 5LL;
  *(_QWORD *)&v36[35] = 0LL;
  *(_QWORD *)&v36[36] = 0x11000000000071LL;
  DWORD2(v36[36]) = 0;
  WORD6(v36[36]) = 3337;
  alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v36[18] + 8);
  v14 = *(_QWORD *)&v36[19];
  **(_QWORD **)&v36[19] = &unk_19DCD;
  *(_QWORD *)(v14 + 8) = 6LL;
  *(_BYTE *)(v14 + 16) = 1;
  *((_QWORD *)&v36[19] + 1) = 1LL;
  memcpy(src, v36, sizeof(src));
  *(_QWORD *)&v36[0] = 0LL;
  *((_QWORD *)&v36[0] + 1) = 1LL;
  *(_QWORD *)&v36[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v36, 0LL, 37LL);
  v15 = *((_QWORD *)&v36[0] + 1);
  v16 = *(_QWORD *)&v36[1];
  *(_OWORD *)(*((_QWORD *)&v36[0] + 1) + *(_QWORD *)&v36[1] + 16LL) = unk_19DE3;
  *(_OWORD *)(v15 + v16) = unk_19DD3;
  *(_QWORD *)(v15 + v16 + 29) = 0x73656D616E20656CLL;
  *(_QWORD *)&v36[1] = v16 + 37;
  v17 = *(_QWORD *)&v36[0];
  *(_OWORD *)v47 = *(_OWORD *)((char *)v36 + 8);
  if ( *(_QWORD *)&v36[0] != 0x8000000000000000LL )
    v36[0] = *(_OWORD *)v47;
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v17;
  src[28] = v36[0];
  memcpy(v36, src, 0x250uLL);
  v18 = *(_QWORD *)&v36[9];
  if ( *(_QWORD *)&v36[8] - *(_QWORD *)&v36[9] <= 1uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v36[8], *(_QWORD *)&v36[9], 2LL);
    v18 = *(_QWORD *)&v36[9];
  }
  v19 = *((_QWORD *)&v36[8] + 1);
  v20 = 16 * v18;
  *(_QWORD *)(*((_QWORD *)&v36[8] + 1) + v20) = aVerbose;
  *(_QWORD *)(v19 + v20 + 8) = 7LL;
  *(_QWORD *)(v19 + v20 + 16) = aQuiet;
  *(_QWORD *)(v19 + v20 + 24) = 5LL;
  *(_QWORD *)&v36[9] = v18 + 2;
  memcpy(src, v36, 0x24CuLL);
  *(_WORD *)((char *)&src[36] + 13) = *(_WORD *)((char *)&v36[36] + 13);
  HIBYTE(src[36]) = HIBYTE(v36[36]);
  BYTE12(src[36]) = 2;
  clap_builder::builder::command::Command::arg(v36, dest);
  *(_OWORD *)&dest[120] = 0LL;
  *(_OWORD *)&dest[144] = 0LL;
  *(_OWORD *)&dest[168] = 0LL;
  *(_OWORD *)&dest[192] = 0LL;
  *(_OWORD *)&dest[216] = 0LL;
  *(_OWORD *)&dest[240] = 0LL;
  *(_OWORD *)&dest[264] = 0LL;
  *(_OWORD *)&dest[288] = 0LL;
  *(_OWORD *)&dest[312] = 0LL;
  *(_OWORD *)&dest[336] = 0LL;
  *(_OWORD *)&dest[360] = 0LL;
  *(_OWORD *)&dest[384] = 0LL;
  *(_OWORD *)&dest[408] = 0LL;
  *(_QWORD *)dest = 0LL;
  *(_QWORD *)&dest[16] = 0LL;
  *(_QWORD *)&dest[40] = 0LL;
  *(_QWORD *)&dest[56] = 0LL;
  *(_QWORD *)&dest[80] = 5LL;
  *(_QWORD *)&dest[104] = 0LL;
  *(_QWORD *)&dest[112] = 8LL;
  *(_QWORD *)&dest[136] = 8LL;
  *(_QWORD *)&dest[160] = 8LL;
  *(_QWORD *)&dest[184] = 8LL;
  *(_QWORD *)&dest[208] = 8LL;
  *(_QWORD *)&dest[232] = 8LL;
  *(_QWORD *)&dest[256] = 8LL;
  *(_QWORD *)&dest[280] = 8LL;
  *(_QWORD *)&dest[304] = 8LL;
  *(_QWORD *)&dest[328] = 4LL;
  *(_QWORD *)&dest[352] = 8LL;
  *(_QWORD *)&dest[376] = 8LL;
  *(_QWORD *)&dest[400] = 8LL;
  *(_QWORD *)&dest[424] = 8LL;
  *(_QWORD *)&dest[432] = 0LL;
  *(_QWORD *)&dest[440] = 0x8000000000000000LL;
  *(_QWORD *)&dest[464] = 0x8000000000000000LL;
  *(_QWORD *)&dest[504] = 0x8000000000000001LL;
  *(_QWORD *)&dest[528] = aVerbose;
  *(_QWORD *)&dest[536] = 7LL;
  *(_QWORD *)&dest[544] = aVerbose_0;
  *(_QWORD *)&dest[552] = 7LL;
  *(_QWORD *)&dest[560] = 0LL;
  *(_QWORD *)&dest[576] = 0x11000000000076LL;
  *(_DWORD *)&dest[584] = 0;
  *(_WORD *)&dest[588] = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 38LL);
  v21 = *((_QWORD *)&src[0] + 1);
  v22 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 16LL) = unk_19E16;
  *(_OWORD *)(v21 + v22) = unk_19E06;
  *(_QWORD *)(v21 + v22 + 30) = 0x73656D616E20656CLL;
  *(_QWORD *)&src[1] = v22 + 38;
  v23 = *(_QWORD *)&src[0];
  *(_OWORD *)v47 = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = *(_OWORD *)v47;
  *(_QWORD *)&dest[440] = v23;
  *(_OWORD *)&dest[448] = src[0];
  memcpy(src, dest, sizeof(src));
  v24 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 1uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 2LL);
    v24 = *(_QWORD *)&src[9];
  }
  v25 = *((_QWORD *)&src[8] + 1);
  v26 = 16 * v24;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v26) = aQuiet;
  *(_QWORD *)(v25 + v26 + 8) = 5LL;
  *(_QWORD *)(v25 + v26 + 16) = aVerbose;
  *(_QWORD *)(v25 + v26 + 24) = 7LL;
  *(_QWORD *)&src[9] = v24 + 2;
  memcpy(v47, src, sizeof(v47));
  v49 = *(_WORD *)((char *)&src[36] + 13);
  v50 = HIBYTE(src[36]);
  v48 = 2;
  clap_builder::builder::command::Command::arg(dest, v36);
  v36[7] = 8uLL;
  v36[9] = 0LL;
  v36[10] = 8uLL;
  v36[12] = 0LL;
  v36[13] = 8uLL;
  v36[15] = 0LL;
  v36[16] = 8uLL;
  v36[18] = 0LL;
  v36[19] = 8uLL;
  v36[21] = 0LL;
  v36[22] = 8uLL;
  v36[24] = 0LL;
  v36[25] = 8uLL;
  *(_QWORD *)&v36[0] = 0LL;
  *(_QWORD *)&v36[1] = 0LL;
  *((_QWORD *)&v36[2] + 1) = 0LL;
  *((_QWORD *)&v36[3] + 1) = 0LL;
  *(_QWORD *)&v36[5] = 5LL;
  *((_QWORD *)&v36[6] + 1) = 0LL;
  *((_QWORD *)&v36[8] + 1) = 8LL;
  *((_QWORD *)&v36[11] + 1) = 8LL;
  *((_QWORD *)&v36[14] + 1) = 8LL;
  *((_QWORD *)&v36[17] + 1) = 8LL;
  *((_QWORD *)&v36[20] + 1) = 4LL;
  *((_QWORD *)&v36[23] + 1) = 8LL;
  *((_QWORD *)&v36[26] + 1) = 8LL;
  *(_QWORD *)&v36[27] = 0LL;
  *((_QWORD *)&v36[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v36[29] = 0x8000000000000000LL;
  *((_QWORD *)&v36[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v36[33] = aPresumeInputPi;
  *((_QWORD *)&v36[33] + 1) = 19LL;
  *(_QWORD *)&v36[34] = aPresumeInputPi_0;
  *((_QWORD *)&v36[34] + 1) = 18LL;
  *(_QWORD *)&v36[35] = 0LL;
  *(_QWORD *)&v36[36] = 0x11000000110000LL;
  DWORD2(v36[36]) = 0;
  WORD6(v36[36]) = 3337;
  alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v36[18] + 8);
  v27 = *(_QWORD *)&v36[19];
  **(_QWORD **)&v36[19] = &unk_19E51;
  *(_QWORD *)(v27 + 8) = 19LL;
  *(_BYTE *)(v27 + 16) = 0;
  *((_QWORD *)&v36[19] + 1) = 1LL;
  memcpy(src, v36, 0x248uLL);
  DWORD2(src[36]) = DWORD2(v36[36]) | 4;
  HIDWORD(src[36]) = HIDWORD(v36[36]) & 0xFFFFFF00 | 2;
  clap_builder::builder::command::Command::arg(v36, dest);
  *(_OWORD *)&dest[120] = 0LL;
  *(_OWORD *)&dest[144] = 0LL;
  *(_OWORD *)&dest[168] = 0LL;
  *(_OWORD *)&dest[192] = 0LL;
  *(_OWORD *)&dest[216] = 0LL;
  *(_OWORD *)&dest[240] = 0LL;
  *(_OWORD *)&dest[264] = 0LL;
  *(_OWORD *)&dest[288] = 0LL;
  *(_OWORD *)&dest[312] = 0LL;
  *(_OWORD *)&dest[336] = 0LL;
  *(_OWORD *)&dest[360] = 0LL;
  *(_OWORD *)&dest[384] = 0LL;
  *(_OWORD *)&dest[408] = 0LL;
  *(_QWORD *)dest = 0LL;
  *(_QWORD *)&dest[16] = 0LL;
  *(_QWORD *)&dest[40] = 0LL;
  *(_QWORD *)&dest[56] = 0LL;
  *(_QWORD *)&dest[80] = 5LL;
  *(_QWORD *)&dest[104] = 0LL;
  *(_QWORD *)&dest[112] = 8LL;
  *(_QWORD *)&dest[136] = 8LL;
  *(_QWORD *)&dest[160] = 8LL;
  *(_QWORD *)&dest[184] = 8LL;
  *(_QWORD *)&dest[208] = 8LL;
  *(_QWORD *)&dest[232] = 8LL;
  *(_QWORD *)&dest[256] = 8LL;
  *(_QWORD *)&dest[280] = 8LL;
  *(_QWORD *)&dest[304] = 8LL;
  *(_QWORD *)&dest[328] = 4LL;
  *(_QWORD *)&dest[352] = 8LL;
  *(_QWORD *)&dest[376] = 8LL;
  *(_QWORD *)&dest[400] = 8LL;
  *(_QWORD *)&dest[424] = 8LL;
  *(_QWORD *)&dest[432] = 0LL;
  *(_QWORD *)&dest[440] = 0x8000000000000000LL;
  *(_QWORD *)&dest[464] = 0x8000000000000000LL;
  *(_QWORD *)&dest[504] = 0x8000000000000001LL;
  *(_QWORD *)&dest[528] = aZero;
  *(_QWORD *)&dest[536] = 4LL;
  *(_QWORD *)&dest[544] = aZeroTerminated;
  *(_QWORD *)&dest[552] = 15LL;
  *(_QWORD *)&dest[560] = 0LL;
  *(_QWORD *)&dest[576] = 0x1100000000007ALL;
  *(_DWORD *)&dest[584] = 0;
  *(_WORD *)&dest[588] = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 34LL);
  v28 = *((_QWORD *)&src[0] + 1);
  v29 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 16LL) = unk_19E83;
  *(_OWORD *)(v28 + v29) = unk_19E73;
  *(_WORD *)(v28 + v29 + 32) = 25966;
  *(_QWORD *)&src[1] = v29 + 34;
  v30 = *(_QWORD *)&src[0];
  *(_OWORD *)v47 = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = *(_OWORD *)v47;
  *(_QWORD *)&dest[440] = v30;
  *(_OWORD *)&dest[448] = src[0];
  memcpy(src, dest, sizeof(src));
  v31 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[9] == *(_QWORD *)&src[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[8]);
  v32 = *((_QWORD *)&src[8] + 1);
  v33 = 16 * v31;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v33) = aZero;
  *(_QWORD *)(v32 + v33 + 8) = 4LL;
  *(_QWORD *)&src[9] = v31 + 1;
  memcpy(v47, src, sizeof(v47));
  v49 = *(_WORD *)((char *)&src[36] + 13);
  v50 = HIBYTE(src[36]);
  v48 = 2;
  clap_builder::builder::command::Command::arg(dest, v36);
  v36[7] = 8uLL;
  v36[9] = 0LL;
  v36[10] = 8uLL;
  v36[12] = 0LL;
  v36[13] = 8uLL;
  v36[15] = 0LL;
  v36[16] = 8uLL;
  v36[18] = 0LL;
  v36[19] = 8uLL;
  v36[21] = 0LL;
  v36[22] = 8uLL;
  v36[24] = 0LL;
  v36[25] = 8uLL;
  *(_QWORD *)&v36[0] = 0LL;
  *(_QWORD *)&v36[1] = 0LL;
  *((_QWORD *)&v36[2] + 1) = 0LL;
  *((_QWORD *)&v36[3] + 1) = 0LL;
  *(_QWORD *)&v36[5] = 5LL;
  *((_QWORD *)&v36[6] + 1) = 0LL;
  *((_QWORD *)&v36[8] + 1) = 8LL;
  *((_QWORD *)&v36[11] + 1) = 8LL;
  *((_QWORD *)&v36[14] + 1) = 8LL;
  *((_QWORD *)&v36[17] + 1) = 8LL;
  *((_QWORD *)&v36[20] + 1) = 4LL;
  *((_QWORD *)&v36[23] + 1) = 8LL;
  *((_QWORD *)&v36[26] + 1) = 8LL;
  *(_QWORD *)&v36[27] = 0LL;
  *((_QWORD *)&v36[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v36[29] = 0x8000000000000000LL;
  *((_QWORD *)&v36[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v36[33] = aFile;
  *((_QWORD *)&v36[33] + 1) = 4LL;
  *(_QWORD *)&v36[34] = 0LL;
  *(_QWORD *)&v36[35] = 0LL;
  *(_QWORD *)&v36[36] = 0x11000000110000LL;
  DWORD2(v36[36]) = 0;
  WORD6(v36[36]) = 769;
  v34 = v38;
  clap_builder::builder::command::Command::arg(v38, dest);
  return v34;
}
