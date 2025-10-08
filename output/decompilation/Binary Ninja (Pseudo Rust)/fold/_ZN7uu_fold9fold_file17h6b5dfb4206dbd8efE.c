
  fn uu_fold::fold_file::h6b5dfb4206dbd8ef(arg1: *mut i64, arg2: i8, arg3: i64, arg4: u64 @ r13) -> *mut c_void

{
    let var_20: u64 = arg4;
    let mut var_70: i64 = 0;
    let var_68: i64 = 1;
    let var_60: i64 = 0;
    let mut var_e0: i64 = 0;
    let var_d8: *mut i8 = 1;
    let var_d0: u64 = 0;
    let mut r15: i8 = 0;
    let mut rbx: u64 = 0;
    
    loop
    {
        let mut rax_1: i8;
        let mut rdx: i64;
        rax_1 = std::io::append_to_string::hb4ee5df90b2f96d8(&var_70, arg1);
        let mut result_1: *mut c_void;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h71ea541673afeda3(&result_1, rax_1, rdx);
        let result: *mut c_void = result_1;
        let mut var_a0: i64;
        
        if result != 0 || var_a0 == 0
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd6746ad766958504(var_e0, 
                var_d8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd6746ad766958504(var_70, 
                var_68);
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$dyn$u20$std..io..Read$GT$$GT$::h19a3fdc7885eb034(*arg1, arg1[1]);
            return result;
        }
        
        let mut var_40: i64 = var_68;
        let var_38_1: i64 = var_60 + var_68;
        
        loop
        {
            let mut rax_3: i8;
            let mut rdx_1: i32;
            rax_3 = core::str::validations::next_code_point::h22c36519b8a1e543(&var_40, rbx);
            let mut rbp_1: i32 = rdx_1;
            
            if (rax_3 & 1) == 0
            {
                rbp_1 = 0x110000;
            }
            
            let mut var_c8: *mut i64;
            let mut var_b8: *mut i64;
            
            if rbp_1 == 0xa
            {
                let mut rax_9: *mut i64;
                let mut rdx_7: i64;
                rax_9 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(var_d0, var_d8, var_d0);
                
                if rax_9 == 0
                {
                    core::str::slice_error_fail::h1a2885084e28d077(var_d8, var_d0, 0, var_d0);
                    /* no return */
                }
                
                var_c8 = rax_9;
                let var_c0_3: i64 = rdx_7;
                var_b8 = &var_c8;
                let var_b0_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h16b66ac19e1327b7;
                result_1 = &data_4e6ba0;
                var_a0 = 2;
                let var_88_3: i64 = 0;
                let var_98_3: *mut *mut i64 = &var_b8;
                let var_90_3: i64 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&result_1);
                alloc::string::String::replace_range::h6440f5464c1e7598(&var_e0, var_d0);
                r15 = 0;
                rbx = var_d0;
                
                if var_d0 == 0
                {
                    break;
                }
            }
            else
            {
                if rbp_1 != 0x110000
                {
                    if rbx < arg3
                    {
                        goto 'label_45bf78;
                    }
                    
                    let mut r12_2: u64;
                    
                    if (r15 & 1) == 0
                    {
                        r12_2 = var_d0;
                        arg4 = r12_2;
                    }
                    else
                    {
                        arg4 += 1;
                        r12_2 = var_d0;
                    }
                    
                    let mut r14_1: *mut i8 = var_d8;
                    let mut rax_4: *mut i64;
                    let mut rdx_3: i64;
                    rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(arg4, r14_1, r12_2);
                    
                    if rax_4 != 0
                    {
                        var_c8 = rax_4;
                        let var_c0_1: i64 = rdx_3;
                        var_b8 = &var_c8;
                        let var_b0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h16b66ac19e1327b7;
                        result_1 = &data_4e6ba0;
                        var_a0 = 2;
                        let var_88_1: i64 = 0;
                        let var_98_1: *mut *mut i64 = &var_b8;
                        let var_90_1: i64 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&result_1);
                        alloc::string::String::replace_range::h6440f5464c1e7598(&var_e0, arg4);
                        rbx = var_d0;
                        r15 = 0;
                        'label_45bf78:
                        
                        if rbp_1 == 8
                        {
                            let temp0_1: u64 = rbx;
                            rbx -= 1;
                            
                            if temp0_1 < 1
                            {
                                rbx = 0;
                            }
                            
                            alloc::string::String::push::h0ede46164189e411(&var_e0, rbp_1);
                            continue;
                        }
                        else if rbp_1 == 9
                        {
                            rbx = (rbx & 0xfffffffffffffff8) + 8;
                            r12_2 = var_d0;
                            
                            if rbx <= arg3
                            {
                                goto 'label_45c0a0;
                            }
                            
                            if r12_2 == 0
                            {
                                r12_2 = 0;
                                'label_45c0a0:
                                arg4 = r12_2;
                                r15 = arg2;
                                alloc::string::String::push::h0ede46164189e411(&var_e0, rbp_1);
                                continue;
                            }
                            else
                            {
                                arg4 += 1;
                                
                                if (r15 & 1) == 0
                                {
                                    arg4 = r12_2;
                                }
                                
                                r14_1 = var_d8;
                                let mut rax_5: *mut i64;
                                let mut rdx_5: i64;
                                rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(arg4, r14_1, r12_2);
                                
                                if rax_5 != 0
                                {
                                    var_c8 = rax_5;
                                    let var_c0_2: i64 = rdx_5;
                                    var_b8 = &var_c8;
                                    let var_b0_2: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h16b66ac19e1327b7;
                                    result_1 = &data_4e6ba0;
                                    var_a0 = 2;
                                    let var_88_2: i64 = 0;
                                    let var_98_2: *mut *mut i64 = &var_b8;
                                    let var_90_2: i64 = 1;
                                    std::io::stdio::_print::h5e446ff973c02de6(&result_1);
                                    alloc::string::String::replace_range::h6440f5464c1e7598(
                                        &var_e0, arg4);
                                    r12_2 = var_d0;
                                    goto 'label_45c0a0;
                                }
                            }
                        }
                        else
                        {
                            if rbp_1 == 0xd
                            {
                                rbx = 0;
                            }
                            else if arg2 == 0
                            {
                                rbx += 1;
                            }
                            else if rbp_1 <= 0x20 && TEST_BITQ(0x100003800, rbp_1)
                            {
                                'label_45c081:
                                arg4 = var_d0;
                                rbx += 1;
                                r15 = 1;
                            }
                            else if rbp_1 < 0x80
                            {
                                rbx += 1;
                            }
                            else
                            {
                                if core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(rbp_1) != 0
                                {
                                    goto 'label_45c081;
                                }
                                
                                rbx += 1;
                            }
                            
                            alloc::string::String::push::h0ede46164189e411(&var_e0, rbp_1);
                            continue;
                        }
                    }
                    
                    core::str::slice_error_fail::h1a2885084e28d077(r14_1, r12_2, 0, arg4);
                    /* no return */
                }
                
                if var_d0 == 0
                {
                    break;
                }
            }
            var_c8 = &var_e0;
            let var_c0_4: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            result_1 = &data_417f60;
            var_a0 = 1;
            let var_88_4: i64 = 0;
            let var_98_4: *mut *mut i64 = &var_c8;
            let var_90_4: i64 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&result_1);
            alloc::string::String::truncate::h4c9243e558c5f483(&var_e0);
            break;
        }
        
        alloc::string::String::truncate::h4c9243e558c5f483(&var_70);
    }
}
