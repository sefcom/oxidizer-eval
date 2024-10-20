void *__fastcall uu_false::uu_app(void *a1)
{
  __int64 v1; // r15
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r13
  __int64 v16; // r14
  int v17; // r12d
  __int64 v18; // rsi
  __int64 v19; // rbx
  _BYTE src[712]; // [rsp+68h] [rbp-7A0h] BYREF
  _OWORD dest[45]; // [rsp+330h] [rbp-4D8h] BYREF
  _OWORD v23[32]; // [rsp+600h] [rbp-208h] BYREF

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
  *(_OWORD *)&src[560] = xmmword_CDE08;
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
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 272LL);
  v1 = *(_QWORD *)&dest[1];
  memcpy((void *)(*(_QWORD *)&dest[1] + *((_QWORD *)&dest[0] + 1)), aReturnsFalseAn, 0x110uLL);
  *(_QWORD *)&dest[1] = v1 + 272;
  v2 = *(_QWORD *)&dest[0];
  v23[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v23[0];
  *(_QWORD *)&src[320] = v2;
  *(_OWORD *)&src[328] = dest[0];
  memcpy(dest, src, 0x2BCuLL);
  *(_QWORD *)((char *)&dest[43] + 12) = 0x14000000140000LL;
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
  *(_QWORD *)&src[424] = 8LL;
  *(_QWORD *)&src[432] = 0LL;
  *(_QWORD *)&src[440] = 0x8000000000000000LL;
  *(_QWORD *)&src[464] = 0x8000000000000000LL;
  *(_QWORD *)&src[504] = 0x8000000000000001LL;
  *(_QWORD *)&src[528] = anon_fc2b91500dea380c7cbb82546323e12f_35_llvm_12921794859373524128;
  *(_QWORD *)&src[536] = 4LL;
  *(_QWORD *)&src[544] = anon_fc2b91500dea380c7cbb82546323e12f_35_llvm_12921794859373524128;
  *(_OWORD *)&src[552] = 4uLL;
  *(_QWORD *)&src[576] = 0x11000000110000LL;
  *(_DWORD *)&src[584] = 0;
  *(_WORD *)&src[588] = 3337;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v23, 0LL, 22LL);
  v3 = *((_QWORD *)&v23[0] + 1);
  v4 = *(_QWORD *)&v23[1];
  *(_OWORD *)(*((_QWORD *)&v23[0] + 1) + *(_QWORD *)&v23[1]) = *(_OWORD *)aPrintHelpInfor;
  *(_QWORD *)(v3 + v4 + 14) = 0x6E6F6974616D726FLL;
  *(_QWORD *)&v23[1] = v4 + 22;
  v5 = *(_QWORD *)&v23[0];
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v23[0] = *(_OWORD *)((char *)v23 + 8);
  *(_QWORD *)&src[440] = v5;
  *(_OWORD *)&src[448] = v23[0];
  v6 = *(_QWORD *)src;
  v7 = *(_QWORD *)&src[64];
  v8 = *(_QWORD *)&src[72];
  memcpy(v23, &src[80], 0x1D0uLL);
  if ( *(_QWORD *)&dest[1] && (*(_QWORD *)&src[544] || *(_DWORD *)&src[576] != 1114112) )
  {
    v9 = *(_QWORD *)&src[8];
    if ( !*(_QWORD *)src )
      v9 = *((_QWORD *)&dest[1] + 1);
    v6 = (*(_QWORD *)src == 0LL) + *(_QWORD *)src;
    ++*((_QWORD *)&dest[1] + 1);
  }
  else
  {
    v9 = *(_QWORD *)&src[8];
  }
  if ( !*(_QWORD *)&src[56] )
  {
    v8 = *((_QWORD *)&dest[40] + 1);
    v7 = *(_QWORD *)&dest[40];
  }
  *(_QWORD *)src = v6;
  *(_QWORD *)&src[8] = v9;
  *(_QWORD *)&src[56] += *(_QWORD *)&src[56] == 0LL;
  *(_QWORD *)&src[64] = v7;
  *(_QWORD *)&src[72] = v8;
  memcpy(&src[80], v23, 0x1D0uLL);
  src[588] = 5;
  v10 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  memmove((void *)(*((_QWORD *)&dest[8] + 1) + 592 * v10), src, 0x250uLL);
  *(_QWORD *)&dest[9] = v10 + 1;
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
  *(_QWORD *)&dest[33] = aVersion;
  *((_QWORD *)&dest[33] + 1) = 7LL;
  *(_QWORD *)&dest[34] = aVersion;
  *(_OWORD *)((char *)&dest[34] + 8) = 7uLL;
  *(_QWORD *)&dest[36] = 0x11000000110000LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v23[0] = 0LL;
  *((_QWORD *)&v23[0] + 1) = 1LL;
  *(_QWORD *)&v23[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v23, 0LL, 25LL);
  v11 = *((_QWORD *)&v23[0] + 1);
  v12 = *(_QWORD *)&v23[1];
  *(_OWORD *)(*((_QWORD *)&v23[0] + 1) + *(_QWORD *)&v23[1] + 9LL) = unk_16288;
  *(_OWORD *)(v11 + v12) = unk_1627F;
  *(_QWORD *)&v23[1] = v12 + 25;
  v13 = *(_QWORD *)&v23[0];
  if ( *(_QWORD *)&v23[0] != 0x8000000000000000LL )
    v23[0] = *(_OWORD *)((char *)v23 + 8);
  *((_QWORD *)&dest[27] + 1) = v13;
  dest[28] = v23[0];
  v14 = *(_QWORD *)&dest[0];
  v16 = *((_QWORD *)&dest[4] + 1);
  v15 = *(_QWORD *)&dest[4];
  memcpy(v23, &dest[5], 0x1D0uLL);
  if ( !*(_QWORD *)&src[16] )
  {
    v17 = dest[36];
LABEL_27:
    v18 = *((_QWORD *)&dest[0] + 1);
    goto LABEL_28;
  }
  v17 = dest[36];
  if ( !*(_QWORD *)&dest[34] && LODWORD(dest[36]) == 1114112 )
    goto LABEL_27;
  v18 = *((_QWORD *)&dest[0] + 1);
  if ( !*(_QWORD *)&dest[0] )
    v18 = *(_QWORD *)&src[24];
  ++*(_QWORD *)&src[24];
  v14 = (*(_QWORD *)&dest[0] == 0LL) + *(_QWORD *)&dest[0];
LABEL_28:
  if ( !*((_QWORD *)&dest[3] + 1) )
  {
    v15 = *(_QWORD *)&src[640];
    v16 = *(_QWORD *)&src[648];
  }
  *(_QWORD *)&dest[0] = v14;
  *((_QWORD *)&dest[0] + 1) = v18;
  *((_QWORD *)&dest[3] + 1) += *((_QWORD *)&dest[3] + 1) == 0LL;
  *(_QWORD *)&dest[4] = v15;
  *((_QWORD *)&dest[4] + 1) = v16;
  memcpy(&dest[5], v23, 0x1D0uLL);
  LODWORD(dest[36]) = v17;
  BYTE12(dest[36]) = 8;
  v19 = *(_QWORD *)&src[144];
  if ( *(_QWORD *)&src[144] == *(_QWORD *)&src[128] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[128]);
  memmove((void *)(*(_QWORD *)&src[136] + 592 * v19), dest, 0x250uLL);
  *(_QWORD *)&src[144] = v19 + 1;
  memcpy(a1, src, 0x2C8uLL);
  return a1;
}
