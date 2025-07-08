
  int64_t* uu_dirname::uumain::uumain::h11513daeca688bec(int64_t arg1)

{
    int128_t var_5c8;
    uu_dirname::uu_app::ha975dcebe50fa881(&var_5c8);
    char* var_2f8;
    clap_builder::builder::command::Command::after_help::h7c6e8d1a8e0241d3(&var_2f8, &var_5c8, 
        "Output each NAME with its last n…", 0x95);
    int64_t var_678;
    clap_builder::builder::command::Command::try_get_matches_from::hd708e816ad35cd23(&var_678, 
        &var_2f8, arg1);
    int64_t rax = var_678;
    int64_t var_670;
    
    if (rax == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_670);
    
    int64_t var_648;
    int64_t var_610_1 = var_648;
    int128_t var_658;
    int128_t var_620_1 = var_658;
    int128_t var_668;
    int128_t var_630_1 = var_668;
    int64_t var_640 = rax;
    int64_t var_638_1 = var_670;
    char rax_3 = 0xa;
    
    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_640, "zeroAnsi -- \x1b[8mhelpNoneshimn…", 4))
        rax_3 = 0;
    
    char var_689 = rax_3;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hbca69427bbb05630(
        &var_5c8, &var_640, "dir./Output each NAME with its l…", 3);
    char const* const rsi_4 = "dir./Output each NAME with its l…";
    clap_builder::parser::error::MatchesError::unwrap::h0a916d4903afd704(&var_2f8, 
        "dir./Output each NAME with its l…", 3, &var_5c8);
    char* rax_4 = var_2f8;
    uint128_t var_2e8;
    char const* const rcx_3;
    int64_t rdx_1;
    int128_t zmm0_2;
    uint128_t zmm1_2;
    
    if (!rax_4)
    {
        zmm0_2 = {0};
        zmm1_2 = "a Display implementation returne…";
        rcx_3 = "a Display implementation returne…";
        rax_4 = core::ops::function::FnOnce::call_once::hf9816fa1da96fc6b;
        rdx_1 = 0;
    }
    else
    {
        char* var_2f0;
        rcx_3 = var_2f0;
        zmm1_2 = var_2e8;
        int128_t var_2d8;
        zmm0_2 = var_2d8;
        char* var_2c8;
        rsi_4 = var_2c8;
        int64_t var_2c0;
        rdx_1 = var_2c0;
    }
    
    char* var_608 = rax_4;
    char const* const var_600_1 = rcx_3;
    uint128_t var_5f8_1 = zmm1_2;
    int128_t var_5e8_1 = zmm0_2;
    char const* const var_5d8_1 = rsi_4;
    int64_t var_5d0_1 = rdx_1;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd09e5e62fed0fc94(&var_678, &var_608);
    int64_t rax_5 = var_668;
    
    if (!rax_5)
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd9f27690394bc0dc(&var_2f8);
        int64_t var_5b8_5 = var_2e8;
        var_5c8 = var_2f8;
        int32_t var_5b0_1 = 1;
        int64_t* result = alloc::boxed::Box$LT$T$GT$::new::h0f4bd833c5b203ad(&var_5c8);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h231b973bb6e880f3(&var_678);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc82f33e0af68aa1d(&var_640);
        return result;
    }
    
    int64_t var_688 = var_670;
    int64_t var_680_1 = var_670 + rax_5 * 0x18;
    
    for (void* i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hea13242265cd5fc5(&var_688); i; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hea13242265cd5fc5(&var_688))
    {
        char* r15_1 = *(i + 8);
        uint64_t r12_1 = *(i + 0x10);
        char* rax_8;
        int64_t rdx_2;
        rax_8 = std::path::Path::parent::h65c9a340a6266f2d(r15_1, r12_1);
        int32_t var_5b0;
        
        if (!rax_8)
        {
            char rax_9 = std::path::Path::is_absolute::h3431a23d91045560(r15_1, r12_1);
            char rax_10;
            
            if (!rax_9)
                rax_10 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h7b1b59c59615f35d(r15_1, r12_1, "/Output each NAME with its last …", 1);
            
            if (!rax_9 && !rax_10)
            {
                var_5c8 = &data_5059e8;
                *var_5c8[8] = 1;
                int64_t var_5b8_3 = 8;
                var_5b0 = {0};
                std::io::stdio::_print::he918bceb0c89db46(&var_5c8);
            }
            else
            {
                var_5c8 = &data_5059f8;
                *var_5c8[8] = 1;
                int64_t var_5b8_2 = 8;
                var_5b0 = {0};
                std::io::stdio::_print::he918bceb0c89db46(&var_5c8);
            }
        }
        else
        {
            std::path::Path::components::h4f3217acf0fc8653(&var_5c8, rax_8, rdx_2);
            _$LT$std..path..Components$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h327ae97aa5bd0b06(&var_2f8, &var_5c8);
            
            if (var_2f8 != 0xa)
                core::result::Result$LT$T$C$E$GT$::unwrap::h0ef4d55c3be2e364(
                    uucore::mods::display::print_verbatim::hce63210a40ab659b(rax_8));
            else
            {
                var_5c8 = &data_5059e8;
                *var_5c8[8] = 1;
                int64_t var_5b8_1 = 8;
                var_5b0 = {0};
                std::io::stdio::_print::he918bceb0c89db46(&var_5c8);
            }
        }
        
        var_2f8 = &var_689;
        int64_t (* var_2f0_1)(char* arg1, void* arg2) = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
        var_5c8 = &data_412aa0;
        *var_5c8[8] = 1;
        int64_t var_5a8_1 = 0;
        char** var_5b8_4 = &var_2f8;
        var_5b0 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&var_5c8);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h231b973bb6e880f3(
        &var_678);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc82f33e0af68aa1d(&var_640);
    return nullptr;
}
