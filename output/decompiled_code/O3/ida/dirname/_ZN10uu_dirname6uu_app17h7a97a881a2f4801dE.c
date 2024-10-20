void *__fastcall uu_dirname::uu_app(void *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v10; // r12
  int v11; // r14d
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rbx
  _OWORD src[45]; // [rsp+70h] [rbp-7A8h] BYREF
  _OWORD dest[45]; // [rsp+340h] [rbp-4D8h] BYREF
  _OWORD v18[32]; // [rsp+610h] [rbp-208h] BYREF

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  src[35] = xmmword_DB4C0;
  *(_QWORD *)&src[36] = 0LL;
  DWORD2(src[43]) = 1114112;
  *(_QWORD *)&src[17] = 0x8000000000000000LL;
  *((_QWORD *)&src[18] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[37] = 0LL;
  *(_QWORD *)&src[38] = 0LL;
  *(_QWORD *)&src[39] = 0LL;
  *(_QWORD *)&src[20] = 0x8000000000000000LL;
  *((_QWORD *)&src[21] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[23] = 0x8000000000000000LL;
  *((_QWORD *)&src[24] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[26] = 0x8000000000000000LL;
  *((_QWORD *)&src[27] + 1) = 0x8000000000000000LL;
  *((_QWORD *)&src[3] + 1) = 0LL;
  src[4] = 8uLL;
  *((_QWORD *)&src[5] + 1) = 4LL;
  src[6] = 0LL;
  src[7] = 8uLL;
  *(_QWORD *)&src[29] = 0x8000000000000000LL;
  *((_QWORD *)&src[30] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[32] = 0x8000000000000000LL;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[33] + 1) = 0x8000000000000000LL;
  *(_QWORD *)((char *)&src[43] + 12) = 0LL;
  *((_QWORD *)&src[8] + 1) = 8LL;
  src[9] = 0LL;
  src[10] = 8uLL;
  *((_QWORD *)&src[11] + 1) = 8LL;
  src[12] = 0LL;
  src[13] = 8uLL;
  *(_QWORD *)&src[40] = 0LL;
  src[1] = 1uLL;
  *(_QWORD *)&src[41] = 0LL;
  *(_QWORD *)&src[42] = 0LL;
  *(_QWORD *)&src[2] = 5LL;
  BYTE4(src[44]) = 0;
  *(_QWORD *)&src[43] = 0LL;
  *((_QWORD *)&src[14] + 1) = 8LL;
  src[15] = 0LL;
  src[16] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 35LL);
  v1 = *((_QWORD *)&dest[0] + 1);
  v2 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 16LL) = xmmword_18294;
  *(_OWORD *)(v1 + v2) = xmmword_18284;
  *(_DWORD *)(v1 + v2 + 31) = 1701667182;
  *(_QWORD *)&dest[1] = v2 + 35;
  v3 = *(_QWORD *)&dest[0];
  v18[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v18[0];
  *(_QWORD *)&src[20] = v3;
  *(_OWORD *)((char *)&src[20] + 8) = dest[0];
  memcpy(dest, src, 0x260uLL);
  dest[39] = src[39];
  dest[40] = src[40];
  dest[41] = src[41];
  dest[42] = src[42];
  dest[43] = src[43];
  *(_QWORD *)&dest[44] = *(_QWORD *)&src[44];
  *(_QWORD *)&dest[38] = a0027;
  *((_QWORD *)&dest[38] + 1) = 6LL;
  uucore::format_usage(v18, aOptionName, 19LL);
  v4 = *(_QWORD *)&v18[0];
  if ( *(_QWORD *)&v18[0] != 0x8000000000000000LL )
    src[0] = *(_OWORD *)((char *)v18 + 8);
  if ( 2LL * *(_QWORD *)&dest[29] )
    _rust_dealloc(*((_QWORD *)&dest[29] + 1), *(_QWORD *)&dest[29], 1LL);
  *(_QWORD *)&dest[29] = v4;
  *(_OWORD *)((char *)&dest[29] + 8) = src[0];
  memcpy(src, dest, 0x2BCuLL);
  *(_QWORD *)((char *)&src[43] + 12) = *(_QWORD *)((char *)&dest[43] + 12) | 0x8800000088LL;
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
  *(_QWORD *)&dest[33] = aZero;
  *((_QWORD *)&dest[33] + 1) = 4LL;
  *(_QWORD *)&dest[34] = aZero;
  *(_OWORD *)((char *)&dest[34] + 8) = 4uLL;
  *(_QWORD *)&dest[36] = 0x1100000000007ALL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v18[0] = 0LL;
  *((_QWORD *)&v18[0] + 1) = 1LL;
  *(_QWORD *)&v18[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v18, 0LL, 44LL);
  v5 = *((_QWORD *)&v18[0] + 1);
  v6 = *(_QWORD *)&v18[1];
  *(_OWORD *)(*((_QWORD *)&v18[0] + 1) + *(_QWORD *)&v18[1] + 28LL) = unk_182DC;
  qmemcpy((void *)(v5 + v6), "separate output with NUL rather ", 32);
  *(_QWORD *)&v18[1] = v6 + 44;
  v7 = *(_QWORD *)&v18[0];
  if ( *(_QWORD *)&v18[0] != 0x8000000000000000LL )
    v18[0] = *(_OWORD *)((char *)v18 + 8);
  *((_QWORD *)&dest[27] + 1) = v7;
  dest[28] = v18[0];
  v8 = *(_QWORD *)&dest[0];
  v9 = *((_QWORD *)&dest[4] + 1);
  v10 = *(_QWORD *)&dest[4];
  memcpy(v18, &dest[5], 0x1D0uLL);
  if ( !*(_QWORD *)&src[1] )
  {
    v11 = dest[36];
LABEL_18:
    v12 = *((_QWORD *)&dest[0] + 1);
    goto LABEL_19;
  }
  v11 = dest[36];
  if ( !*(_QWORD *)&dest[34] && LODWORD(dest[36]) == 1114112 )
    goto LABEL_18;
  v12 = *((_QWORD *)&dest[0] + 1);
  if ( !*(_QWORD *)&dest[0] )
    v12 = *((_QWORD *)&src[1] + 1);
  v8 = (*(_QWORD *)&dest[0] == 0LL) + *(_QWORD *)&dest[0];
  ++*((_QWORD *)&src[1] + 1);
LABEL_19:
  if ( !*((_QWORD *)&dest[3] + 1) )
  {
    v9 = *((_QWORD *)&src[40] + 1);
    v10 = *(_QWORD *)&src[40];
  }
  *(_QWORD *)&dest[0] = v8;
  *((_QWORD *)&dest[0] + 1) = v12;
  *((_QWORD *)&dest[3] + 1) += *((_QWORD *)&dest[3] + 1) == 0LL;
  *(_QWORD *)&dest[4] = v10;
  *((_QWORD *)&dest[4] + 1) = v9;
  memcpy(&dest[5], v18, 0x1D0uLL);
  LODWORD(dest[36]) = v11;
  BYTE12(dest[36]) = 2;
  v13 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[9] == *(_QWORD *)&src[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[8]);
  memmove((void *)(*((_QWORD *)&src[8] + 1) + 592 * v13), dest, 0x250uLL);
  *(_QWORD *)&src[9] = v13 + 1;
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
  *(_QWORD *)&src[33] = aDir_0;
  *((_QWORD *)&src[33] + 1) = 3LL;
  *(_QWORD *)&src[34] = 0LL;
  *(_QWORD *)&src[35] = 0LL;
  src[36] = xmmword_FA60;
  v14 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  memmove((void *)(*((_QWORD *)&dest[8] + 1) + 592 * v14), src, 0x250uLL);
  *(_QWORD *)&dest[9] = v14 + 1;
  memcpy(a1, dest, 0x2C8uLL);
  return a1;
}
