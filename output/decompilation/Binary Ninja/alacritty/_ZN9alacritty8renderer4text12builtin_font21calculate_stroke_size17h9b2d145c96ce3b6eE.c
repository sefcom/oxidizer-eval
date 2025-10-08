
  int64_t alacritty::renderer::text::builtin_font::calculate_stroke_size::h9b2d145c96ce3b6e(int64_t arg1)

{
    uint64_t rax;
    uint32_t zmm0[0x4];
    
    if (arg1 < 0)
    {
        rax = arg1 >> 1;
        zmm0[0] = (arg1 & 1) | rax;
        zmm0[0] = zmm0[0] + zmm0[0];
    }
    else
        zmm0[0] = arg1;
    
    uint64_t var_8 = rax;
    zmm0[0] = zmm0[0] * 0.125f;
    float zmm0_1 = roundf(zmm0);
    int64_t rax_2 = zmm0_1;
    int64_t rax_3 = 0;
    
    if (zmm0_1 >= 0f)
        rax_3 = ((zmm0_1 - 9.22337204e+18f) & rax_2 >> 0x3f) | rax_2;
    
    int64_t rdi_2 = -1;
    
    if (zmm0_1 <= 1.8446743e+19f)
        rdi_2 = rax_3;
    
    /* tailcall */
    return core::cmp::Ord::max::h20b6d33cbe488162(rdi_2, 1);
}
