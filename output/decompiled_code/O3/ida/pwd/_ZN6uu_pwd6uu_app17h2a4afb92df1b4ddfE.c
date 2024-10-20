void *__fastcall uu_pwd::uu_app(void *dest)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r14
  _BYTE desta[700]; // [rsp+10h] [rbp-AD8h] BYREF
  __int64 v16; // [rsp+2CCh] [rbp-81Ch]
  int v17; // [rsp+2D4h] [rbp-814h]
  _BYTE src[700]; // [rsp+2D8h] [rbp-810h] BYREF
  __int64 v19; // [rsp+594h] [rbp-554h]
  int v20; // [rsp+59Ch] [rbp-54Ch]
  _OWORD v21[37]; // [rsp+5A0h] [rbp-548h] BYREF
  _BYTE v22[608]; // [rsp+7F0h] [rbp-2F8h] BYREF
  const char *v23; // [rsp+A50h] [rbp-98h]
  __int64 v24; // [rsp+A58h] [rbp-90h]

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(v22, qword_DCBC8, qword_DCBD0);
  v23 = a0027;
  v24 = 6LL;
  clap_builder::builder::command::Command::about(src, v22, aDisplayTheFull, 0x3BuLL);
  uucore::format_usage(v21, aOptionFile, 24LL);
  v4 = *(_QWORD *)&v21[0];
  if ( *(_QWORD *)&v21[0] != 0x8000000000000000LL )
    *(_OWORD *)desta = *(_OWORD *)((char *)v21 + 8);
  if ( 2LL * *(_QWORD *)&src[464] )
    _rust_dealloc(*(_QWORD *)&src[472], *(_QWORD *)&src[464], 1LL, v1, v2, v3);
  *(_QWORD *)&src[464] = v4;
  *(_OWORD *)&src[472] = *(_OWORD *)desta;
  memcpy(desta, src, sizeof(desta));
  v16 = v19 | 0x8000000080LL;
  v17 = v20;
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
  *(_QWORD *)&src[528] = aLogical_0;
  *(_QWORD *)&src[536] = 7LL;
  *(_QWORD *)&src[544] = aLogical_0;
  *(_QWORD *)&src[552] = 7LL;
  *(_QWORD *)&src[560] = 0LL;
  *(_QWORD *)&src[576] = 0x1100000000004CLL;
  *(_DWORD *)&src[584] = 0;
  *(_WORD *)&src[588] = 3337;
  *(_QWORD *)&v21[0] = 0LL;
  *((_QWORD *)&v21[0] + 1) = 1LL;
  *(_QWORD *)&v21[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v21, 0LL, 54LL);
  v5 = *((_QWORD *)&v21[0] + 1);
  v6 = *(_QWORD *)&v21[1];
  *(_OWORD *)(*((_QWORD *)&v21[0] + 1) + *(_QWORD *)&v21[1] + 32LL) = xmmword_180C0;
  qmemcpy((void *)(v5 + v6), "use PWD from environment, even i", 32);
  *(_QWORD *)(v5 + v6 + 46) = 0x736B6E696C6D7973LL;
  *(_QWORD *)&v21[1] = v6 + 54;
  v7 = *(_QWORD *)&v21[0];
  if ( *(_QWORD *)&v21[0] != 0x8000000000000000LL )
    v21[0] = *(_OWORD *)((char *)v21 + 8);
  *(_QWORD *)&src[440] = v7;
  *(_OWORD *)&src[448] = v21[0];
  memcpy(v21, src, 0x24CuLL);
  *(_WORD *)((char *)&v21[36] + 13) = *(_WORD *)&src[589];
  HIBYTE(v21[36]) = src[591];
  BYTE12(v21[36]) = 2;
  clap_builder::builder::command::Command::arg(src, desta);
  *(_OWORD *)&desta[120] = 0LL;
  *(_OWORD *)&desta[144] = 0LL;
  *(_OWORD *)&desta[168] = 0LL;
  *(_OWORD *)&desta[192] = 0LL;
  *(_OWORD *)&desta[216] = 0LL;
  *(_OWORD *)&desta[240] = 0LL;
  *(_OWORD *)&desta[264] = 0LL;
  *(_OWORD *)&desta[288] = 0LL;
  *(_OWORD *)&desta[312] = 0LL;
  *(_OWORD *)&desta[336] = 0LL;
  *(_OWORD *)&desta[360] = 0LL;
  *(_OWORD *)&desta[384] = 0LL;
  *(_OWORD *)&desta[408] = 0LL;
  *(_QWORD *)desta = 0LL;
  *(_QWORD *)&desta[16] = 0LL;
  *(_QWORD *)&desta[40] = 0LL;
  *(_QWORD *)&desta[56] = 0LL;
  *(_QWORD *)&desta[80] = 5LL;
  *(_QWORD *)&desta[104] = 0LL;
  *(_QWORD *)&desta[112] = 8LL;
  *(_QWORD *)&desta[136] = 8LL;
  *(_QWORD *)&desta[160] = 8LL;
  *(_QWORD *)&desta[184] = 8LL;
  *(_QWORD *)&desta[208] = 8LL;
  *(_QWORD *)&desta[232] = 8LL;
  *(_QWORD *)&desta[256] = 8LL;
  *(_QWORD *)&desta[280] = 8LL;
  *(_QWORD *)&desta[304] = 8LL;
  *(_QWORD *)&desta[328] = 4LL;
  *(_QWORD *)&desta[352] = 8LL;
  *(_QWORD *)&desta[376] = 8LL;
  *(_QWORD *)&desta[400] = 8LL;
  *(_QWORD *)&desta[424] = 8LL;
  *(_QWORD *)&desta[432] = 0LL;
  *(_QWORD *)&desta[440] = 0x8000000000000000LL;
  *(_QWORD *)&desta[464] = 0x8000000000000000LL;
  *(_QWORD *)&desta[504] = 0x8000000000000001LL;
  *(_QWORD *)&desta[528] = aPhysical;
  *(_QWORD *)&desta[536] = 8LL;
  *(_QWORD *)&desta[544] = aPhysical;
  *(_QWORD *)&desta[552] = 8LL;
  *(_QWORD *)&desta[560] = 0LL;
  *(_QWORD *)&desta[576] = 0x11000000000050LL;
  *(_DWORD *)&desta[584] = 0;
  *(_WORD *)&desta[588] = 3337;
  alloc::raw_vec::RawVec<T,A>::grow_one(&desta[128]);
  v8 = *(_QWORD *)&desta[136];
  **(_QWORD **)&desta[136] = aLogical_0;
  *(_QWORD *)(v8 + 8) = 7LL;
  *(_QWORD *)&desta[144] = 1LL;
  memcpy(v21, desta, sizeof(v21));
  *(_QWORD *)desta = 0LL;
  *(_QWORD *)&desta[8] = 1LL;
  *(_QWORD *)&desta[16] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(desta, 0LL, 18LL);
  v11 = *(_QWORD *)&desta[8];
  v12 = *(_QWORD *)&desta[16];
  *(_OWORD *)(*(_QWORD *)&desta[8] + *(_QWORD *)&desta[16]) = xmmword_180D6;
  *(_WORD *)(v11 + v12 + 16) = 29547;
  *(_QWORD *)&desta[16] = v12 + 18;
  v13 = *(_QWORD *)desta;
  if ( *(_QWORD *)desta != 0x8000000000000000LL )
    *(_OWORD *)desta = *(_OWORD *)&desta[8];
  if ( *((_QWORD *)&v21[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&v21[27] + 1) )
    _rust_dealloc(*(_QWORD *)&v21[28], *((_QWORD *)&v21[27] + 1), 1LL, v11, v9, v10);
  *((_QWORD *)&v21[27] + 1) = v13;
  v21[28] = *(_OWORD *)desta;
  memcpy(desta, v21, 0x24CuLL);
  *(_WORD *)&desta[589] = *(_WORD *)((char *)&v21[36] + 13);
  desta[591] = HIBYTE(v21[36]);
  desta[588] = 2;
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
