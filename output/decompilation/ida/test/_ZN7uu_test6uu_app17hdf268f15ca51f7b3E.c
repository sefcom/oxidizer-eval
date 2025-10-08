void *__fastcall uu_test::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[24]; // [rsp+8h] [rbp-5C0h] BYREF
  _BYTE src[712]; // [rsp+20h] [rbp-5A8h] BYREF
  _BYTE desta[736]; // [rsp+2E8h] [rbp-2E0h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  uucore::format_usage(v3, aTestExpression, 47LL);
  clap_builder::builder::command::Command::override_usage(desta, src);
  clap_builder::builder::command::Command::after_help(dest, desta);
  return dest;
}