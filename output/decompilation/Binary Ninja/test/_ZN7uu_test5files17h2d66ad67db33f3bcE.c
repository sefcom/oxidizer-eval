
  int64_t uu_test::files::h2d66ad67db33f3bc(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, char* arg6, int64_t arg7)

{
    int32_t var_258;
    std::fs::metadata::h59562c409af00ed3(&var_258, arg2);
    
    if (var_258 != 2)
    {
        int128_t var_248;
        int128_t var_188_1 = var_248;
        int128_t var_198 = var_258;
        int128_t var_228;
        int128_t var_168_1 = var_228;
        int128_t var_218;
        int128_t var_158_1 = var_218;
        int128_t var_208;
        int128_t var_148_1 = var_208;
        int128_t var_1f8;
        int128_t var_138_1 = var_1f8;
        int128_t var_1e8;
        int128_t var_128_1 = var_1e8;
        int128_t var_1d8;
        int128_t var_118_1 = var_1d8;
        int128_t var_1c8;
        int128_t var_108_1 = var_1c8;
        int128_t var_1b8;
        int128_t var_f8_1 = var_1b8;
        int64_t var_238;
        int64_t var_178_1 = var_238;
        int64_t var_230;
        int64_t var_170_1 = var_230;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h7bbe7bfe3f1c8d8f(&var_258);
        std::fs::metadata::h59562c409af00ed3(&var_258, arg4);
        
        if (var_258 != 2)
        {
            int128_t var_d8_1 = var_248;
            int128_t var_e8 = var_258;
            int128_t var_b8_1 = var_228;
            int128_t var_a8_1 = var_218;
            int128_t var_98_1 = var_208;
            int128_t var_88_1 = var_1f8;
            int128_t var_78_1 = var_1e8;
            int128_t var_68_1 = var_1d8;
            int128_t var_58_1 = var_1c8;
            int128_t var_48_1 = var_1b8;
            int64_t var_c8_1 = var_238;
            int64_t var_c0_1 = var_230;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h7bbe7bfe3f1c8d8f(&var_258);
            std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_258, arg6, arg7);
            int64_t result;
            
            if (!var_258)
            {
                uint64_t rsi_3 = var_248;
                int64_t var_250;
                result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_250, rsi_3, "-ef-nt-ot", 3);
                
                if (!result)
                {
                    bool rcx;
                    
                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_250, rsi_3, "-nt-ot", 3))
                    {
                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(var_250, rsi_3, "-ot", 3))
                            goto label_4ad29b;
                        
                        std::fs::Metadata::modified::h6f16921acf618ae6(&var_258, &var_198);
                        int64_t rax_5;
                        int32_t rdx_4;
                        rax_5 =
                            core::result::Result$LT$T$C$E$GT$::unwrap::ha257e6c7d5c79a00(&var_258);
                        std::fs::Metadata::modified::h6f16921acf618ae6(&var_258, &var_e8);
                        int32_t rdx_5;
                        result =
                            core::result::Result$LT$T$C$E$GT$::unwrap::ha257e6c7d5c79a00(&var_258);
                        rcx = rax_5 < result;
                        
                        if (rax_5 == result)
                            rcx = rdx_4 < rdx_5;
                        
                        arg1[1] = rcx;
                        *arg1 = 7;
                    }
                    else
                    {
                        std::fs::Metadata::modified::h6f16921acf618ae6(&var_258, &var_198);
                        int64_t rax_3;
                        int32_t rdx_2;
                        rax_3 =
                            core::result::Result$LT$T$C$E$GT$::unwrap::ha257e6c7d5c79a00(&var_258);
                        std::fs::Metadata::modified::h6f16921acf618ae6(&var_258, &var_e8);
                        int32_t rdx_3;
                        result =
                            core::result::Result$LT$T$C$E$GT$::unwrap::ha257e6c7d5c79a00(&var_258);
                        rcx = rax_3 != result;
                        
                        if (rax_3 < result)
                            rcx = true;
                        
                        bool rsi_9 = rdx_2 != rdx_3;
                        
                        if (rdx_2 < rdx_3)
                            rsi_9 = true;
                        
                        if (rcx)
                            rsi_9 = rcx;
                        
                        arg1[1] = rsi_9 == 1;
                        *arg1 = 7;
                    }
                }
                else
                {
                    arg1[1] = !0;
                    *arg1 = 7;
                }
            }
            else
            {
                label_4ad29b:
                var_258 = 1;
                char* var_250_1 = arg6;
                var_248 = arg7;
                *var_248[8] = 1;
                result =
                    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(
                    &arg1[1], &var_258);
                *arg1 = 4;
            }
            
            return result;
        }
    }
    
    arg1[1] = 0;
    *arg1 = 7;
    return core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h7bbe7bfe3f1c8d8f(&var_258);
}
