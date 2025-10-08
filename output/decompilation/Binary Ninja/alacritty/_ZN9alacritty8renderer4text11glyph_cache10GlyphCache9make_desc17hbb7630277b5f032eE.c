
  int64_t alacritty::renderer::text::glyph_cache::GlyphCache::make_desc::hbb7630277b5f032e(int128_t* arg1, void* arg2)

{
    uint64_t var_40;
    
    if (!(0 + -(*(arg2 + 0x18))))
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_40, arg2 + 0x18);
    else
    {
        char rdx;
        char var_37_1 = rdx;
        char rcx;
        char var_38_1 = rcx;
        var_40 = -0x8000000000000000;
    }
    
    void var_28;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_28, 
        arg2);
    return crossfont::FontDesc::new::hf02d293f40786460(arg1, &var_28, &var_40);
}
