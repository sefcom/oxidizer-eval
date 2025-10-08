
  uint64_t uu_factor::uumain::uumain::hfa81754fb7791d86(int64_t arg1)

{
    int128_t var_2f8;
    uu_factor::uu_app::habe15ffc97b29e55(&var_2f8);
    void*** var_3b0;
    clap_builder::builder::command::Command::try_get_matches_from::h9ae4a6fed9ca7f05(&var_3b0, 
        &var_2f8, arg1);
    void*** rax = var_3b0;
    uint64_t result;
    void*** var_3a8;
    
    if (-(rax) != -0x8000000000000000)
    {
        int64_t var_380;
        int64_t var_328_1 = var_380;
        int128_t var_390;
        int128_t var_338_1 = var_390;
        int128_t var_3a0;
        int128_t var_348_1 = var_3a0;
        void*** var_358 = rax;
        void*** var_350_1 = var_3a8;
        char rax_2 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_358, "exponentsNUMBER(uutils coreutils…", 9);
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        int64_t* var_368 = &std::io::stdio::STDOUT::h411b213c5c9add46;
        void var_320;
        std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h96046ded03714191(
            &var_320, std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_368));
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h04d0d319357c8bcd(
            &var_2f8, &var_358, "NUMBER(uutils coreutils) 0.0.30P…", 6);
        clap_builder::parser::error::MatchesError::unwrap::ha872be5b6fe72ea4(&var_3b0, 
            "NUMBER(uutils coreutils) 0.0.30P…", 6, &var_2f8);
        int128_t var_2e8;
        int128_t var_2d8;
        
        if (!var_3b0)
        {
            std::io::stdio::stdin::h9a05a2c3e7544b2a();
            void* var_360 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
            int32_t* rax_5;
            char rdx_3;
            rax_5 = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(&var_360);
            int32_t* var_3f0 = rax_5;
            rdx_3 &= 1;
            void**** rdi_11 = &var_3b0;
            int32_t** rsi_5 = &var_3f0;
            int64_t var_370_1 = -0x7fffffffffffffff;
            label_49359f:
            _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h462867bd822800e6(rdi_11, rsi_5);
            void*** rbx_1 = var_3b0;
            void**** var_3d0;
            void** var_3c0;
            
            if (rbx_1 == var_370_1)
            {
                core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$::ha0918034fbbd1511(var_3f0, rdx_3);
                label_4936ab:
                void** rax_7 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h8312d51ea439d633(&var_320);
                
                if (!rax_7)
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h1a76c4325b0cc1e6(0);
                else
                {
                    var_3c0 = rax_7;
                    void*** rax_8;
                    int64_t rdx_8;
                    rax_8 = uucore::util_name::h074417a1e6395129();
                    var_3b0 = rax_8;
                    int64_t var_3a8_1 = rdx_8;
                    var_3d0 = &var_3b0;
                    int64_t (* var_3c8_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc900c5a3cc04ff1b;
                    var_2f8 = &data_544290;
                    *var_2f8[8] = 2;
                    var_2d8 = 0;
                    var_2e8 = &var_3d0;
                    *var_2e8[8] = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_2f8);
                    var_3b0 = &var_3c0;
                    int64_t (* var_3a8_2)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                    var_2f8 = &data_5442b0;
                    *var_2f8[8] = 2;
                    var_2d8 = 0;
                    var_2e8 = &var_3b0;
                    *var_2e8[8] = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_2f8);
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h841ca31e3edd53b8(
                        var_3c0);
                }
                
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hf35f94f31999e0ce(&var_320);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2845e6efb7fbf4e2(&var_358);
                return 0;
            }
            
            if (rbx_1 == -0x8000000000000000)
            {
                void*** var_3d8 = var_3a8;
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                void**** rax_10;
                int64_t rdx_10;
                rax_10 = uucore::util_name::h074417a1e6395129();
                var_3d0 = rax_10;
                int64_t var_3c8_2 = rdx_10;
                var_3c0 = &var_3d0;
                int64_t (* var_3b8_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc900c5a3cc04ff1b;
                var_2f8 = &data_544290;
                *var_2f8[8] = 2;
                var_2d8 = 0;
                var_2e8 = &var_3c0;
                *var_2e8[8] = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_2f8);
                var_3d0 = &var_3d8;
                int64_t (* var_3c8_3)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                var_2f8 = &data_544308;
                *var_2f8[8] = 2;
                var_2d8 = 0;
                var_2e8 = &var_3d0;
                *var_2e8[8] = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_2f8);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h841ca31e3edd53b8(var_3d8);
                result = 0;
            }
            else
            {
                int64_t r14_1 = var_3a0;
                _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h4cdc88adb24f0186(&var_2e8, var_3a8, r14_1);
                var_2f8 = 0;
                *var_2f8[8] = r14_1;
                int128_t var_2c8;
                *var_2c8[8] = 1;
                uint64_t i;
                
                do
                {
                    int64_t rax_6;
                    void** rdx_5;
                    rax_6 = core::iter::traits::iterator::Iterator::try_fold::hb6030f760f76d8dc(
                        &var_2f8);
                    
                    if (!rax_6)
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9cf4137fd0897025(
                            rbx_1, var_3a8);
                        rdi_11 = &var_3b0;
                        rsi_5 = &var_3f0;
                        goto label_49359f;
                    }
                    
                    int128_t* rdx_7;
                    i = uu_factor::print_factors_str::h9017d6fa399a3f46(rax_6, rdx_5, &var_320, 
                        rax_2);
                    result = i;
                } while (!i);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9cf4137fd0897025(rbx_1, 
                    var_3a8);
            }
            
            core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$::ha0918034fbbd1511(var_3f0, rdx_3);
            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hf35f94f31999e0ce(&var_320);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2845e6efb7fbf4e2(&var_358);
        }
        else
        {
            int128_t zmm0_2 = var_3b0;
            int128_t var_2c8_1 = var_380;
            var_2d8 = var_390;
            var_2e8 = var_3a0;
            var_2f8 = zmm0_2;
            uint64_t i_1;
            
            do
            {
                void* rax_4 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5fb02f6ad9487ada(&var_2f8);
                
                if (!rax_4)
                    goto label_4936ab;
                
                int128_t* rdx_2;
                i_1 = uu_factor::print_factors_str::h9017d6fa399a3f46(*(rax_4 + 8), 
                    *(rax_4 + 0x10), &var_320, rax_2);
                result = i_1;
            } while (!i_1);
            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hf35f94f31999e0ce(&var_320);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2845e6efb7fbf4e2(&var_358);
        }
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3a8);
    return result;
}
