
  fn uu_printenv::uu_app::h7bc4be2a87c56121(arg1: i64) -> i64

{
    let mut var_ab0: ();
    clap_builder::builder::command::Command::new::h599cbc146a0809b5(&var_ab0, 
        uucore::util_name::h074417a1e6395129());
    let mut var_7e8: ();
    clap_builder::builder::command::Command::version::hb2e5f25d7bb7c337(&var_7e8, &var_ab0);
    clap_builder::builder::command::Command::about::h27e2ccdf5f2fafc4(&var_ab0, &var_7e8);
    let mut var_520: ();
    uucore::format_usage::he053403a896311ed(&var_520, "{} [OPTION]... [VARIABLE]...end …", 0x1c);
    clap_builder::builder::command::Command::override_usage::h5a7075c9d08c3879(&var_7e8, &var_ab0, 
        &var_520);
    memcpy(&var_ab0, &var_7e8, 0x2bc);
    let var_52c: i64;
    let var_7f4: i64 = 0x8000000080 | var_52c;
    let var_524: i32;
    let var_7ec: i32 = var_524;
    clap_builder::builder::arg::Arg::new::hbf40865558512300(&var_7e8, 
        "null\x1b[4mdumbSome\x1b[5m\x1b[9…");
    clap_builder::builder::arg::Arg::short::he0c04823a82f5da3(&var_520, &var_7e8);
    clap_builder::builder::arg::Arg::long::hcc330f9367bbefd2(&var_7e8, &var_520);
    clap_builder::builder::arg::Arg::help::h42a1c5265d77db3b(&var_520, &var_7e8);
    let mut var_2a0: ();
    clap_builder::builder::arg::Arg::action::h91b8347eab8de338(&var_2a0, &var_520, 2);
    clap_builder::builder::command::Command::arg::ha778d9f2bf478078(&var_7e8, &var_ab0, &var_2a0);
    clap_builder::builder::arg::Arg::new::hbf40865558512300(&var_ab0, 
        "variables(uutils coreutils) 0.0.…");
    clap_builder::builder::arg::Arg::action::h91b8347eab8de338(&var_520, &var_ab0, 1);
    clap_builder::builder::arg::Arg::num_args::h3c22878311d2d648(&var_ab0, &var_520);
    clap_builder::builder::command::Command::arg::ha778d9f2bf478078(arg1, &var_7e8, &var_ab0);
    arg1
}
