
  int64_t alacritty::renderer::text::builtin_font::Canvas::draw_rounded_corner::h0beb163b132b4e9b(void* arg1, int64_t arg2)

{
    int64_t r14 = *(arg1 + 0x18);
    int64_t r15 = *(arg1 + 0x20);
    int64_t rax = core::cmp::Ord::min::h7c13e9bfb8ea3862(r14, r15);
    int64_t rax_1 = rax + arg2;
    uint64_t rax_3;
    int128_t zmm2;
    int128_t zmm3;
    
    if (rax + arg2 < 0)
    {
        zmm3 = (rax_1 & 1) | rax_1 >> 1;
        zmm3 = zmm3 + zmm3;
        rax_3 = arg2 & 1;
        
        if (arg2 < 0)
        {
            zmm2 = arg2 >> 1 | rax_3;
            zmm2 = zmm2 + zmm2;
        }
        else
            zmm2 = arg2;
    }
    else
    {
        zmm3 = rax_1;
        rax_3 = arg2 & 1;
        
        if (arg2 >= 0)
            zmm2 = arg2;
        else
        {
            zmm2 = arg2 >> 1 | rax_3;
            zmm2 = zmm2 + zmm2;
        }
    }
    
    int64_t rdx = r14;
    
    if (r15 > r14)
        rdx = r15;
    
    uint64_t rcx_7 = rdx & 1;
    int128_t zmm1;
    
    if (rdx < 0)
    {
        zmm1 = rdx >> 1 | rcx_7;
        zmm1 = zmm1 + zmm1;
    }
    else
        zmm1 = rdx;
    
    zmm3 = zmm3 * 0.5f;
    int64_t rdx_3 = r14;
    
    if (r15 < r14)
        rdx_3 = r15;
    
    zmm1 = zmm1 * 0.5f;
    int32_t var_6c = zmm3;
    zmm1 = zmm1 - zmm3;
    int32_t var_70 = zmm2;
    zmm2 = zmm2 * 0.5f;
    int32_t var_68 = zmm2;
    zmm1 = zmm1 + zmm2;
    int32_t rdi_1 = zmm1;
    int32_t rsi_1 = 0;
    
    if (r15 > r14)
        rsi_1 = rdi_1;
    
    if (r15 > r14)
        rdi_1 = 0;
    
    zmm1 = zmm1 + 1f;
    int32_t r8 = zmm1;
    int32_t r9 = 0;
    
    if (r15 > r14)
        r9 = r8;
    
    if (r15 > r14)
        r8 = 0;
    
    int32_t var_60 = 0;
    
    if ((rdx_3 & 1) != rax_3)
        var_60 = 0x3f000000;
    
    rax_3 = rcx_7 == rax_3;
    char temp1 = (r15 ^ r14) & rax_3;
    
    if (temp1)
        rsi_1 = r9;
    
    if (temp1)
        rdi_1 = r8;
    
    int128_t zmm0;
    
    if (arg2 + rdx_3 + 1 >= 2)
    {
        uint64_t r12_3 = (arg2 + rdx_3 + 1) >> 1;
        zmm0 = var_6c;
        zmm1 = zmm0 - var_70;
        int32_t var_54_1 = zmm1;
        zmm1 = zmm1 + -1f;
        int32_t var_50_1 = zmm1;
        zmm2 = -1f + zmm0;
        int64_t rax_7 = 1;
        int64_t r14_1 = 0;
        
        do
        {
            zmm0 = r14_1;
            r14_1 = rax_7;
            int32_t var_48_1 = zmm0;
            zmm1 = rsi_1 + zmm0;
            int32_t var_4c_1 = zmm1;
            int64_t i = 0;
            
            do
            {
                zmm0 = i;
                int128_t zmm0_1;
                zmm0_1 = hypotf(zmm0, var_48_1) + var_60;
                zmm1 = {0};
                
                if (!(var_50_1 > zmm0_1))
                {
                    zmm1 = var_54_1;
                    
                    if (zmm1 > zmm0_1)
                    {
                        zmm0_1 = zmm0_1 + 1f;
                        zmm0_1 = zmm0_1 - zmm1;
                        zmm1 = zmm0_1;
                    }
                    else
                    {
                        zmm1 = 0x3f800000;
                        
                        if (!(zmm2 > zmm0_1))
                        {
                            zmm1 = {0};
                            
                            if (!(var_6c <= zmm0_1))
                                zmm1 = var_6c - zmm0_1;
                        }
                    }
                }
                
                zmm0_1 = zmm0 + rdi_1;
                zmm1 = zmm1 * 255f;
                alacritty::renderer::text::builtin_font::Canvas::put_pixel::hf97502058679cb24(arg1, 
                    _mm_min_ss(0x437f0000, _mm_max_ss({0}, zmm1)) * 0x10101, zmm0_1, var_4c_1);
                i += 1;
            } while (r12_3 + 0 != i);
            
            rax_7 = r14_1 + 0;
        } while (r14_1 < r12_3);
    }
    
    void* rdi_3;
    
    if (r15 <= r14)
    {
        if (r15 < 0)
        {
            zmm1 = (r15 & 1) | r15 >> 1;
            zmm1 = zmm1 + zmm1;
        }
        else
            zmm1 = r15;
        
        zmm1 = zmm1 * 0.5f;
        zmm1 = zmm1 - var_68;
        zmm0 = {0};
        rdi_3 = arg1;
        zmm2 = rdi_1;
        zmm3 = var_70;
    }
    else
    {
        zmm2 = var_70;
        
        if (r14 < 0)
        {
            zmm0 = (r14 & 1) | r14 >> 1;
            zmm0 = zmm0 + zmm0;
        }
        else
            zmm0 = r14;
        
        zmm0 = zmm0 * 0.5f;
        zmm0 = zmm0 - var_68;
        zmm1 = {0};
        rdi_3 = arg1;
        zmm3 = rsi_1;
    }
    
    /* tailcall */
    return alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(rdi_3, 
        zmm0, zmm1, zmm2, zmm3);
}
