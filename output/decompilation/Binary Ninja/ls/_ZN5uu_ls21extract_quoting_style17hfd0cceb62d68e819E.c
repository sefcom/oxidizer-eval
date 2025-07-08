
  uint64_t uu_ls::extract_quoting_style::hfd0cceb62d68e819(uint64_t arg1, uint32_t arg2)

{
    uint32_t rbx = arg2;
    char const (** const var_f8)[0xf2];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(&var_f8, 
        arg1, "quoting-stylehide-control-charss…", 0xd);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9(
        "quoting-stylehide-control-charss…", 0xd, &var_f8);
    uint64_t rbp;
    uint64_t r14;
    
    if (!rax)
    {
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg1, "literalquote-name", 7))
        {
            if (!
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg1, "escapeliteralquote-name", 6))
            {
                if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg1, "quote-name", 0xa))
                {
                    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg1, "diredhyperlink ", 5))
                    {
                        r14 = 3;
                        rbp = rbx;
                    }
                    else
                    {
                        int64_t var_c8;
                        std::env::var::hc35b8d22aa896d90(&var_c8, 
                            "QUOTING_STYLEfile-typeslashCOLUM…");
                        
                        if (!var_c8)
                        {
                            int128_t var_c0;
                            int128_t var_a8 = var_c0;
                            uint64_t var_b0;
                            uint64_t var_98_1 = var_b0;
                            int32_t rax_12 = uu_ls::match_quoting_style_name::h6db1b7024e711c4a(
                                *var_a8[8], var_b0, rbx);
                            rbp = rax_12;
                            r14 = rax_12 >> 0x10;
                            
                            if (r14 == 4)
                            {
                                void var_48;
                                std::env::args::hcc0787e3c3e9e7bb(&var_48);
                                int128_t* var_68;
                                _$LT$std..env..Args$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6e31a9487ed13e72(&var_68, &var_48);
                                int128_t zmm0_2;
                                
                                if (var_68 != -0x8000000000000000)
                                {
                                    int64_t var_58;
                                    int64_t var_78_2 = var_58;
                                    zmm0_2 = var_68;
                                }
                                else
                                {
                                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(&var_f8, "ls: Ignoring invalid value of en…", 2);
                                    int64_t var_e8;
                                    int64_t var_78_1 = var_e8;
                                    zmm0_2 = var_f8;
                                }
                                
                                int128_t var_88 = zmm0_2;
                                var_68 = &var_88;
                                int64_t (* var_60_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                int128_t* var_58_1 = &var_a8;
                                int64_t (* var_50_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                var_f8 = &data_612330;
                                int64_t var_f0_1 = 3;
                                int128_t var_e0;
                                *var_e0[8] = 0;
                                int128_t** var_e8_1 = &var_68;
                                var_e0 = 2;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_f8);
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_88);
                                core::ptr::drop_in_place$LT$std..env..Args$GT$::hab4f1d7d806d6c4a(
                                    &var_48);
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_a8);
                                
                                if (var_c8)
                                    goto label_51fa49;
                                
                                goto label_51fa4e;
                            }
                            
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_a8);
                            rbx = rbp >> 8;
                            
                            if (var_c8)
                                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h586f11e1c15586f9(&var_c8);
                        }
                        else
                        {
                            label_51fa49:
                            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h586f11e1c15586f9(&var_c8);
                            label_51fa4e:
                            std::io::stdio::stdout::h077da66234850927();
                            var_f8 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
                            char rax_11 = std::sys::pal::unix::io::is_terminal::hd2a7310729156a1e();
                            uint32_t rcx_4 = rbx;
                            rbp = 1;
                            
                            if (!rax_11)
                                rbp = rcx_4;
                            
                            r14 = 3;
                            
                            if (rax_11)
                                r14 = rcx_4;
                            
                            rbx = 0;
                        }
                    }
                }
                else
                {
                    rbp = 2;
                    r14 = 2;
                }
            }
            else
            {
                r14 = 2;
                rbp = 0;
            }
        }
        else
        {
            r14 = 3;
            rbp = rbx;
        }
    }
    else
    {
        int32_t rax_1 =
            uu_ls::match_quoting_style_name::h6db1b7024e711c4a(*(rax + 8), *(rax + 0x10), rbx);
        rbp = rax_1;
        r14 = rax_1 >> 0x10;
        
        if (r14 == 4)
        {
            var_f8 = &data_612320;
            int64_t var_f0_2 = 1;
            void var_100;
            void* var_e8_2 = &var_100;
            int128_t var_e0_1 = {0};
            core::panicking::panic_fmt::he12d0d7468628bb4(&var_f8);
            /* no return */
        }
        
        rbx = rbp >> 8;
    }
    
    return rbp | rbx << 8 | r14 << 0x10;
}
