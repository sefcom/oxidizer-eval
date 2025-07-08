
  int64_t* uu_mv::uumain::uumain::h01b12df543510b6c(int64_t arg1)

{
    void var_2f8;
    uu_mv::uu_app::hfdaaab3614528530(&var_2f8);
    int64_t* result_1;
    clap_builder::builder::command::Command::try_get_matches_from_mut::h2240c66d1acfe0fa(&result_1, 
        &var_2f8, arg1);
    int64_t* result_3 = result_1;
    int64_t* result;
    void** var_470;
    
    if (result_3 != -0x8000000000000000)
    {
        int64_t var_448;
        int64_t var_3e0_1 = var_448;
        int128_t var_458;
        int128_t var_3f0_1 = var_458;
        int128_t var_468;
        int128_t var_400_1 = var_468;
        int64_t* result_4 = result_3;
        void** var_408_1 = var_470;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hff279e0ad4a0eeac(
            &result_1, &result_4, "filesdebugThe backup suffix is '…", 5);
        char const* const rsi_3 = "filesdebugThe backup suffix is '…";
        void** const var_3d8;
        clap_builder::parser::error::MatchesError::unwrap::h99178e80da74aca8(&var_3d8, 
            "filesdebugThe backup suffix is '…", 5, &result_1);
        void** const rax_1 = var_3d8;
        char* var_3d0;
        uint128_t var_3c8;
        char const* const rcx_3;
        int64_t rdx_1;
        int128_t zmm0_2;
        uint128_t zmm1_2;
        
        if (!rax_1)
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
            int128_t var_3b8;
            zmm0_2 = var_3b8;
            char* var_3a8;
            rsi_3 = var_3a8;
            int64_t var_3a0;
            rdx_1 = var_3a0;
        }
        
        void** const var_350 = rax_1;
        char const* const var_348_1 = rcx_3;
        uint128_t var_340_1 = zmm1_2;
        int128_t var_330_1 = zmm0_2;
        char const* const var_320_1 = rsi_3;
        int64_t var_318_1 = rdx_1;
        void var_380;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h9d30ac2cc0f0b64e(&var_380, &var_350);
        int64_t var_370;
        
        if (var_370 == 1 && !
            clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
            &result_4, "target-directory/", 0x10))
        {
            var_3d8 = &uu_mv::ARG_FILES::h6d8adaf7ec2b89d6;
            int64_t (* var_3d0_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h48422eefa7f5ab42;
            result_1 = &data_584c28;
            int64_t var_470_1 = 2;
            var_458 = 0;
            var_468 = &var_3d8;
            *var_468[8] = 1;
            void var_310;
            core::option::Option$LT$T$GT$::map_or_else::hdb640919041b3b75(&var_310, &result_1);
            result_1 = clap_builder::error::Error$LT$F$GT$::format::hb9eed6f2ee7e65ff(
                clap_builder::error::Error$LT$F$GT$::raw::h04dfe7f3fdb8b31a(6, &var_310), &var_2f8);
            clap_builder::error::Error$LT$F$GT$::exit::hd8209c520a8761e9(&result_1);
            /* no return */
        }
        
        char rax_3 = uu_mv::determine_overwrite_mode::h2a7c21ee43665632(&result_4);
        uucore::features::backup_control::determine_backup_mode::h17e48f842769eb29(&result_1, 
            &result_4);
        result = result_1;
        
        if (!result)
        {
            char rbp_1 = var_470;
            char rax_4 = uucore::features::update_control::determine_update_mode::h741491f5f957cb56(
                &result_4);
            
            if (!rbp_1 || (rax_3 && !(rax_4 & 1)))
            {
                int128_t var_368;
                uucore::features::backup_control::determine_backup_suffix::h1f59e1b98a321786(
                    &var_368);
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4d9e7d247c306b7f(&result_1, &result_4, "target-directory/", 0x10);
                void* rax_6 = clap_builder::parser::error::MatchesError::unwrap::h89c82ab2bd8d6091(
                    "target-directory/", 0x10, &result_1);
                void** var_428;
                char* var_420;
                uint64_t var_418;
                int128_t var_398;
                
                if (!rax_6)
                {
                    var_428 = -0x8000000000000000;
                    label_492f94:
                    var_398 = var_368;
                    var_3c8 = var_418;
                    var_3d8 = var_428;
                    char* var_3d0_1 = var_420;
                    char rax_17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_4, "no-target-directoryverbosefilesd…", 0x13);
                    char r15_1 = 1;
                    
                    if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_4, "verbosefilesdebugThe backup suff…", 7))
                        r15_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_4, "debugThe backup suffix is '~', u…", 5);
                    
                    char rax_20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_4, "strip-trailing-slashesno-target-…", 0x16);
                    char rax_21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_4, "progress", 8);
                    char rax_22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_4, "debugThe backup suffix is '~', u…", 5);
                    *var_448[5] = rax_3;
                    *var_448[6] = rbp_1;
                    result_1 = var_398;
                    int64_t var_358;
                    var_468 = var_358;
                    *var_448[7] = rax_4;
                    var_468 = var_3d8;
                    *var_458[8] = var_3c8;
                    var_448 = rax_17;
                    *var_448[1] = r15_1;
                    *var_448[2] = rax_20;
                    *var_448[3] = rax_21;
                    *var_448[4] = rax_22;
                    void* var_378;
                    int128_t* result_2;
                    void** rdx_4;
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
                    
                    if (var_428 == -0x8000000000000000)
                        goto label_492f94;
                    
                    if (std::path::Path::is_dir::h9ac0db933706da51(var_420, var_418))
                        goto label_492f94;
                    
                    var_3d8 = 1;
                    var_3d0 = var_420;
                    *var_3c8[8] = 1;
                    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h9d67ef52ab94ff93(
                        &var_398, &var_3d8);
                    int64_t var_388;
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
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_470);
    core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h26677e3a2ea360a6(
        &var_2f8);
    return result;
}
