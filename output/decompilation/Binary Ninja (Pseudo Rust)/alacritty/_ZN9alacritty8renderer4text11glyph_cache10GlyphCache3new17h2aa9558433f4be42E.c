
  fn alacritty::renderer::text::glyph_cache::GlyphCache::new::h2aa9558433f4be42(arg1: *mut i64, arg2: *mut i64, arg3: *mut c_void) -> i64

{
    let mut var_148: i64;
    alacritty::renderer::text::glyph_cache::GlyphCache::compute_font_keys::h70cff708fb8cdc91(
        &var_148, arg3, arg2);
    let rax: i64 = var_148;
    let mut var_138: i32;
    let r15: i32 = var_138;
    let var_140: i32;
    let var_13c: i32;
    let var_134: i32;
    let mut var_130: i128;
    let mut var_120: i128;
    
    if rax != 7
    {
        let var_110: i64;
        arg1[7] = var_110;
        *arg1.byte_offset(0x28) = var_120;
        *arg1.byte_offset(0x18) = var_130;
        *arg1 = rax;
        arg1[1] = var_140;
        *arg1.byte_offset(0xc) = var_13c;
        arg1[2] = r15;
        *arg1.byte_offset(0x14) = var_134;
    }
    else
    {
        let rdx_2: i32 = *arg3.byte_offset(0xc0);
        let result: i8 = *arg3.byte_offset(0xc7);
        alacritty::renderer::text::glyph_cache::GlyphCache::load_font_metrics::h197a8eb0e37d6b44(
            &var_148, arg2, rdx_2, result, var_140);
        let rax_1: i64 = var_148;
        let var_1e8_1: i128 = var_140;
        let rcx_1: i64 = var_120;
        
        if rax_1 == 7
        {
            let var_1a8: i128 = var_130;
            ahash::random_state::RandomState::new::hccae9c0b71bdd92e(&var_148);
            let zmm1_2: i128 = var_138;
            let var_168: i128 = var_148;
            let var_188: i128 = *data_c75358;
            let zmm0_2: i128 = data_c75368;
            let mut var_e0: ();
            memcpy(&var_e0, arg2, 0xa8);
            let r14_1: i16 = *arg3.byte_offset(0xc4);
            let rax_3: i8 = *arg3.byte_offset(0xc6);
            let r12_1: i8 = *arg3.byte_offset(0xc9);
            var_148 = var_188;
            var_138 = zmm0_2;
            var_130 = var_168;
            var_120 = zmm1_2;
            let var_108: i128 = var_1e8_1;
            let var_f8: i128 = var_1a8;
            let var_e8: i64 = rcx_1;
            memcpy(arg1, &var_148, 0x110);
            arg1[0x22] = var_140;
            *arg1.byte_offset(0x114) = var_13c;
            arg1[0x23] = r15;
            *arg1.byte_offset(0x11c) = var_134;
            arg1[0x24] = rdx_2;
            *arg1.byte_offset(0x124) = r14_1;
            *arg1.byte_offset(0x126) = rax_3;
            *arg1.byte_offset(0x127) = result;
            arg1[0x25] = r12_1;
            return result;
        }
        
        *arg1.byte_offset(0x30) = var_120;
        arg1[5] = rcx_1;
        *arg1.byte_offset(0x18) = var_130;
        *arg1.byte_offset(8) = var_1e8_1;
        *arg1 = rax_1;
    }
    arg1[0x21] = 0x3b9aca01;
    /* tailcall */
    core::ptr::drop_in_place$LT$crossfont..ft..FreeTypeRasterizer$GT$::hfbe953f3d7eed890(arg2)
}
