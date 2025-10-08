
  uint64_t uu_printf::uumain::uumain::h34ac81daaf91927f(int64_t arg1)

{
    int128_t var_2f8;
    uu_printf::uu_app::hc502dcf642f8474c(&var_2f8);
    void var_370;
    clap_builder::builder::command::Command::get_matches_from::h2abe91fa938f486f(&var_370, 
        &var_2f8, arg1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h57f860443be1a0ff(
        &var_2f8, &var_370);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::h06819118e1ccc266(&var_2f8);
    uint64_t result;
    int128_t var_430;
    int64_t var_420;
    
    if (!rax)
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h54cabaa581aa4ecb(&var_430, "missing operandinternal error: e…", 0xf);
        int64_t var_2e8_1 = var_420;
        var_2f8 = var_430;
        int32_t var_2e0_1 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::ha175f9b533adbceb(&var_2f8);
    }
    else
    {
        int64_t rbx_1 = *(rax + 8);
        int64_t r14_1 = *(rax + 0x10);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h887d9d244fd27597(
            &var_2f8, &var_370);
        int64_t var_338;
        clap_builder::parser::error::MatchesError::unwrap::h37e62f570075ec30(&var_338, &var_2f8);
        int64_t var_458;
        int64_t rax_1;
        
        if (!var_338)
        {
            var_458 = 0;
            int64_t var_450_1 = 8;
            int64_t var_448_1 = 0;
            rax_1 = 8;
        }
        else
        {
            core::iter::traits::iterator::Iterator::collect::h3b7b57a9b59a744a(&var_458, &var_338);
            int64_t var_450;
            rax_1 = var_450;
        }
        
        int64_t s;
        __builtin_memset(&s, 0, 0x18);
        int64_t var_3b0 = 0;
        int64_t var_440 = rbx_1;
        int64_t var_438_1 = r14_1;
        char rbx_2 = 0;
        
        while (true)
        {
            uucore::features::format::parse_spec_and_escape::_$u7b$$u7b$closure$u7d$$u7d$::h6e8f5da603029e23(&var_430, &var_440);
            uint32_t rax_4 = var_430;
            
            if (rax_4 == 7)
                goto label_46a8f9;
            
            uint64_t result_1;
            
            if (rax_4 == 8)
            {
                result_1 = alloc::boxed::Box$LT$T$GT$::new::h77db3e96626b60ca(&*var_430[8]);
                label_46a991:
                result = result_1;
            }
            else
            {
                int128_t var_410;
                int128_t* var_400;
                int128_t* var_3d8;
                char var_3d0;
                int128_t var_3cf;
                int64_t var_2e8;
                int128_t var_2d8;
                
                if (rax_4 == 9)
                {
                    uucore::features::format::argument::FormatArguments::start_next_batch::h16bc5e37016e687d(&var_3b0);
                    int128_t var_390;
                    
                    if (rbx_2 & 1)
                    {
                        while (*var_390[8] < s)
                        {
                            var_440 = rbx_1;
                            int64_t var_438_2 = r14_1;
                            
                            while (true)
                            {
                                uucore::features::format::parse_spec_and_escape::_$u7b$$u7b$closure$u7d$$u7d$::h6e8f5da603029e23(&var_430, &var_440);
                                char rax_10 = var_430;
                                
                                if (rax_10 == 9)
                                {
                                    uucore::features::format::argument::FormatArguments::start_next_batch::h16bc5e37016e687d(&var_3b0);
                                    break;
                                }
                                
                                if (rax_10 == 8)
                                {
                                    result_1 = alloc::boxed::Box$LT$T$GT$::new::h77db3e96626b60ca(
                                        &*var_430[8]);
                                    goto label_46a991_1;
                                }
                                
                                int128_t var_2d8_1 = var_410;
                                *var_2e8[1] = *var_420[1];
                                var_2f8 = var_430;
                                var_2f8 = rax_10;
                                std::io::stdio::stdout::hb6a8e10bcccf3287();
                                uucore::features::format::FormatItem$LT$C$GT$::write::h69d3992719ee1c91(&var_3d8, &var_2f8);
                                int128_t* rcx_2 = var_3d8;
                                
                                if (rcx_2 != -0x7fffffffffffffea)
                                {
                                    int128_t var_3e8_2 = var_3cf;
                                    int128_t var_3f7_2 = var_3cf;
                                    var_400 = rcx_2;
                                    char var_3f8_2 = var_3d0;
                                    result_1 = alloc::boxed::Box$LT$T$GT$::new::h77db3e96626b60ca(
                                        &var_400);
                                    goto label_46a991_1;
                                }
                                
                                if (var_3d0 & 1)
                                    goto label_46a951_1;
                            }
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..format..argument..FormatArgument$GT$$GT$::h56711da8e104b355(&var_458);
                        result = 0;
                        break;
                    }
                    
                    int64_t s_1 = s;
                    
                    if (*var_390[8] < s_1)
                    {
                        int64_t rcx_3 = var_390;
                        void* rax_14;
                        
                        if (rcx_3 < s_1)
                            rax_14 = rcx_3 * 0x28 + rax_1;
                        
                        int32_t var_2e0;
                        
                        if (rcx_3 >= s_1 || *rax_14 != -0x7ffffffffffffff6)
                        {
                            var_2f8 = &data_5149f8;
                            *var_2f8[8] = 1;
                            void var_460;
                            void* var_2e8_4 = &var_460;
                            var_2e0 = {0};
                            core::panicking::panic_fmt::h96f341d36638c225(&var_2f8);
                            /* no return */
                        }
                        
                        var_3d8 = rax_14 + 8;
                        int64_t rax_16;
                        int64_t rdx_4;
                        rax_16 = uucore::util_name::h074417a1e6395129();
                        var_430 = rax_16;
                        *var_430[8] = rdx_4;
                        var_400 = &var_430;
                        char var_3f8;
                        var_3f8 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h19f2f689dad69c8e;
                        var_2f8 = &data_514a08;
                        *var_2f8[8] = 2;
                        var_2d8 = 0;
                        int128_t** var_2e8_2 = &var_400;
                        var_2e0 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_2f8);
                        var_430 = &var_3d8;
                        *var_430[8] =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8ec401fe05632880;
                        var_2f8 = &data_514a28;
                        *var_2f8[8] = 2;
                        var_2d8 = 0;
                        int128_t* var_2e8_3 = &var_430;
                        var_2e0 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_2f8);
                    }
                    
                    label_46a951:
                    result = 0;
                }
                else
                {
                    rbx_2 = 1;
                    label_46a8f9:
                    var_2d8 = var_410;
                    *var_2e8[1] = *var_420[1];
                    var_2f8 = var_430;
                    var_2f8 = rax_4;
                    std::io::stdio::stdout::hb6a8e10bcccf3287();
                    uucore::features::format::FormatItem$LT$C$GT$::write::h69d3992719ee1c91(
                        &var_3d8, &var_2f8);
                    int128_t* rcx_1 = var_3d8;
                    
                    if (rcx_1 != -0x7fffffffffffffea)
                    {
                        int128_t var_3e8_1 = var_3cf;
                        int128_t var_3f7_1 = var_3cf;
                        var_400 = rcx_1;
                        char var_3f8_1 = var_3d0;
                        result_1 = alloc::boxed::Box$LT$T$GT$::new::h77db3e96626b60ca(&var_400);
                        label_46a991_1:
                        result = result_1;
                    }
                    else if (!(var_3d0 & 1))
                        continue;
                    else
                    {
                        label_46a951_1:
                        result = 0;
                    }
                }
            }
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..format..argument..FormatArgument$GT$$GT$::h56711da8e104b355(&var_458);
            break;
        }
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9624343be4e65ac9(&var_370);
    return result;
}
