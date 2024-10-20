void *__fastcall uu_more::uu_app(void *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r14
  void *v24; // r15
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  _OWORD dest[38]; // [rsp+10h] [rbp-AD8h] BYREF
  void *v33; // [rsp+270h] [rbp-878h]
  __int64 v34; // [rsp+278h] [rbp-870h]
  __int128 v35; // [rsp+280h] [rbp-868h]
  __int128 v36; // [rsp+290h] [rbp-858h]
  __int128 v37; // [rsp+2A0h] [rbp-848h]
  _BYTE v38[28]; // [rsp+2B0h] [rbp-838h]
  __int64 v39; // [rsp+2CCh] [rbp-81Ch]
  int v40; // [rsp+2D4h] [rbp-814h]
  _OWORD src[42]; // [rsp+2E0h] [rbp-808h] BYREF
  _BYTE v42[28]; // [rsp+580h] [rbp-568h]
  __int64 v43; // [rsp+59Ch] [rbp-54Ch]
  int v44; // [rsp+5A4h] [rbp-544h]
  _OWORD v45[37]; // [rsp+5B0h] [rbp-538h] BYREF
  void *v46; // [rsp+808h] [rbp-2E0h]
  __int128 v47; // [rsp+810h] [rbp-2D8h]
  __int128 v48; // [rsp+820h] [rbp-2C8h]
  __int128 v49; // [rsp+830h] [rbp-2B8h]
  __int128 v50; // [rsp+840h] [rbp-2A8h]
  __int128 v51; // [rsp+850h] [rbp-298h]
  _OWORD v52[37]; // [rsp+860h] [rbp-288h] BYREF

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(dest, qword_11DD40, qword_11DD48);
  clap_builder::builder::command::Command::about(src, dest, aDisplayTheCont, 35LL);
  uucore::format_usage(v45, aOptionsFile, 20LL);
  v1 = *(_QWORD *)&v45[0];
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    dest[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&src[29] != 0x8000000000000000LL && *(_QWORD *)&src[29] )
    _rust_dealloc(*((_QWORD *)&src[29] + 1), *(_QWORD *)&src[29], 1LL);
  *(_QWORD *)&src[29] = v1;
  *(_OWORD *)((char *)&src[29] + 8) = dest[0];
  memcpy(dest, src, sizeof(dest));
  v35 = src[39];
  v36 = src[40];
  v37 = src[41];
  *(_OWORD *)v38 = *(_OWORD *)v42;
  *(_OWORD *)&v38[12] = *(_OWORD *)&v42[12];
  v33 = &unk_1EFE7;
  v34 = 6LL;
  v39 = v43 | 0x8000000080LL;
  v40 = v44;
  src[7] = 8uLL;
  src[9] = 0LL;
  src[10] = 8uLL;
  src[12] = 0LL;
  src[13] = 8uLL;
  src[15] = 0LL;
  src[16] = 8uLL;
  src[18] = 0LL;
  src[19] = 8uLL;
  src[21] = 0LL;
  src[22] = 8uLL;
  src[24] = 0LL;
  src[25] = 8uLL;
  *(_QWORD *)&src[0] = 0LL;
  *(_QWORD *)&src[1] = 0LL;
  *((_QWORD *)&src[2] + 1) = 0LL;
  *((_QWORD *)&src[3] + 1) = 0LL;
  *(_QWORD *)&src[5] = 5LL;
  *((_QWORD *)&src[6] + 1) = 0LL;
  *((_QWORD *)&src[8] + 1) = 8LL;
  *((_QWORD *)&src[11] + 1) = 8LL;
  *((_QWORD *)&src[14] + 1) = 8LL;
  *((_QWORD *)&src[17] + 1) = 8LL;
  *((_QWORD *)&src[20] + 1) = 4LL;
  *((_QWORD *)&src[23] + 1) = 8LL;
  *((_QWORD *)&src[26] + 1) = 8LL;
  *(_QWORD *)&src[27] = 0LL;
  *((_QWORD *)&src[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[29] = 0x8000000000000000LL;
  *((_QWORD *)&src[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&src[33] = aPrintOver;
  *((_QWORD *)&src[33] + 1) = 10LL;
  *(_QWORD *)&src[34] = aPrintOver;
  *((_QWORD *)&src[34] + 1) = 10LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000000063LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v45, 0LL, 47LL);
  v2 = *((_QWORD *)&v45[0] + 1);
  v3 = *(_QWORD *)&v45[1];
  *(_OWORD *)(*((_QWORD *)&v45[0] + 1) + *(_QWORD *)&v45[1] + 31LL) = unk_1F00C;
  qmemcpy((void *)(v2 + v3), "Do not scroll, display text and ", 32);
  *(_QWORD *)&v45[1] = v3 + 47;
  v4 = *(_QWORD *)&v45[0];
  v52[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v45[0] = v52[0];
  *((_QWORD *)&src[27] + 1) = v4;
  src[28] = v45[0];
  memcpy(v45, src, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v45[36]) = HIBYTE(src[36]);
  BYTE12(v45[36]) = 2;
  clap_builder::builder::command::Command::arg(src, dest);
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
  *(_QWORD *)&dest[33] = aSilent;
  *((_QWORD *)&dest[33] + 1) = 6LL;
  *(_QWORD *)&dest[34] = aSilent;
  *((_QWORD *)&dest[34] + 1) = 6LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000064LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v45, 0LL, 36LL);
  v5 = *((_QWORD *)&v45[0] + 1);
  v6 = *(_QWORD *)&v45[1];
  *(_OWORD *)(*((_QWORD *)&v45[0] + 1) + *(_QWORD *)&v45[1] + 16LL) = unk_1F02C;
  *(_OWORD *)(v5 + v6) = unk_1F01C;
  *(_DWORD *)(v5 + v6 + 32) = 1819043170;
  *(_QWORD *)&v45[1] = v6 + 36;
  v7 = *(_QWORD *)&v45[0];
  v52[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v45[0] = v52[0];
  *((_QWORD *)&dest[27] + 1) = v7;
  dest[28] = v45[0];
  memcpy(v45, dest, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(v45[36]) = HIBYTE(dest[36]);
  BYTE12(v45[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, src);
  src[7] = 8uLL;
  src[9] = 0LL;
  src[10] = 8uLL;
  src[12] = 0LL;
  src[13] = 8uLL;
  src[15] = 0LL;
  src[16] = 8uLL;
  src[18] = 0LL;
  src[19] = 8uLL;
  src[21] = 0LL;
  src[22] = 8uLL;
  src[24] = 0LL;
  src[25] = 8uLL;
  *(_QWORD *)&src[0] = 0LL;
  *(_QWORD *)&src[1] = 0LL;
  *((_QWORD *)&src[2] + 1) = 0LL;
  *((_QWORD *)&src[3] + 1) = 0LL;
  *(_QWORD *)&src[5] = 5LL;
  *((_QWORD *)&src[6] + 1) = 0LL;
  *((_QWORD *)&src[8] + 1) = 8LL;
  *((_QWORD *)&src[11] + 1) = 8LL;
  *((_QWORD *)&src[14] + 1) = 8LL;
  *((_QWORD *)&src[17] + 1) = 8LL;
  *((_QWORD *)&src[20] + 1) = 4LL;
  *((_QWORD *)&src[23] + 1) = 8LL;
  *((_QWORD *)&src[26] + 1) = 8LL;
  *(_QWORD *)&src[27] = 0LL;
  *((_QWORD *)&src[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[29] = 0x8000000000000000LL;
  *((_QWORD *)&src[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&src[33] = aCleanPrint;
  *((_QWORD *)&src[33] + 1) = 11LL;
  *(_QWORD *)&src[34] = aCleanPrint;
  *((_QWORD *)&src[34] + 1) = 11LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000000070LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v45, 0LL, 44LL);
  v8 = *((_QWORD *)&v45[0] + 1);
  v9 = *(_QWORD *)&v45[1];
  *(_OWORD *)(*((_QWORD *)&v45[0] + 1) + *(_QWORD *)&v45[1] + 28LL) = unk_1F05C;
  qmemcpy((void *)(v8 + v9), "Do not scroll, clean screen and ", 32);
  *(_QWORD *)&v45[1] = v9 + 44;
  v10 = *(_QWORD *)&v45[0];
  v52[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v45[0] = v52[0];
  *((_QWORD *)&src[27] + 1) = v10;
  src[28] = v45[0];
  memcpy(v45, src, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v45[36]) = HIBYTE(src[36]);
  BYTE12(v45[36]) = 2;
  clap_builder::builder::command::Command::arg(src, dest);
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
  *(_QWORD *)&dest[33] = aSqueeze;
  *((_QWORD *)&dest[33] + 1) = 7LL;
  *(_QWORD *)&dest[34] = aSqueeze;
  *((_QWORD *)&dest[34] + 1) = 7LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000073LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v45, 0LL, 37LL);
  v46 = a1;
  v11 = *((_QWORD *)&v45[0] + 1);
  v12 = *(_QWORD *)&v45[1];
  *(_OWORD *)(*((_QWORD *)&v45[0] + 1) + *(_QWORD *)&v45[1] + 16LL) = unk_1F07C;
  *(_OWORD *)(v11 + v12) = unk_1F06C;
  *(_QWORD *)(v11 + v12 + 29) = 0x656E6F206F746E69LL;
  *(_QWORD *)&v45[1] = v12 + 37;
  v13 = *(_QWORD *)&v45[0];
  v52[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v45[0] = v52[0];
  *((_QWORD *)&dest[27] + 1) = v13;
  dest[28] = v45[0];
  memcpy(v45, dest, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(v45[36]) = HIBYTE(dest[36]);
  BYTE12(v45[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, src);
  v45[7] = 8uLL;
  v45[9] = 0LL;
  v45[10] = 8uLL;
  v45[12] = 0LL;
  v45[13] = 8uLL;
  v45[15] = 0LL;
  v45[16] = 8uLL;
  v45[18] = 0LL;
  v45[19] = 8uLL;
  v45[21] = 0LL;
  v45[22] = 8uLL;
  v45[24] = 0LL;
  v45[25] = 8uLL;
  *(_QWORD *)&v45[0] = 0LL;
  *(_QWORD *)&v45[1] = 0LL;
  *((_QWORD *)&v45[2] + 1) = 0LL;
  *((_QWORD *)&v45[3] + 1) = 0LL;
  *(_QWORD *)&v45[5] = 5LL;
  *((_QWORD *)&v45[6] + 1) = 0LL;
  *((_QWORD *)&v45[8] + 1) = 8LL;
  *((_QWORD *)&v45[11] + 1) = 8LL;
  *((_QWORD *)&v45[14] + 1) = 8LL;
  *((_QWORD *)&v45[17] + 1) = 8LL;
  *((_QWORD *)&v45[20] + 1) = 4LL;
  *((_QWORD *)&v45[23] + 1) = 8LL;
  *((_QWORD *)&v45[26] + 1) = 8LL;
  *(_QWORD *)&v45[27] = 0LL;
  *((_QWORD *)&v45[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v45[29] = 0x8000000000000000LL;
  *((_QWORD *)&v45[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v45[33] = aPlain;
  *((_QWORD *)&v45[33] + 1) = 5LL;
  *(_QWORD *)&v45[34] = aPlain;
  *((_QWORD *)&v45[34] + 1) = 5LL;
  *(_QWORD *)&v45[35] = 0LL;
  v45[36] = *(_OWORD *)"u";
  clap_builder::builder::command::Command::arg(src, dest);
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
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *(_OWORD *)((char *)&dest[1] + 8) = v50;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  dest[4] = v49;
  *(_QWORD *)&dest[5] = 5LL;
  *(_OWORD *)((char *)&dest[5] + 8) = v48;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  dest[22] = 8uLL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  dest[28] = v47;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *(_OWORD *)((char *)&dest[30] + 8) = v52[1];
  *(_OWORD *)((char *)&dest[29] + 8) = v52[0];
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  dest[32] = v51;
  *(_QWORD *)&dest[33] = aPattern;
  *((_QWORD *)&dest[33] + 1) = 7LL;
  *(_QWORD *)&dest[34] = aPattern;
  *((_QWORD *)&dest[34] + 1) = 7LL;
  *(_QWORD *)&dest[35] = 0LL;
  dest[36] = xmmword_14C20;
  clap_builder::builder::arg::Arg::value_names(v45, dest);
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 41LL);
  v14 = *((_QWORD *)&dest[0] + 1);
  v15 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 25LL) = unk_1F0AF;
  qmemcpy((void *)(v14 + v15), "Display file beginning from patt", 32);
  *(_QWORD *)&dest[1] = v15 + 41;
  v16 = *(_QWORD *)&dest[0];
  v52[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v52[0];
  if ( *((_QWORD *)&v45[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&v45[27] + 1) )
    _rust_dealloc(*(_QWORD *)&v45[28], *((_QWORD *)&v45[27] + 1), 1LL);
  *((_QWORD *)&v45[27] + 1) = v16;
  v45[28] = dest[0];
  memcpy(v52, v45, sizeof(v52));
  clap_builder::builder::command::Command::arg(dest, src);
  src[7] = 8uLL;
  src[9] = 0LL;
  src[10] = 8uLL;
  src[12] = 0LL;
  src[13] = 8uLL;
  src[15] = 0LL;
  src[16] = 8uLL;
  src[18] = 0LL;
  src[19] = 8uLL;
  src[21] = 0LL;
  src[24] = 0LL;
  src[25] = 8uLL;
  *(_QWORD *)&src[0] = 0LL;
  *(_QWORD *)&src[1] = 1LL;
  *((_QWORD *)&src[1] + 1) = 1LL;
  src[2] = 1uLL;
  *((_QWORD *)&src[3] + 1) = 0LL;
  src[4] = v50;
  *(_QWORD *)&src[5] = 5LL;
  *(_OWORD *)((char *)&src[5] + 8) = v49;
  *((_QWORD *)&src[6] + 1) = 0LL;
  *((_QWORD *)&src[8] + 1) = 8LL;
  *((_QWORD *)&src[11] + 1) = 8LL;
  *((_QWORD *)&src[14] + 1) = 8LL;
  *((_QWORD *)&src[17] + 1) = 8LL;
  *((_QWORD *)&src[20] + 1) = 4LL;
  src[22] = 8uLL;
  *((_QWORD *)&src[23] + 1) = 8LL;
  *((_QWORD *)&src[26] + 1) = 8LL;
  *(_QWORD *)&src[27] = 0LL;
  *((_QWORD *)&src[27] + 1) = 0x8000000000000000LL;
  src[28] = v48;
  *(_QWORD *)&src[29] = 0x8000000000000000LL;
  *(_OWORD *)((char *)&src[30] + 8) = v52[1];
  *(_OWORD *)((char *)&src[29] + 8) = v52[0];
  *((_QWORD *)&src[31] + 1) = 0x8000000000000001LL;
  src[32] = v47;
  *(_QWORD *)&src[33] = aFromLine;
  *((_QWORD *)&src[33] + 1) = 9LL;
  *(_QWORD *)&src[34] = aFromLine;
  *((_QWORD *)&src[34] + 1) = 9LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000000046LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  clap_builder::builder::arg::Arg::value_names(v45, src);
  v17 = (_QWORD *)_rust_alloc(8LL, 8LL);
  if ( !v17 )
    alloc::alloc::handle_alloc_error(8LL, 8LL);
  *v17 = core::num::<impl core::str::traits::FromStr for usize>::from_str;
  *(_QWORD *)&v52[0] = 4LL;
  *((_QWORD *)&v52[0] + 1) = v17;
  *(_QWORD *)&v52[1] = &unk_117D90;
  clap_builder::builder::arg::Arg::value_parser(src, v45);
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v45, 0LL, 39LL);
  v18 = *((_QWORD *)&v45[0] + 1);
  v19 = *(_QWORD *)&v45[1];
  *(_OWORD *)(*((_QWORD *)&v45[0] + 1) + *(_QWORD *)&v45[1] + 16LL) = unk_1F0CF;
  *(_OWORD *)(v18 + v19) = unk_1F0BF;
  *(_QWORD *)(v18 + v19 + 31) = 0x7265626D756E2065LL;
  *(_QWORD *)&v45[1] = v19 + 39;
  v20 = *(_QWORD *)&v45[0];
  v52[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v45[0] = v52[0];
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v20;
  src[28] = v45[0];
  memcpy(v45, src, sizeof(v45));
  clap_builder::builder::command::Command::arg(src, dest);
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
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *(_OWORD *)((char *)&dest[1] + 8) = v50;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  dest[4] = v49;
  *(_QWORD *)&dest[5] = 5LL;
  *(_OWORD *)((char *)&dest[5] + 8) = v48;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  dest[22] = 8uLL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  dest[28] = v47;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *(_OWORD *)((char *)&dest[30] + 8) = v52[1];
  *(_OWORD *)((char *)&dest[29] + 8) = v52[0];
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  dest[32] = v51;
  *(_QWORD *)&dest[33] = aLines;
  *((_QWORD *)&dest[33] + 1) = 5LL;
  *(_QWORD *)&dest[34] = aLines;
  *((_QWORD *)&dest[34] + 1) = 5LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x1100000000006ELL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  clap_builder::builder::arg::Arg::value_names(v45, dest);
  *(_QWORD *)&v45[1] = 1LL;
  *((_QWORD *)&v45[1] + 1) = 1LL;
  *(_QWORD *)&v45[2] = 1LL;
  memcpy(dest, v45, 0x250uLL);
  memset(v52, 0, 24);
  *((_QWORD *)&v52[1] + 1) = 0xFFFFLL;
  clap_builder::builder::arg::Arg::value_parser(v45, dest);
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 35LL);
  v21 = *((_QWORD *)&dest[0] + 1);
  v22 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 16LL) = unk_1F0F6;
  *(_OWORD *)(v21 + v22) = unk_1F0E6;
  *(_DWORD *)(v21 + v22 + 31) = 1819047270;
  *(_QWORD *)&dest[1] = v22 + 35;
  v23 = *(_QWORD *)&dest[0];
  v52[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v52[0];
  v24 = v46;
  if ( *((_QWORD *)&v45[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&v45[27] + 1) )
    _rust_dealloc(*(_QWORD *)&v45[28], *((_QWORD *)&v45[27] + 1), 1LL);
  *((_QWORD *)&v45[27] + 1) = v23;
  v45[28] = dest[0];
  memcpy(v52, v45, sizeof(v52));
  clap_builder::builder::command::Command::arg(dest, src);
  src[7] = 8uLL;
  src[9] = 0LL;
  src[10] = 8uLL;
  src[12] = 0LL;
  src[13] = 8uLL;
  src[15] = 0LL;
  src[16] = 8uLL;
  src[18] = 0LL;
  src[19] = 8uLL;
  src[21] = 0LL;
  src[22] = 8uLL;
  src[24] = 0LL;
  src[25] = 8uLL;
  *(_QWORD *)&src[0] = 0LL;
  *(_QWORD *)&src[1] = 1LL;
  *((_QWORD *)&src[1] + 1) = 1LL;
  src[2] = 1uLL;
  *((_QWORD *)&src[3] + 1) = 0LL;
  *(_QWORD *)&src[5] = 5LL;
  *((_QWORD *)&src[6] + 1) = 0LL;
  *((_QWORD *)&src[8] + 1) = 8LL;
  *((_QWORD *)&src[11] + 1) = 8LL;
  *((_QWORD *)&src[14] + 1) = 8LL;
  *((_QWORD *)&src[17] + 1) = 8LL;
  *((_QWORD *)&src[20] + 1) = 4LL;
  *((_QWORD *)&src[23] + 1) = 8LL;
  *((_QWORD *)&src[26] + 1) = 8LL;
  *(_QWORD *)&src[27] = 0LL;
  *((_QWORD *)&src[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[29] = 0x8000000000000000LL;
  *((_QWORD *)&src[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&src[33] = aNumber;
  *((_QWORD *)&src[33] + 1) = 6LL;
  *(_QWORD *)&src[34] = aNumber;
  *((_QWORD *)&src[34] + 1) = 6LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000110000LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  memset(v52, 0, 24);
  *((_QWORD *)&v52[1] + 1) = 0xFFFFLL;
  clap_builder::builder::arg::Arg::value_parser(v45, src);
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 15LL);
  v25 = *((_QWORD *)&src[0] + 1);
  v26 = *(_QWORD *)&src[1];
  *(_QWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 7LL) = 0x73656E696C2D2D20LL;
  *(_QWORD *)(v25 + v26) = 0x20736120656D6153LL;
  *(_QWORD *)&src[1] = v26 + 15;
  v27 = *(_QWORD *)&src[0];
  v52[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v52[0];
  if ( *((_QWORD *)&v45[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&v45[27] + 1) )
    _rust_dealloc(*(_QWORD *)&v45[28], *((_QWORD *)&v45[27] + 1), 1LL);
  *((_QWORD *)&v45[27] + 1) = v27;
  v45[28] = src[0];
  memcpy(v52, v45, sizeof(v52));
  clap_builder::builder::command::Command::arg(src, dest);
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
  *(_QWORD *)&dest[33] = aFiles_0;
  *((_QWORD *)&dest[33] + 1) = 5LL;
  *(_QWORD *)&dest[34] = 0LL;
  *(_QWORD *)&dest[35] = 0LL;
  dest[36] = xmmword_14EE0;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v45, 0LL, 28LL);
  v28 = *((_QWORD *)&v45[0] + 1);
  v29 = *(_QWORD *)&v45[1];
  *(_OWORD *)(*((_QWORD *)&v45[0] + 1) + *(_QWORD *)&v45[1] + 12LL) = unk_1F11A;
  *(_OWORD *)(v28 + v29) = unk_1F10E;
  *(_QWORD *)&v45[1] = v29 + 28;
  v30 = *(_QWORD *)&v45[0];
  v52[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v45[0] = v52[0];
  *((_QWORD *)&dest[27] + 1) = v30;
  dest[28] = v45[0];
  memcpy(v45, dest, 0x24DuLL);
  BYTE13(v45[36]) = 3;
  HIWORD(v45[36]) = 0;
  clap_builder::builder::command::Command::arg(v24, src);
  return v24;
}
