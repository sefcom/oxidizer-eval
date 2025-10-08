
  fn alacritty::display::Display::highlight_damage::h3a1808b0e321020b(arg1: *mut c_void, arg2: *mut i64) -> i64

{
    let mut zmm2: f32 = *arg1.byte_offset(0x7a8);
    let mut rax: i32 = zmm2;
    
    if zmm2 < 0f
    {
        rax = 0;
    }
    
    let zmm3: f32 = *arg1.byte_offset(0x7ac);
    
    if zmm2 > 4.29496704e+09f
    {
        rax = -1;
    }
    
    let mut rdx: i32 = zmm3;
    
    if zmm3 < 0f
    {
        rdx = 0;
    }
    
    zmm2 = *arg1.byte_offset(0x7b0);
    
    if zmm3 > 4.29496704e+09f
    {
        rdx = -1;
    }
    
    let mut rdi: i32 = zmm2;
    
    if zmm2 < 0f
    {
        rdi = 0;
    }
    
    let cond:2: bool = zmm2 > 4.29496704e+09f;
    zmm2 = *arg1.byte_offset(0x7b4);
    
    if cond:2
    {
        rdi = -1;
    }
    
    let mut r8: i32 = zmm2;
    
    if zmm2 < 0f
    {
        r8 = 0;
    }
    
    let cond:3: bool = zmm2 > 4.29496704e+09f;
    zmm2 = *arg1.byte_offset(0x7b8);
    
    if cond:3
    {
        r8 = -1;
    }
    
    let mut r9: i32 = zmm2;
    
    if zmm2 < 0f
    {
        r9 = 0;
    }
    
    let cond:4: bool = zmm2 > 4.29496704e+09f;
    zmm2 = *arg1.byte_offset(0x7bc);
    
    if cond:4
    {
        r9 = -1;
    }
    
    let mut r10: i32 = zmm2;
    
    if zmm2 < 0f
    {
        r10 = 0;
    }
    
    let r11: i64 = *arg1.byte_offset(0x798);
    
    if zmm2 > 4.29496704e+09f
    {
        r10 = -1;
    }
    
    let var_80: i32 = rax;
    let var_7c: i32 = rdx;
    let var_78: i32 = rdi;
    let var_74: i32 = r8;
    let var_70: i32 = r9;
    let var_6c: i32 = r10;
    let mut var_90: i64 = r11;
    let var_88: i64 = r11;
    let mut var_48: i64;
    alacritty::display::damage::DamageTracker::shape_frame_damage::h7cbe9008dfbb19f8(&var_48, arg1, 
        &var_90);
    let var_40: *mut c_void;
    let var_38: i64;
    
    if var_38 != 0
    {
        let zmm0_1: u128 = zmm3;
        let mut rbx_1: *mut c_void = var_40;
        let r13_2: *mut c_void = (var_38 << 4) + rbx_1;
        let mut rbp_1: i32 = 0x7fffffff;
        
        if zmm0_1 <= 2.14748352e+09f
        {
            rbp_1 = zmm0_1;
        }
        
        if FCMP_UO(zmm0_1, zmm0_1)
        {
            rbp_1 = 0;
        }
        
        do
        {
            let mut var_68: u128 = _mm_cvtepi32_ps(_mm_shuffle_ps(
                _mm_unpacklo_epi64(rbp_1 - (*rbx_1.byte_offset(0xc) + *rbx_1.byte_offset(4)), 
                    *rbx_1), 
                *rbx_1.byte_offset(8), 0x42));
            let var_52_1: i8 = 0xff;
            let var_54_1: i16 = 0xff;
            let var_58_1: i32 = 0x3f000000;
            let var_51_1: i8 = 0;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hdfcf9666c620093f(arg2, &var_68);
            rbx_1 += 0x10;
        } while rbx_1 != r13_2;
    }
    
    /* tailcall */
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$glutin..surface..Rect$GT$$GT$::h23eaac4cc5abca69(
        var_48, var_40)
}
