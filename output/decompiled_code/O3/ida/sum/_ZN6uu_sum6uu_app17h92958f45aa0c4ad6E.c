void *__fastcall uu_sum::uu_app(void *dest)
{
  __int64 v1; // r14
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  _BYTE v9[592]; // [rsp+10h] [rbp-818h] BYREF
  _BYTE desta[712]; // [rsp+268h] [rbp-5C0h] BYREF
  _OWORD src[47]; // [rsp+530h] [rbp-2F8h] BYREF

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(src, qword_E4458, qword_E4460);
  *(_QWORD *)&src[38] = a0027;
  *((_QWORD *)&src[38] + 1) = 6LL;
  memcpy(desta, src, sizeof(desta));
  uucore::format_usage(v9, aOptionFile, 24LL);
  v1 = *(_QWORD *)v9;
  if ( *(_QWORD *)v9 != 0x8000000000000000LL )
    src[0] = *(_OWORD *)&v9[8];
  if ( 2LL * *(_QWORD *)&desta[464] )
    _rust_dealloc(*(_QWORD *)&desta[472], *(_QWORD *)&desta[464], 1LL);
  *(_QWORD *)&desta[464] = v1;
  *(_OWORD *)&desta[472] = src[0];
  memcpy(src, desta, 0x2C8uLL);
  clap_builder::builder::command::Command::about(desta, src, aChecksumAndCou, 0x5FuLL);
  memcpy(src, desta, 0x2BCuLL);
  *(_QWORD *)((char *)&src[43] + 12) = *(_QWORD *)&desta[700] | 0x8000000080LL;
  DWORD1(src[44]) = *(_DWORD *)&desta[708];
  *(_OWORD *)&v9[120] = 0LL;
  *(_OWORD *)&v9[144] = 0LL;
  *(_OWORD *)&v9[168] = 0LL;
  *(_OWORD *)&v9[192] = 0LL;
  *(_OWORD *)&v9[216] = 0LL;
  *(_OWORD *)&v9[240] = 0LL;
  *(_OWORD *)&v9[264] = 0LL;
  *(_OWORD *)&v9[288] = 0LL;
  *(_OWORD *)&v9[312] = 0LL;
  *(_OWORD *)&v9[336] = 0LL;
  *(_OWORD *)&v9[360] = 0LL;
  *(_OWORD *)&v9[384] = 0LL;
  *(_OWORD *)&v9[408] = 0LL;
  *(_QWORD *)v9 = 0LL;
  *(_QWORD *)&v9[16] = 0LL;
  *(_QWORD *)&v9[40] = 0LL;
  *(_QWORD *)&v9[56] = 0LL;
  *(_QWORD *)&v9[80] = 5LL;
  *(_QWORD *)&v9[104] = 0LL;
  *(_QWORD *)&v9[112] = 8LL;
  *(_QWORD *)&v9[136] = 8LL;
  *(_QWORD *)&v9[160] = 8LL;
  *(_QWORD *)&v9[184] = 8LL;
  *(_QWORD *)&v9[208] = 8LL;
  *(_QWORD *)&v9[232] = 8LL;
  *(_QWORD *)&v9[256] = 8LL;
  *(_QWORD *)&v9[280] = 8LL;
  *(_QWORD *)&v9[304] = 8LL;
  *(_QWORD *)&v9[328] = 4LL;
  *(_QWORD *)&v9[352] = 8LL;
  *(_QWORD *)&v9[376] = 8LL;
  *(_QWORD *)&v9[400] = 8LL;
  *(_QWORD *)&v9[424] = 8LL;
  *(_QWORD *)&v9[432] = 0LL;
  *(_QWORD *)&v9[440] = 0x8000000000000000LL;
  *(_QWORD *)&v9[464] = 0x8000000000000000LL;
  *(_QWORD *)&v9[504] = 0x8000000000000001LL;
  *(_QWORD *)&v9[528] = anon_d1e99227c112db6566ea026d21045f3e_0_llvm_8633280352999635387;
  *(_QWORD *)&v9[536] = 4LL;
  *(_QWORD *)&v9[544] = 0LL;
  *(_QWORD *)&v9[560] = 0LL;
  *(_OWORD *)&v9[576] = unk_10300;
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
  *(_QWORD *)&src[33] = &anon_d1e99227c112db6566ea026d21045f3e_1_llvm_8633280352999635387;
  *((_QWORD *)&src[33] + 1) = 1LL;
  *(_QWORD *)&src[34] = 0LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000000072LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)v9 = 0LL;
  *(_QWORD *)&v9[8] = 1LL;
  *(_QWORD *)&v9[16] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v9, 0LL, 50LL);
  v2 = *(_QWORD *)&v9[8];
  v3 = *(_QWORD *)&v9[16];
  *(_OWORD *)(*(_QWORD *)&v9[8] + *(_QWORD *)&v9[16] + 32LL) = unk_18CB4;
  qmemcpy((void *)(v2 + v3), "use the BSD sum algorithm, use 1", 32);
  *(_WORD *)(v2 + v3 + 48) = 10612;
  *(_QWORD *)&v9[16] = v3 + 50;
  v4 = *(_QWORD *)v9;
  if ( *(_QWORD *)v9 != 0x8000000000000000LL )
    *(_OWORD *)v9 = *(_OWORD *)&v9[8];
  *((_QWORD *)&src[27] + 1) = v4;
  src[28] = *(_OWORD *)v9;
  memcpy(v9, src, 0x24CuLL);
  *(_WORD *)&v9[589] = *(_WORD *)((char *)&src[36] + 13);
  v9[591] = HIBYTE(src[36]);
  v9[588] = 2;
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
  *(_QWORD *)&desta[528] = anon_d1e99227c112db6566ea026d21045f3e_2_llvm_8633280352999635387;
  *(_QWORD *)&desta[536] = 4LL;
  *(_QWORD *)&desta[544] = anon_d1e99227c112db6566ea026d21045f3e_2_llvm_8633280352999635387;
  *(_QWORD *)&desta[552] = 4LL;
  *(_QWORD *)&desta[560] = 0LL;
  *(_QWORD *)&desta[576] = 0x11000000000073LL;
  *(_DWORD *)&desta[584] = 0;
  *(_WORD *)&desta[588] = 3337;
  *(_QWORD *)v9 = 0LL;
  *(_QWORD *)&v9[8] = 1LL;
  *(_QWORD *)&v9[16] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v9, 0LL, 48LL);
  v5 = *(_QWORD *)&v9[8];
  v6 = *(_QWORD *)&v9[16];
  *(_OWORD *)(*(_QWORD *)&v9[8] + *(_QWORD *)&v9[16] + 32LL) = unk_18CE6;
  qmemcpy((void *)(v5 + v6), "use System V sum algorithm, use ", 32);
  *(_QWORD *)&v9[16] = v6 + 48;
  v7 = *(_QWORD *)v9;
  if ( *(_QWORD *)v9 != 0x8000000000000000LL )
    *(_OWORD *)v9 = *(_OWORD *)&v9[8];
  *(_QWORD *)&desta[440] = v7;
  *(_OWORD *)&desta[448] = *(_OWORD *)v9;
  memcpy(v9, desta, 0x24CuLL);
  *(_WORD *)&v9[589] = *(_WORD *)&desta[589];
  v9[591] = desta[591];
  v9[588] = 2;
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
