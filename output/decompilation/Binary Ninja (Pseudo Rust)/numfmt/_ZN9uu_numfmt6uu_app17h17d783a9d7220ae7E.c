
  fn uu_numfmt::uu_app::h17d783a9d7220ae7(arg1: i64) -> i64

{
    let mut var_568: ();
    clap_builder::builder::command::Command::new::hd4aa3d50c2b3ebb5(&var_568, 
        uucore::util_name::h074417a1e6395129());
    let mut var_830: ();
    clap_builder::builder::command::Command::version::h65f9ae31c75a1f13(&var_830, &var_568);
    clap_builder::builder::command::Command::about::h29965a2561e854e1(&var_568, &var_830);
    clap_builder::builder::command::Command::after_help::he7b36b9534028bf3(&var_830, &var_568);
    let mut var_ab0: *mut c_void;
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... [NUMBER]...Xuse X…", 0x1a);
    clap_builder::builder::command::Command::override_usage::h60b38f6a906c750f(&var_568, &var_830, 
        &var_ab0);
    memcpy(&var_830, &var_568, 0x2bc);
    let var_2ac: i64;
    let var_574: i64 = 0x8000000084 | var_2ac;
    let var_2a4: i32;
    let var_56c: i32 = var_2a4;
    clap_builder::builder::arg::Arg::new::h6e2e53945c4f26b2(&var_568, 
        "delimiterroundsuffixinvalidzero-…");
    clap_builder::builder::arg::Arg::short::hb07776535c4064a9(&var_ab0, &var_568, 0x64);
    clap_builder::builder::arg::Arg::long::hfeb8ebcd71024214(&var_568, &var_ab0, 
        "delimiterroundsuffixinvalidzero-…");
    clap_builder::builder::arg::Arg::value_name::h0438544fd33361a2(&var_ab0, &var_568, 
        "Xuse X instead of whitespace for…");
    let mut var_2a0: *const i8;
    clap_builder::builder::arg::Arg::help::h288b8f3846a27dc5(&var_2a0, &var_ab0, 
        "use X instead of whitespace for …", 0x2f);
    clap_builder::builder::command::Command::arg::hec16206f3ca3d61a(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h6e2e53945c4f26b2(&var_830, 
        "fieldformatdelimiterroundsuffixi…");
    clap_builder::builder::arg::Arg::long::hfeb8ebcd71024214(&var_ab0, &var_830, 
        "fieldformatdelimiterroundsuffixi…");
    clap_builder::builder::arg::Arg::help::h288b8f3846a27dc5(&var_830, &var_ab0, 
        "replace the numbers in these inp…", 0x3b);
    clap_builder::builder::arg::Arg::value_name::h0438544fd33361a2(&var_ab0, &var_830, 
        "FIELDS1use printf style floating…");
    memcpy(&var_830, &var_ab0, 0x278);
    clap_builder::builder::arg::Arg::default_value::hb3311da4cde74683(&var_ab0, &var_830, 
        "1use printf style floating-point…");
    clap_builder::builder::command::Command::arg::hec16206f3ca3d61a(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::h6e2e53945c4f26b2(&var_568, 
        "formatdelimiterroundsuffixinvali…");
    clap_builder::builder::arg::Arg::long::hfeb8ebcd71024214(&var_ab0, &var_568, 
        "formatdelimiterroundsuffixinvali…");
    clap_builder::builder::arg::Arg::help::h288b8f3846a27dc5(&var_568, &var_ab0, 
        "use printf style floating-point …", 0x44);
    clap_builder::builder::arg::Arg::value_name::h0438544fd33361a2(&var_ab0, &var_568, 
        "FORMATauto-scale input numbers t…");
    memcpy(&var_2a0, &var_ab0, 0x278);
    let var_838: i32;
    let var_28: i32 = var_838 | 0x20;
    let var_834: i32;
    let var_24: i32 = var_834;
    clap_builder::builder::command::Command::arg::hec16206f3ca3d61a(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h6e2e53945c4f26b2(&var_830, "fromkindAuto/");
    clap_builder::builder::arg::Arg::long::hfeb8ebcd71024214(&var_ab0, &var_830, "fromkindAuto/");
    clap_builder::builder::arg::Arg::help::h288b8f3846a27dc5(&var_830, &var_ab0, 
        "auto-scale input numbers to UNIT…", 0x31);
    clap_builder::builder::arg::Arg::value_name::h0438544fd33361a2(&var_ab0, &var_830, 
        "UNITSomedumb\x1b[5m\x1b[9m <=  o…");
    clap_builder::builder::arg::Arg::default_value::hb3311da4cde74683(&var_2a0, &var_ab0, 
        "nonedownhelpNoneshim\x1b[0mnameC…");
    clap_builder::builder::command::Command::arg::hec16206f3ca3d61a(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h6e2e53945c4f26b2(&var_568, 
        "from-unitto-unitpaddingheaderfie…");
    clap_builder::builder::arg::Arg::long::hfeb8ebcd71024214(&var_ab0, &var_568, 
        "from-unitto-unitpaddingheaderfie…");
    clap_builder::builder::arg::Arg::help::h288b8f3846a27dc5(&var_568, &var_ab0, 
        "specify the input unit sizeNauto…", 0x1b);
    clap_builder::builder::arg::Arg::value_name::h0438544fd33361a2(&var_ab0, &var_568, 
        "Nauto-scale output numbers to UN…");
    clap_builder::builder::arg::Arg::default_value::hb3311da4cde74683(&var_2a0, &var_ab0, 
        "1use printf style floating-point…");
    clap_builder::builder::command::Command::arg::hec16206f3ca3d61a(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h6e2e53945c4f26b2(&var_830, 
        "tofrom-unitto-unitpaddingheaderf…");
    clap_builder::builder::arg::Arg::long::hfeb8ebcd71024214(&var_ab0, &var_830, 
        "tofrom-unitto-unitpaddingheaderf…");
    clap_builder::builder::arg::Arg::help::h288b8f3846a27dc5(&var_830, &var_ab0, 
        "auto-scale output numbers to UNI…", 0x32);
    clap_builder::builder::arg::Arg::value_name::h0438544fd33361a2(&var_ab0, &var_830, 
        "UNITSomedumb\x1b[5m\x1b[9m <=  o…");
    clap_builder::builder::arg::Arg::default_value::hb3311da4cde74683(&var_2a0, &var_ab0, 
        "nonedownhelpNoneshim\x1b[0mnameC…");
    clap_builder::builder::command::Command::arg::hec16206f3ca3d61a(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h6e2e53945c4f26b2(&var_568, 
        "to-unitpaddingheaderfieldformatd…");
    clap_builder::builder::arg::Arg::long::hfeb8ebcd71024214(&var_ab0, &var_568, 
        "to-unitpaddingheaderfieldformatd…");
    clap_builder::builder::arg::Arg::help::h288b8f3846a27dc5(&var_568, &var_ab0, 
        "the output unit sizepad the outp…", 0x14);
    clap_builder::builder::arg::Arg::value_name::h0438544fd33361a2(&var_ab0, &var_568, 
        "Nauto-scale output numbers to UN…");
    clap_builder::builder::arg::Arg::default_value::hb3311da4cde74683(&var_2a0, &var_ab0, 
        "1use printf style floating-point…");
    clap_builder::builder::command::Command::arg::hec16206f3ca3d61a(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h6e2e53945c4f26b2(&var_830, 
        "paddingheaderfieldformatdelimite…");
    clap_builder::builder::arg::Arg::long::hfeb8ebcd71024214(&var_ab0, &var_830, 
        "paddingheaderfieldformatdelimite…");
    clap_builder::builder::arg::Arg::help::h288b8f3846a27dc5(&var_830, &var_ab0, 
        "pad the output to N characters; …", 0xc7);
    clap_builder::builder::arg::Arg::value_name::h0438544fd33361a2(&var_ab0, &var_830, 
        "Nauto-scale output numbers to UN…");
    clap_builder::builder::command::Command::arg::hec16206f3ca3d61a(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::h6e2e53945c4f26b2(&var_568, 
        "headerfieldformatdelimiterrounds…");
    clap_builder::builder::arg::Arg::long::hfeb8ebcd71024214(&var_ab0, &var_568, 
        "headerfieldformatdelimiterrounds…");
    clap_builder::builder::arg::Arg::help::h288b8f3846a27dc5(&var_568, &var_ab0, 
        "print (without converting) the f…", 0x55);
    clap_builder::builder::arg::Arg::num_args::h6ad762ef558a42d9(&var_ab0, &var_568);
    clap_builder::builder::arg::Arg::value_name::h0438544fd33361a2(&var_568, &var_ab0, 
        "Nauto-scale output numbers to UN…");
    clap_builder::builder::arg::Arg::default_missing_value::hf7cff759fc6b1d65(&var_ab0, &var_568);
    memcpy(&var_2a0, &var_ab0, 0x278);
    let var_28_1: i32 = 0x400 | var_838;
    let var_24_1: i32 = var_834;
    clap_builder::builder::command::Command::arg::hec16206f3ca3d61a(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h6e2e53945c4f26b2(&var_830, 
        "roundsuffixinvalidzero-terminate…");
    clap_builder::builder::arg::Arg::long::hfeb8ebcd71024214(&var_ab0, &var_830, 
        "roundsuffixinvalidzero-terminate…");
    clap_builder::builder::arg::Arg::help::h288b8f3846a27dc5(&var_830, &var_ab0, 
        "use METHOD for rounding when sca…", 0x24);
    clap_builder::builder::arg::Arg::value_name::h0438544fd33361a2(&var_ab0, &var_830, 
        "METHODprint SUFFIX after each fo…");
    clap_builder::builder::arg::Arg::default_value::hb3311da4cde74683(&var_830, &var_ab0, 
        "from-zerotowards-zeronearestinte…");
    var_ab0 = "upfrom-zerotowards-zeronearestin…";
    let var_aa8: i64 = 2;
    let var_aa0: *const i8 = "downhelpNoneshim\x1b[0mnameCyan …";
    let var_a98: i64 = 4;
    let var_a90: *mut c_void = "from-zerotowards-zeronearestinte…";
    let var_a88: i64 = 9;
    let var_a80: *mut c_void = "towards-zeronearestinternal erro…";
    let var_a78: i64 = 0xc;
    let var_a70: *mut c_void = "nearestinternal error: entered u…";
    let var_a68: i64 = 7;
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hc35a50c645406067(&var_2a0, &var_ab0);
    clap_builder::builder::arg::Arg::value_parser::hb3bb9f292253c5f8(&var_ab0, &var_830, &var_2a0);
    clap_builder::builder::command::Command::arg::hec16206f3ca3d61a(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::h6e2e53945c4f26b2(&var_568, 
        "suffixinvalidzero-terminatedinva…");
    clap_builder::builder::arg::Arg::long::hfeb8ebcd71024214(&var_ab0, &var_568, 
        "suffixinvalidzero-terminatedinva…");
    clap_builder::builder::arg::Arg::help::h288b8f3846a27dc5(&var_568, &var_ab0, 
        "print SUFFIX after each formatte…", 0x59);
    clap_builder::builder::arg::Arg::value_name::h0438544fd33361a2(&var_ab0, &var_568, 
        "SUFFIXset the failure mode for i…");
    clap_builder::builder::command::Command::arg::hec16206f3ca3d61a(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::h6e2e53945c4f26b2(&var_830, 
        "invalidzero-terminatedinvalid pa…");
    clap_builder::builder::arg::Arg::long::hfeb8ebcd71024214(&var_ab0, &var_830, 
        "invalidzero-terminatedinvalid pa…");
    clap_builder::builder::arg::Arg::help::h288b8f3846a27dc5(&var_830, &var_ab0, 
        "set the failure mode for invalid…", 0x26);
    clap_builder::builder::arg::Arg::default_value::hb3311da4cde74683(&var_ab0, &var_830, 
        "abortignoreUnknown invalid mode:…");
    var_2a0 = "abortignoreUnknown invalid mode:…";
    let var_298: i64 = 5;
    let var_290: *mut c_void = "failkeysu128for<\x1b[1mKindboolm…";
    let var_288: i64 = 4;
    let var_280: *const i8 = "warnZero\x1b[7mautoBool";
    let var_278: i64 = 4;
    let var_270: *const i8 = "ignoreUnknown invalid mode: YZEP…";
    let var_268: i64 = 6;
    clap_builder::builder::arg::Arg::value_parser::h8ebfb6cb29cb1cdf(&var_830, &var_ab0, &var_2a0);
    clap_builder::builder::arg::Arg::value_name::h0438544fd33361a2(&var_ab0, &var_830, 
        "INVALIDline delimiter is NUL, no…");
    clap_builder::builder::command::Command::arg::hec16206f3ca3d61a(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::h6e2e53945c4f26b2(&var_568, 
        "zero-terminatedinvalid padding v…");
    clap_builder::builder::arg::Arg::long::hfeb8ebcd71024214(&var_ab0, &var_568, 
        "zero-terminatedinvalid padding v…");
    clap_builder::builder::arg::Arg::short::hb07776535c4064a9(&var_568, &var_ab0, 0x7a);
    clap_builder::builder::arg::Arg::help::h288b8f3846a27dc5(&var_ab0, &var_568, 
        "line delimiter is NUL, not newli…", 0x22);
    clap_builder::builder::arg::Arg::action::h5e426cf5bd95badf(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::hec16206f3ca3d61a(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h6e2e53945c4f26b2(&var_830, 
        "NUMBERIoErrorIllegalArgumentForm…");
    memcpy(&var_ab0, &var_830, 0x278);
    let var_838_1: i32 = var_838 | 0x20 | 4;
    let var_834_1: i32 = var_834;
    clap_builder::builder::arg::Arg::action::h5e426cf5bd95badf(&var_830, &var_ab0, 1);
    clap_builder::builder::command::Command::arg::hec16206f3ca3d61a(arg1, &var_568, &var_830);
    arg1
}
