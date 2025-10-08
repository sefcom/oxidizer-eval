
  fn uu_link::uu_app::h418310be0040ada0(arg1: i64) -> i64

{
    let mut var_568: ();
    clap_builder::builder::command::Command::new::hac022b9a8d3b232f(&var_568, 
        uucore::util_name::h074417a1e6395129());
    let mut var_830: ();
    clap_builder::builder::command::Command::version::h255607b1fcdf44f3(&var_830, &var_568);
    clap_builder::builder::command::Command::about::h076a24e249de2314(&var_568, &var_830);
    let mut var_2a0: ();
    uucore::format_usage::he053403a896311ed(&var_2a0, "{} FILE1 FILE2", 0xe);
    clap_builder::builder::command::Command::override_usage::h6acc69e058c2125c(&var_830, &var_568, 
        &var_2a0);
    memcpy(&var_568, &var_830, 0x2bc);
    let var_574: i64;
    let var_2ac: i64 = 0x8000000080 | var_574;
    let var_56c: i32;
    let var_2a4: i32 = var_56c;
    clap_builder::builder::arg::Arg::new::h36fd2188dafea7d4(&var_830);
    memcpy(&var_2a0, &var_830, 0x278);
    let var_5b8: i32;
    let var_28: i32 = var_5b8 | 5;
    let var_5b4: i32;
    let var_24: i32 = var_5b4;
    clap_builder::builder::arg::Arg::num_args::h03cb521ffc085937(&var_830, &var_2a0);
    clap_builder::builder::arg::Arg::value_hint::h4ab4f2c0c4396713(&var_2a0, &var_830);
    let mut var_848: i64 = 2;
    clap_builder::builder::arg::Arg::value_parser::h501d9c2114dce07a(&var_830, &var_2a0, &var_848);
    clap_builder::builder::command::Command::arg::hed794b8a2daf25f1(arg1, &var_568, &var_830);
    arg1
}
