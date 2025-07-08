
  int64_t* uu_env::make_options::h1d1233ee0c3e2ece(int64_t* arg1, void* arg2)

{
    int64_t rbp;
    int64_t var_8 = rbp;
    char rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        arg2, "ignore-environmentstart with an …", 0x12);
    int64_t r13 = 0;
    char rbx = 0xa;
    
    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
            "nullXCPUBOLDBlue]", 4))
        rbx = 0;
    
    int64_t var_1e8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::haf87a3f80c6c6497(
        &var_1e8, arg2, "chdirDIRchange working directory…", 5);
    void* rax_2 = clap_builder::parser::error::MatchesError::unwrap::h86a6ee1c01117d6c(
        "chdirDIRchange working directory…", 5, &var_1e8);
    
    if (rax_2)
    {
        r13 = *(rax_2 + 8);
        rbp = *(rax_2 + 0x10);
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfa98c77e26d8adfd(
        &var_1e8, arg2, "fileTSTPi128 as dyn ", 4);
    int128_t* var_268;
    clap_builder::parser::error::MatchesError::unwrap::h53fc80eeac36efb0(&var_268, 
        "fileTSTPi128 as dyn ", 4, &var_1e8);
    int128_t var_258;
    int128_t var_248;
    int128_t var_238;
    int64_t var_218;
    int64_t var_208;
    int64_t var_1e0;
    int64_t var_1d8;
    
    if (!var_268)
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h38052905bffb397a(&var_1e8, 0, 0);
        
        if (var_1e8)
        {
            alloc::raw_vec::handle_error::h2372476369f9b8ac(var_1e0);
            /* no return */
        }
        
        var_218 = var_1e0;
        int64_t var_210_1 = var_1d8;
        var_208 = 0;
    }
    else
    {
        int128_t var_88_1 = var_238;
        int128_t var_98_1 = var_248;
        int128_t var_a8_1 = var_258;
        int128_t var_b8 = var_268;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h94f0aac4391d9fcc(&var_218, &var_b8);
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfa98c77e26d8adfd(
        &var_1e8, arg2, "unsetremove variable from the en…", 5);
    clap_builder::parser::error::MatchesError::unwrap::h53fc80eeac36efb0(&var_268, 
        "unsetremove variable from the en…", 5, &var_1e8);
    int64_t var_200;
    int64_t var_1f0;
    
    if (!var_268)
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h38052905bffb397a(&var_1e8, 0, 0);
        
        if (var_1e8)
        {
            alloc::raw_vec::handle_error::h2372476369f9b8ac(var_1e0);
            /* no return */
        }
        
        var_200 = var_1e0;
        int64_t var_1f8_1 = var_1d8;
        var_1f0 = 0;
    }
    else
    {
        int128_t var_48_1 = var_238;
        int128_t var_58_1 = var_248;
        int128_t var_68_1 = var_258;
        int128_t var_78 = var_268;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::ha4c9e82de2224bcc(&var_200, &var_78);
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::haf87a3f80c6c6497(
        &var_1e8, arg2, "argv0aOverride the zeroth argume…", 5);
    void* rax_5 = clap_builder::parser::error::MatchesError::unwrap::h86a6ee1c01117d6c(
        "argv0aOverride the zeroth argume…", 5, &var_1e8);
    int64_t rcx_2;
    
    if (!rax_5)
        rcx_2 = 0;
    else
    {
        rcx_2 = *(rax_5 + 8);
        rax_5 = *(rax_5 + 0x10);
    }
    
    int64_t var_1d8_1 = var_208;
    var_1e8 = var_218;
    int128_t var_1d0 = var_200;
    int64_t var_1c0 = var_1f0;
    char var_150 = rax;
    char var_14f = rbx;
    int64_t var_170 = r13;
    int64_t var_168 = rbp;
    int64_t var_1b8 = 0;
    int64_t var_1b0 = 8;
    int128_t var_1a8 = {0};
    int64_t var_198 = 8;
    int64_t var_190 = 0;
    int64_t var_160 = rcx_2;
    void* var_158 = rax_5;
    int64_t var_188 = 0;
    int64_t var_180 = 8;
    int64_t var_178 = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfa98c77e26d8adfd(
        &var_268, arg2, "ignore-signalSIGset handling of …", 0xd);
    int64_t var_138;
    clap_builder::parser::error::MatchesError::unwrap::h53fc80eeac36efb0(&var_138, 
        "ignore-signalSIGset handling of …", 0xd, &var_268);
    
    if (!var_138)
    {
        label_4cea53:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfa98c77e26d8adfd(
            &var_268, arg2, "varsTERMchararg[ -> STOPTTIN\x1b…", 4);
        int64_t var_f8;
        clap_builder::parser::error::MatchesError::unwrap::h53fc80eeac36efb0(&var_f8, 
            "varsTERMchararg[ -> STOPTTIN\x1b…", 4, &var_268);
        
        if (!var_f8)
        {
            label_4cebc3:
            memcpy(arg1, &var_1e8, 0xa0);
        }
        else
        {
            var_138 = var_f8;
            char rbx_1 = 0;
            
            while (true)
            {
                void* rax_7 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h96be86b15d365bbe(&var_138);
                
                if (rax_7)
                {
                    if (_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(*(rax_7 + 8), *(rax_7 + 0x10)))
                    {
                        char var_150_1 = 1;
                        
                        if (!(rbx_1 & 1))
                            continue;
                    }
                    else
                    {
                        uu_env::parse_name_value_opt::h8375689543212933(&var_268, &var_1e8, 
                            *(rax_7 + 8), *(rax_7 + 0x10));
                        int128_t* rax_9 = var_268;
                        int64_t var_260;
                        
                        if (rax_9)
                        {
                            arg1[1] = rax_9;
                            arg1[2] = var_260;
                            break;
                        }
                        
                        rbx_1 = var_260;
                        
                        if (!(rbx_1 & 1))
                            continue;
                    }
                }
                
                int128_t var_c8;
                int128_t var_238_2 = var_c8;
                int128_t var_d8;
                int128_t var_248_2 = var_d8;
                int128_t var_e8;
                int128_t var_258_2 = var_e8;
                var_268 = var_138;
                int128_t* i;
                
                do
                {
                    void* rax_10 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h96be86b15d365bbe(&var_268);
                    
                    if (!rax_10)
                        goto label_4cebc3;
                    
                    i = uu_env::parse_program_opt::h5dc288b3b7b61775(&var_1e8, *(rax_10 + 8), 
                        *(rax_10 + 0x10));
                } while (!i);
                
                arg1[1] = i;
                arg1[2] = &data_548840;
                break;
            }
            
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$uu_env..Options$GT$::h82df1bb8fb18e06c(&var_1e8);
        }
    }
    else
    {
        int128_t var_108;
        int128_t var_238_1 = var_108;
        int128_t var_118;
        int128_t var_248_1 = var_118;
        int128_t var_128;
        int128_t var_258_1 = var_128;
        var_268 = var_138;
        void* i_1;
        int64_t rdx_6;
        
        do
        {
            void* rax_6 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h96be86b15d365bbe(&var_268);
            
            if (!rax_6)
                goto label_4cea53;
            
            i_1 = uu_env::parse_signal_opt::h51ec0e44148ee3e7(&var_1e8, *(rax_6 + 8), 
                *(rax_6 + 0x10));
        } while (!i_1);
        
        arg1[1] = i_1;
        arg1[2] = rdx_6;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$uu_env..Options$GT$::h82df1bb8fb18e06c(&var_1e8);
    }
    
    return arg1;
}
