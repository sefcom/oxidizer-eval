
  fn alacritty::display::Display::update_font_size::h86a7d3c64310d9e8(arg1: *mut c_void, arg2: i8, arg3: i8, arg4: *mut c_void) -> i512

{
    let mut var_60: ();
    alacritty::renderer::text::glyph_cache::GlyphCache::update_font_size::hc45cf17b76341be8(
        &var_60, arg1, arg4);
    let mut zmm0: u128;
    let mut zmm1: u128;
    zmm0 = core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$crossfont..Error$GT$$GT$::hf8c39d173a5e65eb(&var_60);
    zmm0 = arg2;
    zmm1 = arg3;
    zmm0 = zmm0 + *arg1.byte_offset(0x40);
    let mut zmm0_1: u128;
    let mut zmm1_1: u128;
    zmm0_1 = floor(zmm0, zmm1);
    zmm0_1 = __maxsd_xmmsd_memsd(zmm0_1, 0x3ff0000000000000);
    let result: i32 = zmm0_1;
    zmm0_1 = zmm1 + *arg1.byte_offset(0x48);
    let mut zmm0_2: i64;
    let mut zmm1_2: i512;
    zmm0_2 = floor(zmm0_1, zmm1_1);
    zmm1_2 = {0};
    zmm1_2 = __maxsd_xmmsd_memsd(zmm0_2, 0x3ff0000000000000);
    result
}
