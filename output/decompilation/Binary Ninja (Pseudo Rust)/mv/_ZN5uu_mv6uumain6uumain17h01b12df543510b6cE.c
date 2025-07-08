
  fn uu_mv::uumain::uumain::h01b12df543510b6c(arg1: i64) -> *mut i64

{
    let mut var_2f8: ();
    uu_mv::uu_app::hfdaaab3614528530(&var_2f8);
    let mut result_1: *mut i64;
    clap_builder::builder::command::Command::try_get_matches_from_mut::h2240c66d1acfe0fa(&result_1, 
        &var_2f8, arg1);
    let result_3: *mut i64 = result_1;
    let mut result: *mut i64;
    let mut var_470: *mut *mut c_void;
    
    if result_3 != -0x8000000000000000
    {
        let mut var_448: i64;
        let var_3e0_1: i64 = var_448;
        let mut var_458: i128;
        let var_3f0_1: i128 = var_458;
        let mut var_468: i128;
        let var_400_1: i128 = var_468;
        let mut result_4: *mut i64 = result_3;
        let var_408_1: *mut *mut c_void = var_470;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hff279e0ad4a0eeac(
            &result_1, &result_4, "filesdebugThe backup suffix is '…", 5);
        let mut rsi_3: *const i8 = "filesdebugThe backup suffix is '…";
        let mut var_3d8: *mut *mut c_void;
        clap_builder::parser::error::MatchesError::unwrap::h99178e80da74aca8(&var_3d8, 
            "filesdebugThe backup suffix is '…", 5, &result_1);
        let mut rax_1: *mut *mut c_void = var_3d8;
        let mut var_3d0: *mut i8;
        let mut var_3c8: u128;
        let mut rcx_3: *const i8;
        let mut rdx_1: i64;
        let mut zmm0_2: i128;
        let mut zmm1_2: u128;
        
        if rax_1 == 0
        {
            zmm0_2 = {0};
            zmm1_2 = "a Display implementation returne…";
            rcx_3 = "a Display implementation returne…";
            rax_1 = core::ops::function::FnOnce::call_once::ha903d9ac633000a5;
            rdx_1 = 0;
        }
        else
        {
            rcx_3 = var_3d0;
            zmm1_2 = var_3c8;
            let var_3b8: i128;
            zmm0_2 = var_3b8;
            let var_3a8: *mut i8;
            rsi_3 = var_3a8;
            let var_3a0: i64;
            rdx_1 = var_3a0;
        }
        
        let mut var_350: *mut *mut c_void = rax_1;
        let var_348_1: *const i8 = rcx_3;
        let var_340_1: u128 = zmm1_2;
        let var_330_1: i128 = zmm0_2;
        let var_320_1: *const i8 = rsi_3;
        let var_318_1: i64 = rdx_1;
        let mut var_380: ();
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h9d30ac2cc0f0b64e(&var_380, &var_350);
        let var_370: i64;
        
        if var_370 == 1 &&
            clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
            &result_4, "target-directory/", 0x10) == 0
        {
            var_3d8 = &uu_mv::ARG_FILES::h6d8adaf7ec2b89d6;
            let var_3d0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h48422eefa7f5ab42;
            result_1 = &data_584c28;
            let var_470_1: i64 = 2;
            var_458 = 0;
            var_468 = &var_3d8;
            *var_468[8] = 1;
            let mut var_310: ();
            core::option::Option$LT$T$GT$::map_or_else::hdb640919041b3b75(&var_310, &result_1);
            result_1 = clap_builder::error::Error$LT$F$GT$::format::hb9eed6f2ee7e65ff(
                clap_builder::error::Error$LT$F$GT$::raw::h04dfe7f3fdb8b31a(6, &var_310), &var_2f8);
            clap_builder::error::Error$LT$F$GT$::exit::hd8209c520a8761e9(&result_1);
            /* no return */
        }
        
        let rax_3: i8 = uu_mv::determine_overwrite_mode::h2a7c21ee43665632(&result_4);
        uucore::features::backup_control::determine_backup_mode::h17e48f842769eb29(&result_1, 
            &result_4);
        result = result_1;
        
        if result == 0
        {
            let rbp_1: i8 = var_470;
            let rax_4: i8 =
                uucore::features::update_control::determine_update_mode::h741491f5f957cb56(
                &result_4);
            
            if rbp_1 == 0 || (rax_3 != 0 && (rax_4 & 1) == 0)
            {
                let mut var_368: i128;
                uucore::features::backup_control::determine_backup_suffix::h1f59e1b98a321786(
                    &var_368);
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4d9e7d247c306b7f(&result_1, &result_4, "target-directory/", 0x10);
                let rax_6: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h89c82ab2bd8d6091(
                    "target-directory/", 0x10, &result_1);
                let mut var_428: *mut *mut c_void;
                let var_420: *mut i8;
                let mut var_418: u64;
                let mut var_398: i128;
                
                if rax_6 == 0
                {
                    var_428 = -0x8000000000000000;
                    'label_492f94:
                    var_398 = var_368;
                    var_3c8 = var_418;
                    var_3d8 = var_428;
                    let var_3d0_1: *mut i8 = var_420;
                    let rax_17: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_4, "no-target-directoryverbosefilesd…", 0x13);
                    let mut r15_1: i8 = 1;
                    
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_4, "verbosefilesdebugThe backup suff…", 7) == 0
                    {
                        r15_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_4, "debugThe backup suffix is '~', u…", 5);
                    }
                    
                    let rax_20: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_4, "strip-trailing-slashesno-target-…", 0x16);
                    let rax_21: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_4, "progress", 8);
                    let rax_22: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_4, "debugThe backup suffix is '~', u…", 5);
                    *var_448[5] = rax_3;
                    *var_448[6] = rbp_1;
                    result_1 = var_398;
                    let var_358: i64;
                    var_468 = var_358;
                    *var_448[7] = rax_4;
                    var_468 = var_3d8;
                    *var_458[8] = var_3c8;
                    var_448 = rax_17;
                    *var_448[1] = r15_1;
                    *var_448[2] = rax_20;
                    *var_448[3] = rax_21;
                    *var_448[4] = rax_22;
                    let var_378: *mut c_void;
                    let mut result_2: *mut i128;
                    let mut rdx_4: *mut *mut c_void;
                    result_2 = uu_mv::mv::h15eff797ddd7e01a(var_378, var_370, &result_1);
                    result = result_2;
                    core::ptr::drop_in_place$LT$uu_mv..Options$GT$::h05a211bf7f3f2585(&result_1);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he70af320919a676e(&var_380);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h72f2f9eded2ee180(&result_4);
                }
                else
                {
                    core::ops::function::FnOnce::call_once::h16aa1e2e39857890(&result_1, rax_6);
                    var_418 = var_468;
                    var_428 = result_1;
                    
                    if var_428 == -0x8000000000000000
                    {
                        goto 'label_492f94;
                    }
                    
                    if std::path::Path::is_dir::h9ac0db933706da51(var_420, var_418) != 0
                    {
                        goto 'label_492f94;
                    }
                    
                    var_3d8 = 1;
                    var_3d0 = var_420;
                    *var_3c8[8] = 1;
                    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h9d67ef52ab94ff93(
                        &var_398, &var_3d8);
                    let var_388: i64;
                    *var_468[8] = var_388;
                    var_470 = var_398;
                    result_1 = 8;
                    result = alloc::boxed::Box$LT$T$GT$::new::h18b7328edc97dea9(&result_1);
                    core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h5f4d8006a6098320(&var_428);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h79d8e948a1c6aee4(
                        &var_368);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he70af320919a676e(&var_380);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h72f2f9eded2ee180(&result_4);
                }
            }
            else
            {
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1716e8528db7e4a4(
                    &var_3d8);
                var_468 = var_3c8;
                result_1 = var_3d8;
                *var_468[8] = 1;
                result = alloc::boxed::Box$LT$T$GT$::new::h5f90fa1e3f4cd7b7(&result_1);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he70af320919a676e(&var_380);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h72f2f9eded2ee180(&result_4);
            }
        }
        else
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he70af320919a676e(&var_380);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h72f2f9eded2ee180(&result_4);
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_470);
    }
    core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h26677e3a2ea360a6(
        &var_2f8);
    result
}
