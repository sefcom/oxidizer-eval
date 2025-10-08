
  fn bat::config::get_args_from_env_opts_var::h92b97541d17b6770(arg1: *mut i64) -> i64

{
    let mut var_48: i8;
    std::env::var::h735fd0f3b352739a(&var_48, "BAT_OPTS");
    let mut result: i64;
    
    if (var_48 & 1) == 0
    {
        let mut result_1: i64;
        result = result_1;
        
        if result != -0x8000000000000000
        {
            let var_38: i128;
            result_1 = var_38;
            var_48 = result;
            return bat::config::get_args_from_env_opts_var::_$u7b$$u7b$closure$u7d$$u7d$::hcd1cf4f022592690(arg1, &var_48);
        }
    }
    else
    {
        result = core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h88fe35a31b6ea8e9(&var_48);
    }
    
    *arg1 = -0x7fffffffffffffff;
    result
}
