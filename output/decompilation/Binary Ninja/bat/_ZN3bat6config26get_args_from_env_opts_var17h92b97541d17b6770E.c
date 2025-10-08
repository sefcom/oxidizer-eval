
  int64_t bat::config::get_args_from_env_opts_var::h92b97541d17b6770(int64_t* arg1)

{
    char var_48;
    std::env::var::h735fd0f3b352739a(&var_48, "BAT_OPTS");
    int64_t result;
    
    if (!(var_48 & 1))
    {
        int64_t result_1;
        result = result_1;
        
        if (result != -0x8000000000000000)
        {
            int128_t var_38;
            result_1 = var_38;
            var_48 = result;
            return bat::config::get_args_from_env_opts_var::_$u7b$$u7b$closure$u7d$$u7d$::hcd1cf4f022592690(arg1, &var_48);
        }
    }
    else
        result = core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h88fe35a31b6ea8e9(&var_48);
    
    *arg1 = -0x7fffffffffffffff;
    return result;
}
