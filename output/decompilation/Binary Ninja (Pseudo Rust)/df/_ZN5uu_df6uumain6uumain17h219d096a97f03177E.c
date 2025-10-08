
  fn uu_df::uumain::uumain::h219d096a97f03177(arg1: i64) -> u64

{
    let mut var_2e8: *mut i64;
    uu_df::uu_app::h7dd88faa65059b5c(&var_2e8);
    let mut var_408: *mut i64;
    clap_builder::builder::command::Command::try_get_matches_from::hdff312c40bc5334b(&var_408, 
        &var_2e8, arg1);
    let rax: *mut i64 = var_408;
    let mut var_400: i64;
    
    if -(rax) == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_400);
    }
    
    let var_3d8: i64;
    let var_380_1: i64 = var_3d8;
    let mut var_3e8: i128;
    let var_390_1: i128 = var_3e8;
    let mut var_3f8: i128;
    let var_3a0_1: i128 = var_3f8;
    let mut var_3b0: *mut i64 = rax;
    let var_3a8_1: i64 = var_400;
    uu_df::Options::from::h8b6ce45144534520(&var_2e8, &var_3b0);
    let rax_2: *mut i64 = var_2e8;
    let mut var_2e0: i128;
    let mut var_458: i128 = var_2e0;
    let mut result: u64;
    let mut var_348: i128;
    let mut var_2d0: i128;
    
    if rax_2 != -0x8000000000000000
    {
        let var_2a0: i128;
        let var_3c0_1: i128 = var_2a0;
        let var_2b0: i128;
        let var_3d0_1: i128 = var_2b0;
        let var_2c0: i128;
        var_3e8 = var_2c0;
        let zmm0_2: i128 = var_458;
        var_348 = zmm0_2;
        let var_338_2: i128 = var_2d0;
        var_400 = zmm0_2;
        var_3f8 = var_2d0;
        var_408 = rax_2;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1be3b76b5e4259b7(
            &var_2e8, &var_3b0, "pathsportabilityprint-typeexclud…", 5);
        let mut var_328: i64;
        clap_builder::parser::error::MatchesError::unwrap::h9666b4fb430f9123(&var_328, 
            "pathsportabilityprint-typeexclud…", 5, &var_2e8);
        let mut var_428: *mut i64;
        
        if var_328 == 0
        {
            let mut var_378: *mut i64;
            uu_df::get_all_filesystems::ha7950162b929c2f8(&var_378, &var_408);
            let rax_6: *mut i64 = var_378;
            let var_370: i64;
            let var_368: *mut i64;
            
            if rax_6 != -0x8000000000000000
            {
                let mut var_470: *mut i64 = rax_6;
                
                if var_368 != 0
                {
                    let var_418_2: *mut i64 = var_368;
                    var_428 = var_470;
                    let var_420_2: i64 = var_370;
                    'label_460eb5:
                    uu_df::table::Table::new::h1ab1638dbdc475f0(&var_2e8, &var_408, &var_428);
                    var_470 = &var_2e8;
                    let var_468_2: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$uu_df..table..Table$u20$as$u20$core..fmt..Display$GT$::fmt::h34165fdb5bafaf68;
                    var_458 = &data_502118;
                    *var_458[8] = 2;
                    let var_438_1: i64 = 0;
                    let mut var_448_1: i128;
                    var_448_1 = &var_470;
                    *var_448_1[8] = 1;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_458);
                    core::ptr::drop_in_place$LT$uu_df..table..Table$GT$::h3f6dd34f640bd290(
                        &var_2e8);
                    core::ptr::drop_in_place$LT$uu_df..Options$GT$::h907ddf1f87b71eb9(&var_408);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h1612bae07920f9e3(&var_3b0);
                    return 0;
                }
                
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h5e212f3fc67d7e91(&var_458, "no file systems processed: No su…", 0x19);
                *var_2e0[8] = var_2d0;
                var_2e8 = var_458;
                var_2d0 = 1;
                result = alloc::boxed::Box$LT$T$GT$::new::h9b3314f0e2696c29(&var_2e8);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_df..filesystem..Filesystem$GT$$GT$::h60c6be51676db6a7(&var_470);
            }
            else
            {
                result = uu_df::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h4bee578f8c35ee3d(
                    var_370, var_368);
            }
        }
        else
        {
            core::iter::traits::iterator::Iterator::collect::h29c077bce706520c(&var_458, &var_328);
            let rbx_2: *mut i64 = *var_458[8];
            let mut var_360: *mut i64;
            uu_df::get_named_filesystems::h04ac4719102a6bd6(&var_360, rbx_2, var_2d0, &var_408);
            let rax_4: *mut i64 = var_360;
            let var_358: i64;
            let var_350: *mut i64;
            
            if rax_4 != -0x8000000000000000
            {
                var_2e8 = rax_4;
                var_2e0 = var_358;
                *var_2e0[8] = var_350;
                
                if var_350 != 0
                {
                    let var_418_1: i64 = *var_2e0[8];
                    var_428 = var_2e8;
                    let var_420_1: i64 = var_2e0;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::he20e0cbd0c056ce4(
                        var_458, rbx_2);
                    goto 'label_460eb5;
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_df..filesystem..Filesystem$GT$$GT$::h60c6be51676db6a7(&var_2e8);
                result = 0;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::he20e0cbd0c056ce4(
                    var_458, rbx_2);
            }
            else
            {
                result = uu_df::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h4bee578f8c35ee3d(
                    var_358, var_350);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::he20e0cbd0c056ce4(
                    var_458, rbx_2);
            }
        }
        core::ptr::drop_in_place$LT$uu_df..Options$GT$::h907ddf1f87b71eb9(&var_408);
    }
    else
    {
        var_348 = var_458;
        let var_338_1: i128 = var_2d0;
        result = alloc::boxed::Box$LT$T$GT$::new::h4aae9c6e7d3a8f03(&var_348);
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h1612bae07920f9e3(&var_3b0);
    result
}
