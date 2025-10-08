
  int64_t* just::function::module_file::hd15dea5ff665aa02(int64_t* arg1, int64_t* arg2)

{
    void* r14 = *(*arg2 + 0x10);
    int32_t var_28;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_28, *(r14 + 0x50), *(r14 + 0x58));
    int64_t rax_1;
    
    if (var_28 != 1)
    {
        int64_t var_20;
        uint64_t var_18;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_28, var_20, var_18);
        int64_t rax_2 = var_28;
        *(arg1 + 0x10) = var_20;
        arg1[1] = rax_2;
        rax_1 = 0;
    }
    else
    {
        just::function::module_file::_$u7b$$u7b$closure$u7d$$u7d$::ha63e0615b0ae1fe0(&arg1[1], 
            *(r14 + 0x50), *(r14 + 0x58));
        rax_1 = 1;
    }
    
    *arg1 = rax_1;
    return arg1;
}
