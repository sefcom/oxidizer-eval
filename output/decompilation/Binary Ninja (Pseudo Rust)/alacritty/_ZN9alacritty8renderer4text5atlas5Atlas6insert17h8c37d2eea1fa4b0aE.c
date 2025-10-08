
  fn alacritty::renderer::text::atlas::Atlas::insert::h8c37d2eea1fa4b0a(arg1: *mut i32, arg2: *mut i32, arg3: *mut i64, arg4: *mut i32) -> i64

{
    let r8: i32 = *arg3.byte_offset(0x2c);
    let result: i32 = arg2[1];
    let mut r9_1: i32;
    let mut r10_1: i32;
    
    if r8 <= result
    {
        r9_1 = arg3[6];
        r10_1 = arg2[2];
    }
    
    if r8 <= result && r9_1 <= r10_1
    {
        let mut r11_1: i32 = arg2[3];
        let rbx_1: i32 = arg2[4];
        let mut r14: i64;
        r14 = r11_1 + r8 <= result;
        let mut rbp_3: i32 = r10_1 - rbx_1;
        let mut r15: i64;
        r15 = r9_1 < rbp_3;
        
        if (r14 & r15) != 0
        {
            goto 'label_863e04;
        }
        
        let rbx_2: i32 = rbx_1 + arg2[5];
        let r10_2: i32 = r10_1 - rbx_2;
        
        if r10_2 > 0
        {
            arg2[4] = rbx_2;
            arg2[3] = 0;
            arg2[5] = 0;
            r11_1 = 0;
            rbp_3 = r10_2;
            'label_863e04:
            
            if r11_1 + r8 <= result && r9_1 < rbp_3
            {
                /* tailcall */
                return alacritty::renderer::text::atlas::Atlas::insert_inner::h1566285492361f39(
                    arg1, arg2, arg3, arg4);
            }
        }
        
        *arg1 = 0;
    }
    else
    {
        *arg1 = 1;
    }
    
    arg1[7] = 2;
    result
}
