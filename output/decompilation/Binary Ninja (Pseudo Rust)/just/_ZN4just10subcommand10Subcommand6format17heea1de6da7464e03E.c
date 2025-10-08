
  fn just::subcommand::Subcommand::format::heea1de6da7464e03(arg1: *mut i8, arg2: *mut c_void, arg3: *mut c_void, arg4: *mut i64) -> i64

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = just::compilation::Compilation::root_src::hcd87e6a66a75a8d2(arg4);
    let rax_1: *mut c_void = just::compilation::Compilation::root_ast::hde4a084de7e3435a(arg4);
    
    if *arg2.byte_offset(0x1a4) != 0 || *arg4.byte_offset(0x1eb) != 0
    {
        let mut var_240: ();
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hdc955df6c1091189(
            &var_240, rax_1);
        let var_238: i64;
        let var_230: u64;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_238, var_230, rax, rdx) == 0
        {
            let mut var_280: *mut i8;
            let mut var_228: i8;
            let mut var_227: i128;
            let mut var_217: i128;
            let mut var_207: i128;
            let mut var_1f7: i128;
            let mut var_1e7: i128;
            let mut var_1d7: i128;
            let mut var_1b8: i128;
            
            if *arg2.byte_offset(0x197) != 0
            {
                if *arg2.byte_offset(0x1a7) != 0
                {
                    var_228 = 2;
                    *var_217[7] = 0x201;
                    similar::text::TextDiffConfig::diff_lines::hbe364afe4ea52021(&var_1b8, 
                        &var_228, rax, rdx, var_238);
                    let var_1a8: i64;
                    
                    if var_1a8 != 0
                    {
                        let mut rbx_2: *mut i64 = *var_1b8[8];
                        let rax_6: *mut c_void = &rbx_2[var_1a8 * 5];
                        let mut rax_7: *mut i64 = &rbx_2[5];
                        let var_290_2: *mut c_void = arg2.byte_offset(0x184);
                        
                        do
                        {
                            let rdx_3: *mut i64 = rbx_2;
                            rbx_2 = rax_7;
                            let mut var_98: i128;
                            similar::text::TextDiff$LT$T$GT$::iter_changes::h6c2aeb8528ab18a4(
                                &var_98, &var_1b8, rdx_3);
                            let var_38: i64;
                            *var_1d7[0xf] = var_38;
                            let var_48: i128;
                            var_1e7 = var_48;
                            let var_58: i128;
                            var_1f7 = var_58;
                            let var_68: i128;
                            var_207 = var_68;
                            let var_78: i128;
                            var_217 = var_78;
                            let var_88: i128;
                            var_227 = var_88;
                            var_228 = var_98;
                            let r15_1: *mut i64 = rbx_2;
                            
                            loop
                            {
                                let mut var_110: i32;
                                _$LT$similar..iter..ChangesIter$LT$Old$C$New$C$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0cc5ddc1a1cad602(&var_110, &var_228);
                                
                                if var_110 == 2
                                {
                                    break;
                                }
                                
                                let var_e0: i64;
                                let var_a8_1: i64 = var_e0;
                                let var_f0: i128;
                                let var_b8_1: i128 = var_f0;
                                let var_100: i128;
                                let var_c8_1: i128 = var_100;
                                let mut var_d8: i128 = var_110;
                                let rax_10: i32 = var_e0 & 0xff;
                                let var_26f: i8;
                                let mut var_150: *const i8;
                                let mut rax_11: i32;
                                let mut rcx_3: i8;
                                let mut rdx_4: i32;
                                let mut rbx_3: i8;
                                let mut rbp_2: i8;
                                let mut rsi_7: i8;
                                let mut rdi_10: i8;
                                let mut r8_2: i8;
                                let mut r9_2: i8;
                                let mut r10_1: i8;
                                let mut r11_1: i8;
                                
                                if rax_10 != 0
                                {
                                    let mut r12_1: i8;
                                    let mut r14_1: *const i8;
                                    
                                    if rax_10 != 1
                                    {
                                        just::color::Color::stdout::h99dee7c87aa8c485(&var_280, 
                                            var_290_2);
                                        rbp_2 = var_280;
                                        r12_1 = var_26f;
                                        rdx_4 = 0xa;
                                        rax_11 = 2;
                                        rcx_3 = 0;
                                        r14_1 = "+*src/parser.rs`Parser::next()` …";
                                    }
                                    else
                                    {
                                        just::color::Color::stdout::h99dee7c87aa8c485(&var_280, 
                                            var_290_2);
                                        rbp_2 = var_280;
                                        r12_1 = var_26f;
                                        rdx_4 = 0xa;
                                        rax_11 = 1;
                                        rcx_3 = 0;
                                        r14_1 = "-# https://just.systems\n\ndefau…";
                                    }
                                    
                                    rsi_7 = 0;
                                    rdi_10 = 0;
                                    r8_2 = 0;
                                    r9_2 = 0;
                                    r10_1 = 0;
                                    r11_1 = 0;
                                    rbx_3 = 0;
                                    var_150 = r14_1;
                                    let var_148_2: i64 = 1;
                                    
                                    if r12_1 == 2 || (r12_1 == 1 && (rbp_2 & 1) == 0)
                                    {
                                        goto 'label_68e180;
                                    }
                                    
                                    goto 'label_68e157;
                                }
                                
                                just::color::Color::stdout::h99dee7c87aa8c485(&var_280, var_290_2);
                                rbp_2 = var_280;
                                rcx_3 = *var_280[1];
                                rsi_7 = *var_280[2];
                                rdi_10 = *var_280[3];
                                r8_2 = *var_280[4];
                                r9_2 = *var_280[5];
                                r10_1 = *var_280[6];
                                r11_1 = *var_280[7];
                                let mut var_278: fn(arg1: *mut i8, arg2: i64) -> i64;
                                rbx_3 = var_278;
                                rax_11 = *var_278[1];
                                rdx_4 = *var_278[5];
                                var_150 = " [private]\nexport no entry foun…";
                                let var_148_1: i64 = 1;
                                let mut var_2b8: i8;
                                
                                if var_26f != 2 && (var_26f != 1 || (rbp_2 & 1) != 0)
                                {
                                    'label_68e157:
                                    var_2b8 = rcx_3;
                                    let var_2b7_1: i8 = rsi_7;
                                    let var_2b6_1: i8 = rdi_10;
                                    let var_2b5_1: i8 = r8_2;
                                    let var_2b4_1: i8 = r9_2;
                                    let var_2b3_1: i8 = r10_1;
                                    let var_2b2_1: i8 = r11_1;
                                    let var_2b1_1: i8 = rbx_3;
                                }
                                else
                                {
                                    'label_68e180:
                                    var_2b8 = 0;
                                    rax_11 = 0xa;
                                    rcx_3 = 0;
                                    rdx_4 = 0xa;
                                    rsi_7 = 0;
                                    rdi_10 = 0;
                                    r8_2 = 0;
                                    r9_2 = 0;
                                    r10_1 = 0;
                                    r11_1 = 0;
                                    rbx_3 = 0;
                                }
                                
                                let mut var_2a0: i8 = rcx_3;
                                let var_29f_1: i8 = rsi_7;
                                let var_29e_1: i8 = rdi_10;
                                let var_29d_1: i8 = r8_2;
                                let var_29c_1: i8 = r9_2;
                                let var_29b_1: i8 = r10_1;
                                let var_29a_1: i8 = r11_1;
                                let var_299_1: i8 = rbx_3;
                                let var_2b0_1: i32 = rax_11;
                                let var_298_1: i32 = rax_11;
                                let var_2ac_1: i32 = rdx_4;
                                let var_294_1: i32 = rdx_4;
                                var_280 = &var_2b8;
                                var_278 = _$LT$ansi_term..ansi..Prefix$u20$as$u20$core..fmt..Display$GT$::fmt::h4f4d4a1a10975a1c;
                                let var_270_1: *const *const i8 = &var_150;
                                let var_268_1: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
                                let var_260_1: *mut i128 = &var_d8;
                                let var_258_1: fn(arg1: *mut c_void, arg2: *mut i64) -> u64 = similar::types::text_additions::_$LT$impl$u20$core..fmt..Display$u20$for$u20$similar..types..Change$LT$$RF$T$GT$$GT$::fmt::h16a5774e4f0c32cc;
                                let var_250_1: *mut i8 = &var_2a0;
                                let var_248_1: fn(arg1: *mut i8, arg2: i64) -> i64 = _$LT$ansi_term..ansi..Suffix$u20$as$u20$core..fmt..Display$GT$::fmt::hcf6335302746b9ae;
                                let mut var_140: *mut c_void = &data_49e550;
                                let var_138_1: i64 = 4;
                                let var_120_1: i64 = 0;
                                let var_130_1: *mut *mut i8 = &var_280;
                                let var_128_1: i64 = 4;
                                std::io::stdio::_print::h5e446ff973c02de6(&var_140);
                                rbx_2 = r15_1;
                            }
                            
                            rax_7 = &rbx_2[5];
                            
                            if rbx_2 == rax_6
                            {
                                rax_7 = rbx_2;
                            }
                        } while rbx_2 != rax_6;
                    }
                    
                    core::ptr::drop_in_place$LT$similar..text..TextDiff$LT$str$GT$$GT$::h10f8d906ab3b0a95(&var_1b8);
                }
                
                *arg1 = 0x18;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_240);
                return core::ptr::drop_in_place$LT$just..compilation..Compilation$GT$::hcea2292c76e0cd86(arg4);
            }
            
            let rax_13: *mut *mut [i8; 0xb4] = std::fs::write::h00d17955715bd664(arg3, &var_240);
            let mut var_168_1: i128;
            let mut rax_14: i8;
            
            if rax_13 != 0
            {
                just::subcommand::Subcommand::format::_$u7b$$u7b$closure$u7d$$u7d$::h8517ab58bea0b597(&var_228, *arg3.byte_offset(8), *arg3.byte_offset(0x10), rax_13);
                rax_14 = var_228;
                var_1b8 = var_227;
                var_168_1 = var_1d7;
                *var_168_1[0xf] = *var_1d7[0xf];
            }
            
            if rax_13 == 0 || rax_14 == 0x38
            {
                if *arg2.byte_offset(0x1a7) != 0
                {
                    var_1b8 = *arg3.byte_offset(8);
                    var_280 = &var_1b8;
                    let var_278_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                    var_228 = &data_831158;
                    *var_227[7] = 2;
                    *var_217[0xf] = 0;
                    *var_227[0xf] = &var_280;
                    *var_217[7] = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_228);
                }
                
                *arg1 = 0x38;
                return core::ptr::drop_in_place$LT$just..compilation..Compilation$GT$::hcea2292c76e0cd86(arg4);
            }
            
            *arg1.byte_offset(0x60) = *var_168_1[0xf];
            *arg1.byte_offset(0x51) = var_168_1;
            *arg1.byte_offset(0x41) = var_1e7;
            let zmm0_3: i128 = var_1b8;
            *arg1.byte_offset(0x31) = var_1f7;
            *arg1.byte_offset(0x21) = var_207;
            *arg1.byte_offset(0x11) = var_217;
            *arg1.byte_offset(1) = zmm0_3;
            *arg1 = rax_14;
        }
        else
        {
            *arg1 = 0x38;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_240);
        }
    }
    else
    {
        *arg1 = 0x36;
    }
    
    /* tailcall */
    core::ptr::drop_in_place$LT$just..compilation..Compilation$GT$::hcea2292c76e0cd86(arg4)
}
