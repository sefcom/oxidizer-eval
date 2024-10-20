void *__fastcall uu_ptx::uu_app(void *a1)
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
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int16 v44; // bp
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  unsigned __int64 v49; // r15
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int16 v63; // bp
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int16 v71; // bp
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  void *v79; // rbp
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int128 v92; // [rsp+0h] [rbp-858h] BYREF
  __int64 v93; // [rsp+10h] [rbp-848h]
  __int64 v94; // [rsp+18h] [rbp-840h]
  _OWORD v95[37]; // [rsp+20h] [rbp-838h] BYREF
  unsigned __int64 v96; // [rsp+278h] [rbp-5E0h]
  _OWORD src[45]; // [rsp+280h] [rbp-5D8h] BYREF
  _OWORD dest[45]; // [rsp+550h] [rbp-308h] BYREF
  void *v99; // [rsp+820h] [rbp-38h]

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(dest, qword_2B90A8, qword_2B90B0);
  clap_builder::builder::command::Command::about(src, dest, aProduceAPermut, 264LL);
  *(_QWORD *)&src[38] = a0027;
  *((_QWORD *)&src[38] + 1) = 6LL;
  memcpy(dest, src, 0x2C8uLL);
  uucore::format_usage(v95, aOptionInputGOp, 60LL);
  v1 = *(_QWORD *)&v95[0];
  if ( *(_QWORD *)&v95[0] != 0x8000000000000000LL )
    src[0] = *(_OWORD *)((char *)v95 + 8);
  if ( *(_QWORD *)&dest[29] != 0x8000000000000000LL && *(_QWORD *)&dest[29] )
    _rust_dealloc(*((_QWORD *)&dest[29] + 1), *(_QWORD *)&dest[29], 1LL);
  *(_QWORD *)&dest[29] = v1;
  *(_OWORD *)((char *)&dest[29] + 8) = src[0];
  memcpy(src, dest, 0x2BCuLL);
  *(_QWORD *)((char *)&src[43] + 12) = *(_QWORD *)((char *)&dest[43] + 12) | 0x8000000080LL;
  DWORD1(src[44]) = DWORD1(dest[44]);
  v95[7] = 8uLL;
  v95[9] = 0LL;
  v95[10] = 8uLL;
  v95[12] = 0LL;
  v95[13] = 8uLL;
  v95[15] = 0LL;
  v95[16] = 8uLL;
  v95[18] = 0LL;
  v95[19] = 8uLL;
  v95[21] = 0LL;
  v95[22] = 8uLL;
  v95[24] = 0LL;
  v95[25] = 8uLL;
  *(_QWORD *)&v95[0] = 0LL;
  *(_QWORD *)&v95[1] = 0LL;
  *((_QWORD *)&v95[2] + 1) = 0LL;
  *((_QWORD *)&v95[3] + 1) = 0LL;
  *(_QWORD *)&v95[5] = 5LL;
  *((_QWORD *)&v95[6] + 1) = 0LL;
  *((_QWORD *)&v95[8] + 1) = 8LL;
  *((_QWORD *)&v95[11] + 1) = 8LL;
  *((_QWORD *)&v95[14] + 1) = 8LL;
  *((_QWORD *)&v95[17] + 1) = 8LL;
  *((_QWORD *)&v95[20] + 1) = 4LL;
  *((_QWORD *)&v95[23] + 1) = 8LL;
  *((_QWORD *)&v95[26] + 1) = 8LL;
  *(_QWORD *)&v95[27] = 0LL;
  *((_QWORD *)&v95[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v95[29] = 0x8000000000000000LL;
  *((_QWORD *)&v95[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v95[33] = "filemode{";
  *((_QWORD *)&v95[33] + 1) = 4LL;
  *(_QWORD *)&v95[34] = 0LL;
  *(_QWORD *)&v95[35] = 0LL;
  v95[36] = xmmword_58DD0;
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
  *(_QWORD *)&src[33] = anon_e23289579c9441ef21ddb87efb4b8a29_9_llvm_16528050568364581840;
  *((_QWORD *)&src[33] + 1) = 14LL;
  *(_QWORD *)&src[34] = anon_e23289579c9441ef21ddb87efb4b8a29_9_llvm_16528050568364581840;
  *((_QWORD *)&src[34] + 1) = 14LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000000041LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v95[0] = 0LL;
  *((_QWORD *)&v95[0] + 1) = 1LL;
  *(_QWORD *)&v95[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v95, 0LL, 41LL);
  v2 = *((_QWORD *)&v95[0] + 1);
  v3 = *(_QWORD *)&v95[1];
  *(_OWORD *)(*((_QWORD *)&v95[0] + 1) + *(_QWORD *)&v95[1] + 25LL) = unk_69C1C;
  qmemcpy((void *)(v2 + v3), "output automatically generated r", 32);
  *(_QWORD *)&v95[1] = v3 + 41;
  v4 = *(_QWORD *)&v95[0];
  v92 = *(_OWORD *)((char *)v95 + 8);
  if ( *(_QWORD *)&v95[0] != 0x8000000000000000LL )
    v95[0] = v92;
  *((_QWORD *)&src[27] + 1) = v4;
  src[28] = v95[0];
  memcpy(v95, src, 0x24CuLL);
  *(_WORD *)((char *)&v95[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v95[36]) = HIBYTE(src[36]);
  BYTE12(v95[36]) = 2;
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
  *(_QWORD *)&dest[33] = anon_e23289579c9441ef21ddb87efb4b8a29_10_llvm_16528050568364581840;
  *((_QWORD *)&dest[33] + 1) = 11LL;
  *(_QWORD *)&dest[34] = anon_e23289579c9441ef21ddb87efb4b8a29_10_llvm_16528050568364581840;
  *((_QWORD *)&dest[34] + 1) = 11LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000047LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v95[0] = 0LL;
  *((_QWORD *)&v95[0] + 1) = 1LL;
  *(_QWORD *)&v95[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v95, 0LL, 31LL);
  v5 = *((_QWORD *)&v95[0] + 1);
  v6 = *(_QWORD *)&v95[1];
  *(_OWORD *)(*((_QWORD *)&v95[0] + 1) + *(_QWORD *)&v95[1] + 15LL) = unk_69C3B;
  *(_OWORD *)(v5 + v6) = unk_69C2C;
  *(_QWORD *)&v95[1] = v6 + 31;
  v7 = *(_QWORD *)&v95[0];
  v92 = *(_OWORD *)((char *)v95 + 8);
  if ( *(_QWORD *)&v95[0] != 0x8000000000000000LL )
    v95[0] = v92;
  *((_QWORD *)&dest[27] + 1) = v7;
  dest[28] = v95[0];
  memcpy(v95, dest, 0x24CuLL);
  *(_WORD *)((char *)&v95[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(v95[36]) = HIBYTE(dest[36]);
  BYTE12(v95[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, src);
  v95[7] = 8uLL;
  v95[9] = 0LL;
  v95[10] = 8uLL;
  v95[12] = 0LL;
  v95[13] = 8uLL;
  v95[15] = 0LL;
  v95[16] = 8uLL;
  v95[18] = 0LL;
  v95[19] = 8uLL;
  v95[21] = 0LL;
  v95[22] = 8uLL;
  v95[24] = 0LL;
  v95[25] = 8uLL;
  *(_QWORD *)&v95[0] = 0LL;
  *(_QWORD *)&v95[1] = 0LL;
  *((_QWORD *)&v95[2] + 1) = 0LL;
  *((_QWORD *)&v95[3] + 1) = 0LL;
  *(_QWORD *)&v95[5] = 5LL;
  *((_QWORD *)&v95[6] + 1) = 0LL;
  *((_QWORD *)&v95[8] + 1) = 8LL;
  *((_QWORD *)&v95[11] + 1) = 8LL;
  *((_QWORD *)&v95[14] + 1) = 8LL;
  *((_QWORD *)&v95[17] + 1) = 8LL;
  *((_QWORD *)&v95[20] + 1) = 4LL;
  *((_QWORD *)&v95[23] + 1) = 8LL;
  *((_QWORD *)&v95[26] + 1) = 8LL;
  *(_QWORD *)&v95[27] = 0LL;
  *((_QWORD *)&v95[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v95[29] = 0x8000000000000000LL;
  *((_QWORD *)&v95[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v95[33] = &anon_e23289579c9441ef21ddb87efb4b8a29_11_llvm_16528050568364581840;
  *((_QWORD *)&v95[33] + 1) = 15LL;
  *(_QWORD *)&v95[34] = &anon_e23289579c9441ef21ddb87efb4b8a29_11_llvm_16528050568364581840;
  *((_QWORD *)&v95[34] + 1) = 15LL;
  *(_QWORD *)&v95[35] = 0LL;
  *(_QWORD *)&v95[36] = 0x11000000000046LL;
  DWORD2(v95[36]) = 0;
  WORD6(v95[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 40LL);
  v99 = a1;
  v8 = *((_QWORD *)&src[0] + 1);
  v9 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 16LL) = unk_69C5B;
  *(_OWORD *)(v8 + v9) = unk_69C4B;
  *(_QWORD *)(v8 + v9 + 32) = 0x736E6F697461636ELL;
  *(_QWORD *)&src[1] = v9 + 40;
  v10 = *(_QWORD *)&src[0];
  v92 = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v92;
  *((_QWORD *)&v95[27] + 1) = v10;
  v95[28] = src[0];
  memcpy(src, v95, 0x168uLL);
  memcpy(&src[23], &v95[23], 0xE0uLL);
  *((_QWORD *)&src[22] + 1) = *((_QWORD *)&v95[22] + 1);
  *(_QWORD *)&v92 = aString;
  *((_QWORD *)&v92 + 1) = 6LL;
  v93 = 0LL;
  v94 = 1LL;
  ((void (__fastcall *)(_OWORD *, __int128 *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    v95,
    &v92);
  if ( *((_QWORD *)&src[21] + 1) )
    _rust_dealloc(*(_QWORD *)&src[22], 16LL * *((_QWORD *)&src[21] + 1), 8LL);
  *((_QWORD *)&src[22] + 1) = *(_QWORD *)&v95[1];
  *(_OWORD *)((char *)&src[21] + 8) = v95[0];
  memcpy(v95, src, sizeof(v95));
  clap_builder::builder::command::Command::arg(src, dest);
  v95[7] = 8uLL;
  v95[9] = 0LL;
  v95[10] = 8uLL;
  v95[12] = 0LL;
  v95[13] = 8uLL;
  v95[15] = 0LL;
  v95[16] = 8uLL;
  v95[18] = 0LL;
  v95[19] = 8uLL;
  v95[21] = 0LL;
  v95[22] = 8uLL;
  v95[24] = 0LL;
  v95[25] = 8uLL;
  *(_QWORD *)&v95[0] = 0LL;
  *(_QWORD *)&v95[1] = 0LL;
  *((_QWORD *)&v95[2] + 1) = 0LL;
  *((_QWORD *)&v95[3] + 1) = 0LL;
  *(_QWORD *)&v95[5] = 5LL;
  *((_QWORD *)&v95[6] + 1) = 0LL;
  *((_QWORD *)&v95[8] + 1) = 8LL;
  *((_QWORD *)&v95[11] + 1) = 8LL;
  *((_QWORD *)&v95[14] + 1) = 8LL;
  *((_QWORD *)&v95[17] + 1) = 8LL;
  *((_QWORD *)&v95[20] + 1) = 4LL;
  *((_QWORD *)&v95[23] + 1) = 8LL;
  *((_QWORD *)&v95[26] + 1) = 8LL;
  *(_QWORD *)&v95[27] = 0LL;
  *((_QWORD *)&v95[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v95[29] = 0x8000000000000000LL;
  *((_QWORD *)&v95[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v95[33] = &anon_e23289579c9441ef21ddb87efb4b8a29_12_llvm_16528050568364581840;
  *((_QWORD *)&v95[33] + 1) = 10LL;
  *(_QWORD *)&v95[34] = &anon_e23289579c9441ef21ddb87efb4b8a29_12_llvm_16528050568364581840;
  *((_QWORD *)&v95[34] + 1) = 10LL;
  *(_QWORD *)&v95[35] = 0LL;
  *(_QWORD *)&v95[36] = 0x1100000000004DLL;
  DWORD2(v95[36]) = 0;
  WORD6(v95[36]) = 3337;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 33LL);
  v11 = *((_QWORD *)&dest[0] + 1);
  v12 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 16LL) = unk_69C89;
  *(_OWORD *)(v11 + v12) = unk_69C79;
  *(_BYTE *)(v11 + v12 + 32) = 39;
  *(_QWORD *)&dest[1] = v12 + 33;
  v13 = *(_QWORD *)&dest[0];
  v92 = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v92;
  *((_QWORD *)&v95[27] + 1) = v13;
  v95[28] = dest[0];
  memcpy(dest, v95, 0x168uLL);
  memcpy(&dest[23], &v95[23], 0xE0uLL);
  *((_QWORD *)&dest[22] + 1) = *((_QWORD *)&v95[22] + 1);
  *(_QWORD *)&v92 = aString;
  *((_QWORD *)&v92 + 1) = 6LL;
  v93 = 0LL;
  v94 = 1LL;
  ((void (__fastcall *)(_OWORD *, __int128 *, __int64, __int64, __int64, __int64))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    v95,
    &v92,
    v14,
    v15,
    v16,
    v17);
  if ( *((_QWORD *)&dest[21] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[22], 16LL * *((_QWORD *)&dest[21] + 1), 8LL);
  *((_QWORD *)&dest[22] + 1) = *(_QWORD *)&v95[1];
  *(_OWORD *)((char *)&dest[21] + 8) = v95[0];
  memcpy(v95, dest, sizeof(v95));
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
  *(_QWORD *)&src[33] = anon_e23289579c9441ef21ddb87efb4b8a29_13_llvm_16528050568364581840;
  *((_QWORD *)&src[33] + 1) = 11LL;
  *(_QWORD *)&src[34] = anon_e23289579c9441ef21ddb87efb4b8a29_13_llvm_16528050568364581840;
  *((_QWORD *)&src[34] + 1) = 11LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x1100000000004FLL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v95[0] = 0LL;
  *((_QWORD *)&v95[0] + 1) = 1LL;
  *(_QWORD *)&v95[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v95, 0LL, 34LL);
  v18 = *((_QWORD *)&v95[0] + 1);
  v19 = *(_QWORD *)&v95[1];
  *(_OWORD *)(*((_QWORD *)&v95[0] + 1) + *(_QWORD *)&v95[1] + 16LL) = unk_69CAA;
  *(_OWORD *)(v18 + v19) = unk_69C9A;
  *(_WORD *)(v18 + v19 + 32) = 29541;
  *(_QWORD *)&v95[1] = v19 + 34;
  v20 = *(_QWORD *)&v95[0];
  v92 = *(_OWORD *)((char *)v95 + 8);
  if ( *(_QWORD *)&v95[0] != 0x8000000000000000LL )
    v95[0] = v92;
  *((_QWORD *)&src[27] + 1) = v20;
  src[28] = v95[0];
  memcpy(v95, src, 0x24CuLL);
  *(_WORD *)((char *)&v95[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v95[36]) = HIBYTE(src[36]);
  BYTE12(v95[36]) = 2;
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
  *(_QWORD *)&dest[33] = anon_e23289579c9441ef21ddb87efb4b8a29_14_llvm_16528050568364581840;
  *((_QWORD *)&dest[33] + 1) = 15LL;
  *(_QWORD *)&dest[34] = anon_e23289579c9441ef21ddb87efb4b8a29_14_llvm_16528050568364581840;
  *((_QWORD *)&dest[34] + 1) = 15LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000052LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v95[0] = 0LL;
  *((_QWORD *)&v95[0] + 1) = 1LL;
  *(_QWORD *)&v95[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v95, 0LL, 42LL);
  v21 = *((_QWORD *)&v95[0] + 1);
  v22 = *(_QWORD *)&v95[1];
  *(_OWORD *)(*((_QWORD *)&v95[0] + 1) + *(_QWORD *)&v95[1] + 26LL) = unk_69CD6;
  qmemcpy((void *)(v21 + v22), "put references at right, not cou", 32);
  *(_QWORD *)&v95[1] = v22 + 42;
  v23 = *(_QWORD *)&v95[0];
  v92 = *(_OWORD *)((char *)v95 + 8);
  if ( *(_QWORD *)&v95[0] != 0x8000000000000000LL )
    v95[0] = v92;
  *((_QWORD *)&dest[27] + 1) = v23;
  dest[28] = v95[0];
  memcpy(v95, dest, 0x24CuLL);
  *(_WORD *)((char *)&v95[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(v95[36]) = HIBYTE(dest[36]);
  BYTE12(v95[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, src);
  v95[7] = 8uLL;
  v95[9] = 0LL;
  v95[10] = 8uLL;
  v95[12] = 0LL;
  v95[13] = 8uLL;
  v95[15] = 0LL;
  v95[16] = 8uLL;
  v95[18] = 0LL;
  v95[19] = 8uLL;
  v95[21] = 0LL;
  v95[22] = 8uLL;
  v95[24] = 0LL;
  v95[25] = 8uLL;
  *(_QWORD *)&v95[0] = 0LL;
  *(_QWORD *)&v95[1] = 0LL;
  *((_QWORD *)&v95[2] + 1) = 0LL;
  *((_QWORD *)&v95[3] + 1) = 0LL;
  *(_QWORD *)&v95[5] = 5LL;
  *((_QWORD *)&v95[6] + 1) = 0LL;
  *((_QWORD *)&v95[8] + 1) = 8LL;
  *((_QWORD *)&v95[11] + 1) = 8LL;
  *((_QWORD *)&v95[14] + 1) = 8LL;
  *((_QWORD *)&v95[17] + 1) = 8LL;
  *((_QWORD *)&v95[20] + 1) = 4LL;
  *((_QWORD *)&v95[23] + 1) = 8LL;
  *((_QWORD *)&v95[26] + 1) = 8LL;
  *(_QWORD *)&v95[27] = 0LL;
  *((_QWORD *)&v95[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v95[29] = 0x8000000000000000LL;
  *((_QWORD *)&v95[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v95[33] = &anon_e23289579c9441ef21ddb87efb4b8a29_15_llvm_16528050568364581840;
  *((_QWORD *)&v95[33] + 1) = 15LL;
  *(_QWORD *)&v95[34] = &anon_e23289579c9441ef21ddb87efb4b8a29_15_llvm_16528050568364581840;
  *((_QWORD *)&v95[34] + 1) = 15LL;
  *(_QWORD *)&v95[35] = 0LL;
  *(_QWORD *)&v95[36] = 0x11000000000053LL;
  DWORD2(v95[36]) = 0;
  WORD6(v95[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 36LL);
  v24 = *((_QWORD *)&src[0] + 1);
  v25 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 16LL) = unk_69CF6;
  *(_OWORD *)(v24 + v25) = unk_69CE6;
  *(_DWORD *)(v24 + v25 + 32) = 1936024430;
  *(_QWORD *)&src[1] = v25 + 36;
  v26 = *(_QWORD *)&src[0];
  v92 = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v92;
  *((_QWORD *)&v95[27] + 1) = v26;
  v95[28] = src[0];
  memcpy(src, v95, 0x168uLL);
  memcpy(&src[23], &v95[23], 0xE0uLL);
  *((_QWORD *)&src[22] + 1) = *((_QWORD *)&v95[22] + 1);
  *(_QWORD *)&v92 = aRegexp;
  *((_QWORD *)&v92 + 1) = 6LL;
  v93 = 0LL;
  v94 = 1LL;
  ((void (__fastcall *)(_OWORD *, __int128 *, __int64, __int64, __int64, __int64))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    v95,
    &v92,
    v27,
    v28,
    v29,
    v30);
  if ( *((_QWORD *)&src[21] + 1) )
    _rust_dealloc(*(_QWORD *)&src[22], 16LL * *((_QWORD *)&src[21] + 1), 8LL);
  *((_QWORD *)&src[22] + 1) = *(_QWORD *)&v95[1];
  *(_OWORD *)((char *)&src[21] + 8) = v95[0];
  memcpy(v95, src, sizeof(v95));
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
  *(_QWORD *)&dest[33] = anon_e23289579c9441ef21ddb87efb4b8a29_16_llvm_16528050568364581840;
  *((_QWORD *)&dest[33] + 1) = 10LL;
  *(_QWORD *)&dest[34] = anon_e23289579c9441ef21ddb87efb4b8a29_16_llvm_16528050568364581840;
  *((_QWORD *)&dest[34] + 1) = 10LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000054LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v95[0] = 0LL;
  *((_QWORD *)&v95[0] + 1) = 1LL;
  *(_QWORD *)&v95[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v95, 0LL, 33LL);
  v31 = *((_QWORD *)&v95[0] + 1);
  v32 = *(_QWORD *)&v95[1];
  *(_OWORD *)(*((_QWORD *)&v95[0] + 1) + *(_QWORD *)&v95[1] + 16LL) = unk_69D20;
  *(_OWORD *)(v31 + v32) = unk_69D10;
  *(_BYTE *)(v31 + v32 + 32) = 115;
  *(_QWORD *)&v95[1] = v32 + 33;
  v33 = *(_QWORD *)&v95[0];
  v92 = *(_OWORD *)((char *)v95 + 8);
  if ( *(_QWORD *)&v95[0] != 0x8000000000000000LL )
    v95[0] = v92;
  *((_QWORD *)&dest[27] + 1) = v33;
  dest[28] = v95[0];
  memcpy(v95, dest, 0x24CuLL);
  *(_WORD *)((char *)&v95[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(v95[36]) = HIBYTE(dest[36]);
  BYTE12(v95[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, src);
  v95[7] = 8uLL;
  v95[9] = 0LL;
  v95[10] = 8uLL;
  v95[12] = 0LL;
  v95[13] = 8uLL;
  v95[15] = 0LL;
  v95[16] = 8uLL;
  v95[18] = 0LL;
  v95[19] = 8uLL;
  v95[21] = 0LL;
  v95[22] = 8uLL;
  v95[24] = 0LL;
  v95[25] = 8uLL;
  *(_QWORD *)&v95[0] = 0LL;
  *(_QWORD *)&v95[1] = 0LL;
  *((_QWORD *)&v95[2] + 1) = 0LL;
  *((_QWORD *)&v95[3] + 1) = 0LL;
  *(_QWORD *)&v95[5] = 5LL;
  *((_QWORD *)&v95[6] + 1) = 0LL;
  *((_QWORD *)&v95[8] + 1) = 8LL;
  *((_QWORD *)&v95[11] + 1) = 8LL;
  *((_QWORD *)&v95[14] + 1) = 8LL;
  *((_QWORD *)&v95[17] + 1) = 8LL;
  *((_QWORD *)&v95[20] + 1) = 4LL;
  *((_QWORD *)&v95[23] + 1) = 8LL;
  *((_QWORD *)&v95[26] + 1) = 8LL;
  *(_QWORD *)&v95[27] = 0LL;
  *((_QWORD *)&v95[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v95[29] = 0x8000000000000000LL;
  *((_QWORD *)&v95[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v95[33] = &anon_e23289579c9441ef21ddb87efb4b8a29_17_llvm_16528050568364581840;
  *((_QWORD *)&v95[33] + 1) = 11LL;
  *(_QWORD *)&v95[34] = &anon_e23289579c9441ef21ddb87efb4b8a29_17_llvm_16528050568364581840;
  *((_QWORD *)&v95[34] + 1) = 11LL;
  *(_QWORD *)&v95[35] = 0LL;
  *(_QWORD *)&v95[36] = 0x11000000000057LL;
  DWORD2(v95[36]) = 0;
  WORD6(v95[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 32LL);
  v34 = *((_QWORD *)&src[0] + 1);
  v35 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 16LL) = xmmword_61210;
  *(_OWORD *)(v34 + v35) = xmmword_61200;
  *(_QWORD *)&src[1] = v35 + 32;
  v36 = *(_QWORD *)&src[0];
  v92 = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v92;
  *((_QWORD *)&v95[27] + 1) = v36;
  v95[28] = src[0];
  memcpy(src, v95, 0x168uLL);
  memcpy(&src[23], &v95[23], 0xE0uLL);
  *((_QWORD *)&src[22] + 1) = *((_QWORD *)&v95[22] + 1);
  *(_QWORD *)&v92 = aRegexp;
  *((_QWORD *)&v92 + 1) = 6LL;
  v93 = 0LL;
  v94 = 1LL;
  ((void (__fastcall *)(_OWORD *, __int128 *, __int64, __int64, __int64, __int64))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    v95,
    &v92,
    v37,
    v38,
    v39,
    v40);
  if ( *((_QWORD *)&src[21] + 1) )
    _rust_dealloc(*(_QWORD *)&src[22], 16LL * *((_QWORD *)&src[21] + 1), 8LL);
  *((_QWORD *)&src[22] + 1) = *(_QWORD *)&v95[1];
  *(_OWORD *)((char *)&src[21] + 8) = v95[0];
  memcpy(v95, src, sizeof(v95));
  clap_builder::builder::command::Command::arg(src, dest);
  v95[7] = 8uLL;
  v95[9] = 0LL;
  v95[10] = 8uLL;
  v95[12] = 0LL;
  v95[13] = 8uLL;
  v95[15] = 0LL;
  v95[16] = 8uLL;
  v95[18] = 0LL;
  v95[19] = 8uLL;
  v95[21] = 0LL;
  v95[22] = 8uLL;
  v95[24] = 0LL;
  v95[25] = 8uLL;
  *(_QWORD *)&v95[0] = 0LL;
  *(_QWORD *)&v95[1] = 0LL;
  *((_QWORD *)&v95[2] + 1) = 0LL;
  *((_QWORD *)&v95[3] + 1) = 0LL;
  *(_QWORD *)&v95[5] = 5LL;
  *((_QWORD *)&v95[6] + 1) = 0LL;
  *((_QWORD *)&v95[8] + 1) = 8LL;
  *((_QWORD *)&v95[11] + 1) = 8LL;
  *((_QWORD *)&v95[14] + 1) = 8LL;
  *((_QWORD *)&v95[17] + 1) = 8LL;
  *((_QWORD *)&v95[20] + 1) = 4LL;
  *((_QWORD *)&v95[23] + 1) = 8LL;
  *((_QWORD *)&v95[26] + 1) = 8LL;
  *(_QWORD *)&v95[27] = 0LL;
  *((_QWORD *)&v95[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v95[29] = 0x8000000000000000LL;
  *((_QWORD *)&v95[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v95[33] = &anon_e23289579c9441ef21ddb87efb4b8a29_18_llvm_16528050568364581840;
  *((_QWORD *)&v95[33] + 1) = 10LL;
  *(_QWORD *)&v95[34] = &anon_e23289579c9441ef21ddb87efb4b8a29_18_llvm_16528050568364581840;
  *((_QWORD *)&v95[34] + 1) = 10LL;
  *(_QWORD *)&v95[35] = 0LL;
  *(_QWORD *)&v95[36] = 0x11000000000062LL;
  DWORD2(v95[36]) = 0;
  WORD6(v95[36]) = 3337;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 34LL);
  v41 = *((_QWORD *)&dest[0] + 1);
  v42 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 16LL) = unk_69D41;
  *(_OWORD *)(v41 + v42) = unk_69D31;
  *(_WORD *)(v41 + v42 + 32) = 17740;
  *(_QWORD *)&dest[1] = v42 + 34;
  v43 = *(_QWORD *)&dest[0];
  v92 = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v92;
  *((_QWORD *)&v95[27] + 1) = v43;
  v95[28] = dest[0];
  memcpy(dest, v95, 0x168uLL);
  memcpy(&dest[23], &v95[23], 0xDDuLL);
  v44 = HIWORD(v95[36]);
  *((_QWORD *)&dest[22] + 1) = *((_QWORD *)&v95[22] + 1);
  BYTE13(dest[36]) = 13;
  HIWORD(dest[36]) = HIWORD(v95[36]);
  *(_QWORD *)&v92 = aFile;
  *((_QWORD *)&v92 + 1) = 4LL;
  v93 = 0LL;
  v94 = 1LL;
  ((void (__fastcall *)(_OWORD *, __int128 *, __int64, __int64, __int64, __int64))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    v95,
    &v92,
    v45,
    v46,
    v47,
    v48);
  v96 = 0x8000000000000001LL;
  if ( *((_QWORD *)&dest[21] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[22], 16LL * *((_QWORD *)&dest[21] + 1), 8LL);
  *((_QWORD *)&dest[22] + 1) = *(_QWORD *)&v95[1];
  *(_OWORD *)((char *)&dest[21] + 8) = v95[0];
  memcpy(v95, dest, 0x168uLL);
  memcpy(&v95[23], &dest[23], 0xDDuLL);
  *((_QWORD *)&v95[22] + 1) = *((_QWORD *)&dest[22] + 1);
  BYTE13(v95[36]) = 3;
  HIWORD(v95[36]) = v44;
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
  v49 = v96;
  *((_QWORD *)&src[31] + 1) = v96;
  *(_QWORD *)&src[33] = anon_e23289579c9441ef21ddb87efb4b8a29_19_llvm_16528050568364581840;
  *((_QWORD *)&src[33] + 1) = 11LL;
  *(_QWORD *)&src[34] = anon_e23289579c9441ef21ddb87efb4b8a29_19_llvm_16528050568364581840;
  *((_QWORD *)&src[34] + 1) = 11LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000000066LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v95[0] = 0LL;
  *((_QWORD *)&v95[0] + 1) = 1LL;
  *(_QWORD *)&v95[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v95, 0LL, 41LL);
  v50 = *((_QWORD *)&v95[0] + 1);
  v51 = *(_QWORD *)&v95[1];
  *(_OWORD *)(*((_QWORD *)&v95[0] + 1) + *(_QWORD *)&v95[1] + 25LL) = unk_69D6C;
  qmemcpy((void *)(v50 + v51), "fold lower case to upper case fo", 32);
  *(_QWORD *)&v95[1] = v51 + 41;
  v52 = *(_QWORD *)&v95[0];
  v92 = *(_OWORD *)((char *)v95 + 8);
  if ( *(_QWORD *)&v95[0] != 0x8000000000000000LL )
    v95[0] = v92;
  *((_QWORD *)&src[27] + 1) = v52;
  src[28] = v95[0];
  memcpy(v95, src, 0x24CuLL);
  *(_WORD *)((char *)&v95[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v95[36]) = HIBYTE(src[36]);
  BYTE12(v95[36]) = 2;
  clap_builder::builder::command::Command::arg(src, dest);
  v95[7] = 8uLL;
  v95[9] = 0LL;
  v95[10] = 8uLL;
  v95[12] = 0LL;
  v95[13] = 8uLL;
  v95[15] = 0LL;
  v95[16] = 8uLL;
  v95[18] = 0LL;
  v95[19] = 8uLL;
  v95[21] = 0LL;
  v95[22] = 8uLL;
  v95[24] = 0LL;
  v95[25] = 8uLL;
  *(_QWORD *)&v95[0] = 0LL;
  *(_QWORD *)&v95[1] = 0LL;
  *((_QWORD *)&v95[2] + 1) = 0LL;
  *((_QWORD *)&v95[3] + 1) = 0LL;
  *(_QWORD *)&v95[5] = 5LL;
  *((_QWORD *)&v95[6] + 1) = 0LL;
  *((_QWORD *)&v95[8] + 1) = 8LL;
  *((_QWORD *)&v95[11] + 1) = 8LL;
  *((_QWORD *)&v95[14] + 1) = 8LL;
  *((_QWORD *)&v95[17] + 1) = 8LL;
  *((_QWORD *)&v95[20] + 1) = 4LL;
  *((_QWORD *)&v95[23] + 1) = 8LL;
  *((_QWORD *)&v95[26] + 1) = 8LL;
  *(_QWORD *)&v95[27] = 0LL;
  *((_QWORD *)&v95[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v95[29] = 0x8000000000000000LL;
  *((_QWORD *)&v95[31] + 1) = v49;
  *(_QWORD *)&v95[33] = anon_e23289579c9441ef21ddb87efb4b8a29_20_llvm_16528050568364581840;
  *((_QWORD *)&v95[33] + 1) = 8LL;
  *(_QWORD *)&v95[34] = anon_e23289579c9441ef21ddb87efb4b8a29_20_llvm_16528050568364581840;
  *((_QWORD *)&v95[34] + 1) = 8LL;
  *(_QWORD *)&v95[35] = 0LL;
  *(_QWORD *)&v95[36] = 0x11000000000067LL;
  DWORD2(v95[36]) = 0;
  WORD6(v95[36]) = 3337;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 41LL);
  v53 = *((_QWORD *)&dest[0] + 1);
  v54 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 25LL) = unk_69D95;
  qmemcpy((void *)(v53 + v54), "gap size in columns between outp", 32);
  *(_QWORD *)&dest[1] = v54 + 41;
  v55 = *(_QWORD *)&dest[0];
  v92 = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v92;
  *((_QWORD *)&v95[27] + 1) = v55;
  v95[28] = dest[0];
  memcpy(dest, v95, 0x168uLL);
  memcpy(&dest[23], &v95[23], 0xE0uLL);
  *((_QWORD *)&dest[22] + 1) = *((_QWORD *)&v95[22] + 1);
  *(_QWORD *)&v92 = aNumber;
  *((_QWORD *)&v92 + 1) = 6LL;
  v93 = 0LL;
  v94 = 1LL;
  ((void (__fastcall *)(_OWORD *, __int128 *, __int64, __int64, __int64, __int64))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    v95,
    &v92,
    v56,
    v57,
    v58,
    v59);
  if ( *((_QWORD *)&dest[21] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[22], 16LL * *((_QWORD *)&dest[21] + 1), 8LL);
  *((_QWORD *)&dest[22] + 1) = *(_QWORD *)&v95[1];
  *(_OWORD *)((char *)&dest[21] + 8) = v95[0];
  memcpy(v95, dest, sizeof(v95));
  clap_builder::builder::command::Command::arg(dest, src);
  v95[7] = 8uLL;
  v95[9] = 0LL;
  v95[10] = 8uLL;
  v95[12] = 0LL;
  v95[13] = 8uLL;
  v95[15] = 0LL;
  v95[16] = 8uLL;
  v95[18] = 0LL;
  v95[19] = 8uLL;
  v95[21] = 0LL;
  v95[22] = 8uLL;
  v95[24] = 0LL;
  v95[25] = 8uLL;
  *(_QWORD *)&v95[0] = 0LL;
  *(_QWORD *)&v95[1] = 0LL;
  *((_QWORD *)&v95[2] + 1) = 0LL;
  *((_QWORD *)&v95[3] + 1) = 0LL;
  *(_QWORD *)&v95[5] = 5LL;
  *((_QWORD *)&v95[6] + 1) = 0LL;
  *((_QWORD *)&v95[8] + 1) = 8LL;
  *((_QWORD *)&v95[11] + 1) = 8LL;
  *((_QWORD *)&v95[14] + 1) = 8LL;
  *((_QWORD *)&v95[17] + 1) = 8LL;
  *((_QWORD *)&v95[20] + 1) = 4LL;
  *((_QWORD *)&v95[23] + 1) = 8LL;
  *((_QWORD *)&v95[26] + 1) = 8LL;
  *(_QWORD *)&v95[27] = 0LL;
  *((_QWORD *)&v95[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v95[29] = 0x8000000000000000LL;
  *((_QWORD *)&v95[31] + 1) = v49;
  *(_QWORD *)&v95[33] = &anon_e23289579c9441ef21ddb87efb4b8a29_21_llvm_16528050568364581840;
  *((_QWORD *)&v95[33] + 1) = 11LL;
  *(_QWORD *)&v95[34] = &anon_e23289579c9441ef21ddb87efb4b8a29_21_llvm_16528050568364581840;
  *((_QWORD *)&v95[34] + 1) = 11LL;
  *(_QWORD *)&v95[35] = 0LL;
  *(_QWORD *)&v95[36] = 0x11000000000069LL;
  DWORD2(v95[36]) = 0;
  WORD6(v95[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 31LL);
  v60 = *((_QWORD *)&src[0] + 1);
  v61 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 15LL) = unk_69DBA;
  *(_OWORD *)(v60 + v61) = unk_69DAB;
  *(_QWORD *)&src[1] = v61 + 31;
  v62 = *(_QWORD *)&src[0];
  v92 = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v92;
  *((_QWORD *)&v95[27] + 1) = v62;
  v95[28] = src[0];
  memcpy(src, v95, 0x168uLL);
  memcpy(&src[23], &v95[23], 0xDDuLL);
  v63 = HIWORD(v95[36]);
  *((_QWORD *)&src[22] + 1) = *((_QWORD *)&v95[22] + 1);
  BYTE13(src[36]) = 13;
  HIWORD(src[36]) = HIWORD(v95[36]);
  *(_QWORD *)&v92 = aFile;
  *((_QWORD *)&v92 + 1) = 4LL;
  v93 = 0LL;
  v94 = 1LL;
  ((void (__fastcall *)(_OWORD *, __int128 *, __int64, __int64, __int64, __int64))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    v95,
    &v92,
    v64,
    v65,
    v66,
    v67);
  if ( *((_QWORD *)&src[21] + 1) )
    _rust_dealloc(*(_QWORD *)&src[22], 16LL * *((_QWORD *)&src[21] + 1), 8LL);
  *((_QWORD *)&src[22] + 1) = *(_QWORD *)&v95[1];
  *(_OWORD *)((char *)&src[21] + 8) = v95[0];
  memcpy(v95, src, 0x168uLL);
  memcpy(&v95[23], &src[23], 0xDDuLL);
  *((_QWORD *)&v95[22] + 1) = *((_QWORD *)&src[22] + 1);
  BYTE13(v95[36]) = 3;
  HIWORD(v95[36]) = v63;
  clap_builder::builder::command::Command::arg(src, dest);
  v95[7] = 8uLL;
  v95[9] = 0LL;
  v95[10] = 8uLL;
  v95[12] = 0LL;
  v95[13] = 8uLL;
  v95[15] = 0LL;
  v95[16] = 8uLL;
  v95[18] = 0LL;
  v95[19] = 8uLL;
  v95[21] = 0LL;
  v95[22] = 8uLL;
  v95[24] = 0LL;
  v95[25] = 8uLL;
  *(_QWORD *)&v95[0] = 0LL;
  *(_QWORD *)&v95[1] = 0LL;
  *((_QWORD *)&v95[2] + 1) = 0LL;
  *((_QWORD *)&v95[3] + 1) = 0LL;
  *(_QWORD *)&v95[5] = 5LL;
  *((_QWORD *)&v95[6] + 1) = 0LL;
  *((_QWORD *)&v95[8] + 1) = 8LL;
  *((_QWORD *)&v95[11] + 1) = 8LL;
  *((_QWORD *)&v95[14] + 1) = 8LL;
  *((_QWORD *)&v95[17] + 1) = 8LL;
  *((_QWORD *)&v95[20] + 1) = 4LL;
  *((_QWORD *)&v95[23] + 1) = 8LL;
  *((_QWORD *)&v95[26] + 1) = 8LL;
  *(_QWORD *)&v95[27] = 0LL;
  *((_QWORD *)&v95[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v95[29] = 0x8000000000000000LL;
  *((_QWORD *)&v95[31] + 1) = v96;
  *(_QWORD *)&v95[33] = &anon_e23289579c9441ef21ddb87efb4b8a29_22_llvm_16528050568364581840;
  *((_QWORD *)&v95[33] + 1) = 9LL;
  *(_QWORD *)&v95[34] = &anon_e23289579c9441ef21ddb87efb4b8a29_22_llvm_16528050568364581840;
  *((_QWORD *)&v95[34] + 1) = 9LL;
  *(_QWORD *)&v95[35] = 0LL;
  *(_QWORD *)&v95[36] = 0x1100000000006FLL;
  DWORD2(v95[36]) = 0;
  WORD6(v95[36]) = 3337;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 34LL);
  v68 = *((_QWORD *)&dest[0] + 1);
  v69 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 16LL) = unk_69DDA;
  *(_OWORD *)(v68 + v69) = unk_69DCA;
  *(_WORD *)(v68 + v69 + 32) = 17740;
  *(_QWORD *)&dest[1] = v69 + 34;
  v70 = *(_QWORD *)&dest[0];
  v92 = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v92;
  *((_QWORD *)&v95[27] + 1) = v70;
  v95[28] = dest[0];
  memcpy(dest, v95, 0x168uLL);
  memcpy(&dest[23], &v95[23], 0xDDuLL);
  v71 = HIWORD(v95[36]);
  *((_QWORD *)&dest[22] + 1) = *((_QWORD *)&v95[22] + 1);
  BYTE13(dest[36]) = 13;
  HIWORD(dest[36]) = HIWORD(v95[36]);
  *(_QWORD *)&v92 = aFile;
  *((_QWORD *)&v92 + 1) = 4LL;
  v93 = 0LL;
  v94 = 1LL;
  ((void (__fastcall *)(_OWORD *, __int128 *, __int64, __int64, __int64, __int64))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    v95,
    &v92,
    v72,
    v73,
    v74,
    v75);
  if ( *((_QWORD *)&dest[21] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[22], 16LL * *((_QWORD *)&dest[21] + 1), 8LL);
  *((_QWORD *)&dest[22] + 1) = *(_QWORD *)&v95[1];
  *(_OWORD *)((char *)&dest[21] + 8) = v95[0];
  memcpy(v95, dest, 0x168uLL);
  memcpy(&v95[23], &dest[23], 0xDDuLL);
  *((_QWORD *)&v95[22] + 1) = *((_QWORD *)&dest[22] + 1);
  BYTE13(v95[36]) = 3;
  HIWORD(v95[36]) = v71;
  clap_builder::builder::command::Command::arg(dest, src);
  v95[7] = 8uLL;
  v95[9] = 0LL;
  v95[10] = 8uLL;
  v95[12] = 0LL;
  v95[13] = 8uLL;
  v95[15] = 0LL;
  v95[16] = 8uLL;
  v95[18] = 0LL;
  v95[19] = 8uLL;
  v95[21] = 0LL;
  v95[22] = 8uLL;
  v95[24] = 0LL;
  v95[25] = 8uLL;
  *(_QWORD *)&v95[0] = 0LL;
  *(_QWORD *)&v95[1] = 0LL;
  *((_QWORD *)&v95[2] + 1) = 0LL;
  *((_QWORD *)&v95[3] + 1) = 0LL;
  *(_QWORD *)&v95[5] = 5LL;
  *((_QWORD *)&v95[6] + 1) = 0LL;
  *((_QWORD *)&v95[8] + 1) = 8LL;
  *((_QWORD *)&v95[11] + 1) = 8LL;
  *((_QWORD *)&v95[14] + 1) = 8LL;
  *((_QWORD *)&v95[17] + 1) = 8LL;
  *((_QWORD *)&v95[20] + 1) = 4LL;
  *((_QWORD *)&v95[23] + 1) = 8LL;
  *((_QWORD *)&v95[26] + 1) = 8LL;
  *(_QWORD *)&v95[27] = 0LL;
  *((_QWORD *)&v95[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v95[29] = 0x8000000000000000LL;
  *((_QWORD *)&v95[31] + 1) = v96;
  *(_QWORD *)&v95[33] = anon_e23289579c9441ef21ddb87efb4b8a29_23_llvm_16528050568364581840;
  *((_QWORD *)&v95[33] + 1) = 10LL;
  *(_QWORD *)&v95[34] = anon_e23289579c9441ef21ddb87efb4b8a29_23_llvm_16528050568364581840;
  *((_QWORD *)&v95[34] + 1) = 10LL;
  *(_QWORD *)&v95[35] = 0LL;
  *(_QWORD *)&v95[36] = 0x11000000000072LL;
  DWORD2(v95[36]) = 0;
  WORD6(v95[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 39LL);
  v76 = *((_QWORD *)&src[0] + 1);
  v77 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 16LL) = unk_69DFC;
  *(_OWORD *)(v76 + v77) = unk_69DEC;
  *(_QWORD *)(v76 + v77 + 31) = 0x65636E6572656665LL;
  *(_QWORD *)&src[1] = v77 + 39;
  v78 = *(_QWORD *)&src[0];
  v92 = *(_OWORD *)((char *)src + 8);
  v79 = v99;
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v92;
  *((_QWORD *)&v95[27] + 1) = v78;
  v95[28] = src[0];
  memcpy(src, v95, 0x168uLL);
  memcpy(&src[23], &v95[23], 0xDCuLL);
  *(_WORD *)((char *)&src[36] + 13) = *(_WORD *)((char *)&v95[36] + 13);
  HIBYTE(src[36]) = HIBYTE(v95[36]);
  *((_QWORD *)&src[22] + 1) = *((_QWORD *)&v95[22] + 1);
  BYTE12(src[36]) = 9;
  *(_QWORD *)&v92 = aFile;
  *((_QWORD *)&v92 + 1) = 4LL;
  v93 = 0LL;
  v94 = 1LL;
  ((void (__fastcall *)(_OWORD *, __int128 *, __int64, __int64, __int64, __int64))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    v95,
    &v92,
    v80,
    v81,
    v82,
    v83);
  if ( *((_QWORD *)&src[21] + 1) )
    _rust_dealloc(*(_QWORD *)&src[22], 16LL * *((_QWORD *)&src[21] + 1), 8LL);
  *((_QWORD *)&src[22] + 1) = *(_QWORD *)&v95[1];
  *(_OWORD *)((char *)&src[21] + 8) = v95[0];
  memcpy(v95, src, 0x168uLL);
  memcpy(&v95[23], &src[23], 0xDCuLL);
  *(_WORD *)((char *)&v95[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v95[36]) = HIBYTE(src[36]);
  *((_QWORD *)&v95[22] + 1) = *((_QWORD *)&src[22] + 1);
  BYTE12(v95[36]) = 2;
  clap_builder::builder::command::Command::arg(src, dest);
  v95[7] = 8uLL;
  v95[9] = 0LL;
  v95[10] = 8uLL;
  v95[12] = 0LL;
  v95[13] = 8uLL;
  v95[15] = 0LL;
  v95[16] = 8uLL;
  v95[18] = 0LL;
  v95[19] = 8uLL;
  v95[21] = 0LL;
  v95[22] = 8uLL;
  v95[24] = 0LL;
  v95[25] = 8uLL;
  *(_QWORD *)&v95[0] = 0LL;
  *(_QWORD *)&v95[1] = 0LL;
  *((_QWORD *)&v95[2] + 1) = 0LL;
  *((_QWORD *)&v95[3] + 1) = 0LL;
  *(_QWORD *)&v95[5] = 5LL;
  *((_QWORD *)&v95[6] + 1) = 0LL;
  *((_QWORD *)&v95[8] + 1) = 8LL;
  *((_QWORD *)&v95[11] + 1) = 8LL;
  *((_QWORD *)&v95[14] + 1) = 8LL;
  *((_QWORD *)&v95[17] + 1) = 8LL;
  *((_QWORD *)&v95[20] + 1) = 4LL;
  *((_QWORD *)&v95[23] + 1) = 8LL;
  *((_QWORD *)&v95[26] + 1) = 8LL;
  *(_QWORD *)&v95[27] = 0LL;
  *((_QWORD *)&v95[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v95[29] = 0x8000000000000000LL;
  *((_QWORD *)&v95[31] + 1) = v96;
  *(_QWORD *)&v95[33] = &anon_e23289579c9441ef21ddb87efb4b8a29_24_llvm_16528050568364581840;
  *((_QWORD *)&v95[33] + 1) = 5LL;
  *(_QWORD *)&v95[34] = &anon_e23289579c9441ef21ddb87efb4b8a29_24_llvm_16528050568364581840;
  *((_QWORD *)&v95[34] + 1) = 5LL;
  *(_QWORD *)&v95[35] = 0LL;
  *(_QWORD *)&v95[36] = 0x11000000000077LL;
  DWORD2(v95[36]) = 0;
  WORD6(v95[36]) = 3337;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 43LL);
  v84 = *((_QWORD *)&dest[0] + 1);
  v85 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 27LL) = unk_69E2E;
  qmemcpy((void *)(v84 + v85), "output width in columns, referen", 32);
  *(_QWORD *)&dest[1] = v85 + 43;
  v86 = *(_QWORD *)&dest[0];
  v92 = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v92;
  *((_QWORD *)&v95[27] + 1) = v86;
  v95[28] = dest[0];
  memcpy(dest, v95, 0x168uLL);
  memcpy(&dest[23], &v95[23], 0xE0uLL);
  *((_QWORD *)&dest[22] + 1) = *((_QWORD *)&v95[22] + 1);
  *(_QWORD *)&v92 = aNumber;
  *((_QWORD *)&v92 + 1) = 6LL;
  v93 = 0LL;
  v94 = 1LL;
  ((void (__fastcall *)(_OWORD *, __int128 *, __int64, __int64, __int64, __int64))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    v95,
    &v92,
    v87,
    v88,
    v89,
    v90);
  if ( *((_QWORD *)&dest[21] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[22], 16LL * *((_QWORD *)&dest[21] + 1), 8LL);
  *((_QWORD *)&dest[22] + 1) = *(_QWORD *)&v95[1];
  *(_OWORD *)((char *)&dest[21] + 8) = v95[0];
  memcpy(v95, dest, sizeof(v95));
  clap_builder::builder::command::Command::arg(v79, src);
  return v79;
}
