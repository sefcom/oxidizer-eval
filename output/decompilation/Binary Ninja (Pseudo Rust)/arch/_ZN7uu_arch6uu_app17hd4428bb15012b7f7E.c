
  fn uu_arch::uu_app::hd4428bb15012b7f7(arg1: *mut c_void) -> *mut c_void

{
    let mut var_2e0: ();
    clap_builder::builder::command::Command::new::ha0fe77cef072d3ef(&var_2e0, 
        uucore::util_name::h074417a1e6395129());
    let mut var_5a8: ();
    clap_builder::builder::command::Command::version::h6e780c03043ed012(&var_5a8, &var_2e0);
    clap_builder::builder::command::Command::about::h0774b5a8e4ec13db(&var_2e0, &var_5a8);
    clap_builder::builder::command::Command::after_help::h4657f0a3d42151c8(&var_5a8, &var_2e0);
    memcpy(arg1, &var_5a8, 0x2bc);
    let var_2ec: i64;
    *arg1.byte_offset(0x2bc) = 0x8000000080 | var_2ec;
    let var_2e4: i32;
    *arg1.byte_offset(0x2c4) = var_2e4;
    arg1
}
