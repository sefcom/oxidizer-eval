void *__fastcall uu_fold::uu_app(void *dest)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // r13
  __int128 v14; // [rsp+10h] [rbp-838h] BYREF
  __int64 v15; // [rsp+20h] [rbp-828h]
  __int64 v16; // [rsp+28h] [rbp-820h]
  _BYTE v17[588]; // [rsp+30h] [rbp-818h] BYREF
  int v18; // [rsp+27Ch] [rbp-5CCh]
  _OWORD src[45]; // [rsp+280h] [rbp-5C8h] BYREF
  _OWORD desta[47]; // [rsp+550h] [rbp-2F8h] BYREF

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(src, qword_E8A88, qword_E8A90);
  *(_QWORD *)&src[38] = a0027;
  *((_QWORD *)&src[38] + 1) = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  uucore::format_usage(v17, aOptionFile, 24LL);
  v1 = *(_QWORD *)v17;
  if ( *(_QWORD *)v17 != 0x8000000000000000LL )
    src[0] = *(_OWORD *)&v17[8];
  if ( *(_QWORD *)&desta[29] != 0x8000000000000000LL && *(_QWORD *)&desta[29] )
    _rust_dealloc(*((_QWORD *)&desta[29] + 1), *(_QWORD *)&desta[29], 1LL);
  *(_QWORD *)&desta[29] = v1;
  *(_OWORD *)((char *)&desta[29] + 8) = src[0];
  memcpy(src, desta, 0x2C8uLL);
  clap_builder::builder::command::Command::about(desta, src, aWritesEachFile, 104LL);
  memcpy(src, desta, 0x2BCuLL);
  *(_QWORD *)((char *)&src[43] + 12) = *(_QWORD *)((char *)&desta[43] + 12) | 0x8000000080LL;
  DWORD1(src[44]) = DWORD1(desta[44]);
  desta[7] = 8uLL;
  desta[9] = 0LL;
  desta[10] = 8uLL;
  desta[12] = 0LL;
  desta[13] = 8uLL;
  desta[15] = 0LL;
  desta[16] = 8uLL;
  desta[18] = 0LL;
  desta[19] = 8uLL;
  desta[21] = 0LL;
  desta[22] = 8uLL;
  desta[24] = 0LL;
  desta[25] = 8uLL;
  *(_QWORD *)&desta[0] = 0LL;
  *(_QWORD *)&desta[1] = 0LL;
  *((_QWORD *)&desta[2] + 1) = 0LL;
  *((_QWORD *)&desta[3] + 1) = 0LL;
  *(_QWORD *)&desta[5] = 5LL;
  *((_QWORD *)&desta[6] + 1) = 0LL;
  *((_QWORD *)&desta[8] + 1) = 8LL;
  *((_QWORD *)&desta[11] + 1) = 8LL;
  *((_QWORD *)&desta[14] + 1) = 8LL;
  *((_QWORD *)&desta[17] + 1) = 8LL;
  *((_QWORD *)&desta[20] + 1) = 4LL;
  *((_QWORD *)&desta[23] + 1) = 8LL;
  *((_QWORD *)&desta[26] + 1) = 8LL;
  *(_QWORD *)&desta[27] = 0LL;
  *((_QWORD *)&desta[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&desta[29] = 0x8000000000000000LL;
  *((_QWORD *)&desta[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&desta[33] = aBytes_1;
  *((_QWORD *)&desta[33] + 1) = 5LL;
  *(_QWORD *)&desta[34] = aBytes_1;
  *((_QWORD *)&desta[34] + 1) = 5LL;
  *(_QWORD *)&desta[35] = 0LL;
  *(_QWORD *)((char *)&desta[36] + 4) = 1114112LL;
  WORD6(desta[36]) = 3337;
  LODWORD(desta[36]) = 98;
  *(_QWORD *)v17 = 0LL;
  *(_QWORD *)&v17[8] = 1LL;
  *(_QWORD *)&v17[16] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v17, 0LL, 108LL);
  v2 = *(_QWORD *)&v17[8];
  v3 = *(_QWORD *)&v17[16];
  *(_OWORD *)(*(_QWORD *)&v17[8] + *(_QWORD *)&v17[16] + 92LL) = *(_OWORD *)&aCountUsingByte[92];
  qmemcpy(
    (void *)(v2 + v3),
    "count using bytes rather than columns (meaning control characters such as newline are not treate",
    96);
  *(_QWORD *)&v17[16] = v3 + 108;
  v4 = *(_QWORD *)v17;
  v14 = *(_OWORD *)&v17[8];
  if ( *(_QWORD *)v17 != 0x8000000000000000LL )
    *(_OWORD *)v17 = v14;
  *((_QWORD *)&desta[27] + 1) = v4;
  desta[28] = *(_OWORD *)v17;
  memcpy(v17, desta, sizeof(v17));
  *(_WORD *)((char *)&v18 + 1) = *(_WORD *)((char *)&desta[36] + 13);
  HIBYTE(v18) = HIBYTE(desta[36]);
  LOBYTE(v18) = 2;
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
  *(_QWORD *)&src[33] = aSpaces_0;
  *((_QWORD *)&src[33] + 1) = 6LL;
  *(_QWORD *)&src[34] = aSpaces_0;
  *((_QWORD *)&src[34] + 1) = 6LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)((char *)&src[36] + 4) = 1114112LL;
  WORD6(src[36]) = 3337;
  LODWORD(src[36]) = 115;
  *(_QWORD *)v17 = 0LL;
  *(_QWORD *)&v17[8] = 1LL;
  *(_QWORD *)&v17[16] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v17, 0LL, 57LL);
  v5 = *(_QWORD *)&v17[8];
  v6 = *(_QWORD *)&v17[16];
  *(_OWORD *)(*(_QWORD *)&v17[8] + *(_QWORD *)&v17[16] + 41LL) = unk_18FFA;
  qmemcpy((void *)(v5 + v6), "break lines at word boundaries rather than a har", 48);
  *(_QWORD *)&v17[16] = v6 + 57;
  v7 = *(_QWORD *)v17;
  v14 = *(_OWORD *)&v17[8];
  if ( *(_QWORD *)v17 != 0x8000000000000000LL )
    *(_OWORD *)v17 = v14;
  *((_QWORD *)&src[27] + 1) = v7;
  src[28] = *(_OWORD *)v17;
  memcpy(v17, src, sizeof(v17));
  *(_WORD *)((char *)&v18 + 1) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v18) = HIBYTE(src[36]);
  LOBYTE(v18) = 2;
  clap_builder::builder::command::Command::arg(src, desta);
  *(_OWORD *)&v17[120] = 0LL;
  *(_OWORD *)&v17[144] = 0LL;
  *(_OWORD *)&v17[168] = 0LL;
  *(_OWORD *)&v17[192] = 0LL;
  *(_OWORD *)&v17[216] = 0LL;
  *(_OWORD *)&v17[240] = 0LL;
  *(_OWORD *)&v17[264] = 0LL;
  *(_OWORD *)&v17[288] = 0LL;
  *(_OWORD *)&v17[312] = 0LL;
  *(_OWORD *)&v17[336] = 0LL;
  *(_OWORD *)&v17[360] = 0LL;
  *(_OWORD *)&v17[384] = 0LL;
  *(_OWORD *)&v17[408] = 0LL;
  *(_QWORD *)v17 = 0LL;
  *(_QWORD *)&v17[16] = 0LL;
  *(_QWORD *)&v17[40] = 0LL;
  *(_QWORD *)&v17[56] = 0LL;
  *(_QWORD *)&v17[80] = 5LL;
  *(_QWORD *)&v17[104] = 0LL;
  *(_QWORD *)&v17[112] = 8LL;
  *(_QWORD *)&v17[136] = 8LL;
  *(_QWORD *)&v17[160] = 8LL;
  *(_QWORD *)&v17[184] = 8LL;
  *(_QWORD *)&v17[208] = 8LL;
  *(_QWORD *)&v17[232] = 8LL;
  *(_QWORD *)&v17[256] = 8LL;
  *(_QWORD *)&v17[280] = 8LL;
  *(_QWORD *)&v17[304] = 8LL;
  *(_QWORD *)&v17[328] = 4LL;
  *(_QWORD *)&v17[352] = 8LL;
  *(_QWORD *)&v17[376] = 8LL;
  *(_QWORD *)&v17[400] = 8LL;
  *(_QWORD *)&v17[424] = 8LL;
  *(_QWORD *)&v17[432] = 0LL;
  *(_QWORD *)&v17[440] = 0x8000000000000000LL;
  *(_QWORD *)&v17[464] = 0x8000000000000000LL;
  *(_QWORD *)&v17[504] = 0x8000000000000001LL;
  *(_QWORD *)&v17[528] = aWidth_0;
  *(_QWORD *)&v17[536] = 5LL;
  *(_QWORD *)&v17[544] = aWidth_0;
  *(_QWORD *)&v17[552] = 5LL;
  *(_QWORD *)&v17[560] = 0LL;
  *(_QWORD *)&v17[580] = 1114112LL;
  LOWORD(v18) = 3337;
  *(_DWORD *)&v17[576] = 119;
  *(_QWORD *)&desta[0] = 0LL;
  *((_QWORD *)&desta[0] + 1) = 1LL;
  *(_QWORD *)&desta[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(desta, 0LL, 50LL);
  v8 = *((_QWORD *)&desta[0] + 1);
  v9 = *(_QWORD *)&desta[1];
  *(_OWORD *)(*((_QWORD *)&desta[0] + 1) + *(_QWORD *)&desta[1] + 32LL) = unk_1902F;
  qmemcpy((void *)(v8 + v9), "set WIDTH as the maximum line wi", 32);
  *(_WORD *)(v8 + v9 + 48) = 12344;
  *(_QWORD *)&desta[1] = v9 + 50;
  v10 = *(_QWORD *)&desta[0];
  v14 = *(_OWORD *)((char *)desta + 8);
  if ( *(_QWORD *)&desta[0] != 0x8000000000000000LL )
    desta[0] = v14;
  *(_QWORD *)&v17[440] = v10;
  *(_OWORD *)&v17[448] = desta[0];
  memcpy(desta, v17, 0x168uLL);
  memcpy(&desta[23], &v17[368], 0xD8uLL);
  v11 = v18;
  *((_QWORD *)&desta[22] + 1) = *(_QWORD *)&v17[360];
  DWORD2(desta[36]) = 0;
  HIDWORD(desta[36]) = v18;
  *(_QWORD *)&v14 = aWidth_1;
  *((_QWORD *)&v14 + 1) = 5LL;
  v15 = 0LL;
  v16 = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v17, &v14);
  if ( *((_QWORD *)&desta[21] + 1) )
    _rust_dealloc(*(_QWORD *)&desta[22], 16LL * *((_QWORD *)&desta[21] + 1), 8LL);
  *((_QWORD *)&desta[22] + 1) = *(_QWORD *)&v17[16];
  *(_OWORD *)((char *)&desta[21] + 8) = *(_OWORD *)v17;
  memcpy(v17, desta, 360LL);
  v12 = *((_QWORD *)&desta[22] + 1);
  memcpy(&v17[368], &desta[23], 216LL);
  *(_QWORD *)&v17[360] = v12;
  *(_DWORD *)&v17[584] = 32;
  v18 = v11;
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
  *(_QWORD *)&src[33] = aFile;
  *((_QWORD *)&src[33] + 1) = 4LL;
  *(_QWORD *)&src[34] = 0LL;
  *(_QWORD *)&src[35] = 0LL;
  src[36] = unk_10790;
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
