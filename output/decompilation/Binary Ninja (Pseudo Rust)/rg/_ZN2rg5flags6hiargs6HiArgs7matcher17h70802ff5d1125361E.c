
  fn rg::flags::hiargs::HiArgs::matcher::h70802ff5d1125361(arg1: *mut u64, arg2: *mut i32) -> i64

{
    let rax: u32 = arg2[0xe5];
    let mut rax_9: i64;
    let mut zmm0_1: i128;
    let mut zmm1_1: i128;
    let mut zmm2_1: i128;
    let mut zmm3_1: i128;
    let mut var_218: *const i8;
    let mut var_1c8: *mut *mut [i8; 0xb5];
    
    if rax == 0
    {
        let mut var_160: i128;
        rg::flags::hiargs::HiArgs::matcher_rust::h9492ce990c54230d(&var_160, arg2);
        let var_fd: i8;
        
        if var_fd == 2
        {
            var_218 = var_160;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::had387940787aa39e(
                &var_1c8, &var_218);
            let mut var_28: ();
            rg::flags::hiargs::suggest_other_engine::h832cee4eee69fa39(&var_28, &var_1c8);
            *arg1 = anyhow::kind::Adhoc::new::h108351ff8f5d4b99(&var_28);
            *arg1.byte_offset(0x63) = 2;
            return core::ptr::drop_in_place$LT$anyhow..Error$GT$::h25f51841f1014f37();
        }
        
        let var_100: i64;
        rax_9 = var_100;
        arg1[0xc] = rax_9;
        let var_110: i128;
        *arg1.byte_offset(0x50) = var_110;
        let var_120: i128;
        *arg1.byte_offset(0x40) = var_120;
        zmm0_1 = var_160;
        let var_150: i128;
        zmm1_1 = var_150;
        let var_140: i128;
        zmm2_1 = var_140;
        let var_130: i128;
        zmm3_1 = var_130;
    }
    else
    {
        let mut var_1c0: i128;
        let mut var_1b0: i128;
        let mut var_1a0: i128;
        
        if rax != 1
        {
            rg::flags::hiargs::HiArgs::matcher_pcre2::h790a55aab6c20aab(&var_1c8);
            let rcx: u64 = var_1c8;
            let var_165: i8;
            
            if var_165 == 2
            {
                *arg1 = rcx;
                *arg1.byte_offset(0x63) = 2;
                return var_165;
            }
            
            let var_175: i128;
            *arg1.byte_offset(0x53) = var_175;
            let var_180: i128;
            *arg1.byte_offset(0x48) = var_180;
            let var_190: i128;
            *arg1.byte_offset(0x38) = var_190;
            *arg1.byte_offset(0x28) = var_1a0;
            *arg1.byte_offset(0x18) = var_1b0;
            *arg1.byte_offset(8) = var_1c0;
            *arg1 = rcx;
            *arg1.byte_offset(0x63) = var_165;
            let var_164: i32;
            *arg1.byte_offset(0x64) = var_164;
            return var_165;
        }
        
        let mut var_f8: i128;
        rg::flags::hiargs::HiArgs::matcher_rust::h9492ce990c54230d(&var_f8, arg2);
        let var_95: i8;
        
        if var_95 == 2
        {
            let mut var_228: i64 = var_f8;
            let mut var_1e8: *mut i64;
            
            if core::sync::atomic::atomic_load::headb9992cbbd027a(
                &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4
            {
                var_1e8 = &var_228;
                let var_1e0_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = anyhow::error::_$LT$impl$u20$core..fmt..Display$u20$for$u20$anyhow..Error$GT$::fmt::he8862a1212ccbd86;
                var_1c8 = &data_7eae40;
                var_1c0 = 1;
                *var_1b0[8] = 0;
                *var_1c0[8] = &var_1e8;
                var_1b0 = 1;
                let rax_3: i64 = log::__private_api::loc::h53b04f6fd0066707(&data_7eae50);
                var_218 = "rg::flags::hiargserror building …";
                let var_210_1: i64 = 0x11;
                let var_208_1: *const i8 = "rg::flags::hiargserror building …";
                let var_200_1: i64 = 0x11;
                let var_1f8_1: i64 = rax_3;
                log::__private_api::log::h124fdfc9e9ed7585(&var_1c8, 4, &var_218);
            }
            
            let mut var_90: i128;
            rg::flags::hiargs::HiArgs::matcher_pcre2::h790a55aab6c20aab(&var_90);
            let var_2d: i8;
            
            if var_2d != 2
            {
                let var_30: i64;
                arg1[0xc] = var_30;
                let var_40: i128;
                *arg1.byte_offset(0x50) = var_40;
                let var_50: i128;
                *arg1.byte_offset(0x40) = var_50;
                let zmm0_2: i128 = var_90;
                let var_60: i128;
                *arg1.byte_offset(0x30) = var_60;
                let var_70: i128;
                *arg1.byte_offset(0x20) = var_70;
                let var_80: i128;
                *arg1.byte_offset(0x10) = var_80;
                *arg1 = zmm0_2;
            }
            else
            {
                let mut var_220: i64 = var_90;
                alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h6004d655c3feac73(&var_1c8, 
                    "~regex could not be compiled wit…", 0x4f);
                let var_1d8_1: i64 = *var_1c0[8];
                var_1e8 = var_1c8;
                var_1c8 = &var_1e8;
                var_1c0 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                *var_1c0[8] = &var_228;
                var_1b0 = anyhow::error::_$LT$impl$u20$core..fmt..Display$u20$for$u20$anyhow..Error$GT$::fmt::he8862a1212ccbd86;
                *var_1b0[8] = &var_220;
                var_1a0 = anyhow::error::_$LT$impl$u20$core..fmt..Display$u20$for$u20$anyhow..Error$GT$::fmt::he8862a1212ccbd86;
                var_218 = &data_7eae68;
                let var_210_2: i64 = 4;
                let var_1f8_2: *mut c_void = &data_487618;
                let var_1f0_1: i64 = 4;
                let var_208_2: *const *mut *mut [i8; 0xb5] = &var_1c8;
                let var_200_2: i64 = 3;
                *arg1 = anyhow::__private::format_err::hd87f3faee3401bd9(&var_218);
                *arg1.byte_offset(0x63) = 2;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_1e8);
                core::ptr::drop_in_place$LT$anyhow..Error$GT$::h25f51841f1014f37();
            }
            
            return core::ptr::drop_in_place$LT$anyhow..Error$GT$::h25f51841f1014f37();
        }
        
        let var_98: i64;
        rax_9 = var_98;
        arg1[0xc] = rax_9;
        let var_a8: i128;
        *arg1.byte_offset(0x50) = var_a8;
        let var_b8: i128;
        *arg1.byte_offset(0x40) = var_b8;
        zmm0_1 = var_f8;
        let var_e8: i128;
        zmm1_1 = var_e8;
        let var_d8: i128;
        zmm2_1 = var_d8;
        let var_c8: i128;
        zmm3_1 = var_c8;
    }
    *arg1.byte_offset(0x30) = zmm3_1;
    *arg1.byte_offset(0x20) = zmm2_1;
    *arg1.byte_offset(0x10) = zmm1_1;
    *arg1 = zmm0_1;
    rax_9
}
