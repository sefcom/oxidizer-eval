
  fn alacritty::renderer::text::glyph_cache::GlyphCache::load_regular_font::h31699e5046c8445a(arg1: *mut i128, arg2: *mut i64, arg3: *mut c_void, arg4: i32) -> *mut i64

{
    let mut var_168: i32;
    let result: *mut i64 = _$LT$crossfont..ft..FreeTypeRasterizer$u20$as$u20$crossfont..Rasterize$GT$::load_font::h87419683d9fe4c18(&var_168, arg2, arg3, arg4);
    let var_158: i128;
    let var_148: i128;
    let var_138: i128;
    
    if var_168 == 7
    {
        let zmm0: i128 = var_168;
        arg1[3] = var_138;
        arg1[2] = var_148;
        arg1[1] = var_158;
        *arg1 = zmm0;
        return result;
    }
    
    let var_f8_1: i128 = var_138;
    let var_108_1: i128 = var_148;
    let var_118_1: i128 = var_158;
    let mut var_128: i128 = var_168;
    let mut var_1a8: *const i8;
    let mut var_e8: *mut i128;
    
    if core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) != 0
    {
        let mut var_178: *mut i128 = &var_128;
        let var_170_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$crossfont..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h37a3422c742e4e2d;
        var_e8 = &data_4e8b60;
        let var_e0_1: i64 = 1;
        let var_c8_1: i64 = 0;
        let var_d8_1: *mut *mut i128 = &var_178;
        let var_d0_1: i64 = 1;
        let rax_1: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c83fa8);
        var_1a8 = "alacritty::renderer::text::glyph…";
        let var_1a0_1: i64 = 0x26;
        let var_198_1: *const i8 = "alacritty::renderer::text::glyph…";
        let var_190_1: i64 = 0x26;
        let var_188_1: i64 = rax_1;
        log::__private_api::log::h0b6680b994d742b1(&var_e8, 1, &var_1a8);
    }
    
    _$LT$alacritty..config..font..Font$u20$as$u20$core..default..Default$GT$::default::h1fbf3f7b26419d24(&var_e8);
    alacritty::renderer::text::glyph_cache::GlyphCache::make_desc::hbb7630277b5f032e(&var_1a8, 
        &var_e8);
    core::ptr::drop_in_place$LT$alacritty..config..font..Font$GT$::h7026083151c73adf(&var_e8);
    _$LT$crossfont..ft..FreeTypeRasterizer$u20$as$u20$crossfont..Rasterize$GT$::load_font::h87419683d9fe4c18(arg1, arg2, &var_1a8, arg4);
    core::ptr::drop_in_place$LT$crossfont..FontDesc$GT$::h71e32b267b7b4ae1(&var_1a8);
    core::ptr::drop_in_place$LT$crossfont..Error$GT$::h531104d480ecb501(&var_128)
}
