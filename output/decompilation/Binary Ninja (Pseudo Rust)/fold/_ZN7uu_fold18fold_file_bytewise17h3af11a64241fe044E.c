
  fn uu_fold::fold_file_bytewise::h3af11a64241fe044(arg1: *mut i64, arg2: i8, arg3: *mut c_void) -> *mut c_void

{
    let mut r15: *mut i64 = arg1;
    let mut var_b0: i64 = 0;
    let var_a8: *mut i8 = 1;
    let var_a0: u64 = 0;
    
    loop
    {
        let mut rax_1: i64;
        let mut rdx: *mut *mut c_void;
        rax_1 = std::io::append_to_string::h03d08dbf90a74f4a(&var_b0, r15);
        let mut result_1: *mut c_void;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::ha34f519a25036496(&result_1, rax_1, rdx);
        let result: *mut c_void = result_1;
        
        if result != 0
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he0f0171ff9caf1b3(&var_b0);
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$dyn$u20$std..io..Read$GT$$GT$::hd2a31b9451a7f555(*r15, r15[1]);
            return result;
        }
        
        let mut var_90: *mut i64;
        
        if var_90 == 0
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he0f0171ff9caf1b3(&var_b0);
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$dyn$u20$std..io..Read$GT$$GT$::hd2a31b9451a7f555(*r15, r15[1]);
            return result;
        }
        
        let mut var_88: *mut *mut *mut c_void;
        let mut var_80: i128;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5f12374e656de98e(var_a8, var_a0, "\n", 1) != 0
        {
            result_1 = &data_51a958;
            var_90 = 1;
            var_88 = 8;
            var_80 = {0};
            std::io::stdio::_print::he918bceb0c89db46(&result_1);
        }
        else if var_a0 != 0
        {
            let mut rbx_1: *mut c_void = arg3;
            
            if var_a0 < rbx_1
            {
                rbx_1 = var_a0;
            }
            
            let mut r14_1: *mut i8 = var_a8;
            let mut rax_3: *mut c_void;
            let mut rdx_2: *mut c_void;
            rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(0, rbx_1, r14_1, var_a0);
            let mut r13_1: u64;
            let mut r15_1: *mut c_void;
            
            if rax_3 == 0
            {
                r15_1 = nullptr;
                r13_1 = var_a0;
                'label_4b1cef:
                core::str::slice_error_fail::h5dbb61534404fe7e(r14_1, r13_1, r15_1, rbx_1);
                /* no return */
            }
            
            let mut rbp_1: *mut c_void = rax_3;
            let mut r12_1: *mut c_void = rdx_2;
            r15_1 = nullptr;
            
            loop
            {
                if rbx_1 < var_a0 && arg2 != 0
                {
                    let mut rax_4: i64;
                    let mut rdx_3: *mut i64;
                    rax_4 =
                        core::str::_$LT$impl$u20$str$GT$::rfind::h608a144437da32c7(rbp_1, r12_1);
                    
                    if rax_4 != 0
                    {
                        result_1 = nullptr;
                        var_90 = rdx_3;
                        var_88 = 0;
                        let mut rax_5: *mut c_void;
                        let mut rdx_5: *mut c_void;
                        rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeInclusive$LT$usize$GT$$GT$::index::h3fe2ad0e36dabac9(&result_1, rbp_1, r12_1);
                        rbp_1 = rax_5;
                        r12_1 = rdx_5;
                    }
                }
                
                let mut var_60: *mut c_void = rbp_1;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5f12374e656de98e(rbp_1, r12_1, "\n", 1) == 0
                {
                    r15_1 += r12_1;
                    let mut rbx_3: *mut c_void = var_a0 - r15_1;
                    let mut var_40: *mut *mut c_void;
                    
                    if var_a0 <= r15_1
                    {
                        var_40 = &var_60;
                        let var_38_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha398d9e18c3ebe29;
                        result_1 = &data_414600;
                        var_90 = 1;
                        *var_80[8] = 0;
                        var_88 = &var_40;
                        var_80 = 1;
                        std::io::stdio::_print::he918bceb0c89db46(&result_1);
                    }
                    else
                    {
                        var_40 = &var_60;
                        let var_38_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha398d9e18c3ebe29;
                        result_1 = &data_51a968;
                        var_90 = 2;
                        *var_80[8] = 0;
                        var_88 = &var_40;
                        var_80 = 1;
                        std::io::stdio::_print::he918bceb0c89db46(&result_1);
                        
                        if rbx_3 >= arg3
                        {
                            rbx_3 = arg3;
                        }
                        
                        rbx_1 = rbx_3.byte_offset(r15_1);
                        r14_1 = var_a8;
                        r13_1 = var_a0;
                        let mut rax_8: *mut c_void;
                        let mut rdx_7: *mut c_void;
                        rax_8 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(r15_1, rbx_1, r14_1, r13_1);
                        rbp_1 = rax_8;
                        r12_1 = rdx_7;
                        
                        if rax_8 == 0
                        {
                            goto 'label_4b1cef;
                        }
                        
                        continue;
                    }
                }
                
                r15 = arg1;
                break;
            }
        }
        alloc::string::String::truncate::hafe089c60c3201e9(&var_b0);
    }
}
