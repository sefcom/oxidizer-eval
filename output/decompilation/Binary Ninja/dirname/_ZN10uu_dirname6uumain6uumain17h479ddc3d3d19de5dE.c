
  uint64_t uu_dirname::uumain::uumain::h479ddc3d3d19de5d(int64_t arg1)

{
    char const (** const var_5c8)[0x87];
    uu_dirname::uu_app::hdf88fbea4c615f4b(&var_5c8);
    char* var_2f8;
    clap_builder::builder::command::Command::after_help::ha2a569c1e12f9206(&var_2f8, &var_5c8);
    int64_t var_638;
    clap_builder::builder::command::Command::try_get_matches_from::h160df61233a2b922(&var_638, 
        &var_2f8, arg1);
    int64_t rax = var_638;
    int64_t var_630;
    
    if (-(rax) == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_630);
    
    int64_t var_608;
    int64_t var_5d0_1 = var_608;
    int128_t var_618;
    int128_t var_5e0_1 = var_618;
    int128_t var_628;
    int128_t var_5f0_1 = var_628;
    int64_t var_600 = rax;
    int64_t var_5f8_1 = var_630;
    char rax_3 = 0xa;
    
    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_600, "zeroAnsi -- \x1b[8mhelpNoneshim\x1b…", 4))
        rax_3 = 0;
    
    char var_641 = rax_3;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h9f9f33ac395c0f0f(
        &var_5c8, &var_600);
    int32_t* rsi_4 = &var_5c8;
    clap_builder::parser::error::MatchesError::unwrap::h45af3aeea1831ba2(&var_2f8, rsi_4);
    char const (** rax_4)[0x87] = var_2f8;
    uint128_t var_2e8;
    char const* const rcx_3;
    int64_t rdx_1;
    int128_t zmm0_2;
    uint128_t zmm1_2;
    
    if (!rax_4)
    {
        zmm0_2 = {0};
        zmm1_2 = "/home/34r7hm4n/.cargo/registry/s…";
        rcx_3 = "/home/34r7hm4n/.cargo/registry/s…";
        rax_4 = core::ops::function::FnOnce::call_once::h6323d8359d4ff3b8;
        rdx_1 = 0;
    }
    else
    {
        char* var_2f0;
        rcx_3 = var_2f0;
        zmm1_2 = var_2e8;
        int128_t var_2d8;
        zmm0_2 = var_2d8;
        int32_t* var_2c8;
        rsi_4 = var_2c8;
        int64_t var_2c0;
        rdx_1 = var_2c0;
    }
    
    var_5c8 = rax_4;
    char const* const var_5c0_1 = rcx_3;
    uint128_t var_5b8_1 = zmm1_2;
    int128_t var_5a8_1 = zmm0_2;
    int32_t* var_598_1 = rsi_4;
    int64_t var_590_1 = rdx_1;
    core::iter::traits::iterator::Iterator::collect::h5092542f7ecd220c(&var_638, &var_5c8);
    int64_t rax_5 = var_628;
    
    if (!rax_5)
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd5557dd8134ea428(&var_2f8, "missing operand./Output each NAM…", 0xf);
        var_5b8_1 = var_2e8;
        var_5c8 = var_2f8;
        *var_5b8_1[8] = 1;
        uint64_t result = alloc::boxed::Box$LT$T$GT$::new::he6cca1a1ec986eb1(&var_5c8);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7d7163f1a34c149b(&var_638);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h11b0e0ac5e339bac(&var_600);
        return result;
    }
    
    int64_t i = 0;
    
    do
    {
        char* rbp_1 = *(var_630 + i + 8);
        int64_t r15_1 = *(var_630 + i + 0x10);
        char* rax_8;
        int64_t rdx_2;
        rax_8 = std::path::Path::parent::hef287f60afa56900(rbp_1, r15_1);
        
        if (!rax_8)
        {
            char rax_9 = std::path::Path::is_absolute::hf2dacc49683e82ac(rbp_1, r15_1);
            char rax_10;
            
            if (!rax_9)
                rax_10 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb4347a5878f8a3de(*(var_630 + i + 8), *(var_630 + i + 0x10), 
                    "/Output each NAME with its last …", 1);
            
            if (!rax_9 && !rax_10)
            {
                var_5c8 = &data_4d81e8;
                int64_t var_5c0_4 = 1;
                var_5b8_1 = 8;
                var_5b8_1 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_5c8);
            }
            else
            {
                var_5c8 = &data_4d81f8;
                int64_t var_5c0_3 = 1;
                var_5b8_1 = 8;
                var_5b8_1 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_5c8);
            }
        }
        else
        {
            std::path::Path::components::hd0346d362206f2e9(&var_5c8, rax_8, rdx_2);
            _$LT$std..path..Components$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h73ed8dd6f02f5cb4(&var_2f8, &var_5c8);
            
            if (var_2f8 != 0xa)
                core::result::Result$LT$T$C$E$GT$::unwrap::hb01f4554be916e7a(
                    uucore::mods::display::print_verbatim::hde1046e11296b66f(rax_8));
            else
            {
                var_5c8 = &data_4d81e8;
                int64_t var_5c0_2 = 1;
                var_5b8_1 = 8;
                var_5b8_1 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_5c8);
            }
        }
        
        var_2f8 = &var_641;
        int64_t (* var_2f0_1)(char* arg1, int64_t* arg2) = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::hd41883bc456718a9;
        var_5c8 = &data_4169e0;
        int64_t var_5c0_5 = 1;
        var_5a8_1 = 0;
        var_5b8_1 = &var_2f8;
        *var_5b8_1[8] = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_5c8);
        i += 0x18;
    } while (rax_5 * 0x18 != i);
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7d7163f1a34c149b(
        &var_638);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h11b0e0ac5e339bac(&var_600);
    return 0;
}
