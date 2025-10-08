
  void alacritty::display::Display::draw_render_timer::h661820346e8e91a1(void* arg1, void* arg2)

{
    if (*(arg2 + 0xa) == 1)
    {
        int64_t var_a8 = *(arg1 + 0x820);
        int64_t* var_70 = &var_a8;
        int64_t (* var_68_1)(int64_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
        void* const var_60 = &data_c827c8;
        int64_t var_58_1 = 2;
        void* const var_40_1 = &data_503210;
        int64_t var_38_1 = 1;
        int64_t** var_50_1 = &var_70;
        int64_t var_48_1 = 1;
        void var_a0;
        uint64_t rdx;
        core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_a0, 0, rdx, &var_60);
        int64_t r14_1 = *(arg1 + 0x798);
        int64_t r14_2 = r14_1 - 2;
        
        if (r14_1 < 2)
            r14_2 = 0;
        
        uint32_t rax_1 = *(arg2 + 0x273);
        uint32_t rbp_1 = *(arg2 + 0x275);
        uint32_t r15_1 = *(arg2 + 0x23b);
        uint32_t r13_1 = *(arg2 + 0x23d);
        int64_t var_88 = r14_2;
        int64_t var_80_1 = 0;
        int64_t var_90;
        int64_t var_78_1 = var_90;
        alacritty::display::damage::FrameDamage::damage_line::hb967af29845291d1(*(arg1 + 0x20), 
            *(arg1 + 0x28), &var_88);
        alacritty::display::damage::FrameDamage::damage_line::hb967af29845291d1(*(arg1 + 0x58), 
            *(arg1 + 0x60), &var_88);
        int64_t var_98;
        alacritty::renderer::Renderer::draw_string::he548dbda3300cc92(arg1 + 0xe0, r14_2, 0, 
            rax_1 | rbp_1 << 0x10, r15_1 | r13_1 << 0x10, var_98, var_90 + var_98, arg1 + 0x798, 
            arg1 + 0x5f8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_a0);
    }
}
