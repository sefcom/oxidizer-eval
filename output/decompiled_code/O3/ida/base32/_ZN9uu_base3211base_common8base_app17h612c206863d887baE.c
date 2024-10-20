void *__fastcall uu_base32::base_common::base_app(void *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rcx
  _OWORD src[45]; // [rsp+10h] [rbp-AF8h] BYREF
  _BYTE dest[712]; // [rsp+2E0h] [rbp-828h] BYREF
  __int64 v28; // [rsp+5A8h] [rbp-560h] BYREF
  __int128 v29; // [rsp+5B0h] [rbp-558h]
  _OWORD v30[44]; // [rsp+5C0h] [rbp-548h] BYREF
  _OWORD v31[40]; // [rsp+880h] [rbp-288h] BYREF

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(src, qword_106F98, qword_106FA0);
  *(_QWORD *)&src[38] = a0027;
  *((_QWORD *)&src[38] + 1) = 6LL;
  memcpy(dest, src, sizeof(dest));
  clap_builder::builder::command::Command::about(src, dest, a2, a3);
  uucore::format_usage(v30, a4, a5);
  v8 = *(_QWORD *)&v30[0];
  if ( *(_QWORD *)&v30[0] != 0x8000000000000000LL )
    *(_OWORD *)dest = *(_OWORD *)((char *)v30 + 8);
  if ( *(_QWORD *)&src[29] != 0x8000000000000000LL && *(_QWORD *)&src[29] )
    _rust_dealloc(*((_QWORD *)&src[29] + 1), *(_QWORD *)&src[29], 1LL);
  *(_QWORD *)&src[29] = v8;
  *(_OWORD *)((char *)&src[29] + 8) = *(_OWORD *)dest;
  memcpy(dest, src, 0x2BCuLL);
  *(_QWORD *)&dest[700] = *(_QWORD *)((char *)&src[43] + 12) | 0x8000000080LL;
  *(_DWORD *)&dest[708] = DWORD1(src[44]);
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
  *(_QWORD *)&src[33] = anon_aee8d0926622a1c6e97588a73d77e694_24_llvm_9973493521462227259;
  *((_QWORD *)&src[33] + 1) = 6LL;
  *(_QWORD *)&src[34] = anon_aee8d0926622a1c6e97588a73d77e694_24_llvm_9973493521462227259;
  *((_QWORD *)&src[34] + 1) = 6LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000000064LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v30[0] = 0LL;
  *((_QWORD *)&v30[0] + 1) = 1LL;
  *(_QWORD *)&v30[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v30, 0LL, 11LL);
  v9 = *((_QWORD *)&v30[0] + 1);
  v10 = *(_QWORD *)&v30[1];
  *(_QWORD *)(*((_QWORD *)&v30[0] + 1) + *(_QWORD *)&v30[1]) = 0x642065646F636564LL;
  *(_DWORD *)(v9 + v10 + 7) = 1635017060;
  *(_QWORD *)&v30[1] = v10 + 11;
  v11 = *(_QWORD *)&v30[0];
  v31[0] = *(_OWORD *)((char *)v30 + 8);
  if ( *(_QWORD *)&v30[0] != 0x8000000000000000LL )
    v30[0] = v31[0];
  *((_QWORD *)&src[27] + 1) = v11;
  src[28] = v30[0];
  memcpy(v30, src, 0x24CuLL);
  *(_WORD *)((char *)&v30[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v30[36]) = HIBYTE(src[36]);
  BYTE12(v30[36]) = 2;
  v12 = *(_QWORD *)&v30[9];
  if ( *(_QWORD *)&v30[9] == *(_QWORD *)&v30[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v30[8]);
  v13 = *((_QWORD *)&v30[8] + 1);
  v14 = 16 * v12;
  *(_QWORD *)(*((_QWORD *)&v30[8] + 1) + v14) = anon_aee8d0926622a1c6e97588a73d77e694_24_llvm_9973493521462227259;
  *(_QWORD *)(v13 + v14 + 8) = 6LL;
  *(_QWORD *)&v30[9] = v12 + 1;
  memcpy(v31, v30, 0x250uLL);
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
  *(_QWORD *)&dest[528] = anon_aee8d0926622a1c6e97588a73d77e694_26_llvm_9973493521462227259;
  *(_QWORD *)&dest[536] = 14LL;
  *(_QWORD *)&dest[544] = anon_aee8d0926622a1c6e97588a73d77e694_26_llvm_9973493521462227259;
  *(_QWORD *)&dest[552] = 14LL;
  *(_QWORD *)&dest[560] = 0LL;
  *(_QWORD *)&dest[576] = 0x11000000000069LL;
  *(_DWORD *)&dest[584] = 0;
  *(_WORD *)&dest[588] = 3337;
  *(_QWORD *)&v30[0] = 0LL;
  *((_QWORD *)&v30[0] + 1) = 1LL;
  *(_QWORD *)&v30[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v30, 0LL, 47LL);
  v15 = *((_QWORD *)&v30[0] + 1);
  v16 = *(_QWORD *)&v30[1];
  *(_OWORD *)(*((_QWORD *)&v30[0] + 1) + *(_QWORD *)&v30[1] + 31LL) = *(__int128 *)((char *)&xmmword_1E260 + 15);
  qmemcpy((void *)(v15 + v16), "when decoding, ignore non-alphab", 32);
  *(_QWORD *)&v30[1] = v16 + 47;
  v17 = *(_QWORD *)&v30[0];
  v31[0] = *(_OWORD *)((char *)v30 + 8);
  if ( *(_QWORD *)&v30[0] != 0x8000000000000000LL )
    v30[0] = v31[0];
  *(_QWORD *)&dest[440] = v17;
  *(_OWORD *)&dest[448] = v30[0];
  memcpy(v30, dest, 0x24CuLL);
  *(_WORD *)((char *)&v30[36] + 13) = *(_WORD *)&dest[589];
  HIBYTE(v30[36]) = dest[591];
  BYTE12(v30[36]) = 2;
  v18 = *(_QWORD *)&v30[9];
  if ( *(_QWORD *)&v30[9] == *(_QWORD *)&v30[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v30[8]);
  v19 = *((_QWORD *)&v30[8] + 1);
  v20 = 16 * v18;
  *(_QWORD *)(*((_QWORD *)&v30[8] + 1) + v20) = anon_aee8d0926622a1c6e97588a73d77e694_26_llvm_9973493521462227259;
  *(_QWORD *)(v19 + v20 + 8) = 14LL;
  *(_QWORD *)&v30[9] = v18 + 1;
  memcpy(v31, v30, 0x250uLL);
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
  src[24] = 0LL;
  src[25] = 8uLL;
  *(_QWORD *)&src[0] = 0LL;
  *(_QWORD *)&src[1] = 0LL;
  *(_OWORD *)((char *)&src[1] + 8) = v30[43];
  *((_QWORD *)&src[2] + 1) = 0LL;
  *((_QWORD *)&src[3] + 1) = 0LL;
  src[4] = v30[42];
  *(_QWORD *)&src[5] = 5LL;
  *(_OWORD *)((char *)&src[5] + 8) = v30[41];
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
  src[28] = v30[40];
  *(_QWORD *)&src[29] = 0x8000000000000000LL;
  *(_OWORD *)((char *)&src[30] + 8) = v30[39];
  *(_OWORD *)((char *)&src[29] + 8) = v30[38];
  *((_QWORD *)&src[31] + 1) = 0x8000000000000001LL;
  src[32] = v30[37];
  *(_QWORD *)&src[33] = anon_aee8d0926622a1c6e97588a73d77e694_25_llvm_9973493521462227259;
  *((_QWORD *)&src[33] + 1) = 4LL;
  *(_QWORD *)&src[34] = anon_aee8d0926622a1c6e97588a73d77e694_25_llvm_9973493521462227259;
  *((_QWORD *)&src[34] + 1) = 4LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000000077LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v31[0] = aCols;
  *((_QWORD *)&v31[0] + 1) = 4LL;
  *(_QWORD *)&v31[1] = 0LL;
  *((_QWORD *)&v31[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v30, v31);
  if ( *((_QWORD *)&src[21] + 1) )
    _rust_dealloc(8LL, 16LL * *((_QWORD *)&src[21] + 1), 8LL);
  *((_QWORD *)&src[22] + 1) = *(_QWORD *)&v30[1];
  *(_OWORD *)((char *)&src[21] + 8) = v30[0];
  memcpy(v30, src, 0x250uLL);
  *(_QWORD *)&v31[0] = &unk_14850;
  *((_QWORD *)&v31[0] + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  *(_QWORD *)&src[0] = &off_101B30;
  *((_QWORD *)&src[0] + 1) = 2LL;
  *(_QWORD *)&src[1] = v31;
  *(_OWORD *)((char *)&src[1] + 8) = 1uLL;
  alloc::fmt::format::format_inner(&v28, src);
  v21 = v28;
  if ( v28 != 0x8000000000000000LL )
    src[0] = v29;
  if ( *((_QWORD *)&v30[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&v30[27] + 1) )
    _rust_dealloc(*(_QWORD *)&v30[28], *((_QWORD *)&v30[27] + 1), 1LL);
  *((_QWORD *)&v30[27] + 1) = v21;
  v30[28] = src[0];
  memcpy(src, v30, 0x250uLL);
  v22 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[9] == *(_QWORD *)&src[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[8]);
  v23 = *((_QWORD *)&src[8] + 1);
  v24 = 16 * v22;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v24) = anon_aee8d0926622a1c6e97588a73d77e694_25_llvm_9973493521462227259;
  *(_QWORD *)(v23 + v24 + 8) = 4LL;
  *(_QWORD *)&src[9] = v22 + 1;
  memcpy(v30, src, 0x250uLL);
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
  *(_QWORD *)&dest[40] = 1LL;
  *(_QWORD *)&dest[48] = 1LL;
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
  *(_QWORD *)&dest[528] = anon_aee8d0926622a1c6e97588a73d77e694_27_llvm_9973493521462227259;
  *(_QWORD *)&dest[536] = 4LL;
  *(_QWORD *)&dest[544] = 0LL;
  *(_QWORD *)&dest[560] = 0LL;
  *(_QWORD *)&dest[576] = 0x11000000110000LL;
  *(_DWORD *)&dest[584] = 0;
  *(_WORD *)&dest[588] = 769;
  clap_builder::builder::command::Command::arg(a1, src);
  return a1;
}
