
  fn uu_od::prn_float::format_flo16::habda6552607ff1e9(arg1: *mut i128, arg2: i32) -> i64

{
    let mut rax: i8;
    let mut zmm0: [i32; 0x4];
    rax = std_detect::detect::cache::test::h42d452cfc9d2956f();
    let mut zmm0_1: i128;
    
    if rax == 0
    {
        zmm0_1 = half::binary16::arch::f16_to_f64_fallback::h3fc5d8a950fdbd03(arg2);
    }
    else
    {
        zmm0_1 = half::binary16::arch::x86::f16_to_f32_x86_f16c::hfa00155f589602d7(arg2, zmm0);
    }
    
    /* tailcall */
    uu_od::prn_float::format_float::hb20d3bf5c81306f8(arg1, 9, 4, zmm0_1)
}
