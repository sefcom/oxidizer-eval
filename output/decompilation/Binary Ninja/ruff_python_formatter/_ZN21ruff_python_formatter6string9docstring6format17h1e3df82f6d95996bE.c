
  int64_t ruff_python_formatter::string::docstring::format::h1e3df82f6d95996b(int32_t* arg1, int64_t* arg2, int64_t* arg3)

{
    char* r12 = arg2[1];
    int64_t r15 = arg2[2];
    
    if (ruff_python_formatter::string::docstring::contains_unescaped_newline::h725af0d29cbc1dc9(
            r12, r15))
        /* tailcall */
        return _$LT$ruff_python_formatter..string..normalize..NormalizedString$u20$as$u20$ruff_formatter..Format$LT$ruff_python_formatter..context..PyFormatContext$GT$$GT$::fmt::h46325c2df5f950fe(arg1, arg2, arg3);
    
    int64_t rax_2 = *arg2;
    void var_98;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_98, 
        0xa, r12, r15);
    int64_t var_a8 = 0;
    int16_t var_68 = 1;
    int64_t var_c0 = 0;
    uint8_t rax_3 = arg2[4];
    uint32_t rbp = rax_3;
    uint8_t var_20e = rax_3 >> 1 & 1;
    uint8_t rax_4;
    char rdx_3;
    rax_4 = _$LT$ruff_python_ast..nodes..AnyStringFlags$u20$as$u20$ruff_python_ast..nodes..StringFlags$GT$::prefix::h570c712810ae8a23(rbp);
    uint8_t var_128 = rax_4;
    char var_127 = rdx_3;
    uint8_t* var_1e0 = &var_128;
    void* const var_1d8 = &data_97e180;
    uint8_t* var_1d0 = &var_20e;
    void* const var_1c8 = &data_97e1a0;
    int32_t result_1;
    _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::write_fmt::h7287e9dfefd137ea(&result_1, arg3, &var_1e0, 2);
    int32_t result = result_1;
    
    if (result != 4)
    {
        int32_t var_4c;
        arg1[5] = var_4c;
        int128_t var_5c;
        *(arg1 + 4) = var_5c;
        *arg1 = result;
    }
    else
    {
        char var_20c_1 = rbp;
        int32_t rax_5 = arg2[3];
        int64_t var_b8;
        int64_t rax_6 = var_b8;
        int64_t var_b0;
        int64_t rsi_4 = var_b0;
        bool cond:0_1 = var_c0 & 1;
        var_c0 = 0;
        
        if (!cond:0_1)
        {
            int64_t rdx_5;
            rax_6 = core::str::iter::SplitInternal$LT$P$GT$::next::h3fa9a8e3da590a31(&var_a8);
            rsi_4 = rdx_5;
        }
        
        if (!rax_6)
            rsi_4 = rax_6;
        
        int64_t rdi_7 = 1;
        
        if (rax_6)
            rdi_7 = rax_6;
        
        int64_t rax_7;
        int64_t rdx_6;
        rax_7 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hc1c5622f93930984(rdi_7, rsi_4);
        int64_t rax_8;
        uint64_t rdx_7;
        rax_8 =
            core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hd401112d4c765288(rax_7, rdx_6);
        uint32_t rax_9 = rax_3 & 1;
        char var_1fc_1 = rax_9;
        var_1e0 = 0;
        char* rax_11;
        uint64_t rdx_8;
        rax_11 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4((rax_9 ^ 1) * 5 + 0x22, 
            &var_1e0);
        
        if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf48f8dbcb851e47f(rax_8, 
            rdx_7, rax_11, rdx_8))
        {
            var_1e0 = 0;
            (*(arg3[1] + 0x18))(*arg3, &var_1e0);
        }
        
        char rbp_2 = var_20c_1;
        
        if (!rdx_6)
        {
            label_722894:
            core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(rsi_4 >> 0x20);
            void* rax_22;
            int64_t rdx_14;
            rax_22 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rsi_4, r12, r15);
            
            if (!rax_22)
            {
                core::str::slice_error_fail::h1a2885084e28d077(r12, r15, rsi_4, r15);
                /* no return */
            }
            
            if (core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9d68bd4861bf742(rax_22, rdx_14))
            {
                var_1e0 = 0x201;
                int64_t rdx_15 = (*(arg3[1] + 0x18))(*arg3, &var_1e0);
                int32_t rbp_3 = 0;
                core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(0);
                _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hb52b76b0821f95e3(&var_1e0, &var_c0, rdx_15);
                core::iter::traits::iterator::Iterator::reduce::h0542e7524a210e1e(&var_128, 
                    &var_1e0);
                int128_t zmm0_3 = {0};
                int32_t var_120;
                
                if (var_120 != 5)
                    rbp_3 = var_120;
                
                int128_t var_118;
                
                if (var_120 != 5)
                    zmm0_3 = var_118;
                int64_t* var_158_1 = arg3;
                var_1e0 = nullptr;
                int64_t var_1d8_1 = 8;
                var_1d0 = {0};
                int32_t var_150_1 = rax_5 + rsi_4 + 1;
                int32_t var_170_1 = rbp_3;
                int32_t var_11c;
                int32_t var_16c_1 = var_11c;
                int128_t var_168_1 = zmm0_3;
                bool var_14c_1 = rax_2 == -0x8000000000000000;
                char var_14b_1 = var_1fc_1;
                int64_t var_1c0_1 = -0x7ffffffffffffffd;
                int128_t var_70;
                int128_t var_d8_1 = var_70;
                int128_t var_80;
                int128_t var_e8_1 = var_80;
                int128_t var_90;
                int128_t var_f8_1 = var_90;
                int128_t var_108_1 = r15;
                int128_t var_118_1 = var_b0;
                var_128 = var_c0;
                int32_t var_48;
                ruff_python_formatter::string::docstring::DocstringLinePrinter::add_iter::h462e49ccaf522bd7(&var_48, &var_1e0, &var_128);
                int32_t rax_27 = var_48;
                
                if (rax_27 != 4)
                {
                    int32_t var_34;
                    arg1[5] = var_34;
                    int128_t var_44;
                    *(arg1 + 4) = var_44;
                    *arg1 = rax_27;
                    return core::ptr::drop_in_place$LT$ruff_python_formatter..string..docstring..DocstringLinePrinter$GT$::h2092d66feb0950f8(&var_1e0);
                }
                
                core::ptr::drop_in_place$LT$ruff_python_formatter..string..docstring..DocstringLinePrinter$GT$::h2092d66feb0950f8(&var_1e0);
                int64_t rax_28;
                int64_t rdx_18;
                rax_28 =
                    core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h53bd7ada7db36fa7(r12, r15);
                
                if (ruff_python_formatter::string::docstring::needs_chaperone_space::h0757348e78c1bc42(var_20c_1, rax_28, rdx_18, *((*(arg3[1] + 0x30))(*arg3) + 0x3a)))
                {
                    var_1e0 = 0;
                    (*(arg3[1] + 0x18))(*arg3, &var_1e0);
                }
                
                var_1e0 = &var_20e;
                void* const var_1d8_2 = &data_97e1a0;
                return _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::write_fmt::h7287e9dfefd137ea(arg1, arg3, &var_1e0, 1);
            }
            
            int64_t rbx_2;
            rbx_2 = !rdx_6;
            
            if (r15 & rbx_2 ||
                ruff_python_formatter::string::docstring::needs_chaperone_space::h0757348e78c1bc42(
                rbp_2, rax_7, rdx_6, *((*(arg3[1] + 0x30))(*arg3) + 0x3a)))
            {
                var_1e0 = 0;
                (*(arg3[1] + 0x18))(*arg3, &var_1e0);
            }
            
            _$LT$ruff_python_formatter..string..StringQuotes$u20$as$u20$ruff_formatter..Format$LT$ruff_python_formatter..context..PyFormatContext$GT$$GT$::fmt::h1952ff085d74be3b(&var_1e0, &var_20e, arg3);
            result = var_1e0;
            
            if (result != 4)
                goto label_722b33;
            
            *arg1 = 4;
        }
        else
        {
            char r13_1 = rdx_6 >> 0x20;
            core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(r13_1);
            core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(rdx_7 >> 0x20);
            core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(r13_1);
            int32_t rax_18 = rdx_6;
            int32_t rax_19 = rax_18 + rax_5;
            
            if (rax_18 + rax_5 < rax_18)
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            int32_t rcx_6 = rdx_6 - rdx_7 + rax_5;
            
            if (rcx_6 > rax_19)
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            rbp_2 = var_20c_1;
            
            if (rax_2 == -0x8000000000000000)
            {
                var_128 = rcx_6;
                int32_t var_124_1 = rax_19;
                _$LT$ruff_formatter..builders..SourceTextSliceBuilder$u20$as$u20$ruff_formatter..Format$LT$Context$GT$$GT$::fmt::hc7c589b7f57e065d(&var_1e0, &var_128, arg3);
                result = var_1e0;
                
                if (result == 4)
                    goto label_722894;
                
                goto label_722b33;
            }
            
            _$LT$ruff_formatter..builders..Text$u20$as$u20$ruff_formatter..Format$LT$Context$GT$$GT$::fmt::hbf64ef42de3b23a6(&var_1e0, rax_8, rdx_7, *arg3, arg3[1]);
            result = var_1e0;
            
            if (result == 4)
                goto label_722894;
            
            label_722b33:
            arg1[5] = *var_1d0[4];
            *(arg1 + 4) = *var_1e0[4];
            *arg1 = result;
        }
    }
    
    return result;
}
