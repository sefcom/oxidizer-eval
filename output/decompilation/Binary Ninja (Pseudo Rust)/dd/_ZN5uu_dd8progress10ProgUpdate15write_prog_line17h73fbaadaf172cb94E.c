
  fn uu_dd::progress::ProgUpdate::write_prog_line::h73fbaadaf172cb94(arg1: *mut i64, arg2: i64, arg3: i8) -> *mut i128

{
    let r12: i64 = arg1[6];
    let rbx: i64 = arg1[7];
    let mut var_178: i64 = r12;
    let mut var_78: ();
    uu_dd::numbers::to_magnitude_and_suffix::h88c44cbe00c16152(&var_78, r12, rbx, 1);
    let mut var_60: ();
    uu_dd::numbers::to_magnitude_and_suffix::h88c44cbe00c16152(&var_60, r12, rbx, 0);
    let r13: i64 = *arg1;
    let mut rax_1: i64;
    let mut rdx_2: i64;
    rdx_2 = HIGHQ(r13 * 0x3e8);
    rax_1 = LOWQ(r13 * 0x3e8);
    let r14_1: u64 = arg1[1];
    let rdi_3: u64 = (r14_1 * 0x431bde83) >> 0x32;
    let mut rax_2: i64;
    let mut rdx_4: u64;
    rax_2 = core::cmp::max_by::h2325bc61e56912fb(rdi_3 + rax_1, rdx_2 + 0);
    
    if (rax_2 | rdx_4) == 0
    {
        core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e();
        /* no return */
    }
    
    let mut rax_3: u64;
    let mut rdx_8: i64;
    rax_3 = __udivti3(r12, rbx, rax_2, rdx_4);
    let mut rax_4: i64;
    let mut rdx_9: i64;
    rdx_9 = HIGHQ(rax_3 * 0x3e8);
    rax_4 = LOWQ(rax_3 * 0x3e8);
    let mut var_48: ();
    uu_dd::numbers::to_magnitude_and_suffix::h88c44cbe00c16152(&var_48, rax_4, 
        rdx_9 + rdx_8 * 0x3e8, 1);
    let mut zmm0: u128 =
        __subpd_xmmpd_mempd(__punpckldq_xmmdq_memdq(r13, data_419420), data_4193a0);
    let mut zmm1: u128;
    zmm1 = _mm_unpackhi_pd(zmm0, zmm0) + zmm0;
    zmm0 = r14_1;
    zmm0 = zmm0 / 1000000000.0;
    zmm0 = zmm0 + zmm1;
    let mut rax_5: *const i8 = "\r+ records in\n records out\nfa…";
    
    if arg3 == 0
    {
        rax_5 = 1;
    }
    
    let rdx_11: u64 = arg3;
    let mut rsi_5: *const i8 = "\n\r+ records in\n records out\n…";
    
    if arg3 != 0
    {
        rsi_5 = 1;
    }
    
    let mut var_c0: *const i8 = rax_5;
    let var_b8: u64 = rdx_11;
    let mut var_b0: *const i8 = rsi_5;
    let var_a8: u64 = rdx_11 ^ 1;
    let mut var_a0: i64 = 0;
    let var_98: *mut i8 = 1;
    let var_90: i64 = 0;
    let mut var_120: i8 = 2;
    let mut var_130: *const *const i8 = nullptr;
    let var_11f: i32 = 0;
    let var_128: i64 = 6;
    let mut result: *mut i128;
    
    if _$LT$uucore..features..format..num_format..Float$u20$as$u20$uucore..features..format..num_format..Formatter$GT$::fmt::hdc40127ddb80f4d7(&var_130, &var_a0, zmm0) == 0
    {
        core::str::converts::from_utf8::ha1effb4cca6d9901(&var_130, var_98, var_90);
        let mut rax_10: i64;
        let mut rdx_14: i64;
        rax_10 = core::result::Result$LT$T$C$E$GT$::unwrap::h373b8612646dc001(&var_130);
        let mut var_88: i64 = rax_10;
        let var_80_1: i64 = rdx_14;
        let mut var_160: *mut c_void;
        
        if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_178, data_419580)) != 0xffff
        {
            let c_2: bool = /* bool c_2 = unimplemented  {sbb rdx, 0x0} */;
            
            if !c_2
            {
                let c_4: bool = /* bool c_4 = unimplemented  {sbb rax, 0x0} */;
                
                if !c_4
                {
                    var_130 = &var_c0;
                    let var_128_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
                    var_120 = &var_178;
                    let var_118_4: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h261e2a7b3123826c;
                    let var_110_4: *mut c_void = &var_78;
                    let var_108_4: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    let var_100_4: *mut c_void = &var_60;
                    let var_f8_4: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    let var_f0_4: *mut i64 = &var_88;
                    let var_e8_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
                    let var_e0_2: *mut c_void = &var_48;
                    let var_d8_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    let var_d0_1: *const *const i8 = &var_b0;
                    let var_c8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
                    var_160 = &data_562408;
                    let var_158_4: i64 = 7;
                    let var_140_4: i64 = 0;
                    let var_150_4: *mut *const *const i8 = &var_130;
                    let var_148_4: i64 = 7;
                    
                    if _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(arg2, &var_160) == 0
                    {
                        goto 'label_4f0238;
                    }
                    
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                }
                else
                {
                    var_130 = &var_c0;
                    let var_128_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
                    var_120 = &var_178;
                    let var_118_3: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h261e2a7b3123826c;
                    let var_110_3: *mut c_void = &var_78;
                    let var_108_3: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    let var_100_3: *mut i64 = &var_88;
                    let var_f8_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
                    let var_f0_3: *mut c_void = &var_48;
                    let var_e8_3: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    let var_e0_1: *const *const i8 = &var_b0;
                    let var_d8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
                    var_160 = &data_5623a8;
                    let var_158_3: i64 = 6;
                    let var_140_3: i64 = 0;
                    let var_150_3: *mut *const *const i8 = &var_130;
                    let var_148_3: i64 = 6;
                    
                    if _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(arg2, &var_160) == 0
                    {
                        goto 'label_4f0238;
                    }
                    
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                }
            }
            else
            {
                var_130 = &var_c0;
                let var_128_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
                var_120 = &var_178;
                let var_118_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h261e2a7b3123826c;
                let var_110_2: *mut i64 = &var_88;
                let var_108_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
                let var_100_2: *mut c_void = &var_48;
                let var_f8_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                let var_f0_2: *const *const i8 = &var_b0;
                let var_e8_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
                var_160 = &data_562358;
                let var_158_2: i64 = 5;
                let var_140_2: i64 = 0;
                let var_150_2: *mut *const *const i8 = &var_130;
                let var_148_2: i64 = 5;
                
                if _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(arg2, &var_160) == 0
                {
                    goto 'label_4f0238;
                }
                
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            }
        }
        else
        {
            var_130 = &var_c0;
            let var_128_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
            var_120 = &var_178;
            let var_118_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h261e2a7b3123826c;
            let var_110_1: *mut i64 = &var_88;
            let var_108_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
            let var_100_1: *mut c_void = &var_48;
            let var_f8_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            let var_f0_1: *const *const i8 = &var_b0;
            let var_e8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
            var_160 = &data_562308;
            let var_158_1: i64 = 5;
            let var_140_1: i64 = 0;
            let var_150_1: *mut *const *const i8 = &var_130;
            let var_148_1: i64 = 5;
            
            if _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(arg2, &var_160) == 0
            {
                'label_4f0238:
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
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hcaeb013c8c4216fe(&var_a0);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3d63831bb78bbaa7(&var_48);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3d63831bb78bbaa7(&var_60);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3d63831bb78bbaa7(&var_78);
    result
}
