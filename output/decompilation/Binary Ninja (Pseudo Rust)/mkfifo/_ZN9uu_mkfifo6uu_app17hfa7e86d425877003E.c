
  fn uu_mkfifo::uu_app::hfa7e86d425877003(arg1: i64) -> i64

{
    let mut var_568: ();
    clap_builder::builder::command::Command::new::h32f7b6db344be44f(&var_568, 
        uucore::util_name::h074417a1e6395129());
    let mut var_830: ();
    clap_builder::builder::command::Command::version::h748f316f30032e37(&var_830, &var_568);
    let mut var_ab0: ();
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... NAME...Create a F…", 0x16);
    clap_builder::builder::command::Command::override_usage::h8c1e700828855e22(&var_568, &var_830, 
        &var_ab0);
    clap_builder::builder::command::Command::about::h8d619714d1f70eb4(&var_830, &var_568);
    memcpy(&var_568, &var_830, 0x2bc);
    let var_574: i64;
    let var_2ac: i64 = 0x8000000080 | var_574;
    let var_56c: i32;
    let var_2a4: i32 = var_56c;
    clap_builder::builder::arg::Arg::new::h0a377786ac0964c7(&var_830, 
        "modei128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::arg::Arg::short::h5b453aa659ec3ed1(&var_ab0, &var_830, 0x6d);
    clap_builder::builder::arg::Arg::long::h725d4a7d6933f0fe(&var_830, &var_ab0, 
        "modei128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::arg::Arg::help::h4d66b5390fd0a813(&var_ab0, &var_830, 
        "file permissions for the fifoset…", 0x1d);
    let mut var_2a0: i64;
    clap_builder::builder::arg::Arg::value_name::h75de148b26b11eb0(&var_2a0, &var_ab0, 
        &data_4171d0[0x10]);
    clap_builder::builder::command::Command::arg::hb4ec6104fb27e15e(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h0a377786ac0964c7(&var_568, 
        "Zcontext(uutils coreutils) 0.0.3…");
    clap_builder::builder::arg::Arg::short::h5b453aa659ec3ed1(&var_ab0, &var_568, 0x5a);
    clap_builder::builder::arg::Arg::help::h4d66b5390fd0a813(&var_568, &var_ab0, 
        "set the SELinux security context…", 0x30);
    clap_builder::builder::arg::Arg::action::h41dc92a5fe5b90f2(&var_ab0, &var_568, 2);
    clap_builder::builder::command::Command::arg::hb4ec6104fb27e15e(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::h0a377786ac0964c7(&var_830, 
        "context(uutils coreutils) 0.0.30…");
    clap_builder::builder::arg::Arg::long::h725d4a7d6933f0fe(&var_ab0, &var_830, 
        "context(uutils coreutils) 0.0.30…");
    clap_builder::builder::arg::Arg::value_name::h75de148b26b11eb0(&var_830, &var_ab0, 
        "CTXlike -Z, or if CTX is specifi…");
    var_2a0 = 1;
    clap_builder::builder::arg::Arg::value_parser::h6edeb62ec2066a81(&var_ab0, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::num_args::h6d9b43ad34bb3461(&var_830, &var_ab0, 0);
    memcpy(&var_ab0, &var_830, 0x278);
    let var_5b8: i32;
    let var_838: i32 = 0x80 | var_5b8;
    let var_5b4: i32;
    let var_834: i32 = var_5b4;
    clap_builder::builder::arg::Arg::help::h4d66b5390fd0a813(&var_2a0, &var_ab0, 
        "like -Z, or if CTX is specified …", 0x55);
    clap_builder::builder::command::Command::arg::hb4ec6104fb27e15e(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h0a377786ac0964c7(&var_568, 
        "fifo\x1b[0mnameCyan    "`$\MODEE…");
    memcpy(&var_ab0, &var_568, 0x278);
    let var_2f0: i32;
    let var_838_1: i32 = var_2f0 | 4;
    let var_2ec: i32;
    let var_834_1: i32 = var_2ec;
    clap_builder::builder::arg::Arg::action::h41dc92a5fe5b90f2(&var_568, &var_ab0, 1);
    clap_builder::builder::arg::Arg::value_hint::h2c166b6a63a06657(&var_ab0, &var_568);
    clap_builder::builder::command::Command::arg::hb4ec6104fb27e15e(arg1, &var_830, &var_ab0);
    arg1
}
