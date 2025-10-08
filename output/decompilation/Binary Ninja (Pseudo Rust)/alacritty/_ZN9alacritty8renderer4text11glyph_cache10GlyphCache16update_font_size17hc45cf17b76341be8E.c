
  fn alacritty::renderer::text::glyph_cache::GlyphCache::update_font_size::hc45cf17b76341be8(arg1: *mut u64, arg2: *mut c_void, arg3: *mut c_void) -> u64

{
    let r12: i8 = *arg3.byte_offset(0xc7);
    *arg2.byte_offset(0x124) = *arg3.byte_offset(0xc4);
    let mut result_1: u64;
    alacritty::renderer::text::glyph_cache::GlyphCache::compute_font_keys::h70cff708fb8cdc91(
        &result_1, arg3, arg2.byte_offset(0x68));
    let mut result: u64 = result_1;
    let mut var_a0: i32;
    let rbp: i32 = var_a0;
    let var_9c: i32;
    let mut var_98: i32;
    let var_94: i32;
    let mut var_90: i128;
    let var_80: i128;
    
    if result != 7
    {
        let var_70: i64;
        arg1[7] = var_70;
        *arg1.byte_offset(0x28) = var_80;
        *arg1.byte_offset(0x18) = var_90;
        *arg1 = result;
        arg1[1] = rbp;
        *arg1.byte_offset(0xc) = var_9c;
        arg1[2] = var_98;
        *arg1.byte_offset(0x14) = var_94;
    }
    else
    {
        let var_e4_1: i32 = var_98;
        let rax_1: i32 = *arg3.byte_offset(0xc0);
        alacritty::renderer::text::glyph_cache::GlyphCache::load_font_metrics::h197a8eb0e37d6b44(
            &result_1, arg2.byte_offset(0x68), rax_1, r12, rbp);
        result = result_1;
        let mut var_d8: i128 = var_a0;
        let rcx_1: i64 = var_80;
        let mut zmm0_1: i128;
        
        if result != 7
        {
            *arg1.byte_offset(0x30) = var_80;
            arg1[5] = rcx_1;
            zmm0_1 = var_d8;
            *arg1.byte_offset(0x18) = var_90;
            *arg1.byte_offset(8) = zmm0_1;
            *arg1 = result;
        }
        else
        {
            let var_58_1: i128 = var_d8;
            let var_48_1: i128 = var_90;
            
            if core::sync::atomic::atomic_load::h45f93311b58385bb(
                &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3
            {
                zmm0_1 = rax_1;
                zmm0_1 = zmm0_1 / 1000000.0;
                zmm0_1 = zmm0_1;
                zmm0_1 = zmm0_1 * 96f;
                zmm0_1 = zmm0_1 / 72f;
                let mut var_dc: i32 = zmm0_1;
                let mut var_68: *mut i32 = &var_dc;
                let var_60_1: fn(arg1: *mut i128, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Debug$u20$for$u20$f32$GT$::fmt::hb69e1dd567cac570;
                result_1 = &data_c83fc0;
                var_a0 = 2;
                *var_90[8] = 0;
                var_98 = &var_68;
                var_90 = 1;
                let rax_5: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c83fe0);
                var_d8 = "alacritty::renderer::text::glyph…";
                *var_d8[8] = 0x26;
                let mut var_c8_1: i128;
                var_c8_1 = "alacritty::renderer::text::glyph…";
                *var_c8_1[8] = 0x26;
                let var_b8_2: i64 = rax_5;
                log::__private_api::log::h0b6680b994d742b1(&result_1, 3, &var_d8);
            }
            
            *arg2.byte_offset(0x120) = rax_1;
            *arg2.byte_offset(0x110) = rbp;
            *arg2.byte_offset(0x114) = var_9c;
            *arg2.byte_offset(0x118) = var_e4_1;
            *arg2.byte_offset(0x11c) = var_94;
            *arg2.byte_offset(0x40) = var_58_1;
            *arg2.byte_offset(0x50) = var_48_1;
            *arg2.byte_offset(0x60) = rcx_1;
            result = *arg3.byte_offset(0xc9);
            *arg2.byte_offset(0x128) = result;
            *arg1 = 7;
        }
    }
    result
}
