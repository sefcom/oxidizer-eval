
  fn alacritty::renderer::text::glyph_cache::GlyphCache::get::h242c6140ba4899e4(arg1: *mut i128, arg2: *mut i64, arg3: *mut i32, arg4: *mut i64, arg5: i8) -> *mut i128

{
    let mut result: *mut i128 =
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h8d6ddca54b70a2bb(arg2, arg3);
    
    if result == 0
    {
        let mut rax: i64 = 2;
        let mut var_160: i128;
        let mut var_150: i128;
        let mut var_140: i128;
        let mut var_100: i64;
        let mut var_f8: i128;
        let var_e8: i128;
        let var_d8: i128;
        let var_c8: i64;
        
        if arg2[0x25] == 1
        {
            alacritty::renderer::text::builtin_font::builtin_glyph::he2b1f944da5191d7(&var_100, 
                *arg3, &arg2[8], *arg2.byte_offset(0x124), *arg2.byte_offset(0x125), 
                *arg2.byte_offset(0x126), *arg2.byte_offset(0x127));
            rax = var_100;
            var_160 = var_f8;
            var_150 = var_e8;
            var_140 = var_d8;
            let var_130_1: i64 = var_c8;
        }
        
        let mut var_168: i64 = rax;
        core::option::Option$LT$T$GT$::map_or_else::h1461415ae136d526(&var_100, &var_168, 
            &arg2[0xd], arg3);
        let rcx_3: i64 = var_100;
        let var_170_1: i8 = rcx_3;
        let mut var_128: i64;
        let mut var_b8: i128;
        let mut rbp: i8;
        
        if rcx_3 != 1
        {
            let var_48_1: i128 = var_c8;
            let var_58_1: i128 = var_d8;
            let var_68_1: i128 = var_e8;
            let mut var_78: i128 = var_f8;
            rbp = 1;
            alacritty::renderer::text::glyph_cache::GlyphCache::load_glyph::hd49e73bd348c95cf(
                &var_b8, arg2, arg4, &var_78);
        }
        else if arg5 == 0 || var_f8 - 2 <= 4
        {
            var_140 = 0x20;
            var_168 = {0};
            var_140 = {0};
            *var_160[8] = 1;
            let var_150_1: i128 = {0};
            alacritty::renderer::text::glyph_cache::GlyphCache::load_glyph::hd49e73bd348c95cf(
                &var_b8, arg2, arg4, &var_168);
            rbp = 1;
        }
        else
        {
            let mut var_17c: i32 = 0;
            let rax_4: i64 = *arg3.byte_offset(4);
            let rax_5: *mut c_void =
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h8d6ddca54b70a2bb(arg2, 
                &var_17c);
            
            if rax_5 == 0
            {
                var_140 = var_c8;
                var_150 = var_d8;
                var_160 = var_e8;
                var_168 = var_f8;
                let mut var_98: i128;
                alacritty::renderer::text::glyph_cache::GlyphCache::load_glyph::hd49e73bd348c95cf(
                    &var_98, arg2, arg4, &var_168);
                let var_120_1: i32 = *rax_4[4];
                var_128 = var_17c;
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h9222c14c891ea1b6(&var_168, 
                    arg2, &var_128, &var_98);
                var_b8 = var_98;
                let var_88: i128;
                let var_a8_2: i128 = var_88;
            }
            else
            {
                let var_a8_1: i128 = *rax_5.byte_offset(0x1c);
                var_b8 = *rax_5.byte_offset(0xc);
                core::ptr::drop_in_place$LT$crossfont..RasterizedGlyph$GT$::h3ae70e12a7ce09ca(
                    &var_f8);
            }
            
            rbp = 0;
        }
        
        let var_120_2: i32 = arg3[2];
        var_128 = *arg3;
        hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::h5a08109d5f25fa97(&var_168, arg2, &var_128);
        
        if *var_160[8] != 0x110000
        {
            let var_118_1: i128 = var_160;
            var_128 = var_168;
        }
        else
        {
            var_128 = var_168;
            let mut var_118: i128;
            var_118 = 0x110000;
        }
        
        result = std::collections::hash::map::Entry$LT$K$C$V$GT$::or_insert::habe8e28b5aada050(
            &var_128, &var_b8);
        let zmm0_7: i128 = *result;
        arg1[1] = result[1];
        *arg1 = zmm0_7;
        
        if var_170_1 != 0
        {
            let rdi_11: *mut i64 = &var_f8;
            result = var_f8.byte_offset(-2);
            
            if result <= 4
            {
                return core::ptr::drop_in_place$LT$crossfont..Error$GT$::h531104d480ecb501(rdi_11);
            }
            
            if rbp != 0
            {
                return 
                    core::ptr::drop_in_place$LT$crossfont..RasterizedGlyph$GT$::h3ae70e12a7ce09ca(
                    rdi_11);
            }
        }
    }
    else
    {
        let zmm0_1: i128 = *result.byte_offset(0xc);
        arg1[1] = *result.byte_offset(0x1c);
        *arg1 = zmm0_1;
    }
    
    result
}
