
  fn uu_ls::extract_quoting_style::hfd0cceb62d68e819(arg1: u64, arg2: u32) -> u64

{
    let mut rbx: u32 = arg2;
    let mut var_f8: *mut *mut [i8; 0xf2];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(&var_f8, 
        arg1, "quoting-stylehide-control-charss…", 0xd);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9(
        "quoting-stylehide-control-charss…", 0xd, &var_f8);
    let mut rbp: u64;
    let mut r14: u64;
    
    if rax == 0
    {
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg1, "literalquote-name", 7) == 0
        {
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg1, "escapeliteralquote-name", 6) == 0
            {
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg1, "quote-name", 0xa) == 0
                {
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg1, "diredhyperlink ", 5) != 0
                    {
                        r14 = 3;
                        rbp = rbx;
                    }
                    else
                    {
                        let mut var_c8: i64;
                        std::env::var::hc35b8d22aa896d90(&var_c8, 
                            "QUOTING_STYLEfile-typeslashCOLUM…");
                        
                        if var_c8 == 0
                        {
                            let var_c0: i128;
                            let mut var_a8: i128 = var_c0;
                            let var_b0: u64;
                            let var_98_1: u64 = var_b0;
                            let rax_12: i32 = uu_ls::match_quoting_style_name::h6db1b7024e711c4a(
                                *var_a8[8], var_b0, rbx);
                            rbp = rax_12;
                            r14 = rax_12 >> 0x10;
                            
                            if r14 == 4
                            {
                                let mut var_48: ();
                                std::env::args::hcc0787e3c3e9e7bb(&var_48);
                                let mut var_68: *mut i128;
                                _$LT$std..env..Args$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6e31a9487ed13e72(&var_68, &var_48);
                                let mut zmm0_2: i128;
                                
                                if var_68 != -0x8000000000000000
                                {
                                    let var_58: i64;
                                    let var_78_2: i64 = var_58;
                                    zmm0_2 = var_68;
                                }
                                else
                                {
                                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(&var_f8, "ls: Ignoring invalid value of en…", 2);
                                    let var_e8: i64;
                                    let var_78_1: i64 = var_e8;
                                    zmm0_2 = var_f8;
                                }
                                
                                let mut var_88: i128 = zmm0_2;
                                var_68 = &var_88;
                                let var_60_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                let var_58_1: *mut i128 = &var_a8;
                                let var_50_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                var_f8 = &data_612330;
                                let var_f0_1: i64 = 3;
                                let mut var_e0: i128;
                                *var_e0[8] = 0;
                                let var_e8_1: *mut *mut i128 = &var_68;
                                var_e0 = 2;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_f8);
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_88);
                                core::ptr::drop_in_place$LT$std..env..Args$GT$::hab4f1d7d806d6c4a(
                                    &var_48);
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_a8);
                                
                                if var_c8 != 0
                                {
                                    goto 'label_51fa49;
                                }
                                
                                goto 'label_51fa4e;
                            }
                            
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_a8);
                            rbx = rbp >> 8;
                            
                            if var_c8 != 0
                            {
                                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h586f11e1c15586f9(&var_c8);
                            }
                        }
                        else
                        {
                            'label_51fa49:
                            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h586f11e1c15586f9(&var_c8);
                            'label_51fa4e:
                            std::io::stdio::stdout::h077da66234850927();
                            var_f8 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
                            let rax_11: i8 =
                                std::sys::pal::unix::io::is_terminal::hd2a7310729156a1e();
                            let rcx_4: u32 = rbx;
                            rbp = 1;
                            
                            if rax_11 == 0
                            {
                                rbp = rcx_4;
                            }
                            
                            r14 = 3;
                            
                            if rax_11 != 0
                            {
                                r14 = rcx_4;
                            }
                            
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
        let rax_1: i32 = uu_ls::match_quoting_style_name::h6db1b7024e711c4a(*rax.byte_offset(8), 
            *rax.byte_offset(0x10), rbx);
        rbp = rax_1;
        r14 = rax_1 >> 0x10;
        
        if r14 == 4
        {
            var_f8 = &data_612320;
            let var_f0_2: i64 = 1;
            let mut var_100: ();
            let var_e8_2: *mut c_void = &var_100;
            let var_e0_1: i128 = {0};
            core::panicking::panic_fmt::he12d0d7468628bb4(&var_f8);
            /* no return */
        }
        
        rbx = rbp >> 8;
    }
    
    rbp | rbx << 8 | r14 << 0x10
}
