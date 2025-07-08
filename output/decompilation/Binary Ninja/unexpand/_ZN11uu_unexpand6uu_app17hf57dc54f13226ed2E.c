
  int64_t uu_unexpand::uu_app::hf57dc54f13226ed2(int64_t arg1)

{
    void var_530;
    clap_builder::builder::command::Command::new::h28dd3cfb9d9488ae(&var_530, 
        uucore::util_name::h60d842bf27b05e82());
    void var_a48;
    clap_builder::builder::command::Command::version::h355bf77e2495619c(&var_a48, &var_530, 
        "0.0.28{} [OPTION]... [FILE]...Co…");
    void var_780;
    uucore::format_usage::h76fcb2d15fbabc58(&var_780, "{} [OPTION]... [FILE]...Convert …", 0x18);
    clap_builder::builder::command::Command::override_usage::hf2f0e350a24f1370(&var_530, &var_a48, 
        &var_780);
    clap_builder::builder::command::Command::about::h00cbd4c2b3a59d68(&var_a48, &var_530, 
        "Convert blanks in each `FILE` to…", 0x7e);
    memcpy(&var_530, &var_a48, 0x2bc);
    int64_t var_78c;
    int64_t var_274 = 0x8000000080 | var_78c;
    int32_t var_784;
    int32_t var_26c = var_784;
    clap_builder::builder::arg::Arg::new::h15ce46045f956ddb(&var_a48, 
        "filei128 as dyn ERANGEEDEADLKENA…");
    memcpy(&var_780, &var_a48, 0x248);
    int32_t var_800;
    int32_t var_538 = var_800 | 4;
    int32_t var_7fc;
    int32_t var_534 = var_7fc;
    clap_builder::builder::arg::Arg::action::hf2a3dd329a520a97(&var_a48, &var_780, 1);
    clap_builder::builder::arg::Arg::value_hint::h8dcf2e063716e891(&var_780, &var_a48, 3);
    clap_builder::builder::command::Command::arg::h3ea0b298cf10b6bd(&var_a48, &var_530, &var_780);
    clap_builder::builder::arg::Arg::new::h15ce46045f956ddb(&var_530, 
        "allfirst-onlyno-utf8--first-only…");
    clap_builder::builder::arg::Arg::short::h1813a64849a712c9(&var_780, &var_530, 0x61);
    clap_builder::builder::arg::Arg::long::h934749995bbd4579(&var_530, &var_780, 
        "allfirst-onlyno-utf8--first-only…");
    clap_builder::builder::arg::Arg::help::hd6381f05586d0790(&var_780, &var_530, 
        "convert all blanks, instead of j…", 0x32);
    void var_268;
    clap_builder::builder::arg::Arg::action::hf2a3dd329a520a97(&var_268, &var_780, 2);
    clap_builder::builder::command::Command::arg::h3ea0b298cf10b6bd(&var_530, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::h15ce46045f956ddb(&var_a48, 
        "first-onlyno-utf8--first-onlysrc…");
    clap_builder::builder::arg::Arg::long::h934749995bbd4579(&var_780, &var_a48, 
        "first-onlyno-utf8--first-onlysrc…");
    clap_builder::builder::arg::Arg::help::hd6381f05586d0790(&var_a48, &var_780, 
        "convert only leading sequences o…", 0x37);
    clap_builder::builder::arg::Arg::action::hf2a3dd329a520a97(&var_780, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h3ea0b298cf10b6bd(&var_a48, &var_530, &var_780);
    clap_builder::builder::arg::Arg::new::h15ce46045f956ddb(&var_530, 
        "tabsAutoBOLDBlue\x1b[4mSomedumb\x1b…");
    clap_builder::builder::arg::Arg::short::h1813a64849a712c9(&var_780, &var_530, 0x74);
    clap_builder::builder::arg::Arg::long::h934749995bbd4579(&var_530, &var_780, 
        "tabsAutoBOLDBlue\x1b[4mSomedumb\x1b…");
    clap_builder::builder::arg::Arg::help::hd6381f05586d0790(&var_780, &var_530, 
        "use comma separated LIST of tab …", 0x63);
    clap_builder::builder::arg::Arg::action::hf2a3dd329a520a97(&var_530, &var_780, 1);
    clap_builder::builder::arg::Arg::value_name::h980cba47b642b4d6(&var_780, &var_530);
    clap_builder::builder::command::Command::arg::h3ea0b298cf10b6bd(&var_530, &var_a48, &var_780);
    clap_builder::builder::arg::Arg::new::h15ce46045f956ddb(&var_a48, 
        "no-utf8--first-onlysrc/uu/unexpa…");
    clap_builder::builder::arg::Arg::short::h1813a64849a712c9(&var_780, &var_a48, 0x55);
    clap_builder::builder::arg::Arg::long::h934749995bbd4579(&var_a48, &var_780, 
        "no-utf8--first-onlysrc/uu/unexpa…");
    clap_builder::builder::arg::Arg::help::hd6381f05586d0790(&var_780, &var_a48, 
        "interpret input file as 8-bit AS…", 0x35);
    clap_builder::builder::arg::Arg::action::hf2a3dd329a520a97(&var_a48, &var_780, 2);
    clap_builder::builder::command::Command::arg::h3ea0b298cf10b6bd(arg1, &var_530, &var_a48);
    return arg1;
}
