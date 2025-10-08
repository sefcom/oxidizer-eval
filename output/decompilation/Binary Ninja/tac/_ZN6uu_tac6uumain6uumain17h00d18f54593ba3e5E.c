
  uint64_t uu_tac::uumain::uumain::h00d18f54593ba3e5(int64_t arg1)

{
    int64_t var_2f8;
    uu_tac::uu_app::h1d932b9145e33582(&var_2f8);
    int64_t var_370;
    clap_builder::builder::command::Command::try_get_matches_from::hb33f390c1f32f903(&var_370, 
        &var_2f8, arg1);
    int64_t rax = var_370;
    int64_t var_368;
    
    if (-(rax) == -0x8000000000000000)
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_368);
    
    int64_t var_340;
    int64_t var_378 = var_340;
    int128_t var_350;
    int128_t var_388 = var_350;
    int128_t var_360;
    int128_t var_398 = var_360;
    int64_t var_3a8 = rax;
    int64_t var_3a0 = var_368;
    char rax_2 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_3a8, "beforeregexseparator(uutils core…", 6);
    char rax_3 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_3a8, "regexseparator(uutils coreutils)…", 5);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h07ecadf5079fb1fb(
        &var_2f8, &var_3a8, "separator(uutils coreutils) 0.0.…", 9);
    void* rax_4 = clap_builder::parser::error::MatchesError::unwrap::h2cad080dd3b4aa35(
        "separator(uutils coreutils) 0.0.…", 9, &var_2f8);
    int64_t r14_1;
    char const* const r15;
    
    if (!rax_4)
    {
        r15 = "\nTry ' --help' for more informa…";
        r14_1 = 1;
    }
    else
    {
        r14_1 = *(rax_4 + 0x10);
        
        if (!r14_1)
            r15 = &data_451dc2[0x9f];
        else
            r15 = *(rax_4 + 8);
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h9798a6b9c8a3e4bc(
        &var_2f8, &var_3a8, "filemode{", 4);
    int64_t var_338;
    clap_builder::parser::error::MatchesError::unwrap::hc924f32e3893dfd4(&var_338, "filemode{", 4, 
        &var_2f8);
    int64_t rsi_6;
    int64_t* r12;
    
    if (!var_338)
    {
        uint64_t rax_5 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x10);
        
        if (!rax_5)
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        r12 = rax_5;
        *r12 = "-/home/34r7hm4n/.rustup/toolchai…";
        r12[1] = 1;
        var_2f8 = 1;
        int64_t* var_2f0_1 = r12;
        int64_t var_2e8_1 = 1;
        rsi_6 = 1;
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::h5c9d473316406584(&var_2f8, &var_338);
        int64_t* var_2f0;
        r12 = var_2f0;
        int64_t var_2e8;
        rsi_6 = var_2e8;
    }
    
    uint64_t result = uu_tac::tac::h53155ed94a8f718f(r12, rsi_6, rax_2, rax_3, r15, r14_1 + 0);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hb95745f1a61d8117(var_2f8, r12);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hfbc977db24e201a3(&var_3a8);
    return result;
}
