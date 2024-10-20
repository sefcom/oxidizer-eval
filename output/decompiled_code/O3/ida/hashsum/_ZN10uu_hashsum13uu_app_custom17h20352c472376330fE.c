void *__fastcall uu_hashsum::uu_app_custom(void *a1)
{
  __int64 v1; // r12
  char *v2; // rax
  char *v3; // rcx
  char *v4; // rbp
  char *v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rdi
  __int64 v8; // r14
  void *v9; // rbx
  _BYTE v11[24]; // [rsp+0h] [rbp-B18h] BYREF
  void *v12; // [rsp+20h] [rbp-AF8h]
  unsigned __int64 v13; // [rsp+28h] [rbp-AF0h]
  __int128 v14; // [rsp+30h] [rbp-AE8h]
  _BYTE src[588]; // [rsp+40h] [rbp-AD8h] BYREF
  _BYTE v16[3]; // [rsp+28Ch] [rbp-88Ch]
  char v17; // [rsp+28Fh] [rbp-889h]
  _BYTE dest[589]; // [rsp+308h] [rbp-810h] BYREF
  __int16 v19; // [rsp+555h] [rbp-5C3h]
  char v20; // [rsp+557h] [rbp-5C1h]
  _BYTE v21[712]; // [rsp+558h] [rbp-5C0h] BYREF
  _BYTE v22[760]; // [rsp+820h] [rbp-2F8h] BYREF

  v12 = a1;
  uu_hashsum::uu_app_common(v22);
  uu_hashsum::uu_app_opt_bits(src, v22);
  uu_hashsum::uu_app_b3sum_opts(v21, src);
  v1 = 0LL;
  v13 = 0x8000000000000001LL;
  do
  {
    memcpy(v22, v21, 0x2C8uLL);
    v2 = (&off_2C1DE0)[v1];
    v3 = (&off_2C1DE0)[v1 + 1];
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
    *(_QWORD *)&src[504] = v13;
    *(_QWORD *)&src[528] = v2;
    *(_QWORD *)&src[536] = v3;
    *(_QWORD *)&src[544] = v2;
    *(_QWORD *)&src[552] = v3;
    *(_QWORD *)&src[560] = 0LL;
    *(_QWORD *)&src[576] = 0x11000000110000LL;
    *(_DWORD *)&src[584] = 0;
    *(_WORD *)v16 = 3337;
    v4 = (&off_2C1DE0)[v1 + 2];
    v5 = (&off_2C1DE0)[v1 + 3];
    *(_QWORD *)v11 = 0LL;
    *(_QWORD *)&v11[8] = 1LL;
    *(_QWORD *)&v11[16] = 0LL;
    if ( v5 )
    {
      alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v11, 0LL, v5);
      v6 = *(_QWORD *)&v11[16];
      v7 = *(_QWORD *)&v11[8];
      v8 = *(_QWORD *)v11;
    }
    else
    {
      v7 = 1LL;
      v8 = 0LL;
      v6 = 0LL;
    }
    memcpy((void *)(v6 + v7), v4, (size_t)v5);
    *(_QWORD *)&v11[16] = &v5[v6];
    v14 = *(_OWORD *)&v11[8];
    if ( v8 != 0x8000000000000000LL )
      *(_OWORD *)v11 = v14;
    v1 += 4LL;
    *(_QWORD *)&src[440] = v8;
    *(_OWORD *)&src[448] = *(_OWORD *)v11;
    memcpy(dest, src, 0x24CuLL);
    v19 = *(_WORD *)&v16[1];
    v20 = v17;
    dest[588] = 2;
    clap_builder::builder::command::Command::arg(v21, v22);
  }
  while ( v1 != 60 );
  v9 = v12;
  memcpy(v12, v21, 0x2C8uLL);
  return v9;
}
