
  int64_t uu_paste::DelimiterState::write_delimiter::h3f07c0732667350a(int64_t* arg1, int64_t* arg2)

{
    int64_t rax;
    int64_t var_28 = rax;
    int64_t result = *arg1;
    
    if (result)
    {
        if (result == 1)
        {
            int64_t rax_1 = arg1[1];
            int64_t rax_2;
            uint64_t rdx_1;
            rax_2 = core::slice::iter::Iter$LT$T$GT$::make_slice::hcc8a2e10db1efe00(rax_1, 
                arg1[2] + rax_1);
            /* tailcall */
            return alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hc26dafc40ef81f0c(arg2, rax_2, 
                rdx_1);
        }
        
        int64_t* rax_4 = _$LT$core..iter..adapters..cycle..Cycle$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h51037f884ab7bbf8(&arg1[5]);
        
        if (!rax_4)
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        int64_t r14_1 = *rax_4;
        int64_t r12_1 = rax_4[1];
        int64_t rax_5;
        uint64_t rdx_3;
        rax_5 =
            core::slice::iter::Iter$LT$T$GT$::make_slice::hcc8a2e10db1efe00(r14_1, r14_1 + r12_1);
        result =
            alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hc26dafc40ef81f0c(arg2, rax_5, rdx_3);
        arg1[1] = r14_1;
        arg1[2] = r12_1;
    }
    
    return result;
}
