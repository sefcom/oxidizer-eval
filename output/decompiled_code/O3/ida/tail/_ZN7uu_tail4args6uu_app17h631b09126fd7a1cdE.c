void *__fastcall uu_tail::args::uu_app(void *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r14
  __int64 v36; // r14
  __int64 v37; // r14
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rbp
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r14
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // r14
  __int64 v64; // rax
  __int64 v65; // rcx
  void *v66; // r13
  __int64 v67; // rax
  _OWORD v69[45]; // [rsp+0h] [rbp-AE8h] BYREF
  _OWORD src[45]; // [rsp+2D0h] [rbp-818h] BYREF
  _OWORD dest[37]; // [rsp+5A0h] [rbp-548h] BYREF
  void *v72; // [rsp+7F8h] [rbp-2F0h]
  _OWORD v73[46]; // [rsp+800h] [rbp-2E8h] BYREF

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(src, xmmword_163010, *((_QWORD *)&xmmword_163010 + 1));
  *(_QWORD *)&src[38] = a0027;
  *((_QWORD *)&src[38] + 1) = 6LL;
  memcpy(v69, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(src, v69, aPrintTheLast10, 254LL);
  uucore::format_usage(dest, aFlagFile, 22LL);
  v1 = *(_QWORD *)&dest[0];
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    v69[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&src[29] != 0x8000000000000000LL && *(_QWORD *)&src[29] )
    _rust_dealloc(*((_QWORD *)&src[29] + 1), *(_QWORD *)&src[29], 1LL);
  *(_QWORD *)&src[29] = v1;
  *(_OWORD *)((char *)&src[29] + 8) = v69[0];
  memcpy(v69, src, 0x2BCuLL);
  *(_QWORD *)((char *)&v69[43] + 12) = *(_QWORD *)((char *)&src[43] + 12) | 0x8000000080LL;
  DWORD1(v69[44]) = DWORD1(src[44]);
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
  *(_QWORD *)&src[33] = aBytes_0;
  *((_QWORD *)&src[33] + 1) = 5LL;
  *(_QWORD *)&src[34] = aBytes_0;
  *((_QWORD *)&src[34] + 1) = 5LL;
  *(_QWORD *)&src[35] = 0LL;
  src[36] = xmmword_19C70;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], 0LL, 2LL);
  v2 = *(_QWORD *)&src[9];
  v3 = *((_QWORD *)&src[8] + 1);
  v4 = 16LL * *(_QWORD *)&src[9];
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v4) = aBytes_0;
  *(_QWORD *)(v3 + v4 + 8) = 5LL;
  *(_QWORD *)(v3 + v4 + 16) = &unk_2286E;
  *(_QWORD *)(v3 + v4 + 24) = 5LL;
  *(_QWORD *)&src[9] = v2 + 2;
  memcpy(dest, src, sizeof(dest));
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 24LL);
  v5 = *((_QWORD *)&src[0] + 1);
  v6 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1]) = xmmword_22BDB;
  *(_QWORD *)(v5 + v6 + 16) = 0x746E697270206F74LL;
  *(_QWORD *)&src[1] = v6 + 24;
  v7 = *(_QWORD *)&src[0];
  v73[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v73[0];
  if ( *((_QWORD *)&dest[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&dest[27] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[28], *((_QWORD *)&dest[27] + 1), 1LL);
  v72 = a1;
  *((_QWORD *)&dest[27] + 1) = v7;
  dest[28] = src[0];
  memcpy(v73, dest, 0x250uLL);
  clap_builder::builder::command::Command::arg(src, v69);
  v69[7] = 8uLL;
  v69[9] = 0LL;
  v69[10] = 8uLL;
  v69[12] = 0LL;
  v69[13] = 8uLL;
  v69[15] = 0LL;
  v69[16] = 8uLL;
  v69[18] = 0LL;
  v69[19] = 8uLL;
  v69[21] = 0LL;
  v69[22] = 8uLL;
  v69[24] = 0LL;
  v69[25] = 8uLL;
  *(_QWORD *)&v69[0] = 0LL;
  *(_QWORD *)&v69[1] = 0LL;
  *((_QWORD *)&v69[2] + 1) = 0LL;
  *((_QWORD *)&v69[3] + 1) = 0LL;
  v69[4] = *(_OWORD *)((char *)&v73[42] + 8);
  *(_QWORD *)&v69[5] = 5LL;
  *(_OWORD *)((char *)&v69[5] + 8) = *(_OWORD *)((char *)&v73[41] + 8);
  *((_QWORD *)&v69[6] + 1) = 0LL;
  *((_QWORD *)&v69[8] + 1) = 8LL;
  *((_QWORD *)&v69[11] + 1) = 8LL;
  *((_QWORD *)&v69[14] + 1) = 8LL;
  *((_QWORD *)&v69[17] + 1) = 8LL;
  *((_QWORD *)&v69[20] + 1) = 4LL;
  *((_QWORD *)&v69[23] + 1) = 8LL;
  *(_OWORD *)((char *)&v69[26] + 8) = 8uLL;
  *((_QWORD *)&v69[27] + 1) = 0x8000000000000000LL;
  v69[28] = *(_OWORD *)((char *)&v73[40] + 8);
  *(_QWORD *)&v69[29] = 0x8000000000000000LL;
  *(_OWORD *)((char *)&v69[30] + 8) = *(_OWORD *)((char *)&v73[39] + 8);
  *(_OWORD *)((char *)&v69[29] + 8) = *(_OWORD *)((char *)&v73[38] + 8);
  *((_QWORD *)&v69[31] + 1) = 0x8000000000000001LL;
  v69[32] = *(_OWORD *)((char *)&v73[37] + 8);
  *(_QWORD *)&v69[33] = aFollow;
  *((_QWORD *)&v69[33] + 1) = 6LL;
  *(_QWORD *)&v69[34] = aFollow;
  *((_QWORD *)&v69[34] + 1) = 6LL;
  *(_QWORD *)&v69[35] = 0LL;
  v69[36] = xmmword_19C60;
  *(_QWORD *)&v73[0] = aDescriptor;
  *((_QWORD *)&v73[0] + 1) = 10LL;
  *(_QWORD *)&v73[1] = 0LL;
  *((_QWORD *)&v73[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(dest, v73);
  if ( *(_QWORD *)&v69[26] )
    _rust_dealloc(*((_QWORD *)&v69[26] + 1), 16LL * *(_QWORD *)&v69[26], 8LL);
  *(_QWORD *)&v69[27] = *(_QWORD *)&dest[1];
  v69[26] = dest[0];
  dest[4] = v69[4];
  *(_OWORD *)((char *)&dest[5] + 8) = *(_OWORD *)((char *)&v69[5] + 8);
  *(_OWORD *)((char *)&dest[7] + 8) = *(_OWORD *)((char *)&v69[7] + 8);
  dest[9] = v69[9];
  *(_OWORD *)((char *)&dest[10] + 8) = *(_OWORD *)((char *)&v69[10] + 8);
  dest[12] = v69[12];
  *(_OWORD *)((char *)&dest[13] + 8) = *(_OWORD *)((char *)&v69[13] + 8);
  dest[15] = v69[15];
  *(_OWORD *)((char *)&dest[16] + 8) = *(_OWORD *)((char *)&v69[16] + 8);
  dest[18] = v69[18];
  *(_OWORD *)((char *)&dest[19] + 8) = *(_OWORD *)((char *)&v69[19] + 8);
  dest[21] = v69[21];
  *(_OWORD *)((char *)&dest[22] + 8) = *(_OWORD *)((char *)&v69[22] + 8);
  dest[24] = v69[24];
  *(_OWORD *)((char *)&dest[25] + 8) = *(_OWORD *)((char *)&v69[25] + 8);
  dest[28] = v69[28];
  *(_OWORD *)((char *)&dest[30] + 8) = *(_OWORD *)((char *)&v69[30] + 8);
  *(_OWORD *)((char *)&dest[29] + 8) = *(_OWORD *)((char *)&v69[29] + 8);
  dest[32] = v69[32];
  dest[0] = v69[0];
  dest[1] = 1uLL;
  *(_QWORD *)&dest[2] = 1LL;
  *(_OWORD *)((char *)&dest[2] + 8) = *(_OWORD *)((char *)&v69[2] + 8);
  *((_QWORD *)&dest[3] + 1) = *((_QWORD *)&v69[3] + 1);
  *(_QWORD *)&dest[5] = *(_QWORD *)&v69[5];
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *(_QWORD *)&dest[7] = 8LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *(_QWORD *)&dest[10] = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *(_QWORD *)&dest[13] = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *(_QWORD *)&dest[16] = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *(_QWORD *)&dest[19] = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *(_QWORD *)&dest[22] = 8LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *(_QWORD *)&dest[25] = 8LL;
  *(_OWORD *)((char *)&dest[26] + 8) = *(_OWORD *)((char *)&v69[26] + 8);
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = aFollow;
  *((_QWORD *)&dest[33] + 1) = 6LL;
  *(_QWORD *)&dest[34] = aFollow;
  *((_QWORD *)&dest[34] + 1) = 6LL;
  *(_QWORD *)&dest[35] = 0LL;
  *((_QWORD *)&dest[35] + 1) = *((_QWORD *)&v69[35] + 1);
  dest[36] = xmmword_19940;
  *(_QWORD *)&v69[0] = aDescriptor;
  *((_QWORD *)&v69[0] + 1) = 10LL;
  *(_QWORD *)&v69[1] = aName;
  *((_QWORD *)&v69[1] + 1) = 4LL;
  *(_QWORD *)&v69[2] = 0LL;
  *((_QWORD *)&v69[2] + 1) = 2LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v73, v69);
  clap_builder::builder::arg::Arg::value_parser(v69, dest);
  v8 = *(_QWORD *)&v69[9];
  if ( *(_QWORD *)&v69[9] == *(_QWORD *)&v69[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v69[8]);
  v9 = *((_QWORD *)&v69[8] + 1);
  v10 = 16 * v8;
  *(_QWORD *)(*((_QWORD *)&v69[8] + 1) + v10) = aFollow;
  *(_QWORD *)(v9 + v10 + 8) = 6LL;
  *(_QWORD *)&v69[9] = v8 + 1;
  memcpy(dest, v69, sizeof(dest));
  *(_QWORD *)&v69[0] = 0LL;
  *((_QWORD *)&v69[0] + 1) = 1LL;
  *(_QWORD *)&v69[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v69, 0LL, 26LL);
  v11 = *((_QWORD *)&v69[0] + 1);
  v12 = *(_QWORD *)&v69[1];
  *(_OWORD *)(*((_QWORD *)&v69[0] + 1) + *(_QWORD *)&v69[1] + 10LL) = *(__int128 *)((char *)&xmmword_22BFD + 10);
  *(_OWORD *)(v11 + v12) = xmmword_22BFD;
  *(_QWORD *)&v69[1] = v12 + 26;
  v13 = *(_QWORD *)&v69[0];
  v73[0] = *(_OWORD *)((char *)v69 + 8);
  if ( *(_QWORD *)&v69[0] != 0x8000000000000000LL )
    v69[0] = v73[0];
  if ( *((_QWORD *)&dest[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&dest[27] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[28], *((_QWORD *)&dest[27] + 1), 1LL);
  *((_QWORD *)&dest[27] + 1) = v13;
  dest[28] = v69[0];
  memcpy(v73, dest, 0x250uLL);
  clap_builder::builder::command::Command::arg(v69, src);
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
  *(_QWORD *)&src[33] = &unk_2286E;
  *((_QWORD *)&src[33] + 1) = 5LL;
  *(_QWORD *)&src[34] = &unk_2286E;
  *((_QWORD *)&src[34] + 1) = 5LL;
  *(_QWORD *)&src[35] = 0LL;
  src[36] = xmmword_19C80;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&src[8], 0LL, 2LL);
  v14 = *(_QWORD *)&src[9];
  v15 = *((_QWORD *)&src[8] + 1);
  v16 = 16LL * *(_QWORD *)&src[9];
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v16) = aBytes_0;
  *(_QWORD *)(v15 + v16 + 8) = 5LL;
  *(_QWORD *)(v15 + v16 + 16) = &unk_2286E;
  *(_QWORD *)(v15 + v16 + 24) = 5LL;
  *(_QWORD *)&src[9] = v14 + 2;
  memcpy(dest, src, sizeof(dest));
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 24LL);
  v17 = *((_QWORD *)&src[0] + 1);
  v18 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1]) = xmmword_22C17;
  *(_QWORD *)(v17 + v18 + 16) = 0x746E697270206F74LL;
  *(_QWORD *)&src[1] = v18 + 24;
  v19 = *(_QWORD *)&src[0];
  v73[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v73[0];
  if ( *((_QWORD *)&dest[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&dest[27] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[28], *((_QWORD *)&dest[27] + 1), 1LL);
  *((_QWORD *)&dest[27] + 1) = v19;
  dest[28] = src[0];
  memcpy(v73, dest, 0x250uLL);
  clap_builder::builder::command::Command::arg(src, v69);
  v69[7] = 8uLL;
  v69[9] = 0LL;
  v69[10] = 8uLL;
  v69[12] = 0LL;
  v69[13] = 8uLL;
  v69[15] = 0LL;
  v69[16] = 8uLL;
  v69[18] = 0LL;
  v69[19] = 8uLL;
  v69[21] = 0LL;
  v69[24] = 0LL;
  v69[25] = 8uLL;
  *(_QWORD *)&v69[0] = 0LL;
  *(_QWORD *)&v69[1] = 0LL;
  *((_QWORD *)&v69[2] + 1) = 0LL;
  *((_QWORD *)&v69[3] + 1) = 0LL;
  *(_QWORD *)&v69[5] = 5LL;
  *((_QWORD *)&v69[6] + 1) = 0LL;
  *((_QWORD *)&v69[8] + 1) = 8LL;
  *((_QWORD *)&v69[11] + 1) = 8LL;
  *((_QWORD *)&v69[14] + 1) = 8LL;
  *((_QWORD *)&v69[17] + 1) = 8LL;
  *((_QWORD *)&v69[20] + 1) = 4LL;
  v69[22] = 8uLL;
  *((_QWORD *)&v69[23] + 1) = 8LL;
  *(_OWORD *)((char *)&v69[26] + 8) = 8uLL;
  *((_QWORD *)&v69[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v69[29] = 0x8000000000000000LL;
  *((_QWORD *)&v69[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v69[33] = aPid;
  *((_QWORD *)&v69[33] + 1) = 3LL;
  *(_QWORD *)&v69[34] = aPid;
  *((_QWORD *)&v69[34] + 1) = 3LL;
  *(_QWORD *)&v69[35] = 0LL;
  *(_QWORD *)&v69[36] = 0x11000000110000LL;
  DWORD2(v69[36]) = 0;
  WORD6(v69[36]) = 3337;
  *(_QWORD *)&v73[0] = aPid_0;
  *((_QWORD *)&v73[0] + 1) = 3LL;
  clap_builder::builder::arg::Arg::value_names(dest, v69);
  *(_QWORD *)&v69[0] = 0LL;
  *((_QWORD *)&v69[0] + 1) = 1LL;
  *(_QWORD *)&v69[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v69, 0LL, 45LL);
  v20 = *((_QWORD *)&v69[0] + 1);
  v21 = *(_QWORD *)&v69[1];
  *(_OWORD *)(*((_QWORD *)&v69[0] + 1) + *(_QWORD *)&v69[1] + 29LL) = *(__int128 *)((char *)&xmmword_22C42 + 13);
  qmemcpy((void *)(v20 + v21), "With -f, terminate after process", 32);
  *(_QWORD *)&v69[1] = v21 + 45;
  v22 = *(_QWORD *)&v69[0];
  v73[0] = *(_OWORD *)((char *)v69 + 8);
  if ( *(_QWORD *)&v69[0] != 0x8000000000000000LL )
    v69[0] = v73[0];
  if ( *((_QWORD *)&dest[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&dest[27] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[28], *((_QWORD *)&dest[27] + 1), 1LL);
  *((_QWORD *)&dest[27] + 1) = v22;
  dest[28] = v69[0];
  memcpy(v69, dest, 0x250uLL);
  v23 = *(_QWORD *)&v69[9];
  if ( *(_QWORD *)&v69[9] == *(_QWORD *)&v69[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v69[8]);
  v24 = *((_QWORD *)&v69[8] + 1);
  v25 = 16 * v23;
  *(_QWORD *)(*((_QWORD *)&v69[8] + 1) + v25) = aPid;
  *(_QWORD *)(v24 + v25 + 8) = 3LL;
  *(_QWORD *)&v69[9] = v23 + 1;
  memcpy(dest, v69, sizeof(dest));
  clap_builder::builder::command::Command::arg(v69, src);
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
  *(_QWORD *)&src[33] = aQuiet;
  *((_QWORD *)&src[33] + 1) = 5LL;
  *(_QWORD *)&src[34] = aQuiet;
  *((_QWORD *)&src[34] + 1) = 5LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000000071LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  alloc::raw_vec::RawVec<T,A>::grow_one((char *)&src[18] + 8);
  v26 = *(_QWORD *)&src[19];
  **(_QWORD **)&src[19] = &unk_22C5F;
  *(_QWORD *)(v26 + 8) = 6LL;
  *(_BYTE *)(v26 + 16) = 1;
  *((_QWORD *)&src[19] + 1) = 1LL;
  memcpy(dest, src, sizeof(dest));
  v27 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[8] - *(_QWORD *)&dest[9] <= 1uLL )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&dest[8], *(_QWORD *)&dest[9], 2LL);
    v27 = *(_QWORD *)&dest[9];
  }
  v28 = *((_QWORD *)&dest[8] + 1);
  v29 = 16 * v27;
  *(_QWORD *)(*((_QWORD *)&dest[8] + 1) + v29) = aQuiet;
  *(_QWORD *)(v28 + v29 + 8) = 5LL;
  *(_QWORD *)(v28 + v29 + 16) = aVerbose;
  *(_QWORD *)(v28 + v29 + 24) = 7LL;
  *(_QWORD *)&dest[9] = v27 + 2;
  memcpy(src, dest, 0x250uLL);
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 38LL);
  v30 = *((_QWORD *)&dest[0] + 1);
  v31 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 16LL) = xmmword_22C75;
  *(_OWORD *)(v30 + v31) = xmmword_22C65;
  *(_QWORD *)(v30 + v31 + 30) = 0x73656D616E20656CLL;
  *(_QWORD *)&dest[1] = v31 + 38;
  v32 = *(_QWORD *)&dest[0];
  v73[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v73[0];
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v32;
  src[28] = dest[0];
  memcpy(dest, src, 0x24CuLL);
  *(_WORD *)((char *)&dest[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(dest[36]) = HIBYTE(src[36]);
  BYTE12(dest[36]) = 2;
  clap_builder::builder::command::Command::arg(src, v69);
  v69[7] = 8uLL;
  v69[9] = 0LL;
  v69[10] = 8uLL;
  v69[12] = 0LL;
  v69[13] = 8uLL;
  v69[15] = 0LL;
  v69[16] = 8uLL;
  v69[18] = 0LL;
  v69[19] = 8uLL;
  v69[21] = 0LL;
  v69[24] = 0LL;
  v69[25] = 8uLL;
  *(_QWORD *)&v69[0] = 0LL;
  *(_QWORD *)&v69[1] = 0LL;
  *((_QWORD *)&v69[2] + 1) = 0LL;
  *((_QWORD *)&v69[3] + 1) = 0LL;
  *(_QWORD *)&v69[5] = 5LL;
  *((_QWORD *)&v69[6] + 1) = 0LL;
  *((_QWORD *)&v69[8] + 1) = 8LL;
  *((_QWORD *)&v69[11] + 1) = 8LL;
  *((_QWORD *)&v69[14] + 1) = 8LL;
  *((_QWORD *)&v69[17] + 1) = 8LL;
  *((_QWORD *)&v69[20] + 1) = 4LL;
  v69[22] = 8uLL;
  *((_QWORD *)&v69[23] + 1) = 8LL;
  *(_OWORD *)((char *)&v69[26] + 8) = 8uLL;
  *((_QWORD *)&v69[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v69[29] = 0x8000000000000000LL;
  *((_QWORD *)&v69[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v69[33] = aSleepInterval;
  *((_QWORD *)&v69[33] + 1) = 14LL;
  *(_QWORD *)&v69[34] = 0LL;
  *(_QWORD *)&v69[35] = 0LL;
  *(_QWORD *)&v69[36] = 0x11000000000073LL;
  DWORD2(v69[36]) = 0;
  WORD6(v69[36]) = 3337;
  *(_QWORD *)&v73[0] = aN;
  *((_QWORD *)&v73[0] + 1) = 1LL;
  clap_builder::builder::arg::Arg::value_names(dest, v69);
  *(_QWORD *)&dest[34] = aSleepInterval;
  *((_QWORD *)&dest[34] + 1) = 14LL;
  memcpy(v69, dest, 0x250uLL);
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 72LL);
  v33 = *((_QWORD *)&dest[0] + 1);
  v34 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 48LL) = xmmword_22CBC;
  qmemcpy((void *)(v33 + v34), "Number of seconds to sleep between polling the f", 48);
  *(_QWORD *)(v33 + v34 + 64) = 0x662D206874697720LL;
  *(_QWORD *)&dest[1] = v34 + 72;
  v35 = *(_QWORD *)&dest[0];
  v73[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v73[0];
  if ( *((_QWORD *)&v69[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&v69[27] + 1) )
    _rust_dealloc(*(_QWORD *)&v69[28], *((_QWORD *)&v69[27] + 1), 1LL);
  *((_QWORD *)&v69[27] + 1) = v35;
  v69[28] = dest[0];
  memcpy(dest, v69, sizeof(dest));
  clap_builder::builder::command::Command::arg(v69, src);
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
  *((_QWORD *)&src[2] + 1) = 0LL;
  *((_QWORD *)&src[3] + 1) = 0LL;
  *(_QWORD *)&src[5] = 5LL;
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
  *(_QWORD *)&src[29] = 0x8000000000000000LL;
  *((_QWORD *)&src[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&src[33] = aMaxUnchangedSt;
  *((_QWORD *)&src[33] + 1) = 19LL;
  *(_QWORD *)&src[34] = 0LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000110000LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v73[0] = aN;
  *((_QWORD *)&v73[0] + 1) = 1LL;
  clap_builder::builder::arg::Arg::value_names(dest, src);
  *(_QWORD *)&dest[34] = aMaxUnchangedSt;
  *((_QWORD *)&dest[34] + 1) = 19LL;
  memcpy(src, dest, 0x250uLL);
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 254LL);
  v36 = *(_QWORD *)&dest[1];
  memcpy((void *)(*(_QWORD *)&dest[1] + *((_QWORD *)&dest[0] + 1)), aReopenAFileWhi, 0xFEuLL);
  *(_QWORD *)&dest[1] = v36 + 254;
  v37 = *(_QWORD *)&dest[0];
  v73[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v73[0];
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v37;
  src[28] = dest[0];
  memcpy(dest, src, sizeof(dest));
  clap_builder::builder::command::Command::arg(src, v69);
  v69[7] = 8uLL;
  v69[9] = 0LL;
  v69[10] = 8uLL;
  v69[12] = 0LL;
  v69[13] = 8uLL;
  v69[15] = 0LL;
  v69[16] = 8uLL;
  v69[18] = 0LL;
  v69[19] = 8uLL;
  v69[21] = 0LL;
  v69[22] = 8uLL;
  v69[24] = 0LL;
  v69[25] = 8uLL;
  *(_QWORD *)&v69[0] = 0LL;
  *(_QWORD *)&v69[1] = 0LL;
  *((_QWORD *)&v69[2] + 1) = 0LL;
  *((_QWORD *)&v69[3] + 1) = 0LL;
  *(_QWORD *)&v69[5] = 5LL;
  *((_QWORD *)&v69[6] + 1) = 0LL;
  *((_QWORD *)&v69[8] + 1) = 8LL;
  *((_QWORD *)&v69[11] + 1) = 8LL;
  *((_QWORD *)&v69[14] + 1) = 8LL;
  *((_QWORD *)&v69[17] + 1) = 8LL;
  *((_QWORD *)&v69[20] + 1) = 4LL;
  *((_QWORD *)&v69[23] + 1) = 8LL;
  *(_OWORD *)((char *)&v69[26] + 8) = 8uLL;
  *((_QWORD *)&v69[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v69[29] = 0x8000000000000000LL;
  *((_QWORD *)&v69[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v69[33] = aVerbose;
  *((_QWORD *)&v69[33] + 1) = 7LL;
  *(_QWORD *)&v69[34] = aVerbose;
  *((_QWORD *)&v69[34] + 1) = 7LL;
  *(_QWORD *)&v69[35] = 0LL;
  *(_QWORD *)&v69[36] = 0x11000000000076LL;
  DWORD2(v69[36]) = 0;
  WORD6(v69[36]) = 3337;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v69[8], 0LL, 2LL);
  v38 = *(_QWORD *)&v69[9];
  v39 = *((_QWORD *)&v69[8] + 1);
  v40 = 16LL * *(_QWORD *)&v69[9];
  *(_QWORD *)(*((_QWORD *)&v69[8] + 1) + v40) = aQuiet;
  *(_QWORD *)(v39 + v40 + 8) = 5LL;
  *(_QWORD *)(v39 + v40 + 16) = aVerbose;
  *(_QWORD *)(v39 + v40 + 24) = 7LL;
  *(_QWORD *)&v69[9] = v38 + 2;
  memcpy(dest, v69, sizeof(dest));
  *(_QWORD *)&v69[0] = 0LL;
  *((_QWORD *)&v69[0] + 1) = 1LL;
  *(_QWORD *)&v69[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v69, 0LL, 39LL);
  v41 = *((_QWORD *)&v69[0] + 1);
  v42 = *(_QWORD *)&v69[1];
  *(_OWORD *)(*((_QWORD *)&v69[0] + 1) + *(_QWORD *)&v69[1] + 16LL) = xmmword_22DE2;
  *(_OWORD *)(v41 + v42) = xmmword_22DD2;
  *(_QWORD *)(v41 + v42 + 31) = 0x73656D616E20656CLL;
  *(_QWORD *)&v69[1] = v42 + 39;
  v43 = *(_QWORD *)&v69[0];
  v73[0] = *(_OWORD *)((char *)v69 + 8);
  if ( *(_QWORD *)&v69[0] != 0x8000000000000000LL )
    v69[0] = v73[0];
  if ( *((_QWORD *)&dest[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&dest[27] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[28], *((_QWORD *)&dest[27] + 1), 1LL);
  *((_QWORD *)&dest[27] + 1) = v43;
  dest[28] = v69[0];
  memcpy(v73, dest, 0x24CuLL);
  *(_WORD *)((char *)&v73[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(v73[36]) = HIBYTE(dest[36]);
  BYTE12(v73[36]) = 2;
  clap_builder::builder::command::Command::arg(v69, src);
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
  *(_QWORD *)&src[33] = aZeroTerminated;
  *((_QWORD *)&src[33] + 1) = 15LL;
  *(_QWORD *)&src[34] = aZeroTerminated;
  *((_QWORD *)&src[34] + 1) = 15LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x1100000000007ALL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 34LL);
  v44 = *((_QWORD *)&dest[0] + 1);
  v45 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 16LL) = xmmword_22E09;
  *(_OWORD *)(v44 + v45) = xmmword_22DF9;
  *(_WORD *)(v44 + v45 + 32) = 25966;
  *(_QWORD *)&dest[1] = v45 + 34;
  v46 = *(_QWORD *)&dest[0];
  v73[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v73[0];
  *((_QWORD *)&src[27] + 1) = v46;
  src[28] = dest[0];
  memcpy(dest, src, 0x24CuLL);
  *(_WORD *)((char *)&dest[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(dest[36]) = HIBYTE(src[36]);
  BYTE12(dest[36]) = 2;
  clap_builder::builder::command::Command::arg(src, v69);
  *(_QWORD *)&v69[0] = 0LL;
  *(_QWORD *)&v69[1] = 0LL;
  *((_QWORD *)&v69[2] + 1) = 0LL;
  *((_QWORD *)&v69[3] + 1) = 0LL;
  *(_QWORD *)&v69[5] = 5LL;
  *((_QWORD *)&v69[6] + 1) = 0LL;
  v69[7] = 8uLL;
  *((_QWORD *)&v69[8] + 1) = 8LL;
  v69[9] = 0LL;
  v69[10] = 8uLL;
  *((_QWORD *)&v69[11] + 1) = 8LL;
  v69[12] = 0LL;
  v69[13] = 8uLL;
  *((_QWORD *)&v69[14] + 1) = 8LL;
  v69[15] = 0LL;
  v69[16] = 8uLL;
  *((_QWORD *)&v69[17] + 1) = 8LL;
  v69[18] = 0LL;
  v69[19] = 8uLL;
  *((_QWORD *)&v69[20] + 1) = 4LL;
  v69[21] = 0LL;
  v69[22] = 8uLL;
  *((_QWORD *)&v69[23] + 1) = 8LL;
  v69[24] = 0LL;
  v69[25] = 8uLL;
  *(_OWORD *)((char *)&v69[26] + 8) = 8uLL;
  *((_QWORD *)&v69[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v69[29] = 0x8000000000000000LL;
  *((_QWORD *)&v69[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v69[33] = aUsePolling;
  *((_QWORD *)&v69[33] + 1) = 11LL;
  *(_QWORD *)&v69[34] = 0LL;
  *(_QWORD *)&v69[35] = 0LL;
  *(_QWORD *)&v69[36] = 0x11000000110000LL;
  DWORD2(v69[36]) = 0;
  WORD6(v69[36]) = 3337;
  alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v69[18] + 8);
  v47 = *(_QWORD *)&v69[19];
  **(_QWORD **)&v69[19] = aDisableInotify;
  *(_QWORD *)(v47 + 8) = 16LL;
  *(_BYTE *)(v47 + 16) = 0;
  *((_QWORD *)&v69[19] + 1) = 1LL;
  memcpy(dest, v69, sizeof(dest));
  v48 = *((_QWORD *)&dest[19] + 1);
  if ( *((_QWORD *)&dest[19] + 1) == *((_QWORD *)&dest[18] + 1) )
    alloc::raw_vec::RawVec<T,A>::grow_one((char *)&dest[18] + 8);
  v49 = *(_QWORD *)&dest[19];
  v50 = 3 * v48;
  *(_QWORD *)(*(_QWORD *)&dest[19] + 8 * v50) = &unk_22E1B;
  *(_QWORD *)(v49 + 8 * v50 + 8) = 3LL;
  *(_BYTE *)(v49 + 8 * v50 + 16) = 0;
  *((_QWORD *)&dest[19] + 1) = v48 + 1;
  memcpy(v69, dest, 0x220uLL);
  v69[35] = dest[35];
  v69[36] = dest[36];
  *(_QWORD *)&v69[34] = aUsePolling;
  *((_QWORD *)&v69[34] + 1) = 11LL;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 49LL);
  v51 = *((_QWORD *)&dest[0] + 1);
  v52 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 32LL) = xmmword_22E3E;
  qmemcpy((void *)(v51 + v52), "Disable 'inotify' support and us", 32);
  *(_BYTE *)(v51 + v52 + 48) = 100;
  *(_QWORD *)&dest[1] = v52 + 49;
  v53 = *(_QWORD *)&dest[0];
  v73[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v73[0];
  if ( *((_QWORD *)&v69[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&v69[27] + 1) )
    _rust_dealloc(*(_QWORD *)&v69[28], *((_QWORD *)&v69[27] + 1), 1LL);
  *((_QWORD *)&v69[27] + 1) = v53;
  v69[28] = dest[0];
  memcpy(dest, v69, 0x24CuLL);
  *(_WORD *)((char *)&dest[36] + 13) = *(_WORD *)((char *)&v69[36] + 13);
  HIBYTE(dest[36]) = HIBYTE(v69[36]);
  BYTE12(dest[36]) = 2;
  clap_builder::builder::command::Command::arg(v69, src);
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
  *(_QWORD *)&src[33] = aRetry;
  *((_QWORD *)&src[33] + 1) = 5LL;
  *(_QWORD *)&src[34] = aRetry;
  *((_QWORD *)&src[34] + 1) = 5LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000110000LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 48LL);
  v54 = *((_QWORD *)&dest[0] + 1);
  v55 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 32LL) = xmmword_22E6F;
  qmemcpy((void *)(v54 + v55), "Keep trying to open a file if it", 32);
  *(_QWORD *)&dest[1] = v55 + 48;
  v56 = *(_QWORD *)&dest[0];
  v73[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v73[0];
  *((_QWORD *)&src[27] + 1) = v56;
  src[28] = dest[0];
  memcpy(dest, src, sizeof(dest));
  v57 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  v58 = *((_QWORD *)&dest[8] + 1);
  v59 = 16 * v57;
  *(_QWORD *)(*((_QWORD *)&dest[8] + 1) + v59) = aRetry;
  *(_QWORD *)(v58 + v59 + 8) = 5LL;
  *(_QWORD *)&dest[9] = v57 + 1;
  memcpy(v73, dest, 0x24CuLL);
  *(_WORD *)((char *)&v73[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(v73[36]) = HIBYTE(dest[36]);
  BYTE12(v73[36]) = 2;
  clap_builder::builder::command::Command::arg(src, v69);
  v69[7] = 8uLL;
  v69[9] = 0LL;
  v69[10] = 8uLL;
  v69[12] = 0LL;
  v69[13] = 8uLL;
  v69[15] = 0LL;
  v69[16] = 8uLL;
  v69[18] = 0LL;
  v69[19] = 8uLL;
  v69[21] = 0LL;
  v69[22] = 8uLL;
  v69[24] = 0LL;
  v69[25] = 8uLL;
  *(_QWORD *)&v69[0] = 0LL;
  *(_QWORD *)&v69[1] = 0LL;
  *((_QWORD *)&v69[2] + 1) = 0LL;
  *((_QWORD *)&v69[3] + 1) = 0LL;
  *(_QWORD *)&v69[5] = 5LL;
  *((_QWORD *)&v69[6] + 1) = 0LL;
  *((_QWORD *)&v69[8] + 1) = 8LL;
  *((_QWORD *)&v69[11] + 1) = 8LL;
  *((_QWORD *)&v69[14] + 1) = 8LL;
  *((_QWORD *)&v69[17] + 1) = 8LL;
  *((_QWORD *)&v69[20] + 1) = 4LL;
  *((_QWORD *)&v69[23] + 1) = 8LL;
  *(_OWORD *)((char *)&v69[26] + 8) = 8uLL;
  *((_QWORD *)&v69[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v69[29] = 0x8000000000000000LL;
  *((_QWORD *)&v69[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v69[33] = asc_2288C;
  *((_QWORD *)&v69[33] + 1) = 1LL;
  *(_QWORD *)&v69[34] = 0LL;
  *(_QWORD *)&v69[35] = 0LL;
  *(_QWORD *)&v69[36] = 0x11000000000046LL;
  DWORD2(v69[36]) = 0;
  WORD6(v69[36]) = 3337;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 29LL);
  v60 = *((_QWORD *)&dest[0] + 1);
  v61 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 13LL) = *(__int128 *)((char *)&xmmword_22E7F + 13);
  *(_OWORD *)(v60 + v61) = xmmword_22E7F;
  *(_QWORD *)&dest[1] = v61 + 29;
  v62 = *(_QWORD *)&dest[0];
  v73[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v73[0];
  *((_QWORD *)&v69[27] + 1) = v62;
  v69[28] = dest[0];
  memcpy(dest, v69, sizeof(dest));
  v63 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  v64 = *((_QWORD *)&dest[8] + 1);
  v65 = 16 * v63;
  *(_QWORD *)(*((_QWORD *)&dest[8] + 1) + v65) = asc_2288C;
  *(_QWORD *)(v64 + v65 + 8) = 1LL;
  *(_QWORD *)&dest[9] = v63 + 1;
  memcpy(v73, dest, 0x24CuLL);
  *(_WORD *)((char *)&v73[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(v73[36]) = HIBYTE(dest[36]);
  BYTE12(v73[36]) = 2;
  clap_builder::builder::command::Command::arg(v69, src);
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
  *(_QWORD *)&src[33] = aPresumeInputPi;
  *((_QWORD *)&src[33] + 1) = 19LL;
  *(_QWORD *)&src[34] = aPresumeInputPi_0;
  *((_QWORD *)&src[34] + 1) = 18LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000110000LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  v66 = v72;
  alloc::raw_vec::RawVec<T,A>::grow_one((char *)&src[18] + 8);
  v67 = *(_QWORD *)&src[19];
  **(_QWORD **)&src[19] = aPresumeInputPi;
  *(_QWORD *)(v67 + 8) = 19LL;
  *(_BYTE *)(v67 + 16) = 0;
  *((_QWORD *)&src[19] + 1) = 1LL;
  memcpy(dest, src, 0x248uLL);
  DWORD2(dest[36]) = DWORD2(src[36]) | 4;
  HIDWORD(dest[36]) = HIDWORD(src[36]) & 0xFFFFFF00 | 2;
  clap_builder::builder::command::Command::arg(src, v69);
  v69[7] = 8uLL;
  v69[9] = 0LL;
  v69[10] = 8uLL;
  v69[12] = 0LL;
  v69[13] = 8uLL;
  v69[15] = 0LL;
  v69[16] = 8uLL;
  v69[18] = 0LL;
  v69[19] = 8uLL;
  v69[21] = 0LL;
  v69[22] = 8uLL;
  v69[24] = 0LL;
  v69[25] = 8uLL;
  *(_QWORD *)&v69[0] = 0LL;
  *(_QWORD *)&v69[1] = 1LL;
  *((_QWORD *)&v69[1] + 1) = 1LL;
  v69[2] = 0xFFFFFFFFFFFFFFFFLL;
  *((_QWORD *)&v69[3] + 1) = 0LL;
  *(_QWORD *)&v69[5] = 5LL;
  *((_QWORD *)&v69[6] + 1) = 0LL;
  *((_QWORD *)&v69[8] + 1) = 8LL;
  *((_QWORD *)&v69[11] + 1) = 8LL;
  *((_QWORD *)&v69[14] + 1) = 8LL;
  *((_QWORD *)&v69[17] + 1) = 8LL;
  *((_QWORD *)&v69[20] + 1) = 4LL;
  *((_QWORD *)&v69[23] + 1) = 8LL;
  *(_OWORD *)((char *)&v69[26] + 8) = 8uLL;
  *((_QWORD *)&v69[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v69[29] = 0x8000000000000000LL;
  *((_QWORD *)&v69[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v69[33] = aFiles;
  *((_QWORD *)&v69[33] + 1) = 5LL;
  *(_QWORD *)&v69[34] = 0LL;
  *(_QWORD *)&v69[35] = 0LL;
  *(_QWORD *)&v69[36] = 0x11000000110000LL;
  DWORD2(v69[36]) = 0;
  WORD6(v69[36]) = 3329;
  *(_QWORD *)&v73[0] = 2LL;
  clap_builder::builder::arg::Arg::value_parser(dest, v69);
  BYTE13(dest[36]) = 3;
  memcpy(v69, dest, 0x250uLL);
  clap_builder::builder::command::Command::arg(v66, src);
  return v66;
}
