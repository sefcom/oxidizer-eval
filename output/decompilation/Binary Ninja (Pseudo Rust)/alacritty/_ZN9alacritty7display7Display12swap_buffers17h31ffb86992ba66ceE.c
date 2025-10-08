
  fn alacritty::display::Display::swap_buffers::h31ffb86992ba66ce(arg1: *mut c_void) -> i64

{
    let mut var_108: i128;
    let mut var_c0: *mut *mut [i8; 0x2e];
    let mut var_58: i32;
    let mut result: i64;
    
    if *arg1.byte_offset(0x560) == 8 || (*arg1.byte_offset(0x2a8) & 1) != 0
        || *arg1.byte_offset(0x588) != 6 || *arg1.byte_offset(0xc0) != 0
    {
        result = _$LT$glutin..surface..Surface$LT$T$GT$$u20$as$u20$glutin..surface..GlSurface$LT$T$GT$$GT$::swap_buffers::hd28ac391abbf1f4d(&var_58, arg1.byte_offset(0x560), arg1.byte_offset(0x2a8));
        
        if var_58 == 2
        {
            return result;
        }
    }
    else
    {
        let mut zmm2: f32 = *arg1.byte_offset(0x7a8);
        let mut rax_2: i32 = zmm2;
        
        if zmm2 < 0f
        {
            rax_2 = 0;
        }
        
        let zmm3: f32 = *arg1.byte_offset(0x7ac);
        
        if zmm2 > 4.29496704e+09f
        {
            rax_2 = -1;
        }
        
        let mut rsi_1: i32 = zmm3;
        
        if zmm3 < 0f
        {
            rsi_1 = 0;
        }
        
        zmm2 = *arg1.byte_offset(0x7b0);
        
        if zmm3 > 4.29496704e+09f
        {
            rsi_1 = -1;
        }
        
        let mut rdi_3: i32 = zmm2;
        
        if zmm2 < 0f
        {
            rdi_3 = 0;
        }
        
        let cond:2_1: bool = zmm2 > 4.29496704e+09f;
        zmm2 = *arg1.byte_offset(0x7b4);
        
        if cond:2_1
        {
            rdi_3 = -1;
        }
        
        let mut r8_1: i32 = zmm2;
        
        if zmm2 < 0f
        {
            r8_1 = 0;
        }
        
        let cond:3_1: bool = zmm2 > 4.29496704e+09f;
        zmm2 = *arg1.byte_offset(0x7b8);
        
        if cond:3_1
        {
            r8_1 = -1;
        }
        
        let mut r9_1: i32 = zmm2;
        
        if zmm2 < 0f
        {
            r9_1 = 0;
        }
        
        let cond:4_1: bool = zmm2 > 4.29496704e+09f;
        zmm2 = *arg1.byte_offset(0x7bc);
        
        if cond:4_1
        {
            r9_1 = -1;
        }
        
        let mut r10_1: i32 = zmm2;
        
        if zmm2 < 0f
        {
            r10_1 = 0;
        }
        
        let rcx_1: i64 = *arg1.byte_offset(0x798);
        
        if zmm2 > 4.29496704e+09f
        {
            r10_1 = -1;
        }
        
        let mut var_f8: i128;
        var_f8 = rax_2;
        *var_f8[4] = rsi_1;
        *var_f8[8] = rdi_3;
        *var_f8[0xc] = r8_1;
        let mut var_e8: i128;
        var_e8 = r9_1;
        *var_e8[4] = r10_1;
        var_108 = rcx_1;
        *var_108[8] = rcx_1;
        alacritty::display::damage::DamageTracker::shape_frame_damage::h7cbe9008dfbb19f8(&var_c0, 
            arg1, &var_108);
        let var_b8: i64;
        let var_b0: i32;
        glutin::api::egl::surface::Surface$LT$T$GT$::swap_buffers_with_damage::hcfdce5be1c237eed(
            &var_58, *arg1.byte_offset(0x570), *arg1.byte_offset(0x580), arg1.byte_offset(0x2b0), 
            var_b8, var_b0);
        result = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$glutin..surface..Rect$GT$$GT$::h23eaac4cc5abca69(var_c0, var_b8);
        
        if var_58 == 2
        {
            return result;
        }
    }
    let var_28: i128;
    let var_d8_1: i128 = var_28;
    let var_38: i128;
    let var_e8_1: i128 = var_38;
    let var_48: i128;
    let var_f8_1: i128 = var_48;
    var_108 = var_58;
    
    if core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 4
    {
        let mut var_90: *mut i128 = &var_108;
        let var_88_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
            _$LT$glutin..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h6356b3d53669c523;
        var_c0 = &data_c825f8;
        let var_b8_1: i64 = 1;
        let var_a0_1: i64 = 0;
        let var_b0_1: *mut *mut i128 = &var_90;
        let var_a8_1: i64 = 1;
        let rax_1: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c82608);
        let mut var_80: *const i8 = "alacritty::displayfailed to swap…";
        let var_78_1: i64 = 0x12;
        let var_70_1: *const i8 = "alacritty::displayfailed to swap…";
        let var_68_1: i64 = 0x12;
        let var_60_1: i64 = rax_1;
        log::__private_api::log::h0b6680b994d742b1(&var_c0, 4, &var_80);
    }
    
    core::ptr::drop_in_place$LT$glutin..error..Error$GT$::h7a096d9b46c3b785(&var_108)
}
