
  int64_t just::settings::Settings::shell_command::h194009976e056ef8(int64_t arg1, void* arg2, void* arg3)

{
    int64_t var_100;
    just::settings::Settings::shell::hd5c075b0126ed5e7(&var_100, arg2, arg3);
    std::process::Command::new::h281cbb85ffe7a00f(&var_100, var_100);
    int64_t var_f0;
    int64_t var_118 = var_f0;
    int64_t var_e8;
    int64_t var_110 = var_e8;
    int64_t var_e0;
    int64_t var_108 = var_e0;
    std::process::Command::args::hddbcb025d407e375(&var_100);
    return memcpy(arg1, &var_100, 0xe0);
}
