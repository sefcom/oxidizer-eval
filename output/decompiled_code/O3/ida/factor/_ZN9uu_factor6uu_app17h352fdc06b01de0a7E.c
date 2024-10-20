void *__fastcall uu_factor::uu_app(void *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 v11; // r12
  int v12; // r15d
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rbx
  __int64 v20; // r13
  int v21; // r12d
  __int64 v22; // rsi
  __int64 v23; // rbx
  _OWORD dest[45]; // [rsp+70h] [rbp-7A8h] BYREF
  _OWORD src[45]; // [rsp+340h] [rbp-4D8h] BYREF
  _OWORD v27[32]; // [rsp+610h] [rbp-208h] BYREF

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
  src[35] = xmmword_13F660;
  *(_QWORD *)&src[36] = 0LL;
  *(_QWORD *)&src[37] = 0LL;
  *(_QWORD *)&src[38] = a0027;
  *((_QWORD *)&src[38] + 1) = 6LL;
  *(_QWORD *)&src[39] = 0LL;
  *(_QWORD *)&src[40] = 0LL;
  *(_QWORD *)&src[41] = 0LL;
  *(_QWORD *)&src[42] = 0LL;
  *(_QWORD *)&src[43] = 0LL;
  DWORD2(src[43]) = (_DWORD)<T as core::any::Any>::type_id;
  BYTE4(src[44]) = 0;
  *(_QWORD *)((char *)&src[43] + 12) = 0LL;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 96LL);
  v1 = *((_QWORD *)&dest[0] + 1);
  v2 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 80LL) = xmmword_1E999;
  qmemcpy((void *)(v1 + v2), "Print the prime factors of the given NUMBER(s).\nIf none are specified, read from", 80);
  *(_QWORD *)&dest[1] = v2 + 96;
  v3 = *(_QWORD *)&dest[0];
  v27[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v27[0];
  *(_QWORD *)&src[20] = v3;
  *(_OWORD *)((char *)&src[20] + 8) = dest[0];
  memcpy(dest, src, 0x2C8uLL);
  uucore::format_usage(v27, aOptionNumber, 26LL);
  v4 = *(_QWORD *)&v27[0];
  if ( *(_QWORD *)&v27[0] != 0x8000000000000000LL )
    src[0] = *(_OWORD *)((char *)v27 + 8);
  if ( 2LL * *(_QWORD *)&dest[29] )
    _rust_dealloc(*((_QWORD *)&dest[29] + 1), *(_QWORD *)&dest[29], 1LL);
  *(_QWORD *)&dest[29] = v4;
  *(_OWORD *)((char *)&dest[29] + 8) = src[0];
  memcpy(src, dest, 0x2BCuLL);
  *(_QWORD *)((char *)&src[43] + 12) = *(_QWORD *)((char *)&dest[43] + 12) | 0x4008800040088LL;
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
  *((_QWORD *)&dest[3] + 1) = 1LL;
  dest[4] = src[40];
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
  *(_QWORD *)&dest[33] = aNumber;
  *((_QWORD *)&dest[33] + 1) = 6LL;
  *(_QWORD *)&dest[34] = 0LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000110000LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3329;
  v5 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[9] == *(_QWORD *)&src[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[8]);
  memmove((void *)(*((_QWORD *)&src[8] + 1) + 592 * v5), dest, 0x250uLL);
  *(_QWORD *)&src[9] = v5 + 1;
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
  *(_QWORD *)&src[33] = aExponents;
  *((_QWORD *)&src[33] + 1) = 9LL;
  *(_QWORD *)&src[34] = aExponents;
  *(_OWORD *)((char *)&src[34] + 8) = 9uLL;
  *(_QWORD *)&src[36] = 0x11000000000068LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v27[0] = 0LL;
  *((_QWORD *)&v27[0] + 1) = 1LL;
  *(_QWORD *)&v27[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v27, 0LL, 29LL);
  v6 = *((_QWORD *)&v27[0] + 1);
  v7 = *(_QWORD *)&v27[1];
  *(_OWORD *)(*((_QWORD *)&v27[0] + 1) + *(_QWORD *)&v27[1] + 13LL) = *(__int128 *)((char *)&xmmword_1E9C3 + 13);
  *(_OWORD *)(v6 + v7) = xmmword_1E9C3;
  *(_QWORD *)&v27[1] = v7 + 29;
  v8 = *(_QWORD *)&v27[0];
  if ( *(_QWORD *)&v27[0] != 0x8000000000000000LL )
    v27[0] = *(_OWORD *)((char *)v27 + 8);
  *((_QWORD *)&src[27] + 1) = v8;
  src[28] = v27[0];
  v9 = *(_QWORD *)&src[0];
  v10 = *((_QWORD *)&src[4] + 1);
  v11 = *(_QWORD *)&src[4];
  memcpy(v27, &src[5], 0x1D0uLL);
  if ( !*(_QWORD *)&dest[1] )
  {
    v12 = src[36];
LABEL_20:
    v13 = *((_QWORD *)&src[0] + 1);
    goto LABEL_21;
  }
  v12 = src[36];
  if ( !*(_QWORD *)&src[34] && LODWORD(src[36]) == (_DWORD)<T as core::any::Any>::type_id )
    goto LABEL_20;
  v13 = *((_QWORD *)&src[0] + 1);
  if ( !*(_QWORD *)&src[0] )
    v13 = *((_QWORD *)&dest[1] + 1);
  ++*((_QWORD *)&dest[1] + 1);
  v9 = (*(_QWORD *)&src[0] == 0LL) + *(_QWORD *)&src[0];
LABEL_21:
  if ( !*((_QWORD *)&src[3] + 1) )
  {
    v10 = *((_QWORD *)&dest[40] + 1);
    v11 = *(_QWORD *)&dest[40];
  }
  *(_QWORD *)&src[0] = v9;
  *((_QWORD *)&src[0] + 1) = v13;
  *((_QWORD *)&src[3] + 1) += *((_QWORD *)&src[3] + 1) == 0LL;
  *(_QWORD *)&src[4] = v11;
  *((_QWORD *)&src[4] + 1) = v10;
  memcpy(&src[5], v27, 0x1D0uLL);
  LODWORD(src[36]) = v12;
  BYTE12(src[36]) = 2;
  v14 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  memmove((void *)(*((_QWORD *)&dest[8] + 1) + 592 * v14), src, 0x250uLL);
  *(_QWORD *)&dest[9] = v14 + 1;
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
  *(_QWORD *)&dest[33] = anon_fc2b91500dea380c7cbb82546323e12f_35_llvm_12921794859373524128;
  *((_QWORD *)&dest[33] + 1) = 4LL;
  *(_QWORD *)&dest[34] = anon_fc2b91500dea380c7cbb82546323e12f_35_llvm_12921794859373524128;
  *(_OWORD *)((char *)&dest[34] + 8) = 4uLL;
  *(_QWORD *)&dest[36] = 0x11000000110000LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v27[0] = 0LL;
  *((_QWORD *)&v27[0] + 1) = 1LL;
  *(_QWORD *)&v27[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v27, 0LL, 23LL);
  v15 = *((_QWORD *)&v27[0] + 1);
  v16 = *(_QWORD *)&v27[1];
  *(_OWORD *)(*((_QWORD *)&v27[0] + 1) + *(_QWORD *)&v27[1]) = xmmword_1E9E0;
  *(_QWORD *)(v15 + v16 + 15) = 0x2E6E6F6974616D72LL;
  *(_QWORD *)&v27[1] = v16 + 23;
  v17 = *(_QWORD *)&v27[0];
  if ( *(_QWORD *)&v27[0] != 0x8000000000000000LL )
    v27[0] = *(_OWORD *)((char *)v27 + 8);
  *((_QWORD *)&dest[27] + 1) = v17;
  dest[28] = v27[0];
  v18 = *(_QWORD *)&dest[0];
  v19 = *((_QWORD *)&dest[4] + 1);
  v20 = *(_QWORD *)&dest[4];
  memcpy(v27, &dest[5], 0x1D0uLL);
  if ( !*(_QWORD *)&src[1] )
  {
    v21 = dest[36];
LABEL_34:
    v22 = *((_QWORD *)&dest[0] + 1);
    goto LABEL_35;
  }
  v21 = dest[36];
  if ( !*(_QWORD *)&dest[34] && LODWORD(dest[36]) == (_DWORD)<T as core::any::Any>::type_id )
    goto LABEL_34;
  v22 = *((_QWORD *)&dest[0] + 1);
  if ( !*(_QWORD *)&dest[0] )
    v22 = *((_QWORD *)&src[1] + 1);
  ++*((_QWORD *)&src[1] + 1);
  v18 = (*(_QWORD *)&dest[0] == 0LL) + *(_QWORD *)&dest[0];
LABEL_35:
  if ( !*((_QWORD *)&dest[3] + 1) )
  {
    v19 = *((_QWORD *)&src[40] + 1);
    v20 = *(_QWORD *)&src[40];
  }
  *(_QWORD *)&dest[0] = v18;
  *((_QWORD *)&dest[0] + 1) = v22;
  *((_QWORD *)&dest[3] + 1) += *((_QWORD *)&dest[3] + 1) == 0LL;
  *(_QWORD *)&dest[4] = v20;
  *((_QWORD *)&dest[4] + 1) = v19;
  memcpy(&dest[5], v27, 0x1D0uLL);
  LODWORD(dest[36]) = v21;
  BYTE12(dest[36]) = 5;
  v23 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[9] == *(_QWORD *)&src[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[8]);
  memmove((void *)(*((_QWORD *)&src[8] + 1) + 592 * v23), dest, 0x250uLL);
  *(_QWORD *)&src[9] = v23 + 1;
  memcpy(a1, src, 0x2C8uLL);
  return a1;
}
