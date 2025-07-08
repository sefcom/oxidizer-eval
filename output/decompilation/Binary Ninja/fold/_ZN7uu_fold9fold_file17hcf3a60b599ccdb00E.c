
  void* const uu_fold::fold_file::hcf3a60b599ccdb00(int64_t* arg1, int32_t arg2, int64_t arg3, void* arg4 @ r13)

{
    void* var_20 = arg4;
    int64_t var_60 = 0;
    int64_t var_58 = 1;
    int64_t var_50 = 0;
    int64_t var_e0 = 0;
    char* var_d8 = 1;
    void* var_d0 = nullptr;
    char var_64 = arg2;
    uint64_t rbx = 0;
    void** const var_78 = &data_51a9b8;
    void* r15 = nullptr;
    
    while (true)
    {
        int64_t rax_1;
        void** rdx;
        rax_1 = std::io::append_to_string::h03d08dbf90a74f4a(&var_60, arg1);
        void* const result_1;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd92c105567eaf153(&result_1, rax_1, rdx);
        void* const result = result_1;
        
        if (result)
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he0f0171ff9caf1b3(&var_e0);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he0f0171ff9caf1b3(&var_60);
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$dyn$u20$std..io..Read$GT$$GT$::hd2a31b9451a7f555(*arg1, arg1[1]);
            return result;
        }
        
        int64_t var_a0;
        
        if (!var_a0)
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he0f0171ff9caf1b3(&var_e0);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he0f0171ff9caf1b3(&var_60);
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$dyn$u20$std..io..Read$GT$$GT$::hd2a31b9451a7f555(*arg1, arg1[1]);
            return result;
        }
        
        int64_t var_40 = var_58;
        int64_t var_38_1 = var_50 + var_58;
        
        while (true)
        {
            int32_t rax_3;
            int32_t rdx_1;
            rax_3 = core::str::validations::next_code_point::haf22137f2b8c1872(&var_40, rbx);
            int32_t rbp_2 = rdx_1;
            
            if (!rax_3)
                rbp_2 = 0x110000;
            
            char* var_c8;
            char** var_b8;
            
            if (rbp_2 == 0xa)
            {
                var_c8 = var_d8;
                void* var_c0_3 = var_d0;
                var_b8 = &var_c8;
                int64_t (* var_b0_3)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha398d9e18c3ebe29;
                result_1 = &data_51a968;
                var_a0 = 2;
                int64_t var_88_3 = 0;
                char*** var_98_3 = &var_b8;
                int64_t var_90_3 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&result_1);
                alloc::string::String::replace_range::h5f9cb15ffada2cb3(&var_e0, var_d0, 1, 0);
                rbx = 0;
                r15 = var_d0;
                
                if (!var_d0)
                    break;
            }
            else if (rbp_2 != 0x110000)
            {
                if (r15 >= arg3)
                {
                    void* r12_1 = arg4 + 1;
                    
                    if (!rbx)
                        r12_1 = var_d0;
                    
                    if (r12_1)
                    {
                        if (r12_1 >= var_d0)
                        {
                            if (r12_1 != var_d0)
                            {
                                core::str::slice_error_fail::h5dbb61534404fe7e(var_d8, var_d0, 
                                    nullptr, r12_1);
                                /* no return */
                            }
                        }
                        else if (*(var_d8 + r12_1) <= 0xbf)
                        {
                            core::str::slice_error_fail::h5dbb61534404fe7e(var_d8, var_d0, nullptr, 
                                r12_1);
                            /* no return */
                        }
                    }
                    
                    var_c8 = var_d8;
                    void* var_c0_1 = r12_1;
                    var_b8 = &var_c8;
                    int64_t (* var_b0_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha398d9e18c3ebe29;
                    result_1 = &data_51a968;
                    var_a0 = 2;
                    int64_t var_88_1 = 0;
                    char*** var_98_1 = &var_b8;
                    int64_t var_90_1 = 1;
                    std::io::stdio::_print::he918bceb0c89db46(&result_1);
                    alloc::string::String::replace_range::h5f9cb15ffada2cb3(&var_e0, r12_1, 1, 0);
                    r15 = var_d0;
                    rbx = 0;
                }
                
                if (rbp_2 == 8)
                {
                    void* temp0_1 = r15;
                    r15 -= 1;
                    
                    if (temp0_1 < 1)
                        r15 = nullptr;
                    
                    alloc::string::String::push::h859ae11851fd8b8e(&var_e0, rbp_2);
                    continue;
                }
                else if (rbp_2 == 9)
                {
                    r15 = (r15 & 0xfffffffffffffff8) + 8;
                    void* rsi_3 = var_d0;
                    
                    if (r15 > arg3)
                    {
                        if (!rsi_3)
                            rsi_3 = nullptr;
                        else
                        {
                            void* r13 = arg4 + 1;
                            
                            if (!rbx)
                                r13 = rsi_3;
                            
                            if (r13)
                            {
                                if (r13 >= rsi_3)
                                {
                                    if (r13 != rsi_3)
                                    {
                                        label_4b220f:
                                        var_78 = &data_51a9d0;
                                        core::str::slice_error_fail::h5dbb61534404fe7e(var_d8, 
                                            rsi_3, nullptr, r13);
                                        /* no return */
                                    }
                                }
                                else if (*(var_d8 + r13) <= 0xbf)
                                    goto label_4b220f;
                            }
                            
                            var_c8 = var_d8;
                            void* var_c0_2 = r13;
                            var_b8 = &var_c8;
                            int64_t (* var_b0_2)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha398d9e18c3ebe29;
                            result_1 = &data_51a968;
                            var_a0 = 2;
                            int64_t var_88_2 = 0;
                            char*** var_98_2 = &var_b8;
                            int64_t var_90_2 = 1;
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
                    if (rbp_2 == 0xd)
                        r15 = nullptr;
                    else if (!var_64)
                        r15 += 1;
                    else if (rbp_2 <= 0x20 && TEST_BITQ(0x100003800, rbp_2))
                    {
                        label_4b1fe1:
                        arg4 = var_d0;
                        r15 += 1;
                        rbx = 1;
                    }
                    else if (rbp_2 < 0x80)
                        r15 += 1;
                    else
                    {
                        if (core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(
                                rbp_2))
                            goto label_4b1fe1;
                        
                        r15 += 1;
                    }
                    
                    alloc::string::String::push::h859ae11851fd8b8e(&var_e0, rbp_2);
                    continue;
                }
            }
            else if (!var_d0)
                break;
            var_c8 = &var_e0;
            int64_t (* var_c0_4)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            result_1 = &data_414600;
            var_a0 = 1;
            int64_t var_88_4 = 0;
            char** var_98_4 = &var_c8;
            int64_t var_90_4 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&result_1);
            alloc::string::String::truncate::hafe089c60c3201e9(&var_e0);
            break;
        }
        
        alloc::string::String::truncate::hafe089c60c3201e9(&var_60);
    }
}
