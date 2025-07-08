
  uint64_t uu_cat::write_tab_to_end::h72aa057f554663f6(void* arg1, uint64_t arg2, int64_t* arg3)

{
    uint64_t result = arg2;
    char* r15 = arg1;
    void* var_40 = arg1;
    void* var_38 = arg1 + arg2;
    int64_t rax_1;
    int64_t rdx;
    rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h12b9f0a59c842de9(&var_40);
    void* rbp_2;
    
    if (!rax_1)
        rbp_2 = r15;
    else
    {
        int64_t r12_1 = rdx;
        int64_t var_48_1 = 0;
        int64_t i;
        
        do
        {
            int64_t rax_2;
            uint64_t rdx_2;
            rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2183ab5a6b7a9c40(r12_1, r15, result);
            core::result::Result$LT$T$C$E$GT$::unwrap::h0fc6b3beec18547f(_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg3, rax_2, rdx_2));
            
            if (r12_1 >= result)
            {
                core::panicking::panic_bounds_check::h25a5330941572dd1(r12_1, result);
                /* no return */
            }
            
            if (r15[r12_1] != 9)
                return var_48_1 + r12_1;
            
            core::result::Result$LT$T$C$E$GT$::unwrap::h0fc6b3beec18547f(_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg3, 
                "^I^?unknown filetype: Is a direc…", 2));
            rbp_2 = &r15[r12_1 + 1];
            var_48_1 = var_48_1 + r12_1 + 1;
            void* r15_1 = &r15[result];
            result -= r12_1 + 1;
            var_40 = rbp_2;
            void* var_38_1 = r15_1;
            int64_t rdx_3;
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h12b9f0a59c842de9(&var_40);
            r12_1 = rdx_3;
            r15 = rbp_2;
        } while (i);
    }
    
    core::result::Result$LT$T$C$E$GT$::unwrap::h0fc6b3beec18547f(
        _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(
        arg3, rbp_2, result));
    return result;
}
