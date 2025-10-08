
  fn uu_install::uumain::uumain::h2d56133a1fcca9d0(arg1: i64) -> u64

{
    let mut var_2e8: i64;
    uu_install::uu_app::hc6c3e3f673447f2b(&var_2e8);
    let mut var_3c8: i64;
    clap_builder::builder::command::Command::try_get_matches_from::hd427396a7f455570(&var_3c8, 
        &var_2e8, arg1);
    let rax: i64 = var_3c8;
    let var_3c0: i64;
    
    if -(rax) == -0x8000000000000000
    {
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3c0);
    }
    
    let var_398: i64;
    let var_330: i64 = var_398;
    let mut var_3a8: i128;
    let var_340: i128 = var_3a8;
    let mut var_3b8: i128;
    let var_350: i128 = var_3b8;
    let mut var_360: i64 = rax;
    let var_358: i64 = var_3c0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hd70ddb265ed347cb(
        &var_2e8, &var_360, "files(uutils coreutils) 0.0.30Co…", 5);
    let mut var_328: i64;
    clap_builder::parser::error::MatchesError::unwrap::hb67e080e0d2b698a(&var_328, 
        "files(uutils coreutils) 0.0.30Co…", 5, &var_2e8);
    let mut var_3e0: i64;
    let mut var_3d8: i64;
    let mut var_3d0: i64;
    let mut var_2e0: i128;
    
    if var_328 == 0
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
    
    let result_2: u64 = uu_install::check_unimplemented::h25e1c8c3cc575803(&var_360);
    let mut result: u64 = result_2;
    
    if result_2 == 0
    {
        uu_install::behavior::h7987ba58edb264ae(&var_2e8, &var_360);
        let rax_3: i64 = var_2e8;
        result = var_2e0;
        
        if rax_3 == -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hc646f9cd9b7a0504(&var_3e0);
        }
        else
        {
            let var_290: i128;
            let var_370_1: i72 = var_290;
            let var_2a0: i128;
            let var_380_1: i128 = var_2a0;
            let var_2b0: i128;
            let var_390_1: i128 = var_2b0;
            let var_2c0: i128;
            var_3a8 = var_2c0;
            let var_2d0: i128;
            var_3b8 = var_2d0;
            var_3c8 = rax_3;
            let result_1: u64 = result;
            var_3b8 = *var_2e0[8];
            
            if *var_370_1[8] != 1
            {
                result = uu_install::directory::h0671663bd4f8b2db(var_3d8, var_3d0, &var_3c8);
                core::ptr::drop_in_place$LT$uu_install..Behavior$GT$::h21b8ea035c937e2e(&var_3c8);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hc646f9cd9b7a0504(&var_3e0);
            }
            else
            {
                *var_2e0[8] = var_3d0;
                var_2e8 = var_3e0;
                let mut result_3: u64;
                let mut rdx_2: *mut *mut c_void;
                result_3 = uu_install::standard::h1ae3025b0f01e4c2(&var_2e8, &var_3c8);
                result = result_3;
                core::ptr::drop_in_place$LT$uu_install..Behavior$GT$::h21b8ea035c937e2e(&var_3c8);
            }
        }
    }
    else
    {
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hc646f9cd9b7a0504(&var_3e0);
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h277369f93a623746(&var_360);
    result
}
