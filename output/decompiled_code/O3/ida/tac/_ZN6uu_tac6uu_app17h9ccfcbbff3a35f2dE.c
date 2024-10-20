void *__fastcall uu_tac::uu_app(void *a1)
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
  void *v11; // rbx
  __int128 v13; // [rsp+0h] [rbp-848h] BYREF
  __int64 v14; // [rsp+10h] [rbp-838h]
  __int64 v15; // [rsp+18h] [rbp-830h]
  void *v16; // [rsp+28h] [rbp-820h]
  _OWORD v17[37]; // [rsp+30h] [rbp-818h] BYREF
  _OWORD src[45]; // [rsp+280h] [rbp-5C8h] BYREF
  _OWORD dest[47]; // [rsp+550h] [rbp-2F8h] BYREF

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(src, xmmword_29CE90, *((_QWORD *)&xmmword_29CE90 + 1));
  *(_QWORD *)&src[38] = a0027;
  *((_QWORD *)&src[38] + 1) = 6LL;
  memcpy(dest, src, 0x2C8uLL);
  uucore::format_usage(v17, aOptionFile, 24LL);
  v1 = *(_QWORD *)&v17[0];
  if ( *(_QWORD *)&v17[0] != 0x8000000000000000LL )
    src[0] = *(_OWORD *)((char *)v17 + 8);
  v16 = a1;
  if ( *(_QWORD *)&dest[29] != 0x8000000000000000LL && *(_QWORD *)&dest[29] )
    _rust_dealloc(*((_QWORD *)&dest[29] + 1), *(_QWORD *)&dest[29], 1LL);
  *(_QWORD *)&dest[29] = v1;
  *(_OWORD *)((char *)&dest[29] + 8) = src[0];
  memcpy(src, dest, 0x2C8uLL);
  clap_builder::builder::command::Command::about(dest, src, aWriteEachFileT, 52LL);
  memcpy(src, dest, 0x2BCuLL);
  *(_QWORD *)((char *)&src[43] + 12) = *(_QWORD *)((char *)&dest[43] + 12) | 0x8000000080LL;
  DWORD1(src[44]) = DWORD1(dest[44]);
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
  *(_QWORD *)&dest[33] = anon_8dbe3744b211a940d537979c519aa4d5_22_llvm_5607699944319050003;
  *((_QWORD *)&dest[33] + 1) = 6LL;
  *(_QWORD *)&dest[34] = anon_8dbe3744b211a940d537979c519aa4d5_22_llvm_5607699944319050003;
  *((_QWORD *)&dest[34] + 1) = 6LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000062LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v17[0] = 0LL;
  *((_QWORD *)&v17[0] + 1) = 1LL;
  *(_QWORD *)&v17[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v17, 0LL, 44LL);
  v2 = *((_QWORD *)&v17[0] + 1);
  v3 = *(_QWORD *)&v17[1];
  *(_OWORD *)(*((_QWORD *)&v17[0] + 1) + *(_QWORD *)&v17[1] + 28LL) = unk_643AF;
  qmemcpy((void *)(v2 + v3), "attach the separator before inst", 32);
  *(_QWORD *)&v17[1] = v3 + 44;
  v4 = *(_QWORD *)&v17[0];
  v13 = *(_OWORD *)((char *)v17 + 8);
  if ( *(_QWORD *)&v17[0] != 0x8000000000000000LL )
    v17[0] = v13;
  *((_QWORD *)&dest[27] + 1) = v4;
  dest[28] = v17[0];
  memcpy(v17, dest, 0x24CuLL);
  *(_WORD *)((char *)&v17[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(v17[36]) = HIBYTE(dest[36]);
  BYTE12(v17[36]) = 2;
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
  *(_QWORD *)&src[33] = anon_8dbe3744b211a940d537979c519aa4d5_23_llvm_5607699944319050003;
  *((_QWORD *)&src[33] + 1) = 5LL;
  *(_QWORD *)&src[34] = anon_8dbe3744b211a940d537979c519aa4d5_23_llvm_5607699944319050003;
  *((_QWORD *)&src[34] + 1) = 5LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000000072LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v17[0] = 0LL;
  *((_QWORD *)&v17[0] + 1) = 1LL;
  *(_QWORD *)&v17[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v17, 0LL, 46LL);
  v5 = *((_QWORD *)&v17[0] + 1);
  v6 = *(_QWORD *)&v17[1];
  *(_OWORD *)(*((_QWORD *)&v17[0] + 1) + *(_QWORD *)&v17[1] + 30LL) = unk_643DD;
  qmemcpy((void *)(v5 + v6), "interpret the sequence as a regu", 32);
  *(_QWORD *)&v17[1] = v6 + 46;
  v7 = *(_QWORD *)&v17[0];
  v13 = *(_OWORD *)((char *)v17 + 8);
  if ( *(_QWORD *)&v17[0] != 0x8000000000000000LL )
    v17[0] = v13;
  *((_QWORD *)&src[27] + 1) = v7;
  src[28] = v17[0];
  memcpy(v17, src, 0x24CuLL);
  *(_WORD *)((char *)&v17[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v17[36]) = HIBYTE(src[36]);
  BYTE12(v17[36]) = 2;
  clap_builder::builder::command::Command::arg(src, dest);
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
  *(_QWORD *)&v17[33] = anon_8dbe3744b211a940d537979c519aa4d5_24_llvm_5607699944319050003;
  *((_QWORD *)&v17[33] + 1) = 9LL;
  *(_QWORD *)&v17[34] = anon_8dbe3744b211a940d537979c519aa4d5_24_llvm_5607699944319050003;
  *((_QWORD *)&v17[34] + 1) = 9LL;
  *(_QWORD *)&v17[35] = 0LL;
  *(_QWORD *)&v17[36] = 0x11000000000073LL;
  DWORD2(v17[36]) = 0;
  WORD6(v17[36]) = 3337;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 46LL);
  v8 = *((_QWORD *)&dest[0] + 1);
  v9 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 30LL) = unk_6440B;
  qmemcpy((void *)(v8 + v9), "use STRING as the separator inst", 32);
  *(_QWORD *)&dest[1] = v9 + 46;
  v10 = *(_QWORD *)&dest[0];
  v13 = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v13;
  *((_QWORD *)&v17[27] + 1) = v10;
  v17[28] = dest[0];
  memcpy(dest, v17, 0x168uLL);
  memcpy(&dest[23], &v17[23], 0xE0uLL);
  *((_QWORD *)&dest[22] + 1) = *((_QWORD *)&v17[22] + 1);
  *(_QWORD *)&v13 = aString;
  *((_QWORD *)&v13 + 1) = 6LL;
  v14 = 0LL;
  v15 = 1LL;
  ((void (__fastcall *)(_OWORD *, __int128 *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    v17,
    &v13);
  if ( *((_QWORD *)&dest[21] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[22], 16LL * *((_QWORD *)&dest[21] + 1), 8LL);
  *((_QWORD *)&dest[22] + 1) = *(_QWORD *)&v17[1];
  *(_OWORD *)((char *)&dest[21] + 8) = v17[0];
  memcpy(v17, dest, sizeof(v17));
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
  *(_QWORD *)&src[33] = "filemode{";
  *((_QWORD *)&src[33] + 1) = 4LL;
  *(_QWORD *)&src[34] = 0LL;
  *(_QWORD *)&src[35] = 0LL;
  src[36] = xmmword_56F90;
  v11 = v16;
  clap_builder::builder::command::Command::arg(v16, dest);
  return v11;
}
