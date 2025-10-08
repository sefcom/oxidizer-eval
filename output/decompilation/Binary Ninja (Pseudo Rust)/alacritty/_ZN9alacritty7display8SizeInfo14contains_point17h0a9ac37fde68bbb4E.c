
  fn alacritty::display::SizeInfo::contains_point::h0a9ac37fde68bbb4(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    let mut zmm0: f32 = arg1[4];
    let rax: i64 = arg1[1];
    let mut zmm1: f32;
    
    if rax < 0
    {
        zmm1 = (rax & 1) | rax >> 1;
        zmm1 = zmm1 + zmm1;
    }
    else
    {
        zmm1 = rax;
    }
    
    zmm1 = zmm1 * arg1[3] + zmm0;
    let mut result: i64 = zmm1;
    let mut rcx_5: i64 = ((zmm1 - 9.22337204e+18f) & result >> 0x3f) | result;
    
    if zmm1 < 0f
    {
        rcx_5 = 0;
    }
    
    if zmm1 > 1.8446743e+19f
    {
        rcx_5 = -1;
    }
    
    let r10: i64 = zmm0;
    let mut r11_3: i64 = (r10 >> 0x3f & (zmm0 - 9.22337204e+18f)) | r10;
    
    if zmm0 < 0f
    {
        r11_3 = 0;
    }
    
    if zmm0 > 1.8446743e+19f
    {
        r11_3 = -1;
    }
    
    if arg2 > r11_3 && arg2 <= rcx_5
    {
        zmm0 = *arg1.byte_offset(0x24);
        let rax_3: i64 = *arg1;
        
        if rax_3 < 0
        {
            zmm1 = (rax_3 & 1) | rax_3 >> 1;
            zmm1 = zmm1 + zmm1;
        }
        else
        {
            zmm1 = rax_3;
        }
        
        zmm1 = zmm1 * *arg1.byte_offset(0x1c) + zmm0;
        let rax_6: i64 = zmm1;
        result = 0;
        let mut rdi: i64 = 0;
        
        if zmm1 >= 0f
        {
            rdi = ((zmm1 - 9.22337204e+18f) & rax_6 >> 0x3f) | rax_6;
        }
        
        if zmm1 > 1.8446743e+19f
        {
            rdi = -1;
        }
        
        if arg3 <= rdi
        {
            let rax_7: i64 = zmm0;
            result = 0;
            
            if zmm0 >= 0f
            {
                result = ((zmm0 - 9.22337204e+18f) & rax_7 >> 0x3f) | rax_7;
            }
            
            if zmm0 > 1.8446743e+19f
            {
                result = -1;
            }
            
            result = arg3 > result;
        }
    }
    
    result
}
