
  uint64_t uu_sync::uumain::uumain::h7fa79663ec95de32(int64_t arg1)

{
    int64_t var_2f8;
    uu_sync::uu_app::h8e872b0e08daa914(&var_2f8);
    int64_t var_378;
    clap_builder::builder::command::Command::try_get_matches_from::h251ae02ec3da6c81(&var_378, 
        &var_2f8, arg1);
    int64_t rax = var_378;
    int64_t var_370;
    
    if (-(rax) == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_370);
    
    int64_t var_348;
    int64_t var_380_1 = var_348;
    int128_t var_358;
    int128_t var_390_1 = var_358;
    int128_t var_368;
    int128_t var_3a0_1 = var_368;
    int64_t var_3b0 = rax;
    int64_t var_3a8_1 = var_370;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hb67b6cf2c7fbf41a(
        &var_2f8, &var_3b0, "filessrc/uu/sync/src/sync.rs(uut…", 5);
    int64_t var_338;
    clap_builder::parser::error::MatchesError::unwrap::h843f1030ce831d97(&var_338, 
        "filessrc/uu/sync/src/sync.rs(uut…", 5, &var_2f8);
    int64_t var_3c8;
    int64_t var_3c0;
    int64_t var_3b8;
    int128_t var_2f0;
    
    if (!var_338)
    {
        label_453348:
        var_3c8 = 0;
        var_3c0 = 8;
        var_3b8 = 0;
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::h7a15e1ae6061b921(&var_2f8, &var_338);
        int64_t rax_2 = var_2f8;
        var_378 = var_2f0;
        
        if (rax_2 == -0x8000000000000000)
            goto label_453348;
        
        var_3c0 = var_378;
        var_3c8 = rax_2;
    }
    
    if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_3b0, &data_4173a0[0xc], 4))
    {
        if (var_3b8)
            goto label_4533f7;
        
        label_453484:
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_3b0, "file-systemfilessrc/uu/sync/src/…", 0xb))
        {
            if (!
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_3b0, &data_4173a0[0xc], 4))
            {
                uu_sync::sync::hb09a7d5857265317();
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h9e5e4718d202ca4f(&var_3c8);
            }
            else
            {
                *var_2f0[8] = var_3b8;
                var_2f8 = var_3c8;
                uu_sync::fdatasync::h72f48ba09f09a6f8(&var_2f8);
            }
        }
        else
        {
            *var_2f0[8] = var_3b8;
            var_2f8 = var_3c8;
            uu_sync::syncfs::h401104721fb5e39d(&var_2f8);
        }
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hdfbe31c1791c8454(&var_3b0);
        return 0;
    }
    
    uint64_t result;
    
    if (var_3b8)
    {
        label_4533f7:
        int64_t rbp_1 = 0;
        
        while (true)
        {
            char* r14_2 = *(var_3c0 + rbp_1 + 8);
            uint64_t r15_1 = *(var_3c0 + rbp_1 + 0x10);
            char rax_6;
            int32_t rdx_1;
            rax_6 = nix::fcntl::open::ha3ad4e2975573044(r14_2, r15_1);
            
            if (rax_6 & 1)
            {
                char rax_7;
                
                if (rdx_1 == 0xd)
                    rax_7 = std::path::Path::is_dir::h02edbc48c38d7d9e(r14_2, r15_1);
                
                if (rdx_1 != 0xd || rax_7)
                {
                    *(var_3c0 + rbp_1 + 8);
                    *(var_3c0 + rbp_1 + 0x10);
                    result = _$LT$nix..errno..consts..Errno$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::heda37f322cb0a030(rdx_1);
                    break;
                }
            }
            
            rbp_1 += 0x18;
            
            if (var_3b8 * 0x18 == rbp_1)
                goto label_453484;
        }
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h486c3353d48c6860(&var_378, "--data needs at least one argume…", 0x22);
        *var_2f0[8] = var_368;
        var_2f8 = var_378;
        int32_t var_2e0_1 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h0eac2a8c0ab415c7(&var_2f8);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h9e5e4718d202ca4f(
        &var_3c8);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hdfbe31c1791c8454(&var_3b0);
    return result;
}
