
  int64_t* uu_ln::uumain::uumain::h5475cb4c432c7eac(int64_t arg1)

{
    char const (** const var_2f8)[0x8f] = &data_52a4a0;
    int64_t (* var_2f0)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5944f03a93206169;
    char const (** const var_2e8)[0x8d] = &data_52a4b0;
    int64_t (* var_2e0)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5944f03a93206169;
    void* const result_1 = &data_52a480;
    void** var_5c0 = 2;
    int64_t var_5a8 = 0;
    char const (** const* var_5b8)[0x8f] = &var_2f8;
    int64_t var_5b0 = 2;
    int128_t var_620;
    core::option::Option$LT$T$GT$::map_or_else::hc2e95a3f0c285d88(&var_620, &result_1);
    uu_ln::uu_app::hee3aeb3cff9e1650(&result_1);
    int128_t var_688 = var_620;
    clap_builder::builder::command::Command::after_help::h831104ada6371e62(&var_2f8, &result_1, 
        &var_688);
    int64_t var_658;
    clap_builder::builder::command::Command::try_get_matches_from::h7d1036d21dbe5f01(&var_658, 
        &var_2f8, arg1);
    int64_t rax_1 = var_658;
    int64_t* result;
    int64_t var_650;
    
    if (rax_1 != -0x8000000000000000)
    {
        int64_t var_628;
        int64_t var_690_1 = var_628;
        int128_t var_638;
        int128_t var_6a0_1 = var_638;
        int128_t var_648;
        int128_t var_6b0_1 = var_648;
        int64_t var_6c0 = rax_1;
        int64_t var_6b8_1 = var_650;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h7567da6ff6018093(
            &result_1, &var_6c0, "files0.0.28Make links between fi…", 5);
        clap_builder::parser::error::MatchesError::unwrap::h29b3375d9b05783f(&var_2f8, 
            "files0.0.28Make links between fi…", 5, &result_1);
        
        if (!var_2f8)
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        int128_t var_2c8;
        int128_t var_5d8_1 = var_2c8;
        int128_t var_2d8;
        int128_t var_5e8_1 = var_2d8;
        int128_t var_5f8_1 = var_2e8;
        int128_t var_608 = var_2f8;
        void var_670;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::haabc49640496de99(&var_670, &var_608);
        char rax_3 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_6c0, "symbolicEALREADYDeadlock", 8);
        uint64_t rbp;
        rbp = 2;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_6c0, "forceinteractivelogicalno-target…", 5))
            rbp =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_6c0, "interactivelogicalno-target-dire…", 0xb);
        
        uucore::features::backup_control::determine_backup_mode::h17e48f842769eb29(&result_1, 
            &var_6c0);
        result = result_1;
        
        if (!result)
        {
            char r13_1 = var_5c0;
            uucore::features::backup_control::determine_backup_suffix::h1f59e1b98a321786(&var_688);
            char rax_6 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_6c0, "logicalno-target-directoryno-der…", 7);
            int64_t var_610;
            var_648 = var_610;
            var_658 = var_688;
            char rax_8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_6c0, "relative\n       extern "", 8);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hccd1d72a460aa9fd(
                &result_1, &var_6c0);
            void* rax_9 = clap_builder::parser::error::MatchesError::unwrap::hc7b004a6e617f976(
                &data_415770, 0x10, &result_1);
            char r14_2;
            
            if (!rax_9)
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
            
            char rax_11 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_6c0, "no-target-directoryno-dereferenc…", 0x13);
            char rax_12 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_6c0, "no-dereferenceverboseUnknownErrn…", 0xe);
            char rax_13 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_6c0, "verboseUnknownErrnoEPERMENOENTES…", 7);
            char var_592_1 = rbp;
            char var_591_1 = r14_2;
            result_1 = var_658;
            int64_t var_5b8_1 = var_648;
            char var_598_1 = rax_3;
            char var_597_1 = rax_8;
            char var_596_1 = rax_6;
            var_5b0 = var_2f8;
            char const (** const var_5a0_1)[0x8d] = var_2e8;
            char var_595_1 = rax_11;
            char var_594_1 = rax_12;
            char var_593_1 = rax_13;
            void* var_668;
            int64_t var_660;
            int128_t* result_2;
            void** rdx_4;
            result_2 = uu_ln::exec::h2656b7f7ed388dfd(var_668, var_660, &result_1);
            result = result_2;
            core::ptr::drop_in_place$LT$uu_ln..Settings$GT$::h3dd3a774a2577456(&result_1);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h294cc071978b4a3b(&var_670);
        }
        else
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h294cc071978b4a3b(&var_670);
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6690b14de27b6f17(&var_6c0);
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_650);
    return result;
}
