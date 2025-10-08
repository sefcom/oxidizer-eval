
  fn just::platform::unix::_$LT$impl$u20$just..platform_interface..PlatformInterface$u20$for$u20$just..platform..Platform$GT$::make_shebang_command::hee0ff321f7029a87(arg1: i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: i64, arg7: i64) -> i64

{
    let mut var_f0: ();
    std::process::Command::new::h281cbb85ffe7a00f(&var_f0, arg3);
    
    if arg6 != 0
    {
        std::process::Command::current_dir::h92a579a9f249f22b(&var_f0, arg6);
    }
    
    memcpy(arg1, &var_f0, 0xe0);
    arg1
}
