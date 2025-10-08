
  fn uu_id::pline::h1d390836edad1713(arg1: i8) -> i64

{
    let mut rsi: uid_t;
    
    if (arg1 & 1) == 0
    {
        rsi = uucore::features::process::getuid::h408babfb7f2600cd();
    }
    
    let mut var_98: *mut i64;
    _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::h5d0bb482984d9c00(&var_98, rsi);
    let mut var_118: i64;
    core::result::Result$LT$T$C$E$GT$::unwrap::h5bb4bfd2c71233d9(&var_118, &var_98);
    let mut var_1a8: i64;
    let mut var_1a0: i64;
    let var_100: i64;
    let var_b8: i64;
    let mut rax_3: i64;
    
    if -(var_b8) == -0x8000000000000000
    {
        var_1a0 = 1;
        var_1a0 = 0;
        var_1a8 = 0;
        rax_3 = var_100;
        
        if rax_3 == -0x8000000000000000
        {
            goto 'label_45dc29;
        }
        
        goto 'label_45dbe5;
    }
    
    let var_b0: i128;
    var_1a0 = var_b0;
    var_1a8 = var_b8;
    rax_3 = var_100;
    let mut var_190: i64;
    let mut var_188: i64;
    let mut var_170: i64;
    let mut rdx: i64;
    let var_d0: i64;
    let var_c8: i128;
    
    if rax_3 != -0x8000000000000000
    {
        'label_45dbe5:
        let var_f8: i128;
        var_188 = var_f8;
        var_190 = rax_3;
        rdx = var_d0;
        
        if rdx == -0x8000000000000000
        {
            'label_45dc4f:
            var_170 = 1;
            let var_168_1: i64 = 0;
            rdx = 0;
        }
        else
        {
            var_170 = var_c8;
        }
    }
    else
    {
        'label_45dc29:
        var_188 = 1;
        var_188 = 0;
        var_190 = 0;
        rdx = var_d0;
        
        if rdx == -0x8000000000000000
        {
            goto 'label_45dc4f;
        }
        
        var_170 = var_c8;
    }
    let mut var_178: i64 = rdx;
    let var_e8: i64;
    let mut rdx_1: i64 = var_e8;
    let mut var_158: i64;
    let var_e0: i128;
    
    if rdx_1 != -0x8000000000000000
    {
        var_158 = var_e0;
    }
    else
    {
        var_158 = 1;
        var_158 = 0;
        rdx_1 = 0;
    }
    let mut var_160: i64 = rdx_1;
    var_98 = &var_118;
    let var_90: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let var_88: *mut i64 = &var_1a8;
    let var_80: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let mut var_a0: ();
    let var_78: *mut c_void = &var_a0;
    let var_70: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
    let mut var_9c: ();
    let var_68: *mut c_void = &var_9c;
    let var_60: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
    let var_58: *mut i64 = &var_190;
    let var_50: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let var_48: *mut i64 = &var_178;
    let var_40: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let var_38: *mut i64 = &var_160;
    let var_30: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let mut var_148: *mut c_void = &data_4e8e30;
    let var_140: i64 = 8;
    let var_128: i64 = 0;
    let var_138: *mut *mut i64 = &var_98;
    let var_130: i64 = 7;
    std::io::stdio::_print::h5e446ff973c02de6(&var_148);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h084553603f2ff391(var_160, var_158);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h084553603f2ff391(var_178, var_170);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h084553603f2ff391(var_190, var_188);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h084553603f2ff391(var_1a8, var_1a0);
    let var_110: i64;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h084553603f2ff391(var_118, var_110)
}
