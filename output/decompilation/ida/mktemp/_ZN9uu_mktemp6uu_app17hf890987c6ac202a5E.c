void *__fastcall uu_mktemp::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[632]; // [rsp+18h] [rbp-AB0h] BYREF
  int v4; // [rsp+290h] [rbp-838h]
  int v5; // [rsp+294h] [rbp-834h]
  _DWORD desta[175]; // [rsp+298h] [rbp-830h] BYREF
  __int64 v7; // [rsp+554h] [rbp-574h]
  int v8; // [rsp+55Ch] [rbp-56Ch]
  _BYTE src[700]; // [rsp+560h] [rbp-568h] BYREF
  __int64 v10; // [rsp+81Ch] [rbp-2ACh]
  int v11; // [rsp+824h] [rbp-2A4h]
  _BYTE v12[672]; // [rsp+828h] [rbp-2A0h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(
    v3,
    "{} [OPTION]... [TEMPLATE]Make a directory instead of a filedo not create anything; merely print a name (unsafe)Fail "
    "silently if an error occurs.append SUFFIX to TEMPLATE; SUFFIX must not contain a path separator. This option is impl"
    "ied if TEMPLATE does not end with X.SUFFIXshort form of --tmpdirDIRinterpret TEMPLATE relative to DIR; if DIR is not"
    " specified, use $TMPDIR ($TMP on windows) if set, else /tmp. With this option, TEMPLATE must not be an absolute name"
    "; unlike with -t, TEMPLATE may contain slashes, but mktemp creates only the final componentGenerate a template (usin"
    "g the supplied prefix and TMPDIR (TMP on windows) if set) to create a filename template [deprecated]X",
    25LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v7 = v10 | 0x8000000080LL;
  v8 = v11;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 100LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 117LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v12, v3);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 113LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 112LL);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::num_args(src, v3);
  clap_builder::builder::arg::Arg::value_parser(v3, src);
  clap_builder::builder::arg::Arg::value_hint(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::arg::Arg::num_args(desta, v3);
  memcpy(v3, desta, sizeof(v3));
  v4 = desta[158] | 0x80;
  v5 = desta[159];
  clap_builder::builder::arg::Arg::overrides_with(desta, v3);
  clap_builder::builder::arg::Arg::value_parser(v3, desta);
  clap_builder::builder::arg::Arg::value_hint(v12, v3);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 116LL);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::action(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::num_args(v3, desta);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}