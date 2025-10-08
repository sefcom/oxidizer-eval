
  uint64_t uu_rmdir::uumain::uumain::hca85f7b438ec45e9(int64_t arg1)

{
    void* const var_2f8;
    uu_rmdir::uu_app::h41f54c0a55596ebe(&var_2f8);
    void* const var_3e0;
    clap_builder::builder::command::Command::try_get_matches_from::h5515b7eebfb7e895(&var_3e0, 
        &var_2f8, arg1);
    void* const rax = var_3e0;
    char* var_3d8;
    
    if (-(rax) == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3d8);
    
    char* var_3b0;
    char* var_318_1 = var_3b0;
    int128_t var_3c0;
    int128_t var_328_1 = var_3c0;
    uint128_t var_3d0;
    uint128_t var_338_1 = var_3d0;
    void* const var_348 = rax;
    char* var_340_1 = var_3d8;
    char rax_2 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_348, "ignore-fail-on-non-emptyparentsv…", 0x18);
    char rax_3 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_348, "parentsverbose: removing directo…", 7);
    char rax_4 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_348, "verbose: removing directory, \n(…", 7);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h324cf7d356ac5227(
        &var_2f8, &var_348, "dirs\x1b[9m <= trueTERMmainchar …", 4);
    char const* const rsi_3 = "dirs\x1b[9m <= trueTERMmainchar …";
    clap_builder::parser::error::MatchesError::unwrap::hcee8fc91d516f620(&var_3e0, 
        "dirs\x1b[9m <= trueTERMmainchar …", 4, &var_2f8);
    void* const rax_5 = var_3e0;
    char const* const rcx_4;
    int64_t rdx_1;
    int128_t zmm0_2;
    uint128_t zmm1_2;
    
    if (!rax_5)
    {
        zmm0_2 = {0};
        zmm1_2 = "/home/34r7hm4n/.cargo/registry/s…";
        rcx_4 = "/home/34r7hm4n/.cargo/registry/s…";
        rax_5 = core::ops::function::FnOnce::call_once::hb2056f08bbcc1e74;
        rdx_1 = 0;
    }
    else
    {
        rcx_4 = var_3d8;
        zmm1_2 = var_3d0;
        zmm0_2 = var_3c0;
        rsi_3 = var_3b0;
        int64_t var_3a8;
        rdx_1 = var_3a8;
    }
    
    var_2f8 = rax_5;
    char const* const var_2f0_1 = rcx_4;
    uint128_t var_2e8_1 = zmm1_2;
    int128_t var_2d8_1 = zmm0_2;
    char const* const var_2c8_1 = rsi_3;
    int64_t var_2c0_1 = rdx_1;
    
    while (true)
    {
        void* rax_7 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h588e08df2d05312a(&var_2f8);
        
        if (!rax_7)
            break;
        
        int64_t var_310;
        uu_rmdir::remove::h30d38ff9a4c5e87a(&var_310, *(rax_7 + 8), *(rax_7 + 0x10), 
            rax_4 << 0x10 | rax_3 << 8 | rax_2);
        int64_t rax_8 = var_310;
        
        if (!rax_8)
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_rmdir..Error$GT$$GT$::h688fabe9eba36869(0);
        else
        {
            int64_t var_3e8 = rax_8;
            int64_t var_308;
            char rax_9;
            
            if (rax_2)
                rax_9 = uu_rmdir::dir_not_empty::he2b023c55fd543e8(&var_3e8, var_308);
            
            if (!rax_2 || !rax_9)
            {
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                std::io::error::repr_bitpacked::decode_repr::h7600fc575e512ef9(&var_3e0, var_3e8);
                int64_t var_3a0;
                int64_t* var_380;
                int64_t var_300;
                
                if (var_3e0 || *var_3e0[4] != 0x14)
                {
                    label_452a50:
                    int64_t rax_15;
                    int64_t rdx_6;
                    rax_15 = uucore::util_name::h074417a1e6395129();
                    var_3a0 = rax_15;
                    int64_t var_398_3 = rdx_6;
                    var_380 = &var_3a0;
                    int64_t (* var_378_3)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc8f1c785ec917b8b;
                    var_3e0 = &data_4ddd80;
                    int64_t var_3d8_2 = 2;
                    var_3c0 = 0;
                    var_3d0 = &var_380;
                    *var_3d0[8] = 1;
                    int64_t rdx_7 = std::io::stdio::_eprint::h57899770eacec2ad(&var_3e0);
                    var_3a0 = 1;
                    int64_t var_398_4 = var_308;
                    int64_t var_390_2 = var_300;
                    char var_388_2 = 1;
                    int64_t var_360;
                    uucore::mods::error::strip_errno::hd746c42590a9db7d(&var_360, &var_3e8, rdx_7);
                    var_380 = &var_3a0;
                    int64_t (* var_378_4)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    int64_t* var_370_1 = &var_360;
                    int64_t (* var_368_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    var_3e0 = &data_4dde18;
                    var_3d8 = 3;
                    var_3c0 = 0;
                    var_3d0 = &var_380;
                    *var_3d0[8] = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_3e0);
                    int64_t var_358;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf46f9234ed73e85e(
                        var_360, var_358);
                }
                else
                {
                    if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h642f3f3a746ea568(
                            var_308, var_300))
                        goto label_452a50;
                    
                    int64_t rax_11;
                    uint64_t rdx_4;
                    rax_11 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2f827d0587e08a73(var_300 - 1, var_308, var_300);
                    
                    if (!std::path::Path::is_symlink::h004cfac91d04dbc0(rax_11, rdx_4))
                        goto label_452a50;
                    
                    uu_rmdir::uumain::uumain::points_to_directory::h618067cf6122ffc7(&var_3e0, 
                        rax_11);
                    char rax_13 = var_3e0;
                    
                    if (rax_13)
                        core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$std..io..error..Error$GT$$GT$::he9c0a545c6a7252d(rax_13, var_3d8);
                    else if (!*var_3e0[1])
                        goto label_452a50;
                    
                    int64_t rax_14;
                    int64_t rdx_5;
                    rax_14 = uucore::util_name::h074417a1e6395129();
                    var_3a0 = rax_14;
                    int64_t var_398_1 = rdx_5;
                    var_380 = &var_3a0;
                    int64_t (* var_378_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc8f1c785ec917b8b;
                    var_3e0 = &data_4ddd80;
                    int64_t var_3d8_1 = 2;
                    var_3c0 = 0;
                    var_3d0 = &var_380;
                    *var_3d0[8] = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_3e0);
                    var_3a0 = 1;
                    int64_t var_398_2 = var_308;
                    int64_t var_390_1 = var_300;
                    char var_388_1 = 1;
                    var_380 = &var_3a0;
                    int64_t (* var_378_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_3e0 = &data_4dddf8;
                    var_3d8 = 2;
                    var_3c0 = 0;
                    var_3d0 = &var_380;
                    *var_3d0[8] = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_3e0);
                }
            }
            
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hafa725c2412b36a2(var_3e8);
        }
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h564b4464c9f835e3(&var_348);
    return 0;
}
