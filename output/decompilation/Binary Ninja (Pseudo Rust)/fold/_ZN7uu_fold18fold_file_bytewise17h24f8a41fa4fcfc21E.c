
  fn uu_fold::fold_file_bytewise::h24f8a41fa4fcfc21(arg1: *mut i64, arg2: i8, arg3: u64) -> *mut c_void

{
    let mut r14: u64;
    let var_18: u64 = r14;
    let mut r15: *mut i64 = arg1;
    let mut var_b0: i64 = 0;
    let var_a8: *mut i8 = 1;
    let var_a0: u64 = 0;
    
    loop
    {
        let mut rax_1: i8;
        let mut rdx: i64;
        rax_1 = std::io::append_to_string::hb4ee5df90b2f96d8(&var_b0, r15);
        let mut result_1: *mut c_void;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h71ea541673afeda3(&result_1, rax_1, rdx);
        let result: *mut c_void = result_1;
        let mut var_90: u64;
        
        if result != 0 || var_90 == 0
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd6746ad766958504(var_b0, 
                var_a8);
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$dyn$u20$std..io..Read$GT$$GT$::h19a3fdc7885eb034(*r15, r15[1]);
            return result;
        }
        
        let mut var_88: *mut *mut *mut c_void;
        let mut var_80: i128;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3760bbb718d9d081(var_a8, var_a0, "\nfailed to read line", 1) != 0
        {
            result_1 = &data_4e6b90;
            var_90 = 1;
            var_88 = 8;
            var_80 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&result_1);
        }
        else if var_a0 != 0
        {
            let mut rbx_1: u64 = arg3;
            
            if var_a0 < rbx_1
            {
                rbx_1 = var_a0;
            }
            
            let mut r14_1: *mut i8 = var_a8;
            let mut r13_1: u64 = var_a0;
            let mut rax_3: *mut c_void;
            let mut rdx_2: u64;
            rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(0, rbx_1, r14_1, r13_1);
            let mut r15_1: i64;
            
            if rax_3 == 0
            {
                r15_1 = 0;
                'label_45bcd9:
                core::str::slice_error_fail::h1a2885084e28d077(r14_1, r13_1, r15_1, rbx_1);
                /* no return */
            }
            
            let mut rbp_1: *mut c_void = rax_3;
            let mut r12_1: u64 = rdx_2;
            r15_1 = 0;
            
            loop
            {
                if arg2 == 0
                {
                    r14 = var_a0;
                }
                else
                {
                    r14 = var_a0;
                    
                    if rbx_1 < r14
                    {
                        let mut rax_4: i8;
                        let mut rdx_3: u64;
                        rax_4 = core::str::_$LT$impl$u20$str$GT$::rfind::h6bd4e6b6c143b2e7(rbp_1, 
                            r12_1);
                        
                        if (rax_4 & 1) != 0
                        {
                            result_1 = nullptr;
                            var_90 = rdx_3;
                            var_88 = 0;
                            let mut rax_5: *mut c_void;
                            let mut rdx_5: u64;
                            rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeInclusive$LT$usize$GT$$GT$::index::hc52fb59378bf613f(&result_1, rbp_1, r12_1);
                            rbp_1 = rax_5;
                            r12_1 = rdx_5;
                        }
                    }
                }
                
                let mut var_40: *mut c_void = rbp_1;
                let var_38_1: u64 = r12_1;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3760bbb718d9d081(rbp_1, r12_1, "\nfailed to read line", 1) == 0
                {
                    r15_1 += r12_1;
                    let mut rbx_3: u64 = r14 - r15_1;
                    let mut var_50: *mut *mut c_void;
                    
                    if r14 <= r15_1
                    {
                        var_50 = &var_40;
                        let var_48_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h16b66ac19e1327b7;
                        result_1 = &data_417f60;
                        var_90 = 1;
                        *var_80[8] = 0;
                        var_88 = &var_50;
                        var_80 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&result_1);
                    }
                    else
                    {
                        var_50 = &var_40;
                        let var_48_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h16b66ac19e1327b7;
                        result_1 = &data_4e6ba0;
                        var_90 = 2;
                        *var_80[8] = 0;
                        var_88 = &var_50;
                        var_80 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&result_1);
                        
                        if rbx_3 >= arg3
                        {
                            rbx_3 = arg3;
                        }
                        
                        rbx_1 = rbx_3 + r15_1;
                        r14_1 = var_a8;
                        r13_1 = var_a0;
                        let mut rax_8: *mut c_void;
                        let mut rdx_7: u64;
                        rax_8 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r15_1, rbx_1, r14_1, r13_1);
                        rbp_1 = rax_8;
                        r12_1 = rdx_7;
                        
                        if rax_8 == 0
                        {
                            goto 'label_45bcd9;
                        }
                        
                        continue;
                    }
                }
                
                r15 = arg1;
                break;
            }
        }
        alloc::string::String::truncate::h4c9243e558c5f483(&var_b0);
    }
}
