
  fn uu_more::Pager::draw_prompt::hbe0a765e7105d705(arg1: *mut c_void, arg2: i64, arg3: i64, arg4: i32) -> i64

{
    let rax: i64 = *arg1.byte_offset(0x30);
    let mut var_148: *mut *mut [i8; 0x6c];
    let mut var_118: i16;
    let mut var_100: *mut c_void;
    let mut rax_2: *mut i16;
    
    if rax != arg3
    {
        let zmm2: [f64; 0x2] = data_40e6d0;
        let mut zmm1: u128 = _mm_unpacklo_epi32(arg3, zmm2[0]);
        let zmm3: [f64; 0x2] = data_40e660;
        zmm1 = _mm_sub_pd(zmm1, zmm3);
        let mut zmm0: u128;
        zmm0 = _mm_unpackhi_pd(zmm1, zmm1) + zmm1;
        zmm1 = _mm_sub_pd(_mm_unpacklo_epi32(rax, zmm2[0]), zmm3);
        let temp0_6: [f64; 0x2] = _mm_unpackhi_pd(zmm1, zmm1);
        temp0_6[0] = temp0_6[0] + zmm1;
        zmm0 = zmm0 / temp0_6[0];
        zmm0 = zmm0 * 100.0;
        let mut zmm0_1: i64;
        let mut zmm1_1: [u64; 0x2];
        zmm0_1 = round(zmm0);
        var_118 =
            _mm_min_sd(0x40efffe000000000, _mm_max_sd(_mm_xor_pd(zmm1_1, zmm1_1)[0], zmm0_1)[0]);
        var_100 = &var_118;
        let var_f8_1: fn(arg1: *mut i16, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hc16e9a303f8fca40;
        var_148 = &data_562a98;
        let var_140_1: i64 = 2;
        let var_128_1: i64 = 0;
        rax_2 = &var_100;
    }
    else
    {
        let mut rax_1: *mut c_void = *arg1.byte_offset(0x20);
        let mut rcx: *mut c_void = 1;
        
        if rax_1 != 0
        {
            rcx = rax_1;
            rax_1 = *arg1.byte_offset(0x28);
        }
        
        var_100 = rcx;
        let var_f8: *mut c_void = rax_1;
        var_118 = &var_100;
        let var_110_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h482629c9d5db64e0;
        var_148 = &data_562a88;
        let var_140: i64 = 1;
        let var_128: i64 = 0;
        rax_2 = &var_118;
    }
    
    let var_138: *mut i16 = rax_2;
    let var_130: i64 = 1;
    let mut var_a8: ();
    core::option::Option$LT$T$GT$::map_or_else::h94c131af24f37af4(&var_a8, &var_148);
    var_100 = &var_a8;
    let var_f8_2: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    var_148 = &data_562ab8;
    let var_140_2: i64 = 2;
    let var_128_2: i64 = 0;
    let var_138_1: *mut *mut c_void = &var_100;
    let var_130_1: i64 = 1;
    let mut var_90: i128;
    core::option::Option$LT$T$GT$::map_or_else::h94c131af24f37af4(&var_90, &var_148);
    let mut var_c8: i128 = var_90;
    let var_80: i64;
    let var_b8: i64 = var_80;
    let mut rax_5: i64;
    let mut rbp: i32;
    
    if *arg1.byte_offset(0x42) != 0
    {
        if arg4 != 0x110000
        {
            let mut var_cc: i32 = arg4;
            var_100 = &var_c8;
            let var_f8_4: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            let var_f0_1: *mut i32 = &var_cc;
            let var_e8_1: fn(arg1: *mut i32, arg2: *mut i64) -> u64 =
                _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
            var_148 = &data_562ad8;
            let var_140_4: i64 = 3;
            let var_128_4: i64 = 0;
            let var_138_3: *mut *mut c_void = &var_100;
            let var_130_3: i64 = 2;
            rbp = 1;
            let mut var_78: i128;
            core::option::Option$LT$T$GT$::map_or_else::h94c131af24f37af4(&var_78, &var_148);
            var_118 = var_78;
            let var_68: i64;
            rax_5 = var_68;
        }
        else
        {
            var_100 = &var_c8;
            let var_f8_3: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_148 = &data_562b08;
            let var_140_3: i64 = 2;
            let var_128_3: i64 = 0;
            let var_138_2: *mut *mut c_void = &var_100;
            let var_130_2: i64 = 1;
            rbp = 1;
            let mut var_60: i128;
            core::option::Option$LT$T$GT$::map_or_else::h94c131af24f37af4(&var_60, &var_148);
            var_118 = var_60;
            let var_50: i64;
            rax_5 = var_50;
        }
        
        goto 'label_4dda96;
    }
    
    let mut r15: *mut c_void;
    
    if arg4 != 0x110000
    {
        var_100 = &var_c8;
        let var_f8_5: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        let var_f0_2: *mut *mut c_void = &data_562b58;
        let var_e8_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h482629c9d5db64e0;
        var_148 = &data_413510;
        let var_140_5: i64 = 2;
        let var_128_5: i64 = 0;
        let var_138_4: *mut *mut c_void = &var_100;
        let var_130_4: i64 = 2;
        rbp = 1;
        let mut var_48: i128;
        core::option::Option$LT$T$GT$::map_or_else::h94c131af24f37af4(&var_48, &var_148);
        var_118 = var_48;
        let var_38: i64;
        rax_5 = var_38;
        'label_4dda96:
        let var_108_1: i64 = rax_5;
        rbp = 1;
        r15 = nullptr;
    }
    else
    {
        let var_108: i64 = var_80;
        var_118 = var_90;
        r15 = 1;
    }
    
    var_148 = &data_418aac;
    let var_140_6: fn(arg1: *mut i8, arg2: *mut c_void) -> i64 = _$LT$crossterm..style..types..attribute..Attribute$u20$as$u20$core..fmt..Display$GT$::fmt::h8e43bbdd8f4ff5a1;
    let var_138_5: *mut i16 = &var_118;
    let var_130_5: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    let var_128_6: *const i8 = &data_418ae9[0x4f];
    let var_120: fn(arg1: *mut i8, arg2: *mut c_void) -> i64 = _$LT$crossterm..style..types..attribute..Attribute$u20$as$u20$core..fmt..Display$GT$::fmt::h8e43bbdd8f4ff5a1;
    var_100 = &data_562b28;
    let var_f8_6: i64 = 3;
    let var_e0: i64 = 0;
    let var_f0_3: *const *mut *mut [i8; 0x6c] = &var_148;
    let var_e8_3: i64 = 3;
    core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(
        _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h0f6acf0ef7a6b873(
        arg2, &var_100));
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&var_118);
    
    if r15 == 0
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&var_c8);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&var_a8)
}
