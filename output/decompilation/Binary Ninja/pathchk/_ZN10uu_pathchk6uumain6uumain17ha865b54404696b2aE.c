
  uint64_t uu_pathchk::uumain::uumain::ha865b54404696b2a(int64_t arg1)

{
    int128_t var_2f8;
    uu_pathchk::uu_app::hcf6bb8f6c69b5fe1(&var_2f8);
    int64_t var_3e8;
    clap_builder::builder::command::Command::try_get_matches_from::h91d48215402f156d(&var_3e8, 
        &var_2f8, arg1);
    int64_t rax = var_3e8;
    int64_t var_3e0;
    
    if (-(rax) == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3e0);
    
    int64_t var_3b8;
    int64_t var_370_1 = var_3b8;
    int128_t var_3c8;
    int128_t var_380_1 = var_3c8;
    int128_t var_3d8;
    int128_t var_390_1 = var_3d8;
    int64_t var_3a0 = rax;
    int64_t var_398_1 = var_3e0;
    char rax_2 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_3a0, "posixposix-specialportability", 5);
    char rax_3 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_3a0, "posix-specialportability", 0xd);
    char rax_4 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_3a0, "portability", 0xb);
    char rcx_4 = rax_3 * 2;
    
    if (rax_4)
        rcx_4 = 3;
    
    char rax_5 = rax_4 * 2 + 1;
    
    if (rax_3)
        rax_5 = 3;
    
    if (!rax_2)
        rax_5 = rcx_4;
    
    char var_401 = rax_5;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hd77336760d159f4b(
        &var_2f8, &var_3a0);
    int64_t var_338;
    clap_builder::parser::error::MatchesError::unwrap::he1c77c60a7d9017c(&var_338, &var_2f8);
    int64_t var_2e8;
    
    if (!var_338)
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h03438f36a34a2f67(&var_3e8, "missing operandposixposix-specia…", 0xf);
        var_2e8 = var_3d8;
        var_2f8 = var_3e8;
        int32_t var_2e0_1 = 1;
        uint64_t result = alloc::boxed::Box$LT$T$GT$::new::h4c140981458fd33f(&var_2f8);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h58206ca2068824bf(&var_3a0);
        return result;
    }
    
    int128_t var_308;
    var_3b8 = var_308;
    int128_t var_318;
    int128_t var_3c8_1 = var_318;
    int128_t var_328;
    int128_t var_3d8_1 = var_328;
    var_3e8 = var_338;
    char r14_1 = 1;
    
    while (true)
    {
        void* rax_6 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::heb84bf0f2da2d516(&var_3e8);
        
        if (!rax_6)
            break;
        
        int64_t var_400 = 0;
        void* var_3f8_1 = 8;
        int64_t var_3f0_1 = 0;
        int64_t r12_1 = *(rax_6 + 0x10);
        _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(
            &var_2e8, *(rax_6 + 8), r12_1);
        var_2f8 = 0;
        *var_2f8[8] = r12_1;
        int16_t var_2b8_1 = 1;
        
        while (true)
        {
            int64_t rax_7;
            uint64_t rdx_2;
            rax_7 = core::str::iter::SplitInternal$LT$P$GT$::next::h7d4b2239e319dfa0(&var_2f8);
            
            if (!rax_7)
                break;
            
            int128_t var_350;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h03438f36a34a2f67(&var_350, rax_7, rdx_2);
            int64_t var_340;
            int64_t var_358_1 = var_340;
            int128_t var_368 = var_350;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h397790ff523f9e2c(&var_400, &var_368);
        }
        
        char rax_9 = uu_pathchk::check_path::h3260b82c8fbc03b6(&var_401, var_3f8_1, var_3f0_1);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hd87479fcf43cf10e(&var_400);
        r14_1 &= rax_9;
    }
    
    if (!(r14_1 & 1))
        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h58206ca2068824bf(&var_3a0);
    return 0;
}
