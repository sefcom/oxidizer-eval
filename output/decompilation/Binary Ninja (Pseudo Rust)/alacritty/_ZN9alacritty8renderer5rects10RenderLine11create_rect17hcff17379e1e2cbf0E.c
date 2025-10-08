
  fn alacritty::renderer::rects::RenderLine::create_rect::hcff17379e1e2cbf0(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: i64, arg6: i32, arg7: [u32; 0x4] @ zmm0, arg8: [u32; 0x4] @ zmm1, arg9: i32 @ zmm2) -> u8

{
    let temp0: i32 = _mm_max_ss(arg9, 0x3f800000);
    let mut zmm4: i64;
    
    if arg3 < 0
    {
        zmm4 = (arg3 & 1) | arg3 >> 1;
        zmm4 = zmm4 + zmm4;
    }
    else
    {
        zmm4 = arg3;
    }
    
    let zmm5: [f32; 0x4] = *arg2.byte_offset(0x18);
    zmm4 = zmm4 + 1f;
    zmm4 = zmm4 * *arg2.byte_offset(0x1c);
    arg7[0] = arg7[0] + zmm4;
    arg7[0] = arg7[0] - arg8[0];
    arg8 = 0xbf000000;
    arg8[0] = -0.5f * temp0;
    arg8[0] = arg8[0] + arg7[0];
    let mut zmm0: u128 = roundf(arg8);
    let mut zmm3: i64;
    zmm3 = zmm4 - temp0;
    let mut zmm1: i32;
    
    if arg5 + 1 < 0
    {
        zmm1 = ((arg5 + 1) & 1) | (arg5 + 1) >> 1;
        zmm1 = zmm1 + zmm1;
    }
    else
    {
        zmm1 = arg5 + 1;
    }
    
    let temp0_2: i64 = _mm_min_ss(zmm3, zmm0);
    zmm1 = zmm1 * zmm5[0];
    
    if arg4 < 0
    {
        zmm0 = (arg4 & 1) | arg4 >> 1;
        zmm0 = zmm0 + zmm0;
    }
    else
    {
        zmm0 = arg4;
    }
    
    zmm5[0] = zmm5[0] * zmm0;
    zmm1 = zmm1 - zmm5[0];
    *arg1 = _mm_add_ps(_mm_unpacklo_ps(zmm5, temp0_2), *arg2.byte_offset(0x20))[0];
    arg1[1] = zmm1;
    *arg1.byte_offset(0xc) = temp0;
    let result: u8 = arg6 >> 0x10;
    *arg1.byte_offset(0x16) = result;
    *arg1.byte_offset(0x14) = arg6;
    arg1[2] = 0x3f800000;
    *arg1.byte_offset(0x17) = 0;
    result
}
