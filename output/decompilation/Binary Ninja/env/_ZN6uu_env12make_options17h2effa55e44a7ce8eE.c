
  int64_t* uu_env::make_options::h2effa55e44a7ce8e(int64_t* arg1, void* arg2)

{
    int64_t rbp;
    int64_t var_8 = rbp;
    char rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        arg2, "ignore-environmentstart with an …", 0x12);
    int64_t r12 = 0;
    char r13 = 0xa;
    
    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
            "nullXCPUBOLDBlue]", 4))
        r13 = 0;
    
    int128_t var_198;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb12f6ea3c7f6b83c(
        &var_198, arg2, "chdirDIRchange working directory…");
    void* rax_2 = clap_builder::parser::error::MatchesError::unwrap::h72cb49d5288c48eb(
        "chdirDIRchange working directory…", &var_198);
    
    if (rax_2)
    {
        r12 = *(rax_2 + 8);
        rbp = *(rax_2 + 0x10);
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hec434e3db7bf2fae(
        &var_198, arg2, "fileTSTPi128 as dyn ERANGEEDEADL…", 4);
    int64_t var_b0;
    clap_builder::parser::error::MatchesError::unwrap::h5b2c920e659854a6(&var_b0, 
        "fileTSTPi128 as dyn ERANGEEDEADL…", 4, &var_198);
    int64_t var_258;
    int64_t var_248;
    
    if (!var_b0)
    {
        int64_t rax_3;
        int64_t rdx_1;
        rax_3 =
            alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::ha433c616156e1495(0, 8, 0x10);
        var_258 = rax_3;
        int64_t var_250_1 = rdx_1;
        var_248 = 0;
    }
    else
        core::iter::traits::iterator::Iterator::collect::h0f7e05f4f15282a3(&var_258, &var_b0);
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hec434e3db7bf2fae(
        &var_198, arg2, "unsetremove variable from the en…", 5);
    int64_t var_70;
    clap_builder::parser::error::MatchesError::unwrap::h5b2c920e659854a6(&var_70, 
        "unsetremove variable from the en…", 5, &var_198);
    int64_t var_240;
    int64_t var_230;
    
    if (!var_70)
    {
        int64_t rax_4;
        int64_t rdx_2;
        rax_4 =
            alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::ha433c616156e1495(0, 8, 0x10);
        var_240 = rax_4;
        int64_t var_238_1 = rdx_2;
        var_230 = 0;
    }
    else
        core::iter::traits::iterator::Iterator::collect::h0f7e05f4f15282a3(&var_240, &var_70);
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb12f6ea3c7f6b83c(
        &var_198, arg2, "argv0aOverride the zeroth argume…");
    void* rax_5 = clap_builder::parser::error::MatchesError::unwrap::h72cb49d5288c48eb(
        "argv0aOverride the zeroth argume…", &var_198);
    int64_t rcx_4;
    
    if (!rax_5)
        rcx_4 = 0;
    else
    {
        rcx_4 = *(rax_5 + 8);
        rax_5 = *(rax_5 + 0x10);
    }
    
    int64_t var_188 = var_248;
    var_198 = var_258;
    int128_t var_180 = var_240;
    int64_t var_170 = var_230;
    char var_100 = rax;
    char var_ff = r13;
    int64_t var_120 = r12;
    int64_t var_118 = rbp;
    int64_t var_168 = 0;
    int64_t var_160 = 8;
    int128_t var_158 = {0};
    int64_t var_148 = 8;
    int64_t var_140 = 0;
    int64_t var_110 = rcx_4;
    void* var_108 = rax_5;
    int64_t var_138 = 0;
    int64_t var_130 = 8;
    int64_t var_128 = 0;
    int128_t var_228;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hec434e3db7bf2fae(
        &var_228, arg2, "ignore-signalSIGset handling of …", 0xd);
    int64_t* result = arg1;
    int64_t var_1d8;
    clap_builder::parser::error::MatchesError::unwrap::h5b2c920e659854a6(&var_1d8, 
        "ignore-signalSIGset handling of …", 0xd, &var_228);
    
    if (!var_1d8)
    {
        label_4750d3:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hec434e3db7bf2fae(
            &var_228, arg2, "varsTERMtruemainarg[charSTOPTTIN…", 4);
        int64_t var_f0;
        clap_builder::parser::error::MatchesError::unwrap::h5b2c920e659854a6(&var_f0, 
            "varsTERMtruemainarg[charSTOPTTIN…", 4, &var_228);
        
        if (!var_f0)
        {
            label_47528d:
            memcpy(result, &var_198, 0xa0);
        }
        else
        {
            var_1d8 = var_f0;
            int64_t r12_1 = 0;
            
            while (true)
            {
                void* rax_7 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfd26d720e8c6e1ba(&var_1d8);
                
                if (rax_7)
                {
                    int64_t rbp_1 = *(rax_7 + 8);
                    uint64_t rbx = *(rax_7 + 0x10);
                    
                    if (_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::h1ffd8f17dc4fb6be(rbp_1, rbx, "-: uu_env(uutils coreutils) 0.0.…", 1))
                        char var_100_1 = 1;
                    else
                    {
                        uu_env::parse_name_value_opt::hf06db07eb579a5e8(&var_228, &var_198, rbp_1, 
                            rbx);
                        int64_t rax_9 = var_228;
                        r12_1 = *var_228[8];
                        
                        if (rax_9)
                        {
                            result = arg1;
                            result[1] = rax_9;
                            result[2] = r12_1;
                            break;
                        }
                    }
                    
                    if (!(r12_1 & 1))
                        continue;
                }
                
                int128_t var_c0;
                int128_t var_1f8_2 = var_c0;
                int128_t var_d0;
                int128_t var_208_2 = var_d0;
                int128_t var_e0;
                int128_t var_218_2 = var_e0;
                var_228 = var_1d8;
                result = arg1;
                uint64_t i;
                
                do
                {
                    void* rax_10 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfd26d720e8c6e1ba(&var_228);
                    
                    if (!rax_10)
                        goto label_47528d;
                    
                    i = uu_env::parse_program_opt::h7280c27efa5c6406(&var_198, *(rax_10 + 8), 
                        *(rax_10 + 0x10));
                } while (!i);
                
                result[1] = i;
                result[2] = &data_5107e8;
                break;
            }
            
            *result = -0x8000000000000000;
            core::ptr::drop_in_place$LT$uu_env..Options$GT$::h0f0136e8e33bf55a(&var_198);
        }
    }
    else
    {
        int128_t var_1a8;
        int128_t var_1f8_1 = var_1a8;
        int128_t var_1b8;
        int128_t var_208_1 = var_1b8;
        int128_t var_1c8;
        int128_t var_218_1 = var_1c8;
        var_228 = var_1d8;
        void* i_1;
        int64_t rdx_7;
        
        do
        {
            void* rax_6 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfd26d720e8c6e1ba(&var_228);
            
            if (!rax_6)
                goto label_4750d3;
            
            i_1 = uu_env::parse_signal_opt::h8d80c5165791b2ec(&var_198, *(rax_6 + 8), 
                *(rax_6 + 0x10));
        } while (!i_1);
        
        result[1] = i_1;
        result[2] = rdx_7;
        *result = -0x8000000000000000;
        core::ptr::drop_in_place$LT$uu_env..Options$GT$::h0f0136e8e33bf55a(&var_198);
    }
    
    return result;
}
