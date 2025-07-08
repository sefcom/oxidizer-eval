
  fn uu_link::uu_app::h8c6c98521a86a24e(arg1: i64) -> i64

{
    let mut var_538: ();
    clap_builder::builder::command::Command::new::hafb9acd88b0ae54c(&var_538, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_800: ();
    clap_builder::builder::command::Command::version::h0479e3c7bd32251b(&var_800, &var_538);
    clap_builder::builder::command::Command::about::h95e0f927299ffdcb(&var_538, &var_800);
    let mut var_270: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_270, "{} FILE1 FILE2description() is d…", 0xe);
    clap_builder::builder::command::Command::override_usage::hef90f16fca87e7e9(&var_800, &var_538, 
        &var_270);
    memcpy(&var_538, &var_800, 0x2bc);
    let var_544: i64;
    let var_27c: i64 = 0x8000000080 | var_544;
    let var_53c: i32;
    let var_274: i32 = var_53c;
    clap_builder::builder::arg::Arg::new::h3f0689815de3b14c(&var_800);
    memcpy(&var_270, &var_800, 0x248);
    let var_5b8: i32;
    let var_28: i32 = var_5b8 | 5;
    let var_5b4: i32;
    let var_24: i32 = var_5b4;
    clap_builder::builder::arg::Arg::num_args::h77348722a794a375(&var_800, &var_270);
    clap_builder::builder::arg::Arg::value_hint::h9c02bbfd7160c2e8(&var_270, &var_800);
    let mut var_818: i64 = 2;
    clap_builder::builder::arg::Arg::value_parser::h470e7129040b0519(&var_800, &var_270, &var_818);
    clap_builder::builder::command::Command::arg::h3215c946dd2bf29e(arg1, &var_538, &var_800);
    arg1
}
