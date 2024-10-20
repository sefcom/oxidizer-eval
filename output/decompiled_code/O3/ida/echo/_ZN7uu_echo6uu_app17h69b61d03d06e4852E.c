void *__fastcall uu_echo::uu_app(void *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  _BYTE dest[712]; // [rsp+8h] [rbp-A70h] BYREF
  _OWORD src[45]; // [rsp+2D0h] [rbp-7A8h] BYREF
  _OWORD v20[37]; // [rsp+5A0h] [rbp-4D8h] BYREF
  _OWORD v21[37]; // [rsp+7F0h] [rbp-288h] BYREF

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(src, qword_DBFF0, qword_DBFF8);
  memcpy(dest, src, 0x260uLL);
  *(_OWORD *)&dest[624] = src[39];
  *(_OWORD *)&dest[640] = src[40];
  *(_OWORD *)&dest[656] = src[41];
  *(_OWORD *)&dest[672] = src[42];
  *(_OWORD *)&dest[684] = *(_OWORD *)((char *)&src[42] + 12);
  *(_QWORD *)&dest[608] = a0027;
  *(_QWORD *)&dest[616] = 6LL;
  *(_DWORD *)&dest[700] = HIDWORD(src[43]) | 0x22;
  *(_QWORD *)&dest[704] = *(_QWORD *)&src[44];
  clap_builder::builder::command::Command::about(src, dest, aDisplayALineOf, 22LL);
  clap_builder::builder::command::Command::after_help(dest, src, aEchoTheStringS, 437LL);
  uucore::format_usage(v20, aOptionsString, 27LL);
  v1 = *(_QWORD *)&v20[0];
  if ( *(_QWORD *)&v20[0] != 0x8000000000000000LL )
    src[0] = *(_OWORD *)((char *)v20 + 8);
  if ( *(_QWORD *)&dest[464] != 0x8000000000000000LL && *(_QWORD *)&dest[464] )
    _rust_dealloc(*(_QWORD *)&dest[472], *(_QWORD *)&dest[464], 1LL);
  *(_QWORD *)&dest[464] = v1;
  *(_OWORD *)&dest[472] = src[0];
  memcpy(src, dest, 0x2C8uLL);
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
  *(_QWORD *)&dest[528] = aNoNewline_0;
  *(_QWORD *)&dest[536] = 10LL;
  *(_QWORD *)&dest[544] = 0LL;
  *(_QWORD *)&dest[560] = 0LL;
  *(_QWORD *)&dest[576] = 0x1100000000006ELL;
  *(_DWORD *)&dest[584] = 0;
  *(_WORD *)&dest[588] = 3337;
  *(_QWORD *)&v20[0] = 0LL;
  *((_QWORD *)&v20[0] + 1) = 1LL;
  *(_QWORD *)&v20[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v20, 0LL, 34LL);
  v2 = *((_QWORD *)&v20[0] + 1);
  v3 = *(_QWORD *)&v20[1];
  *(_OWORD *)(*((_QWORD *)&v20[0] + 1) + *(_QWORD *)&v20[1] + 16LL) = xmmword_17FB7;
  *(_OWORD *)(v2 + v3) = xmmword_17FA7;
  *(_WORD *)(v2 + v3 + 32) = 25966;
  *(_QWORD *)&v20[1] = v3 + 34;
  v4 = *(_QWORD *)&v20[0];
  v21[0] = *(_OWORD *)((char *)v20 + 8);
  if ( *(_QWORD *)&v20[0] != 0x8000000000000000LL )
    v20[0] = v21[0];
  *(_QWORD *)&dest[440] = v4;
  *(_OWORD *)&dest[448] = v20[0];
  memcpy(v20, dest, 0x24CuLL);
  *(_WORD *)((char *)&v20[36] + 13) = *(_WORD *)&dest[589];
  HIBYTE(v20[36]) = dest[591];
  BYTE12(v20[36]) = 2;
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
  *(_QWORD *)&src[33] = aEnableBackslas_0;
  *((_QWORD *)&src[33] + 1) = 23LL;
  *(_QWORD *)&src[34] = 0LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000000065LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v20[0] = 0LL;
  *((_QWORD *)&v20[0] + 1) = 1LL;
  *(_QWORD *)&v20[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v20, 0LL, 42LL);
  v5 = *((_QWORD *)&v20[0] + 1);
  v6 = *(_QWORD *)&v20[1];
  *(_OWORD *)(*((_QWORD *)&v20[0] + 1) + *(_QWORD *)&v20[1] + 26LL) = *(__int128 *)((char *)&xmmword_17FF0 + 10);
  qmemcpy((void *)(v5 + v6), "enable interpretation of backsla", 32);
  *(_QWORD *)&v20[1] = v6 + 42;
  v7 = *(_QWORD *)&v20[0];
  v21[0] = *(_OWORD *)((char *)v20 + 8);
  if ( *(_QWORD *)&v20[0] != 0x8000000000000000LL )
    v20[0] = v21[0];
  *((_QWORD *)&src[27] + 1) = v7;
  src[28] = v20[0];
  memcpy(v20, src, 0x24CuLL);
  *(_WORD *)((char *)&v20[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v20[36]) = HIBYTE(src[36]);
  BYTE12(v20[36]) = 2;
  v8 = *(_QWORD *)&v20[9];
  if ( *(_QWORD *)&v20[9] == *(_QWORD *)&v20[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v20[8]);
  v9 = *((_QWORD *)&v20[8] + 1);
  v10 = 16 * v8;
  *(_QWORD *)(*((_QWORD *)&v20[8] + 1) + v10) = &unk_1800A;
  *(_QWORD *)(v9 + v10 + 8) = 24LL;
  *(_QWORD *)&v20[9] = v8 + 1;
  memcpy(v21, v20, sizeof(v21));
  clap_builder::builder::command::Command::arg(src, dest);
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
  *(_QWORD *)&dest[528] = &unk_1800A;
  *(_QWORD *)&dest[536] = 24LL;
  *(_QWORD *)&dest[544] = 0LL;
  *(_QWORD *)&dest[560] = 0LL;
  *(_QWORD *)&dest[576] = 0x11000000000045LL;
  *(_DWORD *)&dest[584] = 0;
  *(_WORD *)&dest[588] = 3337;
  *(_QWORD *)&v20[0] = 0LL;
  *((_QWORD *)&v20[0] + 1) = 1LL;
  *(_QWORD *)&v20[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v20, 0LL, 53LL);
  v11 = *((_QWORD *)&v20[0] + 1);
  v12 = *(_QWORD *)&v20[1];
  *(_OWORD *)(*((_QWORD *)&v20[0] + 1) + *(_QWORD *)&v20[1] + 32LL) = xmmword_18042;
  qmemcpy((void *)(v11 + v12), "disable interpretation of backsl", 32);
  *(_QWORD *)(v11 + v12 + 45) = 0x29746C7561666564LL;
  *(_QWORD *)&v20[1] = v12 + 53;
  v13 = *(_QWORD *)&v20[0];
  v21[0] = *(_OWORD *)((char *)v20 + 8);
  if ( *(_QWORD *)&v20[0] != 0x8000000000000000LL )
    v20[0] = v21[0];
  *(_QWORD *)&dest[440] = v13;
  *(_OWORD *)&dest[448] = v20[0];
  memcpy(v20, dest, 0x24CuLL);
  *(_WORD *)((char *)&v20[36] + 13) = *(_WORD *)&dest[589];
  HIBYTE(v20[36]) = dest[591];
  BYTE12(v20[36]) = 2;
  v14 = *(_QWORD *)&v20[9];
  if ( *(_QWORD *)&v20[9] == *(_QWORD *)&v20[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v20[8]);
  v15 = *((_QWORD *)&v20[8] + 1);
  v16 = 16 * v14;
  *(_QWORD *)(*((_QWORD *)&v20[8] + 1) + v16) = aEnableBackslas_0;
  *(_QWORD *)(v15 + v16 + 8) = 23LL;
  *(_QWORD *)&v20[9] = v14 + 1;
  memcpy(v21, v20, sizeof(v21));
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
  *(_QWORD *)&src[33] = aString_0;
  *((_QWORD *)&src[33] + 1) = 6LL;
  *(_QWORD *)&src[34] = 0LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000110000LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3329;
  clap_builder::builder::command::Command::arg(a1, dest);
  return a1;
}
