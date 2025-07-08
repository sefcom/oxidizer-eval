
  fn uu_fmt::FmtOptions::from_matches::ha8709eba89c06adb(arg1: *mut i128, arg2: *mut c_void) -> *mut i128

{
    let rax: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "tagged-paragraph[short aliases: …", 0x10);
    let rax_1: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "crown-marginuniform-spacingquick…", 0xc);
    let rax_2: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "preserve-headersDOUBLE_UNDERLINE…", 0x10);
    let rax_3: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "uniform-spacingquicksplit-onlyex…", 0xf);
    let rax_4: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "quicksplit-onlyexact-prefix-read…", 5);
    let rax_5: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "split-onlyexact-prefix-read erro…", 0xa);
    let rax_6: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
        arg2, "exact-prefix-read error\nfileswi…", 0xc);
    let rax_7: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
        arg2, "skip-prefixinvalid goal: GOAL ca…", 0xb);
    let mut var_138: i128;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d676eefe7e492ec(
        &var_138, arg2, "prefixskip-prefixinvalid goal: G…", 6);
    let rax_8: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h98df6b0c915d5d1b(
        "prefixskip-prefixinvalid goal: G…", 6, &var_138);
    let mut var_b0: i64;
    
    if rax_8 == 0
    {
        var_b0 = -0x8000000000000000;
    }
    else
    {
        core::ops::function::FnOnce::call_once::hc073dae0b047a59b(&var_b0, rax_8);
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d676eefe7e492ec(
        &var_138, arg2, "skip-prefixinvalid goal: GOAL ca…", 0xb);
    let rax_9: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h98df6b0c915d5d1b(
        "skip-prefixinvalid goal: GOAL ca…", 0xb, &var_138);
    let var_128: i64;
    let mut var_c8: i64;
    let mut var_b8: i64;
    
    if rax_9 == 0
    {
        var_c8 = -0x8000000000000000;
    }
    else
    {
        core::ops::function::FnOnce::call_once::hc073dae0b047a59b(&var_138, rax_9);
        var_b8 = var_128;
        var_c8 = var_138;
    }
    
    uu_fmt::extract_width::h607b918514420837(&var_138, arg2);
    let r14: i64 = *var_138[8];
    let mut r13: i64 = var_128;
    
    if var_138 == 0
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d676eefe7e492ec(
            &var_138, arg2, &data_414924[4], 4);
        let rax_11: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h98df6b0c915d5d1b(&data_414924[4], 
            4, &var_138);
        let mut var_120: i64;
        let mut var_100: *mut i64;
        let mut var_e0: i8;
        let var_d8: i64;
        let mut var_98: *mut i64;
        let mut rax_13: *mut i128;
        let mut rbp_2: i64;
        
        if rax_11 != 0
        {
            let r12_1: *mut i8 = *rax_11.byte_offset(8);
            let rbp_1: i64 = *rax_11.byte_offset(0x10);
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_e0, r12_1, rbp_1);
            
            if var_e0 != 0
            {
                var_100 = nullptr;
                let var_f8_1: *mut i8 = r12_1;
                let var_f0_1: i64 = rbp_1;
                let var_e8_1: i8 = 1;
                var_98 = &var_100;
                let var_90_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_138 = &data_526378;
                *var_138[8] = 1;
                let var_118_1: i64 = 0;
                let var_128_1: *mut *mut i64 = &var_98;
                let mut var_120_1: i64 = 1;
                let mut var_78: i128;
                core::option::Option$LT$T$GT$::map_or_else::h57a000129381aa23(&var_78, &var_138);
                var_120_1 = 1;
                var_138 = var_78;
                let var_68: i64;
                let var_128_2: i64 = var_68;
                rax_13 = alloc::boxed::Box$LT$T$GT$::new::had2f12c6fe048da6(&var_138);
                'label_4b51d6:
                *arg1.byte_offset(8) = rax_13;
                arg1[1] = &data_526400;
                goto 'label_4b51ef;
            }
            
            rbp_2 = var_d8;
            let var_f0: i64;
            
            if r14 != 0
            {
                if rbp_2 <= r13
                {
                    goto 'label_4b5013;
                }
                
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h5bbd8c4ce611c1c9(
                    &var_100, "GOAL cannot be greater than WIDT…", 0x22);
                let var_128_3: i64 = var_f0;
                var_138 = var_100;
                var_120 = 1;
                rax_13 = alloc::boxed::Box$LT$T$GT$::new::had2f12c6fe048da6(&var_138);
                goto 'label_4b51d6;
            }
            
            if rbp_2 <= 0x4b
            {
                let rax_20: i16 = rbp_2 * 0x64;
                let rcx_3: u32 = (rax_20 * 0x6059) >> 0x10;
                r13 = core::cmp::max_by::h34a806462d46b061((((rax_20 - rcx_3) >> 1) + rcx_3) >> 6, 
                    rbp_2 + 3);
                goto 'label_4b5013;
            }
            
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h5bbd8c4ce611c1c9(
                &var_100, "GOAL cannot be greater than WIDT…", 0x22);
            let var_128_4: i64 = var_f0;
            var_138 = var_100;
            var_120 = 1;
            rax_13 = alloc::boxed::Box$LT$T$GT$::new::had2f12c6fe048da6(&var_138);
            goto 'label_4b51d6;
        }
        
        let mut var_d0: i64;
        
        if r14 != 0
        {
            let mut rsi_8: i64;
            rsi_8 = r13 != 0;
            rbp_2 = core::cmp::max_by::h34a806462d46b061(r13 * 0x5d / 0x64, rsi_8);
            'label_4b5013:
            var_d0 = r13;
            
            if r13 <= 0x9c4
            {
                goto 'label_4b50c3;
            }
            
            var_100 = &var_d0;
            let var_f8_2: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            var_138 = &data_526388;
            *var_138[8] = 2;
            let var_118_2: i64 = 0;
            let var_128_5: *mut *mut i64 = &var_100;
            let mut var_120_2: i64 = 1;
            let mut var_60: i128;
            core::option::Option$LT$T$GT$::map_or_else::h57a000129381aa23(&var_60, &var_138);
            var_120_2 = 1;
            var_138 = var_60;
            let var_50: i64;
            let var_128_6: i64 = var_50;
            rax_13 = alloc::boxed::Box$LT$T$GT$::new::had2f12c6fe048da6(&var_138);
            goto 'label_4b51d6;
        }
        
        var_d0 = 0x4b;
        rbp_2 = 0x46;
        r13 = 0x4b;
        'label_4b50c3:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d676eefe7e492ec(
            &var_138, arg2, "tab-width: crown-marginuniform-s…", 9);
        let rax_24: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h98df6b0c915d5d1b(
            "tab-width: crown-marginuniform-s…", 9, &var_138);
        let mut rax_28: i64;
        
        if rax_24 != 0
        {
            let r15_1: *mut i8 = *rax_24.byte_offset(8);
            let r12_2: i64 = *rax_24.byte_offset(0x10);
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_e0, r15_1, r12_2);
            
            if var_e0 == 0
            {
                rax_28 = var_d8;
                goto 'label_4b5266;
            }
            
            let var_df: i8;
            let mut var_139: i8 = var_df;
            var_100 = nullptr;
            let var_f8_3: *mut i8 = r15_1;
            let var_f0_2: i64 = r12_2;
            let var_e8_2: i8 = 1;
            var_98 = &var_100;
            let var_90_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            let var_88_1: *mut i8 = &var_139;
            let var_80_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h98d79d8d19892e5a;
            var_138 = &data_5263a8;
            *var_138[8] = 2;
            let var_118_3: i64 = 0;
            let var_128_7: *mut *mut i64 = &var_98;
            let mut var_120_3: i64 = 2;
            let mut var_48: i128;
            core::option::Option$LT$T$GT$::map_or_else::h57a000129381aa23(&var_48, &var_138);
            var_120_3 = 1;
            var_138 = var_48;
            let var_38: i64;
            let var_128_8: i64 = var_38;
            rax_13 = alloc::boxed::Box$LT$T$GT$::new::had2f12c6fe048da6(&var_138);
            goto 'label_4b51d6;
        }
        
        rax_28 = 8;
        'label_4b5266:
        let zmm0_6: i128 = var_b0;
        var_138 = zmm0_6;
        var_120 = var_c8;
        let temp0_1: [i32; 0x4] = _mm_insert_epi16(
            rax_5 << 0x18 | rax_2 << 0x10 | (rax & ((rax_1 | rax_5) ^ 1)) << 8
                | ((rax_5 ^ 1) & rax_1), 
            rax_7 << 8 | rax_6, 2);
        let var_110_1: i64 = var_b8;
        let temp0_2: [i32; 0x4] = _mm_insert_epi16(temp0_1, rax_4 << 8 | rax_3, 3);
        *arg1 = zmm0_6;
        let var_118: i64;
        arg1[2] = var_118;
        let var_a0: i64;
        arg1[1] = var_a0;
        arg1[3] = r13;
        *arg1.byte_offset(0x38) = rbp_2;
        arg1[4] = rax_28 + 0;
        *arg1.byte_offset(0x48) = temp0_2[0];
    }
    else
    {
        *arg1.byte_offset(8) = r14;
        arg1[1] = r13;
        'label_4b51ef:
        *arg1 = -0x7fffffffffffffff;
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hd911d0772c4acc23(&var_c8);
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hd911d0772c4acc23(&var_b0);
    }
    
    arg1
}
