
  fn uu_fold::fold_file::hcf3a60b599ccdb00(arg1: *mut i64, arg2: i32, arg3: i64, arg4: *mut c_void @ r13) -> *mut c_void

{
    let var_20: *mut c_void = arg4;
    let mut var_60: i64 = 0;
    let var_58: i64 = 1;
    let var_50: i64 = 0;
    let mut var_e0: i64 = 0;
    let var_d8: *mut i8 = 1;
    let var_d0: *mut c_void = nullptr;
    let var_64: i8 = arg2;
    let mut rbx: u64 = 0;
    let mut var_78: *mut *mut c_void = &data_51a9b8;
    let mut r15: *mut c_void = nullptr;
    
    loop
    {
        let mut rax_1: i64;
        let mut rdx: *mut *mut c_void;
        rax_1 = std::io::append_to_string::h03d08dbf90a74f4a(&var_60, arg1);
        let mut result_1: *mut c_void;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd92c105567eaf153(&result_1, rax_1, rdx);
        let result: *mut c_void = result_1;
        
        if result != 0
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he0f0171ff9caf1b3(&var_e0);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he0f0171ff9caf1b3(&var_60);
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$dyn$u20$std..io..Read$GT$$GT$::hd2a31b9451a7f555(*arg1, arg1[1]);
            return result;
        }
        
        let mut var_a0: i64;
        
        if var_a0 == 0
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he0f0171ff9caf1b3(&var_e0);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he0f0171ff9caf1b3(&var_60);
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$dyn$u20$std..io..Read$GT$$GT$::hd2a31b9451a7f555(*arg1, arg1[1]);
            return result;
        }
        
        let mut var_40: i64 = var_58;
        let var_38_1: i64 = var_50 + var_58;
        
        loop
        {
            let mut rax_3: i32;
            let mut rdx_1: i32;
            rax_3 = core::str::validations::next_code_point::haf22137f2b8c1872(&var_40, rbx);
            let mut rbp_2: i32 = rdx_1;
            
            if rax_3 == 0
            {
                rbp_2 = 0x110000;
            }
            
            let mut var_c8: *mut i8;
            let mut var_b8: *mut *mut i8;
            
            if rbp_2 == 0xa
            {
                var_c8 = var_d8;
                let var_c0_3: *mut c_void = var_d0;
                var_b8 = &var_c8;
                let var_b0_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha398d9e18c3ebe29;
                result_1 = &data_51a968;
                var_a0 = 2;
                let var_88_3: i64 = 0;
                let var_98_3: *mut *mut *mut i8 = &var_b8;
                let var_90_3: i64 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&result_1);
                alloc::string::String::replace_range::h5f9cb15ffada2cb3(&var_e0, var_d0, 1, 0);
                rbx = 0;
                r15 = var_d0;
                
                if var_d0 == 0
                {
                    break;
                }
            }
            else if rbp_2 != 0x110000
            {
                if r15 >= arg3
                {
                    let mut r12_1: *mut c_void = arg4.byte_offset(1);
                    
                    if rbx == 0
                    {
                        r12_1 = var_d0;
                    }
                    
                    if r12_1 != 0
                    {
                        if r12_1 >= var_d0
                        {
                            if r12_1 != var_d0
                            {
                                core::str::slice_error_fail::h5dbb61534404fe7e(var_d8, var_d0, 
                                    nullptr, r12_1);
                                /* no return */
                            }
                        }
                        else if *var_d8.byte_offset(r12_1) <= 0xbf
                        {
                            core::str::slice_error_fail::h5dbb61534404fe7e(var_d8, var_d0, nullptr, 
                                r12_1);
                            /* no return */
                        }
                    }
                    
                    var_c8 = var_d8;
                    let var_c0_1: *mut c_void = r12_1;
                    var_b8 = &var_c8;
                    let var_b0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha398d9e18c3ebe29;
                    result_1 = &data_51a968;
                    var_a0 = 2;
                    let var_88_1: i64 = 0;
                    let var_98_1: *mut *mut *mut i8 = &var_b8;
                    let var_90_1: i64 = 1;
                    std::io::stdio::_print::he918bceb0c89db46(&result_1);
                    alloc::string::String::replace_range::h5f9cb15ffada2cb3(&var_e0, r12_1, 1, 0);
                    r15 = var_d0;
                    rbx = 0;
                }
                
                if rbp_2 == 8
                {
                    let temp0_1: *mut c_void = r15;
                    r15 -= 1;
                    
                    if temp0_1 < 1
                    {
                        r15 = nullptr;
                    }
                    
                    alloc::string::String::push::h859ae11851fd8b8e(&var_e0, rbp_2);
                    continue;
                }
                else if rbp_2 == 9
                {
                    r15 = (r15 & 0xfffffffffffffff8).byte_offset(8);
                    let mut rsi_3: *mut c_void = var_d0;
                    
                    if r15 > arg3
                    {
                        if rsi_3 == 0
                        {
                            rsi_3 = nullptr;
                        }
                        else
                        {
                            let mut r13: *mut c_void = arg4.byte_offset(1);
                            
                            if rbx == 0
                            {
                                r13 = rsi_3;
                            }
                            
                            if r13 != 0
                            {
                                if r13 >= rsi_3
                                {
                                    if r13 != rsi_3
                                    {
                                        'label_4b220f:
                                        var_78 = &data_51a9d0;
                                        core::str::slice_error_fail::h5dbb61534404fe7e(var_d8, 
                                            rsi_3, nullptr, r13);
                                        /* no return */
                                    }
                                }
                                else if *var_d8.byte_offset(r13) <= 0xbf
                                {
                                    goto 'label_4b220f;
                                }
                            }
                            
                            var_c8 = var_d8;
                            let var_c0_2: *mut c_void = r13;
                            var_b8 = &var_c8;
                            let var_b0_2: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha398d9e18c3ebe29;
                            result_1 = &data_51a968;
                            var_a0 = 2;
                            let var_88_2: i64 = 0;
                            let var_98_2: *mut *mut *mut i8 = &var_b8;
                            let var_90_2: i64 = 1;
                            std::io::stdio::_print::he918bceb0c89db46(&result_1);
                            alloc::string::String::replace_range::h5f9cb15ffada2cb3(&var_e0, r13, 
                                1, 0);
                            rsi_3 = var_d0;
                        }
                    }
                    
                    arg4 = rsi_3;
                    rbx = arg2;
                    alloc::string::String::push::h859ae11851fd8b8e(&var_e0, rbp_2);
                    continue;
                }
                else
                {
                    if rbp_2 == 0xd
                    {
                        r15 = nullptr;
                    }
                    else if var_64 == 0
                    {
                        r15 += 1;
                    }
                    else if rbp_2 <= 0x20 && TEST_BITQ(0x100003800, rbp_2)
                    {
                        'label_4b1fe1:
                        arg4 = var_d0;
                        r15 += 1;
                        rbx = 1;
                    }
                    else if rbp_2 < 0x80
                    {
                        r15 += 1;
                    }
                    else
                    {
                        if core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(
                            rbp_2) != 0
                        {
                            goto 'label_4b1fe1;
                        }
                        
                        r15 += 1;
                    }
                    
                    alloc::string::String::push::h859ae11851fd8b8e(&var_e0, rbp_2);
                    continue;
                }
            }
            else if var_d0 == 0
            {
                break;
            }
            var_c8 = &var_e0;
            let var_c0_4: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            result_1 = &data_414600;
            var_a0 = 1;
            let var_88_4: i64 = 0;
            let var_98_4: *mut *mut i8 = &var_c8;
            let var_90_4: i64 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&result_1);
            alloc::string::String::truncate::hafe089c60c3201e9(&var_e0);
            break;
        }
        
        alloc::string::String::truncate::hafe089c60c3201e9(&var_60);
    }
}
