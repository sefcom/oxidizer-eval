
  fn uu_dd::progress::ProgUpdate::write_prog_line::h98858b211566047a(arg1: *mut i64, arg2: i64, arg3: i8) -> u64

{
    let r13: u64 = arg1[6];
    let r12: u64 = arg1[7];
    let mut var_b8: u64 = r13;
    let var_b0: u64 = r12;
    let mut var_78: i64;
    uu_dd::numbers::to_magnitude_and_suffix::hda63ca50ad718acc(&var_78, r13, r12, 1);
    let mut var_60: i64;
    uu_dd::numbers::to_magnitude_and_suffix::hda63ca50ad718acc(&var_60, r13, r12, 0);
    let r14: *mut *mut c_void = *arg1;
    let mut rax_1: i64;
    let mut rdx_2: i64;
    rdx_2 = HIGHQ(r14 * 0x3e8);
    rax_1 = LOWQ(r14 * 0x3e8);
    let r15: u64 = arg1[1];
    let rdi_3: u64 = (r15 * 0x431bde83) >> 0x32;
    let mut rax_2: i64;
    let mut rdx_4: u64;
    rax_2 = core::cmp::Ord::max::haee459c21cd56eb4(rdi_3 + rax_1, rdx_2 + 0);
    
    if (rax_2 | rdx_4) == 0
    {
        core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
        /* no return */
    }
    
    let mut rax_3: u64;
    let mut rdx_8: i64;
    rax_3 = __udivti3(r13, r12, rax_2, rdx_4);
    let mut rax_4: u64;
    let mut rdx_9: i64;
    rdx_9 = HIGHQ(rax_3 * 0x3e8);
    rax_4 = LOWQ(rax_3 * 0x3e8);
    let mut var_48: i64;
    uu_dd::numbers::to_magnitude_and_suffix::hda63ca50ad718acc(&var_48, rax_4, 
        rdx_9 + rdx_8 * 0x3e8, 1);
    let mut zmm0: u128 =
        __subpd_xmmpd_mempd(__punpckldq_xmmdq_memdq(r14, data_41e220[0x10][0]), data_41e1b0);
    let zmm1: [u64; 0x2] = _mm_unpackhi_pd(zmm0, zmm0);
    zmm1[0] = zmm1[0] + zmm0;
    zmm0 = r15;
    zmm0 = zmm0 / 1000000000.0;
    zmm0 = zmm0 + zmm1[0];
    let mut rax_5: *const i8 = "\r+ records in\n records out\nfa…";
    
    if arg3 == 0
    {
        rax_5 = 1;
    }
    
    let rdx_12: u64 = arg3;
    let mut rsi_5: *const i8 = "\n\r+ records in\n records out\n…";
    
    if arg3 != 0
    {
        rsi_5 = 1;
    }
    
    let mut var_a8: *const i8 = rax_5;
    let var_a0: u64 = rdx_12;
    let mut var_98: *const i8 = rsi_5;
    let var_90: u64 = rdx_12 ^ 1;
    let mut var_d0: i64 = 0;
    let var_c8: *mut i8 = 1;
    let var_c0: i64 = 0;
    let var_15c: i8 = 2;
    let mut var_178: *mut c_void = nullptr;
    let var_168: i64 = 0;
    let mut var_160: i32 = 0;
    let mut var_148: *const *const i8;
    _$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$u20$as$u20$core..convert..From$LT$f64$GT$$GT$::from::h5c0de203e1930a2e(&var_148, zmm0, zmm1);
    let mut result: u64;
    let var_140: i64;
    
    if _$LT$uucore..features..format..num_format..Float$u20$as$u20$uucore..features..format..num_format..Formatter$LT$$RF$uucore..features..extendedbigdecimal..ExtendedBigDecimal$GT$$GT$::fmt::hdc90306913db6cd6(&var_178, &var_d0, &var_148) == 0
    {
        core::ptr::drop_in_place$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$GT$::hc8630fe00a9ef4b6(var_148, var_140);
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_148, var_c8, var_c0);
        let mut rax_10: i64;
        let mut rdx_15: i64;
        rax_10 = core::result::Result$LT$T$C$E$GT$::unwrap::h69fd6910a96ed175(&var_148);
        let mut var_88: i64 = rax_10;
        let var_80_1: i64 = rdx_15;
        
        if ((r13 ^ 1) | r12) != 0
        {
            let c_2: bool = /* bool c_2 = unimplemented  {sbb rax, 0x0} */;
            
            if !c_2
            {
                let c_4: bool = /* bool c_4 = unimplemented  {sbb r12, 0x0} */;
                
                if !c_4
                {
                    var_148 = &var_a8;
                    let var_140_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
                    let var_138_4: *mut i64 = &var_b8;
                    let var_130_4: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::hf75db8903b60bf5d;
                    let var_128_4: *mut i64 = &var_78;
                    let var_120_4: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    let var_118_4: *mut i64 = &var_60;
                    let var_110_4: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    let var_108_4: *mut i64 = &var_88;
                    let var_100_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
                    let var_f8_2: *mut i64 = &var_48;
                    let var_f0_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    let var_e8_1: *const *const i8 = &var_98;
                    let var_e0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
                    var_178 = &data_53da90;
                    let var_170_4: i64 = 7;
                    let var_158_4: i64 = 0;
                    let var_168_4: *mut *const *const i8 = &var_148;
                    var_160 = 7;
                    
                    if _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(arg2, &var_178) == 0
                    {
                        result = 0;
                    }
                    else
                    {
                        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    }
                }
                else
                {
                    var_148 = &var_a8;
                    let var_140_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
                    let var_138_3: *mut i64 = &var_b8;
                    let var_130_3: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::hf75db8903b60bf5d;
                    let var_128_3: *mut i64 = &var_78;
                    let var_120_3: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    let var_118_3: *mut i64 = &var_88;
                    let var_110_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
                    let var_108_3: *mut i64 = &var_48;
                    let var_100_3: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    let var_f8_1: *const *const i8 = &var_98;
                    let var_f0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
                    var_178 = &data_53da30;
                    let var_170_3: i64 = 6;
                    let var_158_3: i64 = 0;
                    let var_168_3: *mut *const *const i8 = &var_148;
                    var_160 = 6;
                    
                    if _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(arg2, &var_178) == 0
                    {
                        result = 0;
                    }
                    else
                    {
                        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    }
                }
            }
            else
            {
                var_148 = &var_a8;
                let var_140_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
                let var_138_2: *mut i64 = &var_b8;
                let var_130_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::hf75db8903b60bf5d;
                let var_128_2: *mut i64 = &var_88;
                let var_120_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
                let var_118_2: *mut i64 = &var_48;
                let var_110_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                let var_108_2: *const *const i8 = &var_98;
                let var_100_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
                var_178 = &data_53d9e0;
                let var_170_2: i64 = 5;
                let var_158_2: i64 = 0;
                let var_168_2: *mut *const *const i8 = &var_148;
                var_160 = 5;
                
                if _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(arg2, &var_178) == 0
                {
                    result = 0;
                }
                else
                {
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                }
            }
        }
        else
        {
            var_148 = &var_a8;
            let var_140_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
            let var_138_1: *mut i64 = &var_b8;
            let var_130_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::hf75db8903b60bf5d;
            let var_128_1: *mut i64 = &var_88;
            let var_120_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
            let var_118_1: *mut i64 = &var_48;
            let var_110_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            let var_108_1: *const *const i8 = &var_98;
            let var_100_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
            var_178 = &data_53d990;
            let var_170_1: i64 = 5;
            let var_158_1: i64 = 0;
            let var_168_1: *mut *const *const i8 = &var_148;
            var_160 = 5;
            
            if _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(arg2, &var_178) == 0
            {
                result = 0;
            }
            else
            {
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            }
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        core::ptr::drop_in_place$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$GT$::hc8630fe00a9ef4b6(var_148, var_140);
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h270e478e73f6834b(var_d0, var_c8);
    let var_40: i64;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf7ee706d4db893ba(var_48, var_40);
    let var_58: i64;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf7ee706d4db893ba(var_60, var_58);
    let var_70: i64;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf7ee706d4db893ba(var_78, var_70);
    result
}
