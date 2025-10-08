
  fn alacritty::renderer::text::builtin_font::Canvas::draw_rounded_corner::h0beb163b132b4e9b(arg1: *mut c_void, arg2: i64) -> i64

{
    let r14: i64 = *arg1.byte_offset(0x18);
    let r15: i64 = *arg1.byte_offset(0x20);
    let rax: i64 = core::cmp::Ord::min::h7c13e9bfb8ea3862(r14, r15);
    let rax_1: i64 = rax + arg2;
    let mut rax_3: u64;
    let mut zmm2: i128;
    let mut zmm3: i128;
    
    if rax + arg2 < 0
    {
        zmm3 = (rax_1 & 1) | rax_1 >> 1;
        zmm3 = zmm3 + zmm3;
        rax_3 = arg2 & 1;
        
        if arg2 < 0
        {
            zmm2 = arg2 >> 1 | rax_3;
            zmm2 = zmm2 + zmm2;
        }
        else
        {
            zmm2 = arg2;
        }
    }
    else
    {
        zmm3 = rax_1;
        rax_3 = arg2 & 1;
        
        if arg2 >= 0
        {
            zmm2 = arg2;
        }
        else
        {
            zmm2 = arg2 >> 1 | rax_3;
            zmm2 = zmm2 + zmm2;
        }
    }
    
    let mut rdx: i64 = r14;
    
    if r15 > r14
    {
        rdx = r15;
    }
    
    let rcx_7: u64 = rdx & 1;
    let mut zmm1: i128;
    
    if rdx < 0
    {
        zmm1 = rdx >> 1 | rcx_7;
        zmm1 = zmm1 + zmm1;
    }
    else
    {
        zmm1 = rdx;
    }
    
    zmm3 = zmm3 * 0.5f;
    let mut rdx_3: i64 = r14;
    
    if r15 < r14
    {
        rdx_3 = r15;
    }
    
    zmm1 = zmm1 * 0.5f;
    let var_6c: i32 = zmm3;
    zmm1 = zmm1 - zmm3;
    let var_70: i32 = zmm2;
    zmm2 = zmm2 * 0.5f;
    let var_68: i32 = zmm2;
    zmm1 = zmm1 + zmm2;
    let mut rdi_1: i32 = zmm1;
    let mut rsi_1: i32 = 0;
    
    if r15 > r14
    {
        rsi_1 = rdi_1;
    }
    
    if r15 > r14
    {
        rdi_1 = 0;
    }
    
    zmm1 = zmm1 + 1f;
    let mut r8: i32 = zmm1;
    let mut r9: i32 = 0;
    
    if r15 > r14
    {
        r9 = r8;
    }
    
    if r15 > r14
    {
        r8 = 0;
    }
    
    let mut var_60: i32 = 0;
    
    if (rdx_3 & 1) != rax_3
    {
        var_60 = 0x3f000000;
    }
    
    rax_3 = rcx_7 == rax_3;
    let temp1: i8 = (r15 ^ r14) & rax_3;
    
    if temp1 != 0
    {
        rsi_1 = r9;
    }
    
    if temp1 != 0
    {
        rdi_1 = r8;
    }
    
    let mut zmm0: i128;
    
    if arg2 + rdx_3 + 1 >= 2
    {
        let r12_3: u64 = (arg2 + rdx_3 + 1) >> 1;
        zmm0 = var_6c;
        zmm1 = zmm0 - var_70;
        let var_54_1: i32 = zmm1;
        zmm1 = zmm1 + -1f;
        let var_50_1: i32 = zmm1;
        zmm2 = -1f + zmm0;
        let mut rax_7: i64 = 1;
        let mut r14_1: i64 = 0;
        
        do
        {
            zmm0 = r14_1;
            r14_1 = rax_7;
            let var_48_1: i32 = zmm0;
            zmm1 = rsi_1 + zmm0;
            let var_4c_1: i32 = zmm1;
            let mut i: i64 = 0;
            
            do
            {
                zmm0 = i;
                let mut zmm0_1: i128;
                zmm0_1 = hypotf(zmm0, var_48_1) + var_60;
                zmm1 = {0};
                
                if !(var_50_1 > zmm0_1)
                {
                    zmm1 = var_54_1;
                    
                    if zmm1 > zmm0_1
                    {
                        zmm0_1 = zmm0_1 + 1f;
                        zmm0_1 = zmm0_1 - zmm1;
                        zmm1 = zmm0_1;
                    }
                    else
                    {
                        zmm1 = 0x3f800000;
                        
                        if !(zmm2 > zmm0_1)
                        {
                            zmm1 = {0};
                            
                            if !(var_6c <= zmm0_1)
                            {
                                zmm1 = var_6c - zmm0_1;
                            }
                        }
                    }
                }
                
                zmm0_1 = zmm0 + rdi_1;
                zmm1 = zmm1 * 255f;
                alacritty::renderer::text::builtin_font::Canvas::put_pixel::hf97502058679cb24(arg1, 
                    _mm_min_ss(0x437f0000, _mm_max_ss({0}, zmm1)) * 0x10101, zmm0_1, var_4c_1);
                i += 1;
            } while r12_3 + 0 != i;
            
            rax_7 = r14_1 + 0;
        } while r14_1 < r12_3;
    }
    
    let mut rdi_3: *mut c_void;
    
    if r15 <= r14
    {
        if r15 < 0
        {
            zmm1 = (r15 & 1) | r15 >> 1;
            zmm1 = zmm1 + zmm1;
        }
        else
        {
            zmm1 = r15;
        }
        
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
        
        if r14 < 0
        {
            zmm0 = (r14 & 1) | r14 >> 1;
            zmm0 = zmm0 + zmm0;
        }
        else
        {
            zmm0 = r14;
        }
        
        zmm0 = zmm0 * 0.5f;
        zmm0 = zmm0 - var_68;
        zmm1 = {0};
        rdi_3 = arg1;
        zmm3 = rsi_1;
    }
    
    /* tailcall */
    alacritty::renderer::text::builtin_font::Canvas::draw_rect::h9fade2d70b0bde80(rdi_3, zmm0, 
        zmm1, zmm2, zmm3)
}
