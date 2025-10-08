
  fn uu_env::parse_signal_opt::h8d80c5165791b2ec(arg1: *mut i128, arg2: *mut c_void, arg3: *mut i128) -> *mut c_void

{
    let rbx: *mut i128;
    let var_30: *mut i128 = rbx;
    
    if arg3 == 0
    {
        return nullptr;
    }
    
    let mut result_1: *mut c_void = arg2;
    let mut var_e8_1: i8 = 0;
    let mut var_90: ();
    core::iter::traits::iterator::Iterator::collect::ha7d46288ae5d93f1(&var_90, &result_1);
    let var_80: i64;
    let mut rax_1: i64;
    let mut rdx: i64;
    rax_1 =
        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::ha433c616156e1495(var_80, 8, 0x10);
    let mut var_c8: i64 = rax_1;
    let var_c0_1: i64 = rdx;
    let var_b8_1: i64 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h2eb1c9b2d0261f35(&result_1, &var_90);
    let mut i: i64;
    let mut rdx_1: i64;
    i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb9944e073377af52(&result_1);
    
    while i != 0
    {
        if rdx_1 != 0
        {
            alloc::vec::Vec$LT$T$C$A$GT$::push::h6ca0b45f5c80c114(&var_c8, i, rdx_1);
        }
        
        i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb9944e073377af52(&result_1);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::hfa054853d4deaf86(&result_1);
    let mut var_68: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h2eb1c9b2d0261f35(&var_68, &var_c8);
    let mut rax_2: *mut i8;
    let mut rdx_2: i64;
    rax_2 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb9944e073377af52(&var_68);
    let mut result: *mut c_void;
    
    if rax_2 == 0
    {
        result = nullptr;
    }
    else
    {
        let mut rbp: *mut i8 = rax_2;
        let mut r14_1: i64 = rdx_2;
        
        loop
        {
            core::str::converts::from_utf8::h8a6dc80f786921e0(&result_1, rbp, r14_1);
            let mut var_b0: *mut i128;
            
            if result_1 == 1
            {
                var_b0 = 1;
                let var_a8_1: *mut i8 = rbp;
                let var_a0_1: i64 = r14_1;
                let var_98_1: i8 = 1;
                let mut var_78: *mut *mut i128 = &var_b0;
                let var_70_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                result_1 = &data_510868;
                let var_f0_2: i64 = 2;
                let var_d8_1: i64 = 0;
                var_e8_1 = &var_78;
                let mut var_e0_1: i64 = 1;
                let mut var_48: i128;
                core::option::Option$LT$T$GT$::map_or_else::h96013652e67eecbe(&var_48, &result_1);
                var_e0_1 = 1;
                result_1 = var_48;
                let var_38: i64;
                var_e8_1 = var_38;
                result = alloc::boxed::Box$LT$T$GT$::new::h0cd361b0827381d8(&result_1);
                break;
            }
            
            uu_env::parse_signal_value::hb33c53ad79b226c6(&result_1, arg3, var_e8_1);
            result = result_1;
            
            if result != 0
            {
                break;
            }
            
            var_b0 = arg3;
            *arg1.byte_offset(0x68);
            arg1[7];
            
            if _$LT$usize$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h5183ddd93362b17d(&var_b0) == 0
            {
                alloc::vec::Vec$LT$T$C$A$GT$::push::heafd982e1e9d61d6(&arg1[6], arg3);
            }
            
            let mut rax_3: *mut i8;
            let mut rdx_3: i64;
            rax_3 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb9944e073377af52(&var_68);
            rbp = rax_3;
            r14_1 = rdx_3;
            
            if rax_3 == 0
            {
                result = nullptr;
                break;
            }
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::hfa054853d4deaf86(&var_68);
    result
}
