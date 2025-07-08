
  int64_t uu_od::uu_app::hbbddbed21fc2c7d3(int64_t arg1)

{
    void var_780;
    clap_builder::builder::command::Command::new::h47430efafb217caa(&var_780, 
        uucore::util_name::h60d842bf27b05e82());
    void var_a48;
    clap_builder::builder::command::Command::version::h563b12925e352954(&var_a48, &var_780, 
        "0.0.28Dump files in octal and ot…");
    clap_builder::builder::command::Command::about::h9feb1943aebb1d3f(&var_780, &var_a48, 
        "Dump files in octal and other fo…", 0x25);
    char const* const var_4b8;
    uucore::format_usage::h76fcb2d15fbabc58(&var_4b8, "{} [OPTION]... [--] [FILENAME]..…", 0xaf);
    clap_builder::builder::command::Command::override_usage::h053935d0df82dda4(&var_a48, &var_780, 
        &var_4b8);
    clap_builder::builder::command::Command::after_help::hc9918c962e97ccb9(&var_780, &var_a48, 
        "Displays data in various human-r…", 0x70d);
    memcpy(&var_a48, &var_780, 0x2bc);
    int64_t var_4c4;
    int64_t var_78c = 0x400c8000400e8 | var_4c4;
    int32_t var_4bc;
    int32_t var_784 = var_4bc;
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_780, 
        "helpNoneshimname\x1b[0m    CyanT…");
    clap_builder::builder::arg::Arg::long::h9e982e05d1967df1(&var_4b8, &var_780, 
        "helpNoneshimname\x1b[0m    CyanT…");
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_780, &var_4b8, 
        "Print help information.Select th…", 0x17);
    clap_builder::builder::arg::Arg::action::hf94e6b04f9335b82(&var_4b8, &var_780, 5);
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_780, &var_a48, &var_4b8);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_a48, 
        "address-radixRadix must be one o…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_a48, 0x41);
    clap_builder::builder::arg::Arg::long::h9e982e05d1967df1(&var_a48, &var_4b8, 
        "address-radixRadix must be one o…");
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_4b8, &var_a48, 
        "Select the base in which file of…", 0x32);
    void var_268;
    clap_builder::builder::arg::Arg::value_name::hf04d8fd04594ffa1(&var_268, &var_4b8, 
        "RADIXSkip bytes input bytes befo…");
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_a48, &var_780, &var_268);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_780, 
        "skip-byteswidth: warning: invali…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_780, 0x6a);
    clap_builder::builder::arg::Arg::long::h9e982e05d1967df1(&var_780, &var_4b8, 
        "skip-byteswidth: warning: invali…");
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_4b8, &var_780, 
        "Skip bytes input bytes before fo…", 0x35);
    clap_builder::builder::arg::Arg::value_name::hf04d8fd04594ffa1(&var_268, &var_4b8, 
        "BYTESlimit dump to BYTES input b…");
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_780, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_a48, 
        "read-bytesaddress-radixRadix mus…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_a48, 0x4e);
    clap_builder::builder::arg::Arg::long::h9e982e05d1967df1(&var_a48, &var_4b8, 
        "read-bytesaddress-radixRadix mus…");
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_4b8, &var_a48, 
        "limit dump to BYTES input bytesb…", 0x1f);
    clap_builder::builder::arg::Arg::value_name::hf04d8fd04594ffa1(&var_268, &var_4b8, 
        "BYTESlimit dump to BYTES input b…");
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_a48, &var_780, &var_268);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_780, 
        "endianlittlebigInvalid argument …");
    clap_builder::builder::arg::Arg::long::h9e982e05d1967df1(&var_4b8, &var_780, 
        "endianlittlebigInvalid argument …");
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_780, &var_4b8, 
        "byte order to use for multi-byte…", 0x28);
    var_4b8 = "bigInvalid argument --endian=ski…";
    int64_t var_4b0 = 3;
    char const* const var_4a8 = "littlebigInvalid argument --endi…";
    int64_t var_4a0 = 6;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h5e92bc9db343bff7(&var_268, &var_4b8);
    clap_builder::builder::arg::Arg::value_parser::h528a5cc439739288(&var_4b8, &var_780, &var_268);
    clap_builder::builder::arg::Arg::value_name::hf04d8fd04594ffa1(&var_268, &var_4b8, 
        "big|littlestringsNotImplemented:…");
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_780, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_a48, 
        "stringsNotImplemented: output st…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_a48, 0x53);
    clap_builder::builder::arg::Arg::long::h9e982e05d1967df1(&var_a48, &var_4b8, 
        "stringsNotImplemented: output st…");
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_4b8, &var_a48, 
        "NotImplemented: output strings o…", 0x69);
    clap_builder::builder::arg::Arg::default_missing_value::h61d700cb9e1e17e3(&var_a48, &var_4b8, 
        "3anamed characters, ignoring hig…");
    clap_builder::builder::arg::Arg::value_name::hf04d8fd04594ffa1(&var_4b8, &var_a48, 
        "BYTESlimit dump to BYTES input b…");
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_a48, &var_780, &var_4b8);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_780, 
        "anamed characters, ignoring high…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_780, 0x61);
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_780, &var_4b8, 
        "named characters, ignoring high-…", 0x29);
    clap_builder::builder::arg::Arg::action::hf94e6b04f9335b82(&var_4b8, &var_780, 2);
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_780, &var_a48, &var_4b8);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_a48, 
        "boctal bytescASCII characters or…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_a48, 0x62);
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_a48, &var_4b8, 
        "octal bytescASCII characters or …", 0xb);
    clap_builder::builder::arg::Arg::action::hf94e6b04f9335b82(&var_4b8, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_a48, &var_780, &var_4b8);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_780, 
        "cASCII characters or backslash e…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_780, 0x63);
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_780, &var_4b8, 
        "ASCII characters or backslash es…", 0x25);
    clap_builder::builder::arg::Arg::action::hf94e6b04f9335b82(&var_4b8, &var_780, 2);
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_780, &var_a48, &var_4b8);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_a48, 
        "dunsigned decimal 2-byte unitsDu…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_a48, 0x64);
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_a48, &var_4b8, 
        "unsigned decimal 2-byte unitsDun…", 0x1d);
    clap_builder::builder::arg::Arg::action::hf94e6b04f9335b82(&var_4b8, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_a48, &var_780, &var_4b8);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_780, 
        "Dunsigned decimal 4-byte unitsoo…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_780, 0x44);
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_780, &var_4b8, 
        "unsigned decimal 4-byte unitsooc…", 0x1d);
    clap_builder::builder::arg::Arg::action::hf94e6b04f9335b82(&var_4b8, &var_780, 2);
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_780, &var_a48, &var_4b8);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_a48, 
        "ooctal 2-byte unitsIdecimal 8-by…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_a48, 0x6f);
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_a48, &var_4b8, 
        "octal 2-byte unitsIdecimal 8-byt…", 0x12);
    clap_builder::builder::arg::Arg::action::hf94e6b04f9335b82(&var_4b8, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_a48, &var_780, &var_4b8);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_780, 
        "Idecimal 8-byte unitsLidecimal 4…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_780, 0x49);
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_780, &var_4b8, 
        "decimal 8-byte unitsLidecimal 4-…", 0x14);
    clap_builder::builder::arg::Arg::action::hf94e6b04f9335b82(&var_4b8, &var_780, 2);
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_780, &var_a48, &var_4b8);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_a48, 
        "Lidecimal 4-byte unitslxhexadeci…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_a48, 0x4c);
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_a48, &var_4b8, 
        "decimal 8-byte unitsLidecimal 4-…", 0x14);
    clap_builder::builder::arg::Arg::action::hf94e6b04f9335b82(&var_4b8, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_a48, &var_780, &var_4b8);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_780, 
        "idecimal 4-byte unitslxhexadecim…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_780, 0x69);
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_780, &var_4b8, 
        "decimal 4-byte unitslxhexadecima…", 0x14);
    clap_builder::builder::arg::Arg::action::hf94e6b04f9335b82(&var_4b8, &var_780, 2);
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_780, &var_a48, &var_4b8);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_a48, 
        "lxhexadecimal 2-byte unitshOocta…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_a48, 0x6c);
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_a48, &var_4b8, 
        "decimal 8-byte unitsLidecimal 4-…", 0x14);
    clap_builder::builder::arg::Arg::action::hf94e6b04f9335b82(&var_4b8, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_a48, &var_780, &var_4b8);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_780, 
        "xhexadecimal 2-byte unitshOoctal…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_780, 0x78);
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_780, &var_4b8, 
        "hexadecimal 2-byte unitshOoctal …", 0x18);
    clap_builder::builder::arg::Arg::action::hf94e6b04f9335b82(&var_4b8, &var_780, 2);
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_780, &var_a48, &var_4b8);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_a48, 
        "hOoctal 4-byte unitssdecimal 2-b…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_a48, 0x68);
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_a48, &var_4b8, 
        "hexadecimal 2-byte unitshOoctal …", 0x18);
    clap_builder::builder::arg::Arg::action::hf94e6b04f9335b82(&var_4b8, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_a48, &var_780, &var_4b8);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_780, 
        "Ooctal 4-byte unitssdecimal 2-by…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_780, 0x4f);
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_780, &var_4b8, 
        "octal 4-byte unitssdecimal 2-byt…", 0x12);
    clap_builder::builder::arg::Arg::action::hf94e6b04f9335b82(&var_4b8, &var_780, 2);
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_780, &var_a48, &var_4b8);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_a48, 
        "sdecimal 2-byte unitsXhexadecima…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_a48, 0x73);
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_a48, &var_4b8, 
        "decimal 2-byte unitsXhexadecimal…", 0x14);
    clap_builder::builder::arg::Arg::action::hf94e6b04f9335b82(&var_4b8, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_a48, &var_780, &var_4b8);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_780, 
        "Xhexadecimal 4-byte unitsHefloat…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_780, 0x58);
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_780, &var_4b8, 
        "hexadecimal 4-byte unitsHefloati…", 0x18);
    clap_builder::builder::arg::Arg::action::hf94e6b04f9335b82(&var_4b8, &var_780, 2);
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_780, &var_a48, &var_4b8);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_a48, 
        "Hefloating point double precisio…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_a48, 0x48);
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_a48, &var_4b8, 
        "hexadecimal 4-byte unitsHefloati…", 0x18);
    clap_builder::builder::arg::Arg::action::hf94e6b04f9335b82(&var_4b8, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_a48, &var_780, &var_4b8);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_780, 
        "efloating point double precision…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_780, 0x65);
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_780, &var_4b8, 
        "floating point double precision …", 0x2e);
    clap_builder::builder::arg::Arg::action::hf94e6b04f9335b82(&var_4b8, &var_780, 2);
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_780, &var_a48, &var_4b8);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_a48, 
        "ffloating point double precision…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_a48, 0x66);
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_a48, &var_4b8, 
        "floating point double precision …", 0x2e);
    clap_builder::builder::arg::Arg::action::hf94e6b04f9335b82(&var_4b8, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_a48, &var_780, &var_4b8);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_780, 
        "Fformatselect output format or f…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_780, 0x46);
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_780, &var_4b8, 
        "floating point double precision …", 0x2e);
    clap_builder::builder::arg::Arg::action::hf94e6b04f9335b82(&var_4b8, &var_780, 2);
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_780, &var_a48, &var_4b8);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_a48, 
        "formatselect output format or fo…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_a48, 0x74);
    clap_builder::builder::arg::Arg::long::h9e982e05d1967df1(&var_a48, &var_4b8, 
        "formatselect output format or fo…");
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_4b8, &var_a48, 
        "select output format or formatsd…", 0x1f);
    clap_builder::builder::arg::Arg::action::hf94e6b04f9335b82(&var_a48, &var_4b8, 1);
    clap_builder::builder::arg::Arg::num_args::h394c78398f130568(&var_4b8, &var_a48);
    clap_builder::builder::arg::Arg::value_name::hf04d8fd04594ffa1(&var_268, &var_4b8, 
        &data_40d6b4[8]);
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_a48, &var_780, &var_268);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_780, 
        "output-duplicates0.0.28Dump file…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_780, 0x76);
    clap_builder::builder::arg::Arg::long::h9e982e05d1967df1(&var_780, &var_4b8, 
        "output-duplicates0.0.28Dump file…");
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_4b8, &var_780, 
        "do not use * to mark line suppre…", 0x25);
    clap_builder::builder::arg::Arg::action::hf94e6b04f9335b82(&var_268, &var_4b8, 2);
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_780, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_a48, 
        "width: warning: invalid width  i…");
    clap_builder::builder::arg::Arg::short::h979ed91ff0c4a334(&var_4b8, &var_a48, 0x77);
    clap_builder::builder::arg::Arg::long::h9e982e05d1967df1(&var_a48, &var_4b8, 
        "width: warning: invalid width  i…");
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_4b8, &var_a48, 
        "output BYTES bytes per output li…", 0x4e);
    clap_builder::builder::arg::Arg::default_missing_value::h61d700cb9e1e17e3(&var_a48, &var_4b8, 
        "32traditionalcompatibility mode …");
    clap_builder::builder::arg::Arg::value_name::hf04d8fd04594ffa1(&var_4b8, &var_a48, 
        "BYTESlimit dump to BYTES input b…");
    clap_builder::builder::arg::Arg::num_args::h4f7823f969f44fd2(&var_268, &var_4b8);
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_a48, &var_780, &var_268);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_780, 
        "traditionalcompatibility mode wi…");
    clap_builder::builder::arg::Arg::long::h9e982e05d1967df1(&var_4b8, &var_780, 
        "traditionalcompatibility mode wi…");
    clap_builder::builder::arg::Arg::help::h526a7c98ea600f1b(&var_780, &var_4b8, 
        "compatibility mode with one inpu…", 0x34);
    clap_builder::builder::arg::Arg::action::hf94e6b04f9335b82(&var_4b8, &var_780, 2);
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(&var_780, &var_a48, &var_4b8);
    clap_builder::builder::arg::Arg::new::h3ee8def6fb85f401(&var_a48, "FILENAME\n       extern "");
    memcpy(&var_4b8, &var_a48, 0x248);
    int32_t var_800;
    int32_t var_270 = var_800 | 4;
    int32_t var_7fc;
    int32_t var_26c = var_7fc;
    clap_builder::builder::arg::Arg::action::hf94e6b04f9335b82(&var_a48, &var_4b8, 1);
    clap_builder::builder::arg::Arg::value_hint::hde7c948aedfb35d8(&var_4b8, &var_a48, 3);
    clap_builder::builder::command::Command::arg::hc3213052d83c3ed0(arg1, &var_780, &var_4b8);
    return arg1;
}
