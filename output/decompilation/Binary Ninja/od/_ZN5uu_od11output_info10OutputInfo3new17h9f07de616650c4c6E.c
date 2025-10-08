
  void* uu_od::output_info::OutputInfo::new::h9f07de616650c4c6(void* arg1, int64_t arg2, void* arg3, int64_t arg4, char arg5)

{
    void* rbx = arg3 + arg4 * 0x28;
    int64_t rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h425d9cf3ffc07b0c(arg3, rbx);
    int64_t var_38 = rax_1;
    int64_t rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::ha7b07264c2196bca(arg3, rbx, &var_38);
    
    if (!rax_1)
    {
        core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
        /* no return */
    }
    
    uint64_t rbx_1;
    
    if (!((rax_1 | arg2) >> 0x20))
        rbx_1 = COMBINE(0, arg2) / rax_1;
    else
        rbx_1 = COMBINE(0, arg2) / rax_1;
    
    uu_od::output_info::OutputInfo::create_spaced_formatter_info::h26a2bd3a02047c8b(arg1, arg3, 
        arg4, rax_1, rax_2);
    *(arg1 + 0x18) = arg2;
    *(arg1 + 0x20) = rbx_1 * rax_2;
    *(arg1 + 0x28) = var_38;
    *(arg1 + 0x30) = arg5;
    return arg1;
}
