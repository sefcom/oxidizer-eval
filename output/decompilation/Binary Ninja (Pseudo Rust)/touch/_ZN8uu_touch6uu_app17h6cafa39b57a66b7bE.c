
  fn uu_touch::uu_app::h6cafa39b57a66b7b(arg1: i64) -> i64

{
    let mut var_540: ();
    clap_builder::builder::command::Command::new::h8f6f053073336047(&var_540, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_ab8: i64;
    clap_builder::builder::command::Command::version::h249a8addfe9218b9(&var_ab8, &var_540, 
        "0.0.28Update the access and modi…");
    clap_builder::builder::command::Command::about::hcd0c64ae1fb3bf44(&var_540, &var_ab8, 
        "Update the access and modificati…", 0x4c);
    let mut var_798: i128;
    uucore::format_usage::h76fcb2d15fbabc58(&var_798, "{} [OPTION]... [USER]Print help …", 0x15);
    clap_builder::builder::command::Command::override_usage::h4f72e345e4c2d551(&var_ab8, &var_540, 
        &var_798);
    memcpy(&var_540, &var_ab8, 0x2bc);
    let var_7fc: i64;
    let var_284: i64 = 0x4008000040080 | var_7fc;
    let var_7f4: i32;
    let var_27c: i32 = var_7f4;
    clap_builder::builder::arg::Arg::new::h8a6f67a0846ec11e(&var_ab8, "helpt");
    clap_builder::builder::arg::Arg::long::h1fa6b659a5adc704(&var_798, &var_ab8, "helpt");
    clap_builder::builder::arg::Arg::help::he46e0f1463526103(&var_ab8, &var_798, 
        "Print help information.change on…", 0x17);
    clap_builder::builder::arg::Arg::action::h85c65443e8a0877f(&var_798, &var_ab8, 5);
    clap_builder::builder::command::Command::arg::h44214e8458888adc(&var_ab8, &var_540, &var_798);
    clap_builder::builder::arg::Arg::new::h8a6f67a0846ec11e(&var_540, 
        "accessmodificationno-createno-de…");
    clap_builder::builder::arg::Arg::short::h4ab824318e650028(&var_798, &var_540, 0x61);
    clap_builder::builder::arg::Arg::help::he46e0f1463526103(&var_540, &var_798, 
        "change only the access timeuse […", 0x1b);
    clap_builder::builder::arg::Arg::action::h85c65443e8a0877f(&var_798, &var_540, 2);
    clap_builder::builder::command::Command::arg::h44214e8458888adc(&var_540, &var_ab8, &var_798);
    clap_builder::builder::arg::Arg::new::h8a6f67a0846ec11e(&var_ab8, "timestamp");
    clap_builder::builder::arg::Arg::short::h4ab824318e650028(&var_798, &var_ab8, 0x74);
    clap_builder::builder::arg::Arg::help::he46e0f1463526103(&var_ab8, &var_798, 
        "use [[CC]YY]MMDDhhmm[.ss] instea…", 0x35);
    clap_builder::builder::arg::Arg::value_name::h8a691a2761ad8028(&var_798, &var_ab8, 
        "STAMPparse argument and use it i…");
    clap_builder::builder::command::Command::arg::h44214e8458888adc(&var_ab8, &var_540, &var_798);
    clap_builder::builder::arg::Arg::new::h8a6f67a0846ec11e(&var_540, "datethur]");
    clap_builder::builder::arg::Arg::short::h4ab824318e650028(&var_798, &var_540, 0x64);
    clap_builder::builder::arg::Arg::long::h1fa6b659a5adc704(&var_540, &var_798, "datethur]");
    memcpy(&var_798, &var_540, 0x248);
    let var_2f8: i32;
    let var_550: i32 = var_2f8 | 0x20;
    let var_2f4: i32;
    let var_54c: i32 = var_2f4;
    clap_builder::builder::arg::Arg::help::he46e0f1463526103(&var_540, &var_798, 
        "parse argument and use it instea…", 0x31);
    clap_builder::builder::arg::Arg::value_name::h8a691a2761ad8028(&var_798, &var_540, 
        "STRINGchange only the modificati…");
    let mut var_278: *const i8;
    clap_builder::builder::arg::Arg::conflicts_with::hdbb9d93b1671065a(&var_278, &var_798, 
        "timestamp");
    clap_builder::builder::command::Command::arg::h44214e8458888adc(&var_540, &var_ab8, &var_278);
    clap_builder::builder::arg::Arg::new::h8a6f67a0846ec11e(&var_ab8, 
        "modificationno-createno-derefere…");
    clap_builder::builder::arg::Arg::short::h4ab824318e650028(&var_798, &var_ab8, 0x6d);
    clap_builder::builder::arg::Arg::help::he46e0f1463526103(&var_ab8, &var_798, 
        "change only the modification tim…", 0x21);
    clap_builder::builder::arg::Arg::action::h85c65443e8a0877f(&var_798, &var_ab8, 2);
    clap_builder::builder::command::Command::arg::h44214e8458888adc(&var_ab8, &var_540, &var_798);
    clap_builder::builder::arg::Arg::new::h8a6f67a0846ec11e(&var_540, 
        "no-createno-dereferencereference…");
    clap_builder::builder::arg::Arg::short::h4ab824318e650028(&var_798, &var_540, 0x63);
    clap_builder::builder::arg::Arg::long::h1fa6b659a5adc704(&var_540, &var_798, 
        "no-createno-dereferencereference…");
    clap_builder::builder::arg::Arg::help::he46e0f1463526103(&var_798, &var_540, 
        "do not create any filesaffect ea…", 0x17);
    clap_builder::builder::arg::Arg::action::h85c65443e8a0877f(&var_278, &var_798, 2);
    clap_builder::builder::command::Command::arg::h44214e8458888adc(&var_540, &var_ab8, &var_278);
    clap_builder::builder::arg::Arg::new::h8a6f67a0846ec11e(&var_ab8, 
        "no-dereferencereferencetimestamp");
    clap_builder::builder::arg::Arg::short::h4ab824318e650028(&var_798, &var_ab8, 0x68);
    clap_builder::builder::arg::Arg::long::h1fa6b659a5adc704(&var_ab8, &var_798, 
        "no-dereferencereferencetimestamp");
    clap_builder::builder::arg::Arg::help::he46e0f1463526103(&var_798, &var_ab8, 
        "affect each symbolic link instea…", 0x77);
    clap_builder::builder::arg::Arg::action::h85c65443e8a0877f(&var_278, &var_798, 2);
    clap_builder::builder::command::Command::arg::h44214e8458888adc(&var_ab8, &var_540, &var_278);
    clap_builder::builder::arg::Arg::new::h8a6f67a0846ec11e(&var_540, "referencetimestamp");
    clap_builder::builder::arg::Arg::short::h4ab824318e650028(&var_798, &var_540, 0x72);
    clap_builder::builder::arg::Arg::long::h1fa6b659a5adc704(&var_540, &var_798, 
        "referencetimestamp");
    clap_builder::builder::arg::Arg::help::he46e0f1463526103(&var_798, &var_540, 
        "use this file's times instead of…", 0x31);
    clap_builder::builder::arg::Arg::value_name::h8a691a2761ad8028(&var_540, &var_798, "FILEWO");
    let mut var_ad0: *mut i8 = 2;
    var_278 = var_ad0;
    let var_ac8: i64;
    let var_270: i64 = var_ac8;
    clap_builder::builder::arg::Arg::value_parser::hb52e9aea5bfdb3a1(&var_798, &var_540, &var_278);
    clap_builder::builder::arg::Arg::value_hint::h404e11100d0a1c16(&var_540, &var_798, 2);
    clap_builder::builder::arg::Arg::conflicts_with::hdbb9d93b1671065a(&var_798, &var_540, 
        "timestamp");
    clap_builder::builder::command::Command::arg::h44214e8458888adc(&var_540, &var_ab8, &var_798);
    clap_builder::builder::arg::Arg::new::h8a6f67a0846ec11e(&var_ab8, "timeHashj");
    clap_builder::builder::arg::Arg::long::h1fa6b659a5adc704(&var_798, &var_ab8, "timeHashj");
    clap_builder::builder::arg::Arg::help::he46e0f1463526103(&var_ab8, &var_798, 
        "change only the specified time: …", 0x7a);
    clap_builder::builder::arg::Arg::value_name::h8a691a2761ad8028(&var_798, &var_ab8, "WO");
    let var_a88: *const i8 = "atimemtime0.0.28Update the acces…";
    let var_a80: i64 = 5;
    let var_aa0: i64 = -0x8000000000000000;
    let var_7a8: i128;
    let var_a98: i128 = var_7a8;
    var_ab8 = 0;
    let var_ab0: i64 = 8;
    let var_aa8: i64 = 0;
    let var_a78: i8 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::he1a3bd2271689855(&var_278, 
        &var_ab8, "accessusemodify-setting times of…");
    let mut var_7f0: i128;
    clap_builder::builder::possible_value::PossibleValue::alias::he1a3bd2271689855(&var_7f0, 
        &var_278, "usemodify-setting times of : No …");
    let mut var_a88_1: *const i8 = "mtime0.0.28Update the access and…";
    let var_a80_1: i64 = 5;
    let var_aa0_1: i64 = -0x8000000000000000;
    let var_a98_1: i128 = var_7a8;
    var_ab8 = 0;
    let var_ab0_1: i64 = 8;
    let mut var_aa8_1: i64 = 0;
    let mut var_a78_1: i8 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::he1a3bd2271689855(&var_278, 
        &var_ab8, "modify-setting times of : No suc…");
    var_ab8 = var_7f0;
    let var_7e0: i128;
    var_aa8_1 = var_7e0;
    let var_7d0: i128;
    let mut var_a98_2: i128 = var_7d0;
    let var_7c0: i128;
    var_a88_1 = var_7c0;
    let var_7b0: i64;
    var_a78_1 = var_7b0;
    let mut var_a70: i128 = var_278;
    let var_ac0: i64;
    let mut var_a60: i64 = var_ac0;
    let mut var_258: i128;
    let var_a50: i128 = var_258;
    let var_248: i128;
    let var_a40: i128 = var_248;
    let var_238: i64;
    let var_a30: i64 = var_238;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hc2cee83c12a38d49(&var_7f0, &var_ab8);
    clap_builder::builder::arg::Arg::value_parser::he866d5515236ff25(&var_278, &var_798, &var_7f0);
    clap_builder::builder::command::Command::arg::h44214e8458888adc(&var_ab8, &var_540, &var_278);
    clap_builder::builder::arg::Arg::new::h8a6f67a0846ec11e(&var_540, 
        "filesatimemtime0.0.28Update the …");
    clap_builder::builder::arg::Arg::action::h85c65443e8a0877f(&var_798, &var_540, 1);
    clap_builder::builder::arg::Arg::num_args::h203cb77198aa86dd(&var_540, &var_798);
    clap_builder::builder::arg::Arg::value_parser::hb52e9aea5bfdb3a1(&var_798, &var_540, &var_ad0);
    clap_builder::builder::arg::Arg::value_hint::h404e11100d0a1c16(&var_278, &var_798, 2);
    clap_builder::builder::command::Command::arg::h44214e8458888adc(&var_540, &var_ab8, &var_278);
    var_a70 = 1;
    *var_a70[8] = 0;
    var_ab8 = 0;
    let var_ab0_2: i64 = 8;
    var_a60 = 0;
    var_aa8_1 = {0};
    var_a98_2 = 8;
    var_a98_2 = {0};
    let var_a80_2: i64 = 8;
    var_a78_1 = 0;
    clap_builder::builder::arg_group::ArgGroup::id::hcace4fe8ee13b965(&var_798, &var_ab8, 
        "sourcesaccessmodificationno-crea…");
    var_278 = "timestamp";
    let var_270_1: i64 = 9;
    let var_268_1: *const i8 = "datethur]";
    let var_260: i64 = 4;
    var_258 = "referencetimestamp";
    *var_258[8] = 9;
    clap_builder::builder::arg_group::ArgGroup::args::hb7318d04a0d50504(&var_ab8, &var_798, 
        &var_278);
    *var_a60[1] = 1;
    var_798 = var_ab8;
    let var_788: i128 = var_aa8_1;
    let var_778: i128 = var_a98_2;
    let var_768: i128 = var_a88_1;
    let var_758: i128 = var_a78_1;
    let var_748: i64 = *var_a70[8];
    let var_740: i8 = var_a60;
    let var_73f: i8 = *var_a60[1];
    let var_73e: i32 = *var_a60[2];
    let var_73a: i16 = *var_a60[6];
    clap_builder::builder::command::Command::group::hdb1f30e6b6af6197(arg1, &var_540, &var_798);
    arg1
}
