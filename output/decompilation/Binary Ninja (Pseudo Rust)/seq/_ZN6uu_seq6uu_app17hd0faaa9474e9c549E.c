
  fn uu_seq::uu_app::hd0faaa9474e9c549(arg1: i64) -> i64

{
    let mut var_568: ();
    clap_builder::builder::command::Command::new::h5cb23e1ac5739594(&var_568, 
        uucore::util_name::h074417a1e6395129());
    let mut var_830: ();
    memcpy(&var_830, &var_568, 0x2bc);
    let var_2ac: i64;
    let var_574: i64 = 0x80000000a0 | var_2ac;
    let var_2a4: i32;
    let var_56c: i32 = var_2a4;
    clap_builder::builder::command::Command::version::hcdc379ddc83d0d65(&var_568, &var_830);
    clap_builder::builder::command::Command::about::h93686247d6d06d43(&var_830, &var_568);
    let mut var_ab0: ();
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
    let mut var_2a0: ();
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
    let var_5b8: i32;
    let var_838: i32 = var_5b8 | 0x20;
    let var_5b4: i32;
    let var_834: i32 = var_5b4;
    clap_builder::builder::arg::Arg::action::h39df4f4086732c05(&var_830, &var_ab0, 1);
    clap_builder::builder::arg::Arg::num_args::h5d7a5d1b5605d797(&var_ab0, &var_830, 1);
    clap_builder::builder::command::Command::arg::hed2b26f2619ded49(arg1, &var_568, &var_ab0);
    arg1
}
