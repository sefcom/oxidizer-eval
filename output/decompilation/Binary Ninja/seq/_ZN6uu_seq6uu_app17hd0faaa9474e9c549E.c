
  int64_t uu_seq::uu_app::hd0faaa9474e9c549(int64_t arg1)

{
    void var_568;
    clap_builder::builder::command::Command::new::h5cb23e1ac5739594(&var_568, 
        uucore::util_name::h074417a1e6395129());
    void var_830;
    memcpy(&var_830, &var_568, 0x2bc);
    int64_t var_2ac;
    int64_t var_574 = 0x80000000a0 | var_2ac;
    int32_t var_2a4;
    int32_t var_56c = var_2a4;
    clap_builder::builder::command::Command::version::hcdc379ddc83d0d65(&var_568, &var_830);
    clap_builder::builder::command::Command::about::h93686247d6d06d43(&var_830, &var_568);
    void var_ab0;
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... LAST\n{} [OPTION]…", 0x51);
    clap_builder::builder::command::Command::override_usage::h74edbb0ebd361d6d(&var_568, &var_830, 
        &var_ab0);
    clap_builder::builder::arg::Arg::new::h7a8258fe94008aee(&var_830, 
        "separatorSeparator character (de…");
    clap_builder::builder::arg::Arg::short::hde81792d29fb55db(&var_ab0, &var_830, 0x73);
    clap_builder::builder::arg::Arg::long::h43604bf00dfdcf5c(&var_830, &var_ab0, 
        "separatorSeparator character (de…");
    clap_builder::builder::arg::Arg::help::h9e2020f8146d1c0a(&var_ab0, &var_830, 
        "Separator character (defaults to…", 0x24);
    clap_builder::builder::command::Command::arg::hed2b26f2619ded49(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::h7a8258fe94008aee(&var_568, 
        "terminatorTerminator character (…");
    clap_builder::builder::arg::Arg::short::hde81792d29fb55db(&var_ab0, &var_568, 0x74);
    clap_builder::builder::arg::Arg::long::h43604bf00dfdcf5c(&var_568, &var_ab0, 
        "terminatorTerminator character (…");
    clap_builder::builder::arg::Arg::help::h9e2020f8146d1c0a(&var_ab0, &var_568, 
        "Terminator character (defaults t…", 0x25);
    clap_builder::builder::command::Command::arg::hed2b26f2619ded49(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::h7a8258fe94008aee(&var_830, 
        "equal-widthEqualize widths of al…");
    clap_builder::builder::arg::Arg::short::hde81792d29fb55db(&var_ab0, &var_830, 0x77);
    clap_builder::builder::arg::Arg::long::h43604bf00dfdcf5c(&var_830, &var_ab0, 
        "equal-widthEqualize widths of al…");
    clap_builder::builder::arg::Arg::help::h9e2020f8146d1c0a(&var_ab0, &var_830, 
        "Equalize widths of all numbers b…", 0x34);
    void var_2a0;
    clap_builder::builder::arg::Arg::action::h39df4f4086732c05(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::hed2b26f2619ded49(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h7a8258fe94008aee(&var_568, 
        "formatuse printf style floating-…");
    clap_builder::builder::arg::Arg::short::hde81792d29fb55db(&var_ab0, &var_568, 0x66);
    clap_builder::builder::arg::Arg::long::h43604bf00dfdcf5c(&var_568, &var_ab0, 
        "formatuse printf style floating-…");
    clap_builder::builder::arg::Arg::help::h9e2020f8146d1c0a(&var_ab0, &var_568, 
        "use printf style floating-point …", 0x26);
    clap_builder::builder::command::Command::arg::hed2b26f2619ded49(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::h7a8258fe94008aee(&var_830, 
        "numberssrc/uu/seq/src/seq.rs arg…");
    memcpy(&var_ab0, &var_830, 0x278);
    int32_t var_5b8;
    int32_t var_838 = var_5b8 | 0x20;
    int32_t var_5b4;
    int32_t var_834 = var_5b4;
    clap_builder::builder::arg::Arg::action::h39df4f4086732c05(&var_830, &var_ab0, 1);
    clap_builder::builder::arg::Arg::num_args::h5d7a5d1b5605d797(&var_ab0, &var_830, 1);
    clap_builder::builder::command::Command::arg::hed2b26f2619ded49(arg1, &var_568, &var_ab0);
    return arg1;
}
