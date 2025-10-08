
  fn uu_pr::get_line_for_printing::hd1db5805a3293521(arg1: *mut i128, arg2: *mut c_void, arg3: *mut i64, arg4: i64, arg5: i64, arg6: i8, arg7: i64, arg8: i64) -> i64

{
    let mut var_98: i64 = arg4;
    let mut var_90: i64 = 0;
    let var_88: i64 = 1;
    let var_80: i64 = 0;
    let mut var_48: ();
    uu_pr::get_formatted_line_number::h27e3eb06f4d26408(&var_48, arg2, arg3[4], arg5);
    let mut rdi_1: i64;
    rdi_1 = 0 + -(*arg3);
    let r12_1: *mut c_void = &arg3[rdi_1];
    core::result::Result$LT$T$C$E$GT$::unwrap::h117773ddb1da076c(rdi_1, r12_1);
    let mut var_e8: *mut c_void = r12_1;
    let mut var_c8: *mut c_void = &var_48;
    let var_c0: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let var_b8: *mut *mut c_void = &var_e8;
    let var_b0: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdf43014d0105ab1f;
    let mut var_138: *const i8 = &data_456960;
    let var_130: i64 = 2;
    let var_118: i64 = 0;
    let var_128: *mut *mut c_void = &var_c8;
    let var_120: i64 = 2;
    let mut var_108: i128;
    core::option::Option$LT$T$GT$::map_or_else::ha768742fd52e18ba(&var_108, &var_138);
    var_e8 = var_108;
    let mut var_78: *mut c_void = arg2.byte_offset(0xa8);
    let var_e0: i64;
    let rax_1: i64 = core::iter::traits::iterator::Iterator::fold::ha87ed6a5236a3e93(var_e0);
    let mut rax_2: *mut c_void = arg2.byte_offset(0xc0);
    
    if (*arg2.byte_offset(0x143) & 1) != 0
    {
        rax_2 = &var_90;
    }
    
    if arg5 + 1 == arg8
    {
        rax_2 = &var_90;
    }
    
    let var_f8: i64;
    let mut var_70: i64 = rax_1 * 7 + var_f8;
    let mut var_68: *mut c_void = rax_2;
    let mut var_60: *mut i64 = &var_98;
    let var_58: *mut i64 = &var_70;
    let var_50: *mut *mut c_void = &var_e8;
    let mut rdi_5: *mut i128;
    let mut var_f8_1: i64;
    
    if (arg6 & 1) == 0
    {
        var_138 = var_e8;
        rdi_5 = arg1;
        var_f8_1 = var_f8;
        var_108 = var_138;
    }
    else
    {
        uu_pr::get_line_for_printing::_$u7b$$u7b$closure$u7d$$u7d$::h87bd5cf778ef51f9(&var_138, 
            &var_60, arg7);
        let rax_3: *const i8 = var_138;
        var_c8 = var_130;
        var_138 = var_e8;
        rdi_5 = arg1;
        
        if rax_3 == -0x8000000000000000
        {
            var_f8_1 = var_f8;
            var_108 = var_138;
        }
        else
        {
            var_108 = var_c8;
            var_108 = rax_3;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_138);
        }
    }
    var_138 = &var_78;
    let var_130_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdf43014d0105ab1f;
    let var_128_2: *mut i128 = &var_108;
    let var_120_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let var_118_1: *mut *mut c_void = &var_68;
    let var_110: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdf43014d0105ab1f;
    var_c8 = &data_458358;
    let var_c0_1: i64 = 3;
    let var_a8: i64 = 0;
    let var_b8_1: *const *const i8 = &var_138;
    let var_b0_1: i64 = 3;
    core::option::Option$LT$T$GT$::map_or_else::ha768742fd52e18ba(rdi_5, &var_c8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_108);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_48);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_90)
}
