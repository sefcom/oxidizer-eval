void *__fastcall uu_basename::uu_app(void *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // r14
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // r15
  __int64 v28; // rsi
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r13
  __int64 v37; // r12
  __int64 v38; // r14
  __int64 v39; // rsi
  __int64 v40; // rbx
  void *v41; // rbx
  _OWORD dest[45]; // [rsp+60h] [rbp-9F8h] BYREF
  _BYTE src[712]; // [rsp+330h] [rbp-728h] BYREF
  void *v45; // [rsp+5F8h] [rbp-460h]
  _OWORD v46[37]; // [rsp+600h] [rbp-458h] BYREF
  _OWORD v47[29]; // [rsp+850h] [rbp-208h] BYREF

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
  *(_OWORD *)&src[560] = xmmword_E0270;
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
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 100LL);
  v1 = *((_QWORD *)&dest[0] + 1);
  v2 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 80LL) = xmmword_1863C;
  qmemcpy((void *)(v1 + v2), "Print NAME with any leading directory components removed\nIf specified, also remo", 80);
  *(_DWORD *)(v1 + v2 + 96) = 1481197126;
  *(_QWORD *)&dest[1] = v2 + 100;
  v3 = *(_QWORD *)&dest[0];
  v46[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v46[0];
  *(_QWORD *)&src[320] = v3;
  *(_OWORD *)&src[328] = dest[0];
  memcpy(dest, src, 0x2C8uLL);
  uucore::format_usage(v46, aZNameSuffixOpt, 42LL);
  v4 = *(_QWORD *)&v46[0];
  if ( *(_QWORD *)&v46[0] != 0x8000000000000000LL )
    *(_OWORD *)src = *(_OWORD *)((char *)v46 + 8);
  if ( *(_QWORD *)&dest[29] != 0x8000000000000000LL && *(_QWORD *)&dest[29] )
    _rust_dealloc(*((_QWORD *)&dest[29] + 1), *(_QWORD *)&dest[29], 1LL);
  *(_QWORD *)&dest[29] = v4;
  *(_OWORD *)((char *)&dest[29] + 8) = *(_OWORD *)src;
  memcpy(src, dest, 0x2BCuLL);
  *(_QWORD *)&src[700] = *(_QWORD *)((char *)&dest[43] + 12) | 0x8000000080LL;
  *(_DWORD *)&src[708] = DWORD1(dest[44]);
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
  *(_QWORD *)&dest[33] = aMultiple;
  *((_QWORD *)&dest[33] + 1) = 8LL;
  *(_QWORD *)&dest[34] = aMultiple;
  *(_OWORD *)((char *)&dest[34] + 8) = 8uLL;
  *(_QWORD *)&dest[36] = 0x11000000000061LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v46[0] = 0LL;
  *((_QWORD *)&v46[0] + 1) = 1LL;
  *(_QWORD *)&v46[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v46, 0LL, 51LL);
  v5 = *((_QWORD *)&v46[0] + 1);
  v6 = *(_QWORD *)&v46[1];
  *(_OWORD *)(*((_QWORD *)&v46[0] + 1) + *(_QWORD *)&v46[1] + 32LL) = unk_186A6;
  qmemcpy((void *)(v5 + v6), "support multiple arguments and t", 32);
  *(_DWORD *)(v5 + v6 + 47) = 1162690894;
  *(_QWORD *)&v46[1] = v6 + 51;
  v7 = *(_QWORD *)&v46[0];
  v47[0] = *(_OWORD *)((char *)v46 + 8);
  if ( *(_QWORD *)&v46[0] != 0x8000000000000000LL )
    v46[0] = v47[0];
  v45 = a1;
  *((_QWORD *)&dest[27] + 1) = v7;
  dest[28] = v46[0];
  memcpy(v46, dest, 0x24CuLL);
  *(_WORD *)((char *)&v46[36] + 13) = *(_WORD *)((char *)&dest[36] + 13);
  HIBYTE(v46[36]) = HIBYTE(dest[36]);
  BYTE12(v46[36]) = 2;
  v8 = *(_QWORD *)&v46[9];
  if ( *(_QWORD *)&v46[9] == *(_QWORD *)&v46[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v46[8]);
  v9 = *((_QWORD *)&v46[8] + 1);
  v10 = 16 * v8;
  *(_QWORD *)(*((_QWORD *)&v46[8] + 1) + v10) = aMultiple;
  *(_QWORD *)(v9 + v10 + 8) = 8LL;
  *(_QWORD *)&v46[9] = v8 + 1;
  v11 = *((_QWORD *)&v46[0] + 1);
  v13 = *((_QWORD *)&v46[4] + 1);
  v12 = *(_QWORD *)&v46[4];
  memcpy(v47, &v46[5], sizeof(v47));
  if ( *(_QWORD *)&src[16] && (*(_QWORD *)&v46[34] || LODWORD(v46[36]) != 1114112) )
  {
    if ( !*(_QWORD *)&v46[0] )
      v11 = *(_QWORD *)&src[24];
    v14 = (*(_QWORD *)&v46[0] == 0LL) + *(_QWORD *)&v46[0];
    ++*(_QWORD *)&src[24];
  }
  else
  {
    v14 = *(_QWORD *)&v46[0];
  }
  if ( !*((_QWORD *)&v46[3] + 1) )
  {
    v13 = *(_QWORD *)&src[648];
    v12 = *(_QWORD *)&src[640];
  }
  *(_QWORD *)&dest[0] = v14;
  *((_QWORD *)&dest[0] + 1) = v11;
  dest[1] = v46[1];
  dest[2] = v46[2];
  *(_QWORD *)&dest[3] = *(_QWORD *)&v46[3];
  *((_QWORD *)&dest[3] + 1) = (*((_QWORD *)&v46[3] + 1) == 0LL) + *((_QWORD *)&v46[3] + 1);
  *(_QWORD *)&dest[4] = v12;
  *((_QWORD *)&dest[4] + 1) = v13;
  memcpy(&dest[5], v47, 0x1D0uLL);
  *(_QWORD *)&dest[34] = *(_QWORD *)&v46[34];
  *(_OWORD *)((char *)&dest[34] + 8) = *(_OWORD *)((char *)&v46[34] + 8);
  *((_QWORD *)&dest[35] + 1) = *((_QWORD *)&v46[35] + 1);
  dest[36] = v46[36];
  v15 = *(_QWORD *)&src[144];
  if ( *(_QWORD *)&src[144] == *(_QWORD *)&src[128] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[128]);
  memmove((void *)(*(_QWORD *)&src[136] + 592 * v15), dest, 0x250uLL);
  *(_QWORD *)&src[144] = v15 + 1;
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
  *(_QWORD *)&src[56] = 1LL;
  *(_OWORD *)&src[64] = dest[40];
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
  *(_QWORD *)&src[528] = aName;
  *(_QWORD *)&src[536] = 4LL;
  *(_QWORD *)&src[544] = 0LL;
  *(_QWORD *)&src[560] = 0LL;
  *(_OWORD *)&src[576] = xmmword_FD90;
  v16 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  memmove((void *)(*((_QWORD *)&dest[8] + 1) + 592 * v16), src, 0x250uLL);
  *(_QWORD *)&dest[9] = v16 + 1;
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
  *(_QWORD *)&dest[33] = aSuffix;
  *((_QWORD *)&dest[33] + 1) = 6LL;
  *(_QWORD *)&dest[34] = aSuffix;
  *(_OWORD *)((char *)&dest[34] + 8) = 6uLL;
  *(_QWORD *)&dest[36] = 0x11000000000073LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  v17 = (_QWORD *)_rust_alloc(16LL, 8LL);
  if ( !v17 )
    alloc::raw_vec::handle_error(8LL, 16LL);
  v18 = v17;
  *v17 = aSuffix_0;
  v17[1] = 6LL;
  if ( *((_QWORD *)&dest[21] + 1) )
    _rust_dealloc(*(_QWORD *)&dest[22], 16LL * *((_QWORD *)&dest[21] + 1), 8LL);
  *((_QWORD *)&dest[21] + 1) = 1LL;
  *(_QWORD *)&dest[22] = v18;
  *((_QWORD *)&dest[22] + 1) = 1LL;
  memcpy(v46, dest, sizeof(v46));
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 36LL);
  v19 = *((_QWORD *)&dest[0] + 1);
  v20 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 16LL) = unk_186CF;
  *(_OWORD *)(v19 + v20) = unk_186BF;
  *(_DWORD *)(v19 + v20 + 32) = 1630347379;
  *(_QWORD *)&dest[1] = v20 + 36;
  v21 = *(_QWORD *)&dest[0];
  v47[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v47[0];
  if ( *((_QWORD *)&v46[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&v46[27] + 1) )
    _rust_dealloc(*(_QWORD *)&v46[28], *((_QWORD *)&v46[27] + 1), 1LL);
  *((_QWORD *)&v46[27] + 1) = v21;
  v46[28] = dest[0];
  memcpy(dest, v46, 0x250uLL);
  v22 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  v23 = *((_QWORD *)&dest[8] + 1);
  v24 = 16 * v22;
  *(_QWORD *)(*((_QWORD *)&dest[8] + 1) + v24) = aSuffix;
  *(_QWORD *)(v23 + v24 + 8) = 6LL;
  *(_QWORD *)&dest[9] = v22 + 1;
  v25 = *(_QWORD *)&dest[0];
  v47[0] = dest[1];
  v47[1] = dest[2];
  *(_QWORD *)&v47[2] = *(_QWORD *)&dest[3];
  v26 = *((_QWORD *)&dest[4] + 1);
  v27 = *(_QWORD *)&dest[4];
  memcpy(v46, &dest[5], 0x1D0uLL);
  if ( *(_QWORD *)&src[16] && (*(_QWORD *)&dest[34] || LODWORD(dest[36]) != 1114112) )
  {
    v28 = *((_QWORD *)&dest[0] + 1);
    if ( !*(_QWORD *)&dest[0] )
      v28 = *(_QWORD *)&src[24];
    ++*(_QWORD *)&src[24];
    v25 = (*(_QWORD *)&dest[0] == 0LL) + *(_QWORD *)&dest[0];
  }
  else
  {
    v28 = *((_QWORD *)&dest[0] + 1);
  }
  if ( !*((_QWORD *)&dest[3] + 1) )
  {
    v27 = *(_QWORD *)&src[640];
    v26 = *(_QWORD *)&src[648];
  }
  *(_QWORD *)&dest[0] = v25;
  *((_QWORD *)&dest[0] + 1) = v28;
  dest[1] = v47[0];
  dest[2] = v47[1];
  *(_QWORD *)&dest[3] = *(_QWORD *)&v47[2];
  *((_QWORD *)&dest[3] + 1) += *((_QWORD *)&dest[3] + 1) == 0LL;
  *(_QWORD *)&dest[4] = v27;
  *((_QWORD *)&dest[4] + 1) = v26;
  memcpy(&dest[5], v46, 0x1D0uLL);
  v29 = *(_QWORD *)&src[144];
  if ( *(_QWORD *)&src[144] == *(_QWORD *)&src[128] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[128]);
  memmove((void *)(*(_QWORD *)&src[136] + 592 * v29), dest, 0x250uLL);
  *(_QWORD *)&src[144] = v29 + 1;
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
  *(_QWORD *)&src[528] = aZero;
  *(_QWORD *)&src[536] = 4LL;
  *(_QWORD *)&src[544] = aZero;
  *(_OWORD *)&src[552] = 4uLL;
  *(_QWORD *)&src[576] = 0x1100000000007ALL;
  *(_DWORD *)&src[584] = 0;
  *(_WORD *)&src[588] = 3337;
  *(_QWORD *)&v46[0] = 0LL;
  *((_QWORD *)&v46[0] + 1) = 1LL;
  *(_QWORD *)&v46[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v46, 0LL, 42LL);
  v30 = *((_QWORD *)&v46[0] + 1);
  v31 = *(_QWORD *)&v46[1];
  *(_OWORD *)(*((_QWORD *)&v46[0] + 1) + *(_QWORD *)&v46[1] + 26LL) = unk_186FD;
  qmemcpy((void *)(v30 + v31), "end each output line with NUL, n", 32);
  *(_QWORD *)&v46[1] = v31 + 42;
  v32 = *(_QWORD *)&v46[0];
  v47[0] = *(_OWORD *)((char *)v46 + 8);
  if ( *(_QWORD *)&v46[0] != 0x8000000000000000LL )
    v46[0] = v47[0];
  *(_QWORD *)&src[440] = v32;
  *(_OWORD *)&src[448] = v46[0];
  memcpy(v46, src, 0x24CuLL);
  *(_WORD *)((char *)&v46[36] + 13) = *(_WORD *)&src[589];
  HIBYTE(v46[36]) = src[591];
  BYTE12(v46[36]) = 2;
  v33 = *(_QWORD *)&v46[9];
  if ( *(_QWORD *)&v46[9] == *(_QWORD *)&v46[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v46[8]);
  v34 = *((_QWORD *)&v46[8] + 1);
  v35 = 16 * v33;
  *(_QWORD *)(*((_QWORD *)&v46[8] + 1) + v35) = aZero;
  *(_QWORD *)(v34 + v35 + 8) = 4LL;
  *(_QWORD *)&v46[9] = v33 + 1;
  v36 = *(_QWORD *)&v46[0];
  v38 = *((_QWORD *)&v46[4] + 1);
  v37 = *(_QWORD *)&v46[4];
  memcpy(v47, &v46[5], sizeof(v47));
  if ( *(_QWORD *)&dest[1] && (*(_QWORD *)&v46[34] || LODWORD(v46[36]) != 1114112) )
  {
    v39 = *((_QWORD *)&v46[0] + 1);
    if ( !*(_QWORD *)&v46[0] )
      v39 = *((_QWORD *)&dest[1] + 1);
    ++*((_QWORD *)&dest[1] + 1);
    v36 = (*(_QWORD *)&v46[0] == 0LL) + *(_QWORD *)&v46[0];
  }
  else
  {
    v39 = *((_QWORD *)&v46[0] + 1);
  }
  if ( !*((_QWORD *)&v46[3] + 1) )
  {
    v38 = *((_QWORD *)&dest[40] + 1);
    v37 = *(_QWORD *)&dest[40];
  }
  *(_QWORD *)src = v36;
  *(_QWORD *)&src[8] = v39;
  *(_OWORD *)&src[16] = v46[1];
  *(_OWORD *)&src[32] = v46[2];
  *(_QWORD *)&src[48] = *(_QWORD *)&v46[3];
  *(_QWORD *)&src[56] = (*((_QWORD *)&v46[3] + 1) == 0LL) + *((_QWORD *)&v46[3] + 1);
  *(_QWORD *)&src[64] = v37;
  *(_QWORD *)&src[72] = v38;
  memcpy(&src[80], v47, 0x1D0uLL);
  *(_QWORD *)&src[544] = *(_QWORD *)&v46[34];
  *(_OWORD *)&src[552] = *(_OWORD *)((char *)&v46[34] + 8);
  *(_QWORD *)&src[568] = *((_QWORD *)&v46[35] + 1);
  *(_OWORD *)&src[576] = v46[36];
  v40 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  memmove((void *)(*((_QWORD *)&dest[8] + 1) + 592 * v40), src, 0x250uLL);
  *(_QWORD *)&dest[9] = v40 + 1;
  v41 = v45;
  memcpy(v45, dest, 0x2C8uLL);
  return v41;
}
