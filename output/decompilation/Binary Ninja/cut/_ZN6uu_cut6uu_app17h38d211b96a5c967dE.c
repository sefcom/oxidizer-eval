
  int64_t uu_cut::uu_app::h38d211b96a5c967d(int64_t arg1)

{
    void var_830;
    clap_builder::builder::command::Command::new::h98cf7591c0e51e56(&var_830, 
        uucore::util_name::h074417a1e6395129());
    void var_568;
    clap_builder::builder::command::Command::version::h4fe1ad0f1596b1fc(&var_568, &var_830);
    void var_ab0;
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} OPTION... [FILE]...Prints spe…", 0x16);
    clap_builder::builder::command::Command::override_usage::h0da63754526c3693(&var_830, &var_568, 
        &var_ab0);
    clap_builder::builder::command::Command::about::hcbc22126b07d6f0c(&var_568, &var_830);
    clap_builder::builder::command::Command::after_help::h36d6ffcbdfd1fa59(&var_830, &var_568);
    memcpy(&var_568, &var_830, 0x2bc);
    int64_t var_574;
    int64_t var_2ac = 0x8800000088 | var_574;
    int32_t var_56c;
    int32_t var_2a4 = var_56c;
    clap_builder::builder::arg::Arg::new::hc20e8c3e57337cdb(&var_830, 
        "bytesfilter byte columns from th…");
    clap_builder::builder::arg::Arg::short::h95a83c3989ede8ff(&var_ab0, &var_830, 0x62);
    clap_builder::builder::arg::Arg::long::h4dacd1adb08e31f2(&var_830, &var_ab0, 
        "bytesfilter byte columns from th…");
    clap_builder::builder::arg::Arg::help::hcd134fb7ee096f6e(&var_ab0, &var_830, 
        "filter byte columns from the inp…", 0x29);
    memcpy(&var_830, &var_ab0, 0x278);
    int32_t var_838;
    int32_t var_5b8 = var_838 | 0x20;
    int32_t var_834;
    int32_t var_5b4 = var_834;
    clap_builder::builder::arg::Arg::value_name::he8e06892cd7583b7(&var_ab0, &var_830, 
        "LISTkindAuto/");
    void var_2a0;
    clap_builder::builder::arg::Arg::action::hcde07eb213a7f2a2(&var_2a0, &var_ab0, 1);
    clap_builder::builder::command::Command::arg::hc2d3343ded138905(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hc20e8c3e57337cdb(&var_568, 
        "charactersalias for character mo…");
    clap_builder::builder::arg::Arg::short::h95a83c3989ede8ff(&var_ab0, &var_568, 0x63);
    clap_builder::builder::arg::Arg::long::h4dacd1adb08e31f2(&var_568, &var_ab0, 
        "charactersalias for character mo…");
    clap_builder::builder::arg::Arg::help::hcd134fb7ee096f6e(&var_ab0, &var_568, 
        "alias for character modespecify …", 0x18);
    memcpy(&var_568, &var_ab0, 0x278);
    clap_builder::builder::arg::Arg::value_name::he8e06892cd7583b7(&var_ab0, &var_568, 
        "LISTkindAuto/");
    clap_builder::builder::arg::Arg::action::hcde07eb213a7f2a2(&var_2a0, &var_ab0, 1);
    clap_builder::builder::command::Command::arg::hc2d3343ded138905(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::hc20e8c3e57337cdb(&var_830, "delimiter''");
    clap_builder::builder::arg::Arg::short::h95a83c3989ede8ff(&var_ab0, &var_830, 0x64);
    clap_builder::builder::arg::Arg::long::h4dacd1adb08e31f2(&var_830, &var_ab0, "delimiter''");
    int64_t var_ac8 = 2;
    clap_builder::builder::arg::Arg::value_parser::h4b2baea4c9e6aa93(&var_ab0, &var_830, &var_ac8);
    clap_builder::builder::arg::Arg::help::hcd134fb7ee096f6e(&var_830, &var_ab0, 
        "specify the delimiter character …", 0x5b);
    clap_builder::builder::arg::Arg::value_name::he8e06892cd7583b7(&var_ab0, &var_830, 
        "DELIMUse any number of whitespac…");
    clap_builder::builder::command::Command::arg::hc2d3343ded138905(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::hc20e8c3e57337cdb(&var_568, 
        "whitespace-delimiteddelimiter''");
    clap_builder::builder::arg::Arg::short::h95a83c3989ede8ff(&var_ab0, &var_568, 0x77);
    clap_builder::builder::arg::Arg::help::hcd134fb7ee096f6e(&var_568, &var_ab0, 
        "Use any number of whitespace (Sp…", 0x65);
    clap_builder::builder::arg::Arg::value_name::he8e06892cd7583b7(&var_ab0, &var_568, 
        "WHITESPACEfieldsfilter field col…");
    clap_builder::builder::arg::Arg::action::hcde07eb213a7f2a2(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::hc2d3343ded138905(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::hc20e8c3e57337cdb(&var_830, 
        "fieldsfilter field columns from …");
    clap_builder::builder::arg::Arg::short::h95a83c3989ede8ff(&var_ab0, &var_830, 0x66);
    clap_builder::builder::arg::Arg::long::h4dacd1adb08e31f2(&var_830, &var_ab0, 
        "fieldsfilter field columns from …");
    clap_builder::builder::arg::Arg::help::hcd134fb7ee096f6e(&var_ab0, &var_830, 
        "filter field columns from the in…", 0x2a);
    memcpy(&var_830, &var_ab0, 0x278);
    int32_t var_5b8_1 = var_838 | 0x20;
    int32_t var_5b4_1 = var_834;
    clap_builder::builder::arg::Arg::value_name::he8e06892cd7583b7(&var_ab0, &var_830, 
        "LISTkindAuto/");
    clap_builder::builder::arg::Arg::action::hcde07eb213a7f2a2(&var_2a0, &var_ab0, 1);
    clap_builder::builder::command::Command::arg::hc2d3343ded138905(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hc20e8c3e57337cdb(&var_568, 
        "complementinvert the filter - in…");
    clap_builder::builder::arg::Arg::long::h4dacd1adb08e31f2(&var_ab0, &var_568, 
        "complementinvert the filter - in…");
    clap_builder::builder::arg::Arg::help::hcd134fb7ee096f6e(&var_568, &var_ab0, 
        "invert the filter - instead of d…", 0x62);
    clap_builder::builder::arg::Arg::action::hcde07eb213a7f2a2(&var_ab0, &var_568, 2);
    clap_builder::builder::command::Command::arg::hc2d3343ded138905(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::hc20e8c3e57337cdb(&var_830, 
        "only-delimitedin field mode, onl…");
    clap_builder::builder::arg::Arg::short::h95a83c3989ede8ff(&var_ab0, &var_830, 0x73);
    clap_builder::builder::arg::Arg::long::h4dacd1adb08e31f2(&var_830, &var_ab0, 
        "only-delimitedin field mode, onl…");
    clap_builder::builder::arg::Arg::help::hcd134fb7ee096f6e(&var_ab0, &var_830, 
        "in field mode, only print lines …", 0x3b);
    clap_builder::builder::arg::Arg::action::hcde07eb213a7f2a2(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::hc2d3343ded138905(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hc20e8c3e57337cdb(&var_568, 
        "zero-terminatedinstead of filter…");
    clap_builder::builder::arg::Arg::short::h95a83c3989ede8ff(&var_ab0, &var_568, 0x7a);
    clap_builder::builder::arg::Arg::long::h4dacd1adb08e31f2(&var_568, &var_ab0, 
        "zero-terminatedinstead of filter…");
    clap_builder::builder::arg::Arg::help::hcd134fb7ee096f6e(&var_ab0, &var_568, 
        "instead of filtering columns bas…", 0x57);
    clap_builder::builder::arg::Arg::action::hcde07eb213a7f2a2(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::hc2d3343ded138905(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::hc20e8c3e57337cdb(&var_830, 
        "output-delimiterClapErrorWrapper…");
    clap_builder::builder::arg::Arg::long::h4dacd1adb08e31f2(&var_ab0, &var_830, 
        "output-delimiterClapErrorWrapper…");
    clap_builder::builder::arg::Arg::value_parser::h4b2baea4c9e6aa93(&var_830, &var_ab0, &var_ac8);
    clap_builder::builder::arg::Arg::help::hcd134fb7ee096f6e(&var_ab0, &var_830, 
        "in field mode, replace the delim…", 0x50);
    clap_builder::builder::arg::Arg::value_name::he8e06892cd7583b7(&var_2a0, &var_ab0, 
        "NEW_DELIMwrite error/home/34r7hm…");
    clap_builder::builder::command::Command::arg::hc2d3343ded138905(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hc20e8c3e57337cdb(&var_568, 
        "filei128 as dyn ERANGEEDEADLKENA…");
    memcpy(&var_ab0, &var_568, 0x278);
    int32_t var_838_1 = var_838 | 0x20 | 4;
    int32_t var_834_1 = var_834;
    clap_builder::builder::arg::Arg::action::hcde07eb213a7f2a2(&var_568, &var_ab0, 1);
    clap_builder::builder::arg::Arg::value_hint::h8a7b5a5cfbe5adbd(&var_ab0, &var_568);
    clap_builder::builder::command::Command::arg::hc2d3343ded138905(arg1, &var_830, &var_ab0);
    return arg1;
}
