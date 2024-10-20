void *__fastcall uu_sleep::uu_app(void *dest)
{
  __int64 v1; // r15
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  _OWORD v6[37]; // [rsp+10h] [rbp-AD8h] BYREF
  _BYTE src[700]; // [rsp+260h] [rbp-888h] BYREF
  __int64 v8; // [rsp+51Ch] [rbp-5CCh]
  int v9; // [rsp+524h] [rbp-5C4h]
  _BYTE desta[700]; // [rsp+530h] [rbp-5B8h] BYREF
  __int64 v11; // [rsp+7ECh] [rbp-2FCh]
  int v12; // [rsp+7F4h] [rbp-2F4h]
  _BYTE v13[608]; // [rsp+800h] [rbp-2E8h] BYREF
  const char *v14; // [rsp+A60h] [rbp-88h]
  __int64 v15; // [rsp+A68h] [rbp-80h]

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(v13, xmmword_E3B08, *((_QWORD *)&xmmword_E3B08 + 1));
  v14 = a0027;
  v15 = 6LL;
  clap_builder::builder::command::Command::about(desta, v13, aPauseForNumber, 25LL);
  clap_builder::builder::command::Command::after_help(src, desta, aPauseForNumber_0, 335LL);
  uucore::format_usage(v6, aNumberSuffixOp, 30LL);
  v1 = *(_QWORD *)&v6[0];
  if ( *(_QWORD *)&v6[0] != 0x8000000000000000LL )
    *(_OWORD *)desta = *(_OWORD *)((char *)v6 + 8);
  if ( *(_QWORD *)&src[464] != 0x8000000000000000LL && *(_QWORD *)&src[464] )
    _rust_dealloc(*(_QWORD *)&src[472], *(_QWORD *)&src[464], 1LL);
  *(_QWORD *)&src[464] = v1;
  *(_OWORD *)&src[472] = *(_OWORD *)desta;
  memcpy(desta, src, sizeof(desta));
  v11 = v8 | 0x8000000080LL;
  v12 = v9;
  *(_QWORD *)&v6[0] = 0LL;
  *(_QWORD *)&v6[1] = 0LL;
  *((_QWORD *)&v6[2] + 1) = 0LL;
  *((_QWORD *)&v6[3] + 1) = 0LL;
  *(_QWORD *)&v6[5] = 5LL;
  *((_QWORD *)&v6[6] + 1) = 0LL;
  v6[7] = 8uLL;
  *((_QWORD *)&v6[8] + 1) = 8LL;
  v6[9] = 0LL;
  v6[10] = 8uLL;
  *((_QWORD *)&v6[11] + 1) = 8LL;
  v6[12] = 0LL;
  v6[13] = 8uLL;
  *((_QWORD *)&v6[14] + 1) = 8LL;
  v6[15] = 0LL;
  v6[16] = 8uLL;
  *((_QWORD *)&v6[17] + 1) = 8LL;
  v6[18] = 0LL;
  v6[19] = 8uLL;
  *((_QWORD *)&v6[20] + 1) = 4LL;
  v6[21] = 0LL;
  v6[22] = 8uLL;
  *((_QWORD *)&v6[23] + 1) = 8LL;
  v6[24] = 0LL;
  v6[25] = 8uLL;
  *((_QWORD *)&v6[26] + 1) = 8LL;
  *(_QWORD *)&v6[27] = 0LL;
  *((_QWORD *)&v6[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&v6[29] = 0x8000000000000000LL;
  *((_QWORD *)&v6[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&v6[33] = aNumber_0;
  *((_QWORD *)&v6[33] + 1) = 6LL;
  *(_QWORD *)&v6[34] = 0LL;
  *(_QWORD *)&v6[35] = 0LL;
  *(_QWORD *)&v6[36] = 0x11000000110000LL;
  DWORD2(v6[36]) = 0;
  WORD6(v6[36]) = 3337;
  *(_QWORD *)src = 0LL;
  *(_QWORD *)&src[8] = 1LL;
  *(_QWORD *)&src[16] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 24LL);
  v2 = *(_QWORD *)&src[8];
  v3 = *(_QWORD *)&src[16];
  *(_OWORD *)(*(_QWORD *)&src[8] + *(_QWORD *)&src[16]) = unk_18D10;
  *(_QWORD *)(v2 + v3 + 16) = 0x73646E6F63657320LL;
  *(_QWORD *)&src[16] = v3 + 24;
  v4 = *(_QWORD *)src;
  if ( *(_QWORD *)src != 0x8000000000000000LL )
    *(_OWORD *)src = *(_OWORD *)&src[8];
  *((_QWORD *)&v6[27] + 1) = v4;
  v6[28] = *(_OWORD *)src;
  memcpy(src, v6, 0x168uLL);
  memcpy(&src[368], &v6[23], 0xE0uLL);
  *(_QWORD *)&src[360] = 0LL;
  clap_builder::builder::arg::Arg::value_names(v6, src);
  BYTE12(v6[36]) = 1;
  memcpy(src, v6, 0x250uLL);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
