void *__fastcall uu_shuf::uu_app(void *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // rcx
  void *v38; // rbx
  _OWORD v40[45]; // [rsp+0h] [rbp-AF8h] BYREF
  _OWORD src[45]; // [rsp+2D0h] [rbp-828h] BYREF
  _OWORD dest[37]; // [rsp+5A0h] [rbp-558h] BYREF
  void *v43; // [rsp+7F8h] [rbp-300h]
  __int128 v44; // [rsp+800h] [rbp-2F8h]
  __int128 v45; // [rsp+810h] [rbp-2E8h]
  __int128 v46; // [rsp+820h] [rbp-2D8h]
  __int128 v47; // [rsp+830h] [rbp-2C8h]
  __int128 v48; // [rsp+840h] [rbp-2B8h]
  __int128 v49; // [rsp+850h] [rbp-2A8h]
  __int128 v50; // [rsp+860h] [rbp-298h]
  _OWORD v51[40]; // [rsp+870h] [rbp-288h] BYREF

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(v40, qword_F7568, qword_F7570);
  clap_builder::builder::command::Command::about(src, v40, aShuffleTheInpu, 165LL);
  *(_QWORD *)&src[38] = a0027;
  *((_QWORD *)&src[38] + 1) = 6LL;
  memcpy(v40, src, 0x2C8uLL);
  uucore::format_usage(dest, aOptionFileEOpt, 72LL);
  v1 = *(_QWORD *)&dest[0];
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    src[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&v40[29] != 0x8000000000000000LL && *(_QWORD *)&v40[29] )
    _rust_dealloc(*((_QWORD *)&v40[29] + 1), *(_QWORD *)&v40[29], 1LL);
  *(_QWORD *)&v40[29] = v1;
  *(_OWORD *)((char *)&v40[29] + 8) = src[0];
  memcpy(src, v40, 0x2BCuLL);
  *(_QWORD *)((char *)&src[43] + 12) = *(_QWORD *)((char *)&v40[43] + 12) | 0x8000000080LL;
  DWORD1(src[44]) = DWORD1(v40[44]);
  v40[7] = 8uLL;
  v40[9] = 0LL;
  v40[10] = 8uLL;
  v40[12] = 0LL;
  v40[13] = 8uLL;
  v40[15] = 0LL;
  v40[16] = 8uLL;
  v40[18] = 0LL;
  v40[19] = 8uLL;
  v40[21] = 0LL;
  v40[22] = 8uLL;
  v40[24] = 0LL;
  v40[25] = 8uLL;
  *(_QWORD *)&v40[0] = 0LL;
  *(_QWORD *)&v40[1] = 0LL;
  *((_QWORD *)&v40[2] + 1) = 0LL;
  *((_QWORD *)&v40[3] + 1) = 0LL;
  *(_QWORD *)&v40[5] = 5LL;
  *((_QWORD *)&v40[6] + 1) = 0LL;
  *((_QWORD *)&v40[8] + 1) = 8LL;
  *((_QWORD *)&v40[11] + 1) = 8LL;
  *((_QWORD *)&v40[14] + 1) = 8LL;
  *((_QWORD *)&v40[17] + 1) = 8LL;
  *((_QWORD *)&v40[20] + 1) = 4LL;
  *((_QWORD *)&v40[23] + 1) = 8LL;
  *((_QWORD *)&v40[26] + 1) = 8LL;
  *(_QWORD *)&v40[27] = 0LL;
  *((_QWORD *)&v40[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v40[29] = 0x8000000000000000LL;
  *((_QWORD *)&v40[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v40[33] = anon_6b32b05e1d077617d275c65ea4c6ad52_6_llvm_10609332461339697138;
  *((_QWORD *)&v40[33] + 1) = 4LL;
  *(_QWORD *)&v40[34] = anon_6b32b05e1d077617d275c65ea4c6ad52_6_llvm_10609332461339697138;
  *((_QWORD *)&v40[34] + 1) = 4LL;
  *(_QWORD *)&v40[35] = 0LL;
  *(_QWORD *)&v40[36] = 0x11000000000065LL;
  DWORD2(v40[36]) = 0;
  WORD6(v40[36]) = 3337;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 31LL);
  v2 = *((_QWORD *)&dest[0] + 1);
  v3 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 15LL) = *(__int128 *)((char *)&xmmword_1AEC5 + 15);
  *(_OWORD *)(v2 + v3) = xmmword_1AEC5;
  *(_QWORD *)&dest[1] = v3 + 31;
  v4 = *(_QWORD *)&dest[0];
  v51[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v51[0];
  *((_QWORD *)&v40[27] + 1) = v4;
  v40[28] = dest[0];
  memcpy(dest, v40, 0x24CuLL);
  *(_WORD *)((char *)&dest[36] + 13) = *(_WORD *)((char *)&v40[36] + 13);
  HIBYTE(dest[36]) = HIBYTE(v40[36]);
  BYTE12(dest[36]) = 2;
  v5 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  v6 = *((_QWORD *)&dest[8] + 1);
  v7 = 16 * v5;
  *(_QWORD *)(*((_QWORD *)&dest[8] + 1) + v7) = anon_6b32b05e1d077617d275c65ea4c6ad52_6_llvm_10609332461339697138;
  *(_QWORD *)(v6 + v7 + 8) = 4LL;
  *(_QWORD *)&dest[9] = v5 + 1;
  memcpy(v40, dest, 0x250uLL);
  v8 = *((_QWORD *)&v40[7] + 1);
  if ( *((_QWORD *)&v40[7] + 1) == *((_QWORD *)&v40[6] + 1) )
    alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v40[6] + 8);
  v43 = a1;
  v9 = *(_QWORD *)&v40[7];
  v10 = 16 * v8;
  *(_QWORD *)(*(_QWORD *)&v40[7] + v10) = anon_6b32b05e1d077617d275c65ea4c6ad52_7_llvm_10609332461339697138;
  *(_QWORD *)(v9 + v10 + 8) = 11LL;
  *((_QWORD *)&v40[7] + 1) = v8 + 1;
  memcpy(dest, v40, sizeof(dest));
  clap_builder::builder::command::Command::arg(v40, src);
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
  src[24] = 0LL;
  src[25] = 8uLL;
  *(_QWORD *)&src[0] = 0LL;
  *(_QWORD *)&src[1] = 0LL;
  *(_OWORD *)((char *)&src[1] + 8) = v50;
  *((_QWORD *)&src[2] + 1) = 0LL;
  *((_QWORD *)&src[3] + 1) = 0LL;
  src[4] = v49;
  *(_QWORD *)&src[5] = 5LL;
  *(_OWORD *)((char *)&src[5] + 8) = v48;
  *((_QWORD *)&src[6] + 1) = 0LL;
  *((_QWORD *)&src[8] + 1) = 8LL;
  *((_QWORD *)&src[11] + 1) = 8LL;
  *((_QWORD *)&src[14] + 1) = 8LL;
  *((_QWORD *)&src[17] + 1) = 8LL;
  *((_QWORD *)&src[20] + 1) = 4LL;
  src[22] = 8uLL;
  *((_QWORD *)&src[23] + 1) = 8LL;
  *((_QWORD *)&src[26] + 1) = 8LL;
  *(_QWORD *)&src[27] = 0LL;
  *((_QWORD *)&src[27] + 1) = 0x8000000000000000LL;
  src[28] = v47;
  *(_QWORD *)&src[29] = 0x8000000000000000LL;
  *(_OWORD *)((char *)&src[30] + 8) = v46;
  *(_OWORD *)((char *)&src[29] + 8) = v45;
  *((_QWORD *)&src[31] + 1) = 0x8000000000000001LL;
  src[32] = v44;
  *(_QWORD *)&src[33] = anon_6b32b05e1d077617d275c65ea4c6ad52_7_llvm_10609332461339697138;
  *((_QWORD *)&src[33] + 1) = 11LL;
  *(_QWORD *)&src[34] = anon_6b32b05e1d077617d275c65ea4c6ad52_7_llvm_10609332461339697138;
  *((_QWORD *)&src[34] + 1) = 11LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000000069LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v51[0] = aLoHi;
  *((_QWORD *)&v51[0] + 1) = 5LL;
  *(_QWORD *)&v51[1] = 0LL;
  *((_QWORD *)&v51[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(dest, v51);
  if ( *((_QWORD *)&src[21] + 1) )
    _rust_dealloc(8LL, 16LL * *((_QWORD *)&src[21] + 1), 8LL);
  *((_QWORD *)&src[22] + 1) = *(_QWORD *)&dest[1];
  *(_OWORD *)((char *)&src[21] + 8) = dest[0];
  memcpy(dest, src, sizeof(dest));
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 48LL);
  v11 = *((_QWORD *)&src[0] + 1);
  v12 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 32LL) = xmmword_1AF09;
  qmemcpy((void *)(v11 + v12), "treat each number LO through HI ", 32);
  *(_QWORD *)&src[1] = v12 + 48;
  v13 = *(_QWORD *)&src[0];
  v51[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v51[0];
  if ( *((_QWORD *)&dest[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&dest[27] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[28], *((_QWORD *)&dest[27] + 1), 1LL);
  *((_QWORD *)&dest[27] + 1) = v13;
  dest[28] = src[0];
  memcpy(src, dest, 0x250uLL);
  v14 = *((_QWORD *)&src[7] + 1);
  if ( *((_QWORD *)&src[7] + 1) == *((_QWORD *)&src[6] + 1) )
    alloc::raw_vec::RawVec<T,A>::grow_one((char *)&src[6] + 8);
  v15 = *(_QWORD *)&src[7];
  v16 = 16 * v14;
  *(_QWORD *)(*(_QWORD *)&src[7] + v16) = anon_6b32b05e1d077617d275c65ea4c6ad52_13_llvm_10609332461339697138;
  *(_QWORD *)(v15 + v16 + 8) = 12LL;
  *((_QWORD *)&src[7] + 1) = v14 + 1;
  memcpy(dest, src, sizeof(dest));
  clap_builder::builder::command::Command::arg(src, v40);
  v40[7] = 8uLL;
  v40[9] = 0LL;
  v40[10] = 8uLL;
  v40[12] = 0LL;
  v40[13] = 8uLL;
  v40[15] = 0LL;
  v40[16] = 8uLL;
  v40[18] = 0LL;
  v40[19] = 8uLL;
  v40[21] = 0LL;
  v40[24] = 0LL;
  v40[25] = 8uLL;
  *(_QWORD *)&v40[0] = 0LL;
  *(_QWORD *)&v40[1] = 0LL;
  *(_OWORD *)((char *)&v40[1] + 8) = v50;
  *((_QWORD *)&v40[2] + 1) = 0LL;
  *((_QWORD *)&v40[3] + 1) = 0LL;
  v40[4] = v49;
  *(_QWORD *)&v40[5] = 5LL;
  *(_OWORD *)((char *)&v40[5] + 8) = v48;
  *((_QWORD *)&v40[6] + 1) = 0LL;
  *((_QWORD *)&v40[8] + 1) = 8LL;
  *((_QWORD *)&v40[11] + 1) = 8LL;
  *((_QWORD *)&v40[14] + 1) = 8LL;
  *((_QWORD *)&v40[17] + 1) = 8LL;
  *((_QWORD *)&v40[20] + 1) = 4LL;
  v40[22] = 8uLL;
  *((_QWORD *)&v40[23] + 1) = 8LL;
  *((_QWORD *)&v40[26] + 1) = 8LL;
  *(_QWORD *)&v40[27] = 0LL;
  *((_QWORD *)&v40[27] + 1) = 0x8000000000000000LL;
  v40[28] = v47;
  *(_QWORD *)&v40[29] = 0x8000000000000000LL;
  *(_OWORD *)((char *)&v40[30] + 8) = v46;
  *(_OWORD *)((char *)&v40[29] + 8) = v45;
  *((_QWORD *)&v40[31] + 1) = 0x8000000000000001LL;
  v40[32] = v44;
  *(_QWORD *)&v40[33] = anon_6b32b05e1d077617d275c65ea4c6ad52_8_llvm_10609332461339697138;
  *((_QWORD *)&v40[33] + 1) = 10LL;
  *(_QWORD *)&v40[34] = anon_6b32b05e1d077617d275c65ea4c6ad52_8_llvm_10609332461339697138;
  *((_QWORD *)&v40[34] + 1) = 10LL;
  *(_QWORD *)&v40[35] = 0LL;
  *(_QWORD *)&v40[36] = 0x1100000000006ELL;
  DWORD2(v40[36]) = 0;
  WORD6(v40[36]) = 3337;
  *(_QWORD *)&v51[0] = aCount;
  *((_QWORD *)&v51[0] + 1) = 5LL;
  *(_QWORD *)&v51[1] = 0LL;
  *((_QWORD *)&v51[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(dest, v51);
  if ( *((_QWORD *)&v40[21] + 1) )
    _rust_dealloc(8LL, 16LL * *((_QWORD *)&v40[21] + 1), 8LL);
  *((_QWORD *)&v40[22] + 1) = *(_QWORD *)&dest[1];
  *(_OWORD *)((char *)&v40[21] + 8) = dest[0];
  *(_OWORD *)((char *)&dest[1] + 8) = *(_OWORD *)((char *)&v40[1] + 8);
  dest[4] = v40[4];
  *(_OWORD *)((char *)&dest[5] + 8) = *(_OWORD *)((char *)&v40[5] + 8);
  *(_OWORD *)((char *)&dest[7] + 8) = *(_OWORD *)((char *)&v40[7] + 8);
  dest[9] = v40[9];
  *(_OWORD *)((char *)&dest[10] + 8) = *(_OWORD *)((char *)&v40[10] + 8);
  dest[12] = v40[12];
  *(_OWORD *)((char *)&dest[13] + 8) = *(_OWORD *)((char *)&v40[13] + 8);
  dest[15] = v40[15];
  *(_OWORD *)((char *)&dest[16] + 8) = *(_OWORD *)((char *)&v40[16] + 8);
  dest[18] = v40[18];
  *(_OWORD *)((char *)&dest[19] + 8) = *(_OWORD *)((char *)&v40[19] + 8);
  dest[21] = v40[21];
  dest[24] = v40[24];
  *(_OWORD *)((char *)&dest[25] + 8) = *(_OWORD *)((char *)&v40[25] + 8);
  dest[28] = v40[28];
  *(_OWORD *)((char *)&dest[29] + 8) = *(_OWORD *)((char *)&v40[29] + 8);
  *(_OWORD *)((char *)&dest[30] + 8) = *(_OWORD *)((char *)&v40[30] + 8);
  dest[32] = v40[32];
  dest[0] = v40[0];
  *(_QWORD *)&dest[1] = *(_QWORD *)&v40[1];
  *(_OWORD *)((char *)&dest[2] + 8) = *(_OWORD *)((char *)&v40[2] + 8);
  *((_QWORD *)&dest[3] + 1) = *((_QWORD *)&v40[3] + 1);
  *(_QWORD *)&dest[5] = *(_QWORD *)&v40[5];
  *(_OWORD *)((char *)&dest[6] + 8) = *(_OWORD *)((char *)&v40[6] + 8);
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *(_QWORD *)&dest[10] = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *(_QWORD *)&dest[13] = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *(_QWORD *)&dest[16] = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *(_QWORD *)&dest[19] = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  dest[22] = v40[22];
  *(_QWORD *)&dest[23] = 0LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *(_QWORD *)&dest[25] = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = anon_6b32b05e1d077617d275c65ea4c6ad52_8_llvm_10609332461339697138;
  *((_QWORD *)&dest[33] + 1) = 10LL;
  *(_QWORD *)&dest[34] = anon_6b32b05e1d077617d275c65ea4c6ad52_8_llvm_10609332461339697138;
  *((_QWORD *)&dest[34] + 1) = 10LL;
  *(_QWORD *)&dest[35] = 0LL;
  *((_QWORD *)&dest[35] + 1) = *((_QWORD *)&v40[35] + 1);
  *(_QWORD *)&dest[36] = 0x1100000000006ELL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3329;
  *(_QWORD *)&v40[0] = 0LL;
  *((_QWORD *)&v40[0] + 1) = 1LL;
  *(_QWORD *)&v40[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v40, 0LL, 26LL);
  v17 = *((_QWORD *)&v40[0] + 1);
  v18 = *(_QWORD *)&v40[1];
  *(_OWORD *)(*((_QWORD *)&v40[0] + 1) + *(_QWORD *)&v40[1] + 10LL) = *(__int128 *)((char *)&xmmword_1AF1E + 10);
  *(_OWORD *)(v17 + v18) = xmmword_1AF1E;
  *(_QWORD *)&v40[1] = v18 + 26;
  v19 = *(_QWORD *)&v40[0];
  v51[0] = *(_OWORD *)((char *)v40 + 8);
  if ( *(_QWORD *)&v40[0] != 0x8000000000000000LL )
    v40[0] = v51[0];
  if ( *((_QWORD *)&dest[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&dest[27] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[28], *((_QWORD *)&dest[27] + 1), 1LL);
  *((_QWORD *)&dest[27] + 1) = v19;
  dest[28] = v40[0];
  memcpy(v51, dest, 0x250uLL);
  clap_builder::builder::command::Command::arg(v40, src);
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
  src[24] = 0LL;
  src[25] = 8uLL;
  *(_QWORD *)&src[0] = 0LL;
  *(_QWORD *)&src[1] = 0LL;
  *(_OWORD *)((char *)&src[1] + 8) = v50;
  *((_QWORD *)&src[2] + 1) = 0LL;
  *((_QWORD *)&src[3] + 1) = 0LL;
  src[4] = v49;
  *(_QWORD *)&src[5] = 5LL;
  *(_OWORD *)((char *)&src[5] + 8) = v48;
  *((_QWORD *)&src[6] + 1) = 0LL;
  *((_QWORD *)&src[8] + 1) = 8LL;
  *((_QWORD *)&src[11] + 1) = 8LL;
  *((_QWORD *)&src[14] + 1) = 8LL;
  *((_QWORD *)&src[17] + 1) = 8LL;
  *((_QWORD *)&src[20] + 1) = 4LL;
  src[22] = 8uLL;
  *((_QWORD *)&src[23] + 1) = 8LL;
  *((_QWORD *)&src[26] + 1) = 8LL;
  *(_QWORD *)&src[27] = 0LL;
  *((_QWORD *)&src[27] + 1) = 0x8000000000000000LL;
  src[28] = v47;
  *(_QWORD *)&src[29] = 0x8000000000000000LL;
  *(_OWORD *)((char *)&src[30] + 8) = v46;
  *(_OWORD *)((char *)&src[29] + 8) = v45;
  *((_QWORD *)&src[31] + 1) = 0x8000000000000001LL;
  src[32] = v44;
  *(_QWORD *)&src[33] = anon_6b32b05e1d077617d275c65ea4c6ad52_9_llvm_10609332461339697138;
  *((_QWORD *)&src[33] + 1) = 6LL;
  *(_QWORD *)&src[34] = anon_6b32b05e1d077617d275c65ea4c6ad52_9_llvm_10609332461339697138;
  *((_QWORD *)&src[34] + 1) = 6LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x1100000000006FLL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v51[0] = aFile;
  *((_QWORD *)&v51[0] + 1) = 4LL;
  *(_QWORD *)&v51[1] = 0LL;
  *((_QWORD *)&v51[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(dest, v51);
  if ( *((_QWORD *)&src[21] + 1) )
    _rust_dealloc(8LL, 16LL * *((_QWORD *)&src[21] + 1), 8LL);
  *((_QWORD *)&src[22] + 1) = *(_QWORD *)&dest[1];
  *(_OWORD *)((char *)&src[21] + 8) = dest[0];
  memcpy(dest, src, sizeof(dest));
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 47LL);
  v20 = *((_QWORD *)&src[0] + 1);
  v21 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 31LL) = *(__int128 *)((char *)&xmmword_1AF48 + 15);
  qmemcpy((void *)(v20 + v21), "write result to FILE instead of ", 32);
  *(_QWORD *)&src[1] = v21 + 47;
  v22 = *(_QWORD *)&src[0];
  v51[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v51[0];
  if ( *((_QWORD *)&dest[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&dest[27] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[28], *((_QWORD *)&dest[27] + 1), 1LL);
  *((_QWORD *)&dest[27] + 1) = v22;
  dest[28] = src[0];
  memcpy(v51, dest, 0x24DuLL);
  BYTE13(v51[36]) = 3;
  HIWORD(v51[36]) = HIWORD(dest[36]);
  clap_builder::builder::command::Command::arg(src, v40);
  v40[7] = 8uLL;
  v40[9] = 0LL;
  v40[10] = 8uLL;
  v40[12] = 0LL;
  v40[13] = 8uLL;
  v40[15] = 0LL;
  v40[16] = 8uLL;
  v40[18] = 0LL;
  v40[19] = 8uLL;
  v40[21] = 0LL;
  v40[24] = 0LL;
  v40[25] = 8uLL;
  *(_QWORD *)&v40[0] = 0LL;
  *(_QWORD *)&v40[1] = 0LL;
  *((_QWORD *)&v40[2] + 1) = 0LL;
  *((_QWORD *)&v40[3] + 1) = 0LL;
  *(_QWORD *)&v40[5] = 5LL;
  *((_QWORD *)&v40[6] + 1) = 0LL;
  *((_QWORD *)&v40[8] + 1) = 8LL;
  *((_QWORD *)&v40[11] + 1) = 8LL;
  *((_QWORD *)&v40[14] + 1) = 8LL;
  *((_QWORD *)&v40[17] + 1) = 8LL;
  *((_QWORD *)&v40[20] + 1) = 4LL;
  v40[22] = 8uLL;
  *((_QWORD *)&v40[23] + 1) = 8LL;
  *((_QWORD *)&v40[26] + 1) = 8LL;
  *(_QWORD *)&v40[27] = 0LL;
  *((_QWORD *)&v40[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v40[29] = 0x8000000000000000LL;
  *((_QWORD *)&v40[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v40[33] = anon_6b32b05e1d077617d275c65ea4c6ad52_10_llvm_10609332461339697138;
  *((_QWORD *)&v40[33] + 1) = 13LL;
  *(_QWORD *)&v40[34] = anon_6b32b05e1d077617d275c65ea4c6ad52_10_llvm_10609332461339697138;
  *((_QWORD *)&v40[34] + 1) = 13LL;
  *(_QWORD *)&v40[35] = 0LL;
  *(_QWORD *)&v40[36] = 0x11000000110000LL;
  DWORD2(v40[36]) = 0;
  WORD6(v40[36]) = 3337;
  *(_QWORD *)&v51[0] = aFile;
  *((_QWORD *)&v51[0] + 1) = 4LL;
  *(_QWORD *)&v51[1] = 0LL;
  *((_QWORD *)&v51[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(dest, v51);
  if ( *((_QWORD *)&v40[21] + 1) )
    _rust_dealloc(8LL, 16LL * *((_QWORD *)&v40[21] + 1), 8LL);
  *((_QWORD *)&v40[22] + 1) = *(_QWORD *)&dest[1];
  *(_OWORD *)((char *)&v40[21] + 8) = dest[0];
  memcpy(dest, v40, sizeof(dest));
  *(_QWORD *)&v40[0] = 0LL;
  *((_QWORD *)&v40[0] + 1) = 1LL;
  *(_QWORD *)&v40[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v40, 0LL, 26LL);
  v23 = *((_QWORD *)&v40[0] + 1);
  v24 = *(_QWORD *)&v40[1];
  *(_OWORD *)(*((_QWORD *)&v40[0] + 1) + *(_QWORD *)&v40[1] + 10LL) = *(__int128 *)((char *)&xmmword_1AF67 + 10);
  *(_OWORD *)(v23 + v24) = xmmword_1AF67;
  *(_QWORD *)&v40[1] = v24 + 26;
  v25 = *(_QWORD *)&v40[0];
  v51[0] = *(_OWORD *)((char *)v40 + 8);
  if ( *(_QWORD *)&v40[0] != 0x8000000000000000LL )
    v40[0] = v51[0];
  if ( *((_QWORD *)&dest[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&dest[27] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[28], *((_QWORD *)&dest[27] + 1), 1LL);
  *((_QWORD *)&dest[27] + 1) = v25;
  dest[28] = v40[0];
  memcpy(v51, dest, 0x24DuLL);
  BYTE13(v51[36]) = 3;
  HIWORD(v51[36]) = HIWORD(dest[36]);
  clap_builder::builder::command::Command::arg(v40, src);
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
  *(_QWORD *)&src[33] = anon_6b32b05e1d077617d275c65ea4c6ad52_11_llvm_10609332461339697138;
  *((_QWORD *)&src[33] + 1) = 6LL;
  *(_QWORD *)&src[34] = anon_6b32b05e1d077617d275c65ea4c6ad52_11_llvm_10609332461339697138;
  *((_QWORD *)&src[34] + 1) = 6LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000000072LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 28LL);
  v26 = *((_QWORD *)&dest[0] + 1);
  v27 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 12LL) = *(__int128 *)((char *)&xmmword_1AF81 + 12);
  *(_OWORD *)(v26 + v27) = xmmword_1AF81;
  *(_QWORD *)&dest[1] = v27 + 28;
  v28 = *(_QWORD *)&dest[0];
  v51[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v51[0];
  *((_QWORD *)&src[27] + 1) = v28;
  src[28] = dest[0];
  memcpy(dest, src, 0x24CuLL);
  *(_WORD *)((char *)&dest[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(dest[36]) = HIBYTE(src[36]);
  BYTE12(dest[36]) = 2;
  v29 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  v30 = *((_QWORD *)&dest[8] + 1);
  v31 = 16 * v29;
  *(_QWORD *)(*((_QWORD *)&dest[8] + 1) + v31) = anon_6b32b05e1d077617d275c65ea4c6ad52_11_llvm_10609332461339697138;
  *(_QWORD *)(v30 + v31 + 8) = 6LL;
  *(_QWORD *)&dest[9] = v29 + 1;
  memcpy(v51, dest, 0x250uLL);
  clap_builder::builder::command::Command::arg(src, v40);
  v40[7] = 8uLL;
  v40[9] = 0LL;
  v40[10] = 8uLL;
  v40[12] = 0LL;
  v40[13] = 8uLL;
  v40[15] = 0LL;
  v40[16] = 8uLL;
  v40[18] = 0LL;
  v40[19] = 8uLL;
  v40[21] = 0LL;
  v40[22] = 8uLL;
  v40[24] = 0LL;
  v40[25] = 8uLL;
  *(_QWORD *)&v40[0] = 0LL;
  *(_QWORD *)&v40[1] = 0LL;
  *((_QWORD *)&v40[2] + 1) = 0LL;
  *((_QWORD *)&v40[3] + 1) = 0LL;
  *(_QWORD *)&v40[5] = 5LL;
  *((_QWORD *)&v40[6] + 1) = 0LL;
  *((_QWORD *)&v40[8] + 1) = 8LL;
  *((_QWORD *)&v40[11] + 1) = 8LL;
  *((_QWORD *)&v40[14] + 1) = 8LL;
  *((_QWORD *)&v40[17] + 1) = 8LL;
  *((_QWORD *)&v40[20] + 1) = 4LL;
  *((_QWORD *)&v40[23] + 1) = 8LL;
  *((_QWORD *)&v40[26] + 1) = 8LL;
  *(_QWORD *)&v40[27] = 0LL;
  *((_QWORD *)&v40[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v40[29] = 0x8000000000000000LL;
  *((_QWORD *)&v40[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v40[33] = anon_6b32b05e1d077617d275c65ea4c6ad52_12_llvm_10609332461339697138;
  *((_QWORD *)&v40[33] + 1) = 15LL;
  *(_QWORD *)&v40[34] = anon_6b32b05e1d077617d275c65ea4c6ad52_12_llvm_10609332461339697138;
  *((_QWORD *)&v40[34] + 1) = 15LL;
  *(_QWORD *)&v40[35] = 0LL;
  *(_QWORD *)&v40[36] = 0x1100000000007ALL;
  DWORD2(v40[36]) = 0;
  WORD6(v40[36]) = 3337;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 34LL);
  v32 = *((_QWORD *)&dest[0] + 1);
  v33 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 16LL) = xmmword_1AFAD;
  *(_OWORD *)(v32 + v33) = xmmword_1AF9D;
  *(_WORD *)(v32 + v33 + 32) = 25966;
  *(_QWORD *)&dest[1] = v33 + 34;
  v34 = *(_QWORD *)&dest[0];
  v51[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v51[0];
  *((_QWORD *)&v40[27] + 1) = v34;
  v40[28] = dest[0];
  memcpy(dest, v40, 0x24CuLL);
  *(_WORD *)((char *)&dest[36] + 13) = *(_WORD *)((char *)&v40[36] + 13);
  HIBYTE(dest[36]) = HIBYTE(v40[36]);
  BYTE12(dest[36]) = 2;
  v35 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  v36 = *((_QWORD *)&dest[8] + 1);
  v37 = 16 * v35;
  *(_QWORD *)(*((_QWORD *)&dest[8] + 1) + v37) = anon_6b32b05e1d077617d275c65ea4c6ad52_12_llvm_10609332461339697138;
  *(_QWORD *)(v36 + v37 + 8) = 15LL;
  *(_QWORD *)&dest[9] = v35 + 1;
  memcpy(v51, dest, 0x250uLL);
  clap_builder::builder::command::Command::arg(v40, src);
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
  *(_QWORD *)&src[33] = anon_6b32b05e1d077617d275c65ea4c6ad52_13_llvm_10609332461339697138;
  *((_QWORD *)&src[33] + 1) = 12LL;
  *(_QWORD *)&src[34] = 0LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000110000LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 769;
  v38 = v43;
  clap_builder::builder::command::Command::arg(v43, v40);
  return v38;
}
