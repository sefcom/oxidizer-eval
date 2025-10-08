
  fn uu_nohup::uu_app::hfbdd0a2e12237cc1(arg1: *mut c_void) -> *mut c_void

{
    let mut var_2e0: ();
    clap_builder::builder::command::Command::new::h981273b5e07a6a17(&var_2e0, 
        uucore::util_name::h074417a1e6395129());
    let mut var_828: ();
    clap_builder::builder::command::Command::version::h718c87c5d51c1e7f(&var_828, &var_2e0);
    clap_builder::builder::command::Command::about::hc21fc57f17db85f4(&var_2e0, &var_828);
    clap_builder::builder::command::Command::after_help::h644b19a871734a41(&var_828, &var_2e0);
    let mut var_560: ();
    uucore::format_usage::he053403a896311ed(&var_560, "{} COMMAND [ARG]...\n{} OPTIONcm…", 0x1d);
    clap_builder::builder::command::Command::override_usage::h2684d3db08a78274(&var_2e0, &var_828, 
        &var_560);
    clap_builder::builder::arg::Arg::new::h548695783e35bc0e(&var_828);
    memcpy(&var_560, &var_828, 0x278);
    let var_5b0: i32;
    let var_2e8: i32 = var_5b0 | 5;
    let var_5ac: i32;
    let var_2e4: i32 = var_5ac;
    clap_builder::builder::arg::Arg::action::h44213a50f0145d8c(&var_828, &var_560);
    clap_builder::builder::arg::Arg::value_hint::hdacfd02738c32f18(&var_560, &var_828);
    clap_builder::builder::command::Command::arg::ha415107f2087353e(&var_828, &var_2e0, &var_560);
    memcpy(arg1, &var_828, 0x2bc);
    let var_56c: i64;
    *arg1.byte_offset(0x2bc) = 0x80000000a0 | var_56c;
    let var_564: i32;
    *arg1.byte_offset(0x2c4) = var_564;
    arg1
}
