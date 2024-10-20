char *__fastcall uu_arch::uu_app(char *dest)
{
  __int64 v1; // rcx
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r15
  int v7; // ecx
  _OWORD src[45]; // [rsp+10h] [rbp-5B8h] BYREF
  _OWORD desta[46]; // [rsp+2E0h] [rbp-2E8h] BYREF

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
  src[35] = xmmword_D7D00;
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
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(desta, 0LL, 28LL);
  v1 = *((_QWORD *)&desta[0] + 1);
  v2 = *(_QWORD *)&desta[1];
  *(_OWORD *)(*((_QWORD *)&desta[0] + 1) + *(_QWORD *)&desta[1] + 12LL) = *(__int128 *)((char *)&xmmword_179CC + 12);
  *(_OWORD *)(v1 + v2) = xmmword_179CC;
  *(_QWORD *)&desta[1] = v2 + 28;
  v3 = *(_QWORD *)&desta[0];
  if ( *(_QWORD *)&desta[0] != 0x8000000000000000LL )
    desta[0] = *(_OWORD *)((char *)desta + 8);
  *(_QWORD *)&src[20] = v3;
  *(_OWORD *)((char *)&src[20] + 8) = desta[0];
  memcpy(desta, src, 0x2C8uLL);
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 48LL);
  v4 = *((_QWORD *)&src[0] + 1);
  v5 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 32LL) = xmmword_17A08;
  qmemcpy((void *)(v4 + v5), "Determine architecture name for ", 32);
  *(_QWORD *)&src[1] = v5 + 48;
  v6 = *(_QWORD *)&src[0];
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = *(_OWORD *)((char *)src + 8);
  if ( 2LL * *(_QWORD *)&desta[26] )
    _rust_dealloc(*((_QWORD *)&desta[26] + 1), *(_QWORD *)&desta[26], 1LL);
  *(_QWORD *)&desta[26] = v6;
  *(_OWORD *)((char *)&desta[26] + 8) = src[0];
  memcpy(dest, desta, 0x2BCuLL);
  v7 = DWORD1(desta[44]);
  *(_QWORD *)(dest + 700) = *(_QWORD *)((char *)&desta[43] + 12) | 0x8000000080LL;
  *((_DWORD *)dest + 177) = v7;
  return dest;
}
