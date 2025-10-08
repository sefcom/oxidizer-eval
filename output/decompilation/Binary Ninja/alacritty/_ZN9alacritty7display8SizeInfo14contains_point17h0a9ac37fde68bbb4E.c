
  int64_t alacritty::display::SizeInfo::contains_point::h0a9ac37fde68bbb4(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    float zmm0 = arg1[4];
    int64_t rax = arg1[1];
    float zmm1;
    
    if (rax < 0)
    {
        zmm1 = (rax & 1) | rax >> 1;
        zmm1 = zmm1 + zmm1;
    }
    else
        zmm1 = rax;
    
    zmm1 = zmm1 * arg1[3] + zmm0;
    int64_t result = zmm1;
    int64_t rcx_5 = ((zmm1 - 9.22337204e+18f) & result >> 0x3f) | result;
    
    if (zmm1 < 0f)
        rcx_5 = 0;
    
    if (zmm1 > 1.8446743e+19f)
        rcx_5 = -1;
    
    int64_t r10 = zmm0;
    int64_t r11_3 = (r10 >> 0x3f & (zmm0 - 9.22337204e+18f)) | r10;
    
    if (zmm0 < 0f)
        r11_3 = 0;
    
    if (zmm0 > 1.8446743e+19f)
        r11_3 = -1;
    
    if (arg2 > r11_3 && arg2 <= rcx_5)
    {
        zmm0 = *(arg1 + 0x24);
        int64_t rax_3 = *arg1;
        
        if (rax_3 < 0)
        {
            zmm1 = (rax_3 & 1) | rax_3 >> 1;
            zmm1 = zmm1 + zmm1;
        }
        else
            zmm1 = rax_3;
        
        zmm1 = zmm1 * *(arg1 + 0x1c) + zmm0;
        int64_t rax_6 = zmm1;
        result = 0;
        int64_t rdi = 0;
        
        if (zmm1 >= 0f)
            rdi = ((zmm1 - 9.22337204e+18f) & rax_6 >> 0x3f) | rax_6;
        
        if (zmm1 > 1.8446743e+19f)
            rdi = -1;
        
        if (arg3 <= rdi)
        {
            int64_t rax_7 = zmm0;
            result = 0;
            
            if (zmm0 >= 0f)
                result = ((zmm0 - 9.22337204e+18f) & rax_7 >> 0x3f) | rax_7;
            
            if (zmm0 > 1.8446743e+19f)
                result = -1;
            
            result = arg3 > result;
        }
    }
    
    return result;
}
