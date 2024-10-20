void *__fastcall uu_paste::uu_app(void *dest)
{
  __int64 v1; // r14
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // r14
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  _BYTE src[712]; // [rsp+8h] [rbp-A70h] BYREF
  _OWORD v17[37]; // [rsp+2D0h] [rbp-7A8h] BYREF
  _OWORD desta[45]; // [rsp+520h] [rbp-558h] BYREF
  _BYTE v19[584]; // [rsp+7F0h] [rbp-288h] BYREF
  __int64 v20; // [rsp+A38h] [rbp-40h]

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(src, qword_E1C80, qword_E1C88);
  *(_QWORD *)&src[608] = a0027;
  *(_QWORD *)&src[616] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(src, desta, aWriteLinesCons, 121LL);
  uucore::format_usage(v17, aOptionsFile, 22LL);
  v1 = *(_QWORD *)&v17[0];
  if ( *(_QWORD *)&v17[0] != 0x8000000000000000LL )
    desta[0] = *(_OWORD *)((char *)v17 + 8);
  if ( *(_QWORD *)&src[464] != 0x8000000000000000LL && *(_QWORD *)&src[464] )
    _rust_dealloc(*(_QWORD *)&src[472], *(_QWORD *)&src[464], 1LL);
  *(_QWORD *)&src[464] = v1;
  *(_OWORD *)&src[472] = desta[0];
  memcpy(desta, src, 0x2BCuLL);
  *(_QWORD *)((char *)&desta[43] + 12) = *(_QWORD *)&src[700] | 0x8000000080LL;
  DWORD1(desta[44]) = *(_DWORD *)&src[708];
  *(_OWORD *)&src[120] = 0LL;
  *(_OWORD *)&src[144] = 0LL;
  *(_OWORD *)&src[168] = 0LL;
  *(_OWORD *)&src[192] = 0LL;
  *(_OWORD *)&src[216] = 0LL;
  *(_OWORD *)&src[240] = 0LL;
  *(_OWORD *)&src[264] = 0LL;
  *(_OWORD *)&src[288] = 0LL;
  *(_OWORD *)&src[312] = 0LL;
  *(_OWORD *)&src[336] = 0LL;
  *(_OWORD *)&src[360] = 0LL;
  *(_OWORD *)&src[384] = 0LL;
  *(_OWORD *)&src[408] = 0LL;
  *(_QWORD *)src = 0LL;
  *(_QWORD *)&src[16] = 0LL;
  *(_QWORD *)&src[40] = 0LL;
  *(_QWORD *)&src[56] = 0LL;
  *(_QWORD *)&src[80] = 5LL;
  *(_QWORD *)&src[104] = 0LL;
  *(_QWORD *)&src[112] = 8LL;
  *(_QWORD *)&src[136] = 8LL;
  *(_QWORD *)&src[160] = 8LL;
  *(_QWORD *)&src[184] = 8LL;
  *(_QWORD *)&src[208] = 8LL;
  *(_QWORD *)&src[232] = 8LL;
  *(_QWORD *)&src[256] = 8LL;
  *(_QWORD *)&src[280] = 8LL;
  *(_QWORD *)&src[304] = 8LL;
  *(_QWORD *)&src[328] = 4LL;
  *(_QWORD *)&src[352] = 8LL;
  *(_QWORD *)&src[376] = 8LL;
  *(_QWORD *)&src[400] = 8LL;
  *(_QWORD *)&src[424] = 8LL;
  *(_QWORD *)&src[432] = 0LL;
  *(_QWORD *)&src[440] = 0x8000000000000000LL;
  *(_QWORD *)&src[464] = 0x8000000000000000LL;
  *(_QWORD *)&src[504] = 0x8000000000000001LL;
  *(_QWORD *)&src[528] = aSerial_0;
  *(_QWORD *)&src[536] = 6LL;
  *(_QWORD *)&src[544] = aSerial_0;
  *(_QWORD *)&src[552] = 6LL;
  *(_QWORD *)&src[560] = 0LL;
  *(_QWORD *)&src[580] = 1114112LL;
  *(_WORD *)&src[588] = 3337;
  *(_DWORD *)&src[576] = 115;
  *(_QWORD *)&v17[0] = 0LL;
  *((_QWORD *)&v17[0] + 1) = 1LL;
  *(_QWORD *)&v17[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v17, 0LL, 47LL);
  v2 = *((_QWORD *)&v17[0] + 1);
  v3 = *(_QWORD *)&v17[1];
  *(_OWORD *)(*((_QWORD *)&v17[0] + 1) + *(_QWORD *)&v17[1] + 31LL) = *(__int128 *)((char *)&xmmword_1877A + 15);
  qmemcpy((void *)(v2 + v3), "paste one file at a time instead", 32);
  *(_QWORD *)&v17[1] = v3 + 47;
  v4 = *(_QWORD *)&v17[0];
  *(_OWORD *)v19 = *(_OWORD *)((char *)v17 + 8);
  if ( *(_QWORD *)&v17[0] != 0x8000000000000000LL )
    v17[0] = *(_OWORD *)v19;
  *(_QWORD *)&src[440] = v4;
  *(_OWORD *)&src[448] = v17[0];
  memcpy(v17, src, 0x24CuLL);
  *(_WORD *)((char *)&v17[36] + 13) = *(_WORD *)&src[589];
  HIBYTE(v17[36]) = src[591];
  BYTE12(v17[36]) = 2;
  clap_builder::builder::command::Command::arg(src, desta);
  v17[7] = 8uLL;
  v17[9] = 0LL;
  v17[10] = 8uLL;
  v17[12] = 0LL;
  v17[13] = 8uLL;
  v17[15] = 0LL;
  v17[16] = 8uLL;
  v17[18] = 0LL;
  v17[19] = 8uLL;
  v17[21] = 0LL;
  v17[22] = 8uLL;
  v17[24] = 0LL;
  v17[25] = 8uLL;
  *(_QWORD *)&v17[0] = 0LL;
  *(_QWORD *)&v17[1] = 0LL;
  *((_QWORD *)&v17[2] + 1) = 0LL;
  *((_QWORD *)&v17[3] + 1) = 0LL;
  *(_QWORD *)&v17[5] = 5LL;
  *((_QWORD *)&v17[6] + 1) = 0LL;
  *((_QWORD *)&v17[8] + 1) = 8LL;
  *((_QWORD *)&v17[11] + 1) = 8LL;
  *((_QWORD *)&v17[14] + 1) = 8LL;
  *((_QWORD *)&v17[17] + 1) = 8LL;
  *((_QWORD *)&v17[20] + 1) = 4LL;
  *((_QWORD *)&v17[23] + 1) = 8LL;
  *((_QWORD *)&v17[26] + 1) = 8LL;
  *(_QWORD *)&v17[27] = 0LL;
  *((_QWORD *)&v17[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v17[29] = 0x8000000000000000LL;
  *((_QWORD *)&v17[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v17[33] = aDelimiters_0;
  *((_QWORD *)&v17[33] + 1) = 10LL;
  *(_QWORD *)&v17[34] = aDelimiters_0;
  *((_QWORD *)&v17[34] + 1) = 10LL;
  *(_QWORD *)&v17[35] = 0LL;
  *(_QWORD *)((char *)&v17[36] + 4) = 1114112LL;
  WORD6(v17[36]) = 3337;
  LODWORD(v17[36]) = 100;
  *(_QWORD *)&desta[0] = 0LL;
  *((_QWORD *)&desta[0] + 1) = 1LL;
  *(_QWORD *)&desta[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(desta, 0LL, 42LL);
  v5 = *((_QWORD *)&desta[0] + 1);
  v6 = *(_QWORD *)&desta[1];
  *(_OWORD *)(*((_QWORD *)&desta[0] + 1) + *(_QWORD *)&desta[1] + 26LL) = *(__int128 *)((char *)&xmmword_187B3 + 10);
  qmemcpy((void *)(v5 + v6), "reuse characters from LIST inste", 32);
  *(_QWORD *)&desta[1] = v6 + 42;
  v7 = *(_QWORD *)&desta[0];
  *(_OWORD *)v19 = *(_OWORD *)((char *)desta + 8);
  if ( *(_QWORD *)&desta[0] != 0x8000000000000000LL )
    desta[0] = *(_OWORD *)v19;
  *((_QWORD *)&v17[27] + 1) = v7;
  v17[28] = desta[0];
  memcpy(desta, v17, 0x168uLL);
  memcpy(&desta[23], &v17[23], 0xE0uLL);
  *((_QWORD *)&desta[22] + 1) = *((_QWORD *)&v17[22] + 1);
  *(_QWORD *)v19 = &unk_101F4;
  *(_QWORD *)&v19[8] = 4LL;
  clap_builder::builder::arg::Arg::value_names(v17, desta);
  memcpy(desta, v17, 0x250uLL);
  v8 = (_QWORD *)_rust_alloc(16LL, 8LL);
  if ( !v8 )
    alloc::raw_vec::handle_error(8LL, 16LL);
  v9 = v8;
  *v8 = asc_187CD;
  v8[1] = 1LL;
  if ( *(_QWORD *)&desta[23] )
    _rust_dealloc(*((_QWORD *)&desta[23] + 1), 16LL * *(_QWORD *)&desta[23], 8LL);
  *(_QWORD *)&desta[23] = 1LL;
  *((_QWORD *)&desta[23] + 1) = v9;
  *(_QWORD *)&desta[24] = 1LL;
  memcpy(v19, desta, sizeof(v19));
  v20 = *((_QWORD *)&desta[36] + 1) | 0x400LL;
  clap_builder::builder::command::Command::arg(desta, src);
  *(_OWORD *)&src[120] = 0LL;
  *(_OWORD *)&src[144] = 0LL;
  *(_OWORD *)&src[168] = 0LL;
  *(_OWORD *)&src[192] = 0LL;
  *(_OWORD *)&src[216] = 0LL;
  *(_OWORD *)&src[240] = 0LL;
  *(_OWORD *)&src[264] = 0LL;
  *(_OWORD *)&src[288] = 0LL;
  *(_OWORD *)&src[312] = 0LL;
  *(_OWORD *)&src[336] = 0LL;
  *(_OWORD *)&src[384] = 0LL;
  *(_OWORD *)&src[408] = 0LL;
  *(_QWORD *)src = 0LL;
  *(_QWORD *)&src[16] = 0LL;
  *(_QWORD *)&src[40] = 0LL;
  *(_QWORD *)&src[56] = 0LL;
  *(_QWORD *)&src[80] = 5LL;
  *(_QWORD *)&src[104] = 0LL;
  *(_QWORD *)&src[112] = 8LL;
  *(_QWORD *)&src[136] = 8LL;
  *(_QWORD *)&src[160] = 8LL;
  *(_QWORD *)&src[184] = 8LL;
  *(_QWORD *)&src[208] = 8LL;
  *(_QWORD *)&src[232] = 8LL;
  *(_QWORD *)&src[256] = 8LL;
  *(_QWORD *)&src[280] = 8LL;
  *(_QWORD *)&src[304] = 8LL;
  *(_QWORD *)&src[328] = 4LL;
  *(_QWORD *)&src[352] = 8LL;
  *(_OWORD *)&src[360] = 0LL;
  *(_QWORD *)&src[376] = 8LL;
  *(_QWORD *)&src[400] = 8LL;
  *(_QWORD *)&src[424] = 8LL;
  *(_QWORD *)&src[432] = 0LL;
  *(_QWORD *)&src[440] = 0x8000000000000000LL;
  *(_QWORD *)&src[464] = 0x8000000000000000LL;
  *(_QWORD *)&src[504] = 0x8000000000000001LL;
  *(_QWORD *)&src[528] = aFile_0;
  *(_QWORD *)&src[536] = 4LL;
  *(_QWORD *)&src[544] = 0LL;
  *(_QWORD *)&src[560] = 0LL;
  *(_QWORD *)&src[576] = 0x11000000110000LL;
  *(_DWORD *)&src[584] = 0;
  *(_WORD *)&src[588] = 3337;
  *(_QWORD *)v19 = aFile;
  *(_QWORD *)&v19[8] = 4LL;
  clap_builder::builder::arg::Arg::value_names(v17, src);
  BYTE12(v17[36]) = 1;
  memcpy(src, v17, 0x250uLL);
  v10 = (_QWORD *)_rust_alloc(16LL, 8LL);
  if ( !v10 )
    alloc::raw_vec::handle_error(8LL, 16LL);
  v11 = v10;
  *v10 = asc_187CE;
  v10[1] = 1LL;
  if ( *(_QWORD *)&src[368] )
    _rust_dealloc(*(_QWORD *)&src[376], 16LL * *(_QWORD *)&src[368], 8LL);
  *(_QWORD *)&src[368] = 1LL;
  *(_QWORD *)&src[376] = v11;
  *(_QWORD *)&src[384] = 1LL;
  memcpy(v17, src, 0x24DuLL);
  BYTE13(v17[36]) = 3;
  HIWORD(v17[36]) = *(_WORD *)&src[590];
  clap_builder::builder::command::Command::arg(src, desta);
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
  *(_QWORD *)&desta[33] = aZeroTerminated_0;
  *((_QWORD *)&desta[33] + 1) = 15LL;
  *(_QWORD *)&desta[34] = aZeroTerminated_0;
  *((_QWORD *)&desta[34] + 1) = 15LL;
  *(_QWORD *)&desta[35] = 0LL;
  *(_QWORD *)((char *)&desta[36] + 4) = 1114112LL;
  WORD6(desta[36]) = 3337;
  LODWORD(desta[36]) = 122;
  *(_QWORD *)&v17[0] = 0LL;
  *((_QWORD *)&v17[0] + 1) = 1LL;
  *(_QWORD *)&v17[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v17, 0LL, 34LL);
  v12 = *((_QWORD *)&v17[0] + 1);
  v13 = *(_QWORD *)&v17[1];
  *(_OWORD *)(*((_QWORD *)&v17[0] + 1) + *(_QWORD *)&v17[1] + 16LL) = xmmword_187EE;
  *(_OWORD *)(v12 + v13) = xmmword_187DE;
  *(_WORD *)(v12 + v13 + 32) = 25966;
  *(_QWORD *)&v17[1] = v13 + 34;
  v14 = *(_QWORD *)&v17[0];
  *(_OWORD *)v19 = *(_OWORD *)((char *)v17 + 8);
  if ( *(_QWORD *)&v17[0] != 0x8000000000000000LL )
    v17[0] = *(_OWORD *)v19;
  *((_QWORD *)&desta[27] + 1) = v14;
  desta[28] = v17[0];
  memcpy(v17, desta, 0x24CuLL);
  *(_WORD *)((char *)&v17[36] + 13) = *(_WORD *)((char *)&desta[36] + 13);
  HIBYTE(v17[36]) = HIBYTE(desta[36]);
  BYTE12(v17[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
