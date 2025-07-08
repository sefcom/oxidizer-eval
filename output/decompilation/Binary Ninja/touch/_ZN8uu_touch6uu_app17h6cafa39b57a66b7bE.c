
  int64_t uu_touch::uu_app::h6cafa39b57a66b7b(int64_t arg1)

{
    void var_540;
    clap_builder::builder::command::Command::new::h8f6f053073336047(&var_540, 
        uucore::util_name::h60d842bf27b05e82());
    int64_t var_ab8;
    clap_builder::builder::command::Command::version::h249a8addfe9218b9(&var_ab8, &var_540, 
        "0.0.28Update the access and modi…");
    clap_builder::builder::command::Command::about::hcd0c64ae1fb3bf44(&var_540, &var_ab8, 
        "Update the access and modificati…", 0x4c);
    int128_t var_798;
    uucore::format_usage::h76fcb2d15fbabc58(&var_798, "{} [OPTION]... [USER]Print help …", 0x15);
    clap_builder::builder::command::Command::override_usage::h4f72e345e4c2d551(&var_ab8, &var_540, 
        &var_798);
    memcpy(&var_540, &var_ab8, 0x2bc);
    int64_t var_7fc;
    int64_t var_284 = 0x4008000040080 | var_7fc;
    int32_t var_7f4;
    int32_t var_27c = var_7f4;
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
    int32_t var_2f8;
    int32_t var_550 = var_2f8 | 0x20;
    int32_t var_2f4;
    int32_t var_54c = var_2f4;
    clap_builder::builder::arg::Arg::help::he46e0f1463526103(&var_540, &var_798, 
        "parse argument and use it instea…", 0x31);
    clap_builder::builder::arg::Arg::value_name::h8a691a2761ad8028(&var_798, &var_540, 
        "STRINGchange only the modificati…");
    char const* const var_278;
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
    char* var_ad0 = 2;
    var_278 = var_ad0;
    int64_t var_ac8;
    int64_t var_270 = var_ac8;
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
    char const* const var_a88 = "atimemtime0.0.28Update the acces…";
    int64_t var_a80 = 5;
    int64_t var_aa0 = -0x8000000000000000;
    int128_t var_7a8;
    int128_t var_a98 = var_7a8;
    var_ab8 = 0;
    int64_t var_ab0 = 8;
    int64_t var_aa8 = 0;
    char var_a78 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::he1a3bd2271689855(&var_278, 
        &var_ab8, "accessusemodify-setting times of…");
    int128_t var_7f0;
    clap_builder::builder::possible_value::PossibleValue::alias::he1a3bd2271689855(&var_7f0, 
        &var_278, "usemodify-setting times of : No …");
    char const* const var_a88_1 = "mtime0.0.28Update the access and…";
    int64_t var_a80_1 = 5;
    int64_t var_aa0_1 = -0x8000000000000000;
    int128_t var_a98_1 = var_7a8;
    var_ab8 = 0;
    int64_t var_ab0_1 = 8;
    int64_t var_aa8_1 = 0;
    char var_a78_1 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::he1a3bd2271689855(&var_278, 
        &var_ab8, "modify-setting times of : No suc…");
    var_ab8 = var_7f0;
    int128_t var_7e0;
    var_aa8_1 = var_7e0;
    int128_t var_7d0;
    int128_t var_a98_2 = var_7d0;
    int128_t var_7c0;
    var_a88_1 = var_7c0;
    int64_t var_7b0;
    var_a78_1 = var_7b0;
    int128_t var_a70 = var_278;
    int64_t var_ac0;
    int64_t var_a60 = var_ac0;
    int128_t var_258;
    int128_t var_a50 = var_258;
    int128_t var_248;
    int128_t var_a40 = var_248;
    int64_t var_238;
    int64_t var_a30 = var_238;
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
    int64_t var_ab0_2 = 8;
    var_a60 = 0;
    var_aa8_1 = {0};
    var_a98_2 = 8;
    var_a98_2 = {0};
    int64_t var_a80_2 = 8;
    var_a78_1 = 0;
    clap_builder::builder::arg_group::ArgGroup::id::hcace4fe8ee13b965(&var_798, &var_ab8, 
        "sourcesaccessmodificationno-crea…");
    var_278 = "timestamp";
    int64_t var_270_1 = 9;
    char const* const var_268_1 = "datethur]";
    int64_t var_260 = 4;
    var_258 = "referencetimestamp";
    *var_258[8] = 9;
    clap_builder::builder::arg_group::ArgGroup::args::hb7318d04a0d50504(&var_ab8, &var_798, 
        &var_278);
    *var_a60[1] = 1;
    var_798 = var_ab8;
    int128_t var_788 = var_aa8_1;
    int128_t var_778 = var_a98_2;
    int128_t var_768 = var_a88_1;
    int128_t var_758 = var_a78_1;
    int64_t var_748 = *var_a70[8];
    char var_740 = var_a60;
    char var_73f = *var_a60[1];
    int32_t var_73e = *var_a60[2];
    int16_t var_73a = *var_a60[6];
    clap_builder::builder::command::Command::group::hdb1f30e6b6af6197(arg1, &var_540, &var_798);
    return arg1;
}
