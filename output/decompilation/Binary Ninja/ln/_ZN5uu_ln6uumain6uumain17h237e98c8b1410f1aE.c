
  uint64_t uu_ln::uumain::uumain::h237e98c8b1410f1a(int64_t arg1)

{
    void** const var_2f8 = &data_4f5368;
    int64_t (* var_2f0)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfedf867e57905b82;
    void** const var_2e8 = &data_4f5358;
    int64_t (* var_2e0)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfedf867e57905b82;
    void* const var_5c8 = &data_4f5338;
    int64_t var_5c0 = 2;
    int64_t var_5a8 = 0;
    void** const* var_5b8 = &var_2f8;
    int64_t var_5b0 = 2;
    int64_t var_610;
    core::option::Option$LT$T$GT$::map_or_else::h207e5051dee6a304(&var_610, &var_5c8);
    int64_t r12 = var_610;
    uu_ln::uu_app::h0c67f180ed7e66cd(&var_5c8);
    int64_t var_660 = r12;
    void* var_608;
    void* var_658 = var_608;
    int64_t var_600;
    int64_t var_650 = var_600;
    clap_builder::builder::command::Command::after_help::h1a6be304857a8d78(&var_2f8, &var_5c8, 
        &var_660);
    clap_builder::builder::command::Command::try_get_matches_from::hfc5f8aabf8161828(&var_610, 
        &var_2f8, arg1);
    int64_t rax = var_610;
    
    if (-(rax) == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_608);
    
    int64_t var_5e0;
    int64_t var_630_1 = var_5e0;
    int128_t var_5f0;
    int128_t var_640_1 = var_5f0;
    var_650 = var_600;
    var_660 = rax;
    void* var_658_1 = var_608;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h828f975611655f0a(
        &var_5c8, &var_660, "files(uutils coreutils) 0.0.30Ma…", 5);
    clap_builder::parser::error::MatchesError::unwrap::h2818f91298ce3b9b(&var_2f8, 
        "files(uutils coreutils) 0.0.30Ma…", 5, &var_5c8);
    
    if (!var_2f8)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    int128_t var_2c8;
    int128_t var_598_1 = var_2c8;
    int128_t var_2d8;
    var_5a8 = var_2d8;
    var_5b8 = var_2e8;
    var_5c8 = var_2f8;
    core::iter::traits::iterator::Iterator::collect::h922a1525a955c894(&var_610, &var_5c8);
    char rax_2 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_660, "symbolicEALREADY", 8);
    uint64_t rbp;
    rbp = 2;
    
    if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_660, "forceinteractivelogicalno-target…", 5))
        rbp = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_660, "interactivelogicalno-target-dire…", 0xb);
    
    uucore::features::backup_control::determine_backup_mode::h09b58a9d9bda0a55(&var_5c8, &var_660);
    uint64_t rax_5 = var_5c8;
    
    if (rax_5)
    {
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h0614d0a0d1fcd107(&var_610);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6e0c8a0734477b0f(&var_660);
        return rax_5;
    }
    
    uucore::features::backup_control::determine_backup_suffix::ha7b1c82b4746605a(&var_2f8);
    char rax_6 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_660, "logicalno-target-directoryno-der…", 7);
    void* var_620_1 = var_2f8;
    char rax_8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_660, "relative\n       extern "ENOTUNI…", 8);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h690e6533f902407a(
        &var_5c8, &var_660);
    void* rax_9 = clap_builder::parser::error::MatchesError::unwrap::hb94073c9cdcfebbe(&var_5c8);
    int64_t var_628;
    void** const* var_5d8;
    void* const r15_2;
    
    if (!rax_9)
        r15_2 = -0x8000000000000000;
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_5c8, rax_9);
        r15_2 = var_5c8;
        var_628 = var_5c0;
        var_5d8 = var_5b8;
    }
    
    char rax_12 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_660, "no-target-directoryno-dereferenc…", 0x13);
    char rax_13 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_660, "no-dereferenceverboseUnknownErrn…", 0xe);
    char rax_14 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_660, "verboseUnknownErrnoEPERMENOENTES…", 7);
    *var_598_1[6] = rbp;
    *var_598_1[7] = var_5c0;
    var_5c8 = var_620_1;
    int64_t (* var_5c0_1)(int64_t* arg1, int64_t arg2) = var_2f0;
    void** const var_5b8_1 = var_2e8;
    var_598_1 = rax_2;
    *var_598_1[1] = rax_8;
    *var_598_1[2] = rax_6;
    void* const var_5b0_1 = r15_2;
    int64_t var_5a8_1 = var_628;
    void** const* var_5a0_1 = var_5d8;
    *var_598_1[3] = rax_12;
    *var_598_1[4] = rax_13;
    *var_598_1[5] = rax_14;
    uint64_t rax_15;
    int64_t rdx_4;
    rax_15 = uu_ln::exec::h58832f6de7ace9b1(var_608, var_600, &var_5c8);
    core::ptr::drop_in_place$LT$uu_ln..Settings$GT$::hb0ac19b1e41297f8(&var_5c8);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h0614d0a0d1fcd107(
        &var_610);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6e0c8a0734477b0f(&var_660);
    return rax_15;
}
