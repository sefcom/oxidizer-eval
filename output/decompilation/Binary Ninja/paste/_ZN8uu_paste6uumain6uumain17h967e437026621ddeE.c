
  int64_t* uu_paste::uumain::uumain::h967e437026621dde(int64_t arg1)

{
    int128_t var_2e8;
    uu_paste::uu_app::h87aafd5fcd701ee2(&var_2e8);
    int64_t var_3a0;
    clap_builder::builder::command::Command::try_get_matches_from::h432ea8e08ddeef92(&var_3a0, 
        &var_2e8, arg1);
    int64_t rax = var_3a0;
    int64_t var_398;
    
    if (rax == -0x8000000000000000)
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_398);
    
    int64_t var_370;
    int64_t var_330 = var_370;
    int128_t var_380;
    int128_t var_340 = var_380;
    int128_t var_390;
    int128_t var_350 = var_390;
    int64_t var_360 = rax;
    int64_t var_358 = var_398;
    char rax_2 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_360, "serialzero-terminatedMismatch be…", 6);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h57227010f103cd0d(
        &var_2e8, &var_360, "delimitersserialzero-terminatedM…", 0xa);
    void* rax_3 = clap_builder::parser::error::MatchesError::unwrap::h0991818dee6e6288(
        "delimitersserialzero-terminatedM…", 0xa, &var_2e8);
    
    if (rax_3)
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hc81f2305348f416f(
            &var_2e8, &var_360, "filei128 as dyn ERANGEEDEADLKENA…", 4);
        clap_builder::parser::error::MatchesError::unwrap::h7e58b49d533eae37(&var_3a0, 
            "filei128 as dyn ERANGEEDEADLKENA…", 4, &var_2e8);
        
        if (var_3a0)
        {
            int128_t var_2f8 = var_370;
            int128_t var_308 = var_380;
            int128_t var_318 = var_390;
            int128_t var_328 = var_3a0;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h752fd5cc24101cd6(&var_3a0, &var_328);
            char rax_4 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_360, "zero-terminatedMismatch between …", 0xf);
            int64_t var_2d8 = var_390;
            var_2e8 = var_3a0;
            char r8_1 = 0xa;
            
            if (rax_4)
                r8_1 = 0;
            
            int64_t* result;
            int64_t rdx_4;
            result = uu_paste::paste::he585c60ea6ad59b1(&var_2e8, rax_2, *(rax_3 + 8), 
                *(rax_3 + 0x10), r8_1);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hcb2544864fe14ef9(&var_360);
            return result;
        }
    }
    
    core::option::unwrap_failed::h0e11329e76906eaa();
    /* no return */
}
