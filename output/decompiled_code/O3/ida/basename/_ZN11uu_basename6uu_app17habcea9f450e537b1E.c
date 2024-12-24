void *__fastcall uu_basename::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[584]; // [rsp+8h] [rbp-800h] BYREF
  int v4; // [rsp+250h] [rbp-5B8h]
  int v5; // [rsp+254h] [rbp-5B4h]
  _DWORD desta[175]; // [rsp+258h] [rbp-5B0h] BYREF
  __int64 v7; // [rsp+514h] [rbp-2F4h]
  int v8; // [rsp+51Ch] [rbp-2ECh]
  _BYTE src[700]; // [rsp+520h] [rbp-2E8h] BYREF
  __int64 v10; // [rsp+7DCh] [rbp-2Ch]
  int v11; // [rsp+7E4h] [rbp-24h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(
    v3,
    "{} [-z] NAME [SUFFIX]\n"
    "{} OPTION... NAME...support multiple arguments and treat each as a NAMESUFFIXremove a trailing SUFFIX; implies -aend"
    " each output line with NUL, not newlinesrc/uu/basename/src/basename.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be"
    "1/library/core/src/str/pattern.rs \n"
    "{}src/uucore/src/lib/lib.rsmanpage\n",
    42LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v7 = v10 | 0x8000000080LL;
  v8 = v11;
  clap_builder::builder::arg::Arg::new(src, aMultiple, 8LL);
  clap_builder::builder::arg::Arg::short(v3, src, 97LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3, 2LL);
  clap_builder::builder::arg::Arg::overrides_with(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aName, 4LL);
  clap_builder::builder::arg::Arg::action(v3, desta, 1LL);
  clap_builder::builder::arg::Arg::value_hint(desta, v3);
  memcpy(v3, desta, sizeof(v3));
  v4 = desta[146] | 0x204;
  v5 = desta[147];
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(
    src,
    "suffix0.0.28{} [-z] NAME [SUFFIX]\n"
    "{} OPTION... NAME...support multiple arguments and treat each as a NAMESUFFIXremove a trailing SUFFIX; implies -aend"
    " each output line with NUL, not newlinesrc/uu/basename/src/basename.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be"
    "1/library/core/src/str/pattern.rs \n"
    "{}src/uucore/src/lib/lib.rsmanpage\n",
    6LL);
  clap_builder::builder::arg::Arg::short(v3, src, 115LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::overrides_with(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aZero_0, 4LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 122LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(desta, v3, 2LL);
  clap_builder::builder::arg::Arg::overrides_with(v3, desta);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
