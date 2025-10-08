
  fn uu_hostid::uu_app::h2645cc966e8adce6(arg1: *mut c_void) -> *mut c_void

{
    let mut var_2e0: ();
    clap_builder::builder::command::Command::new::h3f771ea0450d13cb(&var_2e0, 
        uucore::util_name::h074417a1e6395129());
    let mut var_5a8: ();
    clap_builder::builder::command::Command::version::h86a5bea98b829b50(&var_5a8, &var_2e0);
    clap_builder::builder::command::Command::about::hc316918f33dafaa7(&var_2e0, &var_5a8);
    let mut var_5c0: ();
    uucore::format_usage::he053403a896311ed(&var_5c0, "{} [options", 0xc);
    clap_builder::builder::command::Command::override_usage::h6c124f3890cb5a6b(&var_5a8, &var_2e0, 
        &var_5c0);
    memcpy(arg1, &var_5a8, 0x2bc);
    let var_2ec: i64;
    *arg1.byte_offset(0x2bc) = 0x8000000080 | var_2ec;
    let var_2e4: i32;
    *arg1.byte_offset(0x2c4) = var_2e4;
    arg1
}
