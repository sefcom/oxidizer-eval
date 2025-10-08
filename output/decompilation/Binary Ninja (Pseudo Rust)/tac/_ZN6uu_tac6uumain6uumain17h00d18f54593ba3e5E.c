
  fn uu_tac::uumain::uumain::h00d18f54593ba3e5(arg1: i64) -> u64

{
    let mut var_2f8: i64;
    uu_tac::uu_app::h1d932b9145e33582(&var_2f8);
    let mut var_370: i64;
    clap_builder::builder::command::Command::try_get_matches_from::hb33f390c1f32f903(&var_370, 
        &var_2f8, arg1);
    let rax: i64 = var_370;
    let var_368: i64;
    
    if -(rax) == -0x8000000000000000
    {
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_368);
    }
    
    let var_340: i64;
    let var_378: i64 = var_340;
    let var_350: i128;
    let var_388: i128 = var_350;
    let var_360: i128;
    let var_398: i128 = var_360;
    let mut var_3a8: i64 = rax;
    let var_3a0: i64 = var_368;
    let rax_2: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_3a8, "beforeregexseparator(uutils core…", 6);
    let rax_3: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_3a8, "regexseparator(uutils coreutils)…", 5);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h07ecadf5079fb1fb(
        &var_2f8, &var_3a8, "separator(uutils coreutils) 0.0.…", 9);
    let rax_4: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h2cad080dd3b4aa35(
        "separator(uutils coreutils) 0.0.…", 9, &var_2f8);
    let mut r14_1: i64;
    let mut r15: *const i8;
    
    if rax_4 == 0
    {
        r15 = "\nTry ' --help' for more informa…";
        r14_1 = 1;
    }
    else
    {
        r14_1 = *rax_4.byte_offset(0x10);
        
        if r14_1 == 0
        {
            r15 = &data_451dc2[0x9f];
        }
        else
        {
            r15 = *rax_4.byte_offset(8);
        }
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h9798a6b9c8a3e4bc(
        &var_2f8, &var_3a8, "filemode{", 4);
    let mut var_338: i64;
    clap_builder::parser::error::MatchesError::unwrap::hc924f32e3893dfd4(&var_338, "filemode{", 4, 
        &var_2f8);
    let mut rsi_6: i64;
    let mut r12: *mut i64;
    
    if var_338 == 0
    {
        let rax_5: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x10);
        
        if rax_5 == 0
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        r12 = rax_5;
        *r12 = "-/home/34r7hm4n/.rustup/toolchai…";
        r12[1] = 1;
        var_2f8 = 1;
        let var_2f0_1: *mut i64 = r12;
        let var_2e8_1: i64 = 1;
        rsi_6 = 1;
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::h5c9d473316406584(&var_2f8, &var_338);
        let var_2f0: *mut i64;
        r12 = var_2f0;
        let var_2e8: i64;
        rsi_6 = var_2e8;
    }
    
    let result: u64 = uu_tac::tac::h53155ed94a8f718f(r12, rsi_6, rax_2, rax_3, r15, r14_1 + 0);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hb95745f1a61d8117(var_2f8, r12);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hfbc977db24e201a3(&var_3a8);
    result
}
