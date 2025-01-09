void *__fastcall uu_nl::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _BYTE v4[584]; // [rsp+0h] [rbp-A48h] BYREF
  int v5; // [rsp+248h] [rbp-800h]
  int v6; // [rsp+24Ch] [rbp-7FCh]
  _BYTE src[700]; // [rsp+250h] [rbp-7F8h] BYREF
  __int64 v8; // [rsp+50Ch] [rbp-53Ch]
  int v9; // [rsp+514h] [rbp-534h]
  _DWORD desta[175]; // [rsp+518h] [rbp-530h] BYREF
  __int64 v11; // [rsp+7D4h] [rbp-274h]
  int v12; // [rsp+7DCh] [rbp-26Ch]
  const char *v13; // [rsp+7E0h] [rbp-268h] BYREF
  __int64 v14; // [rsp+7E8h] [rbp-260h]
  const char *v15; // [rsp+7F0h] [rbp-258h]
  __int64 v16; // [rsp+7F8h] [rbp-250h]
  const char *v17; // [rsp+800h] [rbp-248h]
  __int64 v18; // [rsp+808h] [rbp-240h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::about(desta, src);
  clap_builder::builder::command::Command::version(src, desta);
  uucore::format_usage(
    v4,
    "{} [OPTION]... [FILE]...STYLE is one of:\n"
    "\n"
    "* a     number all lines\n"
    "* t     number only nonempty lines\n"
    "* n     number no lines\n"
    "* pBRE  number only lines that contain a match for the basic regular\n"
    "        expression, BRE\n"
    "\n"
    "FORMAT is one of:\n"
    "\n"
    "* ln    left justified, no leading zeros\n"
    "* rn    right justified, no leading zeros\n"
    "* rz    right justified, leading zerosPrint help information.body-numberinguse STYLE for numbering body linesSTYLEse"
    "ction-delimiteruse CC for separating logical pagesCCuse STYLE for numbering footer linesuse STYLE for numbering head"
    "er linesline-incrementline number increment at each lineNUMBERgroup of NUMBER empty lines counted as onenumber-forma"
    "tinsert line numbers according to FORMATFORMATno-renumberdo not reset line numbers at logical pagesadd STRING after "
    "(possible) line numberSTRINGstarting-line-numberfirst line number on each logical pagenumber-widthuse NUMBER columns"
    " for line numbers..... is not in a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda"
    "72796175bba21427be1/library/alloc/src/string.rsErrorParseIntErrorcannot parse integer from empty stringinvalid digit"
    " found in stringnumber too large to fit in target typenumber too small to fit in target typenumber would be zero for non-zero type",
    24LL);
  clap_builder::builder::command::Command::override_usage(desta, src);
  clap_builder::builder::command::Command::after_help(src, desta);
  memcpy(desta, src, sizeof(desta));
  v11 = v8 | 0x4008000040080LL;
  v12 = v9;
  clap_builder::builder::arg::Arg::new(src, aHelp, 4LL);
  clap_builder::builder::arg::Arg::long(v4, src);
  clap_builder::builder::arg::Arg::help(src, v4);
  clap_builder::builder::arg::Arg::action(v4, src, 5LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, "fileEDOMmode{", 4LL);
  memcpy(v4, desta, sizeof(v4));
  v5 = desta[146] | 4;
  v6 = desta[147];
  clap_builder::builder::arg::Arg::action(desta, v4, 1LL);
  clap_builder::builder::arg::Arg::value_hint(v4, desta, 3LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(
    src,
    "body-numberinguse STYLE for numbering body linesSTYLEsection-delimiteruse CC for separating logical pagesCCuse STYLE"
    " for numbering footer linesuse STYLE for numbering header linesline-incrementline number increment at each lineNUMBE"
    "Rgroup of NUMBER empty lines counted as onenumber-formatinsert line numbers according to FORMATFORMATno-renumberdo n"
    "ot reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGstarting-line-numberfirst line nu"
    "mber on each logical pagenumber-widthuse NUMBER columns for line numbers..... is not in a Display implementation ret"
    "urned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rsErrorParseIntE"
    "rrorcannot parse integer from empty stringinvalid digit found in stringnumber too large to fit in target typenumber "
    "too small to fit in target typenumber would be zero for non-zero type",
    14LL);
  clap_builder::builder::arg::Arg::short(v4, src, 98LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::value_name(&v13, v4);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(
    desta,
    "section-delimiteruse CC for separating logical pagesCCuse STYLE for numbering footer linesuse STYLE for numbering he"
    "ader linesline-incrementline number increment at each lineNUMBERgroup of NUMBER empty lines counted as onenumber-for"
    "matinsert line numbers according to FORMATFORMATno-renumberdo not reset line numbers at logical pagesadd STRING afte"
    "r (possible) line numberSTRINGstarting-line-numberfirst line number on each logical pagenumber-widthuse NUMBER colum"
    "ns for line numbers..... is not in a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bb"
    "da72796175bba21427be1/library/alloc/src/string.rsErrorParseIntErrorcannot parse integer from empty stringinvalid dig"
    "it found in stringnumber too large to fit in target typenumber too small to fit in target typenumber would be zero f"
    "or non-zero type",
    17LL);
  clap_builder::builder::arg::Arg::short(v4, desta, 100LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::value_name(&v13, v4);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aFooterNumberin, 16LL);
  clap_builder::builder::arg::Arg::short(v4, src, 102LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::value_name(&v13, v4);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aHeaderNumberin, 16LL);
  clap_builder::builder::arg::Arg::short(v4, desta, 104LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::value_name(&v13, v4);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(
    src,
    "line-incrementline number increment at each lineNUMBERgroup of NUMBER empty lines counted as onenumber-formatinsert "
    "line numbers according to FORMATFORMATno-renumberdo not reset line numbers at logical pagesadd STRING after (possibl"
    "e) line numberSTRINGstarting-line-numberfirst line number on each logical pagenumber-widthuse NUMBER columns for lin"
    "e numbers..... is not in a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175"
    "bba21427be1/library/alloc/src/string.rsErrorParseIntErrorcannot parse integer from empty stringinvalid digit found i"
    "n stringnumber too large to fit in target typenumber too small to fit in target typenumber would be zero for non-zero type",
    14LL);
  clap_builder::builder::arg::Arg::short(v4, src, 105LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::value_name(src, v4);
  <i64 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(&v13);
  clap_builder::builder::arg::Arg::value_parser(v4, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aJoinBlankLines, 16LL);
  clap_builder::builder::arg::Arg::short(v4, desta, 108LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v4);
  <u64 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(&v13);
  clap_builder::builder::arg::Arg::value_parser(v4, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(
    src,
    "number-formatinsert line numbers according to FORMATFORMATno-renumberdo not reset line numbers at logical pagesadd S"
    "TRING after (possible) line numberSTRINGstarting-line-numberfirst line number on each logical pagenumber-widthuse NU"
    "MBER columns for line numbers..... is not in a Display implementation returned an error unexpectedly/rustc/8bfcae730"
    "a5db2438bbda72796175bba21427be1/library/alloc/src/string.rsErrorParseIntErrorcannot parse integer from empty stringi"
    "nvalid digit found in stringnumber too large to fit in target typenumber too small to fit in target typenumber would"
    " be zero for non-zero type",
    13LL);
  clap_builder::builder::arg::Arg::short(v4, src, 110LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::value_name(src, v4);
  v13 = "lnrnrzinternal error: entered unreachable code: Should have been caught by clap-Number lines of files0.0.28{} [O"
        "PTION]... [FILE]...STYLE is one of:\n"
        "\n"
        "* a     number all lines\n"
        "* t     number only nonempty lines\n"
        "* n     number no lines\n"
        "* pBRE  number only lines that contain a match for the basic regular\n"
        "        expression, BRE\n"
        "\n"
        "FORMAT is one of:\n"
        "\n"
        "* ln    left justified, no leading zeros\n"
        "* rn    right justified, no leading zeros\n"
        "* rz    right justified, leading zerosPrint help information.body-numberinguse STYLE for numbering body linesSTY"
        "LEsection-delimiteruse CC for separating logical pagesCCuse STYLE for numbering footer linesuse STYLE for number"
        "ing header linesline-incrementline number increment at each lineNUMBERgroup of NUMBER empty lines counted as one"
        "number-formatinsert line numbers according to FORMATFORMATno-renumberdo not reset line numbers at logical pagesa"
        "dd STRING after (possible) line numberSTRINGstarting-line-numberfirst line number on each logical pagenumber-wid"
        "thuse NUMBER columns for line numbers..... is not in a Display implementation returned an error unexpectedly/rus"
        "tc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rsErrorParseIntErrorcannot parse integer fr"
        "om empty stringinvalid digit found in stringnumber too large to fit in target typenumber too small to fit in tar"
        "get typenumber would be zero for non-zero type";
  v14 = 2LL;
  v15 = "rnrzinternal error: entered unreachable code: Should have been caught by clap-Number lines of files0.0.28{} [OPT"
        "ION]... [FILE]...STYLE is one of:\n"
        "\n"
        "* a     number all lines\n"
        "* t     number only nonempty lines\n"
        "* n     number no lines\n"
        "* pBRE  number only lines that contain a match for the basic regular\n"
        "        expression, BRE\n"
        "\n"
        "FORMAT is one of:\n"
        "\n"
        "* ln    left justified, no leading zeros\n"
        "* rn    right justified, no leading zeros\n"
        "* rz    right justified, leading zerosPrint help information.body-numberinguse STYLE for numbering body linesSTY"
        "LEsection-delimiteruse CC for separating logical pagesCCuse STYLE for numbering footer linesuse STYLE for number"
        "ing header linesline-incrementline number increment at each lineNUMBERgroup of NUMBER empty lines counted as one"
        "number-formatinsert line numbers according to FORMATFORMATno-renumberdo not reset line numbers at logical pagesa"
        "dd STRING after (possible) line numberSTRINGstarting-line-numberfirst line number on each logical pagenumber-wid"
        "thuse NUMBER columns for line numbers..... is not in a Display implementation returned an error unexpectedly/rus"
        "tc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rsErrorParseIntErrorcannot parse integer fr"
        "om empty stringinvalid digit found in stringnumber too large to fit in target typenumber too small to fit in tar"
        "get typenumber would be zero for non-zero type";
  v16 = 2LL;
  v17 = "rzinternal error: entered unreachable code: Should have been caught by clap-Number lines of files0.0.28{} [OPTIO"
        "N]... [FILE]...STYLE is one of:\n"
        "\n"
        "* a     number all lines\n"
        "* t     number only nonempty lines\n"
        "* n     number no lines\n"
        "* pBRE  number only lines that contain a match for the basic regular\n"
        "        expression, BRE\n"
        "\n"
        "FORMAT is one of:\n"
        "\n"
        "* ln    left justified, no leading zeros\n"
        "* rn    right justified, no leading zeros\n"
        "* rz    right justified, leading zerosPrint help information.body-numberinguse STYLE for numbering body linesSTY"
        "LEsection-delimiteruse CC for separating logical pagesCCuse STYLE for numbering footer linesuse STYLE for number"
        "ing header linesline-incrementline number increment at each lineNUMBERgroup of NUMBER empty lines counted as one"
        "number-formatinsert line numbers according to FORMATFORMATno-renumberdo not reset line numbers at logical pagesa"
        "dd STRING after (possible) line numberSTRINGstarting-line-numberfirst line number on each logical pagenumber-wid"
        "thuse NUMBER columns for line numbers..... is not in a Display implementation returned an error unexpectedly/rus"
        "tc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rsErrorParseIntErrorcannot parse integer fr"
        "om empty stringinvalid digit found in stringnumber too large to fit in target typenumber too small to fit in tar"
        "get typenumber would be zero for non-zero type";
  v18 = 2LL;
  clap_builder::builder::arg::Arg::value_parser(v4, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(
    desta,
    "no-renumberdo not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGstarting-line-numb"
    "erfirst line number on each logical pagenumber-widthuse NUMBER columns for line numbers..... is not in a Display imp"
    "lementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.r"
    "sErrorParseIntErrorcannot parse integer from empty stringinvalid digit found in stringnumber too large to fit in tar"
    "get typenumber too small to fit in target typenumber would be zero for non-zero type",
    11LL);
  clap_builder::builder::arg::Arg::short(v4, desta, 112LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::action(&v13, v4, 3LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aNumberSeparato, 16LL);
  clap_builder::builder::arg::Arg::short(v4, src, 115LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::value_name(&v13, v4);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(
    desta,
    "starting-line-numberfirst line number on each logical pagenumber-widthuse NUMBER columns for line numbers..... is no"
    "t in a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/"
    "alloc/src/string.rsErrorParseIntErrorcannot parse integer from empty stringinvalid digit found in stringnumber too l"
    "arge to fit in target typenumber too small to fit in target typenumber would be zero for non-zero type",
    20LL);
  clap_builder::builder::arg::Arg::short(v4, desta, 118LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v4);
  <i64 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(&v13);
  clap_builder::builder::arg::Arg::value_parser(v4, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(
    src,
    "number-widthuse NUMBER columns for line numbers..... is not in a Display implementation returned an error unexpected"
    "ly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rsErrorParseIntErrorcannot parse integer "
    "from empty stringinvalid digit found in stringnumber too large to fit in target typenumber too small to fit in targe"
    "t typenumber would be zero for non-zero type",
    12LL);
  clap_builder::builder::arg::Arg::short(v4, src, 119LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::value_name(src, v4);
  v2 = alloc::boxed::Box<T>::new();
  v13 = &byte_4;
  v14 = v2;
  v15 = (const char *)&unk_2D9AA8;
  clap_builder::builder::arg::Arg::value_parser(v4, src);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
