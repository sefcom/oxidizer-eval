void *__fastcall uu_printf::uu_app(void *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rbp
  int v13; // r12d
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rbx
  __int64 v21; // rbp
  int v22; // r12d
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rbx
  void *v26; // r14
  __int64 v27; // rbx
  __int128 v29; // [rsp+8h] [rbp-890h]
  __int128 v30; // [rsp+20h] [rbp-878h]
  __int128 v31; // [rsp+50h] [rbp-848h]
  _BYTE src[712]; // [rsp+70h] [rbp-828h] BYREF
  void *v33; // [rsp+338h] [rbp-560h]
  _OWORD dest[45]; // [rsp+340h] [rbp-558h] BYREF
  _OWORD v35[40]; // [rsp+610h] [rbp-288h] BYREF

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
  *(_OWORD *)&src[40] = dest[0];
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
  *(_OWORD *)&src[280] = v35[0];
  *(_QWORD *)&src[296] = 0x8000000000000000LL;
  *(_OWORD *)&src[304] = v30;
  *(_QWORD *)&src[320] = 0x8000000000000000LL;
  *(_OWORD *)&src[328] = v31;
  *(_QWORD *)&src[344] = 0x8000000000000000LL;
  *(_OWORD *)&src[352] = v29;
  *(_QWORD *)&src[368] = 0x8000000000000000LL;
  *(_OWORD *)&src[376] = *(_OWORD *)((char *)&v35[36] + 8);
  *(_QWORD *)&src[392] = 0x8000000000000000LL;
  *(_OWORD *)&src[400] = *(_OWORD *)((char *)&v35[35] + 8);
  *(_QWORD *)&src[416] = 0x8000000000000000LL;
  *(_OWORD *)&src[424] = *(_OWORD *)((char *)&v35[34] + 8);
  *(_QWORD *)&src[440] = 0x8000000000000000LL;
  *(_OWORD *)&src[448] = *(_OWORD *)((char *)&v35[33] + 8);
  *(_QWORD *)&src[464] = 0x8000000000000000LL;
  *(_OWORD *)&src[472] = *(_OWORD *)((char *)&v35[32] + 8);
  *(_QWORD *)&src[488] = 0x8000000000000000LL;
  *(_OWORD *)&src[496] = *(_OWORD *)((char *)&v35[31] + 8);
  *(_QWORD *)&src[512] = 0x8000000000000000LL;
  *(_OWORD *)&src[520] = *(_OWORD *)((char *)&v35[30] + 8);
  *(_QWORD *)&src[536] = 0x8000000000000000LL;
  *(_OWORD *)&src[544] = *(_OWORD *)((char *)&v35[29] + 8);
  *(_OWORD *)&src[560] = xmmword_F0F98;
  *(_QWORD *)&src[576] = 0LL;
  *(_QWORD *)&src[592] = 0LL;
  *(_QWORD *)&src[608] = a0027;
  *(_QWORD *)&src[616] = 6LL;
  *(_QWORD *)&src[624] = 0LL;
  *(_QWORD *)&src[640] = 0LL;
  *(_QWORD *)&src[656] = 0LL;
  *(_QWORD *)&src[672] = 0LL;
  *(_QWORD *)&src[688] = 0LL;
  *(_QWORD *)&src[696] = 0x200110000LL;
  *(_QWORD *)&src[704] = 0LL;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 69LL);
  v1 = *((_QWORD *)&dest[0] + 1);
  v2 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 48LL) = xmmword_19F82;
  qmemcpy((void *)(v1 + v2), "Print output based off of the format string and ", 48);
  *(_QWORD *)(v1 + v2 + 61) = 0x2E73746E656D7567LL;
  *(_QWORD *)&dest[1] = v2 + 69;
  v3 = *(_QWORD *)&dest[0];
  v35[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v35[0];
  *(_QWORD *)&src[320] = v3;
  *(_OWORD *)&src[328] = dest[0];
  memcpy(dest, src, 0x2C8uLL);
  *(_QWORD *)src = 0LL;
  *(_QWORD *)&src[8] = 1LL;
  *(_QWORD *)&src[16] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 9093LL);
  v4 = *(_QWORD *)&src[16];
  memcpy((void *)(*(_QWORD *)&src[16] + *(_QWORD *)&src[8]), aBasicAnonymous, 0x2385uLL);
  *(_QWORD *)&src[16] = v4 + 9093;
  v5 = *(_QWORD *)src;
  v35[0] = *(_OWORD *)&src[8];
  if ( *(_QWORD *)src != 0x8000000000000000LL )
    *(_OWORD *)src = v35[0];
  if ( 2LL * *(_QWORD *)&dest[26] )
    _rust_dealloc(*((_QWORD *)&dest[26] + 1), *(_QWORD *)&dest[26], 1LL);
  *(_QWORD *)&dest[26] = v5;
  *(_OWORD *)((char *)&dest[26] + 8) = *(_OWORD *)src;
  memcpy(src, dest, sizeof(src));
  uucore::format_usage(v35, aFormatstringAr, 63LL);
  v6 = *(_QWORD *)&v35[0];
  if ( *(_QWORD *)&v35[0] != 0x8000000000000000LL )
    dest[0] = *(_OWORD *)((char *)v35 + 8);
  if ( 2LL * *(_QWORD *)&src[464] )
    _rust_dealloc(*(_QWORD *)&src[472], *(_QWORD *)&src[464], 1LL);
  *(_QWORD *)&src[464] = v6;
  *(_OWORD *)&src[472] = dest[0];
  memcpy(dest, src, 0x2BCuLL);
  *(_QWORD *)((char *)&dest[43] + 12) = *(_QWORD *)&src[700] | 0x14000000140000LL;
  DWORD1(dest[44]) = *(_DWORD *)&src[708];
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
  *(_OWORD *)&src[424] = 8uLL;
  *(_QWORD *)&src[440] = 0x8000000000000000LL;
  *(_QWORD *)&src[464] = 0x8000000000000000LL;
  *(_QWORD *)&src[504] = 0x8000000000000001LL;
  *(_QWORD *)&src[528] = anon_fc2b91500dea380c7cbb82546323e12f_35_llvm_12921794859373524128;
  *(_QWORD *)&src[536] = 4LL;
  *(_QWORD *)&src[544] = anon_fc2b91500dea380c7cbb82546323e12f_35_llvm_12921794859373524128;
  *(_QWORD *)&src[552] = 4LL;
  *(_QWORD *)&src[560] = 0LL;
  *(_QWORD *)&src[576] = 0x11000000110000LL;
  *(_DWORD *)&src[584] = 0;
  *(_WORD *)&src[588] = 3337;
  *(_QWORD *)&v35[0] = 0LL;
  *((_QWORD *)&v35[0] + 1) = 1LL;
  *(_QWORD *)&v35[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v35, 0LL, 22LL);
  v33 = a1;
  v7 = *((_QWORD *)&v35[0] + 1);
  v8 = *(_QWORD *)&v35[1];
  *(_OWORD *)(*((_QWORD *)&v35[0] + 1) + *(_QWORD *)&v35[1]) = *(_OWORD *)aPrintHelpInfor;
  *(_QWORD *)(v7 + v8 + 14) = 0x6E6F6974616D726FLL;
  *(_QWORD *)&v35[1] = v8 + 22;
  v9 = *(_QWORD *)&v35[0];
  if ( *(_QWORD *)&v35[0] != 0x8000000000000000LL )
    v35[0] = *(_OWORD *)((char *)v35 + 8);
  *(_QWORD *)&src[440] = v9;
  *(_OWORD *)&src[448] = v35[0];
  v10 = *(_QWORD *)src;
  v11 = *(_QWORD *)&src[72];
  v12 = *(_QWORD *)&src[64];
  memcpy(v35, &src[80], 0x1D0uLL);
  if ( !*(_QWORD *)&dest[1] )
  {
    v13 = *(_DWORD *)&src[576];
LABEL_22:
    v14 = *(_QWORD *)&src[8];
    goto LABEL_23;
  }
  v13 = *(_DWORD *)&src[576];
  if ( !*(_QWORD *)&src[544] && *(_DWORD *)&src[576] == 1114112 )
    goto LABEL_22;
  v14 = *(_QWORD *)&src[8];
  if ( !*(_QWORD *)src )
    v14 = *((_QWORD *)&dest[1] + 1);
  v10 = (*(_QWORD *)src == 0LL) + *(_QWORD *)src;
  ++*((_QWORD *)&dest[1] + 1);
LABEL_23:
  if ( !*(_QWORD *)&src[56] )
  {
    v11 = *((_QWORD *)&dest[40] + 1);
    v12 = *(_QWORD *)&dest[40];
  }
  *(_QWORD *)src = v10;
  *(_QWORD *)&src[8] = v14;
  *(_QWORD *)&src[56] += *(_QWORD *)&src[56] == 0LL;
  *(_QWORD *)&src[64] = v12;
  *(_QWORD *)&src[72] = v11;
  memcpy(&src[80], v35, 0x1D0uLL);
  *(_DWORD *)&src[576] = v13;
  src[588] = 5;
  v15 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  memmove((void *)(*((_QWORD *)&dest[8] + 1) + 592 * v15), src, 0x250uLL);
  *(_QWORD *)&dest[9] = v15 + 1;
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
  *(_OWORD *)((char *)&dest[26] + 8) = 8uLL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = aVersion;
  *((_QWORD *)&dest[33] + 1) = 7LL;
  *(_QWORD *)&dest[34] = aVersion;
  *(_OWORD *)((char *)&dest[34] + 8) = 7uLL;
  *(_QWORD *)&dest[36] = 0x11000000110000LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v35[0] = 0LL;
  *((_QWORD *)&v35[0] + 1) = 1LL;
  *(_QWORD *)&v35[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v35, 0LL, 25LL);
  v16 = *((_QWORD *)&v35[0] + 1);
  v17 = *(_QWORD *)&v35[1];
  *(_OWORD *)(*((_QWORD *)&v35[0] + 1) + *(_QWORD *)&v35[1] + 9LL) = unk_1C381;
  *(_OWORD *)(v16 + v17) = unk_1C378;
  *(_QWORD *)&v35[1] = v17 + 25;
  v18 = *(_QWORD *)&v35[0];
  if ( *(_QWORD *)&v35[0] != 0x8000000000000000LL )
    v35[0] = *(_OWORD *)((char *)v35 + 8);
  *((_QWORD *)&dest[27] + 1) = v18;
  dest[28] = v35[0];
  v19 = *(_QWORD *)&dest[0];
  v21 = *((_QWORD *)&dest[4] + 1);
  v20 = *(_QWORD *)&dest[4];
  memcpy(v35, &dest[5], 0x1D0uLL);
  if ( !*(_QWORD *)&src[16] )
  {
    v22 = dest[36];
LABEL_36:
    v23 = *((_QWORD *)&dest[0] + 1);
    goto LABEL_37;
  }
  v22 = dest[36];
  if ( !*(_QWORD *)&dest[34] && LODWORD(dest[36]) == 1114112 )
    goto LABEL_36;
  v23 = *((_QWORD *)&dest[0] + 1);
  if ( !*(_QWORD *)&dest[0] )
    v23 = *(_QWORD *)&src[24];
  v19 = (*(_QWORD *)&dest[0] == 0LL) + *(_QWORD *)&dest[0];
  ++*(_QWORD *)&src[24];
LABEL_37:
  if ( !*((_QWORD *)&dest[3] + 1) )
  {
    v21 = *(_QWORD *)&src[648];
    v20 = *(_QWORD *)&src[640];
  }
  *(_QWORD *)&dest[0] = v19;
  *((_QWORD *)&dest[0] + 1) = v23;
  *((_QWORD *)&dest[3] + 1) += *((_QWORD *)&dest[3] + 1) == 0LL;
  *(_QWORD *)&dest[4] = v20;
  *((_QWORD *)&dest[4] + 1) = v21;
  memcpy(&dest[5], v35, 0x1D0uLL);
  LODWORD(dest[36]) = v22;
  BYTE12(dest[36]) = 8;
  v24 = *(_QWORD *)&src[144];
  if ( *(_QWORD *)&src[144] == *(_QWORD *)&src[128] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[128]);
  memmove((void *)(*(_QWORD *)&src[136] + 592 * v24), dest, 0x250uLL);
  *(_QWORD *)&src[144] = v24 + 1;
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
  *(_OWORD *)&src[424] = 8uLL;
  *(_QWORD *)&src[440] = 0x8000000000000000LL;
  *(_QWORD *)&src[464] = 0x8000000000000000LL;
  *(_QWORD *)&src[504] = 0x8000000000000001LL;
  *(_QWORD *)&src[528] = aFormatstring_0;
  *(_QWORD *)&src[536] = 12LL;
  *(_QWORD *)&src[544] = 0LL;
  *(_QWORD *)&src[560] = 0LL;
  *(_QWORD *)&src[576] = 0x11000000110000LL;
  *(_DWORD *)&src[584] = 0;
  *(_WORD *)&src[588] = 3337;
  v25 = *(_QWORD *)&dest[9];
  v26 = v33;
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  memmove((void *)(*((_QWORD *)&dest[8] + 1) + 592 * v25), src, 0x250uLL);
  *(_QWORD *)&dest[9] = v25 + 1;
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
  *((_QWORD *)&dest[3] + 1) = 1LL;
  dest[4] = *(_OWORD *)&src[640];
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *(_OWORD *)((char *)&dest[26] + 8) = 8uLL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = aArgument_0;
  *((_QWORD *)&dest[33] + 1) = 8LL;
  *(_QWORD *)&dest[34] = 0LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000110000LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3329;
  v27 = *(_QWORD *)&src[144];
  if ( *(_QWORD *)&src[144] == *(_QWORD *)&src[128] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[128]);
  memmove((void *)(*(_QWORD *)&src[136] + 592 * v27), dest, 0x250uLL);
  *(_QWORD *)&src[144] = v27 + 1;
  memcpy(v26, src, 0x2C8uLL);
  return v26;
}
