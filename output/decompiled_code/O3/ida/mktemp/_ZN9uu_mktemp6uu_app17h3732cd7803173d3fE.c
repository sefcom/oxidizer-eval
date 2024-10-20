void *__fastcall uu_mktemp::uu_app(void *dest)
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
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // r14
  __int64 v19; // rax
  int v20; // ebp
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  _OWORD v34[37]; // [rsp+0h] [rbp-A98h] BYREF
  unsigned __int64 v35; // [rsp+258h] [rbp-840h]
  _OWORD src[45]; // [rsp+260h] [rbp-838h] BYREF
  _BYTE desta[712]; // [rsp+530h] [rbp-568h] BYREF
  __int64 v38; // [rsp+7F8h] [rbp-2A0h]
  _OWORD v39[40]; // [rsp+810h] [rbp-288h] BYREF

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(src, qword_F54B8, qword_F54C0);
  *(_QWORD *)&src[38] = a0027;
  *((_QWORD *)&src[38] + 1) = 6LL;
  memcpy(desta, src, sizeof(desta));
  clap_builder::builder::command::Command::about(src, desta, aCreateATempora, 37LL);
  uucore::format_usage(v34, aOptionTemplate, 25LL);
  v1 = *(_QWORD *)&v34[0];
  if ( *(_QWORD *)&v34[0] != 0x8000000000000000LL )
    *(_OWORD *)desta = *(_OWORD *)((char *)v34 + 8);
  if ( *(_QWORD *)&src[29] != 0x8000000000000000LL && *(_QWORD *)&src[29] )
    _rust_dealloc(*((_QWORD *)&src[29] + 1), *(_QWORD *)&src[29], 1LL);
  *(_QWORD *)&src[29] = v1;
  *(_OWORD *)((char *)&src[29] + 8) = *(_OWORD *)desta;
  memcpy(desta, src, 0x2BCuLL);
  *(_QWORD *)&desta[700] = *(_QWORD *)((char *)&src[43] + 12) | 0x8000000080LL;
  *(_DWORD *)&desta[708] = DWORD1(src[44]);
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
  *(_QWORD *)&src[33] = aDirectory;
  *((_QWORD *)&src[33] + 1) = 9LL;
  *(_QWORD *)&src[34] = aDirectory;
  *((_QWORD *)&src[34] + 1) = 9LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000000064LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v34[0] = 0LL;
  *((_QWORD *)&v34[0] + 1) = 1LL;
  *(_QWORD *)&v34[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v34, 0LL, 34LL);
  v2 = *((_QWORD *)&v34[0] + 1);
  v3 = *(_QWORD *)&v34[1];
  *(_OWORD *)(*((_QWORD *)&v34[0] + 1) + *(_QWORD *)&v34[1] + 16LL) = unk_1AE3A;
  *(_OWORD *)(v2 + v3) = unk_1AE2A;
  *(_WORD *)(v2 + v3 + 32) = 25964;
  *(_QWORD *)&v34[1] = v3 + 34;
  v4 = *(_QWORD *)&v34[0];
  v39[0] = *(_OWORD *)((char *)v34 + 8);
  if ( *(_QWORD *)&v34[0] != 0x8000000000000000LL )
    v34[0] = v39[0];
  *((_QWORD *)&src[27] + 1) = v4;
  src[28] = v34[0];
  memcpy(v34, src, 0x24CuLL);
  *(_WORD *)((char *)&v34[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v34[36]) = HIBYTE(src[36]);
  BYTE12(v34[36]) = 2;
  clap_builder::builder::command::Command::arg(src, desta);
  *(_OWORD *)&desta[120] = 0LL;
  *(_OWORD *)&desta[144] = 0LL;
  *(_OWORD *)&desta[168] = 0LL;
  *(_OWORD *)&desta[192] = 0LL;
  *(_OWORD *)&desta[216] = 0LL;
  *(_OWORD *)&desta[240] = 0LL;
  *(_OWORD *)&desta[264] = 0LL;
  *(_OWORD *)&desta[288] = 0LL;
  *(_OWORD *)&desta[312] = 0LL;
  *(_OWORD *)&desta[336] = 0LL;
  *(_OWORD *)&desta[360] = 0LL;
  *(_OWORD *)&desta[384] = 0LL;
  *(_OWORD *)&desta[408] = 0LL;
  *(_QWORD *)desta = 0LL;
  *(_QWORD *)&desta[16] = 0LL;
  *(_QWORD *)&desta[40] = 0LL;
  *(_QWORD *)&desta[56] = 0LL;
  *(_QWORD *)&desta[80] = 5LL;
  *(_QWORD *)&desta[104] = 0LL;
  *(_QWORD *)&desta[112] = 8LL;
  *(_QWORD *)&desta[136] = 8LL;
  *(_QWORD *)&desta[160] = 8LL;
  *(_QWORD *)&desta[184] = 8LL;
  *(_QWORD *)&desta[208] = 8LL;
  *(_QWORD *)&desta[232] = 8LL;
  *(_QWORD *)&desta[256] = 8LL;
  *(_QWORD *)&desta[280] = 8LL;
  *(_QWORD *)&desta[304] = 8LL;
  *(_QWORD *)&desta[328] = 4LL;
  *(_QWORD *)&desta[352] = 8LL;
  *(_QWORD *)&desta[376] = 8LL;
  *(_QWORD *)&desta[400] = 8LL;
  *(_QWORD *)&desta[424] = 8LL;
  *(_QWORD *)&desta[432] = 0LL;
  *(_QWORD *)&desta[440] = 0x8000000000000000LL;
  *(_QWORD *)&desta[464] = 0x8000000000000000LL;
  *(_QWORD *)&desta[504] = 0x8000000000000001LL;
  *(_QWORD *)&desta[528] = aDryRun;
  *(_QWORD *)&desta[536] = 7LL;
  *(_QWORD *)&desta[544] = aDryRun;
  *(_QWORD *)&desta[552] = 7LL;
  *(_QWORD *)&desta[560] = 0LL;
  *(_QWORD *)&desta[576] = 0x11000000000075LL;
  *(_DWORD *)&desta[584] = 0;
  *(_WORD *)&desta[588] = 3337;
  *(_QWORD *)&v34[0] = 0LL;
  *((_QWORD *)&v34[0] + 1) = 1LL;
  *(_QWORD *)&v34[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v34, 0LL, 52LL);
  v5 = *((_QWORD *)&v34[0] + 1);
  v6 = *(_QWORD *)&v34[1];
  *(_OWORD *)(*((_QWORD *)&v34[0] + 1) + *(_QWORD *)&v34[1] + 32LL) = unk_1AE6C;
  qmemcpy((void *)(v5 + v6), "do not create anything; merely p", 32);
  *(_DWORD *)(v5 + v6 + 48) = 694511201;
  *(_QWORD *)&v34[1] = v6 + 52;
  v7 = *(_QWORD *)&v34[0];
  v39[0] = *(_OWORD *)((char *)v34 + 8);
  if ( *(_QWORD *)&v34[0] != 0x8000000000000000LL )
    v34[0] = v39[0];
  *(_QWORD *)&desta[440] = v7;
  *(_OWORD *)&desta[448] = v34[0];
  memcpy(v34, desta, 0x24CuLL);
  *(_WORD *)((char *)&v34[36] + 13) = *(_WORD *)&desta[589];
  HIBYTE(v34[36]) = desta[591];
  BYTE12(v34[36]) = 2;
  clap_builder::builder::command::Command::arg(desta, src);
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
  *(_QWORD *)&src[33] = aQuiet;
  *((_QWORD *)&src[33] + 1) = 5LL;
  *(_QWORD *)&src[34] = aQuiet;
  *((_QWORD *)&src[34] + 1) = 5LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000000071LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v34[0] = 0LL;
  *((_QWORD *)&v34[0] + 1) = 1LL;
  *(_QWORD *)&v34[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v34, 0LL, 33LL);
  v8 = *((_QWORD *)&v34[0] + 1);
  v9 = *(_QWORD *)&v34[1];
  *(_OWORD *)(*((_QWORD *)&v34[0] + 1) + *(_QWORD *)&v34[1] + 16LL) = unk_1AE90;
  *(_OWORD *)(v8 + v9) = unk_1AE80;
  *(_BYTE *)(v8 + v9 + 32) = 46;
  *(_QWORD *)&v34[1] = v9 + 33;
  v10 = *(_QWORD *)&v34[0];
  v39[0] = *(_OWORD *)((char *)v34 + 8);
  if ( *(_QWORD *)&v34[0] != 0x8000000000000000LL )
    v34[0] = v39[0];
  *((_QWORD *)&src[27] + 1) = v10;
  src[28] = v34[0];
  memcpy(v34, src, 0x24CuLL);
  *(_WORD *)((char *)&v34[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v34[36]) = HIBYTE(src[36]);
  BYTE12(v34[36]) = 2;
  clap_builder::builder::command::Command::arg(src, desta);
  v34[7] = 8uLL;
  v34[9] = 0LL;
  v34[10] = 8uLL;
  v34[12] = 0LL;
  v34[13] = 8uLL;
  v34[15] = 0LL;
  v34[16] = 8uLL;
  v34[18] = 0LL;
  v34[19] = 8uLL;
  v34[21] = 0LL;
  v34[22] = 8uLL;
  v34[24] = 0LL;
  v34[25] = 8uLL;
  *(_QWORD *)&v34[0] = 0LL;
  *(_QWORD *)&v34[1] = 0LL;
  *((_QWORD *)&v34[2] + 1) = 0LL;
  *((_QWORD *)&v34[3] + 1) = 0LL;
  *(_QWORD *)&v34[5] = 5LL;
  *((_QWORD *)&v34[6] + 1) = 0LL;
  *((_QWORD *)&v34[8] + 1) = 8LL;
  *((_QWORD *)&v34[11] + 1) = 8LL;
  *((_QWORD *)&v34[14] + 1) = 8LL;
  *((_QWORD *)&v34[17] + 1) = 8LL;
  *((_QWORD *)&v34[20] + 1) = 4LL;
  *((_QWORD *)&v34[23] + 1) = 8LL;
  *((_QWORD *)&v34[26] + 1) = 8LL;
  *(_QWORD *)&v34[27] = 0LL;
  *((_QWORD *)&v34[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v34[29] = 0x8000000000000000LL;
  *((_QWORD *)&v34[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v34[33] = aSuffix;
  *((_QWORD *)&v34[33] + 1) = 6LL;
  *(_QWORD *)&v34[34] = aSuffix;
  *((_QWORD *)&v34[34] + 1) = 6LL;
  *(_QWORD *)&v34[35] = 0LL;
  *(_QWORD *)&v34[36] = 0x11000000110000LL;
  DWORD2(v34[36]) = 0;
  WORD6(v34[36]) = 3337;
  *(_QWORD *)desta = 0LL;
  *(_QWORD *)&desta[8] = 1LL;
  *(_QWORD *)&desta[16] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(desta, 0LL, 124LL);
  v11 = *(_QWORD *)&desta[8];
  v12 = *(_QWORD *)&desta[16];
  *(_OWORD *)(*(_QWORD *)&desta[8] + *(_QWORD *)&desta[16] + 108LL) = unk_1AF0D;
  qmemcpy(
    (void *)(v11 + v12),
    "append SUFFIX to TEMPLATE; SUFFIX must not contain a path separator. This option is implied if TEMPLATE does not",
    112);
  *(_QWORD *)&desta[16] = v12 + 124;
  v13 = *(_QWORD *)desta;
  v39[0] = *(_OWORD *)&desta[8];
  if ( *(_QWORD *)desta != 0x8000000000000000LL )
    *(_OWORD *)desta = v39[0];
  *((_QWORD *)&v34[27] + 1) = v13;
  v34[28] = *(_OWORD *)desta;
  memcpy(desta, v34, 0x168uLL);
  memcpy(&desta[368], &v34[23], 0xE0uLL);
  *(_QWORD *)&desta[360] = *((_QWORD *)&v34[22] + 1);
  *(_QWORD *)&v39[0] = aSuffix_0;
  *((_QWORD *)&v39[0] + 1) = 6LL;
  *(_QWORD *)&v39[1] = 0LL;
  *((_QWORD *)&v39[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v34, v39);
  if ( *(_QWORD *)&desta[344] )
    _rust_dealloc(*(_QWORD *)&desta[352], 16LL * *(_QWORD *)&desta[344], 8LL);
  *(_QWORD *)&desta[360] = *(_QWORD *)&v34[1];
  *(_OWORD *)&desta[344] = v34[0];
  memcpy(v34, desta, sizeof(v34));
  clap_builder::builder::command::Command::arg(desta, src);
  v34[7] = 8uLL;
  v34[9] = 0LL;
  v34[10] = 8uLL;
  v34[12] = 0LL;
  v34[13] = 8uLL;
  v34[15] = 0LL;
  v34[16] = 8uLL;
  v34[18] = 0LL;
  v34[19] = 8uLL;
  v34[21] = 0LL;
  v34[22] = 8uLL;
  v34[24] = 0LL;
  v34[25] = 8uLL;
  *(_QWORD *)&v34[0] = 0LL;
  *(_QWORD *)&v34[1] = 0LL;
  *((_QWORD *)&v34[2] + 1) = 0LL;
  *((_QWORD *)&v34[3] + 1) = 0LL;
  *(_QWORD *)&v34[5] = 5LL;
  *((_QWORD *)&v34[6] + 1) = 0LL;
  *((_QWORD *)&v34[8] + 1) = 8LL;
  *((_QWORD *)&v34[11] + 1) = 8LL;
  *((_QWORD *)&v34[14] + 1) = 8LL;
  *((_QWORD *)&v34[17] + 1) = 8LL;
  *((_QWORD *)&v34[20] + 1) = 4LL;
  *((_QWORD *)&v34[23] + 1) = 8LL;
  *((_QWORD *)&v34[26] + 1) = 8LL;
  *(_QWORD *)&v34[27] = 0LL;
  *((_QWORD *)&v34[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v34[29] = 0x8000000000000000LL;
  *((_QWORD *)&v34[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v34[33] = aP;
  *((_QWORD *)&v34[33] + 1) = 1LL;
  *(_QWORD *)&v34[34] = 0LL;
  *(_QWORD *)&v34[35] = 0LL;
  *(_QWORD *)&v34[36] = 0x11000000000070LL;
  DWORD2(v34[36]) = 0;
  WORD6(v34[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 22LL);
  v35 = 0x8000000000000001LL;
  v14 = *((_QWORD *)&src[0] + 1);
  v15 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1]) = unk_1AF23;
  *(_QWORD *)(v14 + v15 + 14) = 0x726964706D742D2DLL;
  *(_QWORD *)&src[1] = v15 + 22;
  v16 = *(_QWORD *)&src[0];
  v39[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v39[0];
  *((_QWORD *)&v34[27] + 1) = v16;
  v34[28] = src[0];
  src[0] = v34[0];
  memcpy((char *)&src[2] + 8, (char *)&v34[2] + 8, 0x140uLL);
  memcpy(&src[23], &v34[23], 0xE0uLL);
  src[1] = v34[1];
  *(_QWORD *)&src[2] = *(_QWORD *)&v34[2];
  *((_QWORD *)&src[22] + 1) = *((_QWORD *)&v34[22] + 1);
  *(_QWORD *)&v39[0] = aDir;
  *((_QWORD *)&v39[0] + 1) = 3LL;
  *(_QWORD *)&v39[1] = 0LL;
  *((_QWORD *)&v39[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v34, v39);
  if ( *((_QWORD *)&src[21] + 1) )
    _rust_dealloc(*(_QWORD *)&src[22], 16LL * *((_QWORD *)&src[21] + 1), 8LL);
  *((_QWORD *)&src[22] + 1) = *(_QWORD *)&v34[1];
  *(_OWORD *)((char *)&src[21] + 8) = v34[0];
  v34[0] = src[0];
  memcpy((char *)&v34[2] + 8, (char *)&src[2] + 8, 0x140uLL);
  v17 = *(_QWORD *)&v34[1];
  memcpy(&v34[23], &src[23], 0xE0uLL);
  *(_QWORD *)&v34[1] = 1LL;
  *((_QWORD *)&v34[1] + 1) = 1LL;
  *(_QWORD *)&v34[2] = 1LL;
  *((_QWORD *)&v34[22] + 1) = v17;
  v38 = 3LL;
  clap_builder::builder::arg::Arg::value_parser(src, v34);
  BYTE13(src[36]) = 4;
  memcpy(v34, src, sizeof(v34));
  clap_builder::builder::command::Command::arg(src, desta);
  v34[7] = 8uLL;
  v34[9] = 0LL;
  v34[10] = 8uLL;
  v34[12] = 0LL;
  v34[13] = 8uLL;
  v34[15] = 0LL;
  v34[16] = 8uLL;
  v34[18] = 0LL;
  v34[19] = 8uLL;
  v34[21] = 0LL;
  v34[22] = 8uLL;
  v34[24] = 0LL;
  v34[25] = 8uLL;
  *(_QWORD *)&v34[0] = 0LL;
  *(_QWORD *)&v34[1] = 0LL;
  *((_QWORD *)&v34[2] + 1) = 0LL;
  *((_QWORD *)&v34[3] + 1) = 0LL;
  *(_QWORD *)&v34[5] = 5LL;
  *((_QWORD *)&v34[6] + 1) = 0LL;
  *((_QWORD *)&v34[8] + 1) = 8LL;
  *((_QWORD *)&v34[11] + 1) = 8LL;
  *((_QWORD *)&v34[14] + 1) = 8LL;
  *((_QWORD *)&v34[17] + 1) = 8LL;
  *((_QWORD *)&v34[20] + 1) = 4LL;
  *((_QWORD *)&v34[23] + 1) = 8LL;
  *((_QWORD *)&v34[26] + 1) = 8LL;
  *(_QWORD *)&v34[27] = 0LL;
  *((_QWORD *)&v34[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v34[29] = 0x8000000000000000LL;
  *((_QWORD *)&v34[31] + 1) = v35;
  *(_QWORD *)&v34[33] = aTmpdir;
  *((_QWORD *)&v34[33] + 1) = 6LL;
  *(_QWORD *)&v34[34] = aTmpdir;
  *((_QWORD *)&v34[34] + 1) = 6LL;
  *(_QWORD *)&v34[35] = 0LL;
  *(_QWORD *)&v34[36] = 0x11000000110000LL;
  DWORD2(v34[36]) = 0;
  WORD6(v34[36]) = 3337;
  *(_QWORD *)desta = 0LL;
  *(_QWORD *)&desta[8] = 1LL;
  *(_QWORD *)&desta[16] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(desta, 0LL, 256LL);
  v18 = *(_QWORD *)&desta[16];
  memcpy((void *)(*(_QWORD *)&desta[16] + *(_QWORD *)&desta[8]), aInterpretTempl, 0x100uLL);
  *(_QWORD *)&desta[16] = v18 + 256;
  v19 = *(_QWORD *)desta;
  v39[0] = *(_OWORD *)&desta[8];
  if ( *(_QWORD *)desta != 0x8000000000000000LL )
    *(_OWORD *)desta = v39[0];
  *((_QWORD *)&v34[27] + 1) = v19;
  v34[28] = *(_OWORD *)desta;
  *(_OWORD *)desta = v34[0];
  memcpy(&desta[40], (char *)&v34[2] + 8, 0x140uLL);
  memcpy(&desta[368], &v34[23], 0xD8uLL);
  v20 = HIDWORD(v34[36]);
  *(_OWORD *)&desta[16] = v34[1];
  *(_QWORD *)&desta[32] = *(_QWORD *)&v34[2];
  *(_QWORD *)&desta[360] = *((_QWORD *)&v34[22] + 1);
  *(_DWORD *)&desta[584] = 0;
  *(_DWORD *)&desta[588] = HIDWORD(v34[36]);
  *(_QWORD *)&v39[0] = aDir;
  *((_QWORD *)&v39[0] + 1) = 3LL;
  *(_QWORD *)&v39[1] = 0LL;
  *((_QWORD *)&v39[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v34, v39);
  if ( *(_QWORD *)&desta[344] )
    _rust_dealloc(*(_QWORD *)&desta[352], 16LL * *(_QWORD *)&desta[344], 8LL);
  *(_QWORD *)&desta[360] = *(_QWORD *)&v34[1];
  *(_OWORD *)&desta[344] = v34[0];
  v34[0] = *(_OWORD *)desta;
  memcpy((char *)&v34[2] + 8, &desta[40], 0x140uLL);
  v21 = *(_QWORD *)&v34[1];
  memcpy(&v34[23], &desta[368], 0xD8uLL);
  v34[1] = 1uLL;
  *(_QWORD *)&v34[2] = 1LL;
  *((_QWORD *)&v34[22] + 1) = v21;
  DWORD2(v34[36]) = 128;
  HIDWORD(v34[36]) = v20;
  v26 = *(_QWORD *)&v34[9];
  if ( *(_QWORD *)&v34[9] == *(_QWORD *)&v34[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(
      &v34[8],
      &desta[368],
      v22,
      v23,
      v24,
      v25,
      *(_QWORD *)&v34[0],
      *((_QWORD *)&v34[0] + 1),
      *(_QWORD *)&v34[1],
      *((_QWORD *)&v34[1] + 1),
      *(_QWORD *)&v34[2]);
  v27 = *((_QWORD *)&v34[8] + 1);
  v28 = 16 * v26;
  *(_QWORD *)(*((_QWORD *)&v34[8] + 1) + v28) = aP;
  *(_QWORD *)(v27 + v28 + 8) = 1LL;
  *(_QWORD *)&v34[9] = v26 + 1;
  memcpy(desta, v34, 0x250uLL);
  clap_builder::builder::arg::Arg::value_parser(v34, desta);
  v29 = v35;
  BYTE13(v34[36]) = 4;
  memcpy(v39, v34, 0x250uLL);
  clap_builder::builder::command::Command::arg(desta, src);
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
  *((_QWORD *)&src[31] + 1) = v29;
  *(_QWORD *)&src[33] = aT;
  *((_QWORD *)&src[33] + 1) = 1LL;
  *(_QWORD *)&src[34] = 0LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000000074LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v34[0] = 0LL;
  *((_QWORD *)&v34[0] + 1) = 1LL;
  *(_QWORD *)&v34[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v34, 0LL, 125LL);
  v30 = *((_QWORD *)&v34[0] + 1);
  v31 = *(_QWORD *)&v34[1];
  *(_OWORD *)(*((_QWORD *)&v34[0] + 1) + *(_QWORD *)&v34[1] + 109LL) = unk_1B0A9;
  qmemcpy(
    (void *)(v30 + v31),
    "Generate a template (using the supplied prefix and TMPDIR (TMP on windows) if set) to create a filename template",
    112);
  *(_QWORD *)&v34[1] = v31 + 125;
  v32 = *(_QWORD *)&v34[0];
  v39[0] = *(_OWORD *)((char *)v34 + 8);
  if ( *(_QWORD *)&v34[0] != 0x8000000000000000LL )
    v34[0] = v39[0];
  *((_QWORD *)&src[27] + 1) = v32;
  src[28] = v34[0];
  memcpy(v34, src, 0x24CuLL);
  *(_WORD *)((char *)&v34[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v34[36]) = HIBYTE(src[36]);
  BYTE12(v34[36]) = 2;
  clap_builder::builder::command::Command::arg(src, desta);
  *(_OWORD *)&desta[120] = 0LL;
  *(_OWORD *)&desta[144] = 0LL;
  *(_OWORD *)&desta[168] = 0LL;
  *(_OWORD *)&desta[192] = 0LL;
  *(_OWORD *)&desta[216] = 0LL;
  *(_OWORD *)&desta[240] = 0LL;
  *(_OWORD *)&desta[264] = 0LL;
  *(_OWORD *)&desta[288] = 0LL;
  *(_OWORD *)&desta[312] = 0LL;
  *(_OWORD *)&desta[336] = 0LL;
  *(_OWORD *)&desta[360] = 0LL;
  *(_OWORD *)&desta[384] = 0LL;
  *(_OWORD *)&desta[408] = 0LL;
  *(_QWORD *)desta = 0LL;
  *(_OWORD *)&desta[16] = 1uLL;
  *(_QWORD *)&desta[32] = 1LL;
  *(_QWORD *)&desta[40] = 0LL;
  *(_QWORD *)&desta[56] = 0LL;
  *(_QWORD *)&desta[80] = 5LL;
  *(_QWORD *)&desta[104] = 0LL;
  *(_QWORD *)&desta[112] = 8LL;
  *(_QWORD *)&desta[136] = 8LL;
  *(_QWORD *)&desta[160] = 8LL;
  *(_QWORD *)&desta[184] = 8LL;
  *(_QWORD *)&desta[208] = 8LL;
  *(_QWORD *)&desta[232] = 8LL;
  *(_QWORD *)&desta[256] = 8LL;
  *(_QWORD *)&desta[280] = 8LL;
  *(_QWORD *)&desta[304] = 8LL;
  *(_QWORD *)&desta[328] = 4LL;
  *(_QWORD *)&desta[352] = 8LL;
  *(_QWORD *)&desta[376] = 8LL;
  *(_QWORD *)&desta[400] = 8LL;
  *(_QWORD *)&desta[424] = 8LL;
  *(_QWORD *)&desta[432] = 0LL;
  *(_QWORD *)&desta[440] = 0x8000000000000000LL;
  *(_QWORD *)&desta[464] = 0x8000000000000000LL;
  *(_QWORD *)&desta[504] = v29;
  *(_QWORD *)&desta[528] = &unk_11E40;
  *(_QWORD *)&desta[536] = 8LL;
  *(_QWORD *)&desta[544] = 0LL;
  *(_QWORD *)&desta[560] = 0LL;
  *(_QWORD *)&desta[576] = 0x11000000110000LL;
  *(_DWORD *)&desta[584] = 0;
  *(_WORD *)&desta[588] = 3337;
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
