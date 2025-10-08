
  fn alacritty::renderer::text::glyph_cache::GlyphCache::load_glyph::h17862b71c3f3fa90(arg1: *mut i32, arg2: *mut c_void, arg3: *mut i64, arg4: *mut i64) -> i64

{
    let rbp_1: i32 = *arg2.byte_offset(0x126) + arg4[7];
    arg4[7] = rbp_1;
    let zmm0: f32 = *arg2.byte_offset(0x50);
    let mut rdx: i32 = 0x7fffffff;
    
    if zmm0 <= 2.14748352e+09f
    {
        rdx = zmm0;
    }
    
    let mut rcx_1: i32 = 0;
    
    if FCMP_O(zmm0, zmm0)
    {
        rcx_1 = rdx;
    }
    
    *arg4.byte_offset(0x34) = *arg2.byte_offset(0x127) + *arg4.byte_offset(0x34) - rcx_1;
    let rdi: i32 = arg4[5];
    
    if rdi >= 0xa0 && unicode_width::tables::lookup_width::hf99baf8c7b02f1d5(rdi) == 0
    {
        let zmm0_1: f64 = *arg2.byte_offset(0x40);
        let mut rax_4: i32 = 0;
        let rcx_2: i32 = __minsd_xmmsd_memsd(__maxsd_xmmsd_memsd(zmm0_1, -0x3e20000000000000), 
            0x41dfffffffc00000);
        
        if FCMP_O(zmm0_1, zmm0_1)
        {
            rax_4 = rcx_2;
        }
        
        arg4[7] = rbp_1 + rax_4;
    }
    
    _$LT$alacritty..renderer..text..glsl3..RenderApi$u20$as$u20$alacritty..renderer..text..glyph_cache..LoadGlyph$GT$::load_glyph::h224650aa6b2e84f8(arg1, arg3, arg4);
    /* tailcall */
    core::ptr::drop_in_place$LT$crossfont..RasterizedGlyph$GT$::h3ae70e12a7ce09ca(arg4)
}
