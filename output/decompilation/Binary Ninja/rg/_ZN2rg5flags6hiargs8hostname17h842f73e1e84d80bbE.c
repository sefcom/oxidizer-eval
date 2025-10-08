
  int64_t rg::flags::hiargs::hostname::h842f73e1e84d80bb(int64_t* arg1, int64_t arg2)

{
    if (!arg2)
        /* tailcall */
        return rg::flags::hiargs::platform_hostname::h0858a6014f6c37dc(arg1);
    
    int64_t var_148 = arg2;
    int64_t rdx;
    int64_t var_140 = rdx;
    char var_190;
    grep_cli::decompress::resolve_binary::hae84bf314539e0cc(&var_190, arg2);
    int64_t* var_238;
    int128_t var_208;
    int32_t var_1d0;
    int128_t var_1c8;
    int128_t var_1c0;
    int128_t var_1b0;
    int128_t var_188;
    int64_t var_178;
    void** const var_f8;
    
    if (var_190 & 1)
    {
        int64_t var_1f8_1 = var_178;
        var_208 = var_188;
        
        if (core::sync::atomic::atomic_load::headb9992cbbd027a(
            &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4)
        {
            var_238 = &var_148;
            int64_t (* var_230_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h26569d9514a05a63;
            int128_t* var_228_1 = &var_208;
            uint64_t (* var_220_1)(int64_t* arg1, int64_t* arg2) = _$LT$grep_cli..process..CommandError$u20$as$u20$core..fmt..Display$GT$::fmt::h3f7da3a26c9a2241;
            var_f8 = &data_7eb2a0;
            int64_t var_f0_1 = 2;
            int64_t var_d8_1 = 0;
            int64_t** var_e8_1 = &var_238;
            int64_t var_e0_1 = 2;
            int64_t rax_2 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb368);
            var_1d0 = "rg::flags::hiargserror building …";
            var_1c8 = 0x11;
            var_1c0 = "rg::flags::hiargserror building …";
            *var_1c0[8] = 0x11;
            var_1b0 = rax_2;
            log::__private_api::log::h124fdfc9e9ed7585(&var_f8, 4, &var_1d0);
        }
        
        rg::flags::hiargs::platform_hostname::h0858a6014f6c37dc(arg1);
        return core::ptr::drop_in_place$LT$grep_cli..process..CommandError$GT$::h74f24c8deb1a9af9(
            &var_208);
    }
    
    int64_t var_158_1 = var_178;
    int128_t var_168 = var_188;
    std::process::Command::stdin::hf2e58e20c85050ff(&var_f8, 1, 
        std::process::Command::new::hf0673b88a585bfee(&var_f8, &var_168));
    grep_cli::process::CommandReader::new::h647081c4517aedcd(&var_1d0, &var_f8);
    int128_t var_1e8;
    
    if (var_1d0 != 2)
    {
        int128_t var_1a0;
        int128_t var_108_1 = var_1a0;
        int128_t var_118_1 = var_1b0;
        int128_t var_128_1 = var_1c0;
        int128_t var_138 = var_1d0;
        std::io::read_to_string::h6591de12ba6059d1(&var_208, &var_138);
        
        if (!(0 + -(var_208)))
        {
            int64_t var_1f8;
            int64_t var_1d8_2 = var_1f8;
            var_1e8 = var_208;
            int64_t rax_12;
            uint64_t rdx_6;
            rax_12 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hd0360e9e77a44e0f(*var_1e8[8], 
                var_1f8);
            
            if (!rdx_6)
            {
                if (core::sync::atomic::atomic_load::headb9992cbbd027a(
                    &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4)
                {
                    var_190 = &var_168;
                    var_188 = _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
                    var_1d0 = &data_7eb300;
                    var_1c8 = 2;
                    var_1b0 = 0;
                    var_1c0 = &var_190;
                    *var_1c0[8] = 1;
                    int64_t rax_15 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb320);
                    var_238 = "rg::flags::hiargserror building …";
                    int64_t var_230_4 = 0x11;
                    char const* const var_228_4 = "rg::flags::hiargserror building …";
                    int64_t var_220_4 = 0x11;
                    int64_t var_218_3 = rax_15;
                    log::__private_api::log::h124fdfc9e9ed7585(&var_1d0, 4, &var_238);
                }
                
                rg::flags::hiargs::platform_hostname::h0858a6014f6c37dc(arg1);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_1e8);
                core::ptr::drop_in_place$LT$std..process..Command$GT$::h79c148136f15ad8b(&var_f8);
            }
            else
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_1d0, rax_12, rdx_6);
                arg1[2] = var_1c0;
                *arg1 = var_1d0;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_1e8);
                core::ptr::drop_in_place$LT$std..process..Command$GT$::h79c148136f15ad8b(&var_f8);
            }
        }
        else
        {
            int64_t var_240 = *var_208[8];
            
            if (core::sync::atomic::atomic_load::headb9992cbbd027a(
                &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4)
            {
                var_190 = &var_168;
                var_188 =
                    _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
                *var_188[8] = &var_240;
                int64_t (* var_178_2)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                var_1d0 = &data_7eb2e0;
                var_1c8 = 2;
                var_1b0 = 0;
                var_1c0 = &var_190;
                *var_1c0[8] = 2;
                int64_t rax_11 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb338);
                var_238 = "rg::flags::hiargserror building …";
                int64_t var_230_3 = 0x11;
                char const* const var_228_3 = "rg::flags::hiargserror building …";
                int64_t var_220_3 = 0x11;
                int64_t var_218_2 = rax_11;
                log::__private_api::log::h124fdfc9e9ed7585(&var_1d0, 4, &var_238);
            }
            
            rg::flags::hiargs::platform_hostname::h0858a6014f6c37dc(arg1);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haa31b1f83e302f9e(&var_240);
            core::ptr::drop_in_place$LT$std..process..Command$GT$::h79c148136f15ad8b(&var_f8);
        }
    }
    else
    {
        int64_t var_1d8_1 = *var_1c0[8];
        var_1e8 = var_1c8;
        
        if (core::sync::atomic::atomic_load::headb9992cbbd027a(
            &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4)
        {
            var_208 = &var_168;
            *var_208[8] =
                _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
            int128_t* var_1f8_2 = &var_1e8;
            uint64_t (* var_1f0_1)(int64_t* arg1, int64_t* arg2) = _$LT$grep_cli..process..CommandError$u20$as$u20$core..fmt..Display$GT$::fmt::h3f7da3a26c9a2241;
            var_238 = &data_7eb2c0;
            int64_t var_230_2 = 2;
            int64_t var_218_1 = 0;
            int128_t* var_228_2 = &var_208;
            int64_t var_220_2 = 2;
            int64_t rax_8 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb350);
            var_190 = "rg::flags::hiargserror building …";
            var_188 = 0x11;
            *var_188[8] = "rg::flags::hiargserror building …";
            int64_t var_178_1 = 0x11;
            int64_t var_170_1 = rax_8;
            log::__private_api::log::h124fdfc9e9ed7585(&var_238, 4, &var_190);
        }
        
        rg::flags::hiargs::platform_hostname::h0858a6014f6c37dc(arg1);
        core::ptr::drop_in_place$LT$grep_cli..process..CommandError$GT$::h74f24c8deb1a9af9(
            &var_1e8);
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h79c148136f15ad8b(&var_f8);
    }
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hee77a3799ccd604e(&var_168);
}
