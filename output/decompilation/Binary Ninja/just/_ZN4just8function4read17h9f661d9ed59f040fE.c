
  int64_t* just::function::read::h9f661d9ed59f040f(int64_t* arg1, int64_t* arg2, int64_t arg3)

{
    int64_t var_28 = arg3;
    int64_t rcx;
    int64_t var_20 = rcx;
    void* rax = *arg2;
    void var_58;
    just::execution_context::ExecutionContext::working_directory::hcc9cc51d43cb6ad6(&var_58, 
        *(rax + 0x10), *(rax + 0x18));
    int64_t var_50;
    uint64_t var_48;
    int128_t var_40;
    std::path::Path::join::h1eac0ae5e7efa361(&var_40, var_50, var_48, arg3);
    int64_t var_70;
    std::fs::read_to_string::h6e0119a910dad901(&var_70, &var_40);
    
    if (!(0 + -(var_70)))
    {
        int64_t var_60;
        arg1[3] = var_60;
        *(arg1 + 8) = var_70;
        *arg1 = 0;
    }
    else
    {
        uint64_t var_68;
        just::function::read::_$u7b$$u7b$closure$u7d$$u7d$::h9a1193e6eab69c80(&var_40, &var_28, 
            var_68);
        int64_t var_30;
        arg1[3] = var_30;
        *(arg1 + 8) = var_40;
        *arg1 = 1;
    }
    
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_58);
    return arg1;
}
