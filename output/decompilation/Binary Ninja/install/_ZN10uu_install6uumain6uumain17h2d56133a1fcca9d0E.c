
  uint64_t uu_install::uumain::uumain::h2d56133a1fcca9d0(int64_t arg1)

{
    int64_t var_2e8;
    uu_install::uu_app::hc6c3e3f673447f2b(&var_2e8);
    int64_t var_3c8;
    clap_builder::builder::command::Command::try_get_matches_from::hd427396a7f455570(&var_3c8, 
        &var_2e8, arg1);
    int64_t rax = var_3c8;
    int64_t var_3c0;
    
    if (-(rax) == -0x8000000000000000)
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3c0);
    
    int64_t var_398;
    int64_t var_330 = var_398;
    int128_t var_3a8;
    int128_t var_340 = var_3a8;
    int128_t var_3b8;
    int128_t var_350 = var_3b8;
    int64_t var_360 = rax;
    int64_t var_358 = var_3c0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hd70ddb265ed347cb(
        &var_2e8, &var_360, "files(uutils coreutils) 0.0.30Co…", 5);
    int64_t var_328;
    clap_builder::parser::error::MatchesError::unwrap::hb67e080e0d2b698a(&var_328, 
        "files(uutils coreutils) 0.0.30Co…", 5, &var_2e8);
    int64_t var_3e0;
    int64_t var_3d8;
    int64_t var_3d0;
    int128_t var_2e0;
    
    if (!var_328)
    {
        var_3e0 = 0;
        var_3d8 = 8;
        var_3d0 = 0;
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::h7a16aa648906ae80(&var_2e8, &var_328);
        var_3d8 = var_2e0;
        var_3e0 = var_2e8;
    }
    
    uint64_t result_2 = uu_install::check_unimplemented::h25e1c8c3cc575803(&var_360);
    uint64_t result = result_2;
    
    if (!result_2)
    {
        uu_install::behavior::h7987ba58edb264ae(&var_2e8, &var_360);
        int64_t rax_3 = var_2e8;
        result = var_2e0;
        
        if (rax_3 == -0x8000000000000000)
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hc646f9cd9b7a0504(&var_3e0);
        else
        {
            int128_t var_290;
            int72_t var_370_1 = var_290;
            int128_t var_2a0;
            int128_t var_380_1 = var_2a0;
            int128_t var_2b0;
            int128_t var_390_1 = var_2b0;
            int128_t var_2c0;
            var_3a8 = var_2c0;
            int128_t var_2d0;
            var_3b8 = var_2d0;
            var_3c8 = rax_3;
            uint64_t result_1 = result;
            var_3b8 = *var_2e0[8];
            
            if (*var_370_1[8] != 1)
            {
                result = uu_install::directory::h0671663bd4f8b2db(var_3d8, var_3d0, &var_3c8);
                core::ptr::drop_in_place$LT$uu_install..Behavior$GT$::h21b8ea035c937e2e(&var_3c8);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hc646f9cd9b7a0504(&var_3e0);
            }
            else
            {
                *var_2e0[8] = var_3d0;
                var_2e8 = var_3e0;
                uint64_t result_3;
                void** rdx_2;
                result_3 = uu_install::standard::h1ae3025b0f01e4c2(&var_2e8, &var_3c8);
                result = result_3;
                core::ptr::drop_in_place$LT$uu_install..Behavior$GT$::h21b8ea035c937e2e(&var_3c8);
            }
        }
    }
    else
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hc646f9cd9b7a0504(&var_3e0);
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h277369f93a623746(&var_360);
    return result;
}
