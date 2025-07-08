
  fn uu_sum::uu_app::hbdfcd560e86e61fa(arg1: i64) -> i64

{
    let mut var_2e0: ();
    clap_builder::builder::command::Command::new::h145afba2524775e3(&var_2e0, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_7f8: ();
    clap_builder::builder::command::Command::version::h5aa5f16b54449e9b(&var_7f8, &var_2e0, 
        "0.0.28{} [OPTION]... [FILE]...Ch…");
    let mut var_530: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_530, "{} [OPTION]... [FILE]...Checksum…", 0x18);
    clap_builder::builder::command::Command::override_usage::hbab238ce668db690(&var_2e0, &var_7f8, 
        &var_530);
    clap_builder::builder::command::Command::about::h0dd67728983a96e6(&var_7f8, &var_2e0, 
        "Checksum and count the blocks in…", 0x5f);
    memcpy(&var_2e0, &var_7f8, 0x2bc);
    let var_53c: i64;
    let var_24: i64 = 0x8000000080 | var_53c;
    let var_534: i32;
    let var_1c: i32 = var_534;
    clap_builder::builder::arg::Arg::new::hff157f15b11d8e5f(&var_7f8, 
        "filei128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::arg::Arg::action::h138a3d481854f0e9(&var_530, &var_7f8, 1);
    memcpy(&var_7f8, &var_530, 0x248);
    let var_2e8: i32;
    let var_5b0: i32 = var_2e8 | 4;
    let var_2e4: i32;
    let var_5ac: i32 = var_2e4;
    clap_builder::builder::arg::Arg::value_hint::hd181bcc601839ad2(&var_530, &var_7f8, 3);
    clap_builder::builder::command::Command::arg::h09f67cd4a8d99462(&var_7f8, &var_2e0, &var_530);
    clap_builder::builder::arg::Arg::new::hff157f15b11d8e5f(&var_2e0, 
        "rdescription() is deprecated; us…");
    clap_builder::builder::arg::Arg::short::h5bff8bc39b41d2d2(&var_530, &var_2e0, 0x72);
    clap_builder::builder::arg::Arg::help::h1386c016a01bc406(&var_2e0, &var_530, 
        "use the BSD sum algorithm, use 1…", 0x32);
    clap_builder::builder::arg::Arg::action::h138a3d481854f0e9(&var_530, &var_2e0, 2);
    clap_builder::builder::command::Command::arg::h09f67cd4a8d99462(&var_2e0, &var_7f8, &var_530);
    clap_builder::builder::arg::Arg::new::hff157f15b11d8e5f(&var_7f8, 
        &anon.b1652e42acb5298d6255d984603c6a54.2.llvm.2130229470187885326);
    clap_builder::builder::arg::Arg::short::h5bff8bc39b41d2d2(&var_530, &var_7f8, 0x73);
    clap_builder::builder::arg::Arg::long::ha4bc876d2ea83518(&var_7f8, &var_530);
    clap_builder::builder::arg::Arg::help::h1386c016a01bc406(&var_530, &var_7f8, 
        "use System V sum algorithm, use …", 0x30);
    clap_builder::builder::arg::Arg::action::h138a3d481854f0e9(&var_7f8, &var_530, 2);
    clap_builder::builder::command::Command::arg::h09f67cd4a8d99462(arg1, &var_2e0, &var_7f8);
    arg1
}
