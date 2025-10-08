
  fn alacritty::renderer::text::glyph_cache::GlyphCache::make_desc::hbb7630277b5f032e(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let mut var_40: u64;
    
    if !(0 + -(*arg2.byte_offset(0x18)))
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_40, arg2.byte_offset(0x18));
    }
    else
    {
        let rdx: i8;
        let var_37_1: i8 = rdx;
        let rcx: i8;
        let var_38_1: i8 = rcx;
        var_40 = -0x8000000000000000;
    }
    
    let mut var_28: ();
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_28, 
        arg2);
    crossfont::FontDesc::new::hf02d293f40786460(arg1, &var_28, &var_40)
}
