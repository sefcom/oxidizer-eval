void *__fastcall uu_link::uu_app(void *dest)
{
  __int64 v1; // rcx
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // r15
  __int64 v5; // r14
  _OWORD v7[2]; // [rsp+0h] [rbp-5D8h] BYREF
  _OWORD desta[45]; // [rsp+20h] [rbp-5B8h] BYREF
  _OWORD src[46]; // [rsp+2F0h] [rbp-2E8h] BYREF

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
  src[35] = xmmword_DE8C8;
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
  *(_QWORD *)&desta[0] = 0LL;
  *((_QWORD *)&desta[0] + 1) = 1LL;
  *(_QWORD *)&desta[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(desta, 0LL, 73LL);
  v1 = *((_QWORD *)&desta[0] + 1);
  v2 = *(_QWORD *)&desta[1];
  *(_OWORD *)(*((_QWORD *)&desta[0] + 1) + *(_QWORD *)&desta[1] + 57LL) = *(__int128 *)((char *)&xmmword_183DC + 9);
  qmemcpy((void *)(v1 + v2), "Call the link function to create a link named FILE2 to an existi", 64);
  *(_QWORD *)&desta[1] = v2 + 73;
  v3 = *(_QWORD *)&desta[0];
  v7[0] = *(_OWORD *)((char *)desta + 8);
  if ( *(_QWORD *)&desta[0] != 0x8000000000000000LL )
    desta[0] = v7[0];
  *(_QWORD *)&src[20] = v3;
  *(_OWORD *)((char *)&src[20] + 8) = desta[0];
  memcpy(desta, src, 0x2C8uLL);
  uucore::format_usage(v7, aFile1File2, 14LL);
  v4 = *(_QWORD *)&v7[0];
  if ( *(_QWORD *)&v7[0] != 0x8000000000000000LL )
    src[0] = *(_OWORD *)((char *)v7 + 8);
  if ( 2LL * *(_QWORD *)&desta[29] )
    _rust_dealloc(*((_QWORD *)&desta[29] + 1), *(_QWORD *)&desta[29], 1LL);
  *(_QWORD *)&desta[29] = v4;
  *(_OWORD *)((char *)&desta[29] + 8) = src[0];
  memcpy(src, desta, 0x2BCuLL);
  *(_QWORD *)((char *)&src[43] + 12) = *(_QWORD *)((char *)&desta[43] + 12) | 0x8000000080LL;
  DWORD1(src[44]) = DWORD1(desta[44]);
  *(_QWORD *)&desta[0] = 0LL;
  *(_QWORD *)&desta[1] = 1LL;
  *((_QWORD *)&desta[1] + 1) = 2LL;
  desta[2] = 2uLL;
  *((_QWORD *)&desta[3] + 1) = 1LL;
  desta[4] = src[40];
  *(_QWORD *)&desta[5] = 2LL;
  *((_QWORD *)&desta[6] + 1) = 0LL;
  desta[7] = 8uLL;
  *((_QWORD *)&desta[8] + 1) = 8LL;
  desta[9] = 0LL;
  desta[10] = 8uLL;
  *((_QWORD *)&desta[11] + 1) = 8LL;
  desta[12] = 0LL;
  desta[13] = 8uLL;
  *((_QWORD *)&desta[14] + 1) = 8LL;
  desta[15] = 0LL;
  desta[16] = 8uLL;
  *((_QWORD *)&desta[17] + 1) = 8LL;
  desta[18] = 0LL;
  desta[19] = 8uLL;
  *((_QWORD *)&desta[20] + 1) = 4LL;
  desta[21] = 0LL;
  desta[22] = 8uLL;
  *((_QWORD *)&desta[23] + 1) = 8LL;
  desta[24] = 0LL;
  desta[25] = 8uLL;
  *((_QWORD *)&desta[26] + 1) = 8LL;
  *(_QWORD *)&desta[27] = 0LL;
  *((_QWORD *)&desta[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&desta[29] = 0x8000000000000000LL;
  *((_QWORD *)&desta[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&desta[33] = aFiles;
  *((_QWORD *)&desta[33] + 1) = 5LL;
  *(_QWORD *)&desta[34] = 0LL;
  *(_QWORD *)&desta[35] = 0LL;
  desta[36] = xmmword_FDC0;
  v5 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[9] == *(_QWORD *)&src[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[8]);
  memmove((void *)(*((_QWORD *)&src[8] + 1) + 592 * v5), desta, 0x250uLL);
  *(_QWORD *)&src[9] = v5 + 1;
  memcpy(dest, src, 0x2C8uLL);
  return dest;
}
