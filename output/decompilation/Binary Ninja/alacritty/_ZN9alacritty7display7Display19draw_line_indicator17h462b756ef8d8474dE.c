
  int64_t alacritty::display::Display::draw_line_indicator::h462b756ef8d8474d(void* arg1, void* arg2, int64_t arg3, char arg4, int64_t arg5, int64_t arg6)

{
    int64_t var_c0 = arg6;
    int64_t r15 = *(arg1 + 0x7a0);
    uint64_t var_b8 = arg3 - 1;
    int64_t* var_80 = &var_c0;
    uint64_t (* var_78)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
    int64_t* var_70 = &var_b8;
    uint64_t (* var_68)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
    void** const var_60 = &data_c827e8;
    int64_t var_58 = 3;
    int64_t var_40 = 0;
    int64_t** var_50 = &var_80;
    int64_t var_48 = 2;
    void var_b0;
    core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_b0, 0, arg3 - 1, &var_60);
    int64_t var_a0;
    int64_t r12_1 = r15 - var_a0;
    
    if (r15 < var_a0)
        r12_1 = 0;
    
    int64_t var_98 = 0;
    int64_t var_90 = r12_1;
    int64_t var_88 = r15 - 1;
    alacritty::display::damage::FrameDamage::damage_line::hb967af29845291d1(*(arg1 + 0x20), 
        *(arg1 + 0x28), &var_98);
    alacritty::display::damage::FrameDamage::damage_line::hb967af29845291d1(*(arg1 + 0x58), 
        *(arg1 + 0x60), &var_98);
    
    if (!(arg4 & arg5 >= r12_1))
    {
        int16_t* rdx_3 = arg2 + 0x1f5;
        
        if (!(*(arg2 + 0x1f4) & 1))
            rdx_3 = arg2 + 0x270;
        
        void* rcx_3 = arg2 + 0x273;
        
        if (*(arg2 + 0x1f0) & 1)
            rcx_3 = arg2 + 0x1f1;
        
        int64_t var_a8;
        alacritty::renderer::Renderer::draw_string::he548dbda3300cc92(arg1 + 0xe0, 0, r12_1, 
            *(rcx_3 + 2) << 0x10 | *rcx_3, rdx_3[1] << 0x10 | *rdx_3, var_a8, var_a0 + var_a8, 
            arg1 + 0x798, arg1 + 0x5f8);
    }
    
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_b0);
}
