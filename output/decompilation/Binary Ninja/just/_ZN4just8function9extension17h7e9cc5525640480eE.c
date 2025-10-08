
  int64_t* just::function::extension::h7e9cc5525640480e(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_58 = arg3;
    int64_t var_50 = arg4;
    void* rax;
    uint64_t rdx;
    rax = std::path::Path::extension::h0018158968ea260f(arg3, arg4);
    int64_t rax_2;
    void** const var_48;
    
    if (!rax)
    {
        int64_t* var_18 = &var_58;
        int64_t (* var_10_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
        var_48 = &data_82fe88;
        int64_t var_40_1 = 2;
        int64_t var_28_1 = 0;
        int64_t** var_38_1 = &var_18;
        int64_t var_30_1 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&arg1[1], 0, rdx, &var_48);
        rax_2 = 1;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_48, rax, rdx);
        void** const rax_1 = var_48;
        int64_t var_40;
        *(arg1 + 0x10) = var_40;
        arg1[1] = rax_1;
        rax_2 = 0;
    }
    *arg1 = rax_2;
    return arg1;
}
