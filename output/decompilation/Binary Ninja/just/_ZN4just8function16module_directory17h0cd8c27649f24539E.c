
  int64_t* just::function::module_directory::h0cd8c27649f24539(int64_t* arg1, int64_t* arg2)

{
    void* rax_1 = *(*arg2 + 0x10);
    char* rax_2;
    uint64_t rdx;
    rax_2 = std::path::Path::parent::hef287f60afa56900(*(rax_1 + 0x50), *(rax_1 + 0x58));
    
    if (!rax_2)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    char var_30;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_30, rax_2, rdx);
    int64_t rax_3;
    
    if (!(var_30 & 1))
    {
        int64_t var_28;
        uint64_t var_20;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_30, var_28, var_20);
        int64_t rax_4 = var_30;
        *(arg1 + 0x10) = var_28;
        arg1[1] = rax_4;
        rax_3 = 0;
    }
    else
    {
        just::function::module_directory::_$u7b$$u7b$closure$u7d$$u7d$::hbe078cf44c80cd1c(&arg1[1], 
            rax_2, rdx);
        rax_3 = 1;
    }
    
    *arg1 = rax_3;
    return arg1;
}
