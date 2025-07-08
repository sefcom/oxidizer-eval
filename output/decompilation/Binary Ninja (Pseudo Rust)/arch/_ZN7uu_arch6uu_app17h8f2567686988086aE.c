
  fn uu_arch::uu_app::h8f2567686988086a(arg1: *mut c_void) -> *mut c_void

{
    let mut var_2e0: ();
    clap_builder::builder::command::Command::new::hbb56a5a7b96c7e35(&var_2e0, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_5a8: ();
    clap_builder::builder::command::Command::version::h7decdfeb72eb2da9(&var_5a8, &var_2e0);
    clap_builder::builder::command::Command::about::h18a6b7e00eeabd4f(&var_2e0, &var_5a8);
    clap_builder::builder::command::Command::after_help::hdeb8b7f265e710a0(&var_5a8, &var_2e0);
    memcpy(arg1, &var_5a8, 0x2bc);
    let var_2ec: i64;
    *arg1.byte_offset(0x2bc) = 0x8000000080 | var_2ec;
    let var_2e4: i32;
    *arg1.byte_offset(0x2c4) = var_2e4;
    arg1
}
