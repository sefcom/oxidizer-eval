
  fn alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(arg1: i32, arg2: i64, arg3: f32) -> f32

{
    let mut zmm1: f32;
    
    if arg2 < 0
    {
        zmm1 = (arg2 & 1) | arg2 >> 1;
        zmm1 = zmm1 + zmm1;
    }
    else
    {
        zmm1 = arg2;
    }
    
    zmm1 = zmm1 * 0.5f;
    let var_1c: f32 = arg3;
    arg3 = arg3 - zmm1;
    let mut rdi: i32 = arg3;
    
    if arg3 > 2.14748352e+09f
    {
        rdi = 0x7fffffff;
    }
    
    if FCMP_UO(arg3, arg3)
    {
        rdi = 0;
    }
    
    let result: f32 = core::cmp::Ord::max::h485505c56320f468(rdi, 0);
    arg3 = zmm1 + var_1c;
    let mut rdi_1: i32 = arg3;
    
    if arg3 > 2.14748352e+09f
    {
        rdi_1 = 0x7fffffff;
    }
    
    if FCMP_UO(arg3, arg3)
    {
        rdi_1 = 0;
    }
    
    core::cmp::Ord::min::h3552534d3430b892(rdi_1, arg1);
    result
}
