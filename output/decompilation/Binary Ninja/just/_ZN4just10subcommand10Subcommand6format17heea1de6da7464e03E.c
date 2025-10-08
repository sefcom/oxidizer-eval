
  int64_t just::subcommand::Subcommand::format::heea1de6da7464e03(char* arg1, void* arg2, void* arg3, int64_t* arg4)

{
    int64_t rax;
    int64_t rdx;
    rax = just::compilation::Compilation::root_src::hcd87e6a66a75a8d2(arg4);
    void* rax_1 = just::compilation::Compilation::root_ast::hde4a084de7e3435a(arg4);
    
    if (*(arg2 + 0x1a4) || *(arg4 + 0x1eb))
    {
        void var_240;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hdc955df6c1091189(
            &var_240, rax_1);
        int64_t var_238;
        uint64_t var_230;
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(var_238, var_230, rax, rdx))
        {
            char* var_280;
            char var_228;
            int128_t var_227;
            int128_t var_217;
            int128_t var_207;
            int128_t var_1f7;
            int128_t var_1e7;
            int128_t var_1d7;
            int128_t var_1b8;
            
            if (*(arg2 + 0x197))
            {
                if (*(arg2 + 0x1a7))
                {
                    var_228 = 2;
                    *var_217[7] = 0x201;
                    similar::text::TextDiffConfig::diff_lines::hbe364afe4ea52021(&var_1b8, 
                        &var_228, rax, rdx, var_238);
                    int64_t var_1a8;
                    
                    if (var_1a8)
                    {
                        int64_t* rbx_2 = *var_1b8[8];
                        void* rax_6 = &rbx_2[var_1a8 * 5];
                        int64_t* rax_7 = &rbx_2[5];
                        void* var_290_2 = arg2 + 0x184;
                        
                        do
                        {
                            int64_t* rdx_3 = rbx_2;
                            rbx_2 = rax_7;
                            int128_t var_98;
                            similar::text::TextDiff$LT$T$GT$::iter_changes::h6c2aeb8528ab18a4(
                                &var_98, &var_1b8, rdx_3);
                            int64_t var_38;
                            *var_1d7[0xf] = var_38;
                            int128_t var_48;
                            var_1e7 = var_48;
                            int128_t var_58;
                            var_1f7 = var_58;
                            int128_t var_68;
                            var_207 = var_68;
                            int128_t var_78;
                            var_217 = var_78;
                            int128_t var_88;
                            var_227 = var_88;
                            var_228 = var_98;
                            int64_t* r15_1 = rbx_2;
                            
                            while (true)
                            {
                                int32_t var_110;
                                _$LT$similar..iter..ChangesIter$LT$Old$C$New$C$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0cc5ddc1a1cad602(&var_110, &var_228);
                                
                                if (var_110 == 2)
                                    break;
                                
                                int64_t var_e0;
                                int64_t var_a8_1 = var_e0;
                                int128_t var_f0;
                                int128_t var_b8_1 = var_f0;
                                int128_t var_100;
                                int128_t var_c8_1 = var_100;
                                int128_t var_d8 = var_110;
                                int32_t rax_10 = var_e0 & 0xff;
                                char var_26f;
                                char const* const var_150;
                                int32_t rax_11;
                                char rcx_3;
                                int32_t rdx_4;
                                char rbx_3;
                                char rbp_2;
                                char rsi_7;
                                char rdi_10;
                                char r8_2;
                                char r9_2;
                                char r10_1;
                                char r11_1;
                                
                                if (rax_10)
                                {
                                    char r12_1;
                                    char const* const r14_1;
                                    
                                    if (rax_10 != 1)
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
                                    int64_t var_148_2 = 1;
                                    
                                    if (r12_1 == 2 || (r12_1 == 1 && !(rbp_2 & 1)))
                                        goto label_68e180;
                                    
                                    goto label_68e157;
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
                                int64_t (* var_278)(char* arg1, int64_t arg2);
                                rbx_3 = var_278;
                                rax_11 = *var_278[1];
                                rdx_4 = *var_278[5];
                                var_150 = " [private]\nexport no entry foun…";
                                int64_t var_148_1 = 1;
                                char var_2b8;
                                
                                if (var_26f != 2 && (var_26f != 1 || rbp_2 & 1))
                                {
                                    label_68e157:
                                    var_2b8 = rcx_3;
                                    char var_2b7_1 = rsi_7;
                                    char var_2b6_1 = rdi_10;
                                    char var_2b5_1 = r8_2;
                                    char var_2b4_1 = r9_2;
                                    char var_2b3_1 = r10_1;
                                    char var_2b2_1 = r11_1;
                                    char var_2b1_1 = rbx_3;
                                }
                                else
                                {
                                    label_68e180:
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
                                
                                char var_2a0 = rcx_3;
                                char var_29f_1 = rsi_7;
                                char var_29e_1 = rdi_10;
                                char var_29d_1 = r8_2;
                                char var_29c_1 = r9_2;
                                char var_29b_1 = r10_1;
                                char var_29a_1 = r11_1;
                                char var_299_1 = rbx_3;
                                int32_t var_2b0_1 = rax_11;
                                int32_t var_298_1 = rax_11;
                                int32_t var_2ac_1 = rdx_4;
                                int32_t var_294_1 = rdx_4;
                                var_280 = &var_2b8;
                                var_278 = _$LT$ansi_term..ansi..Prefix$u20$as$u20$core..fmt..Display$GT$::fmt::h4f4d4a1a10975a1c;
                                char const* const* var_270_1 = &var_150;
                                int64_t (* var_268_1)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
                                int128_t* var_260_1 = &var_d8;
                                uint64_t (* var_258_1)(void* arg1, int64_t* arg2) = similar::types::text_additions::_$LT$impl$u20$core..fmt..Display$u20$for$u20$similar..types..Change$LT$$RF$T$GT$$GT$::fmt::h16a5774e4f0c32cc;
                                char* var_250_1 = &var_2a0;
                                int64_t (* var_248_1)(char* arg1, int64_t arg2) = _$LT$ansi_term..ansi..Suffix$u20$as$u20$core..fmt..Display$GT$::fmt::hcf6335302746b9ae;
                                void* const var_140 = &data_49e550;
                                int64_t var_138_1 = 4;
                                int64_t var_120_1 = 0;
                                char** var_130_1 = &var_280;
                                int64_t var_128_1 = 4;
                                std::io::stdio::_print::h5e446ff973c02de6(&var_140);
                                rbx_2 = r15_1;
                            }
                            
                            rax_7 = &rbx_2[5];
                            
                            if (rbx_2 == rax_6)
                                rax_7 = rbx_2;
                        } while (rbx_2 != rax_6);
                    }
                    
                    core::ptr::drop_in_place$LT$similar..text..TextDiff$LT$str$GT$$GT$::h10f8d906ab3b0a95(&var_1b8);
                }
                
                *arg1 = 0x18;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_240);
                return core::ptr::drop_in_place$LT$just..compilation..Compilation$GT$::hcea2292c76e0cd86(arg4);
            }
            
            char const (** rax_13)[0xb4] = std::fs::write::h00d17955715bd664(arg3, &var_240);
            int128_t var_168_1;
            char rax_14;
            
            if (rax_13)
            {
                just::subcommand::Subcommand::format::_$u7b$$u7b$closure$u7d$$u7d$::h8517ab58bea0b597(&var_228, *(arg3 + 8), *(arg3 + 0x10), rax_13);
                rax_14 = var_228;
                var_1b8 = var_227;
                var_168_1 = var_1d7;
                *var_168_1[0xf] = *var_1d7[0xf];
            }
            
            if (!rax_13 || rax_14 == 0x38)
            {
                if (*(arg2 + 0x1a7))
                {
                    var_1b8 = *(arg3 + 8);
                    var_280 = &var_1b8;
                    uint64_t (* var_278_1)(int64_t* arg1, int64_t arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
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
            
            *(arg1 + 0x60) = *var_168_1[0xf];
            *(arg1 + 0x51) = var_168_1;
            *(arg1 + 0x41) = var_1e7;
            int128_t zmm0_3 = var_1b8;
            *(arg1 + 0x31) = var_1f7;
            *(arg1 + 0x21) = var_207;
            *(arg1 + 0x11) = var_217;
            *(arg1 + 1) = zmm0_3;
            *arg1 = rax_14;
        }
        else
        {
            *arg1 = 0x38;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_240);
        }
    }
    else
        *arg1 = 0x36;
    
    /* tailcall */
    return core::ptr::drop_in_place$LT$just..compilation..Compilation$GT$::hcea2292c76e0cd86(arg4);
}
