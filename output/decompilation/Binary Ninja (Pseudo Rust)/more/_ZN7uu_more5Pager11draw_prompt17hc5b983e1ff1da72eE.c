
  fn uu_more::Pager::draw_prompt::hc5b983e1ff1da72e(arg1: *mut c_void, arg2: i64, arg3: i64, arg4: i32) -> i64

{
    let rax: i64 = *arg1.byte_offset(0x70);
    let mut var_108: *mut *mut c_void;
    let mut var_d8: i16;
    let mut var_c0: *mut *mut [i8; 0x86];
    let mut rax_2: *mut i16;
    
    if arg3 != rax
    {
        let mut zmm2: u128 = 0x4530000043300000;
        let mut zmm1: u128 = _mm_unpacklo_epi32(arg3, zmm2);
        let zmm3: [f64; 0x2] = data_41ddb0[0x90][0];
        zmm1 = _mm_sub_pd(zmm1, zmm3);
        let mut zmm0: u128;
        zmm0 = _mm_unpackhi_pd(zmm1, zmm1) + zmm1;
        zmm1 = _mm_sub_pd(_mm_unpacklo_epi32(rax, zmm2), zmm3);
        zmm2 = _mm_unpackhi_pd(zmm1, zmm1) + zmm1;
        zmm0 = zmm0 / zmm2;
        zmm0 = zmm0 * 100.0;
        let mut zmm0_1: i64;
        let mut zmm1_1: [u64; 0x2];
        zmm0_1 = round(zmm0);
        var_d8 =
            _mm_min_sd(0x40efffe000000000, _mm_max_sd(_mm_xor_pd(zmm1_1, zmm1_1)[0], zmm0_1)[0]);
        var_c0 = &var_d8;
        let var_b8_1: fn(arg1: *mut i16, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::h76cd049dd60d778d;
        var_108 = &data_525370;
        let var_100_1: i64 = 2;
        let var_e8_1: i64 = 0;
        rax_2 = &var_c0;
    }
    else
    {
        let mut rax_1: *mut *mut [i8; 0x86] = *arg1.byte_offset(0x60);
        let mut rcx: *mut *mut [i8; 0x86] = 1;
        
        if rax_1 != 0
        {
            rcx = rax_1;
            rax_1 = *arg1.byte_offset(0x68);
        }
        
        var_c0 = rcx;
        let var_b8: *mut *mut [i8; 0x86] = rax_1;
        var_d8 = &var_c0;
        let var_d0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hadf97448b344c082;
        var_108 = &data_525360;
        let var_100: i64 = 1;
        let var_e8: i64 = 0;
        rax_2 = &var_d8;
    }
    
    let var_f8: *mut i16 = rax_2;
    let var_f0: i64 = 1;
    let mut var_48: ();
    core::option::Option$LT$T$GT$::map_or_else::hc1ec3d5ca74f474d(&var_48, &var_108);
    var_d8 = &var_48;
    let var_d0_2: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_108 = &data_525390;
    let var_100_2: i64 = 2;
    let var_e8_2: i64 = 0;
    let var_f8_1: *mut i16 = &var_d8;
    let var_f0_1: i64 = 1;
    core::option::Option$LT$T$GT$::map_or_else::hc1ec3d5ca74f474d(&var_c0, &var_108);
    let mut var_68: i128 = var_c0;
    let mut var_88: i128;
    let mut rbp: i32;
    let var_b0: i64;
    let mut var_78_1: i64;
    
    if *arg1.byte_offset(0x80) != 0
    {
        if arg4 != 0x110000
        {
            let mut var_8c: i32 = arg4;
            var_c0 = &var_68;
            let var_b8_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            let var_b0_1: *mut i32 = &var_8c;
            let var_a8_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
            var_108 = &data_5253b0;
            let var_100_4: i64 = 3;
            let var_e8_4: i64 = 0;
            let var_f8_3: *const *mut *mut [i8; 0x86] = &var_c0;
            let var_f0_3: i64 = 2;
            core::option::Option$LT$T$GT$::map_or_else::hc1ec3d5ca74f474d(&var_d8, &var_108);
            goto 'label_47b6b7;
        }
        
        var_d8 = &var_68;
        let var_d0_3: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_108 = &data_5253e0;
        let var_100_3: i64 = 2;
        let var_e8_3: i64 = 0;
        let var_f8_2: *mut i16 = &var_d8;
        let var_f0_2: i64 = 1;
        core::option::Option$LT$T$GT$::map_or_else::hc1ec3d5ca74f474d(&var_c0, &var_108);
        var_88 = var_c0;
        var_78_1 = var_b0;
        rbp = 1;
    }
    else if arg4 != 0x110000
    {
        var_c0 = &var_68;
        let var_b8_3: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        let var_b0_2: *mut *mut [i8; 0x0] = &data_525430;
        let var_a8_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hadf97448b344c082;
        var_108 = &data_41f780;
        let var_100_5: i64 = 2;
        let var_e8_5: i64 = 0;
        let var_f8_4: *const *mut *mut [i8; 0x86] = &var_c0;
        let var_f0_4: i64 = 2;
        core::option::Option$LT$T$GT$::map_or_else::hc1ec3d5ca74f474d(&var_d8, &var_108);
        'label_47b6b7:
        var_88 = var_d8;
        let var_c8: i64;
        var_78_1 = var_c8;
        rbp = 1;
    }
    else
    {
        let var_78: i64 = var_b0;
        var_88 = var_68;
        rbp = 0;
    }
    var_108 = &data_41f8c1;
    let var_100_6: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$crossterm..style..types..attribute..Attribute$u20$as$u20$core..fmt..Display$GT$::fmt::h487a2075555157a2;
    let var_f8_5: *mut i128 = &var_88;
    let var_f0_5: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let var_e8_6: *mut c_void = &data_41f8c2;
    let var_e0: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$crossterm..style..types..attribute..Attribute$u20$as$u20$core..fmt..Display$GT$::fmt::h487a2075555157a2;
    var_c0 = &data_525400;
    let var_b8_4: i64 = 3;
    let var_a0: i64 = 0;
    let var_b0_3: *const *mut *mut c_void = &var_108;
    let var_a8_3: i64 = 3;
    core::result::Result$LT$T$C$E$GT$::unwrap::h3a901ae51f259b59(
        _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h3907d576e608aa2a(
        arg2, &var_c0));
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::habcac018958bfd8a(&var_88);
    
    if rbp != 0
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::habcac018958bfd8a(&var_68);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::habcac018958bfd8a(&var_48)
}
