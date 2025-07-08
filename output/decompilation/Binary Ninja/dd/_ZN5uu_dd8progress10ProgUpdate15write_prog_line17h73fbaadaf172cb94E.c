
  int128_t* uu_dd::progress::ProgUpdate::write_prog_line::h73fbaadaf172cb94(int64_t* arg1, int64_t arg2, char arg3)

{
    int64_t r12 = arg1[6];
    int64_t rbx = arg1[7];
    int64_t var_178 = r12;
    void var_78;
    uu_dd::numbers::to_magnitude_and_suffix::h88c44cbe00c16152(&var_78, r12, rbx, 1);
    void var_60;
    uu_dd::numbers::to_magnitude_and_suffix::h88c44cbe00c16152(&var_60, r12, rbx, 0);
    int64_t r13 = *arg1;
    int64_t rax_1;
    int64_t rdx_2;
    rdx_2 = HIGHQ(r13 * 0x3e8);
    rax_1 = LOWQ(r13 * 0x3e8);
    uint64_t r14_1 = arg1[1];
    uint64_t rdi_3 = (r14_1 * 0x431bde83) >> 0x32;
    int64_t rax_2;
    uint64_t rdx_4;
    rax_2 = core::cmp::max_by::h2325bc61e56912fb(rdi_3 + rax_1, rdx_2 + 0);
    
    if (!(rax_2 | rdx_4))
    {
        core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e();
        /* no return */
    }
    
    uint64_t rax_3;
    int64_t rdx_8;
    rax_3 = __udivti3(r12, rbx, rax_2, rdx_4);
    int64_t rax_4;
    int64_t rdx_9;
    rdx_9 = HIGHQ(rax_3 * 0x3e8);
    rax_4 = LOWQ(rax_3 * 0x3e8);
    void var_48;
    uu_dd::numbers::to_magnitude_and_suffix::h88c44cbe00c16152(&var_48, rax_4, 
        rdx_9 + rdx_8 * 0x3e8, 1);
    uint128_t zmm0 = __subpd_xmmpd_mempd(__punpckldq_xmmdq_memdq(r13, data_419420), data_4193a0);
    uint128_t zmm1;
    zmm1 = _mm_unpackhi_pd(zmm0, zmm0) + zmm0;
    zmm0 = r14_1;
    zmm0 = zmm0 / 1000000000.0;
    zmm0 = zmm0 + zmm1;
    char const* const rax_5 = "\r+ records in\n records out\nfa…";
    
    if (!arg3)
        rax_5 = 1;
    
    uint64_t rdx_11 = arg3;
    char const* const rsi_5 = "\n\r+ records in\n records out\n…";
    
    if (arg3)
        rsi_5 = 1;
    
    char const* const var_c0 = rax_5;
    uint64_t var_b8 = rdx_11;
    char const* const var_b0 = rsi_5;
    uint64_t var_a8 = rdx_11 ^ 1;
    int64_t var_a0 = 0;
    char* var_98 = 1;
    int64_t var_90 = 0;
    char var_120 = 2;
    char const* const* var_130 = nullptr;
    int32_t var_11f = 0;
    int64_t var_128 = 6;
    int128_t* result;
    
    if (!_$LT$uucore..features..format..num_format..Float$u20$as$u20$uucore..features..format..num_format..Formatter$GT$::fmt::hdc40127ddb80f4d7(&var_130, &var_a0, zmm0))
    {
        core::str::converts::from_utf8::ha1effb4cca6d9901(&var_130, var_98, var_90);
        int64_t rax_10;
        int64_t rdx_14;
        rax_10 = core::result::Result$LT$T$C$E$GT$::unwrap::h373b8612646dc001(&var_130);
        int64_t var_88 = rax_10;
        int64_t var_80_1 = rdx_14;
        void* const var_160;
        
        if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_178, data_419580)) != 0xffff)
        {
            bool c_2 = /* bool c_2 = unimplemented  {sbb rdx, 0x0} */;
            
            if (!c_2)
            {
                bool c_4 = /* bool c_4 = unimplemented  {sbb rax, 0x0} */;
                
                if (!c_4)
                {
                    var_130 = &var_c0;
                    int64_t (* var_128_4)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
                    var_120 = &var_178;
                    int64_t (* var_118_4)(int64_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h261e2a7b3123826c;
                    void* var_110_4 = &var_78;
                    int64_t (* var_108_4)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    void* var_100_4 = &var_60;
                    int64_t (* var_f8_4)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    int64_t* var_f0_4 = &var_88;
                    int64_t (* var_e8_4)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
                    void* var_e0_2 = &var_48;
                    int64_t (* var_d8_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    char const* const* var_d0_1 = &var_b0;
                    int64_t (* var_c8_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
                    var_160 = &data_562408;
                    int64_t var_158_4 = 7;
                    int64_t var_140_4 = 0;
                    char const* const** var_150_4 = &var_130;
                    int64_t var_148_4 = 7;
                    
                    if (!_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(arg2, &var_160))
                        goto label_4f0238;
                    
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                }
                else
                {
                    var_130 = &var_c0;
                    int64_t (* var_128_3)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
                    var_120 = &var_178;
                    int64_t (* var_118_3)(int64_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h261e2a7b3123826c;
                    void* var_110_3 = &var_78;
                    int64_t (* var_108_3)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    int64_t* var_100_3 = &var_88;
                    int64_t (* var_f8_3)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
                    void* var_f0_3 = &var_48;
                    int64_t (* var_e8_3)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    char const* const* var_e0_1 = &var_b0;
                    int64_t (* var_d8_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
                    var_160 = &data_5623a8;
                    int64_t var_158_3 = 6;
                    int64_t var_140_3 = 0;
                    char const* const** var_150_3 = &var_130;
                    int64_t var_148_3 = 6;
                    
                    if (!_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(arg2, &var_160))
                        goto label_4f0238;
                    
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                }
            }
            else
            {
                var_130 = &var_c0;
                int64_t (* var_128_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
                var_120 = &var_178;
                int64_t (* var_118_2)(int64_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h261e2a7b3123826c;
                int64_t* var_110_2 = &var_88;
                int64_t (* var_108_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
                void* var_100_2 = &var_48;
                int64_t (* var_f8_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                char const* const* var_f0_2 = &var_b0;
                int64_t (* var_e8_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
                var_160 = &data_562358;
                int64_t var_158_2 = 5;
                int64_t var_140_2 = 0;
                char const* const** var_150_2 = &var_130;
                int64_t var_148_2 = 5;
                
                if (!_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(arg2, &var_160))
                    goto label_4f0238;
                
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            }
        }
        else
        {
            var_130 = &var_c0;
            int64_t (* var_128_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
            var_120 = &var_178;
            int64_t (* var_118_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h261e2a7b3123826c;
            int64_t* var_110_1 = &var_88;
            int64_t (* var_108_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
            void* var_100_1 = &var_48;
            int64_t (* var_f8_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            char const* const* var_f0_1 = &var_b0;
            int64_t (* var_e8_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
            var_160 = &data_562308;
            int64_t var_158_1 = 5;
            int64_t var_140_1 = 0;
            char const* const** var_150_1 = &var_130;
            int64_t var_148_1 = 5;
            
            if (!_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(arg2, &var_160))
            {
                label_4f0238:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hcaeb013c8c4216fe(
                    &var_a0);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3d63831bb78bbaa7(&var_48);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3d63831bb78bbaa7(&var_60);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3d63831bb78bbaa7(&var_78);
                return nullptr;
            }
            
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        }
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hcaeb013c8c4216fe(&var_a0);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3d63831bb78bbaa7(&var_48);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3d63831bb78bbaa7(&var_60);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3d63831bb78bbaa7(&var_78);
    return result;
}
