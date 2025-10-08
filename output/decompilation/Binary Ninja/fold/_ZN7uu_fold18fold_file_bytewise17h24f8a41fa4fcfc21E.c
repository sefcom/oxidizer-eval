
  void* const uu_fold::fold_file_bytewise::h24f8a41fa4fcfc21(int64_t* arg1, char arg2, uint64_t arg3)

{
    uint64_t r14;
    uint64_t var_18 = r14;
    int64_t* r15 = arg1;
    int64_t var_b0 = 0;
    char* var_a8 = 1;
    uint64_t var_a0 = 0;
    
    while (true)
    {
        char rax_1;
        int64_t rdx;
        rax_1 = std::io::append_to_string::hb4ee5df90b2f96d8(&var_b0, r15);
        void* const result_1;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h71ea541673afeda3(&result_1, rax_1, rdx);
        void* const result = result_1;
        uint64_t var_90;
        
        if (result || !var_90)
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd6746ad766958504(var_b0, 
                var_a8);
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$dyn$u20$std..io..Read$GT$$GT$::h19a3fdc7885eb034(*r15, r15[1]);
            return result;
        }
        
        void*** var_88;
        int128_t var_80;
        
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3760bbb718d9d081(var_a8, var_a0, "\nfailed to read line", 1))
        {
            result_1 = &data_4e6b90;
            var_90 = 1;
            var_88 = 8;
            var_80 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&result_1);
        }
        else if (var_a0)
        {
            uint64_t rbx_1 = arg3;
            
            if (var_a0 < rbx_1)
                rbx_1 = var_a0;
            
            char* r14_1 = var_a8;
            uint64_t r13_1 = var_a0;
            void* rax_3;
            uint64_t rdx_2;
            rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(0, rbx_1, r14_1, r13_1);
            int64_t r15_1;
            
            if (!rax_3)
            {
                r15_1 = 0;
                label_45bcd9:
                core::str::slice_error_fail::h1a2885084e28d077(r14_1, r13_1, r15_1, rbx_1);
                /* no return */
            }
            
            void* rbp_1 = rax_3;
            uint64_t r12_1 = rdx_2;
            r15_1 = 0;
            
            while (true)
            {
                if (!arg2)
                    r14 = var_a0;
                else
                {
                    r14 = var_a0;
                    
                    if (rbx_1 < r14)
                    {
                        char rax_4;
                        uint64_t rdx_3;
                        rax_4 = core::str::_$LT$impl$u20$str$GT$::rfind::h6bd4e6b6c143b2e7(rbp_1, 
                            r12_1);
                        
                        if (rax_4 & 1)
                        {
                            result_1 = nullptr;
                            var_90 = rdx_3;
                            var_88 = 0;
                            void* rax_5;
                            uint64_t rdx_5;
                            rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeInclusive$LT$usize$GT$$GT$::index::hc52fb59378bf613f(&result_1, rbp_1, r12_1);
                            rbp_1 = rax_5;
                            r12_1 = rdx_5;
                        }
                    }
                }
                
                void* var_40 = rbp_1;
                uint64_t var_38_1 = r12_1;
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3760bbb718d9d081(rbp_1, r12_1, "\nfailed to read line", 1))
                {
                    r15_1 += r12_1;
                    uint64_t rbx_3 = r14 - r15_1;
                    void** var_50;
                    
                    if (r14 <= r15_1)
                    {
                        var_50 = &var_40;
                        int64_t (* var_48_2)(int64_t* arg1, int64_t arg2) =
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
                        int64_t (* var_48_1)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h16b66ac19e1327b7;
                        result_1 = &data_4e6ba0;
                        var_90 = 2;
                        *var_80[8] = 0;
                        var_88 = &var_50;
                        var_80 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&result_1);
                        
                        if (rbx_3 >= arg3)
                            rbx_3 = arg3;
                        
                        rbx_1 = rbx_3 + r15_1;
                        r14_1 = var_a8;
                        r13_1 = var_a0;
                        void* rax_8;
                        uint64_t rdx_7;
                        rax_8 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r15_1, rbx_1, r14_1, r13_1);
                        rbp_1 = rax_8;
                        r12_1 = rdx_7;
                        
                        if (!rax_8)
                            goto label_45bcd9;
                        
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
