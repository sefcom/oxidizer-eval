void *__fastcall uu_cut::uu_app(void *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // ebx
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  unsigned __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
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
  unsigned int v34; // ebx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // ebx
  unsigned __int64 v40; // r13
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  void *v57; // rbx
  __int128 v59; // [rsp+0h] [rbp-868h] BYREF
  __int64 v60; // [rsp+10h] [rbp-858h]
  __int64 v61; // [rsp+18h] [rbp-850h]
  _OWORD v62[37]; // [rsp+20h] [rbp-848h] BYREF
  unsigned __int64 v63; // [rsp+278h] [rbp-5F0h]
  _OWORD src[45]; // [rsp+280h] [rbp-5E8h] BYREF
  _BYTE dest[712]; // [rsp+550h] [rbp-318h] BYREF
  void *v66; // [rsp+818h] [rbp-50h]
  __int64 v67; // [rsp+820h] [rbp-48h]

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(src, xmmword_F5EE8, *((_QWORD *)&xmmword_F5EE8 + 1));
  *(_QWORD *)&src[38] = a0027;
  *((_QWORD *)&src[38] + 1) = 6LL;
  memcpy(dest, src, sizeof(dest));
  uucore::format_usage(v62, aOptionFile, 22LL);
  v1 = *(_QWORD *)&v62[0];
  if ( *(_QWORD *)&v62[0] != 0x8000000000000000LL )
    src[0] = *(_OWORD *)((char *)v62 + 8);
  v66 = a1;
  if ( *(_QWORD *)&dest[464] != 0x8000000000000000LL && *(_QWORD *)&dest[464] )
    _rust_dealloc(*(_QWORD *)&dest[472], *(_QWORD *)&dest[464], 1LL);
  *(_QWORD *)&dest[464] = v1;
  *(_OWORD *)&dest[472] = src[0];
  memcpy(src, dest, 0x2C8uLL);
  clap_builder::builder::command::Command::about(dest, src, aPrintsSpecifie, 81LL);
  clap_builder::builder::command::Command::after_help(src, dest, aEachCallMustSp, 3083LL);
  memcpy(dest, src, 0x2BCuLL);
  *(_QWORD *)&dest[700] = *(_QWORD *)((char *)&src[43] + 12) | 0x8800000088LL;
  *(_DWORD *)&dest[708] = DWORD1(src[44]);
  v62[7] = 8uLL;
  v62[9] = 0LL;
  v62[10] = 8uLL;
  v62[12] = 0LL;
  v62[13] = 8uLL;
  v62[15] = 0LL;
  v62[16] = 8uLL;
  v62[18] = 0LL;
  v62[19] = 8uLL;
  v62[21] = 0LL;
  v62[22] = 8uLL;
  v62[24] = 0LL;
  v62[25] = 8uLL;
  *(_QWORD *)&v62[0] = 0LL;
  *(_QWORD *)&v62[1] = 0LL;
  *((_QWORD *)&v62[2] + 1) = 0LL;
  *((_QWORD *)&v62[3] + 1) = 0LL;
  *(_QWORD *)&v62[5] = 5LL;
  *((_QWORD *)&v62[6] + 1) = 0LL;
  *((_QWORD *)&v62[8] + 1) = 8LL;
  *((_QWORD *)&v62[11] + 1) = 8LL;
  *((_QWORD *)&v62[14] + 1) = 8LL;
  *((_QWORD *)&v62[17] + 1) = 8LL;
  *((_QWORD *)&v62[20] + 1) = 4LL;
  *((_QWORD *)&v62[23] + 1) = 8LL;
  *((_QWORD *)&v62[26] + 1) = 8LL;
  *(_QWORD *)&v62[27] = 0LL;
  *((_QWORD *)&v62[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v62[29] = 0x8000000000000000LL;
  *((_QWORD *)&v62[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v62[33] = aBytes_1;
  *((_QWORD *)&v62[33] + 1) = 5LL;
  *(_QWORD *)&v62[34] = aBytes_1;
  *((_QWORD *)&v62[34] + 1) = 5LL;
  *(_QWORD *)&v62[35] = 0LL;
  *(_QWORD *)&v62[36] = 0x11000000000062LL;
  DWORD2(v62[36]) = 0;
  WORD6(v62[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 41LL);
  v2 = *((_QWORD *)&src[0] + 1);
  v3 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 25LL) = unk_1AA71;
  qmemcpy((void *)(v2 + v3), "filter byte columns from the inp", 32);
  *(_QWORD *)&src[1] = v3 + 41;
  v4 = *(_QWORD *)&src[0];
  v59 = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v59;
  *((_QWORD *)&v62[27] + 1) = v4;
  v62[28] = src[0];
  memcpy(src, v62, 0x168uLL);
  memcpy(&src[23], &v62[23], 0xD8uLL);
  v5 = HIDWORD(v62[36]);
  *((_QWORD *)&src[22] + 1) = *((_QWORD *)&v62[22] + 1);
  DWORD2(src[36]) = 32;
  HIDWORD(src[36]) = HIDWORD(v62[36]);
  *(_QWORD *)&v59 = aList;
  *((_QWORD *)&v59 + 1) = 4LL;
  v60 = 0LL;
  v61 = 1LL;
  ((void (__fastcall *)(_OWORD *, __int128 *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    v62,
    &v59);
  v63 = 0x8000000000000001LL;
  v6 = v5 >> 8;
  if ( *((_QWORD *)&src[21] + 1) )
    _rust_dealloc(*(_QWORD *)&src[22], 16LL * *((_QWORD *)&src[21] + 1), 8LL);
  *((_QWORD *)&src[22] + 1) = *(_QWORD *)&v62[1];
  *(_OWORD *)((char *)&src[21] + 8) = v62[0];
  memcpy(v62, src, 0x168uLL);
  memcpy(&v62[23], &src[23], 0xD8uLL);
  *((_QWORD *)&v62[22] + 1) = *((_QWORD *)&src[22] + 1);
  DWORD2(v62[36]) = 32;
  BYTE12(v62[36]) = 1;
  HIBYTE(v62[36]) = BYTE2(v6);
  *(_WORD *)((char *)&v62[36] + 13) = v6;
  clap_builder::builder::command::Command::arg(src, dest);
  v62[7] = 8uLL;
  v62[9] = 0LL;
  v62[10] = 8uLL;
  v62[12] = 0LL;
  v62[13] = 8uLL;
  v62[15] = 0LL;
  v62[16] = 8uLL;
  v62[18] = 0LL;
  v62[19] = 8uLL;
  v62[21] = 0LL;
  v62[22] = 8uLL;
  v62[24] = 0LL;
  v62[25] = 8uLL;
  *(_QWORD *)&v62[0] = 0LL;
  *(_QWORD *)&v62[1] = 0LL;
  *((_QWORD *)&v62[2] + 1) = 0LL;
  *((_QWORD *)&v62[3] + 1) = 0LL;
  *(_QWORD *)&v62[5] = 5LL;
  *((_QWORD *)&v62[6] + 1) = 0LL;
  *((_QWORD *)&v62[8] + 1) = 8LL;
  *((_QWORD *)&v62[11] + 1) = 8LL;
  *((_QWORD *)&v62[14] + 1) = 8LL;
  *((_QWORD *)&v62[17] + 1) = 8LL;
  *((_QWORD *)&v62[20] + 1) = 4LL;
  *((_QWORD *)&v62[23] + 1) = 8LL;
  *((_QWORD *)&v62[26] + 1) = 8LL;
  *(_QWORD *)&v62[27] = 0LL;
  *((_QWORD *)&v62[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v62[29] = 0x8000000000000000LL;
  *((_QWORD *)&v62[31] + 1) = v63;
  *(_QWORD *)&v62[33] = aCharacters_0;
  *((_QWORD *)&v62[33] + 1) = 10LL;
  *(_QWORD *)&v62[34] = aCharacters_0;
  *((_QWORD *)&v62[34] + 1) = 10LL;
  *(_QWORD *)&v62[35] = 0LL;
  *(_QWORD *)&v62[36] = 0x11000000000063LL;
  DWORD2(v62[36]) = 0;
  WORD6(v62[36]) = 3337;
  *(_QWORD *)dest = 0LL;
  *(_QWORD *)&dest[8] = 1LL;
  *(_QWORD *)&dest[16] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 24LL);
  v7 = *(_QWORD *)&dest[8];
  v8 = *(_QWORD *)&dest[16];
  *(_OWORD *)(*(_QWORD *)&dest[8] + *(_QWORD *)&dest[16]) = unk_1AA8B;
  *(_QWORD *)(v7 + v8 + 16) = 0x65646F6D20726574LL;
  *(_QWORD *)&dest[16] = v8 + 24;
  v9 = *(_QWORD *)dest;
  v59 = *(_OWORD *)&dest[8];
  if ( *(_QWORD *)dest != 0x8000000000000000LL )
    *(_OWORD *)dest = v59;
  *((_QWORD *)&v62[27] + 1) = v9;
  v62[28] = *(_OWORD *)dest;
  memcpy(dest, v62, 0x168uLL);
  memcpy(&dest[368], &v62[23], 0xD8uLL);
  v10 = HIDWORD(v62[36]);
  *(_QWORD *)&dest[360] = *((_QWORD *)&v62[22] + 1);
  *(_DWORD *)&dest[584] = 32;
  *(_DWORD *)&dest[588] = HIDWORD(v62[36]);
  *(_QWORD *)&v59 = aList;
  *((_QWORD *)&v59 + 1) = 4LL;
  v60 = 0LL;
  v61 = 1LL;
  ((void (__fastcall *)(_OWORD *, __int128 *, __int64, __int64, __int64, __int64))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    v62,
    &v59,
    v11,
    v12,
    v13,
    v14);
  v15 = v10 >> 8;
  if ( *(_QWORD *)&dest[344] )
    _rust_dealloc(*(_QWORD *)&dest[352], 16LL * *(_QWORD *)&dest[344], 8LL);
  *(_QWORD *)&dest[360] = *(_QWORD *)&v62[1];
  *(_OWORD *)&dest[344] = v62[0];
  memcpy(v62, dest, 0x168uLL);
  memcpy(&v62[23], &dest[368], 0xD8uLL);
  *((_QWORD *)&v62[22] + 1) = *(_QWORD *)&dest[360];
  DWORD2(v62[36]) = 32;
  BYTE12(v62[36]) = 1;
  HIBYTE(v62[36]) = BYTE2(v15);
  *(_WORD *)((char *)&v62[36] + 13) = v15;
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
  v16 = v63;
  *((_QWORD *)&src[31] + 1) = v63;
  *(_QWORD *)&src[33] = aDelimiter_0;
  *((_QWORD *)&src[33] + 1) = 9LL;
  *(_QWORD *)&src[34] = aDelimiter_0;
  *((_QWORD *)&src[34] + 1) = 9LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000000064LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  v67 = 2LL;
  clap_builder::builder::arg::Arg::value_parser(v62, src);
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 91LL);
  v17 = *((_QWORD *)&src[0] + 1);
  v18 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 75LL) = unk_1AAEE;
  qmemcpy((void *)(v17 + v18), "specify the delimiter character that separates fields in the input source. Defau", 80);
  *(_QWORD *)&src[1] = v18 + 91;
  v19 = *(_QWORD *)&src[0];
  v59 = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v59;
  if ( *((_QWORD *)&v62[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&v62[27] + 1) )
    _rust_dealloc(*(_QWORD *)&v62[28], *((_QWORD *)&v62[27] + 1), 1LL);
  *((_QWORD *)&v62[27] + 1) = v19;
  v62[28] = src[0];
  memcpy(src, v62, 0x168uLL);
  memcpy(&src[23], &v62[23], 0xE0uLL);
  *((_QWORD *)&src[22] + 1) = *((_QWORD *)&v62[22] + 1);
  *(_QWORD *)&v59 = aDelim;
  *((_QWORD *)&v59 + 1) = 5LL;
  v60 = 0LL;
  v61 = 1LL;
  ((void (__fastcall *)(_OWORD *, __int128 *, __int64, __int64, __int64, __int64))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    v62,
    &v59,
    v20,
    v21,
    v22,
    v23);
  if ( *((_QWORD *)&src[21] + 1) )
    _rust_dealloc(*(_QWORD *)&src[22], 16LL * *((_QWORD *)&src[21] + 1), 8LL);
  *((_QWORD *)&src[22] + 1) = *(_QWORD *)&v62[1];
  *(_OWORD *)((char *)&src[21] + 8) = v62[0];
  memcpy(v62, src, sizeof(v62));
  clap_builder::builder::command::Command::arg(src, dest);
  v62[7] = 8uLL;
  v62[9] = 0LL;
  v62[10] = 8uLL;
  v62[12] = 0LL;
  v62[13] = 8uLL;
  v62[15] = 0LL;
  v62[16] = 8uLL;
  v62[18] = 0LL;
  v62[19] = 8uLL;
  v62[21] = 0LL;
  v62[22] = 8uLL;
  v62[24] = 0LL;
  v62[25] = 8uLL;
  *(_QWORD *)&v62[0] = 0LL;
  *(_QWORD *)&v62[1] = 0LL;
  *((_QWORD *)&v62[2] + 1) = 0LL;
  *((_QWORD *)&v62[3] + 1) = 0LL;
  *(_QWORD *)&v62[5] = 5LL;
  *((_QWORD *)&v62[6] + 1) = 0LL;
  *((_QWORD *)&v62[8] + 1) = 8LL;
  *((_QWORD *)&v62[11] + 1) = 8LL;
  *((_QWORD *)&v62[14] + 1) = 8LL;
  *((_QWORD *)&v62[17] + 1) = 8LL;
  *((_QWORD *)&v62[20] + 1) = 4LL;
  *((_QWORD *)&v62[23] + 1) = 8LL;
  *((_QWORD *)&v62[26] + 1) = 8LL;
  *(_QWORD *)&v62[27] = 0LL;
  *((_QWORD *)&v62[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v62[29] = 0x8000000000000000LL;
  *((_QWORD *)&v62[31] + 1) = v16;
  *(_QWORD *)&v62[33] = aWhitespaceDeli_0;
  *((_QWORD *)&v62[33] + 1) = 20LL;
  *(_QWORD *)&v62[34] = 0LL;
  *(_QWORD *)&v62[35] = 0LL;
  *(_QWORD *)&v62[36] = 0x11000000000077LL;
  DWORD2(v62[36]) = 0;
  WORD6(v62[36]) = 3337;
  *(_QWORD *)dest = 0LL;
  *(_QWORD *)&dest[8] = 1LL;
  *(_QWORD *)&dest[16] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 101LL);
  v24 = *(_QWORD *)&dest[8];
  v25 = *(_QWORD *)&dest[16];
  *(_OWORD *)(*(_QWORD *)&dest[8] + *(_QWORD *)&dest[16] + 80LL) = unk_1AB53;
  qmemcpy((void *)(v24 + v25), "Use any number of whitespace (Space, Tab) to separate fields in the input source", 80);
  *(_QWORD *)(v24 + v25 + 93) = 0x2E296E6F69736E65LL;
  *(_QWORD *)&dest[16] = v25 + 101;
  v26 = *(_QWORD *)dest;
  v59 = *(_OWORD *)&dest[8];
  if ( *(_QWORD *)dest != 0x8000000000000000LL )
    *(_OWORD *)dest = v59;
  *((_QWORD *)&v62[27] + 1) = v26;
  v62[28] = *(_OWORD *)dest;
  memcpy(dest, v62, 0x168uLL);
  memcpy(&dest[368], &v62[23], 0xDCuLL);
  *(_WORD *)&dest[589] = *(_WORD *)((char *)&v62[36] + 13);
  dest[591] = HIBYTE(v62[36]);
  *(_QWORD *)&dest[360] = *((_QWORD *)&v62[22] + 1);
  dest[588] = 9;
  *(_QWORD *)&v59 = aWhitespace;
  *((_QWORD *)&v59 + 1) = 10LL;
  v60 = 0LL;
  v61 = 1LL;
  ((void (__fastcall *)(_OWORD *, __int128 *, __int64, __int64, __int64, __int64))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    v62,
    &v59,
    v27,
    v28,
    v29,
    v30);
  if ( *(_QWORD *)&dest[344] )
    _rust_dealloc(*(_QWORD *)&dest[352], 16LL * *(_QWORD *)&dest[344], 8LL);
  *(_QWORD *)&dest[360] = *(_QWORD *)&v62[1];
  *(_OWORD *)&dest[344] = v62[0];
  memcpy(v62, dest, 0x168uLL);
  memcpy(&v62[23], &dest[368], 0xDCuLL);
  *(_WORD *)((char *)&v62[36] + 13) = *(_WORD *)&dest[589];
  HIBYTE(v62[36]) = dest[591];
  *((_QWORD *)&v62[22] + 1) = *(_QWORD *)&dest[360];
  BYTE12(v62[36]) = 2;
  clap_builder::builder::command::Command::arg(dest, src);
  v62[7] = 8uLL;
  v62[9] = 0LL;
  v62[10] = 8uLL;
  v62[12] = 0LL;
  v62[13] = 8uLL;
  v62[15] = 0LL;
  v62[16] = 8uLL;
  v62[18] = 0LL;
  v62[19] = 8uLL;
  v62[21] = 0LL;
  v62[22] = 8uLL;
  v62[24] = 0LL;
  v62[25] = 8uLL;
  *(_QWORD *)&v62[0] = 0LL;
  *(_QWORD *)&v62[1] = 0LL;
  *((_QWORD *)&v62[2] + 1) = 0LL;
  *((_QWORD *)&v62[3] + 1) = 0LL;
  *(_QWORD *)&v62[5] = 5LL;
  *((_QWORD *)&v62[6] + 1) = 0LL;
  *((_QWORD *)&v62[8] + 1) = 8LL;
  *((_QWORD *)&v62[11] + 1) = 8LL;
  *((_QWORD *)&v62[14] + 1) = 8LL;
  *((_QWORD *)&v62[17] + 1) = 8LL;
  *((_QWORD *)&v62[20] + 1) = 4LL;
  *((_QWORD *)&v62[23] + 1) = 8LL;
  *((_QWORD *)&v62[26] + 1) = 8LL;
  *(_QWORD *)&v62[27] = 0LL;
  *((_QWORD *)&v62[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v62[29] = 0x8000000000000000LL;
  *((_QWORD *)&v62[31] + 1) = v16;
  *(_QWORD *)&v62[33] = aFields_0;
  *((_QWORD *)&v62[33] + 1) = 6LL;
  *(_QWORD *)&v62[34] = aFields_0;
  *((_QWORD *)&v62[34] + 1) = 6LL;
  *(_QWORD *)&v62[35] = 0LL;
  *(_QWORD *)&v62[36] = 0x11000000000066LL;
  DWORD2(v62[36]) = 0;
  WORD6(v62[36]) = 3337;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 42LL);
  v31 = *((_QWORD *)&src[0] + 1);
  v32 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 26LL) = unk_1AB92;
  qmemcpy((void *)(v31 + v32), "filter field columns from the in", 32);
  *(_QWORD *)&src[1] = v32 + 42;
  v33 = *(_QWORD *)&src[0];
  v59 = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v59;
  *((_QWORD *)&v62[27] + 1) = v33;
  v62[28] = src[0];
  memcpy(src, v62, 0x168uLL);
  memcpy(&src[23], &v62[23], 0xD8uLL);
  v34 = HIDWORD(v62[36]);
  *((_QWORD *)&src[22] + 1) = *((_QWORD *)&v62[22] + 1);
  DWORD2(src[36]) = 32;
  HIDWORD(src[36]) = HIDWORD(v62[36]);
  *(_QWORD *)&v59 = aList;
  *((_QWORD *)&v59 + 1) = 4LL;
  v60 = 0LL;
  v61 = 1LL;
  ((void (__fastcall *)(_OWORD *, __int128 *, __int64, __int64, __int64, __int64))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    v62,
    &v59,
    v35,
    v36,
    v37,
    v38);
  v39 = v34 >> 8;
  if ( *((_QWORD *)&src[21] + 1) )
    _rust_dealloc(*(_QWORD *)&src[22], 16LL * *((_QWORD *)&src[21] + 1), 8LL);
  *((_QWORD *)&src[22] + 1) = *(_QWORD *)&v62[1];
  *(_OWORD *)((char *)&src[21] + 8) = v62[0];
  memcpy(v62, src, 0x168uLL);
  memcpy(&v62[23], &src[23], 0xD8uLL);
  *((_QWORD *)&v62[22] + 1) = *((_QWORD *)&src[22] + 1);
  DWORD2(v62[36]) = 32;
  BYTE12(v62[36]) = 1;
  HIBYTE(v62[36]) = BYTE2(v39);
  *(_WORD *)((char *)&v62[36] + 13) = v39;
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
  v40 = v63;
  *(_QWORD *)&dest[504] = v63;
  *(_QWORD *)&dest[528] = aComplement_0;
  *(_QWORD *)&dest[536] = 10LL;
  *(_QWORD *)&dest[544] = aComplement_0;
  *(_QWORD *)&dest[552] = 10LL;
  *(_QWORD *)&dest[560] = 0LL;
  *(_QWORD *)&dest[576] = 0x11000000110000LL;
  *(_DWORD *)&dest[584] = 0;
  *(_WORD *)&dest[588] = 3337;
  *(_QWORD *)&v62[0] = 0LL;
  *((_QWORD *)&v62[0] + 1) = 1LL;
  *(_QWORD *)&v62[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v62, 0LL, 98LL);
  v41 = *((_QWORD *)&v62[0] + 1);
  v42 = *(_QWORD *)&v62[1];
  *(_OWORD *)(*((_QWORD *)&v62[0] + 1) + *(_QWORD *)&v62[1] + 80LL) = unk_1ABFC;
  qmemcpy((void *)(v41 + v42), "invert the filter - instead of displaying only the filtered columns, display all", 80);
  *(_WORD *)(v41 + v42 + 96) = 29550;
  *(_QWORD *)&v62[1] = v42 + 98;
  v43 = *(_QWORD *)&v62[0];
  v59 = *(_OWORD *)((char *)v62 + 8);
  if ( *(_QWORD *)&v62[0] != 0x8000000000000000LL )
    v62[0] = v59;
  *(_QWORD *)&dest[440] = v43;
  *(_OWORD *)&dest[448] = v62[0];
  memcpy(v62, dest, 0x24CuLL);
  *(_WORD *)((char *)&v62[36] + 13) = *(_WORD *)&dest[589];
  HIBYTE(v62[36]) = dest[591];
  BYTE12(v62[36]) = 2;
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
  *((_QWORD *)&src[31] + 1) = v40;
  *(_QWORD *)&src[33] = aOnlyDelimited_0;
  *((_QWORD *)&src[33] + 1) = 14LL;
  *(_QWORD *)&src[34] = aOnlyDelimited_0;
  *((_QWORD *)&src[34] + 1) = 14LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000000073LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v62[0] = 0LL;
  *((_QWORD *)&v62[0] + 1) = 1LL;
  *(_QWORD *)&v62[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v62, 0LL, 59LL);
  v44 = *((_QWORD *)&v62[0] + 1);
  v45 = *(_QWORD *)&v62[1];
  *(_OWORD *)(*((_QWORD *)&v62[0] + 1) + *(_QWORD *)&v62[1] + 43LL) = unk_1AC47;
  qmemcpy((void *)(v44 + v45), "in field mode, only print lines which contain th", 48);
  *(_QWORD *)&v62[1] = v45 + 59;
  v46 = *(_QWORD *)&v62[0];
  v59 = *(_OWORD *)((char *)v62 + 8);
  if ( *(_QWORD *)&v62[0] != 0x8000000000000000LL )
    v62[0] = v59;
  *((_QWORD *)&src[27] + 1) = v46;
  src[28] = v62[0];
  memcpy(v62, src, 0x24CuLL);
  *(_WORD *)((char *)&v62[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(v62[36]) = HIBYTE(src[36]);
  BYTE12(v62[36]) = 2;
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
  *(_QWORD *)&dest[504] = v40;
  *(_QWORD *)&dest[528] = aZeroTerminated_0;
  *(_QWORD *)&dest[536] = 15LL;
  *(_QWORD *)&dest[544] = aZeroTerminated_0;
  *(_QWORD *)&dest[552] = 15LL;
  *(_QWORD *)&dest[560] = 0LL;
  *(_QWORD *)&dest[576] = 0x1100000000007ALL;
  *(_DWORD *)&dest[584] = 0;
  *(_WORD *)&dest[588] = 3337;
  *(_QWORD *)&v62[0] = 0LL;
  *((_QWORD *)&v62[0] + 1) = 1LL;
  *(_QWORD *)&v62[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v62, 0LL, 87LL);
  v47 = *((_QWORD *)&v62[0] + 1);
  v48 = *(_QWORD *)&v62[1];
  *(_OWORD *)(*((_QWORD *)&v62[0] + 1) + *(_QWORD *)&v62[1] + 64LL) = unk_1ACA6;
  qmemcpy((void *)(v47 + v48), "instead of filtering columns based on line, filter columns based", 64);
  *(_QWORD *)(v47 + v48 + 79) = 0x2972657463617261LL;
  *(_QWORD *)&v62[1] = v48 + 87;
  v49 = *(_QWORD *)&v62[0];
  v59 = *(_OWORD *)((char *)v62 + 8);
  if ( *(_QWORD *)&v62[0] != 0x8000000000000000LL )
    v62[0] = v59;
  *(_QWORD *)&dest[440] = v49;
  *(_OWORD *)&dest[448] = v62[0];
  memcpy(v62, dest, 0x24CuLL);
  *(_WORD *)((char *)&v62[36] + 13) = *(_WORD *)&dest[589];
  HIBYTE(v62[36]) = dest[591];
  BYTE12(v62[36]) = 2;
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
  *((_QWORD *)&src[31] + 1) = v40;
  *(_QWORD *)&src[33] = &unk_11470;
  *((_QWORD *)&src[33] + 1) = 16LL;
  *(_QWORD *)&src[34] = &unk_11470;
  *((_QWORD *)&src[34] + 1) = 16LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000110000LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  clap_builder::builder::arg::Arg::value_parser(v62, src);
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 80LL);
  v50 = *((_QWORD *)&src[0] + 1);
  v51 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 64LL) = unk_1ACFD;
  qmemcpy((void *)(v50 + v51), "in field mode, replace the delimiter in output lines with this o", 64);
  *(_QWORD *)&src[1] = v51 + 80;
  v52 = *(_QWORD *)&src[0];
  v59 = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v59;
  if ( *((_QWORD *)&v62[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&v62[27] + 1) )
    _rust_dealloc(*(_QWORD *)&v62[28], *((_QWORD *)&v62[27] + 1), 1LL);
  *((_QWORD *)&v62[27] + 1) = v52;
  v62[28] = src[0];
  memcpy(src, v62, 0x168uLL);
  memcpy(&src[23], &v62[23], 0xE0uLL);
  *((_QWORD *)&src[22] + 1) = *((_QWORD *)&v62[22] + 1);
  *(_QWORD *)&v59 = aNewDelim;
  *((_QWORD *)&v59 + 1) = 9LL;
  v60 = 0LL;
  v61 = 1LL;
  ((void (__fastcall *)(_OWORD *, __int128 *, __int64, __int64, __int64, __int64))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    v62,
    &v59,
    v53,
    v54,
    v55,
    v56);
  if ( *((_QWORD *)&src[21] + 1) )
    _rust_dealloc(*(_QWORD *)&src[22], 16LL * *((_QWORD *)&src[21] + 1), 8LL);
  *((_QWORD *)&src[22] + 1) = *(_QWORD *)&v62[1];
  *(_OWORD *)((char *)&src[21] + 8) = v62[0];
  memcpy(v62, src, sizeof(v62));
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
  *(_QWORD *)&dest[504] = v40;
  *(_QWORD *)&dest[528] = aFile;
  *(_QWORD *)&dest[536] = 4LL;
  *(_QWORD *)&dest[544] = 0LL;
  *(_QWORD *)&dest[560] = 0LL;
  *(_OWORD *)&dest[576] = unk_113D0;
  v57 = v66;
  clap_builder::builder::command::Command::arg(v66, src);
  return v57;
}
