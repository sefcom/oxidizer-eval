
  int64_t alacritty::renderer::rects::RenderLine::push_rects::h98dca790795ed191(int64_t* arg1, void* arg2, void* arg3, int16_t arg4, int64_t arg5, int64_t arg6, int64_t arg7, int32_t arg8)

{
    int64_t r8 = arg7;
    uint32_t rax = arg4;
    int64_t rbp;
    uint32_t zmm1[0x4];
    uint32_t zmm2[0x4];
    char const (** const var_98)[0xce];
    
    if (rax > 0xfff)
    {
        if (rax == 0x1000)
        {
            zmm1 = *(arg2 + 0x10);
            zmm2 = _mm_and_ps(data_4e90d0, zmm1);
            rbp = 1;
        }
        else if (rax == 0x2000)
        {
            zmm1 = *(arg2 + 0x10);
            zmm2 = _mm_and_ps(data_4e90d0, zmm1);
            rbp = 2;
        }
        else
        {
            if (rax != 0x4000)
            {
                label_8622fa:
                var_98 = &data_c83950;
                int64_t var_90 = 1;
                void var_a0;
                void* var_88 = &var_a0;
                int128_t var_80 = {0};
                core::panicking::panic_fmt::h96f341d36638c225(&var_98);
                /* no return */
            }
            
            zmm1 = *(arg2 + 0x14);
            zmm2 = *(arg2 + 0x18);
            rbp = 3;
        }
    }
    else if (rax == 8)
    {
        zmm1 = *(arg2 + 0x14);
        zmm2 = *(arg2 + 0x18);
        rbp = 0;
    }
    else if (rax == 0x200)
    {
        zmm1 = *(arg2 + 0x1c);
        zmm2 = *(arg2 + 0x20);
        rbp = 0;
    }
    else
    {
        if (rax != 0x800)
            goto label_8622fa;
        
        uint32_t zmm0[0x4] = *(arg2 + 0x10);
        zmm1 = 0x3e800000;
        zmm1[0] = 0.25f * zmm0[0];
        zmm2 = 0x3f400000;
        zmm2[0] = 0.75f * zmm0[0];
        uint32_t var_58_1[0x4] = zmm2;
        zmm2 = *(arg2 + 0x18);
        alacritty::renderer::rects::RenderLine::create_rect::hcff17379e1e2cbf0(&var_98, arg3, arg5, 
            arg6, r8, arg8, zmm0, zmm1, zmm2[0]);
        alloc::vec::Vec$LT$T$C$A$GT$::push::hdfcf9666c620093f(arg1, &var_98);
        zmm1 = var_58_1;
        r8 = arg7;
        rbp = 0;
    }
    void var_48;
    alacritty::renderer::rects::RenderLine::create_rect::hcff17379e1e2cbf0(&var_48, arg3, arg5, 
        arg6, r8, arg8, *(arg2 + 0x10), zmm1, zmm2[0]);
    char var_31 = rbp;
    return alloc::vec::Vec$LT$T$C$A$GT$::push::hdfcf9666c620093f(arg1, &var_48);
}
