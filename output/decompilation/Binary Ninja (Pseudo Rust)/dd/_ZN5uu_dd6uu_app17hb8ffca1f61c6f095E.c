
  fn uu_dd::uu_app::hb8ffca1f61c6f095(arg1: i64) -> i64

{
    let mut var_830: ();
    clap_builder::builder::command::Command::new::h0e6efed2cf43459b(&var_830, 
        uucore::util_name::h074417a1e6395129());
    let mut var_568: ();
    clap_builder::builder::command::Command::version::h459b8bd896839598(&var_568, &var_830);
    clap_builder::builder::command::Command::about::h578c7d5ae71cd95f(&var_830, &var_568);
    let mut var_2a0: ();
    uucore::format_usage::he053403a896311ed(&var_2a0, "{} [OPERAND]...\n{} OPTION### Op…", 0x19);
    clap_builder::builder::command::Command::override_usage::h741cdbff6d7144b9(&var_568, &var_830, 
        &var_2a0);
    clap_builder::builder::command::Command::after_help::h0feff51f7ef87372(&var_830, &var_568);
    memcpy(&var_568, &var_830, 0x2bc);
    let var_574: i64;
    let var_2ac: i64 = 0x8000000080 | var_574;
    let var_56c: i32;
    let var_2a4: i32 = var_56c;
    clap_builder::builder::arg::Arg::new::h4edc6ab5d4fbcd36(&var_830);
    clap_builder::builder::arg::Arg::num_args::hb129ec34adfb3da9(&var_2a0, &var_830);
    clap_builder::builder::command::Command::arg::h5e5a9fdc468f1f1d(arg1, &var_568, &var_2a0);
    arg1
}
