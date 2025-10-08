
  uint64_t alacritty::renderer::text::glyph_cache::GlyphCache::update_font_size::hc45cf17b76341be8(uint64_t* arg1, void* arg2, void* arg3)

{
    char r12 = *(arg3 + 0xc7);
    *(arg2 + 0x124) = *(arg3 + 0xc4);
    uint64_t result_1;
    alacritty::renderer::text::glyph_cache::GlyphCache::compute_font_keys::h70cff708fb8cdc91(
        &result_1, arg3, arg2 + 0x68);
    uint64_t result = result_1;
    int32_t var_a0;
    int32_t rbp = var_a0;
    int32_t var_9c;
    int32_t var_98;
    int32_t var_94;
    int128_t var_90;
    int128_t var_80;
    
    if (result != 7)
    {
        int64_t var_70;
        arg1[7] = var_70;
        *(arg1 + 0x28) = var_80;
        *(arg1 + 0x18) = var_90;
        *arg1 = result;
        arg1[1] = rbp;
        *(arg1 + 0xc) = var_9c;
        arg1[2] = var_98;
        *(arg1 + 0x14) = var_94;
    }
    else
    {
        int32_t var_e4_1 = var_98;
        int32_t rax_1 = *(arg3 + 0xc0);
        alacritty::renderer::text::glyph_cache::GlyphCache::load_font_metrics::h197a8eb0e37d6b44(
            &result_1, arg2 + 0x68, rax_1, r12, rbp);
        result = result_1;
        int128_t var_d8 = var_a0;
        int64_t rcx_1 = var_80;
        int128_t zmm0_1;
        
        if (result != 7)
        {
            *(arg1 + 0x30) = var_80;
            arg1[5] = rcx_1;
            zmm0_1 = var_d8;
            *(arg1 + 0x18) = var_90;
            *(arg1 + 8) = zmm0_1;
            *arg1 = result;
        }
        else
        {
            int128_t var_58_1 = var_d8;
            int128_t var_48_1 = var_90;
            
            if (core::sync::atomic::atomic_load::h45f93311b58385bb(
                &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3)
            {
                zmm0_1 = rax_1;
                zmm0_1 = zmm0_1 / 1000000.0;
                zmm0_1 = zmm0_1;
                zmm0_1 = zmm0_1 * 96f;
                zmm0_1 = zmm0_1 / 72f;
                int32_t var_dc = zmm0_1;
                int32_t* var_68 = &var_dc;
                int64_t (* var_60_1)(int128_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Debug$u20$for$u20$f32$GT$::fmt::hb69e1dd567cac570;
                result_1 = &data_c83fc0;
                var_a0 = 2;
                *var_90[8] = 0;
                var_98 = &var_68;
                var_90 = 1;
                int64_t rax_5 = log::__private_api::loc::h250021ea1f26630a(&data_c83fe0);
                var_d8 = "alacritty::renderer::text::glyph…";
                *var_d8[8] = 0x26;
                int128_t var_c8_1;
                var_c8_1 = "alacritty::renderer::text::glyph…";
                *var_c8_1[8] = 0x26;
                int64_t var_b8_2 = rax_5;
                log::__private_api::log::h0b6680b994d742b1(&result_1, 3, &var_d8);
            }
            
            *(arg2 + 0x120) = rax_1;
            *(arg2 + 0x110) = rbp;
            *(arg2 + 0x114) = var_9c;
            *(arg2 + 0x118) = var_e4_1;
            *(arg2 + 0x11c) = var_94;
            *(arg2 + 0x40) = var_58_1;
            *(arg2 + 0x50) = var_48_1;
            *(arg2 + 0x60) = rcx_1;
            result = *(arg3 + 0xc9);
            *(arg2 + 0x128) = result;
            *arg1 = 7;
        }
    }
    return result;
}
