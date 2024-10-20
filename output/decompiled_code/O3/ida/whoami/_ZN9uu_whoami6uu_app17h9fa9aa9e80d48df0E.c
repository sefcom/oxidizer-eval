char *__fastcall uu_whoami::uu_app(char *dest)
{
  __int64 v1; // rcx
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // r15
  int v5; // ecx
  __int128 v7; // [rsp+0h] [rbp-5C8h]
  _BYTE src[712]; // [rsp+18h] [rbp-5B0h] BYREF
  _OWORD desta[46]; // [rsp+2E0h] [rbp-2E8h] BYREF

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  *(_OWORD *)&src[72] = 0LL;
  *(_OWORD *)&src[96] = 0LL;
  *(_OWORD *)&src[144] = 0LL;
  *(_OWORD *)&src[168] = 0LL;
  *(_OWORD *)&src[192] = 0LL;
  *(_OWORD *)&src[240] = 0LL;
  *(_QWORD *)src = 0LL;
  *(_QWORD *)&src[16] = 1LL;
  *(_QWORD *)&src[24] = 0LL;
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
  *(_OWORD *)&src[560] = xmmword_DBAE8;
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
  *(_QWORD *)&desta[0] = 0LL;
  *((_QWORD *)&desta[0] + 1) = 1LL;
  *(_QWORD *)&desta[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(desta, 0LL, 27LL);
  v1 = *((_QWORD *)&desta[0] + 1);
  v2 = *(_QWORD *)&desta[1];
  *(_OWORD *)(*((_QWORD *)&desta[0] + 1) + *(_QWORD *)&desta[1] + 11LL) = unk_181E7;
  *(_OWORD *)(v1 + v2) = unk_181DC;
  *(_QWORD *)&desta[1] = v2 + 27;
  v3 = *(_QWORD *)&desta[0];
  v7 = *(_OWORD *)((char *)desta + 8);
  if ( *(_QWORD *)&desta[0] != 0x8000000000000000LL )
    desta[0] = *(_OWORD *)((char *)desta + 8);
  *(_QWORD *)&src[320] = v3;
  *(_OWORD *)&src[328] = desta[0];
  memcpy(desta, src, 0x2C8uLL);
  uucore::format_usage(src, asc_181F7, 2LL);
  v4 = *(_QWORD *)src;
  if ( *(_QWORD *)src != 0x8000000000000000LL )
    v7 = *(_OWORD *)&src[8];
  if ( 2LL * *(_QWORD *)&desta[29] )
    _rust_dealloc(*((_QWORD *)&desta[29] + 1), *(_QWORD *)&desta[29], 1LL);
  *(_QWORD *)&desta[29] = v4;
  *(_OWORD *)((char *)&desta[29] + 8) = v7;
  memcpy(dest, desta, 0x2BCuLL);
  v5 = DWORD1(desta[44]);
  *(_QWORD *)(dest + 700) = *(_QWORD *)((char *)&desta[43] + 12) | 0x8000000080LL;
  *((_DWORD *)dest + 177) = v5;
  return dest;
}
