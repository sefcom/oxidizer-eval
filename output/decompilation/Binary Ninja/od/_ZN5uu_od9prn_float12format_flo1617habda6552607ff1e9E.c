
  int64_t uu_od::prn_float::format_flo16::habda6552607ff1e9(int128_t* arg1, int32_t arg2)

{
    char rax;
    int32_t zmm0[0x4];
    rax = std_detect::detect::cache::test::h42d452cfc9d2956f();
    int128_t zmm0_1;
    
    if (!rax)
        zmm0_1 = half::binary16::arch::f16_to_f64_fallback::h3fc5d8a950fdbd03(arg2);
    else
        zmm0_1 = half::binary16::arch::x86::f16_to_f32_x86_f16c::hfa00155f589602d7(arg2, zmm0);
    
    /* tailcall */
    return uu_od::prn_float::format_float::hb20d3bf5c81306f8(arg1, 9, 4, zmm0_1);
}
