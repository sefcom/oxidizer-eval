
  int64_t uu_seq::uu_app::h5bc20a713053c9e7(int64_t arg1)

{
    void var_780;
    clap_builder::builder::command::Command::new::h70e60addb5ac5618(&var_780, 
        uucore::util_name::h60d842bf27b05e82());
    void var_a48;
    memcpy(&var_a48, &var_780, 0x2bc);
    int64_t var_4c4;
    int64_t var_78c = 0x80000000a4 | var_4c4;
    int32_t var_4bc;
    int32_t var_784 = var_4bc;
    clap_builder::builder::command::Command::version::h39cda120b5e96539(&var_780, &var_a48, 
        "0.0.28Display numbers from FIRST…");
    clap_builder::builder::command::Command::about::hb7cd82dead60a251(&var_a48, &var_780, 
        "Display numbers from FIRST to LA…", 0x3a);
    void var_4b8;
    uucore::format_usage::h76fcb2d15fbabc58(&var_4b8, "{} [OPTION]... LAST\n{} [OPTION]…", 0x51);
    clap_builder::builder::command::Command::override_usage::hfb685ff62d43e39d(&var_780, &var_a48, 
        &var_4b8);
    clap_builder::builder::arg::Arg::new::h6fdd348e62deb03d(&var_a48, 
        "separatorSeparator character (de…");
    clap_builder::builder::arg::Arg::short::h30cb111526dd9718(&var_4b8, &var_a48, 0x73);
    clap_builder::builder::arg::Arg::long::h9872abf788435f05(&var_a48, &var_4b8, 
        "separatorSeparator character (de…");
    clap_builder::builder::arg::Arg::help::hc6b390ea58bb10af(&var_4b8, &var_a48, 
        "Separator character (defaults to…", 0x24);
    clap_builder::builder::command::Command::arg::h2b155dfcc00bacba(&var_a48, &var_780, &var_4b8);
    clap_builder::builder::arg::Arg::new::h6fdd348e62deb03d(&var_780, 
        "terminatorTerminator character (…");
    clap_builder::builder::arg::Arg::short::h30cb111526dd9718(&var_4b8, &var_780, 0x74);
    clap_builder::builder::arg::Arg::long::h9872abf788435f05(&var_780, &var_4b8, 
        "terminatorTerminator character (…");
    clap_builder::builder::arg::Arg::help::hc6b390ea58bb10af(&var_4b8, &var_780, 
        "Terminator character (defaults t…", 0x25);
    clap_builder::builder::command::Command::arg::h2b155dfcc00bacba(&var_780, &var_a48, &var_4b8);
    clap_builder::builder::arg::Arg::new::h6fdd348e62deb03d(&var_a48, 
        "equal-widthEqualize widths of al…");
    clap_builder::builder::arg::Arg::short::h30cb111526dd9718(&var_4b8, &var_a48, 0x77);
    clap_builder::builder::arg::Arg::long::h9872abf788435f05(&var_a48, &var_4b8, 
        "equal-widthEqualize widths of al…");
    clap_builder::builder::arg::Arg::help::hc6b390ea58bb10af(&var_4b8, &var_a48, 
        "Equalize widths of all numbers b…", 0x34);
    void var_268;
    clap_builder::builder::arg::Arg::action::h64d48ec922aa36c9(&var_268, &var_4b8, 2);
    clap_builder::builder::command::Command::arg::h2b155dfcc00bacba(&var_a48, &var_780, &var_268);
    clap_builder::builder::arg::Arg::new::h6fdd348e62deb03d(&var_780, 
        "formatuse printf style floating-…");
    clap_builder::builder::arg::Arg::short::h30cb111526dd9718(&var_4b8, &var_780, 0x66);
    clap_builder::builder::arg::Arg::long::h9872abf788435f05(&var_780, &var_4b8, 
        "formatuse printf style floating-…");
    clap_builder::builder::arg::Arg::help::hc6b390ea58bb10af(&var_4b8, &var_780, 
        "use printf style floating-point …", 0x26);
    clap_builder::builder::command::Command::arg::h2b155dfcc00bacba(&var_780, &var_a48, &var_4b8);
    clap_builder::builder::arg::Arg::new::h6fdd348e62deb03d(&var_a48, "numbers");
    clap_builder::builder::arg::Arg::action::h64d48ec922aa36c9(&var_4b8, &var_a48, 1);
    clap_builder::builder::arg::Arg::num_args::h2e5e4b9423a09621(&var_a48, &var_4b8);
    clap_builder::builder::command::Command::arg::h2b155dfcc00bacba(arg1, &var_780, &var_a48);
    return arg1;
}
