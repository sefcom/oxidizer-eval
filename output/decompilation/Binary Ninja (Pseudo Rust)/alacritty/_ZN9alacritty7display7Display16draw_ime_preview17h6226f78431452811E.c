
  fn alacritty::display::Display::draw_ime_preview::h6226f78431452811(arg1: *mut c_void, arg2: i64, arg3: i64, arg4: i32, arg5: i32, arg6: *mut i64, arg7: i32 @ zmm0) -> i64

{
    let rax: i64 = *arg1.byte_offset(0x2d0);
    
    if rax == 2
    {
        /* tailcall */
        return alacritty::display::window::Window::update_ime_position::h9e6fbf55ca260375(
            arg1.byte_offset(0x320), arg2, arg3, arg1.byte_offset(0x798));
    }
    
    let rcx_2: i64 = *arg1.byte_offset(0x7a0);
    let mut var_140: i64;
    let mut rdx_2: i64;
    let mut rsi_2: *mut c_void;
    let mut rdi_3: *mut i64;
    let mut r8_1: i32;
    
    if (rax & 1) == 0 || (*arg1.byte_offset(0x2e8) & 1) == 0 || *arg1.byte_offset(0x2f0) <= rcx_2
    {
        rsi_2 = *arg1.byte_offset(0x308);
        rdx_2 = *arg1.byte_offset(0x310);
        rdi_3 = &var_140;
        r8_1 = 0;
    }
    else
    {
        let r15_1: i64 = *arg1.byte_offset(0x2d8);
        let r13_1: *mut i8 = *arg1.byte_offset(0x308);
        let rbp_1: i64 = *arg1.byte_offset(0x310);
        let mut rax_2: *mut c_void;
        rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r15_1, r13_1, rbp_1);
        
        if rax_2 == 0
        {
            core::str::slice_error_fail::h1a2885084e28d077(r13_1, rbp_1, r15_1, rbp_1);
            /* no return */
        }
        
        rdi_3 = &var_140;
        rsi_2 = rax_2;
        r8_1 = 1;
    }
    
    alacritty::string::StrShortener::new::hcb4d209a7d9df863(rdi_3, rsi_2, rdx_2, rcx_2, r8_1);
    let var_150: *mut i8;
    let var_148: *mut c_void;
    let r13_3: *mut c_void = var_148.byte_offset(var_150);
    let mut var_158: ();
    let rax_3: i64 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(var_150, r13_3, 
        core::iter::traits::iterator::Iterator::collect::h3c9ad0add9d9250f(&var_158, &var_140));
    let rax_5: i64 = core::cmp::Ord::min::h7c13e9bfb8ea3862(arg3 + rax_3, rcx_2);
    let mut r12_1: i64 = 0;
    
    if rax_5 >= rax_3
    {
        r12_1 = rax_5 - rax_3;
    }
    
    let var_d8: i64 = *arg1.byte_offset(0x658);
    let var_e8: i128 = *arg1.byte_offset(0x648);
    let mut var_f8: i128 = *arg1.byte_offset(0x638);
    let mut var_1b0: i64;
    var_1b0 = arg4;
    let mut rbp_3: *mut c_void = arg1.byte_offset(0x798);
    alacritty::renderer::Renderer::draw_string::he548dbda3300cc92(arg1.byte_offset(0xe0), arg2, 
        r12_1, arg4, arg5, var_150, r13_3, rbp_3, arg1.byte_offset(0x5f8));
    
    if arg2 < *rbp_3
    {
        let mut var_110: i64 = arg2;
        let var_108_1: i64 = 0;
        let var_100_1: i64 = rcx_2;
        alacritty::display::damage::FrameDamage::damage_line::hb967af29845291d1(
            *arg1.byte_offset(0x20), *arg1.byte_offset(0x28), &var_110);
        alacritty::display::damage::FrameDamage::damage_line::hb967af29845291d1(
            *arg1.byte_offset(0x58), *arg1.byte_offset(0x60), &var_110);
    }
    
    let mut r13_4: i64 = rax_5 - 1;
    var_140 = arg2;
    let var_138: i64 = r12_1;
    let var_130: i64 = arg2;
    let var_128: i64 = r13_4;
    let var_120: i16 = var_1b0;
    let rax_12: u8 = arg4 >> 0x10;
    let var_11e: u8 = rax_12;
    let mut var_d0: ();
    alacritty::renderer::rects::RenderLine::rects::h3e1b797e248680e5(&var_d0, &var_140, 8, &var_f8, 
        rbp_3);
    let mut var_b8: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h78a34c0660272eec(&var_b8, &var_d0);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::he6ea13a474fdacad(arg6, &var_b8);
    
    if *arg1.byte_offset(0x2e8) == 1
    {
        let rax_13: i64 = *arg1.byte_offset(0x2f0);
        let rcx_6: i32 = *arg1.byte_offset(0x2f8);
        let rbp_4: i32 = rax_13;
        let rbp_5: i32 = rbp_4 - rcx_6;
        r13_4 = core::cmp::Ord::max::h99a4ab283a63d31f(rax_5 - rax_13);
        let var_15e_1: bool = rbp_4 == rcx_6 ^ 3;
        let var_162_1: u8 = rax_12;
        let rax_15: i16 = var_1b0;
        let var_164_1: i16 = rax_15;
        let var_15f_1: u8 = rax_12;
        let var_161_1: i16 = rax_15;
        let var_168_1: i32 = rbp_5 + 0;
        rbp_3 = arg1.byte_offset(0x798);
        let mut var_178: i64 = arg2;
        let var_170_1: i64 = r13_4;
        let mut var_98: ();
        _$LT$alacritty..display..content..RenderableCursor$u20$as$u20$alacritty..display..cursor..IntoRects$GT$::rects::h24fb12653be3a4e9(&var_98, &var_178, rbp_3, arg7);
        alloc::vec::Vec$LT$T$C$A$GT$::extend_desugared::heb81fe2e84edcb75(arg6, &var_98);
    }
    
    alacritty::display::window::Window::update_ime_position::h9e6fbf55ca260375(
        arg1.byte_offset(0x320), arg2, r13_4, rbp_3);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_158)
}
