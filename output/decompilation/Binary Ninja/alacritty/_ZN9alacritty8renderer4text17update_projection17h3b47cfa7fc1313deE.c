
  float alacritty::renderer::text::update_projection::h3b47cfa7fc1313de(int64_t, void* arg2)

{
    float result = *(arg2 + 0x10);
    int32_t rdx = result;
    int512_t zmm2;
    zmm2 = {0};
    
    if (result < 0f)
        rdx = 0;
    
    float zmm1 = *(arg2 + 0x20);
    int512_t zmm3;
    zmm3 = 0x4f7fffff;
    
    if (result > 4.29496704e+09f)
        rdx = -1;
    
    int32_t r8 = zmm1;
    
    if (zmm1 < 0f)
        r8 = 0;
    
    if (zmm1 > 4.29496704e+09f)
        r8 = -1;
    
    if (rdx >= r8 * 2)
    {
        float zmm4 = *(arg2 + 0x14);
        int32_t rdx_1 = zmm4;
        
        if (zmm4 < 0f)
            rdx_1 = 0;
        
        float zmm5 = *(arg2 + 0x24);
        
        if (zmm4 > 4.29496704e+09f)
            rdx_1 = -1;
        
        int32_t rsi = zmm5;
        
        if (zmm5 < 0f)
            rsi = 0;
        
        if (zmm5 > 4.29496704e+09f)
            rsi = -1;
        
        if (rdx_1 >= rsi * 2)
        {
            zmm2 = 0x40000000;
            zmm2 = 2f / (result - (zmm1 + zmm1));
            zmm3 = 0xc0000000;
            zmm3 = -2f / (zmm4 - (zmm5 + zmm5));
            /* jump -> *alacritty::gl::storage::Uniform4f::h285528eef856017e.0 */
        }
    }
    
    return result;
}
