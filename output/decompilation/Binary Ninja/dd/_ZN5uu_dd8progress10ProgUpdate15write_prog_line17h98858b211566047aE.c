
  uint64_t uu_dd::progress::ProgUpdate::write_prog_line::h98858b211566047a(int64_t* arg1, int64_t arg2, char arg3)

{
    uint64_t r13 = arg1[6];
    uint64_t r12 = arg1[7];
    uint64_t var_b8 = r13;
    uint64_t var_b0 = r12;
    int64_t var_78;
    uu_dd::numbers::to_magnitude_and_suffix::hda63ca50ad718acc(&var_78, r13, r12, 1);
    int64_t var_60;
    uu_dd::numbers::to_magnitude_and_suffix::hda63ca50ad718acc(&var_60, r13, r12, 0);
    void** const r14 = *arg1;
    int64_t rax_1;
    int64_t rdx_2;
    rdx_2 = HIGHQ(r14 * 0x3e8);
    rax_1 = LOWQ(r14 * 0x3e8);
    uint64_t r15 = arg1[1];
    uint64_t rdi_3 = (r15 * 0x431bde83) >> 0x32;
    int64_t rax_2;
    uint64_t rdx_4;
    rax_2 = core::cmp::Ord::max::haee459c21cd56eb4(rdi_3 + rax_1, rdx_2 + 0);
    
    if (!(rax_2 | rdx_4))
    {
        core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
        /* no return */
    }
    
    uint64_t rax_3;
    int64_t rdx_8;
    rax_3 = __udivti3(r13, r12, rax_2, rdx_4);
    uint64_t rax_4;
    int64_t rdx_9;
    rdx_9 = HIGHQ(rax_3 * 0x3e8);
    rax_4 = LOWQ(rax_3 * 0x3e8);
    int64_t var_48;
    uu_dd::numbers::to_magnitude_and_suffix::hda63ca50ad718acc(&var_48, rax_4, 
        rdx_9 + rdx_8 * 0x3e8, 1);
    uint128_t zmm0 =
        __subpd_xmmpd_mempd(__punpckldq_xmmdq_memdq(r14, data_41e220[0x10][0]), data_41e1b0);
    uint64_t zmm1[0x2] = _mm_unpackhi_pd(zmm0, zmm0);
    zmm1[0] = zmm1[0] + zmm0;
    zmm0 = r15;
    zmm0 = zmm0 / 1000000000.0;
    zmm0 = zmm0 + zmm1[0];
    char const* const rax_5 = "\r+ records in\n records out\nfa…";
    
    if (!arg3)
        rax_5 = 1;
    
    uint64_t rdx_12 = arg3;
    char const* const rsi_5 = "\n\r+ records in\n records out\n…";
    
    if (arg3)
        rsi_5 = 1;
    
    char const* const var_a8 = rax_5;
    uint64_t var_a0 = rdx_12;
    char const* const var_98 = rsi_5;
    uint64_t var_90 = rdx_12 ^ 1;
    int64_t var_d0 = 0;
    char* var_c8 = 1;
    int64_t var_c0 = 0;
    char var_15c = 2;
    void* const var_178 = nullptr;
    int64_t var_168 = 0;
    int32_t var_160 = 0;
    char const* const* var_148;
    _$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$u20$as$u20$core..convert..From$LT$f64$GT$$GT$::from::h5c0de203e1930a2e(&var_148, zmm0, zmm1);
    uint64_t result;
    int64_t var_140;
    
    if (!_$LT$uucore..features..format..num_format..Float$u20$as$u20$uucore..features..format..num_format..Formatter$LT$$RF$uucore..features..extendedbigdecimal..ExtendedBigDecimal$GT$$GT$::fmt::hdc90306913db6cd6(&var_178, &var_d0, &var_148))
    {
        core::ptr::drop_in_place$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$GT$::hc8630fe00a9ef4b6(var_148, var_140);
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_148, var_c8, var_c0);
        int64_t rax_10;
        int64_t rdx_15;
        rax_10 = core::result::Result$LT$T$C$E$GT$::unwrap::h69fd6910a96ed175(&var_148);
        int64_t var_88 = rax_10;
        int64_t var_80_1 = rdx_15;
        
        if ((r13 ^ 1) | r12)
        {
            bool c_2 = /* bool c_2 = unimplemented  {sbb rax, 0x0} */;
            
            if (!c_2)
            {
                bool c_4 = /* bool c_4 = unimplemented  {sbb r12, 0x0} */;
                
                if (!c_4)
                {
                    var_148 = &var_a8;
                    int64_t (* var_140_4)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
                    int64_t* var_138_4 = &var_b8;
                    int64_t (* var_130_4)(int64_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::hf75db8903b60bf5d;
                    int64_t* var_128_4 = &var_78;
                    int64_t (* var_120_4)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    int64_t* var_118_4 = &var_60;
                    int64_t (* var_110_4)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    int64_t* var_108_4 = &var_88;
                    int64_t (* var_100_4)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
                    int64_t* var_f8_2 = &var_48;
                    int64_t (* var_f0_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    char const* const* var_e8_1 = &var_98;
                    int64_t (* var_e0_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
                    var_178 = &data_53da90;
                    int64_t var_170_4 = 7;
                    int64_t var_158_4 = 0;
                    char const* const** var_168_4 = &var_148;
                    var_160 = 7;
                    
                    if (!_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(arg2, &var_178))
                        result = 0;
                    else
                        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                }
                else
                {
                    var_148 = &var_a8;
                    int64_t (* var_140_3)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
                    int64_t* var_138_3 = &var_b8;
                    int64_t (* var_130_3)(int64_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::hf75db8903b60bf5d;
                    int64_t* var_128_3 = &var_78;
                    int64_t (* var_120_3)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    int64_t* var_118_3 = &var_88;
                    int64_t (* var_110_3)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
                    int64_t* var_108_3 = &var_48;
                    int64_t (* var_100_3)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    char const* const* var_f8_1 = &var_98;
                    int64_t (* var_f0_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
                    var_178 = &data_53da30;
                    int64_t var_170_3 = 6;
                    int64_t var_158_3 = 0;
                    char const* const** var_168_3 = &var_148;
                    var_160 = 6;
                    
                    if (!_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(arg2, &var_178))
                        result = 0;
                    else
                        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                }
            }
            else
            {
                var_148 = &var_a8;
                int64_t (* var_140_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
                int64_t* var_138_2 = &var_b8;
                int64_t (* var_130_2)(int64_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::hf75db8903b60bf5d;
                int64_t* var_128_2 = &var_88;
                int64_t (* var_120_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
                int64_t* var_118_2 = &var_48;
                int64_t (* var_110_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                char const* const* var_108_2 = &var_98;
                int64_t (* var_100_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
                var_178 = &data_53d9e0;
                int64_t var_170_2 = 5;
                int64_t var_158_2 = 0;
                char const* const** var_168_2 = &var_148;
                var_160 = 5;
                
                if (!_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(arg2, &var_178))
                    result = 0;
                else
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            }
        }
        else
        {
            var_148 = &var_a8;
            int64_t (* var_140_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
            int64_t* var_138_1 = &var_b8;
            int64_t (* var_130_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::hf75db8903b60bf5d;
            int64_t* var_128_1 = &var_88;
            int64_t (* var_120_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
            int64_t* var_118_1 = &var_48;
            int64_t (* var_110_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            char const* const* var_108_1 = &var_98;
            int64_t (* var_100_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
            var_178 = &data_53d990;
            int64_t var_170_1 = 5;
            int64_t var_158_1 = 0;
            char const* const** var_168_1 = &var_148;
            var_160 = 5;
            
            if (!_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(arg2, &var_178))
                result = 0;
            else
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        core::ptr::drop_in_place$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$GT$::hc8630fe00a9ef4b6(var_148, var_140);
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h270e478e73f6834b(var_d0, var_c8);
    int64_t var_40;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf7ee706d4db893ba(var_48, var_40);
    int64_t var_58;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf7ee706d4db893ba(var_60, var_58);
    int64_t var_70;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf7ee706d4db893ba(var_78, var_70);
    return result;
}
