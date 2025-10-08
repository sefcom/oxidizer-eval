
  int64_t* just::function::invocation_directory_native::h9d701e5d86df925d(int64_t* arg1, int64_t* arg2)

{
    int64_t* r14 = *arg2;
    void* rax = *r14;
    int32_t var_28;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_28, *(rax + 0x20), *(rax + 0x28));
    int64_t rax_2;
    
    if (var_28 != 1)
    {
        int64_t var_20;
        uint64_t var_18;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_28, var_20, var_18);
        int64_t rax_3 = var_28;
        *(arg1 + 0x10) = var_20;
        arg1[1] = rax_3;
        rax_2 = 0;
    }
    else
    {
        void* rax_1 = *r14;
        just::function::invocation_directory_native::_$u7b$$u7b$closure$u7d$$u7d$::heec667df0d6555fc(&arg1[1], *(rax_1 + 0x20), *(rax_1 + 0x28));
        rax_2 = 1;
    }
    
    *arg1 = rax_2;
    return arg1;
}
