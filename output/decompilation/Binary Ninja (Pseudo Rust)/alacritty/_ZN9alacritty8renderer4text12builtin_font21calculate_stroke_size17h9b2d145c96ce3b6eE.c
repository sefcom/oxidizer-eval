
  fn alacritty::renderer::text::builtin_font::calculate_stroke_size::h9b2d145c96ce3b6e(arg1: i64) -> i64

{
    let mut rax: u64;
    let zmm0: [u32; 0x4];
    
    if arg1 < 0
    {
        rax = arg1 >> 1;
        zmm0[0] = (arg1 & 1) | rax;
        zmm0[0] = zmm0[0] + zmm0[0];
    }
    else
    {
        zmm0[0] = arg1;
    }
    
    let var_8: u64 = rax;
    zmm0[0] = zmm0[0] * 0.125f;
    let zmm0_1: f32 = roundf(zmm0);
    let rax_2: i64 = zmm0_1;
    let mut rax_3: i64 = 0;
    
    if zmm0_1 >= 0f
    {
        rax_3 = ((zmm0_1 - 9.22337204e+18f) & rax_2 >> 0x3f) | rax_2;
    }
    
    let mut rdi_2: i64 = -1;
    
    if zmm0_1 <= 1.8446743e+19f
    {
        rdi_2 = rax_3;
    }
    
    /* tailcall */
    core::cmp::Ord::max::h20b6d33cbe488162(rdi_2, 1)
}
