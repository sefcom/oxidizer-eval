
  uint64_t uu_stat::check_bound::h3dee2e7f7020c454(char* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    if (arg5 < arg3)
        return 0;
    
    void* rax_1;
    int64_t rdx_1;
    rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(arg4, arg5, arg1, arg2);
    
    if (!rax_1)
    {
        core::str::slice_error_fail::h1a2885084e28d077(arg1, arg2, arg4, arg5);
        /* no return */
    }
    
    int64_t var_90 = 0;
    void* var_88_1 = rax_1;
    int64_t var_80_1 = rdx_1;
    char var_78_1 = 1;
    int64_t* var_a0 = &var_90;
    int64_t (* var_98_1)(int32_t* arg1, int64_t* arg2) =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
    void* const var_70 = &data_5199e0;
    int64_t var_68_1 = 2;
    int64_t var_50_1 = 0;
    int64_t** var_60_1 = &var_a0;
    int64_t var_58_1 = 1;
    void var_40;
    core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(&var_40, &var_70);
    int32_t var_28_1 = 1;
    return alloc::boxed::Box$LT$T$GT$::new::h173a34a4352a059d(&var_40);
}
