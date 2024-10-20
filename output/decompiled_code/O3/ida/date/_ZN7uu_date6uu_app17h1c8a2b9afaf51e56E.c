void *__fastcall uu_date::uu_app(void *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r13
  __int64 v17; // rbx
  __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // r14
  __int64 v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // r13
  __int64 v27; // rbx
  __int64 v28; // r15
  __int64 v29; // rsi
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rbp
  __int64 v35; // r12
  __int64 v36; // r14
  __int64 v37; // rdx
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rbx
  __int64 v42; // r13
  __int64 v43; // rbx
  __int64 v44; // r14
  __int64 v45; // rsi
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // r13
  __int64 v51; // rbx
  __int64 v52; // r14
  int v53; // r15d
  __int64 v54; // rsi
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rbx
  __int64 v59; // r13
  __int64 v60; // rbx
  __int64 v61; // r12
  __int64 v62; // rsi
  __int64 v63; // rbx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rbx
  __int64 v67; // r13
  __int64 v68; // rbx
  __int64 v69; // r12
  __int64 v70; // rsi
  __int64 v71; // rbx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rbx
  __int64 v76; // r14
  __int64 v77; // rbx
  __int64 v78; // r15
  __int64 v79; // rsi
  __int64 v80; // rbx
  __int64 v81; // rbx
  void *v82; // r14
  _OWORD dest[45]; // [rsp+60h] [rbp-A88h] BYREF
  _OWORD src[45]; // [rsp+330h] [rbp-7B8h] BYREF
  _OWORD v86[37]; // [rsp+600h] [rbp-4E8h] BYREF
  void *v87; // [rsp+850h] [rbp-298h]
  __int64 v88; // [rsp+858h] [rbp-290h]
  _OWORD v89[40]; // [rsp+860h] [rbp-288h] BYREF

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  src[4] = 8uLL;
  src[6] = 0LL;
  src[9] = 0LL;
  src[10] = 8uLL;
  src[12] = 0LL;
  src[15] = 0LL;
  *(_QWORD *)&src[0] = 0LL;
  src[1] = 1uLL;
  *(_QWORD *)&src[2] = 5LL;
  *((_QWORD *)&src[3] + 1) = 0LL;
  *((_QWORD *)&src[5] + 1) = 4LL;
  src[7] = 8uLL;
  *((_QWORD *)&src[8] + 1) = 8LL;
  *((_QWORD *)&src[11] + 1) = 8LL;
  src[13] = 8uLL;
  *((_QWORD *)&src[14] + 1) = 8LL;
  src[16] = 8uLL;
  *(_QWORD *)&src[17] = 0x8000000000000000LL;
  *((_QWORD *)&src[18] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[20] = 0x8000000000000000LL;
  *((_QWORD *)&src[21] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[23] = 0x8000000000000000LL;
  *((_QWORD *)&src[24] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[26] = 0x8000000000000000LL;
  *((_QWORD *)&src[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[29] = 0x8000000000000000LL;
  *((_QWORD *)&src[30] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[32] = 0x8000000000000000LL;
  *((_QWORD *)&src[33] + 1) = 0x8000000000000000LL;
  src[35] = xmmword_2CF298;
  *(_QWORD *)&src[36] = 0LL;
  *(_QWORD *)&src[37] = 0LL;
  *(_QWORD *)&src[38] = a0027;
  *((_QWORD *)&src[38] + 1) = 6LL;
  *(_QWORD *)&src[39] = 0LL;
  *(_QWORD *)&src[40] = 0LL;
  *(_QWORD *)&src[41] = 0LL;
  *(_QWORD *)&src[42] = 0LL;
  *(_QWORD *)&src[43] = 0LL;
  DWORD2(src[43]) = 1114112;
  BYTE4(src[44]) = 0;
  *(_QWORD *)((char *)&src[43] + 12) = 0LL;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 37LL);
  v1 = *((_QWORD *)&dest[0] + 1);
  v2 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 16LL) = unk_6B74F;
  *(_OWORD *)(v1 + v2) = unk_6B73F;
  *(_QWORD *)(v1 + v2 + 29) = 0x656D697420646E61LL;
  *(_QWORD *)&dest[1] = v2 + 37;
  v3 = *(_QWORD *)&dest[0];
  v86[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v86[0];
  *(_QWORD *)&src[20] = v3;
  *(_OWORD *)((char *)&src[20] + 8) = dest[0];
  memcpy(dest, src, 0x2C8uLL);
  uucore::format_usage(v86, aOptionFormatOp, 66LL);
  v4 = *(_QWORD *)&v86[0];
  if ( *(_QWORD *)&v86[0] != 0x8000000000000000LL )
    src[0] = *(_OWORD *)((char *)v86 + 8);
  if ( *(_QWORD *)&dest[29] != 0x8000000000000000LL && *(_QWORD *)&dest[29] )
    _rust_dealloc(*((_QWORD *)&dest[29] + 1), *(_QWORD *)&dest[29], 1LL);
  *(_QWORD *)&dest[29] = v4;
  *(_OWORD *)((char *)&dest[29] + 8) = src[0];
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
  *(_QWORD *)&dest[33] = "datethur]";
  *((_QWORD *)&dest[33] + 1) = 4LL;
  *(_QWORD *)&dest[36] = 0x11000000000064LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&dest[34] = "datethur]";
  *(_OWORD *)((char *)&dest[34] + 8) = 4uLL;
  *(_QWORD *)&v89[0] = aString;
  *((_QWORD *)&v89[0] + 1) = 6LL;
  clap_builder::builder::arg::Arg::value_names(v86, dest);
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 43LL);
  v5 = *((_QWORD *)&dest[0] + 1);
  v6 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 27LL) = unk_6B7C7;
  qmemcpy((void *)(v5 + v6), "display time described by STRING", 32);
  *(_QWORD *)&dest[1] = v6 + 43;
  v7 = *(_QWORD *)&dest[0];
  v89[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v89[0];
  v87 = a1;
  if ( *((_QWORD *)&v86[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&v86[27] + 1) )
    _rust_dealloc(*(_QWORD *)&v86[28], *((_QWORD *)&v86[27] + 1), 1LL);
  *((_QWORD *)&v86[27] + 1) = v7;
  v86[28] = dest[0];
  v8 = *(_QWORD *)&v86[0];
  v9 = *((_QWORD *)&v86[4] + 1);
  v10 = *(_QWORD *)&v86[4];
  memcpy(v89, &v86[5], 0x1D0uLL);
  if ( *(_QWORD *)&src[1] && (*(_QWORD *)&v86[34] || LODWORD(v86[36]) != 1114112) )
  {
    v11 = *((_QWORD *)&v86[0] + 1);
    if ( !*(_QWORD *)&v86[0] )
      v11 = *((_QWORD *)&src[1] + 1);
    ++*((_QWORD *)&src[1] + 1);
    v8 = (*(_QWORD *)&v86[0] == 0LL) + *(_QWORD *)&v86[0];
  }
  else
  {
    v11 = *((_QWORD *)&v86[0] + 1);
  }
  if ( !*((_QWORD *)&v86[3] + 1) )
  {
    v9 = *((_QWORD *)&src[40] + 1);
    v10 = *(_QWORD *)&src[40];
  }
  *(_QWORD *)&dest[0] = v8;
  *((_QWORD *)&dest[0] + 1) = v11;
  dest[1] = v86[1];
  dest[2] = v86[2];
  *(_QWORD *)&dest[3] = *(_QWORD *)&v86[3];
  *((_QWORD *)&dest[3] + 1) = (*((_QWORD *)&v86[3] + 1) == 0LL) + *((_QWORD *)&v86[3] + 1);
  *(_QWORD *)&dest[4] = v10;
  *((_QWORD *)&dest[4] + 1) = v9;
  memcpy(&dest[5], v89, 0x1D0uLL);
  *(_QWORD *)&dest[34] = *(_QWORD *)&v86[34];
  *(_OWORD *)((char *)&dest[34] + 8) = *(_OWORD *)((char *)&v86[34] + 8);
  *((_QWORD *)&dest[35] + 1) = *((_QWORD *)&v86[35] + 1);
  dest[36] = v86[36];
  v12 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[9] == *(_QWORD *)&src[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[8]);
  memmove((void *)(*((_QWORD *)&src[8] + 1) + 592 * v12), dest, 0x250uLL);
  *(_QWORD *)&src[9] = v12 + 1;
  memcpy(dest, src, 0x2C8uLL);
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
  *(_QWORD *)&src[36] = 0x11000000000066LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&src[34] = "filemode{";
  *(_OWORD *)((char *)&src[34] + 8) = 4uLL;
  *(_QWORD *)&v89[0] = aDatefile;
  *((_QWORD *)&v89[0] + 1) = 8LL;
  clap_builder::builder::arg::Arg::value_names(v86, src);
  BYTE13(v86[36]) = 3;
  memcpy(src, v86, 0x250uLL);
  *(_QWORD *)&v86[0] = 0LL;
  *((_QWORD *)&v86[0] + 1) = 1LL;
  *(_QWORD *)&v86[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v86, 0LL, 43LL);
  v13 = *((_QWORD *)&v86[0] + 1);
  v14 = *(_QWORD *)&v86[1];
  *(_OWORD *)(*((_QWORD *)&v86[0] + 1) + *(_QWORD *)&v86[1] + 27LL) = unk_6B7F2;
  qmemcpy((void *)(v13 + v14), "like --date; once for each line ", 32);
  *(_QWORD *)&v86[1] = v14 + 43;
  v15 = *(_QWORD *)&v86[0];
  v89[0] = *(_OWORD *)((char *)v86 + 8);
  if ( *(_QWORD *)&v86[0] != 0x8000000000000000LL )
    v86[0] = v89[0];
  if ( *((_QWORD *)&src[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&src[27] + 1) )
    _rust_dealloc(*(_QWORD *)&src[28], *((_QWORD *)&src[27] + 1), 1LL);
  *((_QWORD *)&src[27] + 1) = v15;
  src[28] = v86[0];
  v16 = *(_QWORD *)&src[0];
  v89[0] = src[1];
  v89[1] = src[2];
  *(_QWORD *)&v89[2] = *(_QWORD *)&src[3];
  v17 = *((_QWORD *)&src[4] + 1);
  v18 = *(_QWORD *)&src[4];
  memcpy(v86, &src[5], 0x1D0uLL);
  if ( *(_QWORD *)&dest[1] && (*(_QWORD *)&src[34] || LODWORD(src[36]) != 1114112) )
  {
    v19 = *((_QWORD *)&src[0] + 1);
    if ( !*(_QWORD *)&src[0] )
      v19 = *((_QWORD *)&dest[1] + 1);
    ++*((_QWORD *)&dest[1] + 1);
    v16 = (*(_QWORD *)&src[0] == 0LL) + *(_QWORD *)&src[0];
  }
  else
  {
    v19 = *((_QWORD *)&src[0] + 1);
  }
  if ( !*((_QWORD *)&src[3] + 1) )
  {
    v17 = *((_QWORD *)&dest[40] + 1);
    v18 = *(_QWORD *)&dest[40];
  }
  *(_QWORD *)&src[0] = v16;
  *((_QWORD *)&src[0] + 1) = v19;
  src[1] = v89[0];
  src[2] = v89[1];
  *(_QWORD *)&src[3] = *(_QWORD *)&v89[2];
  *((_QWORD *)&src[3] + 1) += *((_QWORD *)&src[3] + 1) == 0LL;
  *(_QWORD *)&src[4] = v18;
  *((_QWORD *)&src[4] + 1) = v17;
  memcpy(&src[5], v86, 0x1D0uLL);
  v20 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  memmove((void *)(*((_QWORD *)&dest[8] + 1) + 592 * v20), src, 0x250uLL);
  *(_QWORD *)&dest[9] = v20 + 1;
  memcpy(src, dest, 0x2C8uLL);
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
  *(_QWORD *)&dest[33] = aIso8601;
  *((_QWORD *)&dest[33] + 1) = 8LL;
  *(_QWORD *)&dest[36] = 0x11000000000049LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&dest[34] = aIso8601;
  *(_OWORD *)((char *)&dest[34] + 8) = 8uLL;
  *(_QWORD *)&v89[0] = aFmt;
  *((_QWORD *)&v89[0] + 1) = 3LL;
  clap_builder::builder::arg::Arg::value_names(v86, dest);
  v21 = _rust_alloc(360LL, 8LL);
  if ( !v21 )
    alloc::raw_vec::handle_error(8LL, 360LL);
  *(_QWORD *)v21 = 0LL;
  *(_QWORD *)(v21 + 8) = 8LL;
  *(_QWORD *)(v21 + 16) = 0LL;
  *(_QWORD *)(v21 + 24) = 0x8000000000000000LL;
  *(_QWORD *)(v21 + 48) = "datethur]";
  *(_QWORD *)(v21 + 56) = 4LL;
  *(_BYTE *)(v21 + 64) = 0;
  *(_QWORD *)(v21 + 72) = 0LL;
  *(_QWORD *)(v21 + 80) = 8LL;
  *(_QWORD *)(v21 + 88) = 0LL;
  *(_QWORD *)(v21 + 96) = 0x8000000000000000LL;
  *(_QWORD *)(v21 + 120) = aHours;
  *(_QWORD *)(v21 + 128) = 5LL;
  *(_BYTE *)(v21 + 136) = 0;
  *(_QWORD *)(v21 + 144) = 0LL;
  *(_QWORD *)(v21 + 152) = 8LL;
  *(_QWORD *)(v21 + 160) = 0LL;
  *(_QWORD *)(v21 + 168) = 0x8000000000000000LL;
  *(_QWORD *)(v21 + 192) = aMinutes;
  *(_QWORD *)(v21 + 200) = 7LL;
  *(_BYTE *)(v21 + 208) = 0;
  *(_QWORD *)(v21 + 216) = 0LL;
  *(_QWORD *)(v21 + 224) = 8LL;
  *(_QWORD *)(v21 + 232) = 0LL;
  *(_QWORD *)(v21 + 240) = 0x8000000000000000LL;
  *(_QWORD *)(v21 + 264) = aSeconds;
  *(_QWORD *)(v21 + 272) = 7LL;
  *(_BYTE *)(v21 + 280) = 0;
  *(_QWORD *)(v21 + 288) = 0LL;
  *(_QWORD *)(v21 + 296) = 8LL;
  *(_QWORD *)(v21 + 304) = 0LL;
  *(_QWORD *)(v21 + 312) = 0x8000000000000000LL;
  *(_QWORD *)(v21 + 336) = aNs;
  *(_QWORD *)(v21 + 344) = 2LL;
  *(_BYTE *)(v21 + 352) = 0;
  *(_QWORD *)&dest[0] = 5LL;
  *((_QWORD *)&dest[0] + 1) = v21;
  *(_QWORD *)&dest[1] = 5LL;
  clap_builder::builder::arg::Arg::value_parser(v89, v86);
  v89[1] = 1uLL;
  *(_QWORD *)&v89[2] = 1LL;
  memcpy(dest, v89, 0x250uLL);
  v22 = (_QWORD *)_rust_alloc(16LL, 8LL);
  if ( !v22 )
    alloc::raw_vec::handle_error(8LL, 16LL);
  v23 = v22;
  *v22 = "datethur]";
  v22[1] = 4LL;
  if ( *(_QWORD *)&dest[26] )
    _rust_dealloc(*((_QWORD *)&dest[26] + 1), 16LL * *(_QWORD *)&dest[26], 8LL);
  *(_QWORD *)&dest[26] = 1LL;
  *((_QWORD *)&dest[26] + 1) = v23;
  *(_QWORD *)&dest[27] = 1LL;
  memcpy(v86, dest, sizeof(v86));
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 200LL);
  v24 = *(_QWORD *)&dest[1];
  memcpy((void *)(*(_QWORD *)&dest[1] + *((_QWORD *)&dest[0] + 1)), aOutputDateTime, 0xC8uLL);
  *(_QWORD *)&dest[1] = v24 + 200;
  v25 = *(_QWORD *)&dest[0];
  v89[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v89[0];
  if ( *((_QWORD *)&v86[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&v86[27] + 1) )
    _rust_dealloc(*(_QWORD *)&v86[28], *((_QWORD *)&v86[27] + 1), 1LL);
  *((_QWORD *)&v86[27] + 1) = v25;
  v86[28] = dest[0];
  v26 = *(_QWORD *)&v86[0];
  v27 = *((_QWORD *)&v86[4] + 1);
  v28 = *(_QWORD *)&v86[4];
  memcpy(v89, &v86[5], 0x1D0uLL);
  if ( *(_QWORD *)&src[1] && (*(_QWORD *)&v86[34] || LODWORD(v86[36]) != 1114112) )
  {
    v29 = *((_QWORD *)&v86[0] + 1);
    if ( !*(_QWORD *)&v86[0] )
      v29 = *((_QWORD *)&src[1] + 1);
    ++*((_QWORD *)&src[1] + 1);
    v26 = (*(_QWORD *)&v86[0] == 0LL) + *(_QWORD *)&v86[0];
  }
  else
  {
    v29 = *((_QWORD *)&v86[0] + 1);
  }
  if ( !*((_QWORD *)&v86[3] + 1) )
  {
    v27 = *((_QWORD *)&src[40] + 1);
    v28 = *(_QWORD *)&src[40];
  }
  *(_QWORD *)&dest[0] = v26;
  *((_QWORD *)&dest[0] + 1) = v29;
  dest[1] = v86[1];
  dest[2] = v86[2];
  *(_QWORD *)&dest[3] = *(_QWORD *)&v86[3];
  *((_QWORD *)&dest[3] + 1) = (*((_QWORD *)&v86[3] + 1) == 0LL) + *((_QWORD *)&v86[3] + 1);
  *(_QWORD *)&dest[4] = v28;
  *((_QWORD *)&dest[4] + 1) = v27;
  memcpy(&dest[5], v89, 0x1D0uLL);
  *(_QWORD *)&dest[34] = *(_QWORD *)&v86[34];
  *(_OWORD *)((char *)&dest[34] + 8) = *(_OWORD *)((char *)&v86[34] + 8);
  *((_QWORD *)&dest[35] + 1) = *((_QWORD *)&v86[35] + 1);
  dest[36] = v86[36];
  v30 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[9] == *(_QWORD *)&src[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[8]);
  memmove((void *)(*((_QWORD *)&src[8] + 1) + 592 * v30), dest, 0x250uLL);
  *(_QWORD *)&src[9] = v30 + 1;
  memcpy(dest, src, 0x2C8uLL);
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
  *(_QWORD *)&src[33] = aRfcEmail_0;
  *((_QWORD *)&src[33] + 1) = 9LL;
  *(_QWORD *)&src[36] = 0x11000000000052LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&src[34] = aRfcEmail_0;
  *(_OWORD *)((char *)&src[34] + 8) = 9uLL;
  *(_QWORD *)&v86[0] = 0LL;
  *((_QWORD *)&v86[0] + 1) = 1LL;
  *(_QWORD *)&v86[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v86, 0LL, 82LL);
  v31 = *((_QWORD *)&v86[0] + 1);
  v32 = *(_QWORD *)&v86[1];
  *(_OWORD *)(*((_QWORD *)&v86[0] + 1) + *(_QWORD *)&v86[1] + 64LL) = unk_6B648;
  qmemcpy((void *)(v31 + v32), "output date and time in RFC 5322 format.\n Example: Mon, 14 Aug 2", 64);
  *(_WORD *)(v31 + v32 + 80) = 12336;
  *(_QWORD *)&v86[1] = v32 + 82;
  v33 = *(_QWORD *)&v86[0];
  v89[0] = *(_OWORD *)((char *)v86 + 8);
  if ( *(_QWORD *)&v86[0] != 0x8000000000000000LL )
    v86[0] = v89[0];
  *((_QWORD *)&src[27] + 1) = v33;
  src[28] = v86[0];
  v35 = *((_QWORD *)&src[0] + 1);
  v34 = *(_QWORD *)&src[0];
  v89[0] = src[1];
  v89[1] = src[2];
  *(_QWORD *)&v89[2] = *(_QWORD *)&src[3];
  v36 = *((_QWORD *)&src[4] + 1);
  v88 = *(_QWORD *)&src[4];
  memcpy(v86, &src[5], 0x1D0uLL);
  if ( *(_QWORD *)&dest[1] && (*(_QWORD *)&src[34] || LODWORD(src[36]) != 1114112) )
  {
    if ( !*(_QWORD *)&src[0] )
      v35 = *((_QWORD *)&dest[1] + 1);
    ++*((_QWORD *)&dest[1] + 1);
    v34 = (*(_QWORD *)&src[0] == 0LL) + *(_QWORD *)&src[0];
  }
  v37 = v88;
  if ( !*((_QWORD *)&src[3] + 1) )
  {
    v36 = *((_QWORD *)&dest[40] + 1);
    v37 = *(_QWORD *)&dest[40];
  }
  *(_QWORD *)&src[0] = v34;
  *((_QWORD *)&src[0] + 1) = v35;
  src[1] = v89[0];
  src[2] = v89[1];
  *(_QWORD *)&src[3] = *(_QWORD *)&v89[2];
  *((_QWORD *)&src[3] + 1) += *((_QWORD *)&src[3] + 1) == 0LL;
  *(_QWORD *)&src[4] = v37;
  *((_QWORD *)&src[4] + 1) = v36;
  memcpy(&src[5], v86, 0x1D0uLL);
  BYTE12(src[36]) = 2;
  v38 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  memmove((void *)(*((_QWORD *)&dest[8] + 1) + 592 * v38), src, 0x250uLL);
  *(_QWORD *)&dest[9] = v38 + 1;
  memcpy(src, dest, 0x2C8uLL);
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
  *(_QWORD *)&dest[33] = aRfc3339;
  *((_QWORD *)&dest[33] + 1) = 8LL;
  *(_QWORD *)&dest[34] = aRfc3339;
  *(_OWORD *)((char *)&dest[34] + 8) = 8uLL;
  *(_QWORD *)&dest[36] = 0x11000000110000LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v89[0] = aFmt;
  *((_QWORD *)&v89[0] + 1) = 3LL;
  clap_builder::builder::arg::Arg::value_names(v86, dest);
  v39 = _rust_alloc(216LL, 8LL);
  if ( !v39 )
    alloc::raw_vec::handle_error(8LL, 216LL);
  *(_QWORD *)v39 = 0LL;
  *(_QWORD *)(v39 + 8) = 8LL;
  *(_QWORD *)(v39 + 16) = 0LL;
  *(_QWORD *)(v39 + 24) = 0x8000000000000000LL;
  *(_QWORD *)(v39 + 48) = "datethur]";
  *(_QWORD *)(v39 + 56) = 4LL;
  *(_BYTE *)(v39 + 64) = 0;
  *(_QWORD *)(v39 + 72) = 0LL;
  *(_QWORD *)(v39 + 80) = 8LL;
  *(_QWORD *)(v39 + 88) = 0LL;
  *(_QWORD *)(v39 + 96) = 0x8000000000000000LL;
  *(_QWORD *)(v39 + 120) = aSeconds;
  *(_QWORD *)(v39 + 128) = 7LL;
  *(_BYTE *)(v39 + 136) = 0;
  *(_QWORD *)(v39 + 144) = 0LL;
  *(_QWORD *)(v39 + 152) = 8LL;
  *(_QWORD *)(v39 + 160) = 0LL;
  *(_QWORD *)(v39 + 168) = 0x8000000000000000LL;
  *(_QWORD *)(v39 + 192) = aNs;
  *(_QWORD *)(v39 + 200) = 2LL;
  *(_BYTE *)(v39 + 208) = 0;
  *(_QWORD *)&v89[0] = 3LL;
  *((_QWORD *)&v89[0] + 1) = v39;
  *(_QWORD *)&v89[1] = 3LL;
  clap_builder::builder::arg::Arg::value_parser(dest, v86);
  *(_QWORD *)&v86[0] = 0LL;
  *((_QWORD *)&v86[0] + 1) = 1LL;
  *(_QWORD *)&v86[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v86, 0LL, 151LL);
  v40 = *(_QWORD *)&v86[1];
  memcpy((void *)(*(_QWORD *)&v86[1] + *((_QWORD *)&v86[0] + 1)), aOutputDateTime_0, 0x97uLL);
  *(_QWORD *)&v86[1] = v40 + 151;
  v41 = *(_QWORD *)&v86[0];
  v89[0] = *(_OWORD *)((char *)v86 + 8);
  if ( *(_QWORD *)&v86[0] != 0x8000000000000000LL )
    v86[0] = v89[0];
  if ( *((_QWORD *)&dest[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&dest[27] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[28], *((_QWORD *)&dest[27] + 1), 1LL);
  *((_QWORD *)&dest[27] + 1) = v41;
  dest[28] = v86[0];
  v42 = *(_QWORD *)&dest[0];
  v89[0] = dest[1];
  v89[1] = dest[2];
  *(_QWORD *)&v89[2] = *(_QWORD *)&dest[3];
  v43 = *((_QWORD *)&dest[4] + 1);
  v44 = *(_QWORD *)&dest[4];
  memcpy(v86, &dest[5], 0x1D0uLL);
  if ( *(_QWORD *)&src[1] && (*(_QWORD *)&dest[34] || LODWORD(dest[36]) != 1114112) )
  {
    v45 = *((_QWORD *)&dest[0] + 1);
    if ( !*(_QWORD *)&dest[0] )
      v45 = *((_QWORD *)&src[1] + 1);
    ++*((_QWORD *)&src[1] + 1);
    v42 = (*(_QWORD *)&dest[0] == 0LL) + *(_QWORD *)&dest[0];
  }
  else
  {
    v45 = *((_QWORD *)&dest[0] + 1);
  }
  if ( !*((_QWORD *)&dest[3] + 1) )
  {
    v43 = *((_QWORD *)&src[40] + 1);
    v44 = *(_QWORD *)&src[40];
  }
  *(_QWORD *)&dest[0] = v42;
  *((_QWORD *)&dest[0] + 1) = v45;
  dest[1] = v89[0];
  dest[2] = v89[1];
  *(_QWORD *)&dest[3] = *(_QWORD *)&v89[2];
  *((_QWORD *)&dest[3] + 1) += *((_QWORD *)&dest[3] + 1) == 0LL;
  *(_QWORD *)&dest[4] = v44;
  *((_QWORD *)&dest[4] + 1) = v43;
  memcpy(&dest[5], v86, 0x1D0uLL);
  v46 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[9] == *(_QWORD *)&src[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[8]);
  memmove((void *)(*((_QWORD *)&src[8] + 1) + 592 * v46), dest, 0x250uLL);
  *(_QWORD *)&src[9] = v46 + 1;
  memcpy(dest, src, 0x2C8uLL);
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
  *(_QWORD *)&src[33] = aDebug;
  *((_QWORD *)&src[33] + 1) = 5LL;
  *(_QWORD *)&src[34] = aDebug;
  *(_OWORD *)((char *)&src[34] + 8) = 5uLL;
  *(_QWORD *)&src[36] = 0x11000000110000LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v86[0] = 0LL;
  *((_QWORD *)&v86[0] + 1) = 1LL;
  *(_QWORD *)&v86[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v86, 0LL, 69LL);
  v47 = *((_QWORD *)&v86[0] + 1);
  v48 = *(_QWORD *)&v86[1];
  *(_OWORD *)(*((_QWORD *)&v86[0] + 1) + *(_QWORD *)&v86[1] + 48LL) = unk_6B843;
  qmemcpy((void *)(v47 + v48), "annotate the parsed date, and warn about questio", 48);
  *(_QWORD *)(v47 + v48 + 61) = 0x727265647473206FLL;
  *(_QWORD *)&v86[1] = v48 + 69;
  v49 = *(_QWORD *)&v86[0];
  v89[0] = *(_OWORD *)((char *)v86 + 8);
  if ( *(_QWORD *)&v86[0] != 0x8000000000000000LL )
    v86[0] = v89[0];
  *((_QWORD *)&src[27] + 1) = v49;
  src[28] = v86[0];
  v50 = *(_QWORD *)&src[0];
  v89[0] = src[1];
  v89[1] = src[2];
  *(_QWORD *)&v89[2] = *(_QWORD *)&src[3];
  v51 = *((_QWORD *)&src[4] + 1);
  v52 = *(_QWORD *)&src[4];
  memcpy(v86, &src[5], 0x1D0uLL);
  if ( !*(_QWORD *)&dest[1] )
  {
    v53 = src[36];
LABEL_100:
    v54 = *((_QWORD *)&src[0] + 1);
    goto LABEL_101;
  }
  v53 = src[36];
  if ( !*(_QWORD *)&src[34] && LODWORD(src[36]) == 1114112 )
    goto LABEL_100;
  v54 = *((_QWORD *)&src[0] + 1);
  if ( !*(_QWORD *)&src[0] )
    v54 = *((_QWORD *)&dest[1] + 1);
  ++*((_QWORD *)&dest[1] + 1);
  v50 = (*(_QWORD *)&src[0] == 0LL) + *(_QWORD *)&src[0];
LABEL_101:
  if ( !*((_QWORD *)&src[3] + 1) )
  {
    v51 = *((_QWORD *)&dest[40] + 1);
    v52 = *(_QWORD *)&dest[40];
  }
  *(_QWORD *)&src[0] = v50;
  *((_QWORD *)&src[0] + 1) = v54;
  src[1] = v89[0];
  src[2] = v89[1];
  *(_QWORD *)&src[3] = *(_QWORD *)&v89[2];
  *((_QWORD *)&src[3] + 1) += *((_QWORD *)&src[3] + 1) == 0LL;
  *(_QWORD *)&src[4] = v52;
  *((_QWORD *)&src[4] + 1) = v51;
  memcpy(&src[5], v86, 0x1D0uLL);
  LODWORD(src[36]) = v53;
  BYTE12(src[36]) = 2;
  v55 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  memmove((void *)(*((_QWORD *)&dest[8] + 1) + 592 * v55), src, 0x250uLL);
  *(_QWORD *)&dest[9] = v55 + 1;
  memcpy(src, dest, 0x2C8uLL);
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
  *(_QWORD *)&dest[33] = aReference;
  *((_QWORD *)&dest[33] + 1) = 9LL;
  *(_QWORD *)&dest[36] = 0x11000000000072LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&dest[34] = aReference;
  *(_OWORD *)((char *)&dest[34] + 8) = 9uLL;
  *(_QWORD *)&v89[0] = aFile;
  *((_QWORD *)&v89[0] + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v86, dest);
  BYTE13(v86[36]) = 2;
  memcpy(dest, v86, 0x250uLL);
  *(_QWORD *)&v86[0] = 0LL;
  *((_QWORD *)&v86[0] + 1) = 1LL;
  *(_QWORD *)&v86[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v86, 0LL, 42LL);
  v56 = *((_QWORD *)&v86[0] + 1);
  v57 = *(_QWORD *)&v86[1];
  *(_OWORD *)(*((_QWORD *)&v86[0] + 1) + *(_QWORD *)&v86[1] + 26LL) = unk_6B87B;
  qmemcpy((void *)(v56 + v57), "display the last modification ti", 32);
  *(_QWORD *)&v86[1] = v57 + 42;
  v58 = *(_QWORD *)&v86[0];
  v89[0] = *(_OWORD *)((char *)v86 + 8);
  if ( *(_QWORD *)&v86[0] != 0x8000000000000000LL )
    v86[0] = v89[0];
  if ( *((_QWORD *)&dest[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&dest[27] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[28], *((_QWORD *)&dest[27] + 1), 1LL);
  *((_QWORD *)&dest[27] + 1) = v58;
  dest[28] = v86[0];
  v59 = *(_QWORD *)&dest[0];
  v89[0] = dest[1];
  v89[1] = dest[2];
  *(_QWORD *)&v89[2] = *(_QWORD *)&dest[3];
  v60 = *((_QWORD *)&dest[4] + 1);
  v61 = *(_QWORD *)&dest[4];
  memcpy(v86, &dest[5], 0x1D0uLL);
  if ( *(_QWORD *)&src[1] && (*(_QWORD *)&dest[34] || LODWORD(dest[36]) != 1114112) )
  {
    v62 = *((_QWORD *)&dest[0] + 1);
    if ( !*(_QWORD *)&dest[0] )
      v62 = *((_QWORD *)&src[1] + 1);
    ++*((_QWORD *)&src[1] + 1);
    v59 = (*(_QWORD *)&dest[0] == 0LL) + *(_QWORD *)&dest[0];
  }
  else
  {
    v62 = *((_QWORD *)&dest[0] + 1);
  }
  if ( !*((_QWORD *)&dest[3] + 1) )
  {
    v60 = *((_QWORD *)&src[40] + 1);
    v61 = *(_QWORD *)&src[40];
  }
  *(_QWORD *)&dest[0] = v59;
  *((_QWORD *)&dest[0] + 1) = v62;
  dest[1] = v89[0];
  dest[2] = v89[1];
  *(_QWORD *)&dest[3] = *(_QWORD *)&v89[2];
  *((_QWORD *)&dest[3] + 1) += *((_QWORD *)&dest[3] + 1) == 0LL;
  *(_QWORD *)&dest[4] = v61;
  *((_QWORD *)&dest[4] + 1) = v60;
  memcpy(&dest[5], v86, 0x1D0uLL);
  v63 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[9] == *(_QWORD *)&src[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[8]);
  memmove((void *)(*((_QWORD *)&src[8] + 1) + 592 * v63), dest, 0x250uLL);
  *(_QWORD *)&src[9] = v63 + 1;
  memcpy(dest, src, 0x2C8uLL);
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
  *(_QWORD *)&src[33] = aSet_0;
  *((_QWORD *)&src[33] + 1) = 3LL;
  *(_QWORD *)&src[36] = 0x11000000000073LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&src[34] = aSet_0;
  *(_OWORD *)((char *)&src[34] + 8) = 3uLL;
  *(_QWORD *)&v89[0] = aString;
  *((_QWORD *)&v89[0] + 1) = 6LL;
  clap_builder::builder::arg::Arg::value_names(v86, src);
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 28LL);
  v64 = *((_QWORD *)&src[0] + 1);
  v65 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 12LL) = unk_6B6FD;
  *(_OWORD *)(v64 + v65) = unk_6B6F1;
  *(_QWORD *)&src[1] = v65 + 28;
  v66 = *(_QWORD *)&src[0];
  v89[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v89[0];
  if ( *((_QWORD *)&v86[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&v86[27] + 1) )
    _rust_dealloc(*(_QWORD *)&v86[28], *((_QWORD *)&v86[27] + 1), 1LL);
  *((_QWORD *)&v86[27] + 1) = v66;
  v86[28] = src[0];
  v67 = *(_QWORD *)&v86[0];
  v68 = *((_QWORD *)&v86[4] + 1);
  v69 = *(_QWORD *)&v86[4];
  memcpy(v89, &v86[5], 0x1D0uLL);
  if ( *(_QWORD *)&dest[1] && (*(_QWORD *)&v86[34] || LODWORD(v86[36]) != 1114112) )
  {
    v70 = *((_QWORD *)&v86[0] + 1);
    if ( !*(_QWORD *)&v86[0] )
      v70 = *((_QWORD *)&dest[1] + 1);
    ++*((_QWORD *)&dest[1] + 1);
    v67 = (*(_QWORD *)&v86[0] == 0LL) + *(_QWORD *)&v86[0];
  }
  else
  {
    v70 = *((_QWORD *)&v86[0] + 1);
  }
  if ( !*((_QWORD *)&v86[3] + 1) )
  {
    v68 = *((_QWORD *)&dest[40] + 1);
    v69 = *(_QWORD *)&dest[40];
  }
  *(_QWORD *)&src[0] = v67;
  *((_QWORD *)&src[0] + 1) = v70;
  src[1] = v86[1];
  src[2] = v86[2];
  *(_QWORD *)&src[3] = *(_QWORD *)&v86[3];
  *((_QWORD *)&src[3] + 1) = (*((_QWORD *)&v86[3] + 1) == 0LL) + *((_QWORD *)&v86[3] + 1);
  *(_QWORD *)&src[4] = v69;
  *((_QWORD *)&src[4] + 1) = v68;
  memcpy(&src[5], v89, 0x1D0uLL);
  *(_QWORD *)&src[34] = *(_QWORD *)&v86[34];
  *(_OWORD *)((char *)&src[34] + 8) = *(_OWORD *)((char *)&v86[34] + 8);
  *((_QWORD *)&src[35] + 1) = *((_QWORD *)&v86[35] + 1);
  src[36] = v86[36];
  v71 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  memmove((void *)(*((_QWORD *)&dest[8] + 1) + 592 * v71), src, 0x250uLL);
  *(_QWORD *)&dest[9] = v71 + 1;
  memcpy(src, dest, 0x2C8uLL);
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
  *(_QWORD *)&dest[33] = aUniversal_0;
  *((_QWORD *)&dest[33] + 1) = 9LL;
  *(_QWORD *)&dest[36] = 0x11000000000075LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&dest[34] = aUniversal_0;
  *(_OWORD *)((char *)&dest[34] + 8) = 9uLL;
  alloc::raw_vec::RawVec<T,A>::grow_one((char *)&dest[18] + 8);
  v72 = *(_QWORD *)&dest[19];
  **(_QWORD **)&dest[19] = &unk_6B897;
  *(_QWORD *)(v72 + 8) = 3LL;
  *(_BYTE *)(v72 + 16) = 0;
  *((_QWORD *)&dest[19] + 1) = 1LL;
  memcpy(v86, dest, sizeof(v86));
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 45LL);
  v73 = *((_QWORD *)&dest[0] + 1);
  v74 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 29LL) = unk_6B8B7;
  qmemcpy((void *)(v73 + v74), "print or set Coordinated Univers", 32);
  *(_QWORD *)&dest[1] = v74 + 45;
  v75 = *(_QWORD *)&dest[0];
  v89[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v89[0];
  if ( *((_QWORD *)&v86[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&v86[27] + 1) )
    _rust_dealloc(*(_QWORD *)&v86[28], *((_QWORD *)&v86[27] + 1), 1LL);
  *((_QWORD *)&v86[27] + 1) = v75;
  v86[28] = dest[0];
  v76 = *(_QWORD *)&v86[0];
  v77 = *((_QWORD *)&v86[4] + 1);
  v78 = *(_QWORD *)&v86[4];
  memcpy(v89, &v86[5], 0x1D0uLL);
  if ( *(_QWORD *)&src[1] && (*(_QWORD *)&v86[34] || LODWORD(v86[36]) != 1114112) )
  {
    v79 = *((_QWORD *)&v86[0] + 1);
    if ( !*(_QWORD *)&v86[0] )
      v79 = *((_QWORD *)&src[1] + 1);
    ++*((_QWORD *)&src[1] + 1);
    v76 = (*(_QWORD *)&v86[0] == 0LL) + *(_QWORD *)&v86[0];
  }
  else
  {
    v79 = *((_QWORD *)&v86[0] + 1);
  }
  if ( !*((_QWORD *)&v86[3] + 1) )
  {
    v77 = *((_QWORD *)&src[40] + 1);
    v78 = *(_QWORD *)&src[40];
  }
  *(_QWORD *)&dest[0] = v76;
  *((_QWORD *)&dest[0] + 1) = v79;
  dest[1] = v86[1];
  dest[2] = v86[2];
  *(_QWORD *)&dest[3] = *(_QWORD *)&v86[3];
  *((_QWORD *)&dest[3] + 1) = (*((_QWORD *)&v86[3] + 1) == 0LL) + *((_QWORD *)&v86[3] + 1);
  *(_QWORD *)&dest[4] = v78;
  *((_QWORD *)&dest[4] + 1) = v77;
  memcpy(&dest[5], v89, 0x1D0uLL);
  *(_QWORD *)&dest[34] = *(_QWORD *)&v86[34];
  *(_OWORD *)((char *)&dest[34] + 8) = *(_OWORD *)((char *)&v86[34] + 8);
  *((_QWORD *)&dest[35] + 1) = *((_QWORD *)&v86[35] + 1);
  LODWORD(dest[36]) = v86[36];
  *(_QWORD *)((char *)&dest[36] + 4) = *(_QWORD *)((char *)&v86[36] + 4);
  BYTE12(dest[36]) = 2;
  *(_WORD *)((char *)&dest[36] + 13) = *(_WORD *)((char *)&v86[36] + 13);
  HIBYTE(dest[36]) = HIBYTE(v86[36]);
  v80 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[9] == *(_QWORD *)&src[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[8]);
  memmove((void *)(*((_QWORD *)&src[8] + 1) + 592 * v80), dest, 0x250uLL);
  *(_QWORD *)&src[9] = v80 + 1;
  memcpy(dest, src, 0x2C8uLL);
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
  *((_QWORD *)&src[3] + 1) = 1LL;
  src[4] = dest[40];
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
  *(_QWORD *)&src[33] = aFormat_0;
  *((_QWORD *)&src[33] + 1) = 6LL;
  *(_QWORD *)&src[34] = 0LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000110000LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  v81 = *(_QWORD *)&dest[9];
  v82 = v87;
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  memmove((void *)(*((_QWORD *)&dest[8] + 1) + 592 * v81), src, 0x250uLL);
  *(_QWORD *)&dest[9] = v81 + 1;
  memcpy(v82, dest, 0x2C8uLL);
  return v82;
}
