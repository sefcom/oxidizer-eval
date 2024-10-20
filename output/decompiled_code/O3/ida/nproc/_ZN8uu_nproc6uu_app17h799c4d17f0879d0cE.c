void *__fastcall uu_nproc::uu_app(void *a1)
{
  __int64 v1; // r15
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r13
  int v10; // r15d
  __int64 v11; // rcx
  __int64 v12; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v19; // rbx
  __int64 v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rbx
  _OWORD src[45]; // [rsp+70h] [rbp-9F8h] BYREF
  _OWORD dest[45]; // [rsp+340h] [rbp-728h] BYREF
  _OWORD v26[37]; // [rsp+610h] [rbp-458h] BYREF
  _OWORD v27[29]; // [rsp+860h] [rbp-208h] BYREF

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
  src[35] = xmmword_E1F68;
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
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 215LL);
  v1 = *(_QWORD *)&dest[1];
  memcpy((void *)(*(_QWORD *)&dest[1] + *((_QWORD *)&dest[0] + 1)), aPrintTheNumber, 0xD7uLL);
  *(_QWORD *)&dest[1] = v1 + 215;
  v2 = *(_QWORD *)&dest[0];
  v26[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v26[0];
  *(_QWORD *)&src[20] = v2;
  *(_OWORD *)((char *)&src[20] + 8) = dest[0];
  memcpy(dest, src, 0x2C8uLL);
  uucore::format_usage(v26, aOptions, 15LL);
  v3 = *(_QWORD *)&v26[0];
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    src[0] = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&dest[29] != 0x8000000000000000LL && *(_QWORD *)&dest[29] )
    _rust_dealloc(*((_QWORD *)&dest[29] + 1), *(_QWORD *)&dest[29], 1LL);
  *(_QWORD *)&dest[29] = v3;
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
  *(_QWORD *)&dest[33] = aAll;
  *((_QWORD *)&dest[33] + 1) = 3LL;
  *(_QWORD *)&dest[34] = aAll;
  *(_OWORD *)((char *)&dest[34] + 8) = 3uLL;
  *(_QWORD *)&dest[36] = 0x11000000110000LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v26, 0LL, 49LL);
  v4 = *((_QWORD *)&v26[0] + 1);
  v5 = *(_QWORD *)&v26[1];
  *(_OWORD *)(*((_QWORD *)&v26[0] + 1) + *(_QWORD *)&v26[1] + 32LL) = *(_OWORD *)&aPrintTheNumber_0[32];
  qmemcpy((void *)(v4 + v5), "print the number of cores availa", 32);
  *(_BYTE *)(v4 + v5 + 48) = 109;
  *(_QWORD *)&v26[1] = v5 + 49;
  v6 = *(_QWORD *)&v26[0];
  v27[0] = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v26[0] = v27[0];
  *((_QWORD *)&dest[27] + 1) = v6;
  dest[28] = v26[0];
  v7 = *(_QWORD *)&dest[0];
  v27[0] = dest[1];
  v27[1] = dest[2];
  *(_QWORD *)&v27[2] = *(_QWORD *)&dest[3];
  v8 = *((_QWORD *)&dest[4] + 1);
  v9 = *(_QWORD *)&dest[4];
  memcpy(v26, &dest[5], 0x1D0uLL);
  if ( !*(_QWORD *)&src[1] )
  {
    v10 = dest[36];
LABEL_19:
    v11 = *((_QWORD *)&dest[0] + 1);
    goto LABEL_20;
  }
  v10 = dest[36];
  if ( !*(_QWORD *)&dest[34] && LODWORD(dest[36]) == 1114112 )
    goto LABEL_19;
  v11 = *((_QWORD *)&dest[0] + 1);
  if ( !*(_QWORD *)&dest[0] )
    v11 = *((_QWORD *)&src[1] + 1);
  v7 = (*(_QWORD *)&dest[0] == 0LL) + *(_QWORD *)&dest[0];
  ++*((_QWORD *)&src[1] + 1);
LABEL_20:
  if ( !*((_QWORD *)&dest[3] + 1) )
  {
    v8 = *((_QWORD *)&src[40] + 1);
    v9 = *(_QWORD *)&src[40];
  }
  *(_QWORD *)&dest[0] = v7;
  *((_QWORD *)&dest[0] + 1) = v11;
  dest[1] = v27[0];
  dest[2] = v27[1];
  *(_QWORD *)&dest[3] = *(_QWORD *)&v27[2];
  *((_QWORD *)&dest[3] + 1) += *((_QWORD *)&dest[3] + 1) == 0LL;
  *(_QWORD *)&dest[4] = v9;
  *((_QWORD *)&dest[4] + 1) = v8;
  memcpy(&dest[5], v26, 0x1D0uLL);
  LODWORD(dest[36]) = v10;
  BYTE12(dest[36]) = 2;
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
  *(_QWORD *)&src[33] = aIgnore;
  *((_QWORD *)&src[33] + 1) = 6LL;
  *(_QWORD *)&src[34] = aIgnore;
  *(_OWORD *)((char *)&src[34] + 8) = 6uLL;
  *(_QWORD *)&src[36] = 0x11000000110000LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  v13 = (_QWORD *)_rust_alloc(16LL, 8LL);
  if ( !v13 )
    alloc::raw_vec::handle_error(8LL, 16LL);
  v14 = v13;
  *v13 = aN;
  v13[1] = 1LL;
  if ( *((_QWORD *)&src[21] + 1) )
    _rust_dealloc(*(_QWORD *)&src[22], 16LL * *((_QWORD *)&src[21] + 1), 8LL);
  *((_QWORD *)&src[21] + 1) = 1LL;
  *(_QWORD *)&src[22] = v14;
  *((_QWORD *)&src[22] + 1) = 1LL;
  memcpy(v26, src, sizeof(v26));
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 20LL);
  v15 = *((_QWORD *)&src[0] + 1);
  v16 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1]) = unk_1868B;
  *(_DWORD *)(v15 + v16 + 16) = 1936028271;
  *(_QWORD *)&src[1] = v16 + 20;
  v17 = *(_QWORD *)&src[0];
  v27[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v27[0];
  if ( *((_QWORD *)&v26[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&v26[27] + 1) )
    _rust_dealloc(*(_QWORD *)&v26[28], *((_QWORD *)&v26[27] + 1), 1LL);
  *((_QWORD *)&v26[27] + 1) = v17;
  v26[28] = src[0];
  v18 = *(_QWORD *)&v26[0];
  v19 = *((_QWORD *)&v26[4] + 1);
  v20 = *(_QWORD *)&v26[4];
  memcpy(v27, &v26[5], sizeof(v27));
  if ( *(_QWORD *)&dest[1] && (*(_QWORD *)&v26[34] || LODWORD(v26[36]) != 1114112) )
  {
    v21 = *((_QWORD *)&v26[0] + 1);
    if ( !*(_QWORD *)&v26[0] )
      v21 = *((_QWORD *)&dest[1] + 1);
    ++*((_QWORD *)&dest[1] + 1);
    v18 = (*(_QWORD *)&v26[0] == 0LL) + *(_QWORD *)&v26[0];
  }
  else
  {
    v21 = *((_QWORD *)&v26[0] + 1);
  }
  if ( !*((_QWORD *)&v26[3] + 1) )
  {
    v19 = *((_QWORD *)&dest[40] + 1);
    v20 = *(_QWORD *)&dest[40];
  }
  *(_QWORD *)&src[0] = v18;
  *((_QWORD *)&src[0] + 1) = v21;
  src[1] = v26[1];
  src[2] = v26[2];
  *(_QWORD *)&src[3] = *(_QWORD *)&v26[3];
  *((_QWORD *)&src[3] + 1) = (*((_QWORD *)&v26[3] + 1) == 0LL) + *((_QWORD *)&v26[3] + 1);
  *(_QWORD *)&src[4] = v20;
  *((_QWORD *)&src[4] + 1) = v19;
  memcpy(&src[5], v27, 0x1D0uLL);
  *(_QWORD *)&src[34] = *(_QWORD *)&v26[34];
  *(_OWORD *)((char *)&src[34] + 8) = *(_OWORD *)((char *)&v26[34] + 8);
  *((_QWORD *)&src[35] + 1) = *((_QWORD *)&v26[35] + 1);
  src[36] = v26[36];
  v22 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  memmove((void *)(*((_QWORD *)&dest[8] + 1) + 592 * v22), src, 0x250uLL);
  *(_QWORD *)&dest[9] = v22 + 1;
  memcpy(a1, dest, 0x2C8uLL);
  return a1;
}
