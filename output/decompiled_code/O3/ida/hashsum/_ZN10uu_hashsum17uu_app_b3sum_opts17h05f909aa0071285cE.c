__int64 __fastcall uu_hashsum::uu_app_b3sum_opts(void *dest, const void *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  _BYTE src[588]; // [rsp+10h] [rbp-788h] BYREF
  _BYTE v7[3]; // [rsp+25Ch] [rbp-53Ch]
  char v8; // [rsp+25Fh] [rbp-539h]
  _BYTE v9[588]; // [rsp+260h] [rbp-538h] BYREF
  char v10; // [rsp+4ACh] [rbp-2ECh]
  __int16 v11; // [rsp+4ADh] [rbp-2EBh]
  char v12; // [rsp+4AFh] [rbp-2E9h]
  _BYTE desta[736]; // [rsp+4B8h] [rbp-2E0h] BYREF

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
  *(_QWORD *)&src[528] = aNoNames;
  *(_QWORD *)&src[536] = 8LL;
  *(_QWORD *)&src[544] = aNoNames;
  *(_QWORD *)&src[552] = 8LL;
  *(_QWORD *)&src[560] = 0LL;
  *(_QWORD *)&src[576] = 0x11000000110000LL;
  *(_DWORD *)&src[584] = 0;
  *(_WORD *)v7 = 3337;
  *(_QWORD *)v9 = 0LL;
  *(_QWORD *)&v9[8] = 1LL;
  *(_QWORD *)&v9[16] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v9, 0LL, 67LL);
  v2 = *(_QWORD *)&v9[8];
  v3 = *(_QWORD *)&v9[16];
  *(_OWORD *)(*(_QWORD *)&v9[8] + *(_QWORD *)&v9[16] + 48LL) = unk_71AF5;
  qmemcpy((void *)(v2 + v3), "Omits filenames in the output (option not presen", 48);
  *(_DWORD *)(v2 + v3 + 63) = 695430249;
  *(_QWORD *)&v9[16] = v3 + 67;
  v4 = *(_QWORD *)v9;
  if ( *(_QWORD *)v9 != 0x8000000000000000LL )
    *(_OWORD *)v9 = *(_OWORD *)&v9[8];
  *(_QWORD *)&src[440] = v4;
  *(_OWORD *)&src[448] = *(_OWORD *)v9;
  memcpy(v9, src, sizeof(v9));
  v11 = *(_WORD *)&v7[1];
  v12 = v8;
  v10 = 2;
  return clap_builder::builder::command::Command::arg(dest, desta);
}
