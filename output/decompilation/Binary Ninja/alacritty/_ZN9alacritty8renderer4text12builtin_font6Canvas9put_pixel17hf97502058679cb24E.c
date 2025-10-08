
  void alacritty::renderer::text::builtin_font::Canvas::put_pixel::hf97502058679cb24(void* arg1, int32_t arg2, float arg3, float arg4)

{
    if (!(0f > arg3) && !(0f > arg4))
    {
        int64_t rax = *(arg1 + 0x18);
        
        if (rax < 0)
        {
            int32_t zmm2 = (rax & 1) | rax >> 1;
            
            if (!(arg3 > zmm2 + zmm2 + -1f))
            {
                label_8673a3:
                int64_t rcx_3 = *(arg1 + 0x20);
                
                if (rcx_3 < 0)
                {
                    zmm2 = (rcx_3 & 1) | rcx_3 >> 1;
                    
                    if (!(arg4 > zmm2 + zmm2 + -1f))
                    {
                        label_8673fc:
                        int64_t r8_1 = arg3;
                        int64_t rcx_9 = (r8_1 >> 0x3f & (arg3 - 9.22337204e+18f)) | r8_1;
                        float zmm3 = {0};
                        
                        if (arg3 < zmm3)
                            rcx_9 = 0;
                        
                        if (arg3 > 1.8446743e+19f)
                            rcx_9 = -1;
                        
                        int64_t r10_1 = arg4;
                        int64_t r11_4 = (r10_1 >> 0x3f & (arg4 - 9.22337204e+18f)) | r10_1;
                        
                        if (arg4 < zmm3)
                            r11_4 = 0;
                        
                        if (arg4 > 1.8446743e+19f)
                            r11_4 = -1;
                        
                        int64_t rax_2 = rax * r11_4 + rcx_9;
                        int64_t rcx_10 = *(arg1 + 0x10);
                        
                        if (rax_2 >= rcx_10)
                        {
                            int64_t var_8 = rax_2;
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rax_2, rcx_10);
                            /* no return */
                        }
                        
                        char* rcx_11 = *(arg1 + 8);
                        rax = rax_2 * 3;
                        
                        if (rcx_11[rax] < arg2)
                        {
                            void* rcx_12 = &rcx_11[rax];
                            *rcx_12 = arg2;
                            *(rcx_12 + 1) = arg2 >> 8;
                        }
                    }
                }
                else if (!(arg4 > rcx_3 + -1f))
                    goto label_8673fc;
            }
        }
        else if (arg3 <= rax + -1f)
            goto label_8673a3;
    }
}
