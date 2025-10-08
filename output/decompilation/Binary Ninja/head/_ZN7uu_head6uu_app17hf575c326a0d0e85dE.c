
  int64_t uu_head::uu_app::hf575c326a0d0e85d(int64_t arg1)

{
    void var_5b8;
    clap_builder::builder::command::Command::new::h1047f487047397bd(&var_5b8, 
        uucore::util_name::h074417a1e6395129());
    void var_2f0;
    clap_builder::builder::command::Command::version::h0fd0861a6e08fac5(&var_2f0, &var_5b8);
    clap_builder::builder::command::Command::about::h6924745dfae50584(&var_5b8, &var_2f0);
    void var_ab8;
    uucore::format_usage::he053403a896311ed(&var_ab8, "{} [FLAG]... [FILE]...BYTESbytes…", 0x16);
    clap_builder::builder::command::Command::override_usage::habfb21397b00b097(&var_2f0, &var_5b8, 
        &var_ab8);
    memcpy(&var_5b8, &var_2f0, 0x2bc);
    int64_t var_34;
    int64_t var_2fc = 0x8000000080 | var_34;
    int32_t var_2c;
    int32_t var_2f4 = var_2c;
    clap_builder::builder::arg::Arg::new::h48624643ca4d9bce(&var_2f0, 
        "BYTESbytes[-]NUMprint the first …");
    clap_builder::builder::arg::Arg::short::hda0aeb282315bcb6(&var_ab8, &var_2f0, 0x63);
    clap_builder::builder::arg::Arg::long::h39b7b2513578f6af(&var_2f0, &var_ab8, 
        "bytes[-]NUMprint the first NUM b…");
    clap_builder::builder::arg::Arg::value_name::hc8f8d32efc38a834(&var_ab8, &var_2f0);
    clap_builder::builder::arg::Arg::help::hcbf5a373f041def8(&var_2f0, &var_ab8, 
        "print the first NUM bytes of eac…", 0x6b);
    void* const var_838 = "BYTESbytes[-]NUMprint the first …";
    int64_t var_830 = 5;
    char const* const var_828 = "LINESlinesprint the first NUM li…";
    int64_t var_820 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all::hc7ea4b778ce83afe(&var_ab8, &var_2f0, 
        &var_838);
    memcpy(&var_838, &var_ab8, 0x278);
    int32_t var_840;
    int32_t var_5c0 = var_840 | 0x20;
    int32_t var_83c;
    int32_t var_5bc = var_83c;
    clap_builder::builder::command::Command::arg::h3fb2fb45cd0382a8(&var_2f0, &var_5b8, &var_838);
    clap_builder::builder::arg::Arg::new::h48624643ca4d9bce(&var_5b8, 
        "LINESlinesprint the first NUM li…");
    clap_builder::builder::arg::Arg::short::hda0aeb282315bcb6(&var_ab8, &var_5b8, 0x6e);
    clap_builder::builder::arg::Arg::long::h39b7b2513578f6af(&var_5b8, &var_ab8, 
        "linesprint the first NUM lines i…");
    clap_builder::builder::arg::Arg::value_name::hc8f8d32efc38a834(&var_ab8, &var_5b8);
    clap_builder::builder::arg::Arg::help::hcbf5a373f041def8(&var_5b8, &var_ab8, 
        "print the first NUM lines instea…", 0x76);
    var_838 = "LINESlinesprint the first NUM li…";
    int64_t var_830_1 = 5;
    void* const var_828_1 = "BYTESbytes[-]NUMprint the first …";
    int64_t var_820_1 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all::hc7ea4b778ce83afe(&var_ab8, &var_5b8, 
        &var_838);
    memcpy(&var_838, &var_ab8, 0x278);
    int32_t var_5c0_1 = var_840 | 0x20;
    int32_t var_5bc_1 = var_83c;
    clap_builder::builder::command::Command::arg::h3fb2fb45cd0382a8(&var_5b8, &var_2f0, &var_838);
    clap_builder::builder::arg::Arg::new::h48624643ca4d9bce(&var_2f0, 
        "QUIETquietsilentnever print head…");
    clap_builder::builder::arg::Arg::short::hda0aeb282315bcb6(&var_ab8, &var_2f0, 0x71);
    clap_builder::builder::arg::Arg::long::h39b7b2513578f6af(&var_2f0, &var_ab8, 
        "quietsilentnever print headers g…");
    clap_builder::builder::arg::Arg::visible_alias::h65b8a385453d17dd(&var_ab8, &var_2f0);
    clap_builder::builder::arg::Arg::help::hcbf5a373f041def8(&var_2f0, &var_ab8, 
        "never print headers giving file …", 0x25);
    var_838 = "VERBOSEverbosealways print heade…";
    int64_t var_830_2 = 7;
    char const* const var_828_2 = "QUIETquietsilentnever print head…";
    int64_t var_820_2 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all::hc7ea4b778ce83afe(&var_ab8, &var_2f0, 
        &var_838);
    clap_builder::builder::arg::Arg::action::h4976dbc225bc84e4(&var_838, &var_ab8, 2);
    clap_builder::builder::command::Command::arg::h3fb2fb45cd0382a8(&var_2f0, &var_5b8, &var_838);
    clap_builder::builder::arg::Arg::new::h48624643ca4d9bce(&var_5b8, 
        "VERBOSEverbosealways print heade…");
    clap_builder::builder::arg::Arg::short::hda0aeb282315bcb6(&var_ab8, &var_5b8, 0x76);
    clap_builder::builder::arg::Arg::long::h39b7b2513578f6af(&var_5b8, &var_ab8, 
        "verbosealways print headers givi…");
    clap_builder::builder::arg::Arg::help::hcbf5a373f041def8(&var_ab8, &var_5b8, 
        "always print headers giving file…", 0x26);
    var_838 = "QUIETquietsilentnever print head…";
    int64_t var_830_3 = 5;
    char const* const var_828_3 = "VERBOSEverbosealways print heade…";
    int64_t var_820_3 = 7;
    clap_builder::builder::arg::Arg::overrides_with_all::hc7ea4b778ce83afe(&var_5b8, &var_ab8, 
        &var_838);
    clap_builder::builder::arg::Arg::action::h4976dbc225bc84e4(&var_ab8, &var_5b8, 2);
    clap_builder::builder::command::Command::arg::h3fb2fb45cd0382a8(&var_5b8, &var_2f0, &var_ab8);
    clap_builder::builder::arg::Arg::new::h48624643ca4d9bce(&var_2f0, 
        "-PRESUME-INPUT-PIPEpresume-input…");
    clap_builder::builder::arg::Arg::long::h39b7b2513578f6af(&var_ab8, &var_2f0, 
        "presume-input-pipe-presume-input…");
    clap_builder::builder::arg::Arg::alias::h655a8802d96abcd9(&var_2f0, &var_ab8);
    memcpy(&var_ab8, &var_2f0, 0x278);
    int32_t var_78;
    int32_t var_840_1 = var_78 | 4;
    int32_t var_74;
    int32_t var_83c_1 = var_74;
    clap_builder::builder::arg::Arg::action::h4976dbc225bc84e4(&var_838, &var_ab8, 2);
    clap_builder::builder::command::Command::arg::h3fb2fb45cd0382a8(&var_2f0, &var_5b8, &var_838);
    clap_builder::builder::arg::Arg::new::h48624643ca4d9bce(&var_5b8, 
        "ZEROkeysu128for<\x1b[1mKindboolm…");
    clap_builder::builder::arg::Arg::short::hda0aeb282315bcb6(&var_ab8, &var_5b8, 0x7a);
    clap_builder::builder::arg::Arg::long::h39b7b2513578f6af(&var_5b8, &var_ab8, 
        "zero-terminatedline delimiter is…");
    clap_builder::builder::arg::Arg::help::hcbf5a373f041def8(&var_ab8, &var_5b8, 
        "line delimiter is NUL, not newli…", 0x22);
    clap_builder::builder::arg::Arg::overrides_with::hd5c60e758e699a8d(&var_5b8, &var_ab8);
    clap_builder::builder::arg::Arg::action::h4976dbc225bc84e4(&var_ab8, &var_5b8, 2);
    clap_builder::builder::command::Command::arg::h3fb2fb45cd0382a8(&var_5b8, &var_2f0, &var_ab8);
    clap_builder::builder::arg::Arg::new::h48624643ca4d9bce(&var_2f0, "FILEch");
    clap_builder::builder::arg::Arg::action::h4976dbc225bc84e4(&var_ab8, &var_2f0, 1);
    clap_builder::builder::arg::Arg::value_hint::h953f21bc881e7e35(&var_2f0, &var_ab8);
    clap_builder::builder::command::Command::arg::h3fb2fb45cd0382a8(arg1, &var_5b8, &var_2f0);
    return arg1;
}
