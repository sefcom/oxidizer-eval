
  int64_t alacritty::renderer::text::TextRenderApi::draw_cell::h0daebcce152ab83e(int64_t* arg1, int32_t* arg2, int32_t* arg3, float arg4, float arg5)

{
    int64_t* r14 = arg3;
    uint32_t r13 = arg2[8];
    int32_t rbp = *(arg3 + *(&data_50f760 + ((r13 & 6) << 3)));
    int32_t rax_3 = arg2[7];
    arg3 = !(r13 & 0x100);
    
    if (!(arg3 & rax_3 != 9))
    {
        arg2[7] = 0x20;
        rax_3 = 0x20;
    }
    
    int32_t r12 = r14[0x24];
    int32_t var_a8 = rax_3;
    int32_t var_a4 = rbp;
    int32_t var_a0 = r12;
    void var_50;
    alacritty::renderer::text::glyph_cache::GlyphCache::get::h242c6140ba4899e4(&var_50, r14, 
        &var_a8, arg1, 1);
    int64_t rsi_2 = alacritty::renderer::text::TextRenderApi::add_render_item::hbff4cf76ce075603(
        arg1, arg2, &var_50, arg4, arg5);
    int64_t* rcx_2 = *(arg2 + 0x10);
    
    if (!rcx_2)
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$u32$GT$$GT$$GT$::h7ec37b218d3e4a7b(-0x8000000000000000, rsi_2);
    else
    {
        int64_t var_98_1 = rcx_2[2];
        var_a8 = *rcx_2;
        *rcx_2 = -0x8000000000000000;
        int64_t var_88;
        core::option::Option$LT$T$GT$::filter::h20bb2220dc02f5a7(&var_88, &var_a8, r13 >> 8 & 1);
        int64_t var_80;
        
        if (var_88 != -0x8000000000000000)
        {
            void var_70;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h7cc233c07e85c72b(&var_70, &var_88);
            
            for (int32_t i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd29f82c79629adc9(&var_70); i != 0x110000; i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd29f82c79629adc9(&var_70))
            {
                int32_t i_1 = i;
                int32_t var_b0_1 = rbp;
                int32_t var_ac_1 = r12;
                alacritty::renderer::text::glyph_cache::GlyphCache::get::h242c6140ba4899e4(&var_a8, 
                    r14, &i_1, arg1, 0);
                alacritty::renderer::text::TextRenderApi::add_render_item::hbff4cf76ce075603(arg1, 
                    arg2, &var_a8, arg4, arg5);
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$char$GT$$GT$::hee04c1ec02f5f23e(&var_70);
        }
        else
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$u32$GT$$GT$$GT$::h7ec37b218d3e4a7b(-0x8000000000000000, var_80);
    }
    
    return core::ptr::drop_in_place$LT$alacritty..display..content..RenderableCell$GT$::h4a6dd27aece06382(rcx_2);
}
