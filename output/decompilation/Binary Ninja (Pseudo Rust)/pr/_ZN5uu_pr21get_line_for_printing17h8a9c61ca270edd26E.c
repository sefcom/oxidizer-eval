
  fn uu_pr::get_line_for_printing::h8a9c61ca270edd26(arg1: *mut i128, arg2: *mut c_void, arg3: *mut i64, arg4: i64, arg5: i64, arg6: i64, arg7: i64, arg8: i64) -> i64

{
    let mut var_c8: i64 = arg4;
    let mut var_c0: i64 = 0;
    let var_b8: i64 = 1;
    let var_b0: i64 = 0;
    let mut var_48: ();
    uu_pr::get_formatted_line_number::hdc8b635f2fe32dc7(&var_48, arg2, arg3[4], arg5);
    let mut rdi_1: i64;
    rdi_1 = *arg3 == -0x8000000000000000;
    let rbp_1: *mut c_void = &arg3[rdi_1];
    core::result::Result$LT$T$C$E$GT$::unwrap::h1ac7a762ade089cc(rdi_1, rbp_1);
    let mut var_138: *mut c_void = rbp_1;
    let mut var_f8: *mut c_void = &var_48;
    let var_f0: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    let var_e8: *mut *mut c_void = &var_138;
    let var_e0: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc92107804a18d2f9;
    let mut var_168: *mut c_void = &data_46bf10;
    let var_160: i64 = 2;
    let var_148: i64 = 0;
    let var_158: *mut *mut c_void = &var_f8;
    let var_150: i64 = 2;
    let mut var_90: i128;
    core::option::Option$LT$T$GT$::map_or_else::h4ea8d69383c77fdd(&var_90, &var_168);
    let mut var_118: i128 = var_90;
    let mut var_a8: *mut c_void = arg2.byte_offset(0xa8);
    let rax_1: i64 = core::iter::traits::iterator::Iterator::fold::h9922291a76037142(*var_118[8]);
    let mut rax_2: *mut c_void = arg2.byte_offset(0xc0);
    
    if *arg2.byte_offset(0x143) != 0
    {
        rax_2 = &var_c0;
    }
    
    let var_80: i64;
    let mut var_a0: i64 = rax_1 * 7 + var_80;
    
    if arg5 + 1 == arg8
    {
        rax_2 = &var_c0;
    }
    
    let mut var_98: *mut c_void = rax_2;
    let mut var_60: *mut i64 = &var_c8;
    let var_58: *mut i64 = &var_a0;
    let var_50: *mut i128 = &var_118;
    let mut var_128_1: i64;
    
    if arg6 == 0
    {
        var_168 = var_90;
        var_128_1 = var_80;
        var_138 = var_168;
    }
    else
    {
        uu_pr::get_line_for_printing::_$u7b$$u7b$closure$u7d$$u7d$::h3e398a0d38c95d65(&var_168, 
            &var_60, arg7);
        let rax_3: *mut c_void = var_168;
        var_f8 = var_160;
        var_168 = var_118;
        
        if rax_3 == -0x8000000000000000
        {
            var_128_1 = var_80;
            var_138 = var_168;
        }
        else
        {
            let var_130_1: i128 = var_f8;
            var_138 = rax_3;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_168);
        }
    }
    var_168 = &var_a8;
    let var_160_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc92107804a18d2f9;
    let var_158_2: *mut *mut c_void = &var_138;
    let var_150_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    let var_148_1: *mut *mut c_void = &var_98;
    let var_140: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc92107804a18d2f9;
    var_f8 = &data_475660;
    let var_f0_1: i64 = 3;
    let var_d8: i64 = 0;
    let var_e8_1: *const *mut c_void = &var_168;
    let var_e0_1: i64 = 3;
    let mut var_78: i128;
    core::option::Option$LT$T$GT$::map_or_else::h4ea8d69383c77fdd(&var_78, &var_f8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_138);
    let var_68: i64;
    arg1[1] = var_68;
    *arg1 = var_78;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_48);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_c0)
}
