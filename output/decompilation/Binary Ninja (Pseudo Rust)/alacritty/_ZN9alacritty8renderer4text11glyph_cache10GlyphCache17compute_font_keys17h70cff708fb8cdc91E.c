
  fn alacritty::renderer::text::glyph_cache::GlyphCache::compute_font_keys::h70cff708fb8cdc91(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i64) -> i64

{
    let rbp: i32 = *arg2.byte_offset(0xc0);
    let mut var_160: i32 = rbp;
    let mut var_60: ();
    alacritty::renderer::text::glyph_cache::GlyphCache::make_desc::hbb7630277b5f032e(&var_60, arg2);
    let mut var_158: i64;
    alacritty::renderer::text::glyph_cache::GlyphCache::load_regular_font::h31699e5046c8445a(
        &var_158, arg3, &var_60, rbp);
    let rax: i64 = var_158;
    let var_150: i32;
    let mut var_14c: i128;
    let mut var_13c: i128;
    
    if rax != 7
    {
        let var_11c: i32;
        *arg1.byte_offset(0x3c) = var_11c;
        let var_12c: i128;
        *arg1.byte_offset(0x2c) = var_12c;
        *arg1.byte_offset(0x1c) = var_13c;
        *arg1.byte_offset(0xc) = var_14c;
        *arg1 = rax;
        arg1[1] = var_150;
    }
    else
    {
        let mut var_15c: i32 = var_150;
        let mut var_110: *mut c_void = &var_60;
        let var_108_1: *mut i32 = &var_15c;
        let var_100_1: *mut i64 = arg3;
        let var_f8_1: *mut i32 = &var_160;
        alacritty::config::font::Font::bold::hfdc88a4fe0c17cd9(&var_158, arg2);
        let mut var_f0: i128;
        alacritty::renderer::text::glyph_cache::GlyphCache::make_desc::hbb7630277b5f032e(&var_f0, 
            &var_158);
        core::ptr::drop_in_place$LT$alacritty..config..font..FontDescription$GT$::h6e03b4734dd1a15a(
            &var_158);
        let var_d0: i128;
        var_13c = var_d0;
        let var_e0: i128;
        var_14c = var_e0;
        var_158 = var_f0;
        let rax_1: i32 = alacritty::renderer::text::glyph_cache::GlyphCache::compute_font_keys::_$u7b$$u7b$closure$u7d$$u7d$::hffd5b62a9bc28b2e(&var_110, &var_158);
        alacritty::config::font::Font::italic::hbd7533f9186a5550(&var_158, arg2);
        let mut var_c0: i128;
        alacritty::renderer::text::glyph_cache::GlyphCache::make_desc::hbb7630277b5f032e(&var_c0, 
            &var_158);
        core::ptr::drop_in_place$LT$alacritty..config..font..FontDescription$GT$::h6e03b4734dd1a15a(
            &var_158);
        let var_a0: i128;
        var_13c = var_a0;
        let var_b0: i128;
        var_14c = var_b0;
        var_158 = var_c0;
        let rax_2: i32 = alacritty::renderer::text::glyph_cache::GlyphCache::compute_font_keys::_$u7b$$u7b$closure$u7d$$u7d$::hffd5b62a9bc28b2e(&var_110, &var_158);
        alacritty::config::font::Font::bold_italic::hc06c8f3854a106bc(&var_158, arg2);
        let mut var_90: i128;
        alacritty::renderer::text::glyph_cache::GlyphCache::make_desc::hbb7630277b5f032e(&var_90, 
            &var_158);
        core::ptr::drop_in_place$LT$alacritty..config..font..FontDescription$GT$::h6e03b4734dd1a15a(
            &var_158);
        let var_70: i128;
        var_13c = var_70;
        let var_80: i128;
        var_14c = var_80;
        var_158 = var_90;
        let rax_3: i32 = alacritty::renderer::text::glyph_cache::GlyphCache::compute_font_keys::_$u7b$$u7b$closure$u7d$$u7d$::hffd5b62a9bc28b2e(&var_110, &var_158);
        arg1[1] = var_150;
        *arg1.byte_offset(0xc) = rax_1;
        arg1[2] = rax_2;
        *arg1.byte_offset(0x14) = rax_3;
        *arg1 = 7;
    }
    core::ptr::drop_in_place$LT$crossfont..FontDesc$GT$::h71e32b267b7b4ae1(&var_60)
}
