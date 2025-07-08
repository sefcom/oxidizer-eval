
  fn uu_whoami::uu_app::h74b0fb3ed938f565(arg1: *mut c_void) -> *mut c_void

{
    let mut var_2e0: ();
    clap_builder::builder::command::Command::new::h140a7e7c798df51d(&var_2e0, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_5a8: ();
    clap_builder::builder::command::Command::version::h6d79b15dc0546f23(&var_5a8, &var_2e0);
    clap_builder::builder::command::Command::about::he894dc93fe7cb947(&var_2e0, &var_5a8);
    let mut var_5c0: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_5c0, "{}description() is deprecated; u…", 2);
    clap_builder::builder::command::Command::override_usage::hab49b17853338a37(&var_5a8, &var_2e0, 
        &var_5c0);
    memcpy(arg1, &var_5a8, 0x2bc);
    let var_2ec: i64;
    *arg1.byte_offset(0x2bc) = 0x8000000080 | var_2ec;
    let var_2e4: i32;
    *arg1.byte_offset(0x2c4) = var_2e4;
    arg1
}
