
  fn forc_fmt::format_file::haa7995617547e0cf(arg1: *mut i8, arg2: i32, arg3: *mut i64, arg4: *mut c_void) -> i64

{
    arg3[2];
    let mut var_208: *mut *mut [i8; 0x126];
    std::fs::canonicalize::h8663464358d35797(&var_208, arg3[1]);
    let rax: *mut *mut [i8; 0x126] = var_208;
    let mut var_200: *mut i8;
    
    if -(rax) != -0x8000000000000000
    {
        let mut var_178: *mut *mut [i8; 0x126] = rax;
        let var_170_1: *mut i8 = var_200;
        let mut var_1f8: *mut *mut i128;
        let var_168_1: *mut *mut i128 = var_1f8;
        let mut rax_2: i8;
        let mut rdx_1: u64;
        rax_2 = forc_util::fs_locking::is_file_dirty::h52e075c7d4f79131(&var_178);
        let mut var_1d8: i128;
        let mut var_148: *mut i128;
        
        if rax_2 == 0
        {
            let mut var_120: i64;
            std::fs::read_to_string::h72615f83e87f7dcf(&var_120, &var_178);
            
            if var_120 != -0x8000000000000000
            {
                let mut var_f8: i128 = var_120;
                let r15_1: i64 = *var_f8[8];
                let var_110: u64;
                _$LT$sway_types..span..Source$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::had989f4edbe327dc(&var_208, r15_1, var_110);
                let mut var_b0: i32;
                swayfmt::formatter::Formatter::format::h30769b7fb1ed121c(&var_b0, arg4, &var_208);
                let var_1e8: i64;
                let mut var_1c8: i64;
                let mut var_1a8: i128;
                let mut var_190: *mut *mut i128;
                let mut var_160: *mut i128;
                let mut var_108: *mut i128;
                let var_a8: i128;
                let var_98: i64;
                
                if var_b0 != 1
                {
                    var_1a8 = var_a8;
                    let mut rax_24: i64;
                    
                    if (arg2 & 1) == 0
                    {
                        rax_24 = forc_fmt::write_file_formatted::ha4a188379ce620ba(var_170_1, 
                            var_168_1, *var_1a8[8]);
                        
                        if rax_24 == 0
                        {
                            'label_7d4065:
                            arg1[1] = 0;
                            rax_24 = 0;
                        }
                        else
                        {
                            *arg1.byte_offset(8) = rax_24;
                            rax_24 = 1;
                        }
                    }
                    else
                    {
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2ec768a733a62c1a(r15_1, var_110, *var_1a8[8], var_98) != 0
                        {
                            goto 'label_7d4065;
                        }
                        
                        let rax_11: i64 = core::sync::atomic::atomic_load::h0943286c275b0a82(
                            &tracing_core::metadata::MAX_LEVEL::he61cb0e5fc6f5f25);
                        
                        if rax_11 == 5 || rax_11 > 2
                        {
                            'label_7d4073:
                            
                            if core::sync::atomic::atomic_load::h6834916517087897(
                                &tracing_core::dispatcher::EXISTS::h25c10194e397632b) == 0 &&
                                core::sync::atomic::atomic_load::h0943286c275b0a82(
                                &log::MAX_LOG_LEVEL_FILTER::h8b86a041fa92d435) >= 3
                            {
                                let forc_fmt::format_file::__CALLSITE::h6facfa2d190e6fa1_2: *mut 
                                    c_void = forc_fmt::format_file::__CALLSITE::h6facfa2d190e6fa1;
                                let zmm0_5: i128 =
                                    *forc_fmt::format_file::__CALLSITE::h6facfa2d190e6fa1_2.
                                    byte_offset(0x20);
                                let mut var_e0: i64 = 3;
                                let mut rax_28: *mut c_void;
                                let mut rdx_11: u64;
                                rax_28 = log::logger::hda83ce6e5b01f630();
                                
                                if (*(rdx_11 + 0x18))(rax_28, &var_e0) != 0
                                {
                                    let forc_fmt::format_file::__CALLSITE::h6facfa2d190e6fa1_3: *mut
                                         c_void = forc_fmt::format_file::__CALLSITE::h6facfa2d190e6fa1;
                                    let rax_30: i64 =
                                        *forc_fmt::format_file::__CALLSITE::h6facfa2d190e6fa1_3.
                                        byte_offset(0x38);
                                    var_1d8 =
                                        *forc_fmt::format_file::__CALLSITE::h6facfa2d190e6fa1_3.
                                        byte_offset(0x30);
                                    var_1c8 =
                                        *forc_fmt::format_file::__CALLSITE::h6facfa2d190e6fa1_3.
                                        byte_offset(0x40);
                                    let var_1b8_4: i64 = 0;
                                    let var_1b0_4: i64 = rax_30;
                                    _$LT$tracing_core..field..Iter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h062fa63b7cc5c6bc(&var_208, &var_1d8);
                                    
                                    if var_208 == 0
                                    {
                                        core::option::expect_failed::h3f620cfb8545dc61(
                                            "FieldSet corrupted (this is a bu…");
                                        /* no return */
                                    }
                                    
                                    let var_128_4: i64 = var_1e8;
                                    let var_138_4: i128 = var_1f8;
                                    var_148 = var_208;
                                    var_108 = &var_178;
                                    let var_100_2: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
                                    var_208 = &data_c0a330;
                                    let var_200_6: i64 = 2;
                                    let var_1e8_8: i64 = 0;
                                    let var_1f8_6: *mut *mut i128 = &var_108;
                                    let var_1f0_8: i64 = 1;
                                    var_190 = &var_148;
                                    let var_188_4: *const *mut *mut [i8; 0x126] = &var_208;
                                    let var_180_4: *mut c_void = &data_c0a3a8;
                                    var_160 = &var_190;
                                    let var_158_4: i64 = 1;
                                    let var_150_2: *mut c_void =
                                        forc_fmt::format_file::__CALLSITE::h6facfa2d190e6fa1_3.
                                        byte_offset(0x30);
                                    let var_1c8_5: i64 = *zmm0_5[8];
                                    var_1d8 = var_e0;
                                    tracing::__macro_support::__tracing_log::h4c7a43eb8e34734d(
                                        forc_fmt::format_file::__CALLSITE::h6facfa2d190e6fa1_2, 
                                        rax_28, rdx_11, &var_1d8, &var_160);
                                }
                            }
                        }
                        else
                        {
                            let rax_12: i8 = tracing_core::callsite::DefaultCallsite::interest::h44bc8806352c8553(&forc_fmt::format_file::__CALLSITE::h6facfa2d190e6fa1);
                            
                            if rax_12 == 0
                            {
                                goto 'label_7d4073;
                            }
                            
                            if tracing::__macro_support::__is_enabled::hb2603213f716e822(
                                forc_fmt::format_file::__CALLSITE::h6facfa2d190e6fa1, rax_12) == 0
                            {
                                goto 'label_7d4073;
                            }
                            
                            let forc_fmt::format_file::__CALLSITE::h6facfa2d190e6fa1_1: *mut 
                                c_void = forc_fmt::format_file::__CALLSITE::h6facfa2d190e6fa1;
                            let rax_14: i64 =
                                *forc_fmt::format_file::__CALLSITE::h6facfa2d190e6fa1_1.
                                byte_offset(0x38);
                            var_1d8 = *forc_fmt::format_file::__CALLSITE::h6facfa2d190e6fa1_1.
                                byte_offset(0x30);
                            var_1c8 = *forc_fmt::format_file::__CALLSITE::h6facfa2d190e6fa1_1.
                                byte_offset(0x40);
                            let var_1b8_2: i64 = 0;
                            let var_1b0_2: i64 = rax_14;
                            _$LT$tracing_core..field..Iter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h062fa63b7cc5c6bc(&var_208, &var_1d8);
                            
                            if var_208 == 0
                            {
                                core::option::expect_failed::h3f620cfb8545dc61(
                                    "FieldSet corrupted (this is a bu…");
                                /* no return */
                            }
                            
                            let var_128_2: i64 = var_1e8;
                            let var_138_2: i128 = var_1f8;
                            var_148 = var_208;
                            var_160 = &var_178;
                            let var_158_2: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
                            var_208 = &data_c0a330;
                            let var_200_3: i64 = 2;
                            let var_1e8_4: i64 = 0;
                            let var_1f8_3: *mut *mut i128 = &var_160;
                            let var_1f0_4: i64 = 1;
                            var_190 = &var_148;
                            let var_188_2: *const *mut *mut [i8; 0x126] = &var_208;
                            let var_180_2: *mut c_void = &data_c0a3a8;
                            var_1d8 = &var_190;
                            *var_1d8[8] = 1;
                            let var_1c8_2: *mut c_void =
                                forc_fmt::format_file::__CALLSITE::h6facfa2d190e6fa1_1.
                                byte_offset(0x30);
                            forc_fmt::format_file::_$u7b$$u7b$closure$u7d$$u7d$::h4f22a50aa6b70671(
                                &var_1d8);
                        }
                        
                        let mut rbp: u64;
                        rbp = 1;
                        forc_fmt::display_file_diff::h0e6791d1d0ed248f(*var_f8[8], var_110, 
                            *var_1a8[8], var_98);
                        arg1[1] = rbp;
                        rax_24 = 0;
                    }
                    
                    *arg1 = rax_24;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::he4f3a1149946cfdd(
                        &var_1a8);
                }
                else
                {
                    let var_198_1: i64 = var_98;
                    var_1a8 = var_a8;
                    let rax_5: i64 = core::sync::atomic::atomic_load::h0943286c275b0a82(
                        &tracing_core::metadata::MAX_LEVEL::he61cb0e5fc6f5f25);
                    
                    if rax_5 == 5 || rax_5 > 1
                    {
                        'label_7d3d57:
                        
                        if core::sync::atomic::atomic_load::h6834916517087897(
                            &tracing_core::dispatcher::EXISTS::h25c10194e397632b) == 0 &&
                            core::sync::atomic::atomic_load::h0943286c275b0a82(
                            &log::MAX_LOG_LEVEL_FILTER::h8b86a041fa92d435) >= 4
                        {
                            let forc_fmt::format_file::__CALLSITE::ha66ca9d00a1fcf17_3: *mut 
                                c_void = forc_fmt::format_file::__CALLSITE::ha66ca9d00a1fcf17;
                            let zmm0_3: i128 =
                                *forc_fmt::format_file::__CALLSITE::ha66ca9d00a1fcf17_3.
                                byte_offset(0x20);
                            let mut var_c8: i64 = 4;
                            let mut rax_18: *mut c_void;
                            let mut rdx_6: i64;
                            rax_18 = log::logger::hda83ce6e5b01f630();
                            
                            if (*(rdx_6 + 0x18))(rax_18, &var_c8) != 0
                            {
                                let forc_fmt::format_file::__CALLSITE::ha66ca9d00a1fcf17_1: *mut 
                                    c_void = forc_fmt::format_file::__CALLSITE::ha66ca9d00a1fcf17;
                                let rax_20: i64 =
                                    *forc_fmt::format_file::__CALLSITE::ha66ca9d00a1fcf17_1.
                                    byte_offset(0x38);
                                var_1d8 = *forc_fmt::format_file::__CALLSITE::ha66ca9d00a1fcf17_1.
                                    byte_offset(0x30);
                                var_1c8 = *forc_fmt::format_file::__CALLSITE::ha66ca9d00a1fcf17_1.
                                    byte_offset(0x40);
                                let var_1b8_3: i64 = 0;
                                let var_1b0_3: i64 = rax_20;
                                _$LT$tracing_core..field..Iter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h062fa63b7cc5c6bc(&var_208, &var_1d8);
                                
                                if var_208 == 0
                                {
                                    core::option::expect_failed::h3f620cfb8545dc61(
                                        "FieldSet corrupted (this is a bu…");
                                    /* no return */
                                }
                                
                                let var_128_3: i64 = var_1e8;
                                let var_138_3: i128 = var_1f8;
                                var_148 = var_208;
                                var_108 = &var_1a8;
                                let var_100_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$swayfmt..error..FormatterError$u20$as$u20$core..fmt..Display$GT$::fmt::h9f01dec83858b98d;
                                var_208 = &data_566a30;
                                var_200 = 1;
                                let var_1e8_5: i64 = 0;
                                var_1f8 = &var_108;
                                let var_1f0_5: i64 = 1;
                                var_190 = &var_148;
                                let var_188_3: *const *mut *mut [i8; 0x126] = &var_208;
                                let var_180_3: *mut c_void = &data_c0a3a8;
                                var_160 = &var_190;
                                let var_158_3: i64 = 1;
                                let var_150_1: *mut c_void =
                                    forc_fmt::format_file::__CALLSITE::ha66ca9d00a1fcf17_1.
                                    byte_offset(0x30);
                                let var_1c8_3: i64 = *zmm0_3[8];
                                var_1d8 = var_c8;
                                tracing::__macro_support::__tracing_log::h4c7a43eb8e34734d(
                                    forc_fmt::format_file::__CALLSITE::ha66ca9d00a1fcf17_3, rax_18, 
                                    rdx_6, &var_1d8, &var_160);
                            }
                        }
                    }
                    else
                    {
                        let rax_6: i8 =
                            tracing_core::callsite::DefaultCallsite::interest::h44bc8806352c8553(
                            &forc_fmt::format_file::__CALLSITE::ha66ca9d00a1fcf17);
                        
                        if rax_6 == 0
                        {
                            goto 'label_7d3d57;
                        }
                        
                        if tracing::__macro_support::__is_enabled::hb2603213f716e822(
                            forc_fmt::format_file::__CALLSITE::ha66ca9d00a1fcf17, rax_6) == 0
                        {
                            goto 'label_7d3d57;
                        }
                        
                        let forc_fmt::format_file::__CALLSITE::ha66ca9d00a1fcf17_2: *mut c_void =
                            forc_fmt::format_file::__CALLSITE::ha66ca9d00a1fcf17;
                        let rax_8: i64 = *forc_fmt::format_file::__CALLSITE::ha66ca9d00a1fcf17_2.
                            byte_offset(0x38);
                        var_1d8 = *forc_fmt::format_file::__CALLSITE::ha66ca9d00a1fcf17_2.
                            byte_offset(0x30);
                        var_1c8 = *forc_fmt::format_file::__CALLSITE::ha66ca9d00a1fcf17_2.
                            byte_offset(0x40);
                        let var_1b8_1: i64 = 0;
                        let var_1b0_1: i64 = rax_8;
                        _$LT$tracing_core..field..Iter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h062fa63b7cc5c6bc(&var_208, &var_1d8);
                        
                        if var_208 == 0
                        {
                            core::option::expect_failed::h3f620cfb8545dc61(
                                "FieldSet corrupted (this is a bu…");
                            /* no return */
                        }
                        
                        let var_128_1: i64 = var_1e8;
                        let var_138_1: i128 = var_1f8;
                        var_148 = var_208;
                        var_160 = &var_1a8;
                        let var_158_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$swayfmt..error..FormatterError$u20$as$u20$core..fmt..Display$GT$::fmt::h9f01dec83858b98d;
                        var_208 = &data_566a30;
                        var_200 = 1;
                        let var_1e8_3: i64 = 0;
                        var_1f8 = &var_160;
                        let var_1f0_3: i64 = 1;
                        var_190 = &var_148;
                        let var_188_1: *const *mut *mut [i8; 0x126] = &var_208;
                        let var_180_1: *mut c_void = &data_c0a3a8;
                        var_1d8 = &var_190;
                        *var_1d8[8] = 1;
                        let var_1c8_1: *mut c_void =
                            forc_fmt::format_file::__CALLSITE::ha66ca9d00a1fcf17_2.
                            byte_offset(0x30);
                        forc_fmt::format_file::_$u7b$$u7b$closure$u7d$$u7d$::hef3f61598dec167f(
                            &var_1d8);
                    }
                    
                    let rdx_9: u64 = core::str::converts::from_utf8::h8a6dc80f786921e0(&var_208, 
                        var_170_1, var_168_1);
                    let mut rax_23: u64;
                    
                    if (var_208 & 1) == 0
                    {
                        var_148 = var_200;
                        let var_140_2: *mut *mut i128 = var_1f8;
                        var_1d8 = &var_148;
                        *var_1d8[8] =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha3e4e52859be5cf4;
                        let var_1c8_4: *mut i128 = &var_1a8;
                        let var_1c0_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$swayfmt..error..FormatterError$u20$as$u20$core..fmt..Display$GT$::fmt::h9f01dec83858b98d;
                        var_208 = &data_c0a350;
                        let var_200_5: i64 = 2;
                        let var_1e8_7: i64 = 0;
                        let var_1f8_5: *mut i128 = &var_1d8;
                        let var_1f0_7: i64 = 2;
                        let mut var_78: ();
                        core::option::Option$LT$T$GT$::map_or_else::he9085a4e14fd35e7(&var_78, 0, 
                            rdx_9, &var_208);
                        rax_23 =
                            anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::hbb2939ea4f0c1592(
                            &var_78);
                    }
                    else
                    {
                        var_1d8 = &var_1a8;
                        *var_1d8[8] = _$LT$swayfmt..error..FormatterError$u20$as$u20$core..fmt..Display$GT$::fmt::h9f01dec83858b98d;
                        var_208 = &data_c0a370;
                        let var_200_4: i64 = 1;
                        let var_1e8_6: i64 = 0;
                        let var_1f8_4: *mut i128 = &var_1d8;
                        let var_1f0_6: i64 = 1;
                        let mut var_60: ();
                        core::option::Option$LT$T$GT$::map_or_else::he9085a4e14fd35e7(&var_60, 0, 
                            rdx_9, &var_208);
                        rax_23 =
                            anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::hbb2939ea4f0c1592(
                            &var_60);
                    }
                    
                    *arg1.byte_offset(8) = rax_23;
                    *arg1 = 1;
                    core::ptr::drop_in_place$LT$swayfmt..error..FormatterError$GT$::h10b3491a4392cacf(&var_1a8);
                }
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::he4f3a1149946cfdd(&var_f8);
                
                if var_120 == -0x8000000000000000
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::hcc2236c43ea66e8e(&var_120);
                }
            }
            else
            {
                let rdx_2: u64 = core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::hcc2236c43ea66e8e(&var_120);
                var_1d8 = &var_178;
                *var_1d8[8] =
                    _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
                var_208 = &data_c0a380;
                let var_200_2: i64 = 1;
                let var_1e8_2: i64 = 0;
                let var_1f8_2: *mut i128 = &var_1d8;
                let var_1f0_2: i64 = 1;
                let mut var_48: ();
                core::option::Option$LT$T$GT$::map_or_else::he9085a4e14fd35e7(&var_48, 0, rdx_2, 
                    &var_208);
                *arg1.byte_offset(8) =
                    anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::hbb2939ea4f0c1592(&var_48);
                *arg1 = 1;
            }
        }
        else
        {
            var_1d8 = var_170_1;
            var_148 = &var_1d8;
            let var_140_1: fn(arg1: *mut i64, arg2: i64) -> u64 =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
            var_208 = &data_c0a320;
            let var_200_1: i64 = 1;
            let var_1e8_1: i64 = 0;
            let var_1f8_1: *mut *mut i128 = &var_148;
            let var_1f0_1: i64 = 1;
            let mut var_90: ();
            core::option::Option$LT$T$GT$::map_or_else::he9085a4e14fd35e7(&var_90, 0, rdx_1, 
                &var_208);
            *arg1.byte_offset(8) =
                anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::hbb2939ea4f0c1592(&var_90);
            *arg1 = 1;
        }
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he39d626ec3977c8f(&var_178);
    }
    else
    {
        *arg1.byte_offset(8) = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h49e8656b8ef808ed(var_200);
        *arg1 = 1;
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he39d626ec3977c8f(arg3)
}
