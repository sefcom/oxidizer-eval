
  void* const uu_fold::fold_file::h6b5dfb4206dbd8ef(int64_t* arg1, char arg2, int64_t arg3, uint64_t arg4 @ r13)

{
    uint64_t var_20 = arg4;
    int64_t var_70 = 0;
    int64_t var_68 = 1;
    int64_t var_60 = 0;
    int64_t var_e0 = 0;
    char* var_d8 = 1;
    uint64_t var_d0 = 0;
    char r15 = 0;
    uint64_t rbx = 0;
    
    while (true)
    {
        char rax_1;
        int64_t rdx;
        rax_1 = std::io::append_to_string::hb4ee5df90b2f96d8(&var_70, arg1);
        void* const result_1;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h71ea541673afeda3(&result_1, rax_1, rdx);
        void* const result = result_1;
        int64_t var_a0;
        
        if (result || !var_a0)
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd6746ad766958504(var_e0, 
                var_d8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd6746ad766958504(var_70, 
                var_68);
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$dyn$u20$std..io..Read$GT$$GT$::h19a3fdc7885eb034(*arg1, arg1[1]);
            return result;
        }
        
        int64_t var_40 = var_68;
        int64_t var_38_1 = var_60 + var_68;
        
        while (true)
        {
            char rax_3;
            int32_t rdx_1;
            rax_3 = core::str::validations::next_code_point::h22c36519b8a1e543(&var_40, rbx);
            int32_t rbp_1 = rdx_1;
            
            if (!(rax_3 & 1))
                rbp_1 = 0x110000;
            
            int64_t* var_c8;
            int64_t* var_b8;
            
            if (rbp_1 == 0xa)
            {
                int64_t* rax_9;
                int64_t rdx_7;
                rax_9 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(var_d0, var_d8, var_d0);
                
                if (!rax_9)
                {
                    core::str::slice_error_fail::h1a2885084e28d077(var_d8, var_d0, 0, var_d0);
                    /* no return */
                }
                
                var_c8 = rax_9;
                int64_t var_c0_3 = rdx_7;
                var_b8 = &var_c8;
                int64_t (* var_b0_3)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h16b66ac19e1327b7;
                result_1 = &data_4e6ba0;
                var_a0 = 2;
                int64_t var_88_3 = 0;
                int64_t** var_98_3 = &var_b8;
                int64_t var_90_3 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&result_1);
                alloc::string::String::replace_range::h6440f5464c1e7598(&var_e0, var_d0);
                r15 = 0;
                rbx = var_d0;
                
                if (!var_d0)
                    break;
            }
            else
            {
                if (rbp_1 != 0x110000)
                {
                    if (rbx < arg3)
                        goto label_45bf78;
                    
                    uint64_t r12_2;
                    
                    if (!(r15 & 1))
                    {
                        r12_2 = var_d0;
                        arg4 = r12_2;
                    }
                    else
                    {
                        arg4 += 1;
                        r12_2 = var_d0;
                    }
                    
                    char* r14_1 = var_d8;
                    int64_t* rax_4;
                    int64_t rdx_3;
                    rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(arg4, r14_1, r12_2);
                    
                    if (rax_4)
                    {
                        var_c8 = rax_4;
                        int64_t var_c0_1 = rdx_3;
                        var_b8 = &var_c8;
                        int64_t (* var_b0_1)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h16b66ac19e1327b7;
                        result_1 = &data_4e6ba0;
                        var_a0 = 2;
                        int64_t var_88_1 = 0;
                        int64_t** var_98_1 = &var_b8;
                        int64_t var_90_1 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&result_1);
                        alloc::string::String::replace_range::h6440f5464c1e7598(&var_e0, arg4);
                        rbx = var_d0;
                        r15 = 0;
                        label_45bf78:
                        
                        if (rbp_1 == 8)
                        {
                            uint64_t temp0_1 = rbx;
                            rbx -= 1;
                            
                            if (temp0_1 < 1)
                                rbx = 0;
                            
                            alloc::string::String::push::h0ede46164189e411(&var_e0, rbp_1);
                            continue;
                        }
                        else if (rbp_1 == 9)
                        {
                            rbx = (rbx & 0xfffffffffffffff8) + 8;
                            r12_2 = var_d0;
                            
                            if (rbx <= arg3)
                                goto label_45c0a0;
                            
                            if (!r12_2)
                            {
                                r12_2 = 0;
                                label_45c0a0:
                                arg4 = r12_2;
                                r15 = arg2;
                                alloc::string::String::push::h0ede46164189e411(&var_e0, rbp_1);
                                continue;
                            }
                            else
                            {
                                arg4 += 1;
                                
                                if (!(r15 & 1))
                                    arg4 = r12_2;
                                
                                r14_1 = var_d8;
                                int64_t* rax_5;
                                int64_t rdx_5;
                                rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(arg4, r14_1, r12_2);
                                
                                if (rax_5)
                                {
                                    var_c8 = rax_5;
                                    int64_t var_c0_2 = rdx_5;
                                    var_b8 = &var_c8;
                                    int64_t (* var_b0_2)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h16b66ac19e1327b7;
                                    result_1 = &data_4e6ba0;
                                    var_a0 = 2;
                                    int64_t var_88_2 = 0;
                                    int64_t** var_98_2 = &var_b8;
                                    int64_t var_90_2 = 1;
                                    std::io::stdio::_print::h5e446ff973c02de6(&result_1);
                                    alloc::string::String::replace_range::h6440f5464c1e7598(
                                        &var_e0, arg4);
                                    r12_2 = var_d0;
                                    goto label_45c0a0;
                                }
                            }
                        }
                        else
                        {
                            if (rbp_1 == 0xd)
                                rbx = 0;
                            else if (!arg2)
                                rbx += 1;
                            else if (rbp_1 <= 0x20 && TEST_BITQ(0x100003800, rbp_1))
                            {
                                label_45c081:
                                arg4 = var_d0;
                                rbx += 1;
                                r15 = 1;
                            }
                            else if (rbp_1 < 0x80)
                                rbx += 1;
                            else
                            {
                                if (core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(rbp_1))
                                    goto label_45c081;
                                
                                rbx += 1;
                            }
                            
                            alloc::string::String::push::h0ede46164189e411(&var_e0, rbp_1);
                            continue;
                        }
                    }
                    
                    core::str::slice_error_fail::h1a2885084e28d077(r14_1, r12_2, 0, arg4);
                    /* no return */
                }
                
                if (!var_d0)
                    break;
            }
            var_c8 = &var_e0;
            int64_t (* var_c0_4)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            result_1 = &data_417f60;
            var_a0 = 1;
            int64_t var_88_4 = 0;
            int64_t** var_98_4 = &var_c8;
            int64_t var_90_4 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&result_1);
            alloc::string::String::truncate::h4c9243e558c5f483(&var_e0);
            break;
        }
        
        alloc::string::String::truncate::h4c9243e558c5f483(&var_70);
    }
}
