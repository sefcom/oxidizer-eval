
  uint64_t uu_ls::extract_quoting_style::h200ad966f0acf148(void* arg1, uint32_t arg2)

{
    uint32_t rbx = arg2;
    void** const var_f8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fe44c4217b6c6ae(&var_f8, 
        arg1, "quoting-stylehide-control-charss…", 0xd);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::he9eef133f866d763(
        "quoting-stylehide-control-charss…", 0xd, &var_f8);
    int32_t rax_1;
    uint64_t rbp;
    
    if (!rax)
    {
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg1, "literalquote-namepfile-typederef…", 7))
        {
            if (!
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg1, "escapeliteralquote-namepfile-typ…", 6))
            {
                if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg1, "quote-namepfile-typedereferenced…", 0xa))
                {
                    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg1, "diredhyperlink%b %e  %Y%Y-%m-%d …", 5))
                    {
                        rax_1 = 3;
                        rbp = rbx;
                    }
                    else
                    {
                        int64_t var_68;
                        std::env::var::hb36d41fbb9604b02(&var_68, 
                            "QUOTING_STYLEslashCOLUMNS: ignor…");
                        
                        if (!var_68)
                        {
                            int128_t var_60;
                            int128_t var_a8 = var_60;
                            uint64_t var_50;
                            uint64_t var_98_1 = var_50;
                            int32_t rax_2 = uu_ls::match_quoting_style_name::hd6c6f9cb275639d7(
                                *var_a8[8], var_50, rbx);
                            
                            if (rax_2 == 4)
                            {
                                void var_48;
                                std::env::args::h3c7cd0de4b395b7d(&var_48);
                                int128_t* var_88;
                                _$LT$std..env..Args$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0d29c3efeb1bccd1(&var_88, &var_48);
                                int128_t zmm0_2;
                                
                                if (!(0 + -(var_88)))
                                {
                                    int64_t var_78;
                                    int64_t var_b8_2 = var_78;
                                    zmm0_2 = var_88;
                                }
                                else
                                {
                                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_f8, "ls: Ignoring invalid value of en…", 2);
                                    int64_t var_e8;
                                    int64_t var_b8_1 = var_e8;
                                    zmm0_2 = var_f8;
                                }
                                
                                int128_t var_c8 = zmm0_2;
                                var_88 = &var_c8;
                                int64_t (* var_80_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                                int128_t* var_78_1 = &var_a8;
                                int64_t (* var_70_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                                var_f8 = &data_6868b0;
                                int64_t var_f0_1 = 3;
                                int128_t var_e0;
                                *var_e0[8] = 0;
                                int128_t** var_e8_1 = &var_88;
                                var_e0 = 2;
                                std::io::stdio::_eprint::h57899770eacec2ad(&var_f8);
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_c8);
                                core::ptr::drop_in_place$LT$std..env..Args$GT$::hb72063204d4e037f(
                                    &var_48);
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_a8);
                                goto label_5923b1;
                            }
                            
                            rbp = rax_2 >> 8;
                            rbx = rax_2 >> 0x10;
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_60);
                            rax_1 = rax_2;
                        }
                        else
                        {
                            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h1be309cc02ffb89c(&var_68);
                            label_5923b1:
                            std::io::stdio::stdout::hb6a8e10bcccf3287();
                            rax_1 =
                                std::sys::io::is_terminal::isatty::is_terminal::h0e1d734d892dc985();
                            rbp = 0;
                            
                            if (!rax_1)
                                rbp = rbx;
                            
                            rax_1 ^= 1;
                            rax_1 *= 2;
                            rax_1 += 1;
                        }
                    }
                }
                else
                {
                    rbp = 2;
                    rax_1 = 2;
                }
            }
            else
            {
                rax_1 = 2;
                rbp = 0;
            }
        }
        else
        {
            rax_1 = 3;
            rbp = rbx;
        }
    }
    else
    {
        rax_1 = uu_ls::match_quoting_style_name::hd6c6f9cb275639d7(*(rax + 8), *(rax + 0x10), rbx);
        
        if (rax_1 == 4)
        {
            var_f8 = &data_6868a0;
            int64_t var_f0_2 = 1;
            void var_100;
            void* var_e8_2 = &var_100;
            int128_t var_e0_1 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_f8);
            /* no return */
        }
        
        rbp = rax_1 >> 8;
        rbx = rax_1 >> 0x10;
    }
    
    return rax_1 | rbp << 8 | rbx << 0x10;
}
