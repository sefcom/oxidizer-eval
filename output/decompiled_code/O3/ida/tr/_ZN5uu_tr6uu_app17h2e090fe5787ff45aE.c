void *__fastcall uu_tr::uu_app(void *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r14
  __int64 v24; // rbp
  __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rbx
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r14
  __int64 v34; // rbp
  __int64 v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r14
  __int64 v45; // r13
  __int64 v46; // rbx
  __int64 v47; // rsi
  __int64 v48; // rbx
  __int64 v49; // rbx
  void *v50; // rbx
  _OWORD dest[45]; // [rsp+70h] [rbp-9F8h] BYREF
  _BYTE src[712]; // [rsp+340h] [rbp-728h] BYREF
  void *v54; // [rsp+608h] [rbp-460h]
  _BYTE v55[592]; // [rsp+610h] [rbp-458h] BYREF
  _OWORD v56[29]; // [rsp+860h] [rbp-208h] BYREF

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  *(_OWORD *)&src[72] = 0LL;
  *(_OWORD *)&src[96] = 0LL;
  *(_OWORD *)&src[144] = 0LL;
  *(_OWORD *)&src[168] = 0LL;
  *(_OWORD *)&src[192] = 0LL;
  *(_OWORD *)&src[240] = 0LL;
  *(_QWORD *)src = 0LL;
  *(_OWORD *)&src[16] = 1uLL;
  *(_QWORD *)&src[32] = 5LL;
  *(_QWORD *)&src[56] = 0LL;
  *(_QWORD *)&src[64] = 8LL;
  *(_QWORD *)&src[88] = 4LL;
  *(_QWORD *)&src[112] = 8LL;
  *(_OWORD *)&src[120] = 0LL;
  *(_QWORD *)&src[136] = 8LL;
  *(_QWORD *)&src[160] = 8LL;
  *(_QWORD *)&src[184] = 8LL;
  *(_QWORD *)&src[208] = 8LL;
  *(_OWORD *)&src[216] = 0LL;
  *(_QWORD *)&src[232] = 8LL;
  *(_QWORD *)&src[256] = 8LL;
  *(_QWORD *)&src[264] = 0LL;
  *(_QWORD *)&src[272] = 0x8000000000000000LL;
  *(_QWORD *)&src[296] = 0x8000000000000000LL;
  *(_QWORD *)&src[320] = 0x8000000000000000LL;
  *(_QWORD *)&src[344] = 0x8000000000000000LL;
  *(_QWORD *)&src[368] = 0x8000000000000000LL;
  *(_QWORD *)&src[392] = 0x8000000000000000LL;
  *(_QWORD *)&src[416] = 0x8000000000000000LL;
  *(_QWORD *)&src[440] = 0x8000000000000000LL;
  *(_QWORD *)&src[464] = 0x8000000000000000LL;
  *(_QWORD *)&src[488] = 0x8000000000000000LL;
  *(_QWORD *)&src[512] = 0x8000000000000000LL;
  *(_QWORD *)&src[536] = 0x8000000000000000LL;
  *(_OWORD *)&src[560] = xmmword_F31B8;
  *(_QWORD *)&src[576] = 0LL;
  *(_QWORD *)&src[592] = 0LL;
  *(_QWORD *)&src[608] = a0027;
  *(_QWORD *)&src[616] = 6LL;
  *(_QWORD *)&src[624] = 0LL;
  *(_QWORD *)&src[640] = 0LL;
  *(_QWORD *)&src[656] = 0LL;
  *(_QWORD *)&src[672] = 0LL;
  *(_QWORD *)&src[688] = 0LL;
  *(_DWORD *)&src[696] = 1114112;
  src[708] = 0;
  *(_QWORD *)&src[700] = 0LL;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 30LL);
  v1 = *((_QWORD *)&dest[0] + 1);
  v2 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 14LL) = *(__int128 *)((char *)&xmmword_1A4FA + 14);
  *(_OWORD *)(v1 + v2) = xmmword_1A4FA;
  *(_QWORD *)&dest[1] = v2 + 30;
  v3 = *(_QWORD *)&dest[0];
  *(_OWORD *)v55 = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = *(_OWORD *)v55;
  *(_QWORD *)&src[320] = v3;
  *(_OWORD *)&src[328] = dest[0];
  memcpy(dest, src, 0x2C8uLL);
  uucore::format_usage(v55, aOptionSet1Set2, 26LL);
  v4 = *(_QWORD *)v55;
  if ( *(_QWORD *)v55 != 0x8000000000000000LL )
    *(_OWORD *)src = *(_OWORD *)&v55[8];
  if ( *(_QWORD *)&dest[29] != 0x8000000000000000LL && *(_QWORD *)&dest[29] )
    _rust_dealloc(*((_QWORD *)&dest[29] + 1), *(_QWORD *)&dest[29], 1LL);
  *(_QWORD *)&dest[29] = v4;
  *(_OWORD *)((char *)&dest[29] + 8) = *(_OWORD *)src;
  memcpy(src, dest, 0x2BCuLL);
  *(_QWORD *)&src[700] = *(_QWORD *)((char *)&dest[43] + 12) | 0x80000000A0LL;
  *(_DWORD *)&src[708] = DWORD1(dest[44]);
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  dest[7] = 8uLL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = aComplement_0;
  *((_QWORD *)&dest[33] + 1) = 10LL;
  *(_QWORD *)&dest[34] = 0LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000110000LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  alloc::raw_vec::RawVec<T,A>::grow_one(&dest[20]);
  v5 = *((_QWORD *)&dest[20] + 1);
  **((_DWORD **)&dest[20] + 1) = 67;
  *(_BYTE *)(v5 + 4) = 1;
  *(_QWORD *)&dest[21] = 1LL;
  memcpy(v55, dest, 0x220uLL);
  *(_OWORD *)&v55[560] = dest[35];
  *(_QWORD *)&v55[580] = *(_QWORD *)((char *)&dest[36] + 4);
  *(_DWORD *)&v55[588] = HIDWORD(dest[36]);
  *(_QWORD *)&v55[544] = aComplement_0;
  *(_QWORD *)&v55[552] = 10LL;
  *(_DWORD *)&v55[576] = 99;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 26LL);
  v6 = *((_QWORD *)&dest[0] + 1);
  v7 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 10LL) = *(__int128 *)((char *)&xmmword_1A53C + 10);
  *(_OWORD *)(v6 + v7) = xmmword_1A53C;
  *(_QWORD *)&dest[1] = v7 + 26;
  v8 = *(_QWORD *)&dest[0];
  v56[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v56[0];
  if ( *(_QWORD *)&v55[440] != 0x8000000000000000LL && *(_QWORD *)&v55[440] )
    _rust_dealloc(*(_QWORD *)&v55[448], *(_QWORD *)&v55[440], 1LL);
  v54 = a1;
  *(_QWORD *)&v55[440] = v8;
  *(_OWORD *)&v55[448] = dest[0];
  memcpy(dest, v55, 0x24CuLL);
  *(_WORD *)((char *)&dest[36] + 13) = *(_WORD *)&v55[589];
  HIBYTE(dest[36]) = v55[591];
  BYTE12(dest[36]) = 2;
  v9 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  v10 = *((_QWORD *)&dest[8] + 1);
  v11 = 16 * v9;
  *(_QWORD *)(*((_QWORD *)&dest[8] + 1) + v11) = aComplement_0;
  *(_QWORD *)(v10 + v11 + 8) = 10LL;
  *(_QWORD *)&dest[9] = v9 + 1;
  v12 = *(_QWORD *)&dest[0];
  v56[0] = dest[1];
  v56[1] = dest[2];
  *(_QWORD *)&v56[2] = *(_QWORD *)&dest[3];
  v13 = *((_QWORD *)&dest[4] + 1);
  v14 = *(_QWORD *)&dest[4];
  memcpy(v55, &dest[5], 0x1D0uLL);
  if ( *(_QWORD *)&src[16] && (*(_QWORD *)&dest[34] || LODWORD(dest[36]) != 1114112) )
  {
    v15 = *((_QWORD *)&dest[0] + 1);
    if ( !*(_QWORD *)&dest[0] )
      v15 = *(_QWORD *)&src[24];
    ++*(_QWORD *)&src[24];
    v12 = (*(_QWORD *)&dest[0] == 0LL) + *(_QWORD *)&dest[0];
  }
  else
  {
    v15 = *((_QWORD *)&dest[0] + 1);
  }
  if ( !*((_QWORD *)&dest[3] + 1) )
  {
    v14 = *(_QWORD *)&src[640];
    v13 = *(_QWORD *)&src[648];
  }
  *(_QWORD *)&dest[0] = v12;
  *((_QWORD *)&dest[0] + 1) = v15;
  dest[1] = v56[0];
  dest[2] = v56[1];
  *(_QWORD *)&dest[3] = *(_QWORD *)&v56[2];
  *((_QWORD *)&dest[3] + 1) += *((_QWORD *)&dest[3] + 1) == 0LL;
  *(_QWORD *)&dest[4] = v14;
  *((_QWORD *)&dest[4] + 1) = v13;
  memcpy(&dest[5], v55, 0x1D0uLL);
  v16 = *(_QWORD *)&src[144];
  if ( *(_QWORD *)&src[144] == *(_QWORD *)&src[128] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[128]);
  memmove((void *)(*(_QWORD *)&src[136] + 592 * v16), dest, 0x250uLL);
  *(_QWORD *)&src[144] = v16 + 1;
  memcpy(dest, src, 0x2C8uLL);
  *(_OWORD *)&src[120] = 0LL;
  *(_OWORD *)&src[144] = 0LL;
  *(_OWORD *)&src[168] = 0LL;
  *(_OWORD *)&src[192] = 0LL;
  *(_OWORD *)&src[216] = 0LL;
  *(_OWORD *)&src[240] = 0LL;
  *(_OWORD *)&src[264] = 0LL;
  *(_OWORD *)&src[288] = 0LL;
  *(_OWORD *)&src[312] = 0LL;
  *(_OWORD *)&src[336] = 0LL;
  *(_OWORD *)&src[360] = 0LL;
  *(_OWORD *)&src[384] = 0LL;
  *(_OWORD *)&src[408] = 0LL;
  *(_QWORD *)src = 0LL;
  *(_QWORD *)&src[16] = 0LL;
  *(_QWORD *)&src[40] = 0LL;
  *(_QWORD *)&src[56] = 0LL;
  *(_QWORD *)&src[80] = 5LL;
  *(_QWORD *)&src[104] = 0LL;
  *(_QWORD *)&src[112] = 8LL;
  *(_QWORD *)&src[136] = 8LL;
  *(_QWORD *)&src[160] = 8LL;
  *(_QWORD *)&src[184] = 8LL;
  *(_QWORD *)&src[208] = 8LL;
  *(_QWORD *)&src[232] = 8LL;
  *(_QWORD *)&src[256] = 8LL;
  *(_QWORD *)&src[280] = 8LL;
  *(_QWORD *)&src[304] = 8LL;
  *(_QWORD *)&src[328] = 4LL;
  *(_QWORD *)&src[352] = 8LL;
  *(_QWORD *)&src[376] = 8LL;
  *(_QWORD *)&src[400] = 8LL;
  *(_QWORD *)&src[424] = 8LL;
  *(_QWORD *)&src[432] = 0LL;
  *(_QWORD *)&src[440] = 0x8000000000000000LL;
  *(_QWORD *)&src[464] = 0x8000000000000000LL;
  *(_QWORD *)&src[504] = 0x8000000000000001LL;
  *(_QWORD *)&src[528] = aDelete_0;
  *(_QWORD *)&src[536] = 6LL;
  *(_QWORD *)&src[544] = aDelete_0;
  *(_OWORD *)&src[552] = 6uLL;
  *(_QWORD *)&src[576] = 0x11000000000064LL;
  *(_DWORD *)&src[584] = 0;
  *(_WORD *)&src[588] = 3337;
  *(_QWORD *)v55 = 0LL;
  *(_QWORD *)&v55[8] = 1LL;
  *(_QWORD *)&v55[16] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v55, 0LL, 43LL);
  v17 = *(_QWORD *)&v55[8];
  v18 = *(_QWORD *)&v55[16];
  *(_OWORD *)(*(_QWORD *)&v55[8] + *(_QWORD *)&v55[16] + 27LL) = *(__int128 *)((char *)&xmmword_1A56C + 11);
  qmemcpy((void *)(v17 + v18), "delete characters in SET1, do no", 32);
  *(_QWORD *)&v55[16] = v18 + 43;
  v19 = *(_QWORD *)v55;
  v56[0] = *(_OWORD *)&v55[8];
  if ( *(_QWORD *)v55 != 0x8000000000000000LL )
    *(_OWORD *)v55 = v56[0];
  *(_QWORD *)&src[440] = v19;
  *(_OWORD *)&src[448] = *(_OWORD *)v55;
  memcpy(v55, src, 0x24CuLL);
  *(_WORD *)&v55[589] = *(_WORD *)&src[589];
  v55[591] = src[591];
  v55[588] = 2;
  v20 = *(_QWORD *)&v55[144];
  if ( *(_QWORD *)&v55[144] == *(_QWORD *)&v55[128] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v55[128]);
  v21 = *(_QWORD *)&v55[136];
  v22 = 16 * v20;
  *(_QWORD *)(*(_QWORD *)&v55[136] + v22) = aDelete_0;
  *(_QWORD *)(v21 + v22 + 8) = 6LL;
  *(_QWORD *)&v55[144] = v20 + 1;
  v23 = *(_QWORD *)v55;
  v24 = *(_QWORD *)&v55[64];
  v25 = *(_QWORD *)&v55[72];
  memcpy(v56, &v55[80], sizeof(v56));
  if ( *(_QWORD *)&dest[1] && (*(_QWORD *)&v55[544] || *(_DWORD *)&v55[576] != 1114112) )
  {
    v26 = *(_QWORD *)&v55[8];
    if ( !*(_QWORD *)v55 )
      v26 = *((_QWORD *)&dest[1] + 1);
    ++*((_QWORD *)&dest[1] + 1);
    v23 = (*(_QWORD *)v55 == 0LL) + *(_QWORD *)v55;
  }
  else
  {
    v26 = *(_QWORD *)&v55[8];
  }
  if ( !*(_QWORD *)&v55[56] )
  {
    v25 = *((_QWORD *)&dest[40] + 1);
    v24 = *(_QWORD *)&dest[40];
  }
  *(_QWORD *)src = v23;
  *(_QWORD *)&src[8] = v26;
  *(_OWORD *)&src[16] = *(_OWORD *)&v55[16];
  *(_OWORD *)&src[32] = *(_OWORD *)&v55[32];
  *(_QWORD *)&src[48] = *(_QWORD *)&v55[48];
  *(_QWORD *)&src[56] = (*(_QWORD *)&v55[56] == 0LL) + *(_QWORD *)&v55[56];
  *(_QWORD *)&src[64] = v24;
  *(_QWORD *)&src[72] = v25;
  memcpy(&src[80], v56, 0x1D0uLL);
  *(_QWORD *)&src[544] = *(_QWORD *)&v55[544];
  *(_OWORD *)&src[552] = *(_OWORD *)&v55[552];
  *(_QWORD *)&src[568] = *(_QWORD *)&v55[568];
  *(_DWORD *)&src[576] = *(_DWORD *)&v55[576];
  *(_QWORD *)&src[580] = *(_QWORD *)&v55[580];
  *(_DWORD *)&src[588] = *(_DWORD *)&v55[588];
  v27 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  memmove((void *)(*((_QWORD *)&dest[8] + 1) + 592 * v27), src, 0x250uLL);
  *(_QWORD *)&dest[9] = v27 + 1;
  memcpy(src, dest, sizeof(src));
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
  *(_QWORD *)&dest[33] = aSqueezeRepeats_0;
  *((_QWORD *)&dest[33] + 1) = 15LL;
  *(_QWORD *)&dest[34] = aSqueezeRepeats_0;
  *(_OWORD *)((char *)&dest[34] + 8) = 0xFuLL;
  *(_QWORD *)&dest[36] = 0x11000000000073LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)v55 = 0LL;
  *(_QWORD *)&v55[8] = 1LL;
  *(_QWORD *)&v55[16] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v55, 0LL, 130LL);
  v28 = *(_QWORD *)&v55[16];
  memcpy((void *)(*(_QWORD *)&v55[16] + *(_QWORD *)&v55[8]), aReplaceEachSeq, 0x82uLL);
  *(_QWORD *)&v55[16] = v28 + 130;
  v29 = *(_QWORD *)v55;
  v56[0] = *(_OWORD *)&v55[8];
  if ( *(_QWORD *)v55 != 0x8000000000000000LL )
    *(_OWORD *)v55 = v56[0];
  *((_QWORD *)&dest[27] + 1) = v29;
  dest[28] = *(_OWORD *)v55;
  memcpy(v55, dest, 0x24CuLL);
  *(_WORD *)&v55[589] = *(_WORD *)((char *)&dest[36] + 13);
  v55[591] = HIBYTE(dest[36]);
  v55[588] = 2;
  v30 = *(_QWORD *)&v55[144];
  if ( *(_QWORD *)&v55[144] == *(_QWORD *)&v55[128] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v55[128]);
  v31 = *(_QWORD *)&v55[136];
  v32 = 16 * v30;
  *(_QWORD *)(*(_QWORD *)&v55[136] + v32) = aSqueezeRepeats_0;
  *(_QWORD *)(v31 + v32 + 8) = 15LL;
  *(_QWORD *)&v55[144] = v30 + 1;
  v33 = *(_QWORD *)v55;
  v34 = *(_QWORD *)&v55[64];
  v35 = *(_QWORD *)&v55[72];
  memcpy(v56, &v55[80], sizeof(v56));
  if ( *(_QWORD *)&src[16] && (*(_QWORD *)&v55[544] || *(_DWORD *)&v55[576] != 1114112) )
  {
    v36 = *(_QWORD *)&v55[8];
    if ( !*(_QWORD *)v55 )
      v36 = *(_QWORD *)&src[24];
    ++*(_QWORD *)&src[24];
    v33 = (*(_QWORD *)v55 == 0LL) + *(_QWORD *)v55;
  }
  else
  {
    v36 = *(_QWORD *)&v55[8];
  }
  if ( !*(_QWORD *)&v55[56] )
  {
    v34 = *(_QWORD *)&src[640];
    v35 = *(_QWORD *)&src[648];
  }
  *(_QWORD *)&dest[0] = v33;
  *((_QWORD *)&dest[0] + 1) = v36;
  dest[1] = *(_OWORD *)&v55[16];
  dest[2] = *(_OWORD *)&v55[32];
  *(_QWORD *)&dest[3] = *(_QWORD *)&v55[48];
  *((_QWORD *)&dest[3] + 1) = (*(_QWORD *)&v55[56] == 0LL) + *(_QWORD *)&v55[56];
  *(_QWORD *)&dest[4] = v34;
  *((_QWORD *)&dest[4] + 1) = v35;
  memcpy(&dest[5], v56, 0x1D0uLL);
  *(_QWORD *)&dest[34] = *(_QWORD *)&v55[544];
  *(_OWORD *)((char *)&dest[34] + 8) = *(_OWORD *)&v55[552];
  *((_QWORD *)&dest[35] + 1) = *(_QWORD *)&v55[568];
  dest[36] = *(_OWORD *)&v55[576];
  v37 = *(_QWORD *)&src[144];
  if ( *(_QWORD *)&src[144] == *(_QWORD *)&src[128] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[128]);
  memmove((void *)(*(_QWORD *)&src[136] + 592 * v37), dest, 0x250uLL);
  *(_QWORD *)&src[144] = v37 + 1;
  memcpy(dest, src, 0x2C8uLL);
  *(_OWORD *)&src[120] = 0LL;
  *(_OWORD *)&src[144] = 0LL;
  *(_OWORD *)&src[168] = 0LL;
  *(_OWORD *)&src[192] = 0LL;
  *(_OWORD *)&src[216] = 0LL;
  *(_OWORD *)&src[240] = 0LL;
  *(_OWORD *)&src[264] = 0LL;
  *(_OWORD *)&src[288] = 0LL;
  *(_OWORD *)&src[312] = 0LL;
  *(_OWORD *)&src[336] = 0LL;
  *(_OWORD *)&src[360] = 0LL;
  *(_OWORD *)&src[384] = 0LL;
  *(_OWORD *)&src[408] = 0LL;
  *(_QWORD *)src = 0LL;
  *(_QWORD *)&src[16] = 0LL;
  *(_QWORD *)&src[40] = 0LL;
  *(_QWORD *)&src[56] = 0LL;
  *(_QWORD *)&src[80] = 5LL;
  *(_QWORD *)&src[104] = 0LL;
  *(_QWORD *)&src[112] = 8LL;
  *(_QWORD *)&src[136] = 8LL;
  *(_QWORD *)&src[160] = 8LL;
  *(_QWORD *)&src[184] = 8LL;
  *(_QWORD *)&src[208] = 8LL;
  *(_QWORD *)&src[232] = 8LL;
  *(_QWORD *)&src[256] = 8LL;
  *(_QWORD *)&src[280] = 8LL;
  *(_QWORD *)&src[304] = 8LL;
  *(_QWORD *)&src[328] = 4LL;
  *(_QWORD *)&src[352] = 8LL;
  *(_QWORD *)&src[376] = 8LL;
  *(_QWORD *)&src[400] = 8LL;
  *(_QWORD *)&src[424] = 8LL;
  *(_QWORD *)&src[432] = 0LL;
  *(_QWORD *)&src[440] = 0x8000000000000000LL;
  *(_QWORD *)&src[464] = 0x8000000000000000LL;
  *(_QWORD *)&src[504] = 0x8000000000000001LL;
  *(_QWORD *)&src[528] = aTruncateSet1_0;
  *(_QWORD *)&src[536] = 13LL;
  *(_QWORD *)&src[544] = aTruncateSet1_0;
  *(_OWORD *)&src[552] = 0xDuLL;
  *(_QWORD *)&src[576] = 0x11000000000074LL;
  *(_DWORD *)&src[584] = 0;
  *(_WORD *)&src[588] = 3337;
  *(_QWORD *)v55 = 0LL;
  *(_QWORD *)&v55[8] = 1LL;
  *(_QWORD *)&v55[16] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v55, 0LL, 37LL);
  v38 = *(_QWORD *)&v55[8];
  v39 = *(_QWORD *)&v55[16];
  *(_OWORD *)(*(_QWORD *)&v55[8] + *(_QWORD *)&v55[16] + 16LL) = xmmword_1A635;
  *(_OWORD *)(v38 + v39) = xmmword_1A625;
  *(_QWORD *)(v38 + v39 + 29) = 0x3254455320666F20LL;
  *(_QWORD *)&v55[16] = v39 + 37;
  v40 = *(_QWORD *)v55;
  v56[0] = *(_OWORD *)&v55[8];
  if ( *(_QWORD *)v55 != 0x8000000000000000LL )
    *(_OWORD *)v55 = v56[0];
  *(_QWORD *)&src[440] = v40;
  *(_OWORD *)&src[448] = *(_OWORD *)v55;
  memcpy(v55, src, 0x24CuLL);
  *(_WORD *)&v55[589] = *(_WORD *)&src[589];
  v55[591] = src[591];
  v55[588] = 2;
  v41 = *(_QWORD *)&v55[144];
  if ( *(_QWORD *)&v55[144] == *(_QWORD *)&v55[128] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v55[128]);
  v42 = *(_QWORD *)&v55[136];
  v43 = 16 * v41;
  *(_QWORD *)(*(_QWORD *)&v55[136] + v43) = aTruncateSet1_0;
  *(_QWORD *)(v42 + v43 + 8) = 13LL;
  *(_QWORD *)&v55[144] = v41 + 1;
  v44 = *(_QWORD *)v55;
  v45 = *(_QWORD *)&v55[64];
  v46 = *(_QWORD *)&v55[72];
  memcpy(v56, &v55[80], sizeof(v56));
  if ( *(_QWORD *)&dest[1] && (*(_QWORD *)&v55[544] || *(_DWORD *)&v55[576] != 1114112) )
  {
    v47 = *(_QWORD *)&v55[8];
    if ( !*(_QWORD *)v55 )
      v47 = *((_QWORD *)&dest[1] + 1);
    ++*((_QWORD *)&dest[1] + 1);
    v44 = (*(_QWORD *)v55 == 0LL) + *(_QWORD *)v55;
  }
  else
  {
    v47 = *(_QWORD *)&v55[8];
  }
  if ( !*(_QWORD *)&v55[56] )
  {
    v46 = *((_QWORD *)&dest[40] + 1);
    v45 = *(_QWORD *)&dest[40];
  }
  *(_QWORD *)src = v44;
  *(_QWORD *)&src[8] = v47;
  *(_OWORD *)&src[16] = *(_OWORD *)&v55[16];
  *(_OWORD *)&src[32] = *(_OWORD *)&v55[32];
  *(_QWORD *)&src[48] = *(_QWORD *)&v55[48];
  *(_QWORD *)&src[56] = (*(_QWORD *)&v55[56] == 0LL) + *(_QWORD *)&v55[56];
  *(_QWORD *)&src[64] = v45;
  *(_QWORD *)&src[72] = v46;
  memcpy(&src[80], v56, 0x1D0uLL);
  *(_QWORD *)&src[544] = *(_QWORD *)&v55[544];
  *(_OWORD *)&src[552] = *(_OWORD *)&v55[552];
  *(_QWORD *)&src[568] = *(_QWORD *)&v55[568];
  *(_DWORD *)&src[576] = *(_DWORD *)&v55[576];
  *(_QWORD *)&src[580] = *(_QWORD *)&v55[580];
  *(_DWORD *)&src[588] = *(_DWORD *)&v55[588];
  v48 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  memmove((void *)(*((_QWORD *)&dest[8] + 1) + 592 * v48), src, 0x250uLL);
  *(_QWORD *)&dest[9] = v48 + 1;
  memcpy(src, dest, sizeof(src));
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
  *(_QWORD *)&dest[33] = aSets;
  *((_QWORD *)&dest[33] + 1) = 4LL;
  *(_QWORD *)&dest[34] = 0LL;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&dest[5] = 2LL;
  v56[0] = dest[1];
  v56[1] = 0xFFFFFFFFFFFFFFFFLL;
  *(_QWORD *)&v56[2] = *(_QWORD *)&dest[3];
  memcpy(v55, &dest[5], 0x1D0uLL);
  dest[2] = 0xFFFFFFFFFFFFFFFFLL;
  *((_QWORD *)&dest[3] + 1) = 1LL;
  dest[4] = *(_OWORD *)&src[640];
  memcpy(&dest[5], v55, 0x1D0uLL);
  *(_OWORD *)((char *)&dest[34] + 8) = *((unsigned __int64 *)&dest[34] + 1);
  LODWORD(dest[36]) = 1114112;
  *(_QWORD *)((char *)&dest[36] + 4) = 1114112LL;
  v49 = *(_QWORD *)&src[144];
  if ( *(_QWORD *)&src[144] == *(_QWORD *)&src[128] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[128]);
  memmove((void *)(*(_QWORD *)&src[136] + 592 * v49), dest, 0x250uLL);
  *(_QWORD *)&src[144] = v49 + 1;
  v50 = v54;
  memcpy(v54, src, 0x2C8uLL);
  return v50;
}
