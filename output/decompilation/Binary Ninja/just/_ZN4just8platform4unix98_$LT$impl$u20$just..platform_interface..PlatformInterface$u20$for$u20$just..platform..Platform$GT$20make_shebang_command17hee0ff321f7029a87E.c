
  int64_t just::platform::unix::_$LT$impl$u20$just..platform_interface..PlatformInterface$u20$for$u20$just..platform..Platform$GT$::make_shebang_command::hee0ff321f7029a87(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7)

{
    void var_f0;
    std::process::Command::new::h281cbb85ffe7a00f(&var_f0, arg3);
    
    if (arg6)
        std::process::Command::current_dir::h92a579a9f249f22b(&var_f0, arg6);
    
    memcpy(arg1, &var_f0, 0xe0);
    return arg1;
}
