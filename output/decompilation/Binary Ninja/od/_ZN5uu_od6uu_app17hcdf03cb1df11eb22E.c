
  int64_t uu_od::uu_app::hcdf03cb1df11eb22(int64_t arg1)

{
    void var_ab0;
    clap_builder::builder::command::Command::new::hde45e83c432881e8(&var_ab0, 
        uucore::util_name::h074417a1e6395129());
    void var_7e8;
    clap_builder::builder::command::Command::version::h7d6d8989f5c04e63(&var_7e8, &var_ab0);
    clap_builder::builder::command::Command::about::hcdc7aeb1074be224(&var_ab0, &var_7e8);
    char const* const var_520;
    uucore::format_usage::he053403a896311ed(&var_520, "{} [OPTION]... [--] [FILENAME]..…", 0xaf);
    clap_builder::builder::command::Command::override_usage::h19013c1e0725c126(&var_7e8, &var_ab0, 
        &var_520);
    clap_builder::builder::command::Command::after_help::hf0eb83f0a1a00b5c(&var_ab0, &var_7e8);
    memcpy(&var_7e8, &var_ab0, 0x2bc);
    int64_t var_7f4;
    int64_t var_52c = 0x800c8000800e8 | var_7f4;
    int32_t var_7ec;
    int32_t var_524 = var_7ec;
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_ab0, 
        "helpNoneshim\x1b[0mnameCyan    T…");
    clap_builder::builder::arg::Arg::long::h5e292a21bf2e0846(&var_520, &var_ab0, 
        "helpNoneshim\x1b[0mnameCyan    T…");
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_ab0, &var_520, 
        "Print help information.Select th…", 0x17);
    clap_builder::builder::arg::Arg::action::hb1056dd3e09bf4fb(&var_520, &var_ab0, 5);
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_ab0, &var_7e8, &var_520);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_7e8, 
        "address-radixread-bytesskip-byte…");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_7e8, 0x41);
    clap_builder::builder::arg::Arg::long::h5e292a21bf2e0846(&var_7e8, &var_520, 
        "address-radixread-bytesskip-byte…");
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_520, &var_7e8, 
        "Select the base in which file of…", 0x32);
    void var_2a0;
    clap_builder::builder::arg::Arg::value_name::h2fd07fdaa472a2f2(&var_2a0, &var_520, 
        "RADIXSkip bytes input bytes befo…");
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_7e8, &var_ab0, &var_2a0);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_ab0, 
        "skip-bytesformatoutput-duplicate…");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_ab0, 0x6a);
    clap_builder::builder::arg::Arg::long::h5e292a21bf2e0846(&var_ab0, &var_520, 
        "skip-bytesformatoutput-duplicate…");
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_520, &var_ab0, 
        "Skip bytes input bytes before fo…", 0x35);
    clap_builder::builder::arg::Arg::value_name::h2fd07fdaa472a2f2(&var_2a0, &var_520, 
        "BYTESlimit dump to BYTES input b…");
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_ab0, &var_7e8, &var_2a0);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_7e8, 
        "read-bytesskip-bytesformatoutput…");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_7e8, 0x4e);
    clap_builder::builder::arg::Arg::long::h5e292a21bf2e0846(&var_7e8, &var_520, 
        "read-bytesskip-bytesformatoutput…");
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_520, &var_7e8, 
        "limit dump to BYTES input bytesb…", 0x1f);
    clap_builder::builder::arg::Arg::value_name::h2fd07fdaa472a2f2(&var_2a0, &var_520, 
        "BYTESlimit dump to BYTES input b…");
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_7e8, &var_ab0, &var_2a0);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_ab0, 
        "endiansrc/uu/od/src/od.rs(uutils…");
    clap_builder::builder::arg::Arg::long::h5e292a21bf2e0846(&var_520, &var_ab0, 
        "endiansrc/uu/od/src/od.rs(uutils…");
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_ab0, &var_520, 
        "byte order to use for multi-byte…", 0x28);
    var_520 = "bigInvalid argument --endian=: w…";
    int64_t var_518 = 3;
    char const* const var_510 = "littlebigInvalid argument --endi…";
    int64_t var_508 = 6;
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h827d1b255e26425e(&var_2a0, &var_520);
    clap_builder::builder::arg::Arg::value_parser::hdb4abf0967fc2058(&var_520, &var_ab0, &var_2a0);
    clap_builder::builder::arg::Arg::value_name::h2fd07fdaa472a2f2(&var_2a0, &var_520, 
        "big|littlestringsNotImplemented:…");
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_ab0, &var_7e8, &var_2a0);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_7e8, 
        "stringsNotImplemented: output st…");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_7e8, 0x53);
    clap_builder::builder::arg::Arg::long::h5e292a21bf2e0846(&var_7e8, &var_520, 
        "stringsNotImplemented: output st…");
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_520, &var_7e8, 
        "NotImplemented: output strings o…", 0x69);
    clap_builder::builder::arg::Arg::default_missing_value::h2056f10ffc528da0(&var_7e8, &var_520, 
        "3456789:;<=>?@ABCDEFGHIJKLMNOPQR…");
    clap_builder::builder::arg::Arg::value_name::h2fd07fdaa472a2f2(&var_520, &var_7e8, 
        "BYTESlimit dump to BYTES input b…");
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_7e8, &var_ab0, &var_520);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_ab0, 
        "abcdefghijklmnopqrstuvwxyz{|}~de…");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_ab0, 0x61);
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_ab0, &var_520, 
        "named characters, ignoring high-…", 0x29);
    clap_builder::builder::arg::Arg::action::hb1056dd3e09bf4fb(&var_520, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_ab0, &var_7e8, &var_520);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_7e8, 
        "bcdefghijklmnopqrstuvwxyz{|}~del");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_7e8, 0x62);
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_7e8, &var_520, 
        "octal bytesASCII characters or b…", 0xb);
    clap_builder::builder::arg::Arg::action::hb1056dd3e09bf4fb(&var_520, &var_7e8, 2);
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_7e8, &var_ab0, &var_520);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_ab0, 
        "cdefghijklmnopqrstuvwxyz{|}~del");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_ab0, 0x63);
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_ab0, &var_520, 
        "ASCII characters or backslash es…", 0x25);
    clap_builder::builder::arg::Arg::action::hb1056dd3e09bf4fb(&var_520, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_ab0, &var_7e8, &var_520);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_7e8, 
        "defghijklmnopqrstuvwxyz{|}~del");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_7e8, 0x64);
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_7e8, &var_520, 
        "unsigned decimal 2-byte unitsuns…", 0x1d);
    clap_builder::builder::arg::Arg::action::hb1056dd3e09bf4fb(&var_520, &var_7e8, 2);
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_7e8, &var_ab0, &var_520);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_ab0, 
        "DEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abc…");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_ab0, 0x44);
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_ab0, &var_520, 
        "unsigned decimal 4-byte unitsoct…", 0x1d);
    clap_builder::builder::arg::Arg::action::hb1056dd3e09bf4fb(&var_520, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_ab0, &var_7e8, &var_520);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_7e8, "opqrstuvwxyz{|}~del");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_7e8, 0x6f);
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_7e8, &var_520, 
        "octal 2-byte unitsdecimal 8-byte…", 0x12);
    clap_builder::builder::arg::Arg::action::hb1056dd3e09bf4fb(&var_520, &var_7e8, 2);
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_7e8, &var_ab0, &var_520);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_ab0, 
        "IJKLMNOPQRSTUVWXYZ[\]^_`abcdefgh…");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_ab0, 0x49);
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_ab0, &var_520, 
        "decimal 8-byte unitsdecimal 4-by…", 0x14);
    clap_builder::builder::arg::Arg::action::hb1056dd3e09bf4fb(&var_520, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_ab0, &var_7e8, &var_520);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_7e8, 
        "LMNOPQRSTUVWXYZ[\]^_`abcdefghijk…");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_7e8, 0x4c);
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_7e8, &var_520, 
        "decimal 8-byte unitsdecimal 4-by…", 0x14);
    clap_builder::builder::arg::Arg::action::hb1056dd3e09bf4fb(&var_520, &var_7e8, 2);
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_7e8, &var_ab0, &var_520);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_ab0, "ijklmnopqrstuvwxyz{|}~del");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_ab0, 0x69);
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_ab0, &var_520, 
        "decimal 4-byte unitshexadecimal …", 0x14);
    clap_builder::builder::arg::Arg::action::hb1056dd3e09bf4fb(&var_520, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_ab0, &var_7e8, &var_520);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_7e8, "lmnopqrstuvwxyz{|}~del");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_7e8, 0x6c);
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_7e8, &var_520, 
        "decimal 8-byte unitsdecimal 4-by…", 0x14);
    clap_builder::builder::arg::Arg::action::hb1056dd3e09bf4fb(&var_520, &var_7e8, 2);
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_7e8, &var_ab0, &var_520);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_ab0, "xyz{|}~del");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_ab0, 0x78);
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_ab0, &var_520, 
        "hexadecimal 2-byte unitsoctal 4-…", 0x18);
    clap_builder::builder::arg::Arg::action::hb1056dd3e09bf4fb(&var_520, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_ab0, &var_7e8, &var_520);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_7e8, "hijklmnopqrstuvwxyz{|}~del");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_7e8, 0x68);
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_7e8, &var_520, 
        "hexadecimal 2-byte unitsoctal 4-…", 0x18);
    clap_builder::builder::arg::Arg::action::hb1056dd3e09bf4fb(&var_520, &var_7e8, 2);
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_7e8, &var_ab0, &var_520);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_ab0, 
        "OPQRSTUVWXYZ[\]^_`abcdefghijklmn…");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_ab0, 0x4f);
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_ab0, &var_520, 
        "octal 4-byte unitsdecimal 2-byte…", 0x12);
    clap_builder::builder::arg::Arg::action::hb1056dd3e09bf4fb(&var_520, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_ab0, &var_7e8, &var_520);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_7e8, "stuvwxyz{|}~del");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_7e8, 0x73);
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_7e8, &var_520, 
        "decimal 2-byte unitshexadecimal …", 0x14);
    clap_builder::builder::arg::Arg::action::hb1056dd3e09bf4fb(&var_520, &var_7e8, 2);
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_7e8, &var_ab0, &var_520);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_ab0, 
        "XYZ[\]^_`abcdefghijklmnopqrstuvw…");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_ab0, 0x58);
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_ab0, &var_520, 
        "hexadecimal 4-byte unitsfloating…", 0x18);
    clap_builder::builder::arg::Arg::action::hb1056dd3e09bf4fb(&var_520, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_ab0, &var_7e8, &var_520);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_7e8, 
        "HIJKLMNOPQRSTUVWXYZ[\]^_`abcdefg…");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_7e8, 0x48);
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_7e8, &var_520, 
        "hexadecimal 4-byte unitsfloating…", 0x18);
    clap_builder::builder::arg::Arg::action::hb1056dd3e09bf4fb(&var_520, &var_7e8, 2);
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_7e8, &var_ab0, &var_520);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_ab0, 
        "efghijklmnopqrstuvwxyz{|}~del");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_ab0, 0x65);
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_ab0, &var_520, 
        "floating point double precision …", 0x2e);
    clap_builder::builder::arg::Arg::action::hb1056dd3e09bf4fb(&var_520, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_ab0, &var_7e8, &var_520);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_7e8, 
        "fghijklmnopqrstuvwxyz{|}~del");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_7e8, 0x66);
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_7e8, &var_520, 
        "floating point double precision …", 0x2e);
    clap_builder::builder::arg::Arg::action::hb1056dd3e09bf4fb(&var_520, &var_7e8, 2);
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_7e8, &var_ab0, &var_520);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_ab0, 
        "FGHIJKLMNOPQRSTUVWXYZ[\]^_`abcde…");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_ab0, 0x46);
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_ab0, &var_520, 
        "floating point double precision …", 0x2e);
    clap_builder::builder::arg::Arg::action::hb1056dd3e09bf4fb(&var_520, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_ab0, &var_7e8, &var_520);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_7e8, 
        "formatoutput-duplicateswidthsrc/…");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_7e8, 0x74);
    clap_builder::builder::arg::Arg::long::h5e292a21bf2e0846(&var_7e8, &var_520, 
        "formatoutput-duplicateswidthsrc/…");
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_520, &var_7e8, 
        "select output format or formatsd…", 0x1f);
    clap_builder::builder::arg::Arg::action::hb1056dd3e09bf4fb(&var_7e8, &var_520, 1);
    clap_builder::builder::arg::Arg::num_args::h6b5d7806756338c9(&var_520, &var_7e8);
    clap_builder::builder::arg::Arg::value_name::h2fd07fdaa472a2f2(&var_2a0, &var_520, 
        &data_41b1f4[0xc]);
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_7e8, &var_ab0, &var_2a0);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_ab0, 
        "output-duplicateswidthsrc/uu/od/…");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_ab0, 0x76);
    clap_builder::builder::arg::Arg::long::h5e292a21bf2e0846(&var_ab0, &var_520, 
        "output-duplicateswidthsrc/uu/od/…");
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_520, &var_ab0, 
        "do not use * to mark line suppre…", 0x25);
    clap_builder::builder::arg::Arg::action::hb1056dd3e09bf4fb(&var_2a0, &var_520, 2);
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_ab0, &var_7e8, &var_2a0);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_7e8, 
        "widthsrc/uu/od/src/parse_inputs.…");
    clap_builder::builder::arg::Arg::short::he4ece83972df5bde(&var_520, &var_7e8, 0x77);
    clap_builder::builder::arg::Arg::long::h5e292a21bf2e0846(&var_7e8, &var_520, 
        "widthsrc/uu/od/src/parse_inputs.…");
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_520, &var_7e8, 
        "output BYTES bytes per output li…", 0x4e);
    clap_builder::builder::arg::Arg::default_missing_value::h2056f10ffc528da0(&var_7e8, &var_520, 
        "32compatibility mode with one in…");
    clap_builder::builder::arg::Arg::value_name::h2fd07fdaa472a2f2(&var_520, &var_7e8, 
        "BYTESlimit dump to BYTES input b…");
    clap_builder::builder::arg::Arg::num_args::h70889333241b93cb(&var_2a0, &var_520);
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_7e8, &var_ab0, &var_2a0);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_ab0, 
        "traditionaladdress-radixread-byt…");
    clap_builder::builder::arg::Arg::long::h5e292a21bf2e0846(&var_520, &var_ab0, 
        "traditionaladdress-radixread-byt…");
    clap_builder::builder::arg::Arg::help::h931fbd51fcb5a7e6(&var_ab0, &var_520, 
        "compatibility mode with one inpu…", 0x34);
    clap_builder::builder::arg::Arg::action::hb1056dd3e09bf4fb(&var_520, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(&var_ab0, &var_7e8, &var_520);
    clap_builder::builder::arg::Arg::new::h944ad6c753b9862e(&var_7e8, 
        "FILENAME\n       extern "ENOTUNI…");
    memcpy(&var_520, &var_7e8, 0x278);
    int32_t var_570;
    int32_t var_2a8 = var_570 | 4;
    int32_t var_56c;
    int32_t var_2a4 = var_56c;
    clap_builder::builder::arg::Arg::action::hb1056dd3e09bf4fb(&var_7e8, &var_520, 1);
    clap_builder::builder::arg::Arg::value_hint::h26924d0645b46998(&var_520, &var_7e8);
    clap_builder::builder::command::Command::arg::h9f68d1a7073227de(arg1, &var_ab0, &var_520);
    return arg1;
}
