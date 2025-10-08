
  int64_t alacritty::renderer::text::glyph_cache::GlyphCache::new::h2aa9558433f4be42(int64_t* arg1, int64_t* arg2, void* arg3)

{
    int64_t var_148;
    alacritty::renderer::text::glyph_cache::GlyphCache::compute_font_keys::h70cff708fb8cdc91(
        &var_148, arg3, arg2);
    int64_t rax = var_148;
    int32_t var_138;
    int32_t r15 = var_138;
    int32_t var_140;
    int32_t var_13c;
    int32_t var_134;
    int128_t var_130;
    int128_t var_120;
    
    if (rax != 7)
    {
        int64_t var_110;
        arg1[7] = var_110;
        *(arg1 + 0x28) = var_120;
        *(arg1 + 0x18) = var_130;
        *arg1 = rax;
        arg1[1] = var_140;
        *(arg1 + 0xc) = var_13c;
        arg1[2] = r15;
        *(arg1 + 0x14) = var_134;
    }
    else
    {
        int32_t rdx_2 = *(arg3 + 0xc0);
        char result = *(arg3 + 0xc7);
        alacritty::renderer::text::glyph_cache::GlyphCache::load_font_metrics::h197a8eb0e37d6b44(
            &var_148, arg2, rdx_2, result, var_140);
        int64_t rax_1 = var_148;
        int128_t var_1e8_1 = var_140;
        int64_t rcx_1 = var_120;
        
        if (rax_1 == 7)
        {
            int128_t var_1a8 = var_130;
            ahash::random_state::RandomState::new::hccae9c0b71bdd92e(&var_148);
            int128_t zmm1_2 = var_138;
            int128_t var_168 = var_148;
            int128_t var_188 = *data_c75358;
            int128_t zmm0_2 = data_c75368;
            void var_e0;
            memcpy(&var_e0, arg2, 0xa8);
            int16_t r14_1 = *(arg3 + 0xc4);
            char rax_3 = *(arg3 + 0xc6);
            char r12_1 = *(arg3 + 0xc9);
            var_148 = var_188;
            var_138 = zmm0_2;
            var_130 = var_168;
            var_120 = zmm1_2;
            int128_t var_108 = var_1e8_1;
            int128_t var_f8 = var_1a8;
            int64_t var_e8 = rcx_1;
            memcpy(arg1, &var_148, 0x110);
            arg1[0x22] = var_140;
            *(arg1 + 0x114) = var_13c;
            arg1[0x23] = r15;
            *(arg1 + 0x11c) = var_134;
            arg1[0x24] = rdx_2;
            *(arg1 + 0x124) = r14_1;
            *(arg1 + 0x126) = rax_3;
            *(arg1 + 0x127) = result;
            arg1[0x25] = r12_1;
            return result;
        }
        
        *(arg1 + 0x30) = var_120;
        arg1[5] = rcx_1;
        *(arg1 + 0x18) = var_130;
        *(arg1 + 8) = var_1e8_1;
        *arg1 = rax_1;
    }
    arg1[0x21] = 0x3b9aca01;
    /* tailcall */
    return core::ptr::drop_in_place$LT$crossfont..ft..FreeTypeRasterizer$GT$::hfbe953f3d7eed890(
        arg2);
}
