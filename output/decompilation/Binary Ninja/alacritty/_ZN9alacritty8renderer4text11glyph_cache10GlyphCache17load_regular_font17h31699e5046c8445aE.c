
  int64_t* alacritty::renderer::text::glyph_cache::GlyphCache::load_regular_font::h31699e5046c8445a(int128_t* arg1, int64_t* arg2, void* arg3, int32_t arg4)

{
    int32_t var_168;
    int64_t* result = _$LT$crossfont..ft..FreeTypeRasterizer$u20$as$u20$crossfont..Rasterize$GT$::load_font::h87419683d9fe4c18(&var_168, arg2, arg3, arg4);
    int128_t var_158;
    int128_t var_148;
    int128_t var_138;
    
    if (var_168 == 7)
    {
        int128_t zmm0 = var_168;
        arg1[3] = var_138;
        arg1[2] = var_148;
        arg1[1] = var_158;
        *arg1 = zmm0;
        return result;
    }
    
    int128_t var_f8_1 = var_138;
    int128_t var_108_1 = var_148;
    int128_t var_118_1 = var_158;
    int128_t var_128 = var_168;
    char const* const var_1a8;
    int128_t* const var_e8;
    
    if (core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0))
    {
        int128_t* var_178 = &var_128;
        int64_t (* var_170_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$crossfont..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h37a3422c742e4e2d;
        var_e8 = &data_4e8b60;
        int64_t var_e0_1 = 1;
        int64_t var_c8_1 = 0;
        int128_t** var_d8_1 = &var_178;
        int64_t var_d0_1 = 1;
        int64_t rax_1 = log::__private_api::loc::h250021ea1f26630a(&data_c83fa8);
        var_1a8 = "alacritty::renderer::text::glyph…";
        int64_t var_1a0_1 = 0x26;
        char const* const var_198_1 = "alacritty::renderer::text::glyph…";
        int64_t var_190_1 = 0x26;
        int64_t var_188_1 = rax_1;
        log::__private_api::log::h0b6680b994d742b1(&var_e8, 1, &var_1a8);
    }
    
    _$LT$alacritty..config..font..Font$u20$as$u20$core..default..Default$GT$::default::h1fbf3f7b26419d24(&var_e8);
    alacritty::renderer::text::glyph_cache::GlyphCache::make_desc::hbb7630277b5f032e(&var_1a8, 
        &var_e8);
    core::ptr::drop_in_place$LT$alacritty..config..font..Font$GT$::h7026083151c73adf(&var_e8);
    _$LT$crossfont..ft..FreeTypeRasterizer$u20$as$u20$crossfont..Rasterize$GT$::load_font::h87419683d9fe4c18(arg1, arg2, &var_1a8, arg4);
    core::ptr::drop_in_place$LT$crossfont..FontDesc$GT$::h71e32b267b7b4ae1(&var_1a8);
    return core::ptr::drop_in_place$LT$crossfont..Error$GT$::h531104d480ecb501(&var_128);
}
