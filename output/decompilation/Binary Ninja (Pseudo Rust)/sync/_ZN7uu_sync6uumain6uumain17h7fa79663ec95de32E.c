
  fn uu_sync::uumain::uumain::h7fa79663ec95de32(arg1: i64) -> u64

{
    let mut var_2f8: i64;
    uu_sync::uu_app::h8e872b0e08daa914(&var_2f8);
    let mut var_378: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h251ae02ec3da6c81(&var_378, 
        &var_2f8, arg1);
    let rax: i64 = var_378;
    let var_370: i64;
    
    if -(rax) == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_370);
    }
    
    let var_348: i64;
    let var_380_1: i64 = var_348;
    let var_358: i128;
    let var_390_1: i128 = var_358;
    let var_368: i128;
    let var_3a0_1: i128 = var_368;
    let mut var_3b0: i64 = rax;
    let var_3a8_1: i64 = var_370;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hb67b6cf2c7fbf41a(
        &var_2f8, &var_3b0, "filessrc/uu/sync/src/sync.rs(uut…", 5);
    let mut var_338: i64;
    clap_builder::parser::error::MatchesError::unwrap::h843f1030ce831d97(&var_338, 
        "filessrc/uu/sync/src/sync.rs(uut…", 5, &var_2f8);
    let mut var_3c8: i64;
    let mut var_3c0: i64;
    let mut var_3b8: i64;
    let mut var_2f0: i128;
    
    if var_338 == 0
    {
        'label_453348:
        var_3c8 = 0;
        var_3c0 = 8;
        var_3b8 = 0;
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::h7a15e1ae6061b921(&var_2f8, &var_338);
        let rax_2: i64 = var_2f8;
        var_378 = var_2f0;
        
        if rax_2 == -0x8000000000000000
        {
            goto 'label_453348;
        }
        
        var_3c0 = var_378;
        var_3c8 = rax_2;
    }
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_3b0, &data_4173a0[0xc], 4) == 0
    {
        if var_3b8 != 0
        {
            goto 'label_4533f7;
        }
        
        'label_453484:
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_3b0, "file-systemfilessrc/uu/sync/src/…", 0xb) == 0
        {
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_3b0, &data_4173a0[0xc], 4) == 0
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
    
    let mut result: u64;
    
    if var_3b8 != 0
    {
        'label_4533f7:
        let mut rbp_1: i64 = 0;
        
        loop
        {
            let r14_2: *mut i8 = *(var_3c0 + rbp_1 + 8);
            let r15_1: u64 = *(var_3c0 + rbp_1 + 0x10);
            let mut rax_6: i8;
            let mut rdx_1: i32;
            rax_6 = nix::fcntl::open::ha3ad4e2975573044(r14_2, r15_1);
            
            if (rax_6 & 1) != 0
            {
                let mut rax_7: i8;
                
                if rdx_1 == 0xd
                {
                    rax_7 = std::path::Path::is_dir::h02edbc48c38d7d9e(r14_2, r15_1);
                }
                
                if rdx_1 != 0xd || rax_7 != 0
                {
                    *(var_3c0 + rbp_1 + 8);
                    *(var_3c0 + rbp_1 + 0x10);
                    result = _$LT$nix..errno..consts..Errno$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::heda37f322cb0a030(rdx_1);
                    break;
                }
            }
            
            rbp_1 += 0x18;
            
            if var_3b8 * 0x18 == rbp_1
            {
                goto 'label_453484;
            }
        }
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h486c3353d48c6860(&var_378, "--data needs at least one argume…", 0x22);
        *var_2f0[8] = var_368;
        var_2f8 = var_378;
        let var_2e0_1: i32 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h0eac2a8c0ab415c7(&var_2f8);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h9e5e4718d202ca4f(
        &var_3c8);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hdfbe31c1791c8454(&var_3b0);
    result
}
