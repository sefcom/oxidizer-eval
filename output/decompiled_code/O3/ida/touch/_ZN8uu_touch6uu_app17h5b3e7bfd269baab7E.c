void *__fastcall uu_touch::uu_app(void *a1)
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
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm2
  void *v44; // rbx
  _OWORD v46[37]; // [rsp+0h] [rbp-AF8h] BYREF
  _OWORD src[45]; // [rsp+250h] [rbp-8A8h] BYREF
  _OWORD dest[45]; // [rsp+520h] [rbp-5D8h] BYREF
  void *v49; // [rsp+7F0h] [rbp-308h]
  __int64 v50; // [rsp+7F8h] [rbp-300h]
  unsigned __int64 v51; // [rsp+800h] [rbp-2F8h]
  __int64 v52; // [rsp+808h] [rbp-2F0h]
  __int128 v53; // [rsp+810h] [rbp-2E8h] BYREF
  unsigned __int128 v54; // [rsp+820h] [rbp-2D8h]
  __int128 v55; // [rsp+830h] [rbp-2C8h]
  __int128 v56; // [rsp+840h] [rbp-2B8h]
  __int64 v57; // [rsp+850h] [rbp-2A8h]
  _OWORD v58[37]; // [rsp+860h] [rbp-298h] BYREF
  __int128 v59; // [rsp+AB8h] [rbp-40h]

  v49 = a1;
  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(src, xmmword_2D0AD0, *((_QWORD *)&xmmword_2D0AD0 + 1));
  *(_QWORD *)&src[38] = a0027;
  *((_QWORD *)&src[38] + 1) = 6LL;
  memcpy(dest, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(src, dest, aUpdateTheAcces, 76LL);
  uucore::format_usage(v46, aOptionUser, 21LL);
  v1 = *(_QWORD *)&v46[0];
  if ( *(_QWORD *)&v46[0] != 0x8000000000000000LL )
    dest[0] = *(_OWORD *)((char *)v46 + 8);
  if ( *(_QWORD *)&src[29] != 0x8000000000000000LL && *(_QWORD *)&src[29] )
    _rust_dealloc(*((_QWORD *)&src[29] + 1), *(_QWORD *)&src[29], 1LL);
  *(_QWORD *)&src[29] = v1;
  *(_OWORD *)((char *)&src[29] + 8) = dest[0];
  memcpy(dest, src, 0x2BCuLL);
  *(_QWORD *)((char *)&dest[43] + 12) = *(_QWORD *)((char *)&src[43] + 12) | 0x4008000040080LL;
  DWORD1(dest[44]) = DWORD1(src[44]);
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
  *(_QWORD *)&src[33] = anon_fc2b91500dea380c7cbb82546323e12f_35_llvm_12921794859373524128;
  *((_QWORD *)&src[33] + 1) = 4LL;
  *(_QWORD *)&src[34] = anon_fc2b91500dea380c7cbb82546323e12f_35_llvm_12921794859373524128;
  *((_QWORD *)&src[34] + 1) = 4LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000110000LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v46[0] = 0LL;
  *((_QWORD *)&v46[0] + 1) = 1LL;
  *(_QWORD *)&v46[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v46, 0LL, 23LL);
  v2 = *((_QWORD *)&v46[0] + 1);
  v3 = *(_QWORD *)&v46[1];
  *(_OWORD *)(*((_QWORD *)&v46[0] + 1) + *(_QWORD *)&v46[1]) = xmmword_6AF5F;
  *(_QWORD *)(v2 + v3 + 15) = 0x2E6E6F6974616D72LL;
  *(_QWORD *)&v46[1] = v3 + 23;
  v4 = *(_QWORD *)&v46[0];
  v58[0] = *(_OWORD *)((char *)v46 + 8);
  if ( *(_QWORD *)&v46[0] != 0x8000000000000000LL )
    v46[0] = v58[0];
  *((_QWORD *)&src[27] + 1) = v4;
  src[28] = v46[0];
  memcpy(v46, src, 0x24CuLL);
  *(_WORD *)((char *)&v46[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v46[36]) = HIBYTE(src[36]);
  BYTE12(v46[36]) = 5;
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
  *(_QWORD *)&dest[33] = anon_a8009f0f96d850c1c46a2cf3287456a4_20_llvm_17503802422331354604;
  *((_QWORD *)&dest[33] + 1) = 6LL;
  *(_QWORD *)&dest[34] = 0LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000061LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v46[0] = 0LL;
  *((_QWORD *)&v46[0] + 1) = 1LL;
  *(_QWORD *)&v46[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v46, 0LL, 27LL);
  v5 = *((_QWORD *)&v46[0] + 1);
  v6 = *(_QWORD *)&v46[1];
  *(_OWORD *)(*((_QWORD *)&v46[0] + 1) + *(_QWORD *)&v46[1] + 11LL) = *(__int128 *)((char *)&xmmword_6AF76 + 11);
  *(_OWORD *)(v5 + v6) = xmmword_6AF76;
  *(_QWORD *)&v46[1] = v6 + 27;
  v7 = *(_QWORD *)&v46[0];
  v58[0] = *(_OWORD *)((char *)v46 + 8);
  if ( *(_QWORD *)&v46[0] != 0x8000000000000000LL )
    v46[0] = v58[0];
  *((_QWORD *)&dest[27] + 1) = v7;
  dest[28] = v46[0];
  memcpy(v46, dest, 0x24CuLL);
  *(_WORD *)((char *)&v46[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(v46[36]) = HIBYTE(dest[36]);
  BYTE12(v46[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, src);
  v46[7] = 8uLL;
  v46[9] = 0LL;
  v46[10] = 8uLL;
  v46[12] = 0LL;
  v46[13] = 8uLL;
  v46[15] = 0LL;
  v46[16] = 8uLL;
  v46[18] = 0LL;
  v46[19] = 8uLL;
  v46[21] = 0LL;
  v46[22] = 8uLL;
  v46[24] = 0LL;
  v46[25] = 8uLL;
  *(_QWORD *)&v46[0] = 0LL;
  *(_QWORD *)&v46[1] = 0LL;
  *((_QWORD *)&v46[2] + 1) = 0LL;
  *((_QWORD *)&v46[3] + 1) = 0LL;
  *(_QWORD *)&v46[5] = 5LL;
  *((_QWORD *)&v46[6] + 1) = 0LL;
  *((_QWORD *)&v46[8] + 1) = 8LL;
  *((_QWORD *)&v46[11] + 1) = 8LL;
  *((_QWORD *)&v46[14] + 1) = 8LL;
  *((_QWORD *)&v46[17] + 1) = 8LL;
  *((_QWORD *)&v46[20] + 1) = 4LL;
  *((_QWORD *)&v46[23] + 1) = 8LL;
  *((_QWORD *)&v46[26] + 1) = 8LL;
  *(_QWORD *)&v46[27] = 0LL;
  *((_QWORD *)&v46[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v46[29] = 0x8000000000000000LL;
  *((_QWORD *)&v46[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v46[33] = anon_a8009f0f96d850c1c46a2cf3287456a4_18_llvm_17503802422331354604;
  *((_QWORD *)&v46[33] + 1) = 9LL;
  *(_QWORD *)&v46[34] = 0LL;
  *(_QWORD *)&v46[35] = 0LL;
  *(_QWORD *)&v46[36] = 0x11000000000074LL;
  DWORD2(v46[36]) = 0;
  WORD6(v46[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 53LL);
  v8 = *((_QWORD *)&src[0] + 1);
  v9 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 32LL) = xmmword_6AFB1;
  qmemcpy((void *)(v8 + v9), "use [[CC]YY]MMDDhhmm[.ss] instea", 32);
  *(_QWORD *)(v8 + v9 + 45) = 0x656D697420746E65LL;
  *(_QWORD *)&src[1] = v9 + 53;
  v10 = *(_QWORD *)&src[0];
  v58[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v58[0];
  *((_QWORD *)&v46[27] + 1) = v10;
  v46[28] = src[0];
  memcpy(src, v46, 0x168uLL);
  memcpy(&src[23], &v46[23], 0xE0uLL);
  *((_QWORD *)&src[22] + 1) = *((_QWORD *)&v46[22] + 1);
  *(_QWORD *)&v58[0] = aStamp;
  *((_QWORD *)&v58[0] + 1) = 5LL;
  *(_QWORD *)&v58[1] = 0LL;
  *((_QWORD *)&v58[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v46, v58);
  if ( *((_QWORD *)&src[21] + 1) )
    _rust_dealloc(*(_QWORD *)&src[22], 16LL * *((_QWORD *)&src[21] + 1), 8LL);
  *((_QWORD *)&src[22] + 1) = *(_QWORD *)&v46[1];
  *(_OWORD *)((char *)&src[21] + 8) = v46[0];
  memcpy(v46, src, sizeof(v46));
  clap_builder::builder::command::Command::arg(src, dest);
  v46[7] = 8uLL;
  v46[9] = 0LL;
  v46[10] = 8uLL;
  v46[12] = 0LL;
  v46[13] = 8uLL;
  v46[15] = 0LL;
  v46[16] = 8uLL;
  v46[18] = 0LL;
  v46[19] = 8uLL;
  v46[21] = 0LL;
  v46[22] = 8uLL;
  v46[24] = 0LL;
  v46[25] = 8uLL;
  *(_QWORD *)&v46[0] = 0LL;
  *(_QWORD *)&v46[1] = 0LL;
  *((_QWORD *)&v46[2] + 1) = 0LL;
  *((_QWORD *)&v46[3] + 1) = 0LL;
  *(_QWORD *)&v46[5] = 5LL;
  *((_QWORD *)&v46[6] + 1) = 0LL;
  *((_QWORD *)&v46[8] + 1) = 8LL;
  *((_QWORD *)&v46[11] + 1) = 8LL;
  *((_QWORD *)&v46[14] + 1) = 8LL;
  *((_QWORD *)&v46[17] + 1) = 8LL;
  *((_QWORD *)&v46[20] + 1) = 4LL;
  *((_QWORD *)&v46[23] + 1) = 8LL;
  *((_QWORD *)&v46[26] + 1) = 8LL;
  *(_QWORD *)&v46[27] = 0LL;
  *((_QWORD *)&v46[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v46[29] = 0x8000000000000000LL;
  *((_QWORD *)&v46[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v46[33] = "datethur]";
  *((_QWORD *)&v46[33] + 1) = 4LL;
  *(_QWORD *)&v46[34] = "datethur]";
  *((_QWORD *)&v46[34] + 1) = 4LL;
  *(_QWORD *)&v46[35] = 0LL;
  v46[36] = xmmword_5DBE0;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 49LL);
  v11 = *((_QWORD *)&dest[0] + 1);
  v12 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 32LL) = xmmword_6AFEB;
  qmemcpy((void *)(v11 + v12), "parse argument and use it instea", 32);
  *(_BYTE *)(v11 + v12 + 48) = 101;
  *(_QWORD *)&dest[1] = v12 + 49;
  v13 = *(_QWORD *)&dest[0];
  v58[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v58[0];
  *((_QWORD *)&v46[27] + 1) = v13;
  v46[28] = dest[0];
  memcpy(dest, v46, 0x168uLL);
  memcpy(&dest[23], &v46[23], 0xE0uLL);
  *((_QWORD *)&dest[22] + 1) = *((_QWORD *)&v46[22] + 1);
  *(_QWORD *)&v58[0] = aString;
  *((_QWORD *)&v58[0] + 1) = 6LL;
  *(_QWORD *)&v58[1] = 0LL;
  *((_QWORD *)&v58[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v46, v58);
  if ( *((_QWORD *)&dest[21] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[22], 16LL * *((_QWORD *)&dest[21] + 1), 8LL);
  *((_QWORD *)&dest[22] + 1) = *(_QWORD *)&v46[1];
  *(_OWORD *)((char *)&dest[21] + 8) = v46[0];
  memcpy(v46, dest, sizeof(v46));
  v14 = *((_QWORD *)&v46[7] + 1);
  if ( *((_QWORD *)&v46[7] + 1) == *((_QWORD *)&v46[6] + 1) )
    alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v46[6] + 8);
  v15 = *(_QWORD *)&v46[7];
  v16 = 16 * v14;
  *(_QWORD *)(*(_QWORD *)&v46[7] + v16) = anon_a8009f0f96d850c1c46a2cf3287456a4_18_llvm_17503802422331354604;
  *(_QWORD *)(v15 + v16 + 8) = 9LL;
  *((_QWORD *)&v46[7] + 1) = v14 + 1;
  memcpy(v58, v46, sizeof(v58));
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
  *(_QWORD *)&src[33] = anon_a8009f0f96d850c1c46a2cf3287456a4_21_llvm_17503802422331354604;
  *((_QWORD *)&src[33] + 1) = 12LL;
  *(_QWORD *)&src[34] = 0LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x1100000000006DLL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v46[0] = 0LL;
  *((_QWORD *)&v46[0] + 1) = 1LL;
  *(_QWORD *)&v46[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v46, 0LL, 33LL);
  v17 = *((_QWORD *)&v46[0] + 1);
  v18 = *(_QWORD *)&v46[1];
  *(_OWORD *)(*((_QWORD *)&v46[0] + 1) + *(_QWORD *)&v46[1] + 16LL) = xmmword_6B012;
  *(_OWORD *)(v17 + v18) = xmmword_6B002;
  *(_BYTE *)(v17 + v18 + 32) = 101;
  *(_QWORD *)&v46[1] = v18 + 33;
  v19 = *(_QWORD *)&v46[0];
  v58[0] = *(_OWORD *)((char *)v46 + 8);
  if ( *(_QWORD *)&v46[0] != 0x8000000000000000LL )
    v46[0] = v58[0];
  *((_QWORD *)&src[27] + 1) = v19;
  src[28] = v46[0];
  memcpy(v46, src, 0x24CuLL);
  *(_WORD *)((char *)&v46[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v46[36]) = HIBYTE(src[36]);
  BYTE12(v46[36]) = 2;
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
  *(_QWORD *)&dest[33] = anon_a8009f0f96d850c1c46a2cf3287456a4_22_llvm_17503802422331354604;
  *((_QWORD *)&dest[33] + 1) = 9LL;
  *(_QWORD *)&dest[34] = anon_a8009f0f96d850c1c46a2cf3287456a4_22_llvm_17503802422331354604;
  *((_QWORD *)&dest[34] + 1) = 9LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000063LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v46[0] = 0LL;
  *((_QWORD *)&v46[0] + 1) = 1LL;
  *(_QWORD *)&v46[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v46, 0LL, 23LL);
  v20 = *((_QWORD *)&v46[0] + 1);
  v21 = *(_QWORD *)&v46[1];
  *(_OWORD *)(*((_QWORD *)&v46[0] + 1) + *(_QWORD *)&v46[1]) = xmmword_6B023;
  *(_QWORD *)(v20 + v21 + 15) = 0x73656C696620796ELL;
  *(_QWORD *)&v46[1] = v21 + 23;
  v22 = *(_QWORD *)&v46[0];
  v58[0] = *(_OWORD *)((char *)v46 + 8);
  if ( *(_QWORD *)&v46[0] != 0x8000000000000000LL )
    v46[0] = v58[0];
  *((_QWORD *)&dest[27] + 1) = v22;
  dest[28] = v46[0];
  memcpy(v46, dest, 0x24CuLL);
  *(_WORD *)((char *)&v46[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(v46[36]) = HIBYTE(dest[36]);
  BYTE12(v46[36]) = 2;
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
  *(_QWORD *)&src[33] = anon_a8009f0f96d850c1c46a2cf3287456a4_23_llvm_17503802422331354604;
  *((_QWORD *)&src[33] + 1) = 14LL;
  *(_QWORD *)&src[34] = anon_a8009f0f96d850c1c46a2cf3287456a4_23_llvm_17503802422331354604;
  *((_QWORD *)&src[34] + 1) = 14LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000000068LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v46[0] = 0LL;
  *((_QWORD *)&v46[0] + 1) = 1LL;
  *(_QWORD *)&v46[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v46, 0LL, 119LL);
  v23 = *((_QWORD *)&v46[0] + 1);
  v24 = *(_QWORD *)&v46[1];
  *(_OWORD *)(*((_QWORD *)&v46[0] + 1) + *(_QWORD *)&v46[1] + 96LL) = xmmword_6B09A;
  qmemcpy(
    (void *)(v23 + v24),
    "affect each symbolic link instead of any referenced file (only for systems that can change the t",
    96);
  *(_QWORD *)(v23 + v24 + 111) = 0x296B6E696C6D7973LL;
  *(_QWORD *)&v46[1] = v24 + 119;
  v25 = *(_QWORD *)&v46[0];
  v58[0] = *(_OWORD *)((char *)v46 + 8);
  if ( *(_QWORD *)&v46[0] != 0x8000000000000000LL )
    v46[0] = v58[0];
  *((_QWORD *)&src[27] + 1) = v25;
  src[28] = v46[0];
  memcpy(v46, src, 0x24CuLL);
  *(_WORD *)((char *)&v46[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v46[36]) = HIBYTE(src[36]);
  BYTE12(v46[36]) = 2;
  clap_builder::builder::command::Command::arg(src, dest);
  v46[7] = 8uLL;
  v46[9] = 0LL;
  v46[10] = 8uLL;
  v46[12] = 0LL;
  v46[13] = 8uLL;
  v46[15] = 0LL;
  v46[16] = 8uLL;
  v46[18] = 0LL;
  v46[19] = 8uLL;
  v46[21] = 0LL;
  v46[22] = 8uLL;
  v46[24] = 0LL;
  v46[25] = 8uLL;
  *(_QWORD *)&v46[0] = 0LL;
  *(_QWORD *)&v46[1] = 0LL;
  *((_QWORD *)&v46[2] + 1) = 0LL;
  *((_QWORD *)&v46[3] + 1) = 0LL;
  *(_QWORD *)&v46[5] = 5LL;
  *((_QWORD *)&v46[6] + 1) = 0LL;
  *((_QWORD *)&v46[8] + 1) = 8LL;
  *((_QWORD *)&v46[11] + 1) = 8LL;
  *((_QWORD *)&v46[14] + 1) = 8LL;
  *((_QWORD *)&v46[17] + 1) = 8LL;
  *((_QWORD *)&v46[20] + 1) = 4LL;
  *((_QWORD *)&v46[23] + 1) = 8LL;
  *((_QWORD *)&v46[26] + 1) = 8LL;
  *(_QWORD *)&v46[27] = 0LL;
  *((_QWORD *)&v46[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v46[29] = 0x8000000000000000LL;
  *((_QWORD *)&v46[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v46[33] = anon_a8009f0f96d850c1c46a2cf3287456a4_17_llvm_17503802422331354604;
  *((_QWORD *)&v46[33] + 1) = 9LL;
  *(_QWORD *)&v46[34] = anon_a8009f0f96d850c1c46a2cf3287456a4_17_llvm_17503802422331354604;
  *((_QWORD *)&v46[34] + 1) = 9LL;
  *(_QWORD *)&v46[35] = 0LL;
  *(_QWORD *)&v46[36] = 0x11000000000072LL;
  DWORD2(v46[36]) = 0;
  WORD6(v46[36]) = 3337;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 49LL);
  v26 = *((_QWORD *)&dest[0] + 1);
  v27 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 32LL) = xmmword_6B0D1;
  qmemcpy((void *)(v26 + v27), "use this file's times instead of", 32);
  *(_BYTE *)(v26 + v27 + 48) = 101;
  *(_QWORD *)&dest[1] = v27 + 49;
  v28 = *(_QWORD *)&dest[0];
  v58[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v58[0];
  *((_QWORD *)&v46[27] + 1) = v28;
  v46[28] = dest[0];
  memcpy(dest, v46, 0x168uLL);
  memcpy(&dest[23], &v46[23], 0xE0uLL);
  *((_QWORD *)&dest[22] + 1) = *((_QWORD *)&v46[22] + 1);
  *(_QWORD *)&v58[0] = aFile;
  *((_QWORD *)&v58[0] + 1) = 4LL;
  *(_QWORD *)&v58[1] = 0LL;
  *((_QWORD *)&v58[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v46, v58);
  if ( *((_QWORD *)&dest[21] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[22], 16LL * *((_QWORD *)&dest[21] + 1), 8LL);
  *((_QWORD *)&dest[22] + 1) = *(_QWORD *)&v46[1];
  *(_OWORD *)((char *)&dest[21] + 8) = v46[0];
  memcpy(v46, dest, sizeof(v46));
  v50 = 2LL;
  *(_QWORD *)&v58[1] = v52;
  v58[0] = __PAIR128__(v51, 2LL);
  clap_builder::builder::arg::Arg::value_parser(dest, v46);
  BYTE13(dest[36]) = 2;
  memcpy(v46, dest, sizeof(v46));
  v29 = *((_QWORD *)&v46[7] + 1);
  if ( *((_QWORD *)&v46[7] + 1) == *((_QWORD *)&v46[6] + 1) )
    alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v46[6] + 8);
  v30 = *(_QWORD *)&v46[7];
  v31 = 16 * v29;
  *(_QWORD *)(*(_QWORD *)&v46[7] + v31) = anon_a8009f0f96d850c1c46a2cf3287456a4_18_llvm_17503802422331354604;
  *(_QWORD *)(v30 + v31 + 8) = 9LL;
  *((_QWORD *)&v46[7] + 1) = v29 + 1;
  memcpy(v58, v46, sizeof(v58));
  clap_builder::builder::command::Command::arg(dest, src);
  v46[7] = 8uLL;
  v46[9] = 0LL;
  v46[10] = 8uLL;
  v46[12] = 0LL;
  v46[13] = 8uLL;
  v46[15] = 0LL;
  v46[16] = 8uLL;
  v46[18] = 0LL;
  v46[19] = 8uLL;
  v46[21] = 0LL;
  v46[22] = 8uLL;
  v46[24] = 0LL;
  v46[25] = 8uLL;
  *(_QWORD *)&v46[0] = 0LL;
  *(_QWORD *)&v46[1] = 0LL;
  *((_QWORD *)&v46[2] + 1) = 0LL;
  *((_QWORD *)&v46[3] + 1) = 0LL;
  *(_QWORD *)&v46[5] = 5LL;
  *((_QWORD *)&v46[6] + 1) = 0LL;
  *((_QWORD *)&v46[8] + 1) = 8LL;
  *((_QWORD *)&v46[11] + 1) = 8LL;
  *((_QWORD *)&v46[14] + 1) = 8LL;
  *((_QWORD *)&v46[17] + 1) = 8LL;
  *((_QWORD *)&v46[20] + 1) = 4LL;
  *((_QWORD *)&v46[23] + 1) = 8LL;
  *((_QWORD *)&v46[26] + 1) = 8LL;
  *(_QWORD *)&v46[27] = 0LL;
  *((_QWORD *)&v46[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v46[29] = 0x8000000000000000LL;
  *((_QWORD *)&v46[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v46[33] = anon_a8009f0f96d850c1c46a2cf3287456a4_24_llvm_17503802422331354604;
  *((_QWORD *)&v46[33] + 1) = 4LL;
  *(_QWORD *)&v46[34] = anon_a8009f0f96d850c1c46a2cf3287456a4_24_llvm_17503802422331354604;
  *((_QWORD *)&v46[34] + 1) = 4LL;
  *(_QWORD *)&v46[35] = 0LL;
  *(_QWORD *)&v46[36] = 0x11000000110000LL;
  DWORD2(v46[36]) = 0;
  WORD6(v46[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 122LL);
  v32 = *((_QWORD *)&src[0] + 1);
  v33 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 106LL) = *(__int128 *)((char *)&xmmword_6B142 + 10);
  qmemcpy(
    (void *)(v32 + v33),
    "change only the specified time: \"access\", \"atime\", or \"use\" are equivalent to -a; \"modify\" or \"mtime\" are equiva",
    112);
  *(_QWORD *)&src[1] = v33 + 122;
  v34 = *(_QWORD *)&src[0];
  v58[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v58[0];
  *((_QWORD *)&v46[27] + 1) = v34;
  v46[28] = src[0];
  memcpy(src, v46, 0x168uLL);
  memcpy(&src[23], &v46[23], 0xE0uLL);
  *((_QWORD *)&src[22] + 1) = *((_QWORD *)&v46[22] + 1);
  *(_QWORD *)&v58[0] = aWord;
  *((_QWORD *)&v58[0] + 1) = 4LL;
  *(_QWORD *)&v58[1] = 0LL;
  *((_QWORD *)&v58[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v46, v58);
  if ( *((_QWORD *)&src[21] + 1) )
    _rust_dealloc(*(_QWORD *)&src[22], 16LL * *((_QWORD *)&src[21] + 1), 8LL);
  *((_QWORD *)&src[22] + 1) = *(_QWORD *)&v46[1];
  *(_OWORD *)((char *)&src[21] + 8) = v46[0];
  memcpy(v46, src, sizeof(v46));
  *(_QWORD *)&src[3] = aAtime;
  *((_QWORD *)&src[3] + 1) = 5LL;
  *((_QWORD *)&src[1] + 1) = 0x8000000000000000LL;
  src[2] = v59;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 8LL;
  *(_QWORD *)&src[1] = 0LL;
  LOBYTE(src[4]) = 0;
  alloc::raw_vec::RawVec<T,A>::grow_one(src);
  v35 = *((_QWORD *)&src[0] + 1);
  **((_QWORD **)&src[0] + 1) = aAccess;
  *(_QWORD *)(v35 + 8) = 6LL;
  *(_QWORD *)&src[1] = 1LL;
  v58[0] = src[0];
  v58[2] = src[2];
  v58[3] = src[3];
  *(_QWORD *)&v58[4] = *(_QWORD *)&src[4];
  v58[1] = __PAIR128__(*((unsigned __int64 *)&src[1] + 1), 1LL);
  if ( *(_QWORD *)&src[0] == 1LL )
    alloc::raw_vec::RawVec<T,A>::grow_one(v58);
  v36 = *((_QWORD *)&v58[0] + 1);
  *(_QWORD *)(*((_QWORD *)&v58[0] + 1) + 16LL) = aUse;
  *(_QWORD *)(v36 + 24) = 3LL;
  *(_QWORD *)&v58[1] = 2LL;
  v53 = v58[0];
  v55 = v58[2];
  v56 = v58[3];
  v57 = *(_QWORD *)&v58[4];
  v54 = __PAIR128__(*((unsigned __int64 *)&v58[1] + 1), 2LL);
  *(_QWORD *)&src[3] = aMtime;
  *((_QWORD *)&src[3] + 1) = 5LL;
  *((_QWORD *)&src[1] + 1) = 0x8000000000000000LL;
  src[2] = v59;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 8LL;
  *(_QWORD *)&src[1] = 0LL;
  LOBYTE(src[4]) = 0;
  alloc::raw_vec::RawVec<T,A>::grow_one(src);
  v37 = *((_QWORD *)&src[0] + 1);
  **((_QWORD **)&src[0] + 1) = aModify;
  *(_QWORD *)(v37 + 8) = 6LL;
  *(_OWORD *)((char *)&v58[4] + 8) = src[0];
  *(_OWORD *)((char *)&v58[6] + 8) = src[2];
  *(_OWORD *)((char *)&v58[7] + 8) = src[3];
  *((_QWORD *)&v58[8] + 1) = *(_QWORD *)&src[4];
  *(_OWORD *)((char *)&v58[5] + 8) = __PAIR128__(*((unsigned __int64 *)&src[1] + 1), 1LL);
  v58[0] = v53;
  v58[1] = v54;
  v58[2] = v55;
  v58[3] = v56;
  *(_QWORD *)&v58[4] = v57;
  memcpy(src, v58, 0x90uLL);
  *(_QWORD *)&src[9] = 0LL;
  *((_QWORD *)&src[9] + 1) = 2LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v53, src);
  clap_builder::builder::arg::Arg::value_parser(v58, v46);
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
  *(_QWORD *)&dest[1] = 1LL;
  *((_QWORD *)&dest[1] + 1) = 1LL;
  dest[2] = 0xFFFFFFFFFFFFFFFFLL;
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
  *(_QWORD *)&dest[33] = aFiles;
  *((_QWORD *)&dest[33] + 1) = 5LL;
  *(_QWORD *)&dest[34] = 0LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000110000LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3329;
  clap_builder::builder::arg::Arg::value_parser(v46, dest);
  BYTE13(v46[36]) = 2;
  memcpy(v58, v46, sizeof(v58));
  clap_builder::builder::command::Command::arg(dest, src);
  src[1] = 0LL;
  src[2] = 8uLL;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 8LL;
  *((_QWORD *)&src[3] + 1) = 8LL;
  *(_QWORD *)&src[4] = 0LL;
  *((_QWORD *)&src[4] + 1) = anon_a8009f0f96d850c1c46a2cf3287456a4_15_llvm_17503802422331354604;
  *(_QWORD *)&src[5] = 7LL;
  WORD4(src[5]) = 0;
  *(_QWORD *)&v58[0] = anon_a8009f0f96d850c1c46a2cf3287456a4_18_llvm_17503802422331354604;
  *((_QWORD *)&v58[0] + 1) = 9LL;
  *(_QWORD *)&v58[1] = "datethur]";
  *((_QWORD *)&v58[1] + 1) = 4LL;
  *(_QWORD *)&v58[2] = anon_a8009f0f96d850c1c46a2cf3287456a4_17_llvm_17503802422331354604;
  *((_QWORD *)&v58[2] + 1) = 9LL;
  clap_builder::builder::arg_group::ArgGroup::args(v46, src, v58);
  BYTE9(v46[5]) = 1;
  *(_QWORD *)&src[5] = *(_QWORD *)&v46[5];
  BYTE8(src[5]) = BYTE8(v46[5]);
  BYTE9(src[5]) = 1;
  *(_DWORD *)((char *)&src[5] + 10) = *(_DWORD *)((char *)&v46[5] + 10);
  HIWORD(src[5]) = HIWORD(v46[5]);
  src[4] = v46[4];
  src[3] = v46[3];
  src[2] = v46[2];
  src[1] = v46[1];
  src[0] = v46[0];
  v38 = *((_QWORD *)&dest[13] + 1);
  if ( *((_QWORD *)&dest[13] + 1) == *((_QWORD *)&dest[12] + 1) )
    alloc::raw_vec::RawVec<T,A>::grow_one((char *)&dest[12] + 8);
  v39 = *(_QWORD *)&dest[13];
  v40 = 96 * v38;
  *(_OWORD *)(*(_QWORD *)&dest[13] + v40 + 80) = src[5];
  *(_OWORD *)(v39 + v40 + 64) = src[4];
  v41 = src[0];
  v42 = src[1];
  v43 = src[2];
  *(_OWORD *)(v39 + v40 + 48) = src[3];
  *(_OWORD *)(v39 + v40 + 32) = v43;
  *(_OWORD *)(v39 + v40 + 16) = v42;
  *(_OWORD *)(v39 + v40) = v41;
  *((_QWORD *)&dest[13] + 1) = v38 + 1;
  v44 = v49;
  memcpy(v49, dest, 0x2C8uLL);
  return v44;
}
