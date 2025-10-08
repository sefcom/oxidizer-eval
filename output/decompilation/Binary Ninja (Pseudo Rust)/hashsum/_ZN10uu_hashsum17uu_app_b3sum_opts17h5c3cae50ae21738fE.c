
  fn uu_hashsum::uu_app_b3sum_opts::h5c3cae50ae21738f(arg1: i64, arg2: i64) -> i64

{
    let mut var_568: ();
    memcpy(&var_568, arg2, 0x2c8);
    let mut var_7e8: ();
    clap_builder::builder::arg::Arg::new::h6aa2bb62d5e3b990(&var_7e8, 
        "no-namesextern "ENOTUNIQELIBEXEC…");
    let mut var_2a0: ();
    clap_builder::builder::arg::Arg::long::h400c12573ef6d75c(&var_2a0, &var_7e8, 
        "no-namesextern "ENOTUNIQELIBEXEC…");
    clap_builder::builder::arg::Arg::help::h2bc0660901b2ceb5(&var_7e8, &var_2a0, 
        "Omits filenames in the output (o…", 0x43);
    clap_builder::builder::arg::Arg::action::ha30e37a18dbb74d5(&var_2a0, &var_7e8, 2);
    clap_builder::builder::command::Command::arg::h6ab44b22cd7561c2(arg1, &var_568, &var_2a0)
}
