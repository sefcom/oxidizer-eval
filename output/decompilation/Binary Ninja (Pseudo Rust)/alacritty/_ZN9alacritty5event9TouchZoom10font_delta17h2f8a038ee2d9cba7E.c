
  fn alacritty::event::TouchZoom::font_delta::h2f8a038ee2d9cba7(arg1: *mut c_void, arg2: *mut i128) -> i64

{
    let mut var_38: f32 = alacritty::event::TouchZoom::distance::ha17fa3104e8be542(arg1);
    let mut rcx: i32;
    rcx = arg2[3] != *arg1.byte_offset(0x30);
    let rcx_1: u64 = rcx << 6;
    let zmm0: i128 = *arg2;
    let zmm1: i128 = arg2[1];
    let zmm2: i128 = arg2[2];
    *arg1.byte_offset(rcx_1).byte_offset(0x30) = arg2[3];
    *arg1.byte_offset(rcx_1).byte_offset(0x20) = zmm2;
    *arg1.byte_offset(rcx_1).byte_offset(0x10) = zmm1;
    *arg1.byte_offset(rcx_1) = zmm0;
    let zmm0_1: [u32; 0x4] = alacritty::event::TouchZoom::distance::ha17fa3104e8be542(arg1);
    zmm0_1[0] = zmm0_1[0] - var_38;
    zmm0_1[0] = zmm0_1[0] * 0.00999999978f;
    zmm0_1[0] = zmm0_1[0] + *arg1.byte_offset(0x80);
    let temp0_1: [u32; 0x4] =
        __orps_xmmxud_memxud(_mm_and_ps(data_4e98a0[0x20][0], zmm0_1), data_4e9c90);
    let var_28: u32 = zmm0_1[0];
    let zmm1_1: [u32; 0x4] = _mm_cmpeq_ss(zmm0_1[0], zmm0_1[0], 3);
    var_38 = _mm_or_ps(_mm_and_ps(0x7fc00000, zmm1_1), _mm_andnot_ps(zmm1_1, temp0_1));
    let mut result: i64;
    let mut zmm0_2: f32;
    result = floorf(_mm_and_ps(data_4e90d0, zmm0_1));
    *arg1.byte_offset(0x80) = var_28 - zmm0_2 * var_38;
    result
}
