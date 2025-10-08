void *__fastcall uu_wc::uu_app(void *dest)
{
  __int64 v1; // rax
  _DWORD desta[178]; // [rsp+18h] [rbp-AB0h] BYREF
  _BYTE v4[632]; // [rsp+2E0h] [rbp-7E8h] BYREF
  int v5; // [rsp+558h] [rbp-570h]
  int v6; // [rsp+55Ch] [rbp-56Ch]
  _BYTE src[700]; // [rsp+560h] [rbp-568h] BYREF
  __int64 v8; // [rsp+81Ch] [rbp-2ACh]
  int v9; // [rsp+824h] [rbp-2A4h]
  _BYTE v10[672]; // [rsp+828h] [rbp-2A0h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(
    v4,
    "{} [OPTION]... [FILE]...print the byte countsprint the character countsFread input from the files specified by\n"
    "  NUL-terminated names in file F;\n"
    "  If F is - then read names from standard inputprint the newline countsprint the length of the longest linewhen to p"
    "rint a line with total counts;\n"
    "  WHEN can be: auto, always, only, neverprint the word countscannot open  for readingAll escaped names with the esca"
    "ping option return valid strings.: read error: \n"
    "<stdin>",
    24LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, 0x2BCuLL);
  *(_QWORD *)&desta[175] = v8 | 0x8800000088LL;
  desta[177] = v9;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v4, src, 99LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::action(v10, v4, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v4, desta, 109LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::action(v10, v4, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v4, src);
  clap_builder::builder::arg::Arg::value_name(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::value_parser(src, v4);
  clap_builder::builder::arg::Arg::value_hint(v4, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v4, desta, 108LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::action(v10, v4, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v4, src, 76LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::action(v10, v4, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v4, desta);
  *(_QWORD *)desta = aAuto;
  *(_QWORD *)&desta[2] = 4LL;
  *(_QWORD *)&desta[4] = "alwaysneverinternal error: entered unreachable code: Should have been caught by clap(uutils cor"
                         "eutils) 0.0.30Display newline, word, and byte counts for each FILE, and a total line if\n"
                         "more than one FILE is specified. With no FILE, or when FILE is -, read standard input.{} [OPTIO"
                         "N]... [FILE]...print the byte countsprint the character countsFread input from the files specif"
                         "ied by\n"
                         "  NUL-terminated names in file F;\n"
                         "  If F is - then read names from standard inputprint the newline countsprint the length of the "
                         "longest linewhen to print a line with total counts;\n"
                         "  WHEN can be: auto, always, only, neverprint the word countscannot open  for readingAll escape"
                         "d names with the escaping option return valid strings.: read error: \n"
                         "<stdin>";
  *(_QWORD *)&desta[6] = 6LL;
  *(_QWORD *)&desta[8] = aOnly;
  *(_QWORD *)&desta[10] = 4LL;
  *(_QWORD *)&desta[12] = "neverinternal error: entered unreachable code: Should have been caught by clap(uutils coreutil"
                          "s) 0.0.30Display newline, word, and byte counts for each FILE, and a total line if\n"
                          "more than one FILE is specified. With no FILE, or when FILE is -, read standard input.{} [OPTI"
                          "ON]... [FILE]...print the byte countsprint the character countsFread input from the files spec"
                          "ified by\n"
                          "  NUL-terminated names in file F;\n"
                          "  If F is - then read names from standard inputprint the newline countsprint the length of the"
                          " longest linewhen to print a line with total counts;\n"
                          "  WHEN can be: auto, always, only, neverprint the word countscannot open  for readingAll escap"
                          "ed names with the escaping option return valid strings.: read error: \n"
                          "<stdin>";
  *(_QWORD *)&desta[14] = 5LL;
  <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(v10, desta);
  clap_builder::builder::arg::Arg::value_parser(desta, v4);
  clap_builder::builder::arg::Arg::value_name(v4, desta);
  memcpy(desta, v4, 0x278uLL);
  desta[158] = v5 | 0x10;
  desta[159] = v6;
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v4, src, 119LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::action(v10, v4, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::action(v4, desta, 1LL);
  clap_builder::builder::arg::Arg::value_parser(desta, v4);
  clap_builder::builder::arg::Arg::value_hint(v4, desta);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}