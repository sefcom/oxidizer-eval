
  int128_t* alacritty::renderer::text::glyph_cache::GlyphCache::get::h242c6140ba4899e4(int128_t* arg1, int64_t* arg2, int32_t* arg3, int64_t* arg4, char arg5)

{
    int128_t* result =
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h8d6ddca54b70a2bb(arg2, arg3);
    
    if (!result)
    {
        int64_t rax = 2;
        int128_t var_160;
        int128_t var_150;
        int128_t var_140;
        int64_t var_100;
        int128_t var_f8;
        int128_t var_e8;
        int128_t var_d8;
        int64_t var_c8;
        
        if (arg2[0x25] == 1)
        {
            alacritty::renderer::text::builtin_font::builtin_glyph::he2b1f944da5191d7(&var_100, 
                *arg3, &arg2[8], *(arg2 + 0x124), *(arg2 + 0x125), *(arg2 + 0x126), 
                *(arg2 + 0x127));
            rax = var_100;
            var_160 = var_f8;
            var_150 = var_e8;
            var_140 = var_d8;
            int64_t var_130_1 = var_c8;
        }
        
        int64_t var_168 = rax;
        core::option::Option$LT$T$GT$::map_or_else::h1461415ae136d526(&var_100, &var_168, 
            &arg2[0xd], arg3);
        int64_t rcx_3 = var_100;
        char var_170_1 = rcx_3;
        int64_t var_128;
        int128_t var_b8;
        char rbp;
        
        if (rcx_3 != 1)
        {
            int128_t var_48_1 = var_c8;
            int128_t var_58_1 = var_d8;
            int128_t var_68_1 = var_e8;
            int128_t var_78 = var_f8;
            rbp = 1;
            alacritty::renderer::text::glyph_cache::GlyphCache::load_glyph::hd49e73bd348c95cf(
                &var_b8, arg2, arg4, &var_78);
        }
        else if (!arg5 || var_f8 - 2 <= 4)
        {
            var_140 = 0x20;
            var_168 = {0};
            var_140 = {0};
            *var_160[8] = 1;
            int128_t var_150_1 = {0};
            alacritty::renderer::text::glyph_cache::GlyphCache::load_glyph::hd49e73bd348c95cf(
                &var_b8, arg2, arg4, &var_168);
            rbp = 1;
        }
        else
        {
            int32_t var_17c = 0;
            int64_t rax_4 = *(arg3 + 4);
            void* rax_5 =
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h8d6ddca54b70a2bb(arg2, 
                &var_17c);
            
            if (!rax_5)
            {
                var_140 = var_c8;
                var_150 = var_d8;
                var_160 = var_e8;
                var_168 = var_f8;
                int128_t var_98;
                alacritty::renderer::text::glyph_cache::GlyphCache::load_glyph::hd49e73bd348c95cf(
                    &var_98, arg2, arg4, &var_168);
                int32_t var_120_1 = *rax_4[4];
                var_128 = var_17c;
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h9222c14c891ea1b6(&var_168, 
                    arg2, &var_128, &var_98);
                var_b8 = var_98;
                int128_t var_88;
                int128_t var_a8_2 = var_88;
            }
            else
            {
                int128_t var_a8_1 = *(rax_5 + 0x1c);
                var_b8 = *(rax_5 + 0xc);
                core::ptr::drop_in_place$LT$crossfont..RasterizedGlyph$GT$::h3ae70e12a7ce09ca(
                    &var_f8);
            }
            
            rbp = 0;
        }
        
        int32_t var_120_2 = arg3[2];
        var_128 = *arg3;
        hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::h5a08109d5f25fa97(&var_168, arg2, &var_128);
        
        if (*var_160[8] != 0x110000)
        {
            int128_t var_118_1 = var_160;
            var_128 = var_168;
        }
        else
        {
            var_128 = var_168;
            int128_t var_118;
            var_118 = 0x110000;
        }
        
        result = std::collections::hash::map::Entry$LT$K$C$V$GT$::or_insert::habe8e28b5aada050(
            &var_128, &var_b8);
        int128_t zmm0_7 = *result;
        arg1[1] = result[1];
        *arg1 = zmm0_7;
        
        if (var_170_1)
        {
            int64_t* rdi_11 = &var_f8;
            result = var_f8 - 2;
            
            if (result <= 4)
                return core::ptr::drop_in_place$LT$crossfont..Error$GT$::h531104d480ecb501(rdi_11);
            
            if (rbp)
                return 
                    core::ptr::drop_in_place$LT$crossfont..RasterizedGlyph$GT$::h3ae70e12a7ce09ca(
                    rdi_11);
        }
    }
    else
    {
        int128_t zmm0_1 = *(result + 0xc);
        arg1[1] = *(result + 0x1c);
        *arg1 = zmm0_1;
    }
    
    return result;
}
