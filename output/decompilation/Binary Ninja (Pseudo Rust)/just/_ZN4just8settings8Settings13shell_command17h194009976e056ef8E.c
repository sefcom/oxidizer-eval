
  fn just::settings::Settings::shell_command::h194009976e056ef8(arg1: i64, arg2: *mut c_void, arg3: *mut c_void) -> i64

{
    let mut var_100: i64;
    just::settings::Settings::shell::hd5c075b0126ed5e7(&var_100, arg2, arg3);
    std::process::Command::new::h281cbb85ffe7a00f(&var_100, var_100);
    let var_f0: i64;
    let var_118: i64 = var_f0;
    let var_e8: i64;
    let var_110: i64 = var_e8;
    let var_e0: i64;
    let var_108: i64 = var_e0;
    std::process::Command::args::hddbcb025d407e375(&var_100);
    memcpy(arg1, &var_100, 0xe0)
}
