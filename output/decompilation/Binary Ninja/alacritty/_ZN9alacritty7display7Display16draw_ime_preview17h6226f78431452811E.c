
  int64_t alacritty::display::Display::draw_ime_preview::h6226f78431452811(void* arg1, int64_t arg2, int64_t arg3, int32_t arg4, int32_t arg5, int64_t* arg6, int32_t arg7 @ zmm0)

{
    int64_t rax = *(arg1 + 0x2d0);
    
    if (rax == 2)
        /* tailcall */
        return alacritty::display::window::Window::update_ime_position::h9e6fbf55ca260375(
            arg1 + 0x320, arg2, arg3, arg1 + 0x798);
    
    int64_t rcx_2 = *(arg1 + 0x7a0);
    int64_t var_140;
    int64_t rdx_2;
    void* rsi_2;
    int64_t* rdi_3;
    int32_t r8_1;
    
    if (!(rax & 1) || !(*(arg1 + 0x2e8) & 1) || *(arg1 + 0x2f0) <= rcx_2)
    {
        rsi_2 = *(arg1 + 0x308);
        rdx_2 = *(arg1 + 0x310);
        rdi_3 = &var_140;
        r8_1 = 0;
    }
    else
    {
        int64_t r15_1 = *(arg1 + 0x2d8);
        char* r13_1 = *(arg1 + 0x308);
        int64_t rbp_1 = *(arg1 + 0x310);
        void* rax_2;
        rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r15_1, r13_1, rbp_1);
        
        if (!rax_2)
        {
            core::str::slice_error_fail::h1a2885084e28d077(r13_1, rbp_1, r15_1, rbp_1);
            /* no return */
        }
        
        rdi_3 = &var_140;
        rsi_2 = rax_2;
        r8_1 = 1;
    }
    
    alacritty::string::StrShortener::new::hcb4d209a7d9df863(rdi_3, rsi_2, rdx_2, rcx_2, r8_1);
    char* var_150;
    void* var_148;
    void* r13_3 = var_148 + var_150;
    void var_158;
    int64_t rax_3 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(var_150, r13_3, 
        core::iter::traits::iterator::Iterator::collect::h3c9ad0add9d9250f(&var_158, &var_140));
    int64_t rax_5 = core::cmp::Ord::min::h7c13e9bfb8ea3862(arg3 + rax_3, rcx_2);
    int64_t r12_1 = 0;
    
    if (rax_5 >= rax_3)
        r12_1 = rax_5 - rax_3;
    
    int64_t var_d8 = *(arg1 + 0x658);
    int128_t var_e8 = *(arg1 + 0x648);
    int128_t var_f8 = *(arg1 + 0x638);
    int64_t var_1b0;
    var_1b0 = arg4;
    void* rbp_3 = arg1 + 0x798;
    alacritty::renderer::Renderer::draw_string::he548dbda3300cc92(arg1 + 0xe0, arg2, r12_1, arg4, 
        arg5, var_150, r13_3, rbp_3, arg1 + 0x5f8);
    
    if (arg2 < *rbp_3)
    {
        int64_t var_110 = arg2;
        int64_t var_108_1 = 0;
        int64_t var_100_1 = rcx_2;
        alacritty::display::damage::FrameDamage::damage_line::hb967af29845291d1(*(arg1 + 0x20), 
            *(arg1 + 0x28), &var_110);
        alacritty::display::damage::FrameDamage::damage_line::hb967af29845291d1(*(arg1 + 0x58), 
            *(arg1 + 0x60), &var_110);
    }
    
    int64_t r13_4 = rax_5 - 1;
    var_140 = arg2;
    int64_t var_138 = r12_1;
    int64_t var_130 = arg2;
    int64_t var_128 = r13_4;
    int16_t var_120 = var_1b0;
    uint8_t rax_12 = arg4 >> 0x10;
    uint8_t var_11e = rax_12;
    void var_d0;
    alacritty::renderer::rects::RenderLine::rects::h3e1b797e248680e5(&var_d0, &var_140, 8, &var_f8, 
        rbp_3);
    void var_b8;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h78a34c0660272eec(&var_b8, &var_d0);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::he6ea13a474fdacad(arg6, &var_b8);
    
    if (*(arg1 + 0x2e8) == 1)
    {
        int64_t rax_13 = *(arg1 + 0x2f0);
        int32_t rcx_6 = *(arg1 + 0x2f8);
        int32_t rbp_4 = rax_13;
        int32_t rbp_5 = rbp_4 - rcx_6;
        r13_4 = core::cmp::Ord::max::h99a4ab283a63d31f(rax_5 - rax_13);
        bool var_15e_1 = rbp_4 == rcx_6 ^ 3;
        uint8_t var_162_1 = rax_12;
        int16_t rax_15 = var_1b0;
        int16_t var_164_1 = rax_15;
        uint8_t var_15f_1 = rax_12;
        int16_t var_161_1 = rax_15;
        int32_t var_168_1 = rbp_5 + 0;
        rbp_3 = arg1 + 0x798;
        int64_t var_178 = arg2;
        int64_t var_170_1 = r13_4;
        void var_98;
        _$LT$alacritty..display..content..RenderableCursor$u20$as$u20$alacritty..display..cursor..IntoRects$GT$::rects::h24fb12653be3a4e9(&var_98, &var_178, rbp_3, arg7);
        alloc::vec::Vec$LT$T$C$A$GT$::extend_desugared::heb81fe2e84edcb75(arg6, &var_98);
    }
    
    alacritty::display::window::Window::update_ime_position::h9e6fbf55ca260375(arg1 + 0x320, arg2, 
        r13_4, rbp_3);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_158);
}
