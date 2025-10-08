
  fn uu_expand::next_tabstop::hf3e7dbb48d26e5ad(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i8) -> i64

{
    let mut var_28: i64 = arg3;
    let mut rcx_2: i64;
    let mut var_38: *mut i64;
    let mut rax_3: *mut i64;
    
    if arg4 == 0
    {
        if arg2 != 1
        {
            var_38 = arg1;
            let var_30_3: *mut c_void = &arg1[arg2];
            rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h1fbb722a12bdd0f1(&var_38, &var_28);
            
            if rax_3 == 0
            {
                return 1;
            }
            
            return *rax_3 - arg3;
        }
        
        rcx_2 = *arg1;
        
        if rcx_2 == 0
        {
            core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
            /* no return */
        }
    }
    else
    {
        if arg4 != 1
        {
            let mut rax_9: *mut i64;
            let mut rdx_5: i64;
            rax_9 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hb47ef625d69d1750(arg2 - 1, arg1, arg2);
            var_38 = rax_9;
            let var_30_2: *mut c_void = &rax_9[rdx_5];
            rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h1fbb722a12bdd0f1(&var_38, &var_28);
            
            if rax_3 != 0
            {
                return *rax_3 - arg3;
            }
            
            if arg2 == 0
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(arg2 - 1, 0);
                /* no return */
            }
            
            if arg2 == 1
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(arg2 - 2, 1);
                /* no return */
            }
            
            let rsi_4: i64 = arg1[arg2 - 1];
            
            if rsi_4 == 0
            {
                core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
                /* no return */
            }
            
            let rbx: i64 = arg3 - arg1[arg2 - 2];
            let mut rcx_5: u64;
            
            if (rbx | rsi_4) >> 0x20 == 0
            {
                rcx_5 = COMBINE(0, rbx) / rsi_4;
            }
            else
            {
                rcx_5 = COMBINE(0, rbx) / rsi_4;
            }
            
            return (rcx_5 + 1) * rsi_4 - rbx;
        }
        
        let mut rax_2: *mut i64;
        let mut rdx_1: i64;
        rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hb47ef625d69d1750(arg2 - 1, arg1, arg2);
        var_38 = rax_2;
        let var_30_1: *mut c_void = &rax_2[rdx_1];
        rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h1fbb722a12bdd0f1(&var_38, &var_28);
        
        if rax_3 != 0
        {
            return *rax_3 - arg3;
        }
        
        if arg2 == 0
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(arg2 - 1, 0);
            /* no return */
        }
        
        rcx_2 = arg1[arg2 - 1];
        
        if rcx_2 == 0
        {
            core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
            /* no return */
        }
    }
    let mut rdx_3: u64;
    
    if (arg3 | rcx_2) >> 0x20 == 0
    {
        rdx_3 = COMBINE(0, arg3) % rcx_2;
    }
    else
    {
        rdx_3 = COMBINE(0, arg3) % rcx_2;
    }
    
    rcx_2 - rdx_3
}
