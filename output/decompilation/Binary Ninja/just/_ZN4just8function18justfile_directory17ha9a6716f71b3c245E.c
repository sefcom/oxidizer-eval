
  int64_t* just::function::justfile_directory::ha9a6716f71b3c245(int64_t* arg1, int64_t* arg2)

{
    void* r15 = *arg2;
    void* rax = *(r15 + 0x18);
    char* rax_1;
    uint64_t rdx;
    rax_1 = std::path::Path::parent::hef287f60afa56900(*(rax + 8), *(rax + 0x10));
    int64_t rax_5;
    int128_t var_30;
    uint64_t var_20;
    
    if (!rax_1)
    {
        void* rax_2 = *(r15 + 0x18);
        just::function::justfile_directory::_$u7b$$u7b$closure$u7d$$u7d$::hb8e430af5dd1690b(
            &var_30, *(rax_2 + 8), *(rax_2 + 0x10));
        *(arg1 + 8) = var_30;
        arg1[3] = var_20;
        rax_5 = 1;
    }
    else
    {
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_30, rax_1, rdx);
        
        if (!(var_30 & 1))
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_30, *var_30[8], var_20);
            int64_t rax_4 = var_30;
            *(arg1 + 0x10) = var_30;
            arg1[1] = rax_4;
            rax_5 = 0;
        }
        else
        {
            just::function::justfile_directory::_$u7b$$u7b$closure$u7d$$u7d$::h0987920aa1e182e9(
                &arg1[1], rax_1, rdx);
            rax_5 = 1;
        }
    }
    *arg1 = rax_5;
    return arg1;
}
