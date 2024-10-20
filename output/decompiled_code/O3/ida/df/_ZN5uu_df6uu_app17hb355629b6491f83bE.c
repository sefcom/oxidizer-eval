void *__fastcall uu_df::uu_app(void *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r14
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r14
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rbx
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // r14
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r14
  void *v74; // rbp
  int v75; // edx
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rbx
  _OWORD v80[45]; // [rsp+0h] [rbp-B08h] BYREF
  _OWORD dest[45]; // [rsp+2D0h] [rbp-838h] BYREF
  _OWORD src[37]; // [rsp+5A0h] [rbp-568h] BYREF
  __int128 v83; // [rsp+7F8h] [rbp-310h] BYREF
  __int128 v84; // [rsp+808h] [rbp-300h]
  void *v85; // [rsp+818h] [rbp-2F0h]
  _OWORD v86[37]; // [rsp+820h] [rbp-2E8h] BYREF
  __int64 v87; // [rsp+A70h] [rbp-98h]
  unsigned __int64 v88; // [rsp+A78h] [rbp-90h]
  __int64 v89; // [rsp+A80h] [rbp-88h]
  __int128 v90; // [rsp+A88h] [rbp-80h]
  __int128 v91; // [rsp+A98h] [rbp-70h]
  __int128 v92; // [rsp+AA8h] [rbp-60h]
  __int128 v93; // [rsp+AB8h] [rbp-50h]
  __int128 v94; // [rsp+AC8h] [rbp-40h]

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(v80, xmmword_1050A8, *((_QWORD *)&xmmword_1050A8 + 1));
  *(_QWORD *)&v80[38] = a0027;
  *((_QWORD *)&v80[38] + 1) = 6LL;
  memcpy(dest, v80, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v80, dest, aShowInformatio, 98LL);
  uucore::format_usage(src, aOptionFile, 24LL);
  v1 = *(_QWORD *)&src[0];
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    dest[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&v80[29] != 0x8000000000000000LL && *(_QWORD *)&v80[29] )
    _rust_dealloc(*((_QWORD *)&v80[29] + 1), *(_QWORD *)&v80[29], 1LL);
  *(_QWORD *)&v80[29] = v1;
  *(_OWORD *)((char *)&v80[29] + 8) = dest[0];
  memcpy(dest, v80, 0x2C8uLL);
  clap_builder::builder::command::Command::after_help(v80, dest, aDisplayValuesA, 372LL);
  memcpy(dest, v80, 0x2BCuLL);
  *(_QWORD *)((char *)&dest[43] + 12) = *(_QWORD *)((char *)&v80[43] + 12) | 0x4008000040080LL;
  DWORD1(dest[44]) = DWORD1(v80[44]);
  v80[7] = 8uLL;
  v80[9] = 0LL;
  v80[10] = 8uLL;
  v80[12] = 0LL;
  v80[13] = 8uLL;
  v80[15] = 0LL;
  v80[16] = 8uLL;
  v80[18] = 0LL;
  v80[19] = 8uLL;
  v80[21] = 0LL;
  v80[22] = 8uLL;
  v80[24] = 0LL;
  v80[25] = 8uLL;
  *(_QWORD *)&v80[0] = 0LL;
  *(_QWORD *)&v80[1] = 0LL;
  *((_QWORD *)&v80[2] + 1) = 0LL;
  *((_QWORD *)&v80[3] + 1) = 0LL;
  *(_QWORD *)&v80[5] = 5LL;
  *((_QWORD *)&v80[6] + 1) = 0LL;
  *((_QWORD *)&v80[8] + 1) = 8LL;
  *((_QWORD *)&v80[11] + 1) = 8LL;
  *((_QWORD *)&v80[14] + 1) = 8LL;
  *((_QWORD *)&v80[17] + 1) = 8LL;
  *((_QWORD *)&v80[20] + 1) = 4LL;
  *((_QWORD *)&v80[23] + 1) = 8LL;
  *((_QWORD *)&v80[26] + 1) = 8LL;
  *(_QWORD *)&v80[27] = 0LL;
  *((_QWORD *)&v80[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v80[29] = 0x8000000000000000LL;
  *((_QWORD *)&v80[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v80[33] = anon_fc2b91500dea380c7cbb82546323e12f_35_llvm_12921794859373524128;
  *((_QWORD *)&v80[33] + 1) = 4LL;
  *(_QWORD *)&v80[34] = anon_fc2b91500dea380c7cbb82546323e12f_35_llvm_12921794859373524128;
  *((_QWORD *)&v80[34] + 1) = 4LL;
  *(_QWORD *)&v80[35] = 0LL;
  *(_QWORD *)&v80[36] = 0x11000000110000LL;
  DWORD2(v80[36]) = 0;
  WORD6(v80[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 23LL);
  v2 = *((_QWORD *)&src[0] + 1);
  v3 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1]) = *(_OWORD *)aPrintHelpInfor;
  *(_QWORD *)(v2 + v3 + 15) = 0x2E6E6F6974616D72LL;
  *(_QWORD *)&src[1] = v3 + 23;
  v4 = *(_QWORD *)&src[0];
  v86[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v86[0];
  *((_QWORD *)&v80[27] + 1) = v4;
  v80[28] = src[0];
  memcpy(src, v80, 0x24CuLL);
  *(_WORD *)((char *)&src[36] + 13) = *(_WORD *)((char *)&v80[36] + 13);
  HIBYTE(src[36]) = HIBYTE(v80[36]);
  BYTE12(src[36]) = 5;
  clap_builder::builder::command::Command::arg(v80, dest);
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
  *(_QWORD *)&dest[33] = aAll;
  *((_QWORD *)&dest[33] + 1) = 3LL;
  *(_QWORD *)&dest[34] = aAll;
  *((_QWORD *)&dest[34] + 1) = 3LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000061LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  v5 = *((_QWORD *)&dest[8] + 1);
  **((_QWORD **)&dest[8] + 1) = aAll;
  *(_QWORD *)(v5 + 8) = 3LL;
  *(_QWORD *)&dest[9] = 1LL;
  memcpy(src, dest, sizeof(src));
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 26LL);
  v6 = *((_QWORD *)&dest[0] + 1);
  v7 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 10LL) = *(_OWORD *)&aPrintHelpInfor[33];
  *(_OWORD *)(v6 + v7) = *(_OWORD *)&aPrintHelpInfor[23];
  *(_QWORD *)&dest[1] = v7 + 26;
  v8 = *(_QWORD *)&dest[0];
  v86[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v86[0];
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v8;
  src[28] = dest[0];
  memcpy(v86, src, 0x24CuLL);
  *(_WORD *)((char *)&v86[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v86[36]) = HIBYTE(src[36]);
  BYTE12(v86[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v80);
  v80[7] = 8uLL;
  v80[9] = 0LL;
  v80[10] = 8uLL;
  v80[12] = 0LL;
  v80[13] = 8uLL;
  v80[15] = 0LL;
  v80[16] = 8uLL;
  v80[18] = 0LL;
  v80[19] = 8uLL;
  v80[21] = 0LL;
  v80[24] = 0LL;
  v80[25] = 8uLL;
  *(_QWORD *)&v80[0] = 0LL;
  *(_QWORD *)&v80[1] = 0LL;
  *(_OWORD *)((char *)&v80[1] + 8) = v94;
  *((_QWORD *)&v80[2] + 1) = 0LL;
  *((_QWORD *)&v80[3] + 1) = 0LL;
  v80[4] = v93;
  *(_QWORD *)&v80[5] = 5LL;
  *(_OWORD *)((char *)&v80[5] + 8) = v92;
  *((_QWORD *)&v80[6] + 1) = 0LL;
  *((_QWORD *)&v80[8] + 1) = 8LL;
  *((_QWORD *)&v80[11] + 1) = 8LL;
  *((_QWORD *)&v80[14] + 1) = 8LL;
  *((_QWORD *)&v80[17] + 1) = 8LL;
  *((_QWORD *)&v80[20] + 1) = 4LL;
  v80[22] = 8uLL;
  *((_QWORD *)&v80[23] + 1) = 8LL;
  *((_QWORD *)&v80[26] + 1) = 8LL;
  *(_QWORD *)&v80[27] = 0LL;
  *((_QWORD *)&v80[27] + 1) = 0x8000000000000000LL;
  v80[28] = v91;
  *(_QWORD *)&v80[29] = 0x8000000000000000LL;
  *(_OWORD *)((char *)&v80[30] + 8) = v84;
  *(_OWORD *)((char *)&v80[29] + 8) = v83;
  *((_QWORD *)&v80[31] + 1) = 0x8000000000000001LL;
  v80[32] = v90;
  *(_QWORD *)&v80[33] = &anon_5f995df778c88d2f993662794f843320_2_llvm_13646445757275454229;
  *((_QWORD *)&v80[33] + 1) = 9LL;
  *(_QWORD *)&v80[34] = aBlockSize;
  *((_QWORD *)&v80[34] + 1) = 10LL;
  *(_QWORD *)&v80[35] = 0LL;
  *(_QWORD *)&v80[36] = 0x11000000000042LL;
  DWORD2(v80[36]) = 0;
  WORD6(v80[36]) = 3337;
  *(_QWORD *)&v86[0] = &unk_ADC4;
  *((_QWORD *)&v86[0] + 1) = 4LL;
  *(_QWORD *)&v86[1] = 0LL;
  *((_QWORD *)&v86[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(src, v86);
  if ( *((_QWORD *)&v80[21] + 1) )
    _rust_dealloc(8LL, 16LL * *((_QWORD *)&v80[21] + 1), 8LL);
  *((_QWORD *)&v80[22] + 1) = *(_QWORD *)&src[1];
  *(_OWORD *)((char *)&v80[21] + 8) = src[0];
  memcpy(src, v80, sizeof(src));
  v9 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 1uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 2LL);
    v9 = *(_QWORD *)&src[9];
  }
  v10 = *((_QWORD *)&src[8] + 1);
  v11 = 16 * v9;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v11) = &unk_AE30;
  *(_QWORD *)(v10 + v11 + 8) = 4LL;
  *(_QWORD *)(v10 + v11 + 16) = &anon_5f995df778c88d2f993662794f843320_2_llvm_13646445757275454229;
  *(_QWORD *)(v10 + v11 + 24) = 9LL;
  *(_QWORD *)&src[9] = v9 + 2;
  memcpy(v80, src, 0x250uLL);
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 92LL);
  v12 = *((_QWORD *)&src[0] + 1);
  v13 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 76LL) = unk_1433B;
  qmemcpy((void *)(v12 + v13), "scale sizes by SIZE before printing them; e.g.'-BM' prints sizes in units of 1,0", 80);
  *(_QWORD *)&src[1] = v13 + 92;
  v14 = *(_QWORD *)&src[0];
  v86[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v86[0];
  if ( *((_QWORD *)&v80[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&v80[27] + 1) )
    _rust_dealloc(*(_QWORD *)&v80[28], *((_QWORD *)&v80[27] + 1), 1LL);
  *((_QWORD *)&v80[27] + 1) = v14;
  v80[28] = src[0];
  memcpy(src, v80, sizeof(src));
  clap_builder::builder::command::Command::arg(v80, dest);
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
  *(_QWORD *)&dest[33] = aTotal;
  *((_QWORD *)&dest[33] + 1) = 5LL;
  *(_QWORD *)&dest[34] = aTotal;
  *((_QWORD *)&dest[34] + 1) = 5LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000110000LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  v15 = *((_QWORD *)&dest[8] + 1);
  **((_QWORD **)&dest[8] + 1) = aTotal;
  *(_QWORD *)(v15 + 8) = 5LL;
  *(_QWORD *)&dest[9] = 1LL;
  memcpy(src, dest, sizeof(src));
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 21LL);
  v16 = *((_QWORD *)&dest[0] + 1);
  v17 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1]) = unk_1434B;
  *(_QWORD *)(v16 + v17 + 13) = 0x6C61746F7420646ELL;
  *(_QWORD *)&dest[1] = v17 + 21;
  v18 = *(_QWORD *)&dest[0];
  v86[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v86[0];
  v85 = a1;
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v18;
  src[28] = dest[0];
  memcpy(v86, src, 0x24CuLL);
  *(_WORD *)((char *)&v86[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v86[36]) = HIBYTE(src[36]);
  BYTE12(v86[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v80);
  v80[7] = 8uLL;
  v80[9] = 0LL;
  v80[10] = 8uLL;
  v80[12] = 0LL;
  v80[13] = 8uLL;
  v80[15] = 0LL;
  v80[16] = 8uLL;
  v80[18] = 0LL;
  v80[19] = 8uLL;
  v80[21] = 0LL;
  v80[22] = 8uLL;
  v80[24] = 0LL;
  v80[25] = 8uLL;
  *(_QWORD *)&v80[0] = 0LL;
  *(_QWORD *)&v80[1] = 0LL;
  *((_QWORD *)&v80[2] + 1) = 0LL;
  *((_QWORD *)&v80[3] + 1) = 0LL;
  *(_QWORD *)&v80[5] = 5LL;
  *((_QWORD *)&v80[6] + 1) = 0LL;
  *((_QWORD *)&v80[8] + 1) = 8LL;
  *((_QWORD *)&v80[11] + 1) = 8LL;
  *((_QWORD *)&v80[14] + 1) = 8LL;
  *((_QWORD *)&v80[17] + 1) = 8LL;
  *((_QWORD *)&v80[20] + 1) = 4LL;
  *((_QWORD *)&v80[23] + 1) = 8LL;
  *((_QWORD *)&v80[26] + 1) = 8LL;
  *(_QWORD *)&v80[27] = 0LL;
  *((_QWORD *)&v80[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v80[29] = 0x8000000000000000LL;
  *((_QWORD *)&v80[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v80[33] = aHumanReadableB;
  *((_QWORD *)&v80[33] + 1) = 21LL;
  *(_QWORD *)&v80[34] = aHumanReadable;
  *((_QWORD *)&v80[34] + 1) = 14LL;
  *(_QWORD *)&v80[35] = 0LL;
  *(_QWORD *)&v80[36] = 0x11000000000068LL;
  DWORD2(v80[36]) = 0;
  WORD6(v80[36]) = 3337;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v80[8], 0LL, 2LL);
  v19 = *(_QWORD *)&v80[9];
  v20 = *((_QWORD *)&v80[8] + 1);
  v21 = 16LL * *(_QWORD *)&v80[9];
  *(_QWORD *)(*((_QWORD *)&v80[8] + 1) + v21) = aHumanReadableD;
  *(_QWORD *)(v20 + v21 + 8) = 22LL;
  *(_QWORD *)(v20 + v21 + 16) = aHumanReadableB;
  *(_QWORD *)(v20 + v21 + 24) = 21LL;
  *(_QWORD *)&v80[9] = v19 + 2;
  memcpy(src, v80, sizeof(src));
  *(_QWORD *)&v80[0] = 0LL;
  *((_QWORD *)&v80[0] + 1) = 1LL;
  *(_QWORD *)&v80[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v80, 0LL, 55LL);
  v22 = *((_QWORD *)&v80[0] + 1);
  v23 = *(_QWORD *)&v80[1];
  *(_OWORD *)(*((_QWORD *)&v80[0] + 1) + *(_QWORD *)&v80[1] + 32LL) = unk_1438E;
  qmemcpy((void *)(v22 + v23), "print sizes in human readable fo", 32);
  *(_QWORD *)(v22 + v23 + 47) = 0x294732204D343332LL;
  *(_QWORD *)&v80[1] = v23 + 55;
  v24 = *(_QWORD *)&v80[0];
  v86[0] = *(_OWORD *)((char *)v80 + 8);
  if ( *(_QWORD *)&v80[0] != 0x8000000000000000LL )
    v80[0] = v86[0];
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v24;
  src[28] = v80[0];
  memcpy(v86, src, 0x24CuLL);
  *(_WORD *)((char *)&v86[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v86[36]) = HIBYTE(src[36]);
  BYTE12(v86[36]) = 2;
  clap_builder::builder::command::Command::arg(v80, dest);
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
  *(_QWORD *)&dest[33] = aHumanReadableD;
  *((_QWORD *)&dest[33] + 1) = 22LL;
  *(_QWORD *)&dest[34] = aSi;
  *((_QWORD *)&dest[34] + 1) = 2LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000048LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&dest[8], 0LL, 2LL);
  v25 = *(_QWORD *)&dest[9];
  v26 = *((_QWORD *)&dest[8] + 1);
  v27 = 16LL * *(_QWORD *)&dest[9];
  *(_QWORD *)(*((_QWORD *)&dest[8] + 1) + v27) = aHumanReadableB;
  *(_QWORD *)(v26 + v27 + 8) = 21LL;
  *(_QWORD *)(v26 + v27 + 16) = aHumanReadableD;
  *(_QWORD *)(v26 + v27 + 24) = 22LL;
  *(_QWORD *)&dest[9] = v25 + 2;
  memcpy(src, dest, sizeof(src));
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 41LL);
  v28 = *((_QWORD *)&dest[0] + 1);
  v29 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 25LL) = unk_143C0;
  qmemcpy((void *)(v28 + v29), "likewise, but use powers of 1000", 32);
  *(_QWORD *)&dest[1] = v29 + 41;
  v30 = *(_QWORD *)&dest[0];
  v86[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v86[0];
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v30;
  src[28] = dest[0];
  memcpy(v86, src, 0x24CuLL);
  *(_WORD *)((char *)&v86[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v86[36]) = HIBYTE(src[36]);
  BYTE12(v86[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v80);
  v80[7] = 8uLL;
  v80[9] = 0LL;
  v80[10] = 8uLL;
  v80[12] = 0LL;
  v80[13] = 8uLL;
  v80[15] = 0LL;
  v80[16] = 8uLL;
  v80[18] = 0LL;
  v80[19] = 8uLL;
  v80[21] = 0LL;
  v80[22] = 8uLL;
  v80[24] = 0LL;
  v80[25] = 8uLL;
  *(_QWORD *)&v80[0] = 0LL;
  *(_QWORD *)&v80[1] = 0LL;
  *((_QWORD *)&v80[2] + 1) = 0LL;
  *((_QWORD *)&v80[3] + 1) = 0LL;
  *(_QWORD *)&v80[5] = 5LL;
  *((_QWORD *)&v80[6] + 1) = 0LL;
  *((_QWORD *)&v80[8] + 1) = 8LL;
  *((_QWORD *)&v80[11] + 1) = 8LL;
  *((_QWORD *)&v80[14] + 1) = 8LL;
  *((_QWORD *)&v80[17] + 1) = 8LL;
  *((_QWORD *)&v80[20] + 1) = 4LL;
  *((_QWORD *)&v80[23] + 1) = 8LL;
  *((_QWORD *)&v80[26] + 1) = 8LL;
  *(_QWORD *)&v80[27] = 0LL;
  *((_QWORD *)&v80[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v80[29] = 0x8000000000000000LL;
  *((_QWORD *)&v80[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v80[33] = anon_5f995df778c88d2f993662794f843320_6_llvm_13646445757275454229;
  *((_QWORD *)&v80[33] + 1) = 6LL;
  *(_QWORD *)&v80[34] = anon_5f995df778c88d2f993662794f843320_6_llvm_13646445757275454229;
  *((_QWORD *)&v80[34] + 1) = 6LL;
  *(_QWORD *)&v80[35] = 0LL;
  *(_QWORD *)&v80[36] = 0x11000000000069LL;
  DWORD2(v80[36]) = 0;
  WORD6(v80[36]) = 3337;
  alloc::raw_vec::RawVec<T,A>::grow_one(&v80[8]);
  v31 = *((_QWORD *)&v80[8] + 1);
  **((_QWORD **)&v80[8] + 1) = anon_5f995df778c88d2f993662794f843320_6_llvm_13646445757275454229;
  *(_QWORD *)(v31 + 8) = 6LL;
  *(_QWORD *)&v80[9] = 1LL;
  memcpy(src, v80, sizeof(src));
  *(_QWORD *)&v80[0] = 0LL;
  *((_QWORD *)&v80[0] + 1) = 1LL;
  *(_QWORD *)&v80[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v80, 0LL, 45LL);
  v32 = *((_QWORD *)&v80[0] + 1);
  v33 = *(_QWORD *)&v80[1];
  *(_OWORD *)(*((_QWORD *)&v80[0] + 1) + *(_QWORD *)&v80[1] + 29LL) = unk_143ED;
  qmemcpy((void *)(v32 + v33), "list inode information instead o", 32);
  *(_QWORD *)&v80[1] = v33 + 45;
  v34 = *(_QWORD *)&v80[0];
  v86[0] = *(_OWORD *)((char *)v80 + 8);
  if ( *(_QWORD *)&v80[0] != 0x8000000000000000LL )
    v80[0] = v86[0];
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v34;
  src[28] = v80[0];
  memcpy(v86, src, 0x24CuLL);
  *(_WORD *)((char *)&v86[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v86[36]) = HIBYTE(src[36]);
  BYTE12(v86[36]) = 2;
  clap_builder::builder::command::Command::arg(v80, dest);
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
  *(_QWORD *)&dest[33] = &unk_AE30;
  *((_QWORD *)&dest[33] + 1) = 4LL;
  *(_QWORD *)&dest[34] = 0LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x1100000000006BLL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 20LL);
  v35 = *((_QWORD *)&src[0] + 1);
  v36 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1]) = unk_143FD;
  *(_DWORD *)(v35 + v36 + 16) = 1261518181;
  *(_QWORD *)&src[1] = v36 + 20;
  v37 = *(_QWORD *)&src[0];
  v86[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v86[0];
  *((_QWORD *)&dest[27] + 1) = v37;
  dest[28] = src[0];
  memcpy(src, dest, sizeof(src));
  v38 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[8] - *(_QWORD *)&src[9] <= 1uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], *(_QWORD *)&src[9], 2LL);
    v38 = *(_QWORD *)&src[9];
  }
  v39 = *((_QWORD *)&src[8] + 1);
  v40 = 16 * v38;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v40) = &anon_5f995df778c88d2f993662794f843320_2_llvm_13646445757275454229;
  *(_QWORD *)(v39 + v40 + 8) = 9LL;
  *(_QWORD *)(v39 + v40 + 16) = &unk_AE30;
  *(_QWORD *)(v39 + v40 + 24) = 4LL;
  *(_QWORD *)&src[9] = v38 + 2;
  memcpy(v86, src, 0x24CuLL);
  *(_WORD *)((char *)&v86[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v86[36]) = HIBYTE(src[36]);
  BYTE12(v86[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v80);
  v80[7] = 8uLL;
  v80[9] = 0LL;
  v80[10] = 8uLL;
  v80[12] = 0LL;
  v80[13] = 8uLL;
  v80[15] = 0LL;
  v80[16] = 8uLL;
  v80[18] = 0LL;
  v80[19] = 8uLL;
  v80[21] = 0LL;
  v80[22] = 8uLL;
  v80[24] = 0LL;
  v80[25] = 8uLL;
  *(_QWORD *)&v80[0] = 0LL;
  *(_QWORD *)&v80[1] = 0LL;
  *((_QWORD *)&v80[2] + 1) = 0LL;
  *((_QWORD *)&v80[3] + 1) = 0LL;
  *(_QWORD *)&v80[5] = 5LL;
  *((_QWORD *)&v80[6] + 1) = 0LL;
  *((_QWORD *)&v80[8] + 1) = 8LL;
  *((_QWORD *)&v80[11] + 1) = 8LL;
  *((_QWORD *)&v80[14] + 1) = 8LL;
  *((_QWORD *)&v80[17] + 1) = 8LL;
  *((_QWORD *)&v80[20] + 1) = 4LL;
  *((_QWORD *)&v80[23] + 1) = 8LL;
  *((_QWORD *)&v80[26] + 1) = 8LL;
  *(_QWORD *)&v80[27] = 0LL;
  *((_QWORD *)&v80[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v80[29] = 0x8000000000000000LL;
  *((_QWORD *)&v80[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v80[33] = aLocal;
  *((_QWORD *)&v80[33] + 1) = 5LL;
  *(_QWORD *)&v80[34] = aLocal;
  *((_QWORD *)&v80[34] + 1) = 5LL;
  *(_QWORD *)&v80[35] = 0LL;
  *(_QWORD *)&v80[36] = 0x1100000000006CLL;
  DWORD2(v80[36]) = 0;
  WORD6(v80[36]) = 3337;
  alloc::raw_vec::RawVec<T,A>::grow_one(&v80[8]);
  v41 = *((_QWORD *)&v80[8] + 1);
  **((_QWORD **)&v80[8] + 1) = aLocal;
  *(_QWORD *)(v41 + 8) = 5LL;
  *(_QWORD *)&v80[9] = 1LL;
  memcpy(src, v80, sizeof(src));
  *(_QWORD *)&v80[0] = 0LL;
  *((_QWORD *)&v80[0] + 1) = 1LL;
  *(_QWORD *)&v80[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v80, 0LL, 35LL);
  v42 = *((_QWORD *)&v80[0] + 1);
  v43 = *(_QWORD *)&v80[1];
  *(_OWORD *)(*((_QWORD *)&v80[0] + 1) + *(_QWORD *)&v80[1] + 16LL) = unk_14421;
  *(_OWORD *)(v42 + v43) = unk_14411;
  *(_DWORD *)(v42 + v43 + 31) = 1936549236;
  *(_QWORD *)&v80[1] = v43 + 35;
  v44 = *(_QWORD *)&v80[0];
  v86[0] = *(_OWORD *)((char *)v80 + 8);
  if ( *(_QWORD *)&v80[0] != 0x8000000000000000LL )
    v80[0] = v86[0];
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v44;
  src[28] = v80[0];
  memcpy(v86, src, 0x24CuLL);
  *(_WORD *)((char *)&v86[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v86[36]) = HIBYTE(src[36]);
  BYTE12(v86[36]) = 2;
  clap_builder::builder::command::Command::arg(v80, dest);
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
  *(_QWORD *)&dest[33] = aNoSync;
  *((_QWORD *)&dest[33] + 1) = 7LL;
  *(_QWORD *)&dest[34] = aNoSync;
  *((_QWORD *)&dest[34] + 1) = 7LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000110000LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&dest[8], 0LL, 2LL);
  v45 = *(_QWORD *)&dest[9];
  v46 = *((_QWORD *)&dest[8] + 1);
  v47 = 16LL * *(_QWORD *)&dest[9];
  *(_QWORD *)(*((_QWORD *)&dest[8] + 1) + v47) = aSync_0;
  *(_QWORD *)(v46 + v47 + 8) = 4LL;
  *(_QWORD *)(v46 + v47 + 16) = aNoSync;
  *(_QWORD *)(v46 + v47 + 24) = 7LL;
  *(_QWORD *)&dest[9] = v45 + 2;
  memcpy(src, dest, sizeof(src));
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 54LL);
  v48 = *((_QWORD *)&dest[0] + 1);
  v49 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 32LL) = unk_14454;
  qmemcpy((void *)(v48 + v49), "do not invoke sync before gettin", 32);
  *(_QWORD *)(v48 + v49 + 46) = 0x29746C7561666564LL;
  *(_QWORD *)&dest[1] = v49 + 54;
  v50 = *(_QWORD *)&dest[0];
  v86[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v86[0];
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v50;
  src[28] = dest[0];
  memcpy(v86, src, 0x24CuLL);
  *(_WORD *)((char *)&v86[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v86[36]) = HIBYTE(src[36]);
  BYTE12(v86[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v80);
  v80[7] = 8uLL;
  v80[9] = 0LL;
  v80[10] = 8uLL;
  v80[12] = 0LL;
  v80[13] = 8uLL;
  v80[15] = 0LL;
  v80[16] = 8uLL;
  v80[18] = 0LL;
  v80[19] = 8uLL;
  v80[21] = 0LL;
  v80[24] = 0LL;
  v80[25] = 8uLL;
  *(_QWORD *)&v80[0] = 0LL;
  *(_QWORD *)&v80[1] = 0LL;
  *((_QWORD *)&v80[2] + 1) = 0LL;
  *((_QWORD *)&v80[3] + 1) = 0LL;
  *(_QWORD *)&v80[5] = 5LL;
  *((_QWORD *)&v80[6] + 1) = 0LL;
  *((_QWORD *)&v80[8] + 1) = 8LL;
  *((_QWORD *)&v80[11] + 1) = 8LL;
  *((_QWORD *)&v80[14] + 1) = 8LL;
  *((_QWORD *)&v80[17] + 1) = 8LL;
  *((_QWORD *)&v80[20] + 1) = 4LL;
  v80[22] = 8uLL;
  *((_QWORD *)&v80[23] + 1) = 8LL;
  *((_QWORD *)&v80[26] + 1) = 8LL;
  *(_QWORD *)&v80[27] = 0LL;
  *((_QWORD *)&v80[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v80[29] = 0x8000000000000000LL;
  *((_QWORD *)&v80[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v80[33] = &anon_5f995df778c88d2f993662794f843320_10_llvm_13646445757275454229;
  *((_QWORD *)&v80[33] + 1) = 6LL;
  *(_QWORD *)&v80[34] = &anon_5f995df778c88d2f993662794f843320_10_llvm_13646445757275454229;
  *((_QWORD *)&v80[34] + 1) = 6LL;
  *(_QWORD *)&v80[35] = 0LL;
  v80[36] = xmmword_AAC0;
  *(_QWORD *)&v86[0] = aFieldList;
  *((_QWORD *)&v86[0] + 1) = 10LL;
  *(_QWORD *)&v86[1] = 0LL;
  *((_QWORD *)&v86[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(src, v86);
  if ( *((_QWORD *)&v80[21] + 1) )
    _rust_dealloc(8LL, 16LL * *((_QWORD *)&v80[21] + 1), 8LL);
  *((_QWORD *)&v80[22] + 1) = *(_QWORD *)&src[1];
  *(_OWORD *)((char *)&v80[21] + 8) = src[0];
  src[4] = v80[4];
  *(_OWORD *)((char *)&src[5] + 8) = *(_OWORD *)((char *)&v80[5] + 8);
  *(_OWORD *)((char *)&src[7] + 8) = *(_OWORD *)((char *)&v80[7] + 8);
  src[9] = v80[9];
  *(_OWORD *)((char *)&src[10] + 8) = *(_OWORD *)((char *)&v80[10] + 8);
  src[12] = v80[12];
  *(_OWORD *)((char *)&src[13] + 8) = *(_OWORD *)((char *)&v80[13] + 8);
  src[15] = v80[15];
  *(_OWORD *)((char *)&src[16] + 8) = *(_OWORD *)((char *)&v80[16] + 8);
  src[18] = v80[18];
  *(_OWORD *)((char *)&src[19] + 8) = *(_OWORD *)((char *)&v80[19] + 8);
  src[21] = v80[21];
  src[24] = v80[24];
  *(_OWORD *)((char *)&src[25] + 8) = *(_OWORD *)((char *)&v80[25] + 8);
  src[28] = v80[28];
  *(_OWORD *)((char *)&src[30] + 8) = *(_OWORD *)((char *)&v80[30] + 8);
  *(_OWORD *)((char *)&src[29] + 8) = *(_OWORD *)((char *)&v80[29] + 8);
  src[32] = v80[32];
  src[0] = v80[0];
  src[1] = 1uLL;
  *(_QWORD *)&src[2] = -1LL;
  *(_OWORD *)((char *)&src[2] + 8) = *(_OWORD *)((char *)&v80[2] + 8);
  *((_QWORD *)&src[3] + 1) = *((_QWORD *)&v80[3] + 1);
  *(_QWORD *)&src[5] = *(_QWORD *)&v80[5];
  *((_QWORD *)&src[6] + 1) = *((_QWORD *)&v80[6] + 1);
  *(_QWORD *)&src[7] = 8LL;
  *((_QWORD *)&src[8] + 1) = 8LL;
  *(_QWORD *)&src[10] = 8LL;
  *((_QWORD *)&src[11] + 1) = 8LL;
  *(_QWORD *)&src[13] = 8LL;
  *((_QWORD *)&src[14] + 1) = 8LL;
  *(_QWORD *)&src[16] = 8LL;
  *((_QWORD *)&src[17] + 1) = 8LL;
  *(_QWORD *)&src[19] = 8LL;
  *((_QWORD *)&src[20] + 1) = 4LL;
  src[22] = v80[22];
  *(_QWORD *)&src[23] = 0LL;
  *((_QWORD *)&src[23] + 1) = 8LL;
  *(_QWORD *)&src[25] = 8LL;
  *((_QWORD *)&src[26] + 1) = 8LL;
  *(_QWORD *)&src[27] = 0LL;
  *((_QWORD *)&src[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[29] = 0x8000000000000000LL;
  *((_QWORD *)&src[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&src[33] = &anon_5f995df778c88d2f993662794f843320_10_llvm_13646445757275454229;
  *((_QWORD *)&src[33] + 1) = 6LL;
  *(_QWORD *)&src[34] = &anon_5f995df778c88d2f993662794f843320_10_llvm_13646445757275454229;
  *((_QWORD *)&src[34] + 1) = 6LL;
  *(_QWORD *)&src[35] = 0LL;
  *((_QWORD *)&src[35] + 1) = *((_QWORD *)&v80[35] + 1);
  src[36] = unk_AB40;
  memcpy(v86, &uu_df::OUTPUT_FIELD_LIST, 0xC0uLL);
  clap_builder::builder::arg::Arg::value_parser(v80, src, v86);
  memcpy(v86, &uu_df::OUTPUT_FIELD_LIST, 0xC0uLL);
  *(_QWORD *)&v86[12] = 0LL;
  *((_QWORD *)&v86[12] + 1) = 12LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(src, v86);
  if ( *(_QWORD *)&v80[26] )
    _rust_dealloc(*((_QWORD *)&v80[26] + 1), 16LL * *(_QWORD *)&v80[26], 8LL);
  *(_QWORD *)&v80[27] = *(_QWORD *)&src[1];
  v80[26] = src[0];
  memcpy(src, v80, sizeof(src));
  *(_QWORD *)&v86[0] = aSource;
  *((_QWORD *)&v86[0] + 1) = 6LL;
  *(_QWORD *)&v86[1] = aSize;
  *((_QWORD *)&v86[1] + 1) = 4LL;
  *(_QWORD *)&v86[2] = aUsed;
  *((_QWORD *)&v86[2] + 1) = 4LL;
  *(_QWORD *)&v86[3] = aAvail;
  *((_QWORD *)&v86[3] + 1) = 5LL;
  *(_QWORD *)&v86[4] = aPcent;
  *((_QWORD *)&v86[4] + 1) = 5LL;
  *(_QWORD *)&v86[5] = aTarget;
  *((_QWORD *)&v86[5] + 1) = 6LL;
  *(_QWORD *)&v86[6] = 0LL;
  *((_QWORD *)&v86[6] + 1) = 6LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v80, v86);
  if ( *(_QWORD *)&src[23] )
    _rust_dealloc(*((_QWORD *)&src[23] + 1), 16LL * *(_QWORD *)&src[23], 8LL);
  *(_QWORD *)&src[24] = *(_QWORD *)&v80[1];
  src[23] = v80[0];
  memcpy(v80, src, 0x250uLL);
  v51 = *((_QWORD *)&v80[7] + 1);
  if ( *((_QWORD *)&v80[6] + 1) - *((_QWORD *)&v80[7] + 1) <= 2uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle((char *)&v80[6] + 8, *((_QWORD *)&v80[7] + 1), 3LL);
    v51 = *((_QWORD *)&v80[7] + 1);
  }
  v52 = *(_QWORD *)&v80[7];
  v53 = 16 * v51;
  *(_QWORD *)(*(_QWORD *)&v80[7] + v53) = anon_5f995df778c88d2f993662794f843320_6_llvm_13646445757275454229;
  *(_QWORD *)(v52 + v53 + 8) = 6LL;
  *(_QWORD *)(v52 + v53 + 16) = anon_5f995df778c88d2f993662794f843320_12_llvm_13646445757275454229;
  *(_QWORD *)(v52 + v53 + 24) = 11LL;
  *(_QWORD *)(v52 + v53 + 32) = anon_5f995df778c88d2f993662794f843320_15_llvm_13646445757275454229;
  *(_QWORD *)(v52 + v53 + 40) = 10LL;
  *((_QWORD *)&v80[7] + 1) = v51 + 3;
  memcpy(src, v80, sizeof(src));
  *(_QWORD *)&v80[0] = 0LL;
  *((_QWORD *)&v80[0] + 1) = 1LL;
  *(_QWORD *)&v80[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v80, 0LL, 90LL);
  v54 = *((_QWORD *)&v80[0] + 1);
  v55 = *(_QWORD *)&v80[1];
  *(_OWORD *)(*((_QWORD *)&v80[0] + 1) + *(_QWORD *)&v80[1] + 74LL) = unk_144BE;
  qmemcpy((void *)(v54 + v55), "use the output format defined by FIELD_LIST, or print all fields if FIELD_LIST i", 80);
  *(_QWORD *)&v80[1] = v55 + 90;
  v56 = *(_QWORD *)&v80[0];
  v86[0] = *(_OWORD *)((char *)v80 + 8);
  if ( *(_QWORD *)&v80[0] != 0x8000000000000000LL )
    v80[0] = v86[0];
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v56;
  src[28] = v80[0];
  memcpy(v86, src, sizeof(v86));
  clap_builder::builder::command::Command::arg(v80, dest);
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
  *(_QWORD *)&dest[33] = anon_5f995df778c88d2f993662794f843320_12_llvm_13646445757275454229;
  *((_QWORD *)&dest[33] + 1) = 11LL;
  *(_QWORD *)&dest[34] = anon_5f995df778c88d2f993662794f843320_12_llvm_13646445757275454229;
  *((_QWORD *)&dest[34] + 1) = 11LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000050LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  v57 = *((_QWORD *)&dest[8] + 1);
  **((_QWORD **)&dest[8] + 1) = anon_5f995df778c88d2f993662794f843320_12_llvm_13646445757275454229;
  *(_QWORD *)(v57 + 8) = 11LL;
  *(_QWORD *)&dest[9] = 1LL;
  memcpy(src, dest, sizeof(src));
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 27LL);
  v58 = *((_QWORD *)&dest[0] + 1);
  v59 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 11LL) = unk_144D9;
  *(_OWORD *)(v58 + v59) = unk_144CE;
  *(_QWORD *)&dest[1] = v59 + 27;
  v60 = *(_QWORD *)&dest[0];
  v86[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v86[0];
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v60;
  src[28] = dest[0];
  memcpy(v86, src, 0x24CuLL);
  *(_WORD *)((char *)&v86[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v86[36]) = HIBYTE(src[36]);
  BYTE12(v86[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, v80);
  v80[7] = 8uLL;
  v80[9] = 0LL;
  v80[10] = 8uLL;
  v80[12] = 0LL;
  v80[13] = 8uLL;
  v80[15] = 0LL;
  v80[16] = 8uLL;
  v80[18] = 0LL;
  v80[19] = 8uLL;
  v80[21] = 0LL;
  v80[22] = 8uLL;
  v80[24] = 0LL;
  v80[25] = 8uLL;
  *(_QWORD *)&v80[0] = 0LL;
  *(_QWORD *)&v80[1] = 0LL;
  *((_QWORD *)&v80[2] + 1) = 0LL;
  *((_QWORD *)&v80[3] + 1) = 0LL;
  *(_QWORD *)&v80[5] = 5LL;
  *((_QWORD *)&v80[6] + 1) = 0LL;
  *((_QWORD *)&v80[8] + 1) = 8LL;
  *((_QWORD *)&v80[11] + 1) = 8LL;
  *((_QWORD *)&v80[14] + 1) = 8LL;
  *((_QWORD *)&v80[17] + 1) = 8LL;
  *((_QWORD *)&v80[20] + 1) = 4LL;
  *((_QWORD *)&v80[23] + 1) = 8LL;
  *((_QWORD *)&v80[26] + 1) = 8LL;
  *(_QWORD *)&v80[27] = 0LL;
  *((_QWORD *)&v80[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v80[29] = 0x8000000000000000LL;
  *((_QWORD *)&v80[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v80[33] = aSync_0;
  *((_QWORD *)&v80[33] + 1) = 4LL;
  *(_QWORD *)&v80[34] = aSync_0;
  *((_QWORD *)&v80[34] + 1) = 4LL;
  *(_QWORD *)&v80[35] = 0LL;
  *(_QWORD *)&v80[36] = 0x11000000110000LL;
  DWORD2(v80[36]) = 0;
  WORD6(v80[36]) = 3337;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v80[8], 0LL, 2LL);
  v61 = *(_QWORD *)&v80[9];
  v62 = *((_QWORD *)&v80[8] + 1);
  v63 = 16LL * *(_QWORD *)&v80[9];
  *(_QWORD *)(*((_QWORD *)&v80[8] + 1) + v63) = aNoSync;
  *(_QWORD *)(v62 + v63 + 8) = 7LL;
  *(_QWORD *)(v62 + v63 + 16) = aSync_0;
  *(_QWORD *)(v62 + v63 + 24) = 4LL;
  *(_QWORD *)&v80[9] = v61 + 2;
  memcpy(src, v80, sizeof(src));
  *(_QWORD *)&v80[0] = 0LL;
  *((_QWORD *)&v80[0] + 1) = 1LL;
  *(_QWORD *)&v80[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v80, 0LL, 56LL);
  v64 = *((_QWORD *)&v80[0] + 1);
  v65 = *(_QWORD *)&v80[1];
  *(_OWORD *)(*((_QWORD *)&v80[0] + 1) + *(_QWORD *)&v80[1] + 32LL) = unk_14509;
  qmemcpy((void *)(v64 + v65), "invoke sync before getting usage", 32);
  *(_QWORD *)(v64 + v65 + 48) = 0x29796C6E6F207377LL;
  *(_QWORD *)&v80[1] = v65 + 56;
  v66 = *(_QWORD *)&v80[0];
  v86[0] = *(_OWORD *)((char *)v80 + 8);
  if ( *(_QWORD *)&v80[0] != 0x8000000000000000LL )
    v80[0] = v86[0];
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v66;
  src[28] = v80[0];
  memcpy(v86, src, 0x24CuLL);
  *(_WORD *)((char *)&v86[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v86[36]) = HIBYTE(src[36]);
  BYTE12(v86[36]) = 2;
  clap_builder::builder::command::Command::arg(v80, dest);
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
  *(_QWORD *)&dest[33] = &unk_AE70;
  *((_QWORD *)&dest[33] + 1) = 4LL;
  *(_QWORD *)&dest[34] = &unk_AE70;
  *((_QWORD *)&dest[34] + 1) = 4LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000074LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  v87 = 2LL;
  *(_QWORD *)&v86[1] = v89;
  v86[0] = __PAIR128__(v88, 2LL);
  clap_builder::builder::arg::Arg::value_parser(src, dest);
  memcpy(dest, src, 0x250uLL);
  *(_QWORD *)&v83 = aType;
  *((_QWORD *)&v83 + 1) = 4LL;
  *(_QWORD *)&v84 = 0LL;
  *((_QWORD *)&v84 + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v86, &v83);
  if ( *((_QWORD *)&dest[21] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[22], 16LL * *((_QWORD *)&dest[21] + 1), 8LL);
  *((_QWORD *)&dest[22] + 1) = *(_QWORD *)&v86[1];
  *(_OWORD *)((char *)&dest[21] + 8) = v86[0];
  memcpy(v86, dest, 0x24CuLL);
  *(_WORD *)((char *)&v86[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(v86[36]) = HIBYTE(dest[36]);
  BYTE12(v86[36]) = 1;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 42LL);
  v67 = *((_QWORD *)&dest[0] + 1);
  v68 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 26LL) = unk_1453B;
  qmemcpy((void *)(v67 + v68), "limit listing to file systems of", 32);
  *(_QWORD *)&dest[1] = v68 + 42;
  v69 = *(_QWORD *)&dest[0];
  src[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = src[0];
  if ( *((_QWORD *)&v86[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&v86[27] + 1) )
    _rust_dealloc(*(_QWORD *)&v86[28], *((_QWORD *)&v86[27] + 1), 1LL);
  *((_QWORD *)&v86[27] + 1) = v69;
  v86[28] = dest[0];
  memcpy(src, v86, sizeof(src));
  clap_builder::builder::command::Command::arg(dest, v80);
  v80[7] = 8uLL;
  v80[9] = 0LL;
  v80[10] = 8uLL;
  v80[12] = 0LL;
  v80[13] = 8uLL;
  v80[15] = 0LL;
  v80[16] = 8uLL;
  v80[18] = 0LL;
  v80[19] = 8uLL;
  v80[21] = 0LL;
  v80[22] = 8uLL;
  v80[24] = 0LL;
  v80[25] = 8uLL;
  *(_QWORD *)&v80[0] = 0LL;
  *(_QWORD *)&v80[1] = 0LL;
  *((_QWORD *)&v80[2] + 1) = 0LL;
  *((_QWORD *)&v80[3] + 1) = 0LL;
  *(_QWORD *)&v80[5] = 5LL;
  *((_QWORD *)&v80[6] + 1) = 0LL;
  *((_QWORD *)&v80[8] + 1) = 8LL;
  *((_QWORD *)&v80[11] + 1) = 8LL;
  *((_QWORD *)&v80[14] + 1) = 8LL;
  *((_QWORD *)&v80[17] + 1) = 8LL;
  *((_QWORD *)&v80[20] + 1) = 4LL;
  *((_QWORD *)&v80[23] + 1) = 8LL;
  *((_QWORD *)&v80[26] + 1) = 8LL;
  *(_QWORD *)&v80[27] = 0LL;
  *((_QWORD *)&v80[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v80[29] = 0x8000000000000000LL;
  *((_QWORD *)&v80[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v80[33] = anon_5f995df778c88d2f993662794f843320_15_llvm_13646445757275454229;
  *((_QWORD *)&v80[33] + 1) = 10LL;
  *(_QWORD *)&v80[34] = anon_5f995df778c88d2f993662794f843320_15_llvm_13646445757275454229;
  *((_QWORD *)&v80[34] + 1) = 10LL;
  *(_QWORD *)&v80[35] = 0LL;
  *(_QWORD *)&v80[36] = 0x11000000000054LL;
  DWORD2(v80[36]) = 0;
  WORD6(v80[36]) = 3337;
  alloc::raw_vec::RawVec<T,A>::grow_one(&v80[8]);
  v70 = *((_QWORD *)&v80[8] + 1);
  **((_QWORD **)&v80[8] + 1) = anon_5f995df778c88d2f993662794f843320_15_llvm_13646445757275454229;
  *(_QWORD *)(v70 + 8) = 10LL;
  *(_QWORD *)&v80[9] = 1LL;
  memcpy(src, v80, sizeof(src));
  *(_QWORD *)&v80[0] = 0LL;
  *((_QWORD *)&v80[0] + 1) = 1LL;
  *(_QWORD *)&v80[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v80, 0LL, 22LL);
  v71 = *((_QWORD *)&v80[0] + 1);
  v72 = *(_QWORD *)&v80[1];
  *(_OWORD *)(*((_QWORD *)&v80[0] + 1) + *(_QWORD *)&v80[1]) = unk_1454B;
  *(_QWORD *)(v71 + v72 + 14) = 0x65707974206D6574LL;
  *(_QWORD *)&v80[1] = v72 + 22;
  v73 = *(_QWORD *)&v80[0];
  v86[0] = *(_OWORD *)((char *)v80 + 8);
  v74 = v85;
  if ( *(_QWORD *)&v80[0] != 0x8000000000000000LL )
    v80[0] = v86[0];
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v73;
  src[28] = v80[0];
  memcpy(v86, src, 0x24CuLL);
  *(_WORD *)((char *)&v86[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v86[36]) = HIBYTE(src[36]);
  BYTE12(v86[36]) = 2;
  clap_builder::builder::command::Command::arg(v80, dest);
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
  *(_QWORD *)&dest[33] = aExcludeType;
  *((_QWORD *)&dest[33] + 1) = 12LL;
  *(_QWORD *)&dest[34] = aExcludeType;
  *((_QWORD *)&dest[34] + 1) = 12LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000078LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3329;
  clap_builder::builder::arg::Arg::value_parser(src, dest);
  memcpy(dest, src, 0x250uLL);
  *(_QWORD *)&v83 = aType;
  *((_QWORD *)&v83 + 1) = 4LL;
  *(_QWORD *)&v84 = 0LL;
  *((_QWORD *)&v84 + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v86, &v83);
  if ( *((_QWORD *)&dest[21] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[22], 16LL * *((_QWORD *)&dest[21] + 1), 8LL);
  *((_QWORD *)&dest[22] + 1) = *(_QWORD *)&v86[1];
  *(_OWORD *)((char *)&dest[21] + 8) = v86[0];
  memcpy(v86, dest, 0x244uLL);
  v75 = 44;
  if ( DWORD1(dest[36]) != 1114112 )
    v75 = DWORD1(dest[36]);
  DWORD1(v86[36]) = v75;
  *((_QWORD *)&v86[36] + 1) = *((_QWORD *)&dest[36] + 1);
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 46LL);
  v76 = *((_QWORD *)&dest[0] + 1);
  v77 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 30LL) = unk_1457F;
  qmemcpy((void *)(v76 + v77), "limit listing to file systems no", 32);
  *(_QWORD *)&dest[1] = v77 + 46;
  v78 = *(_QWORD *)&dest[0];
  src[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = src[0];
  if ( *((_QWORD *)&v86[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&v86[27] + 1) )
    _rust_dealloc(*(_QWORD *)&v86[28], *((_QWORD *)&v86[27] + 1), 1LL);
  *((_QWORD *)&v86[27] + 1) = v78;
  v86[28] = dest[0];
  memcpy(src, v86, sizeof(src));
  clap_builder::builder::command::Command::arg(dest, v80);
  v80[7] = 8uLL;
  v80[9] = 0LL;
  v80[10] = 8uLL;
  v80[12] = 0LL;
  v80[13] = 8uLL;
  v80[15] = 0LL;
  v80[16] = 8uLL;
  v80[18] = 0LL;
  v80[19] = 8uLL;
  v80[21] = 0LL;
  v80[22] = 8uLL;
  v80[24] = 0LL;
  v80[25] = 8uLL;
  *(_QWORD *)&v80[0] = 0LL;
  *(_QWORD *)&v80[1] = 0LL;
  *((_QWORD *)&v80[2] + 1) = 0LL;
  *((_QWORD *)&v80[3] + 1) = 0LL;
  *(_QWORD *)&v80[5] = 5LL;
  *((_QWORD *)&v80[6] + 1) = 0LL;
  *((_QWORD *)&v80[8] + 1) = 8LL;
  *((_QWORD *)&v80[11] + 1) = 8LL;
  *((_QWORD *)&v80[14] + 1) = 8LL;
  *((_QWORD *)&v80[17] + 1) = 8LL;
  *((_QWORD *)&v80[20] + 1) = 4LL;
  *((_QWORD *)&v80[23] + 1) = 8LL;
  *((_QWORD *)&v80[26] + 1) = 8LL;
  *(_QWORD *)&v80[27] = 0LL;
  *((_QWORD *)&v80[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v80[29] = 0x8000000000000000LL;
  *((_QWORD *)&v80[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v80[33] = aPaths;
  *((_QWORD *)&v80[33] + 1) = 5LL;
  *(_QWORD *)&v80[34] = 0LL;
  *(_QWORD *)&v80[35] = 0LL;
  *(_QWORD *)&v80[36] = 0x11000000110000LL;
  DWORD2(v80[36]) = 0;
  WORD6(v80[36]) = 513;
  clap_builder::builder::command::Command::arg(v74, dest);
  return v74;
}
