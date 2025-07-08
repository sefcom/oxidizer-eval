
  fn uu_ln::uumain::uumain::h5475cb4c432c7eac(arg1: i64) -> *mut i64

{
    let mut var_2f8: *mut *mut [i8; 0x8f] = &data_52a4a0;
    let var_2f0: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5944f03a93206169;
    let mut var_2e8: *mut *mut [i8; 0x8d] = &data_52a4b0;
    let var_2e0: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5944f03a93206169;
    let mut result_1: *mut c_void = &data_52a480;
    let var_5c0: *mut *mut c_void = 2;
    let var_5a8: i64 = 0;
    let var_5b8: *const *mut *mut [i8; 0x8f] = &var_2f8;
    let mut var_5b0: i64 = 2;
    let mut var_620: i128;
    core::option::Option$LT$T$GT$::map_or_else::hc2e95a3f0c285d88(&var_620, &result_1);
    uu_ln::uu_app::hee3aeb3cff9e1650(&result_1);
    let mut var_688: i128 = var_620;
    clap_builder::builder::command::Command::after_help::h831104ada6371e62(&var_2f8, &result_1, 
        &var_688);
    let mut var_658: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h7d1036d21dbe5f01(&var_658, 
        &var_2f8, arg1);
    let rax_1: i64 = var_658;
    let mut result: *mut i64;
    let var_650: i64;
    
    if rax_1 != -0x8000000000000000
    {
        let var_628: i64;
        let var_690_1: i64 = var_628;
        let var_638: i128;
        let var_6a0_1: i128 = var_638;
        let mut var_648: i128;
        let var_6b0_1: i128 = var_648;
        let mut var_6c0: i64 = rax_1;
        let var_6b8_1: i64 = var_650;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h7567da6ff6018093(
            &result_1, &var_6c0, "files0.0.28Make links between fi…", 5);
        clap_builder::parser::error::MatchesError::unwrap::h29b3375d9b05783f(&var_2f8, 
            "files0.0.28Make links between fi…", 5, &result_1);
        
        if var_2f8 == 0
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        let var_2c8: i128;
        let var_5d8_1: i128 = var_2c8;
        let var_2d8: i128;
        let var_5e8_1: i128 = var_2d8;
        let var_5f8_1: i128 = var_2e8;
        let mut var_608: i128 = var_2f8;
        let mut var_670: ();
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::haabc49640496de99(&var_670, &var_608);
        let rax_3: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_6c0, "symbolicEALREADYDeadlock", 8);
        let mut rbp: u64;
        rbp = 2;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_6c0, "forceinteractivelogicalno-target…", 5) == 0
        {
            rbp =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_6c0, "interactivelogicalno-target-dire…", 0xb);
        }
        
        uucore::features::backup_control::determine_backup_mode::h17e48f842769eb29(&result_1, 
            &var_6c0);
        result = result_1;
        
        if result == 0
        {
            let r13_1: i8 = var_5c0;
            uucore::features::backup_control::determine_backup_suffix::h1f59e1b98a321786(&var_688);
            let rax_6: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_6c0, "logicalno-target-directoryno-der…", 7);
            let var_610: i64;
            var_648 = var_610;
            var_658 = var_688;
            let rax_8: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_6c0, "relative\n       extern "", 8);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hccd1d72a460aa9fd(
                &result_1, &var_6c0);
            let rax_9: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::hc7b004a6e617f976(&data_415770, 
                0x10, &result_1);
            let mut r14_2: i8;
            
            if rax_9 == 0
            {
                r14_2 = r13_1;
                var_2f8 = -0x8000000000000000;
            }
            else
            {
                core::ops::function::FnOnce::call_once::h4fd7f80f9ff1a73b(&result_1, rax_9);
                r14_2 = r13_1;
                var_2e8 = var_5b8;
                var_2f8 = result_1;
            }
            
            let rax_11: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_6c0, "no-target-directoryno-dereferenc…", 0x13);
            let rax_12: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_6c0, "no-dereferenceverboseUnknownErrn…", 0xe);
            let rax_13: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_6c0, "verboseUnknownErrnoEPERMENOENTES…", 7);
            let var_592_1: i8 = rbp;
            let var_591_1: i8 = r14_2;
            result_1 = var_658;
            let var_5b8_1: i64 = var_648;
            let var_598_1: i8 = rax_3;
            let var_597_1: i8 = rax_8;
            let var_596_1: i8 = rax_6;
            var_5b0 = var_2f8;
            let var_5a0_1: *mut *mut [i8; 0x8d] = var_2e8;
            let var_595_1: i8 = rax_11;
            let var_594_1: i8 = rax_12;
            let var_593_1: i8 = rax_13;
            let var_668: *mut c_void;
            let var_660: i64;
            let mut result_2: *mut i128;
            let mut rdx_4: *mut *mut c_void;
            result_2 = uu_ln::exec::h2656b7f7ed388dfd(var_668, var_660, &result_1);
            result = result_2;
            core::ptr::drop_in_place$LT$uu_ln..Settings$GT$::h3dd3a774a2577456(&result_1);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h294cc071978b4a3b(&var_670);
        }
        else
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h294cc071978b4a3b(&var_670);
        }
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6690b14de27b6f17(&var_6c0);
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_650);
    }
    result
}
