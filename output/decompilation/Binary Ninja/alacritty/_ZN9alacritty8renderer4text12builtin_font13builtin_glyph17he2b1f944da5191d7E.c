
  int32_t alacritty::renderer::text::builtin_font::builtin_glyph::he2b1f944da5191d7(int128_t* arg1, int32_t arg2, double* arg3, char arg4, char arg5, char arg6, char arg7)

{
    int32_t rax;
    rax = arg2 - 0x2500 < 0xa0;
    int32_t rdi;
    rdi = arg2 - 0x1fb00 < 0x3c;
    rdi |= rax;
    int128_t var_98;
    int128_t var_88;
    int128_t var_78;
    int128_t var_68;
    
    if (rdi != 1)
    {
        int32_t rax_4 = arg2 & 0x1ffffc;
        
        if (rax_4 != 0xe0b0)
        {
            *arg1 = 2;
            return rax_4;
        }
        
        int32_t var_50;
        rax_4 = alacritty::renderer::text::builtin_font::powerline_drawing::h744b2bb1b0d13ad6(
            &var_50, arg2, arg3, arg4, arg5);
        
        if (var_50 == 2)
        {
            *arg1 = 2;
            return rax_4;
        }
        
        int128_t var_20;
        var_68 = var_20;
        int128_t var_30;
        var_78 = var_30;
        int128_t var_40;
        var_88 = var_40;
        var_98 = var_50;
    }
    else
        alacritty::renderer::text::builtin_font::box_drawing::hc55c3d9cdc825cd9(&var_98, arg2, 
            arg3, arg4, arg5);
    
    int32_t var_60;
    int32_t var_60_1 = var_60 - arg6;
    int32_t rax_2 = arg7;
    int32_t var_64;
    int32_t var_64_1 = var_64 - rax_2;
    int128_t zmm0_1 = var_98;
    arg1[2] = var_78;
    arg1[1] = var_88;
    *arg1 = zmm0_1;
    arg1[3] = var_68;
    return rax_2;
}
