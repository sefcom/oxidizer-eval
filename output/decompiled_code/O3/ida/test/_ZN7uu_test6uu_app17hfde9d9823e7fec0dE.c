__int64 __fastcall uu_test::uu_app(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // [rsp+0h] [rbp-888h] BYREF
  __int128 v4; // [rsp+8h] [rbp-880h]
  _QWORD src[89]; // [rsp+18h] [rbp-870h] BYREF
  _OWORD dest[45]; // [rsp+2E0h] [rbp-5A8h] BYREF
  _BYTE v7[608]; // [rsp+5B0h] [rbp-2D8h] BYREF
  const char *v8; // [rsp+810h] [rbp-78h]
  __int64 v9; // [rsp+818h] [rbp-70h]

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  clap_builder::builder::command::Command::new(v7, qword_E60E0, qword_E60E8);
  v8 = a0027;
  v9 = 6LL;
  clap_builder::builder::command::Command::about(src, v7, aCheckFileTypes, 36LL);
  uucore::format_usage(&v3, aTestExpression, 47LL);
  v1 = v3;
  if ( v3 != 0x8000000000000000LL )
    dest[0] = v4;
  if ( src[58] != 0x8000000000000000LL && src[58] )
    _rust_dealloc(src[59], src[58], 1LL);
  src[58] = v1;
  *(_OWORD *)&src[59] = dest[0];
  memcpy(dest, src, 0x2C8uLL);
  clap_builder::builder::command::Command::after_help(a1, dest, aExitWithTheSta, 3055LL);
  return a1;
}
