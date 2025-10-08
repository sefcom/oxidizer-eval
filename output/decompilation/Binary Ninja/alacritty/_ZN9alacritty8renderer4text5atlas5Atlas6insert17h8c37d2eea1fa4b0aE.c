
  int64_t alacritty::renderer::text::atlas::Atlas::insert::h8c37d2eea1fa4b0a(int32_t* arg1, int32_t* arg2, int64_t* arg3, int32_t* arg4)

{
    int32_t r8 = *(arg3 + 0x2c);
    int32_t result = arg2[1];
    int32_t r9_1;
    int32_t r10_1;
    
    if (r8 <= result)
    {
        r9_1 = arg3[6];
        r10_1 = arg2[2];
    }
    
    if (r8 <= result && r9_1 <= r10_1)
    {
        int32_t r11_1 = arg2[3];
        int32_t rbx_1 = arg2[4];
        int64_t r14;
        r14 = r11_1 + r8 <= result;
        int32_t rbp_3 = r10_1 - rbx_1;
        int64_t r15;
        r15 = r9_1 < rbp_3;
        
        if (r14 & r15)
            goto label_863e04;
        
        int32_t rbx_2 = rbx_1 + arg2[5];
        int32_t r10_2 = r10_1 - rbx_2;
        
        if (r10_2 > 0)
        {
            arg2[4] = rbx_2;
            arg2[3] = 0;
            arg2[5] = 0;
            r11_1 = 0;
            rbp_3 = r10_2;
            label_863e04:
            
            if (r11_1 + r8 <= result && r9_1 < rbp_3)
                /* tailcall */
                return alacritty::renderer::text::atlas::Atlas::insert_inner::h1566285492361f39(
                    arg1, arg2, arg3, arg4);
        }
        
        *arg1 = 0;
    }
    else
        *arg1 = 1;
    
    arg1[7] = 2;
    return result;
}
