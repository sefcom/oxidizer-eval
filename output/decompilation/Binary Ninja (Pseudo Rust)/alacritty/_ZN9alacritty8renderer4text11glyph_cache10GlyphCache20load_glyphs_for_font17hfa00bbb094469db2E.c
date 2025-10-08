
  fn alacritty::renderer::text::glyph_cache::GlyphCache::load_glyphs_for_font::hfa00bbb094469db2(arg1: *mut i64, arg2: i32, arg3: u64) -> i64

{
    let r15: i32 = arg1[0x24];
    let mut var_5f: i16 = 0x2000;
    let var_5d: i8 = 0x7e;
    let mut result: i8;
    let mut rdx: i8;
    result = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h3f8e80b55a84aa09(&var_5f, arg3);
    
    while (result & 1) != 0
    {
        let mut var_5c: u32 = rdx;
        let var_58_1: i32 = arg2;
        let var_54_1: i32 = r15;
        let mut var_50: ();
        alacritty::renderer::text::glyph_cache::GlyphCache::get::hfbc7956d71b1efd9(&var_50, arg1, 
            &var_5c, arg3);
        result = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h3f8e80b55a84aa09(&var_5f, arg3);
    }
    
    result
}
