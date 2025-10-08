
  fn bat::config::config_file::h4b67a380f7fc9337(arg1: *mut i128) -> i64

{
    let mut var_38: i8;
    std::env::var::h735fd0f3b352739a(&var_38, "BAT_CONFIG_PATH# This is `bat`s …");
    
    if (var_38 & 1) != 0
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h88fe35a31b6ea8e9(&var_38);
        /* tailcall */
        return bat::config::config_file::_$u7b$$u7b$closure$u7d$$u7d$::ha8ad641e8cba6a4a(arg1);
    }
    
    let result: i64;
    
    if -(result) == -0x8000000000000000
    {
        /* tailcall */
        return bat::config::config_file::_$u7b$$u7b$closure$u7d$$u7d$::ha8ad641e8cba6a4a(arg1);
    }
    
    let var_28: i128;
    *arg1.byte_offset(8) = var_28;
    *arg1 = result;
    result
}
