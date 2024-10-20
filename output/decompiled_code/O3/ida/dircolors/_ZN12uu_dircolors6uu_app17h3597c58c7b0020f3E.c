void *__fastcall uu_dircolors::uu_app(void *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  void *v22; // rbx
  __int128 v24; // [rsp+0h] [rbp-878h]
  _BYTE dest[712]; // [rsp+10h] [rbp-868h] BYREF
  void *v26; // [rsp+2D8h] [rbp-5A0h]
  _OWORD src[45]; // [rsp+2E0h] [rbp-598h] BYREF
  _OWORD v28[44]; // [rsp+5B0h] [rbp-2C8h] BYREF

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(src, qword_F96F8, qword_F9700);
  *(_QWORD *)&src[38] = a0027;
  *((_QWORD *)&src[38] + 1) = 6LL;
  memcpy(dest, src, sizeof(dest));
  clap_builder::builder::command::Command::about(src, dest, aOutputCommands, 58LL);
  clap_builder::builder::command::Command::after_help(dest, src, aIfFileIsSpecif, 218LL);
  uucore::format_usage(v28, aOptionFile, 21LL);
  v1 = *(_QWORD *)&v28[0];
  if ( *(_QWORD *)&v28[0] != 0x8000000000000000LL )
    src[0] = *(_OWORD *)((char *)v28 + 8);
  v26 = a1;
  if ( *(_QWORD *)&dest[464] != 0x8000000000000000LL && *(_QWORD *)&dest[464] )
    _rust_dealloc(*(_QWORD *)&dest[472], *(_QWORD *)&dest[464], 1LL);
  *(_QWORD *)&dest[464] = v1;
  *(_OWORD *)&dest[472] = src[0];
  memcpy(src, dest, 0x2BCuLL);
  *(_QWORD *)((char *)&src[43] + 12) = *(_QWORD *)&dest[700] | 0x8800000088LL;
  DWORD1(src[44]) = *(_DWORD *)&dest[708];
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
  *(_QWORD *)&dest[528] = aBourneShell_0;
  *(_QWORD *)&dest[536] = 12LL;
  *(_QWORD *)&dest[544] = aSh;
  *(_QWORD *)&dest[552] = 2LL;
  *(_QWORD *)&dest[560] = 0LL;
  *(_QWORD *)&dest[580] = 1114112LL;
  *(_WORD *)&dest[588] = 3337;
  *(_DWORD *)&dest[576] = 98;
  alloc::raw_vec::RawVec<T,A>::grow_one(&dest[296]);
  v2 = *(_QWORD *)&dest[304];
  **(_QWORD **)&dest[304] = aBourneShell_0;
  *(_QWORD *)(v2 + 8) = 12LL;
  *(_BYTE *)(v2 + 16) = 1;
  *(_QWORD *)&dest[312] = 1LL;
  memcpy(v28, dest, 0x250uLL);
  v3 = *(_QWORD *)&v28[9];
  if ( *(_QWORD *)&v28[9] == *(_QWORD *)&v28[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v28[8]);
  v4 = *((_QWORD *)&v28[8] + 1);
  v5 = 16 * v3;
  *(_QWORD *)(*((_QWORD *)&v28[8] + 1) + v5) = &unk_22A44;
  *(_QWORD *)(v4 + v5 + 8) = 7LL;
  *(_QWORD *)&v28[9] = v3 + 1;
  memcpy(dest, v28, 0x250uLL);
  *(_QWORD *)&v28[0] = 0LL;
  *((_QWORD *)&v28[0] + 1) = 1LL;
  *(_QWORD *)&v28[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v28, 0LL, 41LL);
  v6 = *((_QWORD *)&v28[0] + 1);
  v7 = *(_QWORD *)&v28[1];
  *(_OWORD *)(*((_QWORD *)&v28[0] + 1) + *(_QWORD *)&v28[1] + 25LL) = unk_22A64;
  qmemcpy((void *)(v6 + v7), "output Bourne shell code to set ", 32);
  *(_QWORD *)&v28[1] = v7 + 41;
  v8 = *(_QWORD *)&v28[0];
  if ( *(_QWORD *)&v28[0] != 0x8000000000000000LL )
    v28[0] = *(_OWORD *)((char *)v28 + 8);
  if ( *(_QWORD *)&dest[440] != 0x8000000000000000LL && *(_QWORD *)&dest[440] )
    _rust_dealloc(*(_QWORD *)&dest[448], *(_QWORD *)&dest[440], 1LL);
  *(_QWORD *)&dest[440] = v8;
  *(_OWORD *)&dest[448] = v28[0];
  memcpy(v28, dest, 0x24CuLL);
  *(_WORD *)((char *)&v28[36] + 13) = *(_WORD *)&dest[589];
  HIBYTE(v28[36]) = dest[591];
  BYTE12(v28[36]) = 2;
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
  *(_QWORD *)&src[33] = &unk_22A44;
  *((_QWORD *)&src[33] + 1) = 7LL;
  *(_QWORD *)&src[34] = aCsh;
  *((_QWORD *)&src[34] + 1) = 3LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)((char *)&src[36] + 4) = 1114112LL;
  WORD6(src[36]) = 3337;
  LODWORD(src[36]) = 99;
  alloc::raw_vec::RawVec<T,A>::grow_one((char *)&src[18] + 8);
  v9 = *(_QWORD *)&src[19];
  **(_QWORD **)&src[19] = &unk_22A44;
  *(_QWORD *)(v9 + 8) = 7LL;
  *(_BYTE *)(v9 + 16) = 1;
  *((_QWORD *)&src[19] + 1) = 1LL;
  memcpy(v28, src, 0x250uLL);
  v10 = *(_QWORD *)&v28[9];
  if ( *(_QWORD *)&v28[9] == *(_QWORD *)&v28[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v28[8]);
  v11 = *((_QWORD *)&v28[8] + 1);
  v12 = 16 * v10;
  *(_QWORD *)(*((_QWORD *)&v28[8] + 1) + v12) = aBourneShell_0;
  *(_QWORD *)(v11 + v12 + 8) = 12LL;
  *(_QWORD *)&v28[9] = v10 + 1;
  memcpy(src, v28, 0x250uLL);
  *(_QWORD *)&v28[0] = 0LL;
  *((_QWORD *)&v28[0] + 1) = 1LL;
  *(_QWORD *)&v28[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v28, 0LL, 36LL);
  v13 = *((_QWORD *)&v28[0] + 1);
  v14 = *(_QWORD *)&v28[1];
  *(_OWORD *)(*((_QWORD *)&v28[0] + 1) + *(_QWORD *)&v28[1] + 16LL) = unk_22A84;
  *(_OWORD *)(v13 + v14) = unk_22A74;
  *(_DWORD *)(v13 + v14 + 32) = 1397903180;
  *(_QWORD *)&v28[1] = v14 + 36;
  v15 = *(_QWORD *)&v28[0];
  if ( *(_QWORD *)&v28[0] != 0x8000000000000000LL )
    v28[0] = *(_OWORD *)((char *)v28 + 8);
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v15;
  src[28] = v28[0];
  memcpy(v28, src, 0x24CuLL);
  *(_WORD *)((char *)&v28[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v28[36]) = HIBYTE(src[36]);
  BYTE12(v28[36]) = 2;
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
  *(_QWORD *)&dest[528] = aPrintDatabase_0;
  *(_QWORD *)&dest[536] = 14LL;
  *(_QWORD *)&dest[544] = aPrintDatabase_0;
  *(_QWORD *)&dest[552] = 14LL;
  *(_QWORD *)&dest[560] = 0LL;
  *(_QWORD *)&dest[580] = 1114112LL;
  *(_WORD *)&dest[588] = 3337;
  *(_DWORD *)&dest[576] = 112;
  *(_QWORD *)&v28[0] = 0LL;
  *((_QWORD *)&v28[0] + 1) = 1LL;
  *(_QWORD *)&v28[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v28, 0LL, 21LL);
  v16 = *((_QWORD *)&v28[0] + 1);
  v17 = *(_QWORD *)&v28[1];
  *(_OWORD *)(*((_QWORD *)&v28[0] + 1) + *(_QWORD *)&v28[1]) = unk_22AA6;
  *(_QWORD *)(v16 + v17 + 13) = 0x73746E756F632065LL;
  *(_QWORD *)&v28[1] = v17 + 21;
  v18 = *(_QWORD *)&v28[0];
  if ( *(_QWORD *)&v28[0] != 0x8000000000000000LL )
    v28[0] = *(_OWORD *)((char *)v28 + 8);
  *(_QWORD *)&dest[440] = v18;
  *(_OWORD *)&dest[448] = v28[0];
  memcpy(v28, dest, 0x24CuLL);
  *(_WORD *)((char *)&v28[36] + 13) = *(_WORD *)&dest[589];
  HIBYTE(v28[36]) = dest[591];
  BYTE12(v28[36]) = 2;
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
  *(_QWORD *)&src[33] = aPrintLsColors_0;
  *((_QWORD *)&src[33] + 1) = 15LL;
  *(_QWORD *)&src[34] = aPrintLsColors_0;
  *((_QWORD *)&src[34] + 1) = 15LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000110000LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v28[0] = 0LL;
  *((_QWORD *)&v28[0] + 1) = 1LL;
  *(_QWORD *)&v28[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v28, 0LL, 39LL);
  v19 = *((_QWORD *)&v28[0] + 1);
  v20 = *(_QWORD *)&v28[1];
  *(_OWORD *)(*((_QWORD *)&v28[0] + 1) + *(_QWORD *)&v28[1] + 16LL) = unk_22ADA;
  *(_OWORD *)(v19 + v20) = unk_22ACA;
  *(_QWORD *)(v19 + v20 + 31) = 0x79616C7073696420LL;
  *(_QWORD *)&v28[1] = v20 + 39;
  v21 = *(_QWORD *)&v28[0];
  v24 = *(_OWORD *)((char *)v28 + 8);
  if ( *(_QWORD *)&v28[0] != 0x8000000000000000LL )
    v28[0] = *(_OWORD *)((char *)v28 + 8);
  *((_QWORD *)&src[27] + 1) = v21;
  src[28] = v28[0];
  memcpy(v28, src, 0x24CuLL);
  *(_WORD *)((char *)&v28[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v28[36]) = HIBYTE(src[36]);
  BYTE12(v28[36]) = 2;
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
  *(_OWORD *)&dest[24] = v24;
  *(_QWORD *)&dest[40] = 0LL;
  *(_QWORD *)&dest[56] = 0LL;
  *(_OWORD *)&dest[64] = *(_OWORD *)((char *)&v28[40] + 8);
  *(_QWORD *)&dest[80] = 5LL;
  *(_OWORD *)&dest[88] = *(_OWORD *)((char *)&v28[39] + 8);
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
  *(_OWORD *)&dest[448] = *(_OWORD *)((char *)&v28[38] + 8);
  *(_QWORD *)&dest[464] = 0x8000000000000000LL;
  *(_OWORD *)&dest[472] = v28[0];
  *(_OWORD *)&dest[488] = v28[1];
  *(_QWORD *)&dest[504] = 0x8000000000000001LL;
  *(_OWORD *)&dest[512] = *(_OWORD *)((char *)&v28[37] + 8);
  *(_QWORD *)&dest[528] = aFile;
  *(_QWORD *)&dest[536] = 4LL;
  *(_QWORD *)&dest[544] = 0LL;
  *(_QWORD *)&dest[560] = 0LL;
  *(_QWORD *)&dest[576] = 0x11000000110000LL;
  *(_DWORD *)&dest[584] = 4;
  dest[588] = 1;
  dest[591] = 0;
  *(_WORD *)&dest[589] = 3;
  v22 = v26;
  clap_builder::builder::command::Command::arg(v26, src);
  return v22;
}
