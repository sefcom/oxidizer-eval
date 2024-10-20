__int64 __fastcall uu_hashsum::uu_app_opt_bits(void *dest, const void *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rcx
  _BYTE src[360]; // [rsp+10h] [rbp-788h] BYREF
  _BYTE v7[232]; // [rsp+178h] [rbp-620h] BYREF
  _BYTE v8[360]; // [rsp+260h] [rbp-538h] BYREF
  __int64 v9; // [rsp+3C8h] [rbp-3D0h]
  _BYTE v10[224]; // [rsp+3D0h] [rbp-3C8h] BYREF
  _BYTE desta[744]; // [rsp+4B0h] [rbp-2E8h] BYREF

  memcpy(desta, a2, 0x2C8uLL);
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
  *(_OWORD *)v7 = 0LL;
  *(_OWORD *)&v7[24] = 0LL;
  *(_OWORD *)&v7[48] = 0LL;
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
  *(_QWORD *)&v7[16] = 8LL;
  *(_QWORD *)&v7[40] = 8LL;
  *(_QWORD *)&v7[64] = 8LL;
  *(_QWORD *)&v7[72] = 0LL;
  *(_QWORD *)&v7[80] = 0x8000000000000000LL;
  *(_QWORD *)&v7[104] = 0x8000000000000000LL;
  *(_QWORD *)&v7[144] = 0x8000000000000001LL;
  *(_QWORD *)&v7[168] = aBits;
  *(_QWORD *)&v7[176] = 4LL;
  *(_QWORD *)&v7[184] = aBits;
  *(_QWORD *)&v7[192] = 4LL;
  *(_QWORD *)&v7[200] = 0LL;
  *(_QWORD *)&v7[216] = 0x11000000110000LL;
  *(_DWORD *)&v7[224] = 0;
  *(_WORD *)&v7[228] = 3337;
  *(_QWORD *)v8 = 0LL;
  *(_QWORD *)&v8[8] = 1LL;
  *(_QWORD *)&v8[16] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v8, 0LL, 43LL);
  v2 = *(_QWORD *)&v8[8];
  v3 = *(_QWORD *)&v8[16];
  *(_OWORD *)(*(_QWORD *)&v8[8] + *(_QWORD *)&v8[16] + 27LL) = unk_71B23;
  qmemcpy((void *)(v2 + v3), "set the size of the output (only", 32);
  *(_QWORD *)&v8[16] = v3 + 43;
  v4 = *(_QWORD *)v8;
  if ( *(_QWORD *)v8 != 0x8000000000000000LL )
    *(_OWORD *)v8 = *(_OWORD *)&v8[8];
  *(_QWORD *)&v7[80] = v4;
  *(_OWORD *)&v7[88] = *(_OWORD *)v8;
  memcpy(v8, src, sizeof(v8));
  memcpy(v10, &v7[8], sizeof(v10));
  v9 = *(_QWORD *)v7;
  clap_builder::builder::arg::Arg::value_names(src, v8);
  clap_builder::builder::arg::Arg::value_parser(v8, src);
  return clap_builder::builder::command::Command::arg(dest, desta);
}
