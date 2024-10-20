void *__fastcall uu_tee::uu_app(void *a1)
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
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rcx
  void *v32; // rbx
  _OWORD v34[37]; // [rsp+0h] [rbp-A58h] BYREF
  _OWORD v35[18]; // [rsp+250h] [rbp-808h] BYREF
  __int128 v36; // [rsp+370h] [rbp-6E8h] BYREF
  __int128 v37; // [rsp+380h] [rbp-6D8h]
  __int128 v38; // [rsp+390h] [rbp-6C8h]
  __int128 v39; // [rsp+3A0h] [rbp-6B8h]
  __int64 v40; // [rsp+3B0h] [rbp-6A8h]
  void *v41; // [rsp+3C0h] [rbp-698h]
  __int128 v42; // [rsp+3C8h] [rbp-690h]
  _BYTE src[712]; // [rsp+3D8h] [rbp-680h] BYREF
  _OWORD dest[45]; // [rsp+6A0h] [rbp-3B8h] BYREF
  __int128 v45; // [rsp+970h] [rbp-E8h]
  __int128 v46; // [rsp+980h] [rbp-D8h]
  __int128 v47; // [rsp+990h] [rbp-C8h]
  __int128 v48; // [rsp+9A0h] [rbp-B8h]
  __int64 v49; // [rsp+9B0h] [rbp-A8h]
  __int128 v50; // [rsp+9C0h] [rbp-98h]
  __int128 v51; // [rsp+9D0h] [rbp-88h]
  __int128 v52; // [rsp+9E0h] [rbp-78h]
  __int128 v53; // [rsp+9F0h] [rbp-68h]
  __int64 v54; // [rsp+A00h] [rbp-58h]
  __int128 v55; // [rsp+A10h] [rbp-48h]

  v41 = a1;
  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(src, xmmword_EC6B0, *((_QWORD *)&xmmword_EC6B0 + 1));
  *(_QWORD *)&src[608] = a0027;
  *(_QWORD *)&src[616] = 6LL;
  memcpy(dest, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(src, dest, aCopyStandardIn, 62LL);
  uucore::format_usage(v34, aOptionFile, 24LL);
  v1 = *(_QWORD *)&v34[0];
  if ( *(_QWORD *)&v34[0] != 0x8000000000000000LL )
    dest[0] = *(_OWORD *)((char *)v34 + 8);
  if ( *(_QWORD *)&src[464] != 0x8000000000000000LL && *(_QWORD *)&src[464] )
    _rust_dealloc(*(_QWORD *)&src[472], *(_QWORD *)&src[464], 1LL);
  *(_QWORD *)&src[464] = v1;
  *(_OWORD *)&src[472] = dest[0];
  memcpy(dest, src, 0x2C8uLL);
  clap_builder::builder::command::Command::after_help(src, dest, aIfAFileIsItRef, 45LL);
  memcpy(dest, src, 0x2BCuLL);
  *(_QWORD *)((char *)&dest[43] + 12) = *(_QWORD *)&src[700] | 0x4008000040080LL;
  DWORD1(dest[44]) = *(_DWORD *)&src[708];
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
  *(_QWORD *)&src[528] = aHelp;
  *(_QWORD *)&src[536] = 6LL;
  *(_QWORD *)&src[544] = anon_fc2b91500dea380c7cbb82546323e12f_35_llvm_12921794859373524128;
  *(_QWORD *)&src[552] = 4LL;
  *(_QWORD *)&src[560] = 0LL;
  *(_QWORD *)&src[576] = 0x11000000000068LL;
  *(_DWORD *)&src[584] = 0;
  *(_WORD *)&src[588] = 3337;
  *(_QWORD *)&v34[0] = 0LL;
  *((_QWORD *)&v34[0] + 1) = 1LL;
  *(_QWORD *)&v34[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v34, 0LL, 10LL);
  v2 = *((_QWORD *)&v34[0] + 1);
  v3 = *(_QWORD *)&v34[1];
  *(_QWORD *)(*((_QWORD *)&v34[0] + 1) + *(_QWORD *)&v34[1]) = 0x656820746E697250LL;
  *(_WORD *)(v2 + v3 + 8) = 28780;
  *(_QWORD *)&v34[1] = v3 + 10;
  v4 = *(_QWORD *)&v34[0];
  v35[0] = *(_OWORD *)((char *)v34 + 8);
  if ( *(_QWORD *)&v34[0] != 0x8000000000000000LL )
    v34[0] = v35[0];
  *(_QWORD *)&src[440] = v4;
  *(_OWORD *)&src[448] = v34[0];
  memcpy(v34, src, 0x24CuLL);
  *(_WORD *)((char *)&v34[36] + 13) = *(_WORD *)&src[589];
  HIBYTE(v34[36]) = src[591];
  BYTE12(v34[36]) = 7;
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
  *(_QWORD *)&dest[33] = aAppend_0;
  *((_QWORD *)&dest[33] + 1) = 6LL;
  *(_QWORD *)&dest[34] = aAppend_0;
  *((_QWORD *)&dest[34] + 1) = 6LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)((char *)&dest[36] + 4) = 1114112LL;
  WORD6(dest[36]) = 3337;
  LODWORD(dest[36]) = 97;
  *(_QWORD *)&v34[0] = 0LL;
  *((_QWORD *)&v34[0] + 1) = 1LL;
  *(_QWORD *)&v34[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v34, 0LL, 43LL);
  v5 = *((_QWORD *)&v34[0] + 1);
  v6 = *(_QWORD *)&v34[1];
  *(_OWORD *)(*((_QWORD *)&v34[0] + 1) + *(_QWORD *)&v34[1] + 27LL) = *(__int128 *)((char *)&xmmword_196A5 + 11);
  qmemcpy((void *)(v5 + v6), "append to the given FILEs, do no", 32);
  *(_QWORD *)&v34[1] = v6 + 43;
  v7 = *(_QWORD *)&v34[0];
  v35[0] = *(_OWORD *)((char *)v34 + 8);
  if ( *(_QWORD *)&v34[0] != 0x8000000000000000LL )
    v34[0] = v35[0];
  *((_QWORD *)&dest[27] + 1) = v7;
  dest[28] = v34[0];
  memcpy(v34, dest, 0x24CuLL);
  *(_WORD *)((char *)&v34[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(v34[36]) = HIBYTE(dest[36]);
  BYTE12(v34[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, src);
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
  *(_QWORD *)&src[528] = aIgnoreInterrup_0;
  *(_QWORD *)&src[536] = 17LL;
  *(_QWORD *)&src[544] = aIgnoreInterrup_0;
  *(_QWORD *)&src[552] = 17LL;
  *(_QWORD *)&src[560] = 0LL;
  *(_QWORD *)&src[580] = 1114112LL;
  *(_WORD *)&src[588] = 3337;
  *(_DWORD *)&src[576] = 105;
  *(_QWORD *)&v34[0] = 0LL;
  *((_QWORD *)&v34[0] + 1) = 1LL;
  *(_QWORD *)&v34[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v34, 0LL, 56LL);
  v8 = *((_QWORD *)&v34[0] + 1);
  v9 = *(_QWORD *)&v34[1];
  *(_OWORD *)(*((_QWORD *)&v34[0] + 1) + *(_QWORD *)&v34[1] + 32LL) = xmmword_196F1;
  qmemcpy((void *)(v8 + v9), "ignore interrupt signals (ignore", 32);
  *(_QWORD *)(v8 + v9 + 48) = 0x29736D726F667461LL;
  *(_QWORD *)&v34[1] = v9 + 56;
  v10 = *(_QWORD *)&v34[0];
  v35[0] = *(_OWORD *)((char *)v34 + 8);
  if ( *(_QWORD *)&v34[0] != 0x8000000000000000LL )
    v34[0] = v35[0];
  *(_QWORD *)&src[440] = v10;
  *(_OWORD *)&src[448] = v34[0];
  memcpy(v34, src, 0x24CuLL);
  *(_WORD *)((char *)&v34[36] + 13) = *(_WORD *)&src[589];
  HIBYTE(v34[36]) = src[591];
  BYTE12(v34[36]) = 2;
  clap_builder::builder::command::Command::arg(src, dest);
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
  *(_QWORD *)&v34[33] = aFile;
  *((_QWORD *)&v34[33] + 1) = 4LL;
  *(_QWORD *)&v34[34] = 0LL;
  *(_QWORD *)&v34[35] = 0LL;
  *(_QWORD *)&v34[36] = 0x11000000110000LL;
  DWORD2(v34[36]) = 0;
  WORD6(v34[36]) = 769;
  clap_builder::builder::command::Command::arg(dest, src);
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
  *(_QWORD *)&src[528] = aIgnorePipeErro_0;
  *(_QWORD *)&src[536] = 18LL;
  *(_QWORD *)&src[544] = 0LL;
  *(_QWORD *)&src[560] = 0LL;
  *(_QWORD *)&src[576] = 0x11000000000070LL;
  *(_DWORD *)&src[584] = 0;
  *(_WORD *)&src[588] = 3337;
  *(_QWORD *)&v34[0] = 0LL;
  *((_QWORD *)&v34[0] + 1) = 1LL;
  *(_QWORD *)&v34[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v34, 0LL, 56LL);
  v11 = *((_QWORD *)&v34[0] + 1);
  v12 = *(_QWORD *)&v34[1];
  *(_OWORD *)(*((_QWORD *)&v34[0] + 1) + *(_QWORD *)&v34[1] + 32LL) = xmmword_1973B;
  qmemcpy((void *)(v11 + v12), "set write error behavior (ignore", 32);
  *(_QWORD *)(v11 + v12 + 48) = 0x29736D726F667461LL;
  *(_QWORD *)&v34[1] = v12 + 56;
  v13 = *(_QWORD *)&v34[0];
  v35[0] = *(_OWORD *)((char *)v34 + 8);
  if ( *(_QWORD *)&v34[0] != 0x8000000000000000LL )
    v34[0] = v35[0];
  *(_QWORD *)&src[440] = v13;
  *(_OWORD *)&src[448] = v34[0];
  memcpy(v34, src, 0x24CuLL);
  *(_WORD *)((char *)&v34[36] + 13) = *(_WORD *)&src[589];
  HIBYTE(v34[36]) = src[591];
  BYTE12(v34[36]) = 2;
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
  dest[1] = 1uLL;
  dest[2] = 1uLL;
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
  *(_QWORD *)&dest[33] = aOutputError_0;
  *((_QWORD *)&dest[33] + 1) = 12LL;
  *(_QWORD *)&dest[34] = aOutputError_0;
  *((_QWORD *)&dest[34] + 1) = 12LL;
  *(_QWORD *)&dest[35] = 0LL;
  dest[36] = xmmword_10B30;
  *(_QWORD *)&v34[3] = aWarn;
  *((_QWORD *)&v34[3] + 1) = 4LL;
  *((_QWORD *)&v34[1] + 1) = 0x8000000000000000LL;
  v34[2] = v42;
  *(_QWORD *)&v34[0] = 0LL;
  *((_QWORD *)&v34[0] + 1) = 8LL;
  *(_QWORD *)&v34[1] = 0LL;
  LOBYTE(v34[4]) = 0;
  *(_QWORD *)&v35[0] = 0LL;
  *((_QWORD *)&v35[0] + 1) = 1LL;
  *(_QWORD *)&v35[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v35, 0LL, 49LL);
  v14 = *((_QWORD *)&v35[0] + 1);
  v15 = *(_QWORD *)&v35[1];
  *(_OWORD *)(*((_QWORD *)&v35[0] + 1) + *(_QWORD *)&v35[1] + 32LL) = xmmword_1977F;
  qmemcpy((void *)(v14 + v15), "produce warnings for errors writ", 32);
  *(_BYTE *)(v14 + v15 + 48) = 116;
  *(_QWORD *)&v35[1] = v15 + 49;
  v16 = *(_QWORD *)&v35[0];
  v36 = *(_OWORD *)((char *)v35 + 8);
  if ( *(_QWORD *)&v35[0] != 0x8000000000000000LL )
    v35[0] = v36;
  *((_QWORD *)&v34[1] + 1) = v16;
  v45 = v34[0];
  v46 = v34[1];
  v47 = v35[0];
  v48 = v34[3];
  v49 = *(_QWORD *)&v34[4];
  *(_QWORD *)&v34[3] = aWarnNopipe_0;
  *((_QWORD *)&v34[3] + 1) = 11LL;
  *((_QWORD *)&v34[1] + 1) = 0x8000000000000000LL;
  v34[2] = v42;
  *(_QWORD *)&v34[0] = 0LL;
  *((_QWORD *)&v34[0] + 1) = 8LL;
  *(_QWORD *)&v34[1] = 0LL;
  LOBYTE(v34[4]) = 0;
  *(_QWORD *)&v35[0] = 0LL;
  *((_QWORD *)&v35[0] + 1) = 1LL;
  *(_QWORD *)&v35[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v35, 0LL, 84LL);
  v17 = *((_QWORD *)&v35[0] + 1);
  v18 = *(_QWORD *)&v35[1];
  *(_OWORD *)(*((_QWORD *)&v35[0] + 1) + *(_QWORD *)&v35[1] + 64LL) = xmmword_197DB;
  qmemcpy((void *)(v17 + v18), "produce warnings for errors that are not pipe errors (ignored on", 64);
  *(_DWORD *)(v17 + v18 + 80) = 695430514;
  *(_QWORD *)&v35[1] = v18 + 84;
  v19 = *(_QWORD *)&v35[0];
  v36 = *(_OWORD *)((char *)v35 + 8);
  if ( *(_QWORD *)&v35[0] != 0x8000000000000000LL )
    v35[0] = v36;
  *((_QWORD *)&v34[1] + 1) = v19;
  v50 = v34[0];
  v51 = v34[1];
  v52 = v35[0];
  v53 = v34[3];
  v54 = *(_QWORD *)&v34[4];
  *(_QWORD *)&v34[3] = aExit_0;
  *((_QWORD *)&v34[3] + 1) = 4LL;
  *((_QWORD *)&v34[1] + 1) = 0x8000000000000000LL;
  v34[2] = v42;
  *(_QWORD *)&v34[0] = 0LL;
  *((_QWORD *)&v34[0] + 1) = 8LL;
  *(_QWORD *)&v34[1] = 0LL;
  LOBYTE(v34[4]) = 0;
  *(_QWORD *)&v35[0] = 0LL;
  *((_QWORD *)&v35[0] + 1) = 1LL;
  *(_QWORD *)&v35[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v35, 0LL, 34LL);
  v20 = *((_QWORD *)&v35[0] + 1);
  v21 = *(_QWORD *)&v35[1];
  *(_OWORD *)(*((_QWORD *)&v35[0] + 1) + *(_QWORD *)&v35[1] + 16LL) = xmmword_197FF;
  *(_OWORD *)(v20 + v21) = xmmword_197EF;
  *(_WORD *)(v20 + v21 + 32) = 29813;
  *(_QWORD *)&v35[1] = v21 + 34;
  v22 = *(_QWORD *)&v35[0];
  v36 = *(_OWORD *)((char *)v35 + 8);
  if ( *(_QWORD *)&v35[0] != 0x8000000000000000LL )
    v35[0] = v36;
  *((_QWORD *)&v34[1] + 1) = v22;
  v36 = v34[0];
  v37 = v34[1];
  v38 = v35[0];
  v39 = v34[3];
  v40 = *(_QWORD *)&v34[4];
  *(_QWORD *)&v34[3] = aExitNopipe_0;
  *((_QWORD *)&v34[3] + 1) = 11LL;
  *((_QWORD *)&v34[1] + 1) = 0x8000000000000000LL;
  v34[2] = v42;
  *(_QWORD *)&v34[0] = 0LL;
  *((_QWORD *)&v34[0] + 1) = 8LL;
  *(_QWORD *)&v34[1] = 0LL;
  LOBYTE(v34[4]) = 0;
  *(_QWORD *)&v35[0] = 0LL;
  *((_QWORD *)&v35[0] + 1) = 1LL;
  *(_QWORD *)&v35[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v35, 0LL, 102LL);
  v23 = *((_QWORD *)&v35[0] + 1);
  v24 = *(_QWORD *)&v35[1];
  *(_OWORD *)(*((_QWORD *)&v35[0] + 1) + *(_QWORD *)&v35[1] + 80LL) = xmmword_1986C;
  qmemcpy((void *)(v23 + v24), "exit on write errors to any output that are not pipe errors (equivalent to exit ", 80);
  *(_QWORD *)(v23 + v24 + 94) = 0x29736D726F667461LL;
  *(_QWORD *)&v35[1] = v24 + 102;
  v25 = *(_QWORD *)&v35[0];
  v55 = *(_OWORD *)((char *)v35 + 8);
  if ( *(_QWORD *)&v35[0] != 0x8000000000000000LL )
    v35[0] = v55;
  *((_QWORD *)&v34[1] + 1) = v25;
  *(_OWORD *)((char *)&v35[13] + 8) = v34[0];
  *(_OWORD *)((char *)&v35[14] + 8) = v34[1];
  *(_OWORD *)((char *)&v35[15] + 8) = v35[0];
  *(_OWORD *)((char *)&v35[16] + 8) = v34[3];
  *((_QWORD *)&v35[17] + 1) = *(_QWORD *)&v34[4];
  v35[0] = v45;
  v35[1] = v46;
  v35[2] = v47;
  v35[3] = v48;
  *(_QWORD *)&v35[4] = v49;
  *((_QWORD *)&v35[8] + 1) = v54;
  *(_OWORD *)((char *)&v35[7] + 8) = v53;
  *(_OWORD *)((char *)&v35[6] + 8) = v52;
  *(_OWORD *)((char *)&v35[5] + 8) = v51;
  *(_OWORD *)((char *)&v35[4] + 8) = v50;
  *(_QWORD *)&v35[13] = v40;
  v35[12] = v39;
  v35[11] = v38;
  v35[10] = v37;
  v35[9] = v36;
  memcpy(v34, v35, 0x120uLL);
  *(_QWORD *)&v34[18] = 0LL;
  *((_QWORD *)&v34[18] + 1) = 4LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v36, v34);
  clap_builder::builder::arg::Arg::value_parser(v34, dest);
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 24LL);
  v26 = *((_QWORD *)&dest[0] + 1);
  v27 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1]) = xmmword_19882;
  *(_QWORD *)(v26 + v27 + 16) = 0x726F697661686562LL;
  *(_QWORD *)&dest[1] = v27 + 24;
  v28 = *(_QWORD *)&dest[0];
  v35[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v35[0];
  if ( *((_QWORD *)&v34[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&v34[27] + 1) )
    _rust_dealloc(*(_QWORD *)&v34[28], *((_QWORD *)&v34[27] + 1), 1LL);
  *((_QWORD *)&v34[27] + 1) = v28;
  v34[28] = dest[0];
  memcpy(dest, v34, 0x250uLL);
  v29 = *((_QWORD *)&dest[7] + 1);
  if ( *((_QWORD *)&dest[7] + 1) == *((_QWORD *)&dest[6] + 1) )
    alloc::raw_vec::RawVec<T,A>::grow_one((char *)&dest[6] + 8);
  v30 = *(_QWORD *)&dest[7];
  v31 = 16 * v29;
  *(_QWORD *)(*(_QWORD *)&dest[7] + v31) = aIgnorePipeErro_0;
  *(_QWORD *)(v30 + v31 + 8) = 18LL;
  *((_QWORD *)&dest[7] + 1) = v29 + 1;
  memcpy(v34, dest, sizeof(v34));
  v32 = v41;
  clap_builder::builder::command::Command::arg(v41, src);
  return v32;
}
