
  int64_t* uu_du::build_exclude_patterns::h0244be58956798cb(int64_t* arg1, void* arg2)

{
    void var_f8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h953ea969162f50f8(
        &var_f8, arg2, "exclude-fromexcludeadding  to th…", 0xc);
    char const* const rsi = "exclude-fromexcludeadding  to th…";
    char const (** const var_2e8)[0xba];
    clap_builder::parser::error::MatchesError::unwrap::hb780f1080a7373fe(&var_2e8, 
        "exclude-fromexcludeadding  to th…", 0xc, &var_f8);
    char const (** const rax)[0xba] = var_2e8;
    char* var_2e0;
    uint128_t var_2d8;
    int128_t var_2c8;
    char* var_2b8;
    int64_t var_2b0;
    char const* const rcx_1;
    int64_t rdx;
    int128_t zmm0;
    uint128_t zmm1;
    
    if (!rax)
    {
        zmm0 = {0};
        zmm1 = "a Display implementation returne…";
        rcx_1 = "a Display implementation returne…";
        rax = core::ops::function::FnOnce::call_once::h72c1b05cc1f9fa6c;
        rdx = 0;
    }
    else
    {
        rcx_1 = var_2e0;
        zmm1 = var_2d8;
        zmm0 = var_2c8;
        rsi = var_2b8;
        rdx = var_2b0;
    }
    
    char const (** const var_178)[0xba] = rax;
    char const* const var_170 = rcx_1;
    uint128_t var_168 = zmm1;
    int128_t var_158 = zmm0;
    char const* const var_148 = rsi;
    int64_t var_140 = rdx;
    int64_t var_138 = 0;
    int64_t var_118 = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h953ea969162f50f8(
        &var_f8, arg2, "excludeadding  to the exclude li…", 7);
    char* rsi_2 = "excludeadding  to the exclude li…";
    clap_builder::parser::error::MatchesError::unwrap::hb780f1080a7373fe(&var_2e8, 
        "excludeadding  to the exclude li…", 7, &var_f8);
    char const (** const rax_1)[0xba] = var_2e8;
    char const* const rcx_3;
    int64_t rdx_1;
    int128_t zmm0_1;
    uint128_t zmm1_1;
    
    if (!rax_1)
    {
        zmm0_1 = {0};
        zmm1_1 = "a Display implementation returne…";
        rcx_3 = "a Display implementation returne…";
        rax_1 = core::ops::function::FnOnce::call_once::h72c1b05cc1f9fa6c;
        rdx_1 = 0;
    }
    else
    {
        rcx_3 = var_2e0;
        zmm1_1 = var_2d8;
        zmm0_1 = var_2c8;
        rsi_2 = var_2b8;
        rdx_1 = var_2b0;
    }
    
    char const (** const var_1f8)[0xba] = rax_1;
    char const* const var_1f0 = rcx_3;
    uint128_t var_1e8 = zmm1_1;
    int128_t var_1d8 = zmm0_1;
    char* var_1c8 = rsi_2;
    int64_t var_1c0 = rdx_1;
    int64_t var_2a0 = 0;
    int64_t var_298 = 8;
    int64_t var_290 = 0;
    core::iter::traits::iterator::Iterator::chain::h824cd8d0da99cd57(&var_f8, &var_1f8, &var_178);
    
    while (true)
    {
        void var_70;
        core::iter::adapters::chain::and_then_or_clear::h7b1f33d6297e46cc(&var_2e8, &var_70);
        int64_t var_230;
        core::option::Option$LT$T$GT$::or_else::h579344e00d3a2941(&var_230, &var_2e8, &var_f8);
        
        if (var_230 == -0x8000000000000000)
        {
            core::ptr::drop_in_place$LT$core..iter..adapters..chain..Chain$LT$core..iter..adapters..cloned..Cloned$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$alloc..string..String$GT$$GT$$C$core..iter..adapters..flatten..FlatMap$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$alloc..string..String$GT$$C$alloc..vec..Vec$LT$alloc..string..String$GT$$C$uu_du..file_as_vec$LT$$RF$alloc..string..String$GT$$GT$$GT$$GT$::h744c40be5be13de6(&var_f8);
            arg1[2] = var_290;
            *arg1 = var_2a0;
            return arg1;
        }
        
        int128_t var_288 = var_230;
        int128_t** var_268;
        int64_t (* var_260)(int64_t* arg1, void* arg2);
        int128_t* var_248;
        
        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "verbose: \n\ttotal\t: read error…", 7))
        {
            var_248 = &var_288;
            var_268 = &var_248;
            var_260 = _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h8051b657d9275cd0;
            var_2e8 = &data_584500;
            var_2e0 = 2;
            var_2c8 = 0;
            var_2d8 = &var_268;
            *var_2d8[8] = 1;
            std::io::stdio::_print::he918bceb0c89db46(&var_2e8);
        }
        
        int64_t var_220;
        uucore::parser::parse_glob::from_str::h2653254823aa606f(&var_2e8, *var_288[8], var_220);
        
        if (var_2e8 == -0x8000000000000000)
        {
            int64_t var_208_1 = *var_2d8[8];
            int128_t var_218 = var_2e0;
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h9c7f10ebc418a7a6(&var_248, 
                &var_218);
            int64_t var_238;
            int64_t var_250_1 = var_238;
            var_260 = var_248;
            var_268 = 4;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h19aedf1648b3dc3b(&var_268);
            arg1[2] = &data_584558;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(&var_288);
            core::ptr::drop_in_place$LT$core..iter..adapters..chain..Chain$LT$core..iter..adapters..cloned..Cloned$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$alloc..string..String$GT$$GT$$C$core..iter..adapters..flatten..FlatMap$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$alloc..string..String$GT$$C$alloc..vec..Vec$LT$alloc..string..String$GT$$C$uu_du..file_as_vec$LT$$RF$alloc..string..String$GT$$GT$$GT$$GT$::h744c40be5be13de6(&var_f8);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$glob..Pattern$GT$$GT$::h2295170400e3c987(
                &var_2a0);
            return arg1;
        }
        
        char* var_188_1 = var_2b8;
        int128_t var_198_1 = var_2c8;
        uint128_t var_1a8_1 = var_2d8;
        int128_t var_1b8 = var_2e8;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hac7bdcf882db601a(&var_2a0, &var_1b8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(&var_288);
    }
}
