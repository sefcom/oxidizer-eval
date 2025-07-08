
  void* const uu_fold::fold_file_bytewise::h3af11a64241fe044(int64_t* arg1, char arg2, void* arg3)

{
    int64_t* r15 = arg1;
    int64_t var_b0 = 0;
    char* var_a8 = 1;
    uint64_t var_a0 = 0;
    
    while (true)
    {
        int64_t rax_1;
        void** rdx;
        rax_1 = std::io::append_to_string::h03d08dbf90a74f4a(&var_b0, r15);
        void* const result_1;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::ha34f519a25036496(&result_1, rax_1, rdx);
        void* const result = result_1;
        
        if (result)
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he0f0171ff9caf1b3(&var_b0);
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$dyn$u20$std..io..Read$GT$$GT$::hd2a31b9451a7f555(*r15, r15[1]);
            return result;
        }
        
        int64_t* var_90;
        
        if (!var_90)
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he0f0171ff9caf1b3(&var_b0);
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$dyn$u20$std..io..Read$GT$$GT$::hd2a31b9451a7f555(*r15, r15[1]);
            return result;
        }
        
        void*** var_88;
        int128_t var_80;
        
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5f12374e656de98e(var_a8, var_a0, "\n", 1))
        {
            result_1 = &data_51a958;
            var_90 = 1;
            var_88 = 8;
            var_80 = {0};
            std::io::stdio::_print::he918bceb0c89db46(&result_1);
        }
        else if (var_a0)
        {
            void* rbx_1 = arg3;
            
            if (var_a0 < rbx_1)
                rbx_1 = var_a0;
            
            char* r14_1 = var_a8;
            void* rax_3;
            void* rdx_2;
            rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(0, rbx_1, r14_1, var_a0);
            uint64_t r13_1;
            void* r15_1;
            
            if (!rax_3)
            {
                r15_1 = nullptr;
                r13_1 = var_a0;
                label_4b1cef:
                core::str::slice_error_fail::h5dbb61534404fe7e(r14_1, r13_1, r15_1, rbx_1);
                /* no return */
            }
            
            void* rbp_1 = rax_3;
            void* r12_1 = rdx_2;
            r15_1 = nullptr;
            
            while (true)
            {
                if (rbx_1 < var_a0 && arg2)
                {
                    int64_t rax_4;
                    int64_t* rdx_3;
                    rax_4 =
                        core::str::_$LT$impl$u20$str$GT$::rfind::h608a144437da32c7(rbp_1, r12_1);
                    
                    if (rax_4)
                    {
                        result_1 = nullptr;
                        var_90 = rdx_3;
                        var_88 = 0;
                        void* rax_5;
                        void* rdx_5;
                        rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeInclusive$LT$usize$GT$$GT$::index::h3fe2ad0e36dabac9(&result_1, rbp_1, r12_1);
                        rbp_1 = rax_5;
                        r12_1 = rdx_5;
                    }
                }
                
                void* var_60 = rbp_1;
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5f12374e656de98e(rbp_1, r12_1, "\n", 1))
                {
                    r15_1 += r12_1;
                    void* rbx_3 = var_a0 - r15_1;
                    void** var_40;
                    
                    if (var_a0 <= r15_1)
                    {
                        var_40 = &var_60;
                        int64_t (* var_38_2)(int64_t* arg1, int64_t arg2) =
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
                        int64_t (* var_38_1)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha398d9e18c3ebe29;
                        result_1 = &data_51a968;
                        var_90 = 2;
                        *var_80[8] = 0;
                        var_88 = &var_40;
                        var_80 = 1;
                        std::io::stdio::_print::he918bceb0c89db46(&result_1);
                        
                        if (rbx_3 >= arg3)
                            rbx_3 = arg3;
                        
                        rbx_1 = rbx_3 + r15_1;
                        r14_1 = var_a8;
                        r13_1 = var_a0;
                        void* rax_8;
                        void* rdx_7;
                        rax_8 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(r15_1, rbx_1, r14_1, r13_1);
                        rbp_1 = rax_8;
                        r12_1 = rdx_7;
                        
                        if (!rax_8)
                            goto label_4b1cef;
                        
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
