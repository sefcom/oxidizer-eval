
  fn alacritty::renderer::text::TextRenderApi::draw_cell::h0daebcce152ab83e(arg1: *mut i64, arg2: *mut i32, arg3: *mut i32, arg4: f32, arg5: f32) -> i64

{
    let r14: *mut i64 = arg3;
    let r13: u32 = arg2[8];
    let rbp: i32 = *arg3.byte_offset(*(&data_50f760).byte_offset((r13 & 6) << 3));
    let mut rax_3: i32 = arg2[7];
    arg3 = (r13 & 0x100) == 0;
    
    if (arg3 & rax_3 != 9) == 0
    {
        arg2[7] = 0x20;
        rax_3 = 0x20;
    }
    
    let r12: i32 = r14[0x24];
    let mut var_a8: i32 = rax_3;
    let var_a4: i32 = rbp;
    let var_a0: i32 = r12;
    let mut var_50: ();
    alacritty::renderer::text::glyph_cache::GlyphCache::get::h242c6140ba4899e4(&var_50, r14, 
        &var_a8, arg1, 1);
    let rsi_2: i64 = alacritty::renderer::text::TextRenderApi::add_render_item::hbff4cf76ce075603(
        arg1, arg2, &var_50, arg4, arg5);
    let rcx_2: *mut i64 = *arg2.byte_offset(0x10);
    
    if rcx_2 == 0
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$u32$GT$$GT$$GT$::h7ec37b218d3e4a7b(-0x8000000000000000, rsi_2);
    }
    else
    {
        let var_98_1: i64 = rcx_2[2];
        var_a8 = *rcx_2;
        *rcx_2 = -0x8000000000000000;
        let mut var_88: i64;
        core::option::Option$LT$T$GT$::filter::h20bb2220dc02f5a7(&var_88, &var_a8, r13 >> 8 & 1);
        let var_80: i64;
        
        if var_88 != -0x8000000000000000
        {
            let mut var_70: ();
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h7cc233c07e85c72b(&var_70, &var_88);
            
            for let mut i: i32 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd29f82c79629adc9(&var_70); i != 0x110000; i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd29f82c79629adc9(&var_70)
            {
                let mut i_1: i32 = i;
                let var_b0_1: i32 = rbp;
                let var_ac_1: i32 = r12;
                alacritty::renderer::text::glyph_cache::GlyphCache::get::h242c6140ba4899e4(&var_a8, 
                    r14, &i_1, arg1, 0);
                alacritty::renderer::text::TextRenderApi::add_render_item::hbff4cf76ce075603(arg1, 
                    arg2, &var_a8, arg4, arg5);
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$char$GT$$GT$::hee04c1ec02f5f23e(&var_70);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$u32$GT$$GT$$GT$::h7ec37b218d3e4a7b(-0x8000000000000000, var_80);
        }
    }
    
    core::ptr::drop_in_place$LT$alacritty..display..content..RenderableCell$GT$::h4a6dd27aece06382(
        rcx_2)
}
