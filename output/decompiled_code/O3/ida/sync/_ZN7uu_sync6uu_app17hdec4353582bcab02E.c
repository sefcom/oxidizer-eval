void *__fastcall uu_sync::uu_app(void *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // r15
  __int64 v19; // rbx
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rbx
  _OWORD dest[45]; // [rsp+70h] [rbp-9F8h] BYREF
  _OWORD src[45]; // [rsp+340h] [rbp-728h] BYREF
  _OWORD v27[37]; // [rsp+610h] [rbp-458h] BYREF
  _OWORD v28[29]; // [rsp+860h] [rbp-208h] BYREF

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
  src[35] = xmmword_E0EF0;
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
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 47LL);
  v1 = *((_QWORD *)&dest[0] + 1);
  v2 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 31LL) = *(__int128 *)((char *)&xmmword_187DC + 15);
  qmemcpy((void *)(v1 + v2), "Synchronize cached writes to per", 32);
  *(_QWORD *)&dest[1] = v2 + 47;
  v3 = *(_QWORD *)&dest[0];
  v27[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v27[0];
  *(_QWORD *)&src[20] = v3;
  *(_OWORD *)((char *)&src[20] + 8) = dest[0];
  memcpy(dest, src, 0x2C8uLL);
  uucore::format_usage(v27, aOptionFile, 22LL);
  v4 = *(_QWORD *)&v27[0];
  if ( *(_QWORD *)&v27[0] != 0x8000000000000000LL )
    src[0] = *(_OWORD *)((char *)v27 + 8);
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
  *(_QWORD *)&dest[33] = aFileSystem;
  *((_QWORD *)&dest[33] + 1) = 11LL;
  *(_QWORD *)&dest[34] = aFileSystem;
  *(_OWORD *)((char *)&dest[34] + 8) = 0xBuLL;
  *(_QWORD *)&dest[36] = 0x11000000000066LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  alloc::raw_vec::RawVec<T,A>::grow_one((char *)&dest[6] + 8);
  v5 = *(_QWORD *)&dest[7];
  **(_QWORD **)&dest[7] = aData;
  *(_QWORD *)(v5 + 8) = 4LL;
  *((_QWORD *)&dest[7] + 1) = 1LL;
  memcpy(v27, dest, sizeof(v27));
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 69LL);
  v6 = *((_QWORD *)&dest[0] + 1);
  v7 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 48LL) = xmmword_18841;
  qmemcpy((void *)(v6 + v7), "sync the file systems that contain the files (Li", 48);
  *(_QWORD *)(v6 + v7 + 61) = 0x29796C6E6F207377LL;
  *(_QWORD *)&dest[1] = v7 + 69;
  v8 = *(_QWORD *)&dest[0];
  v28[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v28[0];
  if ( *((_QWORD *)&v27[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&v27[27] + 1) )
    _rust_dealloc(*(_QWORD *)&v27[28], *((_QWORD *)&v27[27] + 1), 1LL);
  *((_QWORD *)&v27[27] + 1) = v8;
  v27[28] = dest[0];
  v9 = *((_QWORD *)&v27[0] + 1);
  v10 = *((_QWORD *)&v27[4] + 1);
  v11 = *(_QWORD *)&v27[4];
  memcpy(v28, &v27[5], sizeof(v28));
  if ( *(_QWORD *)&src[1] && (*(_QWORD *)&v27[34] || LODWORD(v27[36]) != 1114112) )
  {
    if ( !*(_QWORD *)&v27[0] )
      v9 = *((_QWORD *)&src[1] + 1);
    v12 = (*(_QWORD *)&v27[0] == 0LL) + *(_QWORD *)&v27[0];
    ++*((_QWORD *)&src[1] + 1);
  }
  else
  {
    v12 = *(_QWORD *)&v27[0];
  }
  if ( !*((_QWORD *)&v27[3] + 1) )
  {
    v10 = *((_QWORD *)&src[40] + 1);
    v11 = *(_QWORD *)&src[40];
  }
  *(_QWORD *)&dest[0] = v12;
  *((_QWORD *)&dest[0] + 1) = v9;
  dest[1] = v27[1];
  dest[2] = v27[2];
  *(_QWORD *)&dest[3] = *(_QWORD *)&v27[3];
  *((_QWORD *)&dest[3] + 1) = (*((_QWORD *)&v27[3] + 1) == 0LL) + *((_QWORD *)&v27[3] + 1);
  *(_QWORD *)&dest[4] = v11;
  *((_QWORD *)&dest[4] + 1) = v10;
  memcpy(&dest[5], v28, 0x1D0uLL);
  *(_QWORD *)&dest[34] = *(_QWORD *)&v27[34];
  *(_OWORD *)((char *)&dest[34] + 8) = *(_OWORD *)((char *)&v27[34] + 8);
  *((_QWORD *)&dest[35] + 1) = *((_QWORD *)&v27[35] + 1);
  LODWORD(dest[36]) = v27[36];
  *(_QWORD *)((char *)&dest[36] + 4) = *(_QWORD *)((char *)&v27[36] + 4);
  BYTE12(dest[36]) = 2;
  *(_WORD *)((char *)&dest[36] + 13) = *(_WORD *)((char *)&v27[36] + 13);
  HIBYTE(dest[36]) = HIBYTE(v27[36]);
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
  *(_QWORD *)&src[33] = aData;
  *((_QWORD *)&src[33] + 1) = 4LL;
  *(_QWORD *)&src[34] = aData;
  *(_OWORD *)((char *)&src[34] + 8) = 4uLL;
  *(_QWORD *)&src[36] = 0x11000000000064LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  alloc::raw_vec::RawVec<T,A>::grow_one((char *)&src[6] + 8);
  v14 = *(_QWORD *)&src[7];
  **(_QWORD **)&src[7] = aFileSystem;
  *(_QWORD *)(v14 + 8) = 11LL;
  *((_QWORD *)&src[7] + 1) = 1LL;
  memcpy(v27, src, sizeof(v27));
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 54LL);
  v15 = *((_QWORD *)&src[0] + 1);
  v16 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 32LL) = xmmword_18876;
  qmemcpy((void *)(v15 + v16), "sync only file data, no unneeded", 32);
  *(_QWORD *)(v15 + v16 + 46) = 0x29796C6E6F207875LL;
  *(_QWORD *)&src[1] = v16 + 54;
  v17 = *(_QWORD *)&src[0];
  v28[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = v28[0];
  if ( *((_QWORD *)&v27[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&v27[27] + 1) )
    _rust_dealloc(*(_QWORD *)&v27[28], *((_QWORD *)&v27[27] + 1), 1LL);
  *((_QWORD *)&v27[27] + 1) = v17;
  v27[28] = src[0];
  v18 = *(_QWORD *)&v27[0];
  v19 = *((_QWORD *)&v27[4] + 1);
  v20 = *(_QWORD *)&v27[4];
  memcpy(v28, &v27[5], sizeof(v28));
  if ( *(_QWORD *)&dest[1] && (*(_QWORD *)&v27[34] || LODWORD(v27[36]) != 1114112) )
  {
    v21 = *((_QWORD *)&v27[0] + 1);
    if ( !*(_QWORD *)&v27[0] )
      v21 = *((_QWORD *)&dest[1] + 1);
    v18 = (*(_QWORD *)&v27[0] == 0LL) + *(_QWORD *)&v27[0];
    ++*((_QWORD *)&dest[1] + 1);
  }
  else
  {
    v21 = *((_QWORD *)&v27[0] + 1);
  }
  if ( !*((_QWORD *)&v27[3] + 1) )
  {
    v19 = *((_QWORD *)&dest[40] + 1);
    v20 = *(_QWORD *)&dest[40];
  }
  *(_QWORD *)&src[0] = v18;
  *((_QWORD *)&src[0] + 1) = v21;
  src[1] = v27[1];
  src[2] = v27[2];
  *(_QWORD *)&src[3] = *(_QWORD *)&v27[3];
  *((_QWORD *)&src[3] + 1) = (*((_QWORD *)&v27[3] + 1) == 0LL) + *((_QWORD *)&v27[3] + 1);
  *(_QWORD *)&src[4] = v20;
  *((_QWORD *)&src[4] + 1) = v19;
  memcpy(&src[5], v28, 0x1D0uLL);
  *(_QWORD *)&src[34] = *(_QWORD *)&v27[34];
  *(_OWORD *)((char *)&src[34] + 8) = *(_OWORD *)((char *)&v27[34] + 8);
  *((_QWORD *)&src[35] + 1) = *((_QWORD *)&v27[35] + 1);
  LODWORD(src[36]) = v27[36];
  *(_QWORD *)((char *)&src[36] + 4) = *(_QWORD *)((char *)&v27[36] + 4);
  BYTE12(src[36]) = 2;
  *(_WORD *)((char *)&src[36] + 13) = *(_WORD *)((char *)&v27[36] + 13);
  HIBYTE(src[36]) = HIBYTE(v27[36]);
  v22 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  memmove((void *)(*((_QWORD *)&dest[8] + 1) + 592 * v22), src, 0x250uLL);
  *(_QWORD *)&dest[9] = v22 + 1;
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
  *(_QWORD *)&dest[33] = aFiles;
  *((_QWORD *)&dest[33] + 1) = 5LL;
  *(_QWORD *)&dest[34] = 0LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000110000LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 513;
  v23 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[9] == *(_QWORD *)&src[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[8]);
  memmove((void *)(*((_QWORD *)&src[8] + 1) + 592 * v23), dest, 0x250uLL);
  *(_QWORD *)&src[9] = v23 + 1;
  memcpy(a1, src, 0x2C8uLL);
  return a1;
}
