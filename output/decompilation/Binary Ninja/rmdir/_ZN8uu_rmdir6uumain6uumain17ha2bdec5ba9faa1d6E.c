
  int64_t* uu_rmdir::uumain::uumain::ha2bdec5ba9faa1d6(int64_t arg1)

{
    void* const var_2f8;
    uu_rmdir::uu_app::he176cc9e026e634b(&var_2f8);
    void* const var_3e0;
    clap_builder::builder::command::Command::try_get_matches_from::ha0ea2a3464d4e142(&var_3e0, 
        &var_2f8, arg1);
    void* const rax = var_3e0;
    char* var_3d8;
    
    if (rax == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_3d8);
    
    char* var_3b0;
    char* var_330_1 = var_3b0;
    int128_t var_3c0;
    int128_t var_340_1 = var_3c0;
    uint128_t var_3d0;
    uint128_t var_350_1 = var_3d0;
    void* const var_360 = rax;
    char* var_358_1 = var_3d8;
    char rax_2 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_360, "ignore-fail-on-non-emptyparentsv…", 0x18);
    char rax_3 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_360, "parentsverbose: removing directo…", 7);
    char rax_4 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_360, "verbose: removing directory, \n0…", 7);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h8886196f9c0d552d(
        &var_2f8, &var_360, "dirs\x1b[9mtrueTERMchar -> \x1b[…", 4);
    char const* const rsi_3 = "dirs\x1b[9mtrueTERMchar -> \x1b[…";
    clap_builder::parser::error::MatchesError::unwrap::h5d9125c7e93c3c34(&var_3e0, 
        "dirs\x1b[9mtrueTERMchar -> \x1b[…", 4, &var_2f8);
    void* const rax_5 = var_3e0;
    char const* const rcx_3;
    int64_t rdx_1;
    int128_t zmm0_2;
    uint128_t zmm1_2;
    
    if (!rax_5)
    {
        zmm0_2 = {0};
        zmm1_2 = "a Display implementation returne…";
        rcx_3 = "a Display implementation returne…";
        rax_5 = core::ops::function::FnOnce::call_once::he26979695a5c46c9;
        rdx_1 = 0;
    }
    else
    {
        rcx_3 = var_3d8;
        zmm1_2 = var_3d0;
        zmm0_2 = var_3c0;
        rsi_3 = var_3b0;
        int64_t var_3a8;
        rdx_1 = var_3a8;
    }
    
    var_2f8 = rax_5;
    char const* const var_2f0_1 = rcx_3;
    uint128_t var_2e8_1 = zmm1_2;
    int128_t var_2d8_1 = zmm0_2;
    char const* const var_2c8_1 = rsi_3;
    int64_t var_2c0_1 = rdx_1;
    
    while (true)
    {
        void* rax_7 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h46b42a66a7d9e16a(&var_2f8);
        int64_t rax_8;
        int64_t rdx_2;
        void var_2b8;
        
        if (rax_7)
            rax_8 = core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h2f2e24cb93c40cad(&var_2b8, rax_7);
        
        if (!rax_7 || !rax_8)
        {
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7eed3728b2821cb4(&var_360);
            return nullptr;
        }
        
        int64_t var_328;
        uu_rmdir::remove::ha1b8dea54bda3da3(&var_328, rax_8, rdx_2, 
            rax_4 << 0x10 | rax_3 << 8 | rax_2);
        int64_t rax_9 = var_328;
        
        if (rax_9)
        {
            int64_t var_3e8 = rax_9;
            int64_t var_320;
            char rax_10;
            
            if (rax_2)
                rax_10 = uu_rmdir::dir_not_empty::h420749e3ec649073(&var_3e8, var_320);
            
            if (!rax_2 || !rax_10)
            {
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                std::io::error::repr_bitpacked::decode_repr::h079a78aa2a8bc71e(&var_3e0, var_3e8);
                int64_t var_3a0;
                int64_t* var_380;
                int64_t var_318;
                
                if (var_3e0 || *var_3e0[4] != 0x14)
                {
                    label_462590:
                    int64_t rax_16;
                    int64_t rdx_6;
                    rax_16 = uucore::util_name::h60d842bf27b05e82();
                    var_3a0 = rax_16;
                    int64_t var_398_3 = rdx_6;
                    var_380 = &var_3a0;
                    int64_t (* var_378_3)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcdfc5853f8105e65;
                    var_3e0 = &data_50b238;
                    int64_t var_3d8_2 = 2;
                    var_3c0 = 0;
                    var_3d0 = &var_380;
                    *var_3d0[8] = 1;
                    int64_t rdx_7 = std::io::stdio::_eprint::hcdfeec148c7134f7(&var_3e0);
                    var_3a0 = 1;
                    int64_t var_398_4 = var_320;
                    int64_t var_390_2 = var_318;
                    char var_388_2 = 1;
                    void var_310;
                    uucore::mods::error::strip_errno::h3c5e943d825faa4a(&var_310, &var_3e8, rdx_7);
                    var_380 = &var_3a0;
                    int64_t (* var_378_4)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    void* var_370_1 = &var_310;
                    int64_t (* var_368_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    var_3e0 = &data_50b2d0;
                    var_3d8 = 3;
                    var_3c0 = 0;
                    var_3d0 = &var_380;
                    *var_3d0[8] = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_3e0);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha0b4df7a442885b4(
                        &var_310);
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h17481d40c2bb7c6f(
                        var_3e8);
                    continue;
                }
                else
                {
                    if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h347ad07198e1fdd3(
                            var_320, var_318, "//home/34r7hm4n/.cargo/registry/…", 1))
                        goto label_462590;
                    
                    char* rax_12;
                    uint64_t rdx_4;
                    rax_12 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h606ca59f5f675cfb(var_318 - 1, var_320, var_318);
                    
                    if (!std::path::Path::is_symlink::h6ab8b58756c51c6b(rax_12, rdx_4))
                        goto label_462590;
                    
                    uu_rmdir::uumain::uumain::points_to_directory::hdf69fcbe1fa7b8d0(&var_3e0, 
                        rax_12);
                    char rax_14 = var_3e0;
                    
                    if (rax_14)
                        core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$std..io..error..Error$GT$$GT$::he0bd217ec8b946c5(rax_14, var_3d8);
                    else if (!*var_3e0[1])
                        goto label_462590;
                    
                    int64_t rax_15;
                    int64_t rdx_5;
                    rax_15 = uucore::util_name::h60d842bf27b05e82();
                    var_3a0 = rax_15;
                    int64_t var_398_1 = rdx_5;
                    var_380 = &var_3a0;
                    int64_t (* var_378_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcdfc5853f8105e65;
                    var_3e0 = &data_50b238;
                    int64_t var_3d8_1 = 2;
                    var_3c0 = 0;
                    var_3d0 = &var_380;
                    *var_3d0[8] = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_3e0);
                    var_3a0 = 1;
                    int64_t var_398_2 = var_320;
                    int64_t var_390_1 = var_318;
                    char var_388_1 = 1;
                    var_380 = &var_3a0;
                    int64_t (* var_378_2)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_3e0 = &data_50b2b0;
                    var_3d8 = 2;
                    var_3c0 = 0;
                    var_3d0 = &var_380;
                    *var_3d0[8] = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_3e0);
                }
            }
            
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h17481d40c2bb7c6f(var_3e8);
        }
    }
}
