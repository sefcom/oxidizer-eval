
  fn uu_printf::uu_app::hc502dcf642f8474c(arg1: i64) -> i64

{
    let mut var_830: ();
    clap_builder::builder::command::Command::new::heb58de7e9eea5151(&var_830, 
        uucore::util_name::h074417a1e6395129());
    let mut var_568: ();
    memcpy(&var_568, &var_830, 0x2bc);
    clap_builder::builder::command::Command::version::h25e05affe7fcdaef(&var_830, &var_568);
    clap_builder::builder::command::Command::about::hf5d01faab90db822(&var_568, &var_830);
    clap_builder::builder::command::Command::after_help::hd7df0d891549bc8c(&var_830, &var_568);
    let mut var_2a0: ();
    uucore::format_usage::he053403a896311ed(&var_2a0, "{} FORMAT [ARGUMENT]...\n{} OPTI…", 0x21);
    clap_builder::builder::command::Command::override_usage::h043510330e051661(&var_568, &var_830, 
        &var_2a0);
    memcpy(&var_830, &var_568, 0x2bc);
    let mut var_574: i32;
    var_574 = 0x28000000280000 | (var_574 | 2);
    let mut var_570: i64;
    *var_570[4] = *var_570[4];
    clap_builder::builder::arg::Arg::new::h17954c765451ab13(&var_568, 
        "helpNoneshim\x1b[0mname    "`$\E…");
    clap_builder::builder::arg::Arg::long::hef0cbc6ab5f2a74e(&var_2a0, &var_568, 
        "helpNoneshim\x1b[0mname    "`$\E…");
    clap_builder::builder::arg::Arg::help::h8cc366da3094336a(&var_568, &var_2a0, 
        "Print help informationversionPri…", 0x16);
    clap_builder::builder::arg::Arg::action::h186cc41e6647180e(&var_2a0, &var_568, 5);
    clap_builder::builder::command::Command::arg::ha08d52e2263056c0(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h17954c765451ab13(&var_830, 
        "versionPrint version information…");
    clap_builder::builder::arg::Arg::long::hef0cbc6ab5f2a74e(&var_2a0, &var_830, 
        "versionPrint version information…");
    clap_builder::builder::arg::Arg::help::h8cc366da3094336a(&var_830, &var_2a0, 
        "Print version informationFORMAT", 0x19);
    clap_builder::builder::arg::Arg::action::h186cc41e6647180e(&var_2a0, &var_830, 8);
    clap_builder::builder::command::Command::arg::ha08d52e2263056c0(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h17954c765451ab13(&var_568, "FORMAT");
    let mut var_848: i64 = 2;
    clap_builder::builder::arg::Arg::value_parser::h29fdb055b863f542(&var_2a0, &var_568, &var_848);
    clap_builder::builder::command::Command::arg::ha08d52e2263056c0(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h17954c765451ab13(&var_830, &data_40fa08);
    clap_builder::builder::arg::Arg::action::h186cc41e6647180e(&var_2a0, &var_830, 1);
    clap_builder::builder::arg::Arg::value_parser::h29fdb055b863f542(&var_830, &var_2a0, &var_848);
    clap_builder::builder::command::Command::arg::ha08d52e2263056c0(arg1, &var_568, &var_830);
    arg1
}
