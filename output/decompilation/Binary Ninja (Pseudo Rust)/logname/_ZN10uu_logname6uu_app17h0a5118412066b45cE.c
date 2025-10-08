
  fn uu_logname::uu_app::h0a5118412066b45c(arg1: *mut c_void) -> *mut c_void

{
    let mut var_2e0: ();
    clap_builder::builder::command::Command::new::h1726bf8a563a64d8(&var_2e0, 
        uucore::util_name::h074417a1e6395129());
    let mut var_5a8: ();
    clap_builder::builder::command::Command::version::h4d89bad1eea2c3ea(&var_5a8, &var_2e0);
    let mut var_5c0: ();
    uucore::format_usage::he053403a896311ed(&var_5c0, "{}Print user's login name", 2);
    clap_builder::builder::command::Command::override_usage::ha4889a5ab3c11964(&var_2e0, &var_5a8, 
        &var_5c0);
    clap_builder::builder::command::Command::about::h9f2ca867078d3eab(&var_5a8, &var_2e0);
    memcpy(arg1, &var_5a8, 0x2bc);
    let var_2ec: i64;
    *arg1.byte_offset(0x2bc) = 0x8000000080 | var_2ec;
    let var_2e4: i32;
    *arg1.byte_offset(0x2c4) = var_2e4;
    arg1
}
