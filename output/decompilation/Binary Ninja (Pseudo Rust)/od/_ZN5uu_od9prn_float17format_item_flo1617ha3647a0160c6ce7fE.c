
  fn uu_od::prn_float::format_item_flo16::ha3647a0160c6ce7f(arg1: *mut i128, arg2: i64 @ zmm0) -> *mut i128

{
    let mut rax: i8;
    let mut zmm1: [i32; 0x4];
    rax = std_detect::detect::cache::test::h42d452cfc9d2956f();
    let mut rax_1: i32;
    
    if rax == 0
    {
        rax_1 = half::binary16::arch::f64_to_f16_fallback::h60cd6c4867711914(arg2);
    }
    else
    {
        let mut zmm0: u128;
        zmm0 = arg2;
        rax_1 = half::binary16::arch::x86::f32_to_f16_x86_f16c::h1e8e9fb359715c05(zmm0, zmm1);
    }
    
    let mut var_28: ();
    uu_od::prn_float::format_flo16::habda6552607ff1e9(&var_28, rax_1);
    let mut var_68: *mut c_void = &var_28;
    let var_60: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let mut var_58: *mut *mut [i8; 0x1e] = &data_503838;
    let var_50: i64 = 1;
    let var_38: i64 = 0;
    let var_48: *mut *mut c_void = &var_68;
    let var_40: i64 = 1;
    core::option::Option$LT$T$GT$::map_or_else::h56b2ee9aee1b26d0(arg1, &var_58);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0ecbbb68ed17b0f1(&var_28);
    arg1
}
