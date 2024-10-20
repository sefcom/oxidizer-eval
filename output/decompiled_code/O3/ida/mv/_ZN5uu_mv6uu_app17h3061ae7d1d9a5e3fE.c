void *__fastcall uu_mv::uu_app(void *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int16 v27; // r12
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  void *v43; // r15
  _OWORD v45[37]; // [rsp+0h] [rbp-AA8h] BYREF
  _OWORD dest[45]; // [rsp+250h] [rbp-858h] BYREF
  _BYTE src[712]; // [rsp+520h] [rbp-588h] BYREF
  void *v48; // [rsp+7E8h] [rbp-2C0h]
  __int64 v49; // [rsp+7F0h] [rbp-2B8h]
  unsigned __int64 v50; // [rsp+7F8h] [rbp-2B0h]
  __int64 v51; // [rsp+800h] [rbp-2A8h]
  __int64 v52; // [rsp+808h] [rbp-2A0h] BYREF
  __int128 v53; // [rsp+810h] [rbp-298h]
  _OWORD v54[40]; // [rsp+820h] [rbp-288h] BYREF

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(src, xmmword_137550, *((_QWORD *)&xmmword_137550 + 1));
  *(_QWORD *)&src[608] = a0027;
  *(_QWORD *)&src[616] = 6LL;
  memcpy(dest, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(src, dest, aMoveSourceToDe, 64LL);
  uucore::format_usage(v45, aOptionTSourceD, 104LL);
  v1 = *(_QWORD *)&v45[0];
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    dest[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&src[464] != 0x8000000000000000LL && *(_QWORD *)&src[464] )
    _rust_dealloc(*(_QWORD *)&src[472], *(_QWORD *)&src[464], 1LL);
  *(_QWORD *)&src[464] = v1;
  *(_OWORD *)&src[472] = dest[0];
  memcpy(dest, src, 0x2C8uLL);
  *(_QWORD *)&v45[0] = &off_130848;
  *((_QWORD *)&v45[0] + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v45[1] = &off_130838;
  *((_QWORD *)&v45[1] + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)src = &unk_130858;
  *(_QWORD *)&src[8] = 2LL;
  *(_QWORD *)&src[32] = 0LL;
  *(_QWORD *)&src[16] = v45;
  *(_QWORD *)&src[24] = 2LL;
  alloc::fmt::format::format_inner(&v52, src);
  v2 = v52;
  if ( v52 != 0x8000000000000000LL )
    *(_OWORD *)src = v53;
  v48 = a1;
  if ( *(_QWORD *)&dest[26] != 0x8000000000000000LL && *(_QWORD *)&dest[26] )
    _rust_dealloc(*((_QWORD *)&dest[26] + 1), *(_QWORD *)&dest[26], 1LL);
  *(_QWORD *)&dest[26] = v2;
  *(_OWORD *)((char *)&dest[26] + 8) = *(_OWORD *)src;
  memcpy(src, dest, 0x2BCuLL);
  *(_QWORD *)&src[700] = *(_QWORD *)((char *)&dest[43] + 12) | 0x8000000080LL;
  *(_DWORD *)&src[708] = DWORD1(dest[44]);
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
  *(_OWORD *)((char *)&dest[26] + 8) = 8uLL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = aForce;
  *((_QWORD *)&dest[33] + 1) = 5LL;
  *(_QWORD *)&dest[34] = aForce;
  *((_QWORD *)&dest[34] + 1) = 5LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000066LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v45, 0LL, 32LL);
  v3 = *((_QWORD *)&v45[0] + 1);
  v4 = *(_QWORD *)&v45[1];
  *(_OWORD *)(*((_QWORD *)&v45[0] + 1) + *(_QWORD *)&v45[1] + 16LL) = xmmword_1B938;
  *(_OWORD *)(v3 + v4) = xmmword_1B928;
  *(_QWORD *)&v45[1] = v4 + 32;
  v5 = *(_QWORD *)&v45[0];
  v54[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v45[0] = v54[0];
  *((_QWORD *)&dest[27] + 1) = v5;
  dest[28] = v45[0];
  memcpy(v45, dest, sizeof(v45));
  v6 = *(_QWORD *)&v45[9];
  if ( *(_QWORD *)&v45[8] - *(_QWORD *)&v45[9] <= 1uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v45[8], *(_QWORD *)&v45[9], 2LL);
    v6 = *(_QWORD *)&v45[9];
  }
  v7 = *((_QWORD *)&v45[8] + 1);
  v8 = 16 * v6;
  *(_QWORD *)(*((_QWORD *)&v45[8] + 1) + v8) = aInteractive;
  *(_QWORD *)(v7 + v8 + 8) = 11LL;
  *(_QWORD *)(v7 + v8 + 16) = aNoClobber;
  *(_QWORD *)(v7 + v8 + 24) = 10LL;
  *(_QWORD *)&v45[9] = v6 + 2;
  memcpy(v54, v45, 0x24CuLL);
  *(_WORD *)((char *)&v54[36] + 13) = *(_WORD *)((char *)&v45[36] + 13);
  HIBYTE(v54[36]) = HIBYTE(v45[36]);
  BYTE12(v54[36]) = 2;
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
  *(_QWORD *)&src[528] = aInteractive;
  *(_QWORD *)&src[536] = 11LL;
  *(_QWORD *)&src[544] = aInteractive;
  *(_QWORD *)&src[552] = 11LL;
  *(_QWORD *)&src[560] = 0LL;
  *(_QWORD *)&src[576] = 0x11000000000069LL;
  *(_DWORD *)&src[584] = 0;
  *(_WORD *)&src[588] = 3337;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v45, 0LL, 22LL);
  v9 = *((_QWORD *)&v45[0] + 1);
  v10 = *(_QWORD *)&v45[1];
  *(_OWORD *)(*((_QWORD *)&v45[0] + 1) + *(_QWORD *)&v45[1]) = xmmword_2135B;
  *(_QWORD *)(v9 + v10 + 14) = 0x656469727265766FLL;
  *(_QWORD *)&v45[1] = v10 + 22;
  v11 = *(_QWORD *)&v45[0];
  v54[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v45[0] = v54[0];
  *(_QWORD *)&src[440] = v11;
  *(_OWORD *)&src[448] = v45[0];
  memcpy(v45, src, sizeof(v45));
  v12 = *(_QWORD *)&v45[9];
  if ( *(_QWORD *)&v45[8] - *(_QWORD *)&v45[9] <= 1uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v45[8], *(_QWORD *)&v45[9], 2LL);
    v12 = *(_QWORD *)&v45[9];
  }
  v13 = *((_QWORD *)&v45[8] + 1);
  v14 = 16 * v12;
  *(_QWORD *)(*((_QWORD *)&v45[8] + 1) + v14) = aForce;
  *(_QWORD *)(v13 + v14 + 8) = 5LL;
  *(_QWORD *)(v13 + v14 + 16) = aNoClobber;
  *(_QWORD *)(v13 + v14 + 24) = 10LL;
  *(_QWORD *)&v45[9] = v12 + 2;
  memcpy(v54, v45, 0x24CuLL);
  *(_WORD *)((char *)&v54[36] + 13) = *(_WORD *)((char *)&v45[36] + 13);
  HIBYTE(v54[36]) = HIBYTE(v45[36]);
  BYTE12(v54[36]) = 2;
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
  *(_OWORD *)((char *)&dest[26] + 8) = 8uLL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = aNoClobber;
  *((_QWORD *)&dest[33] + 1) = 10LL;
  *(_QWORD *)&dest[34] = aNoClobber;
  *((_QWORD *)&dest[34] + 1) = 10LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x1100000000006ELL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v45, 0LL, 33LL);
  v15 = *((_QWORD *)&v45[0] + 1);
  v16 = *(_QWORD *)&v45[1];
  *(_OWORD *)(*((_QWORD *)&v45[0] + 1) + *(_QWORD *)&v45[1] + 16LL) = xmmword_21381;
  *(_OWORD *)(v15 + v16) = xmmword_21371;
  *(_BYTE *)(v15 + v16 + 32) = 101;
  *(_QWORD *)&v45[1] = v16 + 33;
  v17 = *(_QWORD *)&v45[0];
  v54[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v45[0] = v54[0];
  *((_QWORD *)&dest[27] + 1) = v17;
  dest[28] = v45[0];
  memcpy(v45, dest, sizeof(v45));
  v18 = *(_QWORD *)&v45[9];
  if ( *(_QWORD *)&v45[8] - *(_QWORD *)&v45[9] <= 1uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v45[8], *(_QWORD *)&v45[9], 2LL);
    v18 = *(_QWORD *)&v45[9];
  }
  v19 = *((_QWORD *)&v45[8] + 1);
  v20 = 16 * v18;
  *(_QWORD *)(*((_QWORD *)&v45[8] + 1) + v20) = aForce;
  *(_QWORD *)(v19 + v20 + 8) = 5LL;
  *(_QWORD *)(v19 + v20 + 16) = aInteractive;
  *(_QWORD *)(v19 + v20 + 24) = 11LL;
  *(_QWORD *)&v45[9] = v18 + 2;
  memcpy(v54, v45, 0x24CuLL);
  *(_WORD *)((char *)&v54[36] + 13) = *(_WORD *)((char *)&v45[36] + 13);
  HIBYTE(v54[36]) = HIBYTE(v45[36]);
  BYTE12(v54[36]) = 2;
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
  *(_QWORD *)&src[528] = aStripTrailingS;
  *(_QWORD *)&src[536] = 22LL;
  *(_QWORD *)&src[544] = aStripTrailingS;
  *(_QWORD *)&src[552] = 22LL;
  *(_QWORD *)&src[560] = 0LL;
  *(_QWORD *)&src[576] = 0x11000000110000LL;
  *(_DWORD *)&src[584] = 0;
  *(_WORD *)&src[588] = 3337;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v45, 0LL, 53LL);
  v21 = *((_QWORD *)&v45[0] + 1);
  v22 = *(_QWORD *)&v45[1];
  *(_OWORD *)(*((_QWORD *)&v45[0] + 1) + *(_QWORD *)&v45[1] + 32LL) = xmmword_213B2;
  qmemcpy((void *)(v21 + v22), "remove any trailing slashes from", 32);
  *(_QWORD *)(v21 + v22 + 45) = 0x746E656D75677261LL;
  *(_QWORD *)&v45[1] = v22 + 53;
  v23 = *(_QWORD *)&v45[0];
  v54[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v45[0] = v54[0];
  *(_QWORD *)&src[440] = v23;
  *(_OWORD *)&src[448] = v45[0];
  memcpy(v45, src, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)&src[589];
  HIBYTE(v45[36]) = src[591];
  BYTE12(v45[36]) = 2;
  clap_builder::builder::command::Command::arg(src, dest);
  uucore::features::backup_control::arguments::backup(v45);
  clap_builder::builder::command::Command::arg(dest, src);
  uucore::features::backup_control::arguments::backup_no_args(v45);
  clap_builder::builder::command::Command::arg(src, dest);
  uucore::features::backup_control::arguments::suffix(v45);
  clap_builder::builder::command::Command::arg(dest, src);
  uucore::features::update_control::arguments::update(v45);
  clap_builder::builder::command::Command::arg(src, dest);
  uucore::features::update_control::arguments::update_no_args(v45);
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
  *(_QWORD *)&v45[33] = aTargetDirector;
  *((_QWORD *)&v45[33] + 1) = 16LL;
  *(_QWORD *)&v45[34] = aTargetDirector;
  *((_QWORD *)&v45[34] + 1) = 16LL;
  *(_QWORD *)&v45[35] = 0LL;
  *(_QWORD *)&v45[36] = 0x11000000000074LL;
  DWORD2(v45[36]) = 0;
  WORD6(v45[36]) = 3337;
  *(_QWORD *)src = 0LL;
  *(_QWORD *)&src[8] = 1LL;
  *(_QWORD *)&src[16] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 40LL);
  v24 = *(_QWORD *)&src[8];
  v25 = *(_QWORD *)&src[16];
  *(_OWORD *)(*(_QWORD *)&src[8] + *(_QWORD *)&src[16] + 16LL) = xmmword_213D7;
  *(_OWORD *)(v24 + v25) = xmmword_213C7;
  *(_QWORD *)(v24 + v25 + 32) = 0x59524F5443455249LL;
  *(_QWORD *)&src[16] = v25 + 40;
  v26 = *(_QWORD *)src;
  v54[0] = *(_OWORD *)&src[8];
  if ( *(_QWORD *)src != 0x8000000000000000LL )
    *(_OWORD *)src = v54[0];
  *((_QWORD *)&v45[27] + 1) = v26;
  v45[28] = *(_OWORD *)src;
  memcpy(src, v45, 0x168uLL);
  memcpy(&src[368], &v45[23], 0xDDuLL);
  v27 = HIWORD(v45[36]);
  *(_QWORD *)&src[360] = *((_QWORD *)&v45[22] + 1);
  src[589] = 13;
  *(_WORD *)&src[590] = HIWORD(v45[36]);
  *(_QWORD *)&v54[0] = aDirectory;
  *((_QWORD *)&v54[0] + 1) = 9LL;
  *(_QWORD *)&v54[1] = 0LL;
  *((_QWORD *)&v54[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v45, v54);
  if ( *(_QWORD *)&src[344] )
    _rust_dealloc(*(_QWORD *)&src[352], 16LL * *(_QWORD *)&src[344], 8LL);
  *(_QWORD *)&src[360] = *(_QWORD *)&v45[1];
  *(_OWORD *)&src[344] = v45[0];
  memcpy(v45, src, 0x168uLL);
  memcpy(&v45[23], &src[368], 0xDDuLL);
  *((_QWORD *)&v45[22] + 1) = *(_QWORD *)&src[360];
  BYTE13(v45[36]) = 4;
  HIWORD(v45[36]) = v27;
  v28 = *((_QWORD *)&v45[7] + 1);
  if ( *((_QWORD *)&v45[7] + 1) == *((_QWORD *)&v45[6] + 1) )
    alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v45[6] + 8);
  v29 = *(_QWORD *)&v45[7];
  v30 = 16 * v28;
  *(_QWORD *)(*(_QWORD *)&v45[7] + v30) = aNoTargetDirect;
  *(_QWORD *)(v29 + v30 + 8) = 19LL;
  *((_QWORD *)&v45[7] + 1) = v28 + 1;
  memcpy(src, v45, 0x250uLL);
  v49 = 2LL;
  *(_QWORD *)&v54[1] = v51;
  v54[0] = __PAIR128__(v50, 2LL);
  clap_builder::builder::arg::Arg::value_parser(v45, src);
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
  *(_OWORD *)((char *)&dest[26] + 8) = 8uLL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = aNoTargetDirect;
  *((_QWORD *)&dest[33] + 1) = 19LL;
  *(_QWORD *)&dest[34] = aNoTargetDirect;
  *((_QWORD *)&dest[34] + 1) = 19LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000054LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v45, 0LL, 27LL);
  v31 = *((_QWORD *)&v45[0] + 1);
  v32 = *(_QWORD *)&v45[1];
  *(_OWORD *)(*((_QWORD *)&v45[0] + 1) + *(_QWORD *)&v45[1] + 11LL) = unk_21403;
  *(_OWORD *)(v31 + v32) = unk_213F8;
  *(_QWORD *)&v45[1] = v32 + 27;
  v33 = *(_QWORD *)&v45[0];
  v54[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v45[0] = v54[0];
  *((_QWORD *)&dest[27] + 1) = v33;
  dest[28] = v45[0];
  memcpy(v45, dest, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(v45[36]) = HIBYTE(dest[36]);
  BYTE12(v45[36]) = 2;
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
  *(_QWORD *)&src[528] = aVerbose;
  *(_QWORD *)&src[536] = 7LL;
  *(_QWORD *)&src[544] = aVerbose;
  *(_QWORD *)&src[552] = 7LL;
  *(_QWORD *)&src[560] = 0LL;
  *(_QWORD *)&src[576] = 0x11000000000076LL;
  *(_DWORD *)&src[584] = 0;
  *(_WORD *)&src[588] = 3337;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v45, 0LL, 26LL);
  v34 = *((_QWORD *)&v45[0] + 1);
  v35 = *(_QWORD *)&v45[1];
  *(_OWORD *)(*((_QWORD *)&v45[0] + 1) + *(_QWORD *)&v45[1] + 10LL) = unk_2141D;
  *(_OWORD *)(v34 + v35) = unk_21413;
  *(_QWORD *)&v45[1] = v35 + 26;
  v36 = *(_QWORD *)&v45[0];
  v54[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v45[0] = v54[0];
  *(_QWORD *)&src[440] = v36;
  *(_OWORD *)&src[448] = v45[0];
  memcpy(v45, src, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)&src[589];
  HIBYTE(v45[36]) = src[591];
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
  *(_OWORD *)((char *)&dest[26] + 8) = 8uLL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = aProgress;
  *((_QWORD *)&dest[33] + 1) = 8LL;
  *(_QWORD *)&dest[34] = aProgress;
  *((_QWORD *)&dest[34] + 1) = 8LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000067LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v45, 0LL, 78LL);
  v37 = *((_QWORD *)&v45[0] + 1);
  v38 = *(_QWORD *)&v45[1];
  *(_OWORD *)(*((_QWORD *)&v45[0] + 1) + *(_QWORD *)&v45[1] + 62LL) = unk_2146B;
  qmemcpy((void *)(v37 + v38), "Display a progress bar. \nNote: this feature is not supported by ", 64);
  *(_QWORD *)&v45[1] = v38 + 78;
  v39 = *(_QWORD *)&v45[0];
  v54[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v45[0] = v54[0];
  *((_QWORD *)&dest[27] + 1) = v39;
  dest[28] = v45[0];
  memcpy(v45, dest, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(v45[36]) = HIBYTE(dest[36]);
  BYTE12(v45[36]) = 2;
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
  *(_QWORD *)&src[16] = 1LL;
  *(_QWORD *)&src[24] = 1LL;
  *(_QWORD *)&src[32] = -1LL;
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
  *(_QWORD *)&src[528] = aFiles;
  *(_QWORD *)&src[536] = 5LL;
  *(_QWORD *)&src[544] = 0LL;
  *(_QWORD *)&src[560] = 0LL;
  *(_OWORD *)&src[576] = xmmword_17120;
  clap_builder::builder::arg::Arg::value_parser(v45, src);
  BYTE13(v45[36]) = 2;
  memcpy(v54, v45, 0x250uLL);
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
  *(_OWORD *)((char *)&dest[26] + 8) = 8uLL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = aDebug;
  *((_QWORD *)&dest[33] + 1) = 5LL;
  *(_QWORD *)&dest[34] = aDebug;
  *((_QWORD *)&dest[34] + 1) = 5LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000110000LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v45, 0LL, 40LL);
  v40 = *((_QWORD *)&v45[0] + 1);
  v41 = *(_QWORD *)&v45[1];
  *(_OWORD *)(*((_QWORD *)&v45[0] + 1) + *(_QWORD *)&v45[1] + 16LL) = unk_2148B;
  *(_OWORD *)(v40 + v41) = unk_2147B;
  *(_QWORD *)(v40 + v41 + 32) = 0x762D207365696C70LL;
  *(_QWORD *)&v45[1] = v41 + 40;
  v42 = *(_QWORD *)&v45[0];
  v54[0] = *(_OWORD *)((char *)v45 + 8);
  v43 = v48;
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v45[0] = v54[0];
  *((_QWORD *)&dest[27] + 1) = v42;
  dest[28] = v45[0];
  memcpy(v45, dest, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(v45[36]) = HIBYTE(dest[36]);
  BYTE12(v45[36]) = 2;
  clap_builder::builder::command::Command::arg(v48, src);
  return v43;
}
