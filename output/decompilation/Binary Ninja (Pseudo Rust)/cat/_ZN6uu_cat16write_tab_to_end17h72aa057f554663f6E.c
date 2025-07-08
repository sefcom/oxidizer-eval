
  fn uu_cat::write_tab_to_end::h72aa057f554663f6(arg1: *mut c_void, arg2: u64, arg3: *mut i64) -> u64

{
    let mut result: u64 = arg2;
    let mut r15: *mut i8 = arg1;
    let mut var_40: *mut c_void = arg1;
    let var_38: *mut c_void = arg1.byte_offset(arg2);
    let mut rax_1: i64;
    let mut rdx: i64;
    rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h12b9f0a59c842de9(&var_40);
    let mut rbp_2: *mut c_void;
    
    if rax_1 == 0
    {
        rbp_2 = r15;
    }
    else
    {
        let mut r12_1: i64 = rdx;
        let mut var_48_1: i64 = 0;
        let mut i: i64;
        
        do
        {
            let mut rax_2: i64;
            let mut rdx_2: u64;
            rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2183ab5a6b7a9c40(r12_1, r15, result);
            core::result::Result$LT$T$C$E$GT$::unwrap::h0fc6b3beec18547f(_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg3, rax_2, rdx_2));
            
            if r12_1 >= result
            {
                core::panicking::panic_bounds_check::h25a5330941572dd1(r12_1, result);
                /* no return */
            }
            
            if r15[r12_1] != 9
            {
                return var_48_1 + r12_1;
            }
            
            core::result::Result$LT$T$C$E$GT$::unwrap::h0fc6b3beec18547f(_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg3, 
                "^I^?unknown filetype: Is a direc…", 2));
            rbp_2 = &r15[r12_1 + 1];
            var_48_1 = var_48_1 + r12_1 + 1;
            let r15_1: *mut c_void = &r15[result];
            result -= r12_1 + 1;
            var_40 = rbp_2;
            let var_38_1: *mut c_void = r15_1;
            let mut rdx_3: i64;
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h12b9f0a59c842de9(&var_40);
            r12_1 = rdx_3;
            r15 = rbp_2;
        } while i != 0;
    }
    
    core::result::Result$LT$T$C$E$GT$::unwrap::h0fc6b3beec18547f(
        _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(
        arg3, rbp_2, result));
    result
}
