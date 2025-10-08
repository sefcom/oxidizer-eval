
  int64_t alacritty::renderer::text::glyph_cache::GlyphCache::load_glyph::h17862b71c3f3fa90(int32_t* arg1, void* arg2, int64_t* arg3, int64_t* arg4)

{
    int32_t rbp_1 = *(arg2 + 0x126) + arg4[7];
    arg4[7] = rbp_1;
    float zmm0 = *(arg2 + 0x50);
    int32_t rdx = 0x7fffffff;
    
    if (zmm0 <= 2.14748352e+09f)
        rdx = zmm0;
    
    int32_t rcx_1 = 0;
    
    if (FCMP_O(zmm0, zmm0))
        rcx_1 = rdx;
    
    *(arg4 + 0x34) = *(arg2 + 0x127) + *(arg4 + 0x34) - rcx_1;
    int32_t rdi = arg4[5];
    
    if (rdi >= 0xa0 && !unicode_width::tables::lookup_width::hf99baf8c7b02f1d5(rdi))
    {
        double zmm0_1 = *(arg2 + 0x40);
        int32_t rax_4 = 0;
        int32_t rcx_2 = __minsd_xmmsd_memsd(__maxsd_xmmsd_memsd(zmm0_1, -0x3e20000000000000), 
            0x41dfffffffc00000);
        
        if (FCMP_O(zmm0_1, zmm0_1))
            rax_4 = rcx_2;
        
        arg4[7] = rbp_1 + rax_4;
    }
    
    _$LT$alacritty..renderer..text..glsl3..RenderApi$u20$as$u20$alacritty..renderer..text..glyph_cache..LoadGlyph$GT$::load_glyph::h224650aa6b2e84f8(arg1, arg3, arg4);
    /* tailcall */
    return core::ptr::drop_in_place$LT$crossfont..RasterizedGlyph$GT$::h3ae70e12a7ce09ca(arg4);
}
