
  uint64_t alacritty::renderer::text::glyph_cache::GlyphCache::load_font_metrics::h197a8eb0e37d6b44(int64_t* arg1, int64_t* arg2, int32_t arg3, char arg4, int32_t arg5)

{
    int32_t var_d8 = 0x6d;
    int32_t var_d4 = arg5;
    int32_t var_d0 = arg3;
    int32_t result_1;
    _$LT$crossfont..ft..FreeTypeRasterizer$u20$as$u20$crossfont..Rasterize$GT$::get_glyph::h2f302aee46461b54(&result_1, arg2, &var_d8);
    uint64_t result = result_1;
    int128_t var_a8;
    int128_t var_68 = var_a8;
    int128_t var_98;
    int128_t var_88;
    
    if (result != 1)
    {
        core::ptr::drop_in_place$LT$crossfont..RasterizedGlyph$GT$::h3ae70e12a7ce09ca(&var_68);
        _$LT$crossfont..ft..FreeTypeRasterizer$u20$as$u20$crossfont..Rasterize$GT$::metrics::h73af167475e5ec59(&result_1, arg2, arg5);
        int64_t rcx = result_1;
        var_d8 = var_a8;
        int128_t zmm0_1 = *var_98[0xc];
        result = var_88;
        
        if (rcx != 7)
        {
            *(arg1 + 0x30) = var_88;
            *(arg1 + 0x14) = var_a8;
            *(arg1 + 8) = var_d8;
            *arg1 = rcx;
            *(arg1 + 0x24) = zmm0_1;
            arg1[5] = result;
        }
        else
        {
            *(arg1 + 0x14) = var_a8;
            *(arg1 + 8) = var_d8;
            int128_t zmm1_1;
            zmm1_1 = arg4;
            zmm0_1 = zmm0_1 + zmm1_1;
            *(arg1 + 0x24) = zmm0_1;
            arg1[5] = result;
            *arg1 = 7;
        }
    }
    else
    {
        int128_t zmm0 = var_68;
        int128_t var_78;
        *(arg1 + 0x30) = var_78;
        *(arg1 + 0x20) = var_88;
        *(arg1 + 0x10) = var_98;
        *arg1 = zmm0;
    }
    return result;
}
