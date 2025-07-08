
  fn uu_paste::DelimiterState::write_delimiter::h3f07c0732667350a(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let rax: i64;
    let var_28: i64 = rax;
    let mut result: i64 = *arg1;
    
    if result != 0
    {
        if result == 1
        {
            let rax_1: i64 = arg1[1];
            let mut rax_2: i64;
            let mut rdx_1: u64;
            rax_2 = core::slice::iter::Iter$LT$T$GT$::make_slice::hcc8a2e10db1efe00(rax_1, 
                arg1[2] + rax_1);
            /* tailcall */
            return alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hc26dafc40ef81f0c(arg2, rax_2, 
                rdx_1);
        }
        
        let rax_4: *mut i64 = _$LT$core..iter..adapters..cycle..Cycle$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h51037f884ab7bbf8(&arg1[5]);
        
        if rax_4 == 0
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        let r14_1: i64 = *rax_4;
        let r12_1: i64 = rax_4[1];
        let mut rax_5: i64;
        let mut rdx_3: u64;
        rax_5 =
            core::slice::iter::Iter$LT$T$GT$::make_slice::hcc8a2e10db1efe00(r14_1, r14_1 + r12_1);
        result =
            alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hc26dafc40ef81f0c(arg2, rax_5, rdx_3);
        arg1[1] = r14_1;
        arg1[2] = r12_1;
    }
    
    result
}
