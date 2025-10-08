
  int64_t alacritty::renderer::text::glyph_cache::GlyphCache::load_glyphs_for_font::hfa00bbb094469db2(int64_t* arg1, int32_t arg2, uint64_t arg3)

{
    int32_t r15 = arg1[0x24];
    int16_t var_5f = 0x2000;
    char var_5d = 0x7e;
    char result;
    char rdx;
    result = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h3f8e80b55a84aa09(&var_5f, arg3);
    
    while (result & 1)
    {
        uint32_t var_5c = rdx;
        int32_t var_58_1 = arg2;
        int32_t var_54_1 = r15;
        void var_50;
        alacritty::renderer::text::glyph_cache::GlyphCache::get::hfbc7956d71b1efd9(&var_50, arg1, 
            &var_5c, arg3);
        result = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h3f8e80b55a84aa09(&var_5f, arg3);
    }
    
    return result;
}
