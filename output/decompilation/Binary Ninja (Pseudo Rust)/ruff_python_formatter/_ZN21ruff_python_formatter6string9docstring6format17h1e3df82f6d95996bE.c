
  fn ruff_python_formatter::string::docstring::format::h1e3df82f6d95996b(arg1: *mut i32, arg2: *mut i64, arg3: *mut i64) -> i64

{
    let r12: *mut i8 = arg2[1];
    let r15: i64 = arg2[2];
    
    if ruff_python_formatter::string::docstring::contains_unescaped_newline::h725af0d29cbc1dc9(r12, 
        r15) != 0
    {
        /* tailcall */
        return _$LT$ruff_python_formatter..string..normalize..NormalizedString$u20$as$u20$ruff_formatter..Format$LT$ruff_python_formatter..context..PyFormatContext$GT$$GT$::fmt::h46325c2df5f950fe(arg1, arg2, arg3);
    }
    
    let rax_2: i64 = *arg2;
    let mut var_98: ();
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_98, 
        0xa, r12, r15);
    let mut var_a8: i64 = 0;
    let var_68: i16 = 1;
    let mut var_c0: i64 = 0;
    let rax_3: u8 = arg2[4];
    let rbp: u32 = rax_3;
    let mut var_20e: u8 = rax_3 >> 1 & 1;
    let mut rax_4: u8;
    let mut rdx_3: i8;
    rax_4 = _$LT$ruff_python_ast..nodes..AnyStringFlags$u20$as$u20$ruff_python_ast..nodes..StringFlags$GT$::prefix::h570c712810ae8a23(rbp);
    let mut var_128: u8 = rax_4;
    let var_127: i8 = rdx_3;
    let mut var_1e0: *mut u8 = &var_128;
    let var_1d8: *mut c_void = &data_97e180;
    let mut var_1d0: *mut u8 = &var_20e;
    let var_1c8: *mut c_void = &data_97e1a0;
    let mut result_1: i32;
    _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::write_fmt::h7287e9dfefd137ea(&result_1, arg3, &var_1e0, 2);
    let mut result: i32 = result_1;
    
    if result != 4
    {
        let var_4c: i32;
        arg1[5] = var_4c;
        let var_5c: i128;
        *arg1.byte_offset(4) = var_5c;
        *arg1 = result;
    }
    else
    {
        let var_20c_1: i8 = rbp;
        let rax_5: i32 = arg2[3];
        let var_b8: i64;
        let mut rax_6: i64 = var_b8;
        let var_b0: i64;
        let mut rsi_4: i64 = var_b0;
        let cond:0_1: bool = (var_c0 & 1) != 0;
        var_c0 = 0;
        
        if !cond:0_1
        {
            let mut rdx_5: i64;
            rax_6 = core::str::iter::SplitInternal$LT$P$GT$::next::h3fa9a8e3da590a31(&var_a8);
            rsi_4 = rdx_5;
        }
        
        if rax_6 == 0
        {
            rsi_4 = rax_6;
        }
        
        let mut rdi_7: i64 = 1;
        
        if rax_6 != 0
        {
            rdi_7 = rax_6;
        }
        
        let mut rax_7: i64;
        let mut rdx_6: i64;
        rax_7 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hc1c5622f93930984(rdi_7, rsi_4);
        let mut rax_8: i64;
        let mut rdx_7: u64;
        rax_8 =
            core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hd401112d4c765288(rax_7, rdx_6);
        let rax_9: u32 = rax_3 & 1;
        let var_1fc_1: i8 = rax_9;
        var_1e0 = 0;
        let mut rax_11: *mut i8;
        let mut rdx_8: u64;
        rax_11 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4((rax_9 ^ 1) * 5 + 0x22, 
            &var_1e0);
        
        if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf48f8dbcb851e47f(rax_8, rdx_7, 
            rax_11, rdx_8) != 0
        {
            var_1e0 = 0;
            (*(arg3[1] + 0x18))(*arg3, &var_1e0);
        }
        
        let mut rbp_2: i8 = var_20c_1;
        
        if rdx_6 == 0
        {
            'label_722894:
            core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(rsi_4 >> 0x20 != 0);
            let mut rax_22: *mut c_void;
            let mut rdx_14: i64;
            rax_22 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rsi_4, r12, r15);
            
            if rax_22 == 0
            {
                core::str::slice_error_fail::h1a2885084e28d077(r12, r15, rsi_4, r15);
                /* no return */
            }
            
            if core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9d68bd4861bf742(rax_22, rdx_14)
                != 0
            {
                var_1e0 = 0x201;
                let rdx_15: i64 = (*(arg3[1] + 0x18))(*arg3, &var_1e0);
                let mut rbp_3: i32 = 0;
                core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(0);
                _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hb52b76b0821f95e3(&var_1e0, &var_c0, rdx_15);
                core::iter::traits::iterator::Iterator::reduce::h0542e7524a210e1e(&var_128, 
                    &var_1e0);
                let mut zmm0_3: i128 = {0};
                let var_120: i32;
                
                if var_120 != 5
                {
                    rbp_3 = var_120;
                }
                
                let var_118: i128;
                
                if var_120 != 5
                {
                    zmm0_3 = var_118;
                }
                let var_158_1: *mut i64 = arg3;
                var_1e0 = nullptr;
                let var_1d8_1: i64 = 8;
                var_1d0 = {0};
                let var_150_1: i32 = rax_5 + rsi_4 + 1;
                let var_170_1: i32 = rbp_3;
                let var_11c: i32;
                let var_16c_1: i32 = var_11c;
                let var_168_1: i128 = zmm0_3;
                let var_14c_1: bool = rax_2 == -0x8000000000000000;
                let var_14b_1: i8 = var_1fc_1;
                let var_1c0_1: i64 = -0x7ffffffffffffffd;
                let var_70: i128;
                let var_d8_1: i128 = var_70;
                let var_80: i128;
                let var_e8_1: i128 = var_80;
                let var_90: i128;
                let var_f8_1: i128 = var_90;
                let var_108_1: i128 = r15;
                let var_118_1: i128 = var_b0;
                var_128 = var_c0;
                let mut var_48: i32;
                ruff_python_formatter::string::docstring::DocstringLinePrinter::add_iter::h462e49ccaf522bd7(&var_48, &var_1e0, &var_128);
                let rax_27: i32 = var_48;
                
                if rax_27 != 4
                {
                    let var_34: i32;
                    arg1[5] = var_34;
                    let var_44: i128;
                    *arg1.byte_offset(4) = var_44;
                    *arg1 = rax_27;
                    return core::ptr::drop_in_place$LT$ruff_python_formatter..string..docstring..DocstringLinePrinter$GT$::h2092d66feb0950f8(&var_1e0);
                }
                
                core::ptr::drop_in_place$LT$ruff_python_formatter..string..docstring..DocstringLinePrinter$GT$::h2092d66feb0950f8(&var_1e0);
                let mut rax_28: i64;
                let mut rdx_18: i64;
                rax_28 =
                    core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h53bd7ada7db36fa7(r12, r15);
                
                if ruff_python_formatter::string::docstring::needs_chaperone_space::h0757348e78c1bc42(var_20c_1, rax_28, rdx_18, *(*(arg3[1] + 0x30))(*arg3).byte_offset(0x3a)) != 0
                {
                    var_1e0 = 0;
                    (*(arg3[1] + 0x18))(*arg3, &var_1e0);
                }
                
                var_1e0 = &var_20e;
                let var_1d8_2: *mut c_void = &data_97e1a0;
                return _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::write_fmt::h7287e9dfefd137ea(arg1, arg3, &var_1e0, 1);
            }
            
            let mut rbx_2: i64;
            rbx_2 = rdx_6 == 0;
            
            if (r15 != 0 & rbx_2) != 0 ||
                ruff_python_formatter::string::docstring::needs_chaperone_space::h0757348e78c1bc42(
                rbp_2, rax_7, rdx_6, *(*(arg3[1] + 0x30))(*arg3).byte_offset(0x3a)) != 0
            {
                var_1e0 = 0;
                (*(arg3[1] + 0x18))(*arg3, &var_1e0);
            }
            
            _$LT$ruff_python_formatter..string..StringQuotes$u20$as$u20$ruff_formatter..Format$LT$ruff_python_formatter..context..PyFormatContext$GT$$GT$::fmt::h1952ff085d74be3b(&var_1e0, &var_20e, arg3);
            result = var_1e0;
            
            if result != 4
            {
                goto 'label_722b33;
            }
            
            *arg1 = 4;
        }
        else
        {
            let r13_1: i8 = rdx_6 >> 0x20 != 0;
            core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(r13_1);
            core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(rdx_7 >> 0x20 != 0);
            core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(r13_1);
            let rax_18: i32 = rdx_6;
            let rax_19: i32 = rax_18 + rax_5;
            
            if rax_18 + rax_5 < rax_18
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            let rcx_6: i32 = rdx_6 - rdx_7 + rax_5;
            
            if rcx_6 > rax_19
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            rbp_2 = var_20c_1;
            
            if rax_2 == -0x8000000000000000
            {
                var_128 = rcx_6;
                let var_124_1: i32 = rax_19;
                _$LT$ruff_formatter..builders..SourceTextSliceBuilder$u20$as$u20$ruff_formatter..Format$LT$Context$GT$$GT$::fmt::hc7c589b7f57e065d(&var_1e0, &var_128, arg3);
                result = var_1e0;
                
                if result == 4
                {
                    goto 'label_722894;
                }
                
                goto 'label_722b33;
            }
            
            _$LT$ruff_formatter..builders..Text$u20$as$u20$ruff_formatter..Format$LT$Context$GT$$GT$::fmt::hbf64ef42de3b23a6(&var_1e0, rax_8, rdx_7, *arg3, arg3[1]);
            result = var_1e0;
            
            if result == 4
            {
                goto 'label_722894;
            }
            
            'label_722b33:
            arg1[5] = *var_1d0[4];
            *arg1.byte_offset(4) = *var_1e0[4];
            *arg1 = result;
        }
    }
    
    result
}
