char *__fastcall uu_yes::uu_app(char *dest)
{
  __int64 v1; // r15
  int v2; // ecx
  _BYTE src[712]; // [rsp+8h] [rbp-D20h] BYREF
  _QWORD v5[74]; // [rsp+2D0h] [rbp-A58h] BYREF
  _OWORD desta[45]; // [rsp+520h] [rbp-808h] BYREF
  _QWORD v7[74]; // [rsp+7F0h] [rbp-538h] BYREF
  _BYTE v8[608]; // [rsp+A40h] [rbp-2E8h] BYREF
  const char *v9; // [rsp+CA0h] [rbp-88h]
  __int64 v10; // [rsp+CA8h] [rbp-80h]

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(v8, qword_DB5E0, qword_DB5E8);
  v9 = a0027;
  v10 = 6LL;
  clap_builder::builder::command::Command::about(src, v8, aRepeatedlyDisp, 46LL);
  uucore::format_usage(v5, aString_0, 14LL);
  v1 = v5[0];
  if ( v5[0] != 0x8000000000000000LL )
    desta[0] = *(_OWORD *)&v5[1];
  if ( *(_QWORD *)&src[464] != 0x8000000000000000LL && *(_QWORD *)&src[464] )
    _rust_dealloc(*(_QWORD *)&src[472], *(_QWORD *)&src[464], 1LL);
  *(_QWORD *)&src[464] = v1;
  *(_OWORD *)&src[472] = desta[0];
  memcpy(desta, src, 0x2C8uLL);
  *(_QWORD *)src = 0LL;
  *(_QWORD *)&src[16] = 0LL;
  *(_QWORD *)&src[40] = 0LL;
  *(_QWORD *)&src[56] = 0LL;
  *(_QWORD *)&src[80] = 5LL;
  *(_QWORD *)&src[104] = 0LL;
  *(_QWORD *)&src[112] = 8LL;
  *(_OWORD *)&src[120] = 0LL;
  *(_QWORD *)&src[136] = 8LL;
  *(_OWORD *)&src[144] = 0LL;
  *(_QWORD *)&src[160] = 8LL;
  *(_OWORD *)&src[168] = 0LL;
  *(_QWORD *)&src[184] = 8LL;
  *(_OWORD *)&src[192] = 0LL;
  *(_QWORD *)&src[208] = 8LL;
  *(_OWORD *)&src[216] = 0LL;
  *(_QWORD *)&src[232] = 8LL;
  *(_OWORD *)&src[240] = 0LL;
  *(_QWORD *)&src[256] = 8LL;
  *(_OWORD *)&src[264] = 0LL;
  *(_QWORD *)&src[280] = 8LL;
  *(_OWORD *)&src[288] = 0LL;
  *(_QWORD *)&src[304] = 8LL;
  *(_OWORD *)&src[312] = 0LL;
  *(_QWORD *)&src[328] = 4LL;
  *(_OWORD *)&src[336] = 0LL;
  *(_QWORD *)&src[352] = 8LL;
  *(_OWORD *)&src[360] = 0LL;
  *(_QWORD *)&src[376] = 8LL;
  *(_OWORD *)&src[384] = 0LL;
  *(_QWORD *)&src[400] = 8LL;
  *(_OWORD *)&src[408] = 0LL;
  *(_QWORD *)&src[424] = 8LL;
  *(_QWORD *)&src[432] = 0LL;
  *(_QWORD *)&src[440] = 0x8000000000000000LL;
  *(_QWORD *)&src[464] = 0x8000000000000000LL;
  *(_QWORD *)&src[504] = 0x8000000000000001LL;
  *(_QWORD *)&src[528] = aString_1;
  *(_QWORD *)&src[536] = 6LL;
  *(_QWORD *)&src[544] = 0LL;
  *(_QWORD *)&src[560] = 0LL;
  *(_QWORD *)&src[576] = 0x11000000110000LL;
  *(_DWORD *)&src[584] = 0;
  *(_WORD *)&src[588] = 3337;
  v7[0] = 2LL;
  clap_builder::builder::arg::Arg::value_parser(v5, src);
  BYTE4(v5[73]) = 1;
  memcpy(v7, v5, sizeof(v7));
  clap_builder::builder::command::Command::arg(src, desta);
  memcpy(dest, src, 0x2BCuLL);
  v2 = *(_DWORD *)&src[708];
  *(_QWORD *)(dest + 700) = *(_QWORD *)&src[700] | 0x8000000080LL;
  *((_DWORD *)dest + 177) = v2;
  return dest;
}
