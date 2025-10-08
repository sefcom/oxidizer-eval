
  float alacritty::renderer::text::builtin_font::Canvas::h_line_bounds::he0cd635d93fca4bd(int32_t arg1, int64_t arg2, float arg3)

{
    float zmm1;
    
    if (arg2 < 0)
    {
        zmm1 = (arg2 & 1) | arg2 >> 1;
        zmm1 = zmm1 + zmm1;
    }
    else
        zmm1 = arg2;
    
    zmm1 = zmm1 * 0.5f;
    float var_1c = arg3;
    arg3 = arg3 - zmm1;
    int32_t rdi = arg3;
    
    if (arg3 > 2.14748352e+09f)
        rdi = 0x7fffffff;
    
    if (FCMP_UO(arg3, arg3))
        rdi = 0;
    
    float result = core::cmp::Ord::max::h485505c56320f468(rdi, 0);
    arg3 = zmm1 + var_1c;
    int32_t rdi_1 = arg3;
    
    if (arg3 > 2.14748352e+09f)
        rdi_1 = 0x7fffffff;
    
    if (FCMP_UO(arg3, arg3))
        rdi_1 = 0;
    
    core::cmp::Ord::min::h3552534d3430b892(rdi_1, arg1);
    return result;
}
