
  fn alacritty::renderer::rects::RectRenderer::add_rect::h35912be66eb425f4(arg1: *mut i64, arg2: *mut i64, arg3: [f32; 0x4] @ zmm0, arg4: [f32; 0x4] @ zmm1) -> i64

{
    let rax: i8 = *arg2.byte_offset(0x14);
    let rcx: i8 = *arg2.byte_offset(0x15);
    let rdx: i8 = *arg2.byte_offset(0x16);
    let zmm3: [f32; 0x4] = arg2[2];
    zmm3[0] = zmm3[0] * 255f;
    let rdi: i8 = _mm_min_ss(0x437f0000, _mm_max_ss(0, zmm3[0])[0]);
    let mut zmm2: u128 = *arg2;
    let temp0_2: [f32; 0x4] = _mm_unpacklo_ps(arg3, arg4[0]);
    zmm2 = _mm_div_ps(zmm2, temp0_2);
    let temp0_4: [f32; 0x4] = _mm_add_ps(0xbf800000, zmm2);
    let temp0_5: [f32; 0x4] = _mm_sub_ps(data_4e97c0, zmm2);
    let temp0_7: [f32; 0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_5, temp0_4, 1), temp0_4, 0xe2);
    let mut var_38: i64 = temp0_7[0];
    let var_30: i8 = rax;
    let var_2f: i8 = rcx;
    let var_2e: i8 = rdx;
    let var_2d: i8 = rdi;
    let temp0_8: [f32; 0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x55);
    let mut var_50: f32 = temp0_4[0];
    let var_48: i8 = rax;
    let var_47: i8 = rcx;
    let var_46: i8 = rdx;
    let var_45: i8 = rdi;
    let var_40: f32 = temp0_8[0];
    let var_3c: i8 = rax;
    let var_3b: i8 = rcx;
    let var_3a: i8 = rdx;
    let var_39: i8 = rdi;
    zmm2 = _mm_div_ps(arg2[1], temp0_2);
    let temp0_10: [f32; 0x4] = _mm_add_ps(temp0_7, zmm2);
    let temp0_11: [f32; 0x4] = _mm_sub_ps(temp0_7, zmm2);
    zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_11, temp0_10, 1), temp0_10, 0xe2);
    let var_4c: f32 = _mm_shuffle_ps(temp0_11, temp0_11, 0x55)[0];
    let mut var_44: f32 = temp0_10[0];
    let mut var_28: i64 = zmm2;
    let var_20: i8 = rax;
    let var_1f: i8 = rcx;
    let var_1e: i8 = rdx;
    let var_1d: i8 = rdi;
    alloc::vec::Vec$LT$T$C$A$GT$::push::he4bc558e25e20e3d(arg1, &var_38);
    alloc::vec::Vec$LT$T$C$A$GT$::push::he4bc558e25e20e3d(arg1, &var_50);
    alloc::vec::Vec$LT$T$C$A$GT$::push::he4bc558e25e20e3d(arg1, &var_44);
    alloc::vec::Vec$LT$T$C$A$GT$::push::he4bc558e25e20e3d(arg1, &var_44);
    alloc::vec::Vec$LT$T$C$A$GT$::push::he4bc558e25e20e3d(arg1, &var_28);
    alloc::vec::Vec$LT$T$C$A$GT$::push::he4bc558e25e20e3d(arg1, &var_50)
}
