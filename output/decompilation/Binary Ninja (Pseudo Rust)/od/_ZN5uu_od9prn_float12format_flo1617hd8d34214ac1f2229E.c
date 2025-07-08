
  fn uu_od::prn_float::format_flo16::hd8d34214ac1f2229(arg1: *mut i128, arg2: i32) -> i64

{
    let mut zmm0: [u64; 0x2];
    
    if std_detect::detect::cache::test::h15354216764ae092() == 0
    {
        zmm0 = half::binary16::arch::f16_to_f64_fallback::h99c57f7b07aa0fd1(arg2);
    }
    else
    {
        zmm0 = half::binary16::arch::x86::f16_to_f32_x86_f16c::hae4e4afa5bc8fbe3(arg2);
        zmm0[0] = zmm0[0];
    }
    
    /* tailcall */
    uu_od::prn_float::format_float::h341a0cfde1a47520(arg1, 9, 4, zmm0)
}
