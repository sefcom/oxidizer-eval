void *__fastcall uu_fmt::uu_app(void *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // r14
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  void *v55; // rbx
  __int128 v57; // [rsp+0h] [rbp-848h] BYREF
  __int64 v58; // [rsp+10h] [rbp-838h]
  __int64 v59; // [rsp+18h] [rbp-830h]
  _OWORD v60[37]; // [rsp+20h] [rbp-828h] BYREF
  _OWORD dest[45]; // [rsp+270h] [rbp-5D8h] BYREF
  _OWORD src[45]; // [rsp+540h] [rbp-308h] BYREF
  void *v63; // [rsp+810h] [rbp-38h]

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(src, qword_F12B0, qword_F12B8);
  *(_QWORD *)&src[38] = a0027;
  *((_QWORD *)&src[38] + 1) = 6LL;
  memcpy(dest, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(src, dest, aReformatParagr, 58LL);
  uucore::format_usage(v60, aWidthOptionFil, 33LL);
  v1 = *(_QWORD *)&v60[0];
  if ( *(_QWORD *)&v60[0] != 0x8000000000000000LL )
    dest[0] = *(_OWORD *)((char *)v60 + 8);
  v63 = a1;
  if ( *(_QWORD *)&src[29] != 0x8000000000000000LL && *(_QWORD *)&src[29] )
    _rust_dealloc(*((_QWORD *)&src[29] + 1), *(_QWORD *)&src[29], 1LL);
  *(_QWORD *)&src[29] = v1;
  *(_OWORD *)((char *)&src[29] + 8) = dest[0];
  memcpy(dest, src, 0x2BCuLL);
  *(_QWORD *)((char *)&dest[43] + 12) = *(_QWORD *)((char *)&src[43] + 12) | 0x8800000088LL;
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
  *(_QWORD *)&src[33] = aCrownMargin;
  *((_QWORD *)&src[33] + 1) = 12LL;
  *(_QWORD *)&src[34] = aCrownMargin;
  *((_QWORD *)&src[34] + 1) = 12LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000000063LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v60[0] = 0LL;
  *((_QWORD *)&v60[0] + 1) = 1LL;
  *(_QWORD *)&v60[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v60, 0LL, 188LL);
  v2 = *(_QWORD *)&v60[1];
  memcpy((void *)(*(_QWORD *)&v60[1] + *((_QWORD *)&v60[0] + 1)), aFirstAndSecond, 0xBCuLL);
  *(_QWORD *)&v60[1] = v2 + 188;
  v3 = *(_QWORD *)&v60[0];
  v57 = *(_OWORD *)((char *)v60 + 8);
  if ( *(_QWORD *)&v60[0] != 0x8000000000000000LL )
    v60[0] = v57;
  *((_QWORD *)&src[27] + 1) = v3;
  src[28] = v60[0];
  memcpy(v60, src, 0x24CuLL);
  *(_WORD *)((char *)&v60[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v60[36]) = HIBYTE(src[36]);
  BYTE12(v60[36]) = 2;
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
  *(_QWORD *)&dest[33] = aTaggedParagrap;
  *((_QWORD *)&dest[33] + 1) = 16LL;
  *(_QWORD *)&dest[34] = aTaggedParagrap;
  *((_QWORD *)&dest[34] + 1) = 16LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000074LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v60[0] = 0LL;
  *((_QWORD *)&v60[0] + 1) = 1LL;
  *(_QWORD *)&v60[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v60, 0LL, 139LL);
  v4 = *(_QWORD *)&v60[1];
  memcpy((void *)(*(_QWORD *)&v60[1] + *((_QWORD *)&v60[0] + 1)), aLikeCExceptTha, 0x8BuLL);
  *(_QWORD *)&v60[1] = v4 + 139;
  v5 = *(_QWORD *)&v60[0];
  v57 = *(_OWORD *)((char *)v60 + 8);
  if ( *(_QWORD *)&v60[0] != 0x8000000000000000LL )
    v60[0] = v57;
  *((_QWORD *)&dest[27] + 1) = v5;
  dest[28] = v60[0];
  memcpy(v60, dest, 0x24CuLL);
  *(_WORD *)((char *)&v60[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(v60[36]) = HIBYTE(dest[36]);
  BYTE12(v60[36]) = 2;
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
  *(_QWORD *)&src[33] = aPreserveHeader;
  *((_QWORD *)&src[33] + 1) = 16LL;
  *(_QWORD *)&src[34] = aPreserveHeader;
  *((_QWORD *)&src[34] + 1) = 16LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x1100000000006DLL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v60[0] = 0LL;
  *((_QWORD *)&v60[0] + 1) = 1LL;
  *(_QWORD *)&v60[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v60, 0LL, 102LL);
  v6 = *((_QWORD *)&v60[0] + 1);
  v7 = *(_QWORD *)&v60[1];
  *(_OWORD *)(*((_QWORD *)&v60[0] + 1) + *(_QWORD *)&v60[1] + 80LL) = xmmword_19898;
  qmemcpy((void *)(v6 + v7), "Attempt to detect and preserve mail headers in the input. Be careful when combin", 80);
  *(_QWORD *)(v6 + v7 + 94) = 0x2E702D2068746977LL;
  *(_QWORD *)&v60[1] = v7 + 102;
  v8 = *(_QWORD *)&v60[0];
  v57 = *(_OWORD *)((char *)v60 + 8);
  if ( *(_QWORD *)&v60[0] != 0x8000000000000000LL )
    v60[0] = v57;
  *((_QWORD *)&src[27] + 1) = v8;
  src[28] = v60[0];
  memcpy(v60, src, 0x24CuLL);
  *(_WORD *)((char *)&v60[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v60[36]) = HIBYTE(src[36]);
  BYTE12(v60[36]) = 2;
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
  *(_QWORD *)&dest[33] = aSplitOnly;
  *((_QWORD *)&dest[33] + 1) = 10LL;
  *(_QWORD *)&dest[34] = aSplitOnly;
  *((_QWORD *)&dest[34] + 1) = 10LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000073LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v60[0] = 0LL;
  *((_QWORD *)&v60[0] + 1) = 1LL;
  *(_QWORD *)&v60[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v60, 0LL, 32LL);
  v9 = *((_QWORD *)&v60[0] + 1);
  v10 = *(_QWORD *)&v60[1];
  *(_OWORD *)(*((_QWORD *)&v60[0] + 1) + *(_QWORD *)&v60[1] + 16LL) = xmmword_15148;
  *(_OWORD *)(v9 + v10) = xmmword_15138;
  *(_QWORD *)&v60[1] = v10 + 32;
  v11 = *(_QWORD *)&v60[0];
  v57 = *(_OWORD *)((char *)v60 + 8);
  if ( *(_QWORD *)&v60[0] != 0x8000000000000000LL )
    v60[0] = v57;
  *((_QWORD *)&dest[27] + 1) = v11;
  dest[28] = v60[0];
  memcpy(v60, dest, 0x24CuLL);
  *(_WORD *)((char *)&v60[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(v60[36]) = HIBYTE(dest[36]);
  BYTE12(v60[36]) = 2;
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
  *(_QWORD *)&src[33] = aUniformSpacing;
  *((_QWORD *)&src[33] + 1) = 15LL;
  *(_QWORD *)&src[34] = aUniformSpacing;
  *((_QWORD *)&src[34] + 1) = 15LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000000075LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v60[0] = 0LL;
  *((_QWORD *)&v60[0] + 1) = 1LL;
  *(_QWORD *)&v60[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v60, 0LL, 212LL);
  v12 = *(_QWORD *)&v60[1];
  memcpy((void *)(*(_QWORD *)&v60[1] + *((_QWORD *)&v60[0] + 1)), aInsertExactlyO, 0xD4uLL);
  *(_QWORD *)&v60[1] = v12 + 212;
  v13 = *(_QWORD *)&v60[0];
  v57 = *(_OWORD *)((char *)v60 + 8);
  if ( *(_QWORD *)&v60[0] != 0x8000000000000000LL )
    v60[0] = v57;
  *((_QWORD *)&src[27] + 1) = v13;
  src[28] = v60[0];
  memcpy(v60, src, 0x24CuLL);
  *(_WORD *)((char *)&v60[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v60[36]) = HIBYTE(src[36]);
  BYTE12(v60[36]) = 2;
  clap_builder::builder::command::Command::arg(src, dest);
  v60[7] = 8uLL;
  v60[9] = 0LL;
  v60[10] = 8uLL;
  v60[12] = 0LL;
  v60[13] = 8uLL;
  v60[15] = 0LL;
  v60[16] = 8uLL;
  v60[18] = 0LL;
  v60[19] = 8uLL;
  v60[21] = 0LL;
  v60[22] = 8uLL;
  v60[24] = 0LL;
  v60[25] = 8uLL;
  *(_QWORD *)&v60[0] = 0LL;
  *(_QWORD *)&v60[1] = 0LL;
  *((_QWORD *)&v60[2] + 1) = 0LL;
  *((_QWORD *)&v60[3] + 1) = 0LL;
  *(_QWORD *)&v60[5] = 5LL;
  *((_QWORD *)&v60[6] + 1) = 0LL;
  *((_QWORD *)&v60[8] + 1) = 8LL;
  *((_QWORD *)&v60[11] + 1) = 8LL;
  *((_QWORD *)&v60[14] + 1) = 8LL;
  *((_QWORD *)&v60[17] + 1) = 8LL;
  *((_QWORD *)&v60[20] + 1) = 4LL;
  *((_QWORD *)&v60[23] + 1) = 8LL;
  *((_QWORD *)&v60[26] + 1) = 8LL;
  *(_QWORD *)&v60[27] = 0LL;
  *((_QWORD *)&v60[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v60[29] = 0x8000000000000000LL;
  *((_QWORD *)&v60[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v60[33] = aPrefix;
  *((_QWORD *)&v60[33] + 1) = 6LL;
  *(_QWORD *)&v60[34] = aPrefix;
  *((_QWORD *)&v60[34] + 1) = 6LL;
  *(_QWORD *)&v60[35] = 0LL;
  *(_QWORD *)&v60[36] = 0x11000000000070LL;
  DWORD2(v60[36]) = 0;
  WORD6(v60[36]) = 3337;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 164LL);
  v14 = *(_QWORD *)&dest[1];
  memcpy((void *)(*(_QWORD *)&dest[1] + *((_QWORD *)&dest[0] + 1)), aReformatOnlyLi, 0xA4uLL);
  *(_QWORD *)&dest[1] = v14 + 164;
  v15 = *(_QWORD *)&dest[0];
  v57 = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v57;
  *((_QWORD *)&v60[27] + 1) = v15;
  v60[28] = dest[0];
  memcpy(dest, v60, 0x168uLL);
  memcpy(&dest[23], &v60[23], 0xE0uLL);
  *((_QWORD *)&dest[22] + 1) = *((_QWORD *)&v60[22] + 1);
  *(_QWORD *)&v57 = aPrefix_0;
  *((_QWORD *)&v57 + 1) = 6LL;
  v58 = 0LL;
  v59 = 1LL;
  ((void (__fastcall *)(_OWORD *, __int128 *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    v60,
    &v57);
  if ( *((_QWORD *)&dest[21] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[22], 16LL * *((_QWORD *)&dest[21] + 1), 8LL);
  *((_QWORD *)&dest[22] + 1) = *(_QWORD *)&v60[1];
  *(_OWORD *)((char *)&dest[21] + 8) = v60[0];
  memcpy(v60, dest, sizeof(v60));
  clap_builder::builder::command::Command::arg(dest, src);
  v60[7] = 8uLL;
  v60[9] = 0LL;
  v60[10] = 8uLL;
  v60[12] = 0LL;
  v60[13] = 8uLL;
  v60[15] = 0LL;
  v60[16] = 8uLL;
  v60[18] = 0LL;
  v60[19] = 8uLL;
  v60[21] = 0LL;
  v60[22] = 8uLL;
  v60[24] = 0LL;
  v60[25] = 8uLL;
  *(_QWORD *)&v60[0] = 0LL;
  *(_QWORD *)&v60[1] = 0LL;
  *((_QWORD *)&v60[2] + 1) = 0LL;
  *((_QWORD *)&v60[3] + 1) = 0LL;
  *(_QWORD *)&v60[5] = 5LL;
  *((_QWORD *)&v60[6] + 1) = 0LL;
  *((_QWORD *)&v60[8] + 1) = 8LL;
  *((_QWORD *)&v60[11] + 1) = 8LL;
  *((_QWORD *)&v60[14] + 1) = 8LL;
  *((_QWORD *)&v60[17] + 1) = 8LL;
  *((_QWORD *)&v60[20] + 1) = 4LL;
  *((_QWORD *)&v60[23] + 1) = 8LL;
  *((_QWORD *)&v60[26] + 1) = 8LL;
  *(_QWORD *)&v60[27] = 0LL;
  *((_QWORD *)&v60[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v60[29] = 0x8000000000000000LL;
  *((_QWORD *)&v60[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v60[33] = aSkipPrefix;
  *((_QWORD *)&v60[33] + 1) = 11LL;
  *(_QWORD *)&v60[34] = aSkipPrefix;
  *((_QWORD *)&v60[34] + 1) = 11LL;
  *(_QWORD *)&v60[35] = 0LL;
  *(_QWORD *)&v60[36] = 0x11000000000050LL;
  DWORD2(v60[36]) = 0;
  WORD6(v60[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 122LL);
  v16 = *((_QWORD *)&src[0] + 1);
  v17 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 106LL) = *(__int128 *)((char *)&xmmword_19A8C + 10);
  qmemcpy(
    (void *)(v16 + v17),
    "Do not reformat lines beginning with PSKIP. Unless -X is specified, leading whitespace will be ignored when matc",
    112);
  *(_QWORD *)&src[1] = v17 + 122;
  v18 = *(_QWORD *)&src[0];
  v57 = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v57;
  *((_QWORD *)&v60[27] + 1) = v18;
  v60[28] = src[0];
  memcpy(src, v60, 0x168uLL);
  memcpy(&src[23], &v60[23], 0xE0uLL);
  *((_QWORD *)&src[22] + 1) = *((_QWORD *)&v60[22] + 1);
  *(_QWORD *)&v57 = aPskip;
  *((_QWORD *)&v57 + 1) = 5LL;
  v58 = 0LL;
  v59 = 1LL;
  ((void (__fastcall *)(_OWORD *, __int128 *, __int64, __int64, __int64, __int64))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    v60,
    &v57,
    v19,
    v20,
    v21,
    v22);
  if ( *((_QWORD *)&src[21] + 1) )
    _rust_dealloc(*(_QWORD *)&src[22], 16LL * *((_QWORD *)&src[21] + 1), 8LL);
  *((_QWORD *)&src[22] + 1) = *(_QWORD *)&v60[1];
  *(_OWORD *)((char *)&src[21] + 8) = v60[0];
  memcpy(v60, src, sizeof(v60));
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
  *(_QWORD *)&dest[33] = aExactPrefix;
  *((_QWORD *)&dest[33] + 1) = 12LL;
  *(_QWORD *)&dest[34] = aExactPrefix;
  *((_QWORD *)&dest[34] + 1) = 12LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000078LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v60[0] = 0LL;
  *((_QWORD *)&v60[0] + 1) = 1LL;
  *(_QWORD *)&v60[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v60, 0LL, 76LL);
  v23 = *((_QWORD *)&v60[0] + 1);
  v24 = *(_QWORD *)&v60[1];
  *(_OWORD *)(*((_QWORD *)&v60[0] + 1) + *(_QWORD *)&v60[1] + 60LL) = *(__int128 *)((char *)&xmmword_19ADB + 12);
  qmemcpy((void *)(v23 + v24), "PREFIX must match at the beginning of the line with no preceding", 64);
  *(_QWORD *)&v60[1] = v24 + 76;
  v25 = *(_QWORD *)&v60[0];
  v57 = *(_OWORD *)((char *)v60 + 8);
  if ( *(_QWORD *)&v60[0] != 0x8000000000000000LL )
    v60[0] = v57;
  *((_QWORD *)&dest[27] + 1) = v25;
  dest[28] = v60[0];
  memcpy(v60, dest, 0x24CuLL);
  *(_WORD *)((char *)&v60[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(v60[36]) = HIBYTE(dest[36]);
  BYTE12(v60[36]) = 2;
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
  *(_QWORD *)&src[33] = aExactSkipPrefi;
  *((_QWORD *)&src[33] + 1) = 17LL;
  *(_QWORD *)&src[34] = aExactSkipPrefi;
  *((_QWORD *)&src[34] + 1) = 17LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000000058LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v60[0] = 0LL;
  *((_QWORD *)&v60[0] + 1) = 1LL;
  *(_QWORD *)&v60[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v60, 0LL, 75LL);
  v26 = *((_QWORD *)&v60[0] + 1);
  v27 = *(_QWORD *)&v60[1];
  *(_OWORD *)(*((_QWORD *)&v60[0] + 1) + *(_QWORD *)&v60[1] + 59LL) = *(__int128 *)((char *)&xmmword_19B38 + 11);
  qmemcpy((void *)(v26 + v27), "PSKIP must match at the beginning of the line with no preceding ", 64);
  *(_QWORD *)&v60[1] = v27 + 75;
  v28 = *(_QWORD *)&v60[0];
  v57 = *(_OWORD *)((char *)v60 + 8);
  if ( *(_QWORD *)&v60[0] != 0x8000000000000000LL )
    v60[0] = v57;
  *((_QWORD *)&src[27] + 1) = v28;
  src[28] = v60[0];
  memcpy(v60, src, 0x24CuLL);
  *(_WORD *)((char *)&v60[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v60[36]) = HIBYTE(src[36]);
  BYTE12(v60[36]) = 2;
  clap_builder::builder::command::Command::arg(src, dest);
  v60[7] = 8uLL;
  v60[9] = 0LL;
  v60[10] = 8uLL;
  v60[12] = 0LL;
  v60[13] = 8uLL;
  v60[15] = 0LL;
  v60[16] = 8uLL;
  v60[18] = 0LL;
  v60[19] = 8uLL;
  v60[21] = 0LL;
  v60[22] = 8uLL;
  v60[24] = 0LL;
  v60[25] = 8uLL;
  *(_QWORD *)&v60[0] = 0LL;
  *(_QWORD *)&v60[1] = 0LL;
  *((_QWORD *)&v60[2] + 1) = 0LL;
  *((_QWORD *)&v60[3] + 1) = 0LL;
  *(_QWORD *)&v60[5] = 5LL;
  *((_QWORD *)&v60[6] + 1) = 0LL;
  *((_QWORD *)&v60[8] + 1) = 8LL;
  *((_QWORD *)&v60[11] + 1) = 8LL;
  *((_QWORD *)&v60[14] + 1) = 8LL;
  *((_QWORD *)&v60[17] + 1) = 8LL;
  *((_QWORD *)&v60[20] + 1) = 4LL;
  *((_QWORD *)&v60[23] + 1) = 8LL;
  *((_QWORD *)&v60[26] + 1) = 8LL;
  *(_QWORD *)&v60[27] = 0LL;
  *((_QWORD *)&v60[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v60[29] = 0x8000000000000000LL;
  *((_QWORD *)&v60[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v60[33] = aWidth;
  *((_QWORD *)&v60[33] + 1) = 5LL;
  *(_QWORD *)&v60[34] = aWidth;
  *((_QWORD *)&v60[34] + 1) = 5LL;
  *(_QWORD *)&v60[35] = 0LL;
  *(_QWORD *)&v60[36] = 0x11000000000077LL;
  DWORD2(v60[36]) = 0;
  WORD6(v60[36]) = 3337;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 129LL);
  v29 = *(_QWORD *)&dest[1];
  memcpy((void *)(*(_QWORD *)&dest[1] + *((_QWORD *)&dest[0] + 1)), aFillOutputLine, 0x81uLL);
  *(_QWORD *)&dest[1] = v29 + 129;
  v30 = *(_QWORD *)&dest[0];
  v57 = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v57;
  *((_QWORD *)&v60[27] + 1) = v30;
  v60[28] = dest[0];
  memcpy(dest, v60, 0x168uLL);
  memcpy(&dest[23], &v60[23], 0xE0uLL);
  *((_QWORD *)&dest[22] + 1) = *((_QWORD *)&v60[22] + 1);
  *(_QWORD *)&v57 = aWidth_0;
  *((_QWORD *)&v57 + 1) = 5LL;
  v58 = 0LL;
  v59 = 1LL;
  ((void (__fastcall *)(_OWORD *, __int128 *, __int64, __int64, __int64, __int64))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    v60,
    &v57,
    v31,
    v32,
    v33,
    v34);
  if ( *((_QWORD *)&dest[21] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[22], 16LL * *((_QWORD *)&dest[21] + 1), 8LL);
  *((_QWORD *)&dest[22] + 1) = *(_QWORD *)&v60[1];
  *(_OWORD *)((char *)&dest[21] + 8) = v60[0];
  memcpy(v60, dest, sizeof(v60));
  clap_builder::builder::command::Command::arg(dest, src);
  v60[7] = 8uLL;
  v60[9] = 0LL;
  v60[10] = 8uLL;
  v60[12] = 0LL;
  v60[13] = 8uLL;
  v60[15] = 0LL;
  v60[16] = 8uLL;
  v60[18] = 0LL;
  v60[19] = 8uLL;
  v60[21] = 0LL;
  v60[22] = 8uLL;
  v60[24] = 0LL;
  v60[25] = 8uLL;
  *(_QWORD *)&v60[0] = 0LL;
  *(_QWORD *)&v60[1] = 0LL;
  *((_QWORD *)&v60[2] + 1) = 0LL;
  *((_QWORD *)&v60[3] + 1) = 0LL;
  *(_QWORD *)&v60[5] = 5LL;
  *((_QWORD *)&v60[6] + 1) = 0LL;
  *((_QWORD *)&v60[8] + 1) = 8LL;
  *((_QWORD *)&v60[11] + 1) = 8LL;
  *((_QWORD *)&v60[14] + 1) = 8LL;
  *((_QWORD *)&v60[17] + 1) = 8LL;
  *((_QWORD *)&v60[20] + 1) = 4LL;
  *((_QWORD *)&v60[23] + 1) = 8LL;
  *((_QWORD *)&v60[26] + 1) = 8LL;
  *(_QWORD *)&v60[27] = 0LL;
  *((_QWORD *)&v60[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v60[29] = 0x8000000000000000LL;
  *((_QWORD *)&v60[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v60[33] = aGoal;
  *((_QWORD *)&v60[33] + 1) = 4LL;
  *(_QWORD *)&v60[34] = aGoal;
  *((_QWORD *)&v60[34] + 1) = 4LL;
  *(_QWORD *)&v60[35] = 0LL;
  *(_QWORD *)&v60[36] = 0x11000000000067LL;
  DWORD2(v60[36]) = 0;
  WORD6(v60[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 73LL);
  v35 = *((_QWORD *)&src[0] + 1);
  v36 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 57LL) = *(__int128 *)((char *)&xmmword_19C09 + 9);
  qmemcpy((void *)(v35 + v36), "Goal width, default of 93% of WIDTH. Must be less than or equal ", 64);
  *(_QWORD *)&src[1] = v36 + 73;
  v37 = *(_QWORD *)&src[0];
  v57 = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v57;
  *((_QWORD *)&v60[27] + 1) = v37;
  v60[28] = src[0];
  memcpy(src, v60, 0x168uLL);
  memcpy(&src[23], &v60[23], 0xE0uLL);
  *((_QWORD *)&src[22] + 1) = *((_QWORD *)&v60[22] + 1);
  *(_QWORD *)&v57 = aGoal_0;
  *((_QWORD *)&v57 + 1) = 4LL;
  v58 = 0LL;
  v59 = 1LL;
  ((void (__fastcall *)(_OWORD *, __int128 *, __int64, __int64, __int64, __int64))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    v60,
    &v57,
    v38,
    v39,
    v40,
    v41);
  if ( *((_QWORD *)&src[21] + 1) )
    _rust_dealloc(*(_QWORD *)&src[22], 16LL * *((_QWORD *)&src[21] + 1), 8LL);
  *((_QWORD *)&src[22] + 1) = *(_QWORD *)&v60[1];
  *(_OWORD *)((char *)&src[21] + 8) = v60[0];
  memcpy(v60, src, sizeof(v60));
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
  *(_QWORD *)&dest[33] = aQuick;
  *((_QWORD *)&dest[33] + 1) = 5LL;
  *(_QWORD *)&dest[34] = aQuick;
  *((_QWORD *)&dest[34] + 1) = 5LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000000071LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v60[0] = 0LL;
  *((_QWORD *)&v60[0] + 1) = 1LL;
  *(_QWORD *)&v60[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v60, 0LL, 80LL);
  v42 = *((_QWORD *)&v60[0] + 1);
  v43 = *(_QWORD *)&v60[1];
  *(_OWORD *)(*((_QWORD *)&v60[0] + 1) + *(_QWORD *)&v60[1] + 64LL) = xmmword_19C62;
  qmemcpy((void *)(v42 + v43), "Break lines more quickly at the expense of a potentially more ra", 64);
  *(_QWORD *)&v60[1] = v43 + 80;
  v44 = *(_QWORD *)&v60[0];
  v57 = *(_OWORD *)((char *)v60 + 8);
  if ( *(_QWORD *)&v60[0] != 0x8000000000000000LL )
    v60[0] = v57;
  *((_QWORD *)&dest[27] + 1) = v44;
  dest[28] = v60[0];
  memcpy(v60, dest, 0x24CuLL);
  *(_WORD *)((char *)&v60[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(v60[36]) = HIBYTE(dest[36]);
  BYTE12(v60[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, src);
  v60[7] = 8uLL;
  v60[9] = 0LL;
  v60[10] = 8uLL;
  v60[12] = 0LL;
  v60[13] = 8uLL;
  v60[15] = 0LL;
  v60[16] = 8uLL;
  v60[18] = 0LL;
  v60[19] = 8uLL;
  v60[21] = 0LL;
  v60[22] = 8uLL;
  v60[24] = 0LL;
  v60[25] = 8uLL;
  *(_QWORD *)&v60[0] = 0LL;
  *(_QWORD *)&v60[1] = 0LL;
  *((_QWORD *)&v60[2] + 1) = 0LL;
  *((_QWORD *)&v60[3] + 1) = 0LL;
  *(_QWORD *)&v60[5] = 5LL;
  *((_QWORD *)&v60[6] + 1) = 0LL;
  *((_QWORD *)&v60[8] + 1) = 8LL;
  *((_QWORD *)&v60[11] + 1) = 8LL;
  *((_QWORD *)&v60[14] + 1) = 8LL;
  *((_QWORD *)&v60[17] + 1) = 8LL;
  *((_QWORD *)&v60[20] + 1) = 4LL;
  *((_QWORD *)&v60[23] + 1) = 8LL;
  *((_QWORD *)&v60[26] + 1) = 8LL;
  *(_QWORD *)&v60[27] = 0LL;
  *((_QWORD *)&v60[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v60[29] = 0x8000000000000000LL;
  *((_QWORD *)&v60[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v60[33] = aTabWidth;
  *((_QWORD *)&v60[33] + 1) = 9LL;
  *(_QWORD *)&v60[34] = aTabWidth;
  *((_QWORD *)&v60[34] + 1) = 9LL;
  *(_QWORD *)&v60[35] = 0LL;
  *(_QWORD *)&v60[36] = 0x11000000000054LL;
  DWORD2(v60[36]) = 0;
  WORD6(v60[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 161LL);
  v45 = *(_QWORD *)&src[1];
  memcpy((void *)(*(_QWORD *)&src[1] + *((_QWORD *)&src[0] + 1)), aTreatTabsAsTab, 0xA1uLL);
  *(_QWORD *)&src[1] = v45 + 161;
  v46 = *(_QWORD *)&src[0];
  v57 = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v57;
  *((_QWORD *)&v60[27] + 1) = v46;
  v60[28] = src[0];
  memcpy(src, v60, 0x168uLL);
  memcpy(&src[23], &v60[23], 0xE0uLL);
  *((_QWORD *)&src[22] + 1) = *((_QWORD *)&v60[22] + 1);
  *(_QWORD *)&v57 = aTabwidth;
  *((_QWORD *)&v57 + 1) = 8LL;
  v58 = 0LL;
  v59 = 1LL;
  ((void (__fastcall *)(_OWORD *, __int128 *, __int64, __int64, __int64, __int64))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    v60,
    &v57,
    v47,
    v48,
    v49,
    v50);
  if ( *((_QWORD *)&src[21] + 1) )
    _rust_dealloc(*(_QWORD *)&src[22], 16LL * *((_QWORD *)&src[21] + 1), 8LL);
  *((_QWORD *)&src[22] + 1) = *(_QWORD *)&v60[1];
  *(_OWORD *)((char *)&src[21] + 8) = v60[0];
  memcpy(v60, src, sizeof(v60));
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
  dest[22] = 8uLL;
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
  dest[36] = xmmword_10E60;
  *(_QWORD *)&v57 = aFiles_0;
  *((_QWORD *)&v57 + 1) = 5LL;
  v58 = 0LL;
  v59 = 1LL;
  ((void (__fastcall *)(_OWORD *, __int128 *, __int64, __int64, __int64, __int64))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    v60,
    &v57,
    v51,
    v52,
    v53,
    v54);
  if ( *((_QWORD *)&dest[21] + 1) )
    _rust_dealloc(8LL, 16LL * *((_QWORD *)&dest[21] + 1), 8LL);
  *((_QWORD *)&dest[22] + 1) = *(_QWORD *)&v60[1];
  *(_OWORD *)((char *)&dest[21] + 8) = v60[0];
  *(_OWORD *)((char *)&v60[1] + 8) = *(_OWORD *)((char *)&dest[1] + 8);
  v60[4] = dest[4];
  *(_OWORD *)((char *)&v60[5] + 8) = *(_OWORD *)((char *)&dest[5] + 8);
  *(_OWORD *)((char *)&v60[7] + 8) = *(_OWORD *)((char *)&dest[7] + 8);
  v60[9] = dest[9];
  *(_OWORD *)((char *)&v60[10] + 8) = *(_OWORD *)((char *)&dest[10] + 8);
  v60[12] = dest[12];
  *(_OWORD *)((char *)&v60[13] + 8) = *(_OWORD *)((char *)&dest[13] + 8);
  v60[15] = dest[15];
  *(_OWORD *)((char *)&v60[16] + 8) = *(_OWORD *)((char *)&dest[16] + 8);
  v60[18] = dest[18];
  *(_OWORD *)((char *)&v60[19] + 8) = *(_OWORD *)((char *)&dest[19] + 8);
  v60[21] = dest[21];
  v60[24] = dest[24];
  *(_OWORD *)((char *)&v60[25] + 8) = *(_OWORD *)((char *)&dest[25] + 8);
  v60[28] = dest[28];
  *(_OWORD *)((char *)&v60[29] + 8) = *(_OWORD *)((char *)&dest[29] + 8);
  *(_OWORD *)((char *)&v60[30] + 8) = *(_OWORD *)((char *)&dest[30] + 8);
  v60[32] = dest[32];
  v60[0] = dest[0];
  *(_QWORD *)&v60[1] = *(_QWORD *)&dest[1];
  *(_OWORD *)((char *)&v60[2] + 8) = *(_OWORD *)((char *)&dest[2] + 8);
  *((_QWORD *)&v60[3] + 1) = *((_QWORD *)&dest[3] + 1);
  *(_QWORD *)&v60[5] = *(_QWORD *)&dest[5];
  *((_QWORD *)&v60[6] + 1) = 0LL;
  *(_QWORD *)&v60[7] = 8LL;
  *((_QWORD *)&v60[8] + 1) = 8LL;
  *(_QWORD *)&v60[10] = 8LL;
  *((_QWORD *)&v60[11] + 1) = 8LL;
  *(_QWORD *)&v60[13] = 8LL;
  *((_QWORD *)&v60[14] + 1) = 8LL;
  *(_QWORD *)&v60[16] = 8LL;
  *((_QWORD *)&v60[17] + 1) = 8LL;
  *(_QWORD *)&v60[19] = 8LL;
  *((_QWORD *)&v60[20] + 1) = 4LL;
  v60[22] = dest[22];
  *(_QWORD *)&v60[23] = 0LL;
  *((_QWORD *)&v60[23] + 1) = 8LL;
  *(_QWORD *)&v60[25] = 8LL;
  *((_QWORD *)&v60[26] + 1) = 8LL;
  *(_QWORD *)&v60[27] = 0LL;
  *((_QWORD *)&v60[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v60[29] = 0x8000000000000000LL;
  *((_QWORD *)&v60[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v60[33] = aFiles;
  *((_QWORD *)&v60[33] + 1) = 5LL;
  *(_QWORD *)&v60[34] = 0LL;
  *((_QWORD *)&v60[34] + 1) = *((_QWORD *)&dest[34] + 1);
  *(_QWORD *)&v60[35] = 0LL;
  *((_QWORD *)&v60[35] + 1) = *((_QWORD *)&dest[35] + 1);
  v60[36] = xmmword_10C70;
  v55 = v63;
  clap_builder::builder::command::Command::arg(v63, src);
  return v55;
}
