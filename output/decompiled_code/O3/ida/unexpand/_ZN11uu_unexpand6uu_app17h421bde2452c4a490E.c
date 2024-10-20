void *__fastcall uu_unexpand::uu_app(void *dest)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int128 v16; // [rsp+0h] [rbp-838h] BYREF
  __int64 v17; // [rsp+10h] [rbp-828h]
  __int64 v18; // [rsp+18h] [rbp-820h]
  _OWORD v19[37]; // [rsp+20h] [rbp-818h] BYREF
  _BYTE desta[712]; // [rsp+278h] [rbp-5C0h] BYREF
  _OWORD src[47]; // [rsp+540h] [rbp-2F8h] BYREF

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(src, xmmword_EB970, *((_QWORD *)&xmmword_EB970 + 1));
  *(_QWORD *)&src[38] = a0027;
  *((_QWORD *)&src[38] + 1) = 6LL;
  memcpy(desta, src, sizeof(desta));
  uucore::format_usage(v19, aOptionFile, 24LL);
  v1 = *(_QWORD *)&v19[0];
  if ( *(_QWORD *)&v19[0] != 0x8000000000000000LL )
    src[0] = *(_OWORD *)((char *)v19 + 8);
  if ( *(_QWORD *)&desta[464] != 0x8000000000000000LL && *(_QWORD *)&desta[464] )
    _rust_dealloc(*(_QWORD *)&desta[472], *(_QWORD *)&desta[464], 1LL);
  *(_QWORD *)&desta[464] = v1;
  *(_OWORD *)&desta[472] = src[0];
  memcpy(src, desta, 0x2C8uLL);
  clap_builder::builder::command::Command::about(desta, src, aConvertBlanksI, 126LL);
  memcpy(src, desta, 0x2BCuLL);
  *(_QWORD *)((char *)&src[43] + 12) = *(_QWORD *)&desta[700] | 0x8000000080LL;
  DWORD1(src[44]) = *(_DWORD *)&desta[708];
  v19[7] = 8uLL;
  v19[9] = 0LL;
  v19[10] = 8uLL;
  v19[12] = 0LL;
  v19[13] = 8uLL;
  v19[15] = 0LL;
  v19[16] = 8uLL;
  v19[18] = 0LL;
  v19[19] = 8uLL;
  v19[21] = 0LL;
  v19[22] = 8uLL;
  v19[24] = 0LL;
  v19[25] = 8uLL;
  *(_QWORD *)&v19[0] = 0LL;
  *(_QWORD *)&v19[1] = 0LL;
  *((_QWORD *)&v19[2] + 1) = 0LL;
  *((_QWORD *)&v19[3] + 1) = 0LL;
  *(_QWORD *)&v19[5] = 5LL;
  *((_QWORD *)&v19[6] + 1) = 0LL;
  *((_QWORD *)&v19[8] + 1) = 8LL;
  *((_QWORD *)&v19[11] + 1) = 8LL;
  *((_QWORD *)&v19[14] + 1) = 8LL;
  *((_QWORD *)&v19[17] + 1) = 8LL;
  *((_QWORD *)&v19[20] + 1) = 4LL;
  *((_QWORD *)&v19[23] + 1) = 8LL;
  *((_QWORD *)&v19[26] + 1) = 8LL;
  *(_QWORD *)&v19[27] = 0LL;
  *((_QWORD *)&v19[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v19[29] = 0x8000000000000000LL;
  *((_QWORD *)&v19[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v19[33] = aFile;
  *((_QWORD *)&v19[33] + 1) = 4LL;
  *(_QWORD *)&v19[34] = 0LL;
  *(_QWORD *)&v19[35] = 0LL;
  v19[36] = unk_10BA0;
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
  *(_QWORD *)&src[33] = aAll;
  *((_QWORD *)&src[33] + 1) = 3LL;
  *(_QWORD *)&src[34] = aAll;
  *((_QWORD *)&src[34] + 1) = 3LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000000061LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v19[0] = 0LL;
  *((_QWORD *)&v19[0] + 1) = 1LL;
  *(_QWORD *)&v19[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v19, 0LL, 50LL);
  v2 = *((_QWORD *)&v19[0] + 1);
  v3 = *(_QWORD *)&v19[1];
  *(_OWORD *)(*((_QWORD *)&v19[0] + 1) + *(_QWORD *)&v19[1] + 32LL) = unk_1965E;
  qmemcpy((void *)(v2 + v3), "convert all blanks, instead of j", 32);
  *(_WORD *)(v2 + v3 + 48) = 29547;
  *(_QWORD *)&v19[1] = v3 + 50;
  v4 = *(_QWORD *)&v19[0];
  v16 = *(_OWORD *)((char *)v19 + 8);
  if ( *(_QWORD *)&v19[0] != 0x8000000000000000LL )
    v19[0] = v16;
  *((_QWORD *)&src[27] + 1) = v4;
  src[28] = v19[0];
  memcpy(v19, src, 0x24CuLL);
  *(_WORD *)((char *)&v19[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v19[36]) = HIBYTE(src[36]);
  BYTE12(v19[36]) = 2;
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
  *(_QWORD *)&desta[528] = aFirstOnly;
  *(_QWORD *)&desta[536] = 10LL;
  *(_QWORD *)&desta[544] = aFirstOnly;
  *(_QWORD *)&desta[552] = 10LL;
  *(_QWORD *)&desta[560] = 0LL;
  *(_QWORD *)&desta[576] = 0x11000000110000LL;
  *(_DWORD *)&desta[584] = 0;
  *(_WORD *)&desta[588] = 3337;
  *(_QWORD *)&v19[0] = 0LL;
  *((_QWORD *)&v19[0] + 1) = 1LL;
  *(_QWORD *)&v19[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v19, 0LL, 55LL);
  v5 = *((_QWORD *)&v19[0] + 1);
  v6 = *(_QWORD *)&v19[1];
  *(_OWORD *)(*((_QWORD *)&v19[0] + 1) + *(_QWORD *)&v19[1] + 32LL) = unk_19690;
  qmemcpy((void *)(v5 + v6), "convert only leading sequences o", 32);
  *(_QWORD *)(v5 + v6 + 47) = 0x29612D2073656469LL;
  *(_QWORD *)&v19[1] = v6 + 55;
  v7 = *(_QWORD *)&v19[0];
  v16 = *(_OWORD *)((char *)v19 + 8);
  if ( *(_QWORD *)&v19[0] != 0x8000000000000000LL )
    v19[0] = v16;
  *(_QWORD *)&desta[440] = v7;
  *(_OWORD *)&desta[448] = v19[0];
  memcpy(v19, desta, 0x24CuLL);
  *(_WORD *)((char *)&v19[36] + 13) = *(_WORD *)&desta[589];
  HIBYTE(v19[36]) = desta[591];
  BYTE12(v19[36]) = 2;
  clap_builder::builder::command::Command::arg(desta, src);
  v19[7] = 8uLL;
  v19[9] = 0LL;
  v19[10] = 8uLL;
  v19[12] = 0LL;
  v19[13] = 8uLL;
  v19[15] = 0LL;
  v19[16] = 8uLL;
  v19[18] = 0LL;
  v19[19] = 8uLL;
  v19[21] = 0LL;
  v19[22] = 8uLL;
  v19[24] = 0LL;
  v19[25] = 8uLL;
  *(_QWORD *)&v19[0] = 0LL;
  *(_QWORD *)&v19[1] = 0LL;
  *((_QWORD *)&v19[2] + 1) = 0LL;
  *((_QWORD *)&v19[3] + 1) = 0LL;
  *(_QWORD *)&v19[5] = 5LL;
  *((_QWORD *)&v19[6] + 1) = 0LL;
  *((_QWORD *)&v19[8] + 1) = 8LL;
  *((_QWORD *)&v19[11] + 1) = 8LL;
  *((_QWORD *)&v19[14] + 1) = 8LL;
  *((_QWORD *)&v19[17] + 1) = 8LL;
  *((_QWORD *)&v19[20] + 1) = 4LL;
  *((_QWORD *)&v19[23] + 1) = 8LL;
  *((_QWORD *)&v19[26] + 1) = 8LL;
  *(_QWORD *)&v19[27] = 0LL;
  *((_QWORD *)&v19[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v19[29] = 0x8000000000000000LL;
  *((_QWORD *)&v19[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v19[33] = &unk_12D94;
  *((_QWORD *)&v19[33] + 1) = 4LL;
  *(_QWORD *)&v19[34] = &unk_12D94;
  *((_QWORD *)&v19[34] + 1) = 4LL;
  *(_QWORD *)&v19[35] = 0LL;
  *(_QWORD *)&v19[36] = 0x11000000000074LL;
  DWORD2(v19[36]) = 0;
  WORD6(v19[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 99LL);
  v8 = *((_QWORD *)&src[0] + 1);
  v9 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 80LL) = unk_196F7;
  qmemcpy((void *)(v8 + v9), "use comma separated LIST of tab positions or have tabs N characters apart instea", 80);
  *(_DWORD *)(v8 + v9 + 95) = 694234400;
  *(_QWORD *)&src[1] = v9 + 99;
  v10 = *(_QWORD *)&src[0];
  v16 = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v16;
  *((_QWORD *)&v19[27] + 1) = v10;
  v19[28] = src[0];
  memcpy(src, v19, 360LL);
  v11 = *((_QWORD *)&v19[22] + 1);
  memcpy(&src[23], &v19[23], 220LL);
  *(_WORD *)((char *)&src[36] + 13) = *(_WORD *)((char *)&v19[36] + 13);
  HIBYTE(src[36]) = HIBYTE(v19[36]);
  *((_QWORD *)&src[22] + 1) = v11;
  BYTE12(src[36]) = 1;
  *(_QWORD *)&v16 = aNList;
  *((_QWORD *)&v16 + 1) = 7LL;
  v17 = 0LL;
  v18 = 1LL;
  ((void (__fastcall *)(_OWORD *, __int128 *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    v19,
    &v16);
  if ( *((_QWORD *)&src[21] + 1) )
    _rust_dealloc(*(_QWORD *)&src[22], 16LL * *((_QWORD *)&src[21] + 1), 8LL);
  *((_QWORD *)&src[22] + 1) = *(_QWORD *)&v19[1];
  *(_OWORD *)((char *)&src[21] + 8) = v19[0];
  memcpy(v19, src, sizeof(v19));
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
  *(_QWORD *)&desta[528] = aNoUtf8;
  *(_QWORD *)&desta[536] = 7LL;
  *(_QWORD *)&desta[544] = aNoUtf8;
  *(_QWORD *)&desta[552] = 7LL;
  *(_QWORD *)&desta[560] = 0LL;
  *(_QWORD *)&desta[576] = 0x11000000000055LL;
  *(_DWORD *)&desta[584] = 0;
  *(_WORD *)&desta[588] = 3337;
  *(_QWORD *)&v19[0] = 0LL;
  *((_QWORD *)&v19[0] + 1) = 1LL;
  *(_QWORD *)&v19[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v19, 0LL, 53LL);
  v12 = *((_QWORD *)&v19[0] + 1);
  v13 = *(_QWORD *)&v19[1];
  *(_OWORD *)(*((_QWORD *)&v19[0] + 1) + *(_QWORD *)&v19[1] + 32LL) = unk_19731;
  qmemcpy((void *)(v12 + v13), "interpret input file as 8-bit AS", 32);
  *(_QWORD *)(v12 + v13 + 45) = 0x382D465455206E61LL;
  *(_QWORD *)&v19[1] = v13 + 53;
  v14 = *(_QWORD *)&v19[0];
  v16 = *(_OWORD *)((char *)v19 + 8);
  if ( *(_QWORD *)&v19[0] != 0x8000000000000000LL )
    v19[0] = v16;
  *(_QWORD *)&desta[440] = v14;
  *(_OWORD *)&desta[448] = v19[0];
  memcpy(v19, desta, 0x24CuLL);
  *(_WORD *)((char *)&v19[36] + 13) = *(_WORD *)&desta[589];
  HIBYTE(v19[36]) = desta[591];
  BYTE12(v19[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
