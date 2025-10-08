
  fn alacritty::renderer::text::glyph_cache::GlyphCache::load_font_metrics::h197a8eb0e37d6b44(arg1: *mut i64, arg2: *mut i64, arg3: i32, arg4: i8, arg5: i32) -> u64

{
    let mut var_d8: i32 = 0x6d;
    let var_d4: i32 = arg5;
    let var_d0: i32 = arg3;
    let mut result_1: i32;
    _$LT$crossfont..ft..FreeTypeRasterizer$u20$as$u20$crossfont..Rasterize$GT$::get_glyph::h2f302aee46461b54(&result_1, arg2, &var_d8);
    let mut result: u64 = result_1;
    let var_a8: i128;
    let mut var_68: i128 = var_a8;
    let var_98: i128;
    let var_88: i128;
    
    if result != 1
    {
        core::ptr::drop_in_place$LT$crossfont..RasterizedGlyph$GT$::h3ae70e12a7ce09ca(&var_68);
        _$LT$crossfont..ft..FreeTypeRasterizer$u20$as$u20$crossfont..Rasterize$GT$::metrics::h73af167475e5ec59(&result_1, arg2, arg5);
        let rcx: i64 = result_1;
        var_d8 = var_a8;
        let mut zmm0_1: i128 = *var_98[0xc];
        result = var_88;
        
        if rcx != 7
        {
            *arg1.byte_offset(0x30) = var_88;
            *arg1.byte_offset(0x14) = var_a8;
            *arg1.byte_offset(8) = var_d8;
            *arg1 = rcx;
            *arg1.byte_offset(0x24) = zmm0_1;
            arg1[5] = result;
        }
        else
        {
            *arg1.byte_offset(0x14) = var_a8;
            *arg1.byte_offset(8) = var_d8;
            let mut zmm1_1: i128;
            zmm1_1 = arg4;
            zmm0_1 = zmm0_1 + zmm1_1;
            *arg1.byte_offset(0x24) = zmm0_1;
            arg1[5] = result;
            *arg1 = 7;
        }
    }
    else
    {
        let zmm0: i128 = var_68;
        let var_78: i128;
        *arg1.byte_offset(0x30) = var_78;
        *arg1.byte_offset(0x20) = var_88;
        *arg1.byte_offset(0x10) = var_98;
        *arg1 = zmm0;
    }
    result
}
