
  int64_t* uu_du::build_exclude_patterns::he2599e522f595380(int64_t* arg1, void* arg2)

{
    void var_f8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hffc82f800b8d5ff7(
        &var_f8, arg2, "exclude-fromexcludeverbose: \n\t…", 0xc);
    char const* const rsi = "exclude-fromexcludeverbose: \n\t…";
    void (* var_208)() __noreturn;
    clap_builder::parser::error::MatchesError::unwrap::hd06a4304e8cd1bc3(&var_208, 
        "exclude-fromexcludeverbose: \n\t…", 0xc, &var_f8);
    void (* rax)() __noreturn = var_208;
    char const* const rcx_1;
    int64_t rdx;
    int128_t zmm0;
    uint128_t zmm1;
    
    if (!rax)
    {
        zmm0 = {0};
        zmm1 = "/home/34r7hm4n/.cargo/registry/s…";
        rax = core::ops::function::FnOnce::call_once::h88fd7425ccd33063;
        rcx_1 = "/home/34r7hm4n/.cargo/registry/s…";
        rdx = 0;
    }
    else
    {
        char* var_200;
        rcx_1 = var_200;
        uint128_t var_1f8;
        zmm1 = var_1f8;
        int128_t var_1e8;
        zmm0 = var_1e8;
        char* var_1d8;
        rsi = var_1d8;
        int64_t var_1d0;
        rdx = var_1d0;
    }
    
    var_208 = rax;
    char const* const var_200_1 = rcx_1;
    uint128_t var_1f8_1 = zmm1;
    int128_t var_1e8_1 = zmm0;
    char const* const var_1d8_1 = rsi;
    int64_t var_1d0_1 = rdx;
    int64_t var_1c8 = 0;
    int64_t var_1a8 = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hffc82f800b8d5ff7(
        &var_f8, arg2, "excludeverbose: \n\ttotal\t: rea…", 7);
    char const* const rsi_2 = "excludeverbose: \n\ttotal\t: rea…";
    void** const var_278;
    clap_builder::parser::error::MatchesError::unwrap::hd06a4304e8cd1bc3(&var_278, 
        "excludeverbose: \n\ttotal\t: rea…", 7, &var_f8);
    void** const rax_1 = var_278;
    char* var_270;
    uint128_t var_268;
    int128_t var_258;
    char const* const rcx_3;
    int64_t rdx_1;
    int128_t zmm0_1;
    uint128_t zmm1_1;
    
    if (!rax_1)
    {
        zmm0_1 = {0};
        zmm1_1 = "/home/34r7hm4n/.cargo/registry/s…";
        rcx_3 = "/home/34r7hm4n/.cargo/registry/s…";
        rax_1 = core::ops::function::FnOnce::call_once::h88fd7425ccd33063;
        rdx_1 = 0;
    }
    else
    {
        rcx_3 = var_270;
        zmm1_1 = var_268;
        zmm0_1 = var_258;
        char* var_248;
        rsi_2 = var_248;
        int64_t var_240;
        rdx_1 = var_240;
    }
    
    void** const var_170 = rax_1;
    char const* const var_168 = rcx_3;
    uint128_t var_160 = zmm1_1;
    int128_t var_150 = zmm0_1;
    char const* const var_140 = rsi_2;
    int64_t var_138 = rdx_1;
    int64_t var_2b0 = 0;
    int64_t var_2a8 = 8;
    int64_t var_2a0 = 0;
    core::iter::traits::iterator::Iterator::chain::hc2d8f9bed774c849(&var_f8, &var_170, &var_208);
    
    while (true)
    {
        void var_70;
        core::iter::adapters::chain::and_then_or_clear::ha9bcf56eba07ca86(&var_278, &var_70);
        int64_t var_220;
        core::option::Option$LT$T$GT$::or_else::hc21355b2981d1bf1(&var_220, &var_278, &var_f8);
        
        if (var_220 == -0x8000000000000000)
        {
            core::ptr::drop_in_place$LT$core..iter..adapters..chain..Chain$LT$core..iter..adapters..cloned..Cloned$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$alloc..string..String$GT$$GT$$C$core..iter..adapters..flatten..FlatMap$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$alloc..string..String$GT$$C$alloc..vec..Vec$LT$alloc..string..String$GT$$C$uu_du..file_as_vec$LT$$RF$alloc..string..String$GT$$GT$$GT$$GT$::h72377d95b1f15e7e(&var_f8);
            arg1[2] = var_2a0;
            *arg1 = var_2b0;
            return arg1;
        }
        
        int128_t var_298 = var_220;
        int128_t* var_238;
        
        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "verbose: \n\ttotal\t: read error…", 7))
        {
            var_238 = &var_298;
            int64_t (* var_230_1)(void* arg1, int64_t* arg2) =
                _$LT$alloc..string..String$u20$as$u20$core..fmt..Debug$GT$::fmt::h71b66d641ee8f111;
            var_278 = &data_545d38;
            var_270 = 2;
            var_258 = 0;
            var_268 = &var_238;
            *var_268[8] = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_278);
        }
        
        int64_t var_210;
        int64_t var_130;
        uucore::features::parser::parse_glob::from_str::hec6dc6cec3d01504(&var_130, *var_298[8], 
            var_210);
        
        if (var_130 == -0x8000000000000000)
        {
            int64_t var_118;
            int64_t var_178_1 = var_118;
            int128_t var_128;
            int128_t var_188 = var_128;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h68e4476d86227a73(
                &var_238, &var_188);
            int64_t var_228;
            *var_268[8] = var_228;
            var_270 = var_238;
            var_278 = 4;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h8a707cc2bcbdfcb0(&var_278);
            arg1[2] = &data_545d90;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4aad5465963d35b9(&var_298);
            core::ptr::drop_in_place$LT$core..iter..adapters..chain..Chain$LT$core..iter..adapters..cloned..Cloned$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$alloc..string..String$GT$$GT$$C$core..iter..adapters..flatten..FlatMap$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$alloc..string..String$GT$$C$alloc..vec..Vec$LT$alloc..string..String$GT$$C$uu_du..file_as_vec$LT$$RF$alloc..string..String$GT$$GT$$GT$$GT$::h72377d95b1f15e7e(&var_f8);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$glob..Pattern$GT$$GT$::h3aac2b22f80fd30d(
                &var_2b0);
            return arg1;
        }
        
        alloc::vec::Vec$LT$T$C$A$GT$::push::he69de0360f501721(&var_2b0, &var_130);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4aad5465963d35b9(&var_298);
    }
}
