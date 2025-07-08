
  fn uu_numfmt::uu_app::hfdc8a28206314692(arg1: i64) -> i64

{
    let mut var_530: ();
    clap_builder::builder::command::Command::new::h86b8567eb66d5204(&var_530, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_7f8: ();
    clap_builder::builder::command::Command::version::ha7ea0a52be8eb416(&var_7f8, &var_530, 
        "0.0.28Convert numbers from/to hu…");
    clap_builder::builder::command::Command::about::h95c32eb25fe1a46d(&var_530, &var_7f8, 
        "Convert numbers from/to human-re…", 0x2e);
    clap_builder::builder::command::Command::after_help::h5853cdd83b814a8b(&var_7f8, &var_530, 
        "UNIT options:\n\n- none: no auto…", 0x43a);
    let mut var_a48: *mut c_void;
    uucore::format_usage::h76fcb2d15fbabc58(&var_a48, "{} [OPTION]... [NUMBER]...Xuse X…", 0x1a);
    clap_builder::builder::command::Command::override_usage::h3005ef682b859420(&var_530, &var_7f8, 
        &var_a48);
    memcpy(&var_7f8, &var_530, 0x2bc);
    let var_274: i64;
    let var_53c: i64 = 0x8000000084 | var_274;
    let var_26c: i32;
    let var_534: i32 = var_26c;
    clap_builder::builder::arg::Arg::new::hc51db1606d097c0b(&var_530, 
        "delimiterroundupfrom-zerotowards…");
    clap_builder::builder::arg::Arg::short::h3d5a84e6a157cc7a(&var_a48, &var_530);
    clap_builder::builder::arg::Arg::long::hd0fac2f3b501b599(&var_530, &var_a48, 
        "delimiterroundupfrom-zerotowards…");
    clap_builder::builder::arg::Arg::value_name::h1f55c923aa15197e(&var_a48, &var_530, 
        "Xuse X instead of whitespace for…");
    let mut var_268: *const i8;
    clap_builder::builder::arg::Arg::help::h6f7819c90452655a(&var_268, &var_a48, 
        "use X instead of whitespace for …", 0x2f);
    clap_builder::builder::command::Command::arg::hf9393f763cdc0fc1(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hc51db1606d097c0b(&var_7f8, 
        "fieldformatgrouping cannot be co…");
    clap_builder::builder::arg::Arg::long::hd0fac2f3b501b599(&var_a48, &var_7f8, 
        "fieldformatgrouping cannot be co…");
    clap_builder::builder::arg::Arg::help::h6f7819c90452655a(&var_7f8, &var_a48, 
        "replace the numbers in these inp…", 0x3b);
    clap_builder::builder::arg::Arg::value_name::h1f55c923aa15197e(&var_a48, &var_7f8, 
        "FIELDS1use printf style floating…");
    memcpy(&var_7f8, &var_a48, 0x248);
    let var_800: i32;
    let var_5b0: i32 = var_800 | 0x20;
    let var_7fc: i32;
    let var_5ac: i32 = var_7fc;
    clap_builder::builder::arg::Arg::default_value::hedcfaeb74e8609bd(&var_a48, &var_7f8, 
        "1use printf style floating-point…");
    clap_builder::builder::command::Command::arg::hf9393f763cdc0fc1(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::hc51db1606d097c0b(&var_530, 
        "formatgrouping cannot be combine…");
    clap_builder::builder::arg::Arg::long::hd0fac2f3b501b599(&var_a48, &var_530, 
        "formatgrouping cannot be combine…");
    clap_builder::builder::arg::Arg::help::h6f7819c90452655a(&var_530, &var_a48, 
        "use printf style floating-point …", 0x44);
    clap_builder::builder::arg::Arg::value_name::h1f55c923aa15197e(&var_a48, &var_530, 
        "FORMATauto-scale input numbers t…");
    memcpy(&var_268, &var_a48, 0x248);
    let var_20: i32 = var_800 | 0x20;
    let var_1c: i32 = var_7fc;
    clap_builder::builder::command::Command::arg::hf9393f763cdc0fc1(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hc51db1606d097c0b(&var_7f8, 
        "fromAutoBOLDBlue\x1b[4mUNITSomed…");
    clap_builder::builder::arg::Arg::long::hd0fac2f3b501b599(&var_a48, &var_7f8, 
        "fromAutoBOLDBlue\x1b[4mUNITSomed…");
    clap_builder::builder::arg::Arg::help::h6f7819c90452655a(&var_7f8, &var_a48, 
        "auto-scale input numbers to UNIT…", 0x31);
    clap_builder::builder::arg::Arg::value_name::h1f55c923aa15197e(&var_a48, &var_7f8, 
        "UNITSomedumb\x1b[5m <= \x1b[9mtr…");
    clap_builder::builder::arg::Arg::default_value::hedcfaeb74e8609bd(&var_268, &var_a48, 
        "nonedownhelpNoneshimname\x1b[0m …");
    clap_builder::builder::command::Command::arg::hf9393f763cdc0fc1(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::hc51db1606d097c0b(&var_530, 
        "from-unitto-unitpaddingheaderfie…");
    clap_builder::builder::arg::Arg::long::hd0fac2f3b501b599(&var_a48, &var_530, 
        "from-unitto-unitpaddingheaderfie…");
    clap_builder::builder::arg::Arg::help::h6f7819c90452655a(&var_530, &var_a48, 
        "specify the input unit sizeNauto…", 0x1b);
    clap_builder::builder::arg::Arg::value_name::h1f55c923aa15197e(&var_a48, &var_530, 
        "Nauto-scale output numbers to UN…");
    clap_builder::builder::arg::Arg::default_value::hedcfaeb74e8609bd(&var_268, &var_a48, 
        "1use printf style floating-point…");
    clap_builder::builder::command::Command::arg::hf9393f763cdc0fc1(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hc51db1606d097c0b(&var_7f8, 
        "tofrom-unitto-unitpaddingheaderf…");
    clap_builder::builder::arg::Arg::long::hd0fac2f3b501b599(&var_a48, &var_7f8, 
        "tofrom-unitto-unitpaddingheaderf…");
    clap_builder::builder::arg::Arg::help::h6f7819c90452655a(&var_7f8, &var_a48, 
        "auto-scale output numbers to UNI…", 0x32);
    clap_builder::builder::arg::Arg::value_name::h1f55c923aa15197e(&var_a48, &var_7f8, 
        "UNITSomedumb\x1b[5m <= \x1b[9mtr…");
    clap_builder::builder::arg::Arg::default_value::hedcfaeb74e8609bd(&var_268, &var_a48, 
        "nonedownhelpNoneshimname\x1b[0m …");
    clap_builder::builder::command::Command::arg::hf9393f763cdc0fc1(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::hc51db1606d097c0b(&var_530, 
        "to-unitpaddingheaderfieldformatg…");
    clap_builder::builder::arg::Arg::long::hd0fac2f3b501b599(&var_a48, &var_530, 
        "to-unitpaddingheaderfieldformatg…");
    clap_builder::builder::arg::Arg::help::h6f7819c90452655a(&var_530, &var_a48, 
        "the output unit sizepad the outp…", 0x14);
    clap_builder::builder::arg::Arg::value_name::h1f55c923aa15197e(&var_a48, &var_530, 
        "Nauto-scale output numbers to UN…");
    clap_builder::builder::arg::Arg::default_value::hedcfaeb74e8609bd(&var_268, &var_a48, 
        "1use printf style floating-point…");
    clap_builder::builder::command::Command::arg::hf9393f763cdc0fc1(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hc51db1606d097c0b(&var_7f8, 
        "paddingheaderfieldformatgrouping…");
    clap_builder::builder::arg::Arg::long::hd0fac2f3b501b599(&var_a48, &var_7f8, 
        "paddingheaderfieldformatgrouping…");
    clap_builder::builder::arg::Arg::help::h6f7819c90452655a(&var_7f8, &var_a48, 
        "pad the output to N characters; …", 0xc7);
    clap_builder::builder::arg::Arg::value_name::h1f55c923aa15197e(&var_a48, &var_7f8, 
        "Nauto-scale output numbers to UN…");
    clap_builder::builder::command::Command::arg::hf9393f763cdc0fc1(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::hc51db1606d097c0b(&var_530, 
        "headerfieldformatgrouping cannot…");
    clap_builder::builder::arg::Arg::long::hd0fac2f3b501b599(&var_a48, &var_530, 
        "headerfieldformatgrouping cannot…");
    clap_builder::builder::arg::Arg::help::h6f7819c90452655a(&var_530, &var_a48, 
        "print (without converting) the f…", 0x55);
    clap_builder::builder::arg::Arg::num_args::hc5743a8ddacd2d3e(&var_a48, &var_530);
    clap_builder::builder::arg::Arg::value_name::h1f55c923aa15197e(&var_530, &var_a48, 
        "Nauto-scale output numbers to UN…");
    clap_builder::builder::arg::Arg::default_missing_value::hd0da8f35d619a3c2(&var_a48, &var_530);
    memcpy(&var_268, &var_a48, 0x248);
    let var_20_1: i32 = 0x400 | var_800;
    let var_1c_1: i32 = var_7fc;
    clap_builder::builder::command::Command::arg::hf9393f763cdc0fc1(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hc51db1606d097c0b(&var_7f8, 
        "roundupfrom-zerotowards-zeronear…");
    clap_builder::builder::arg::Arg::long::hd0fac2f3b501b599(&var_a48, &var_7f8, 
        "roundupfrom-zerotowards-zeronear…");
    clap_builder::builder::arg::Arg::help::h6f7819c90452655a(&var_7f8, &var_a48, 
        "use METHOD for rounding when sca…", 0x24);
    clap_builder::builder::arg::Arg::value_name::h1f55c923aa15197e(&var_a48, &var_7f8, 
        "METHODprint SUFFIX after each fo…");
    clap_builder::builder::arg::Arg::default_value::hedcfaeb74e8609bd(&var_7f8, &var_a48, 
        "from-zerotowards-zeronearestinte…");
    var_a48 = "upfrom-zerotowards-zeronearestin…";
    let var_a40: i64 = 2;
    let var_a38: *const i8 = "downhelpNoneshimname\x1b[0m    C…";
    let var_a30: i64 = 4;
    let var_a28: *mut c_void = "from-zerotowards-zeronearestinte…";
    let var_a20: i64 = 9;
    let var_a18: *mut c_void = "towards-zeronearestinternal erro…";
    let var_a10: i64 = 0xc;
    let var_a08: *mut c_void = "nearestinternal error: entered u…";
    let var_a00: i64 = 7;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h4cd6baee175a61c7(&var_268, &var_a48);
    clap_builder::builder::arg::Arg::value_parser::h070c43e44d892b1b(&var_a48, &var_7f8, &var_268);
    clap_builder::builder::command::Command::arg::hf9393f763cdc0fc1(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::hc51db1606d097c0b(&var_530, 
        "suffixinvalidinvalid padding val…");
    clap_builder::builder::arg::Arg::long::hd0fac2f3b501b599(&var_a48, &var_530, 
        "suffixinvalidinvalid padding val…");
    clap_builder::builder::arg::Arg::help::h6f7819c90452655a(&var_530, &var_a48, 
        "print SUFFIX after each formatte…", 0x59);
    clap_builder::builder::arg::Arg::value_name::h1f55c923aa15197e(&var_a48, &var_530, 
        "SUFFIXset the failure mode for i…");
    clap_builder::builder::command::Command::arg::hf9393f763cdc0fc1(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::hc51db1606d097c0b(&var_7f8, 
        "invalidinvalid padding value inv…");
    clap_builder::builder::arg::Arg::long::hd0fac2f3b501b599(&var_a48, &var_7f8, 
        "invalidinvalid padding value inv…");
    clap_builder::builder::arg::Arg::help::h6f7819c90452655a(&var_7f8, &var_a48, 
        "set the failure mode for invalid…", 0x26);
    clap_builder::builder::arg::Arg::default_value::hedcfaeb74e8609bd(&var_a48, &var_7f8, 
        "abortignoreINVALIDNUMBERIoErrorI…");
    var_268 = "abortignoreINVALIDNUMBERIoErrorI…";
    let var_260: i64 = 5;
    let var_258: *const i8 = "failkeysKindboolmut \x1b[1mkind/";
    let var_250: i64 = 4;
    let var_248: *const i8 = "warn\x1b[7m";
    let var_240: i64 = 4;
    let var_238: *const i8 = "ignoreINVALIDNUMBERIoErrorIllega…";
    let var_230: i64 = 6;
    clap_builder::builder::arg::Arg::value_parser::hd70490473ffb4fb0(&var_7f8, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::value_name::h1f55c923aa15197e(&var_a48, &var_7f8, 
        "INVALIDNUMBERIoErrorIllegalArgum…");
    clap_builder::builder::command::Command::arg::hf9393f763cdc0fc1(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::hc51db1606d097c0b(&var_530, 
        "NUMBERIoErrorIllegalArgumentForm…");
    memcpy(&var_a48, &var_530, 0x248);
    let var_2e8: i32;
    let var_800_1: i32 = var_2e8 | 4;
    let var_2e4: i32;
    let var_7fc_1: i32 = var_2e4;
    clap_builder::builder::arg::Arg::action::hc27cbaf071c08c27(&var_530, &var_a48);
    clap_builder::builder::command::Command::arg::hf9393f763cdc0fc1(arg1, &var_7f8, &var_530);
    arg1
}
