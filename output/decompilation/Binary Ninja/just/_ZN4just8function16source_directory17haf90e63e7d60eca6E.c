
  int64_t* just::function::source_directory::haf90e63e7d60eca6(int64_t* arg1, int64_t* arg2)

{
    void* rax_1 = *(*arg2 + 0x18);
    char* rax_2;
    uint64_t rdx;
    rax_2 = std::path::Path::parent::hef287f60afa56900(*(rax_1 + 8), *(rax_1 + 0x10));
    
    if (!rax_2)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    int64_t r14 = arg2[1];
    uint64_t r15_1 = arg2[2];
    void var_30;
    std::path::Path::join::h1eac0ae5e7efa361(&var_30, rax_2, rdx, r14);
    int64_t var_28;
    int64_t var_20;
    char* rax_3;
    int64_t rdx_1;
    rax_3 = std::path::Path::parent::hef287f60afa56900(var_28, var_20);
    
    if (!rax_3)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    int32_t var_48;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_48, rax_3, rdx_1);
    uint64_t var_38;
    
    if (var_48 != 1)
    {
        int64_t var_40;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_48, var_40, var_38);
        int64_t rax_5 = var_48;
        *(arg1 + 0x10) = var_40;
        arg1[1] = rax_5;
        *arg1 = 0;
    }
    else
    {
        just::function::source_file::_$u7b$$u7b$closure$u7d$$u7d$::hcf6ded2bba2f6f75(&var_48, r14, 
            r15_1);
        arg1[3] = var_38;
        *(arg1 + 8) = var_48;
        *arg1 = 1;
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_30);
    return arg1;
}
