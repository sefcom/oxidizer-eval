
  int64_t alacritty::display::Display::highlight_damage::h3a1808b0e321020b(void* arg1, int64_t* arg2)

{
    float zmm2 = *(arg1 + 0x7a8);
    int32_t rax = zmm2;
    
    if (zmm2 < 0f)
        rax = 0;
    
    float zmm3 = *(arg1 + 0x7ac);
    
    if (zmm2 > 4.29496704e+09f)
        rax = -1;
    
    int32_t rdx = zmm3;
    
    if (zmm3 < 0f)
        rdx = 0;
    
    zmm2 = *(arg1 + 0x7b0);
    
    if (zmm3 > 4.29496704e+09f)
        rdx = -1;
    
    int32_t rdi = zmm2;
    
    if (zmm2 < 0f)
        rdi = 0;
    
    bool cond:2 = zmm2 > 4.29496704e+09f;
    zmm2 = *(arg1 + 0x7b4);
    
    if (cond:2)
        rdi = -1;
    
    int32_t r8 = zmm2;
    
    if (zmm2 < 0f)
        r8 = 0;
    
    bool cond:3 = zmm2 > 4.29496704e+09f;
    zmm2 = *(arg1 + 0x7b8);
    
    if (cond:3)
        r8 = -1;
    
    int32_t r9 = zmm2;
    
    if (zmm2 < 0f)
        r9 = 0;
    
    bool cond:4 = zmm2 > 4.29496704e+09f;
    zmm2 = *(arg1 + 0x7bc);
    
    if (cond:4)
        r9 = -1;
    
    int32_t r10 = zmm2;
    
    if (zmm2 < 0f)
        r10 = 0;
    
    int64_t r11 = *(arg1 + 0x798);
    
    if (zmm2 > 4.29496704e+09f)
        r10 = -1;
    
    int32_t var_80 = rax;
    int32_t var_7c = rdx;
    int32_t var_78 = rdi;
    int32_t var_74 = r8;
    int32_t var_70 = r9;
    int32_t var_6c = r10;
    int64_t var_90 = r11;
    int64_t var_88 = r11;
    int64_t var_48;
    alacritty::display::damage::DamageTracker::shape_frame_damage::h7cbe9008dfbb19f8(&var_48, arg1, 
        &var_90);
    void* var_40;
    int64_t var_38;
    
    if (var_38)
    {
        uint128_t zmm0_1 = zmm3;
        void* rbx_1 = var_40;
        void* r13_2 = (var_38 << 4) + rbx_1;
        int32_t rbp_1 = 0x7fffffff;
        
        if (zmm0_1 <= 2.14748352e+09f)
            rbp_1 = zmm0_1;
        
        if (FCMP_UO(zmm0_1, zmm0_1))
            rbp_1 = 0;
        
        do
        {
            uint128_t var_68 = _mm_cvtepi32_ps(_mm_shuffle_ps(
                _mm_unpacklo_epi64(rbp_1 - (*(rbx_1 + 0xc) + *(rbx_1 + 4)), *rbx_1), *(rbx_1 + 8), 
                0x42));
            char var_52_1 = 0xff;
            int16_t var_54_1 = 0xff;
            int32_t var_58_1 = 0x3f000000;
            char var_51_1 = 0;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hdfcf9666c620093f(arg2, &var_68);
            rbx_1 += 0x10;
        } while (rbx_1 != r13_2);
    }
    
    /* tailcall */
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$glutin..surface..Rect$GT$$GT$::h23eaac4cc5abca69(var_48, var_40);
}
