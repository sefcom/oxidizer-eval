void *__fastcall uu_dd::uu_app(void *dest)
{
  __int64 v1; // r14
  __int64 v3; // [rsp+0h] [rbp-898h] BYREF
  __int128 v4; // [rsp+8h] [rbp-890h]
  _BYTE src[712]; // [rsp+18h] [rbp-880h] BYREF
  _BYTE desta[712]; // [rsp+2E0h] [rbp-5B8h] BYREF
  _BYTE v7[608]; // [rsp+5A8h] [rbp-2F0h] BYREF
  const char *v8; // [rsp+808h] [rbp-90h]
  __int64 v9; // [rsp+810h] [rbp-88h]

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(v7, xmmword_11BE68, *((_QWORD *)&xmmword_11BE68 + 1));
  v8 = a0027;
  v9 = 6LL;
  clap_builder::builder::command::Command::about(src, v7, aCopyAndOptiona, 52LL);
  uucore::format_usage(&v3, aOperandOption, 25LL);
  v1 = v3;
  if ( v3 != 0x8000000000000000LL )
    *(_OWORD *)desta = v4;
  if ( *(_QWORD *)&src[464] != 0x8000000000000000LL && *(_QWORD *)&src[464] )
    _rust_dealloc(*(_QWORD *)&src[472], *(_QWORD *)&src[464], 1LL);
  *(_QWORD *)&src[464] = v1;
  *(_OWORD *)&src[472] = *(_OWORD *)desta;
  memcpy(desta, src, sizeof(desta));
  clap_builder::builder::command::Command::after_help(src, desta, &unk_1F69B, "ld-linux-x86-64.so.2");
  memcpy(desta, src, 0x2BCuLL);
  *(_QWORD *)&desta[700] = *(_QWORD *)&src[700] | 0x8000000080LL;
  *(_DWORD *)&desta[708] = *(_DWORD *)&src[708];
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
  *(_QWORD *)&src[16] = 1LL;
  *(_QWORD *)&src[24] = 1LL;
  *(_QWORD *)&src[32] = -1LL;
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
  *(_QWORD *)&src[528] = "operandsNotFoundTimedOut";
  *(_QWORD *)&src[536] = 8LL;
  *(_QWORD *)&src[544] = 0LL;
  *(_QWORD *)&src[560] = 0LL;
  *(_QWORD *)&src[576] = 0x11000000110000LL;
  *(_DWORD *)&src[584] = 0;
  *(_WORD *)&src[588] = 3337;
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
