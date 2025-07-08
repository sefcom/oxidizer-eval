
  fn uu_tac::uumain::uumain::h2485790ee37c4198(arg1: i64) -> *mut i128

{
    let mut var_2f8: ();
    uu_tac::uu_app::h578904e159ae3f9f(&var_2f8);
    let mut var_378: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h4ad0fc13a933eb50(&var_378, 
        &var_2f8, arg1);
    let rax: i64 = var_378;
    let var_370: i64;
    
    if rax == -0x8000000000000000
    {
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_370);
    }
    
    let var_348: i64;
    let var_380: i64 = var_348;
    let var_358: i128;
    let var_390: i128 = var_358;
    let var_368: i128;
    let var_3a0: i128 = var_368;
    let mut var_3b0: i64 = rax;
    let var_3a8: i64 = var_370;
    let rax_2: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_3b0, "beforeregexseparator", 6);
    let rax_3: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_3b0, "regexseparator", 5);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb332f6936fb5da9f(
        &var_2f8, &var_3b0, "separator", 9);
    let rax_4: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::he549b6506d706f45(
        "separator", 9, &var_2f8);
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
            r15 = &data_463c02[0x9f];
        }
        else
        {
            r15 = *rax_4.byte_offset(8);
        }
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h6b583678377047fe(
        &var_2f8, &var_3b0, "filemode{", 4);
    clap_builder::parser::error::MatchesError::unwrap::hbb9b448b81998103(&var_378, "filemode{", 4, 
        &var_2f8);
    
    if var_378 == 0
    {
        let rax_5: *mut *mut c_void = alloc::alloc::Global::alloc_impl::hf61749d460433fff();
        
        if rax_5 == 0
        {
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
            /* no return */
        }
        
        *rax_5 = &data_463ca2;
        rax_5[1] = 1;
        alloc::slice::hack::into_vec::h3dd85526ca90bde5(&var_2f8, rax_5, 1);
    }
    else
    {
        let var_308_1: i128 = var_348;
        let var_318_1: i128 = var_358;
        let var_328_1: i128 = var_368;
        let mut var_338: i128 = var_378;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h72f0db188805d051(&var_2f8, &var_338);
    }
    
    let var_2f0: i64;
    let var_2e8: i64;
    let result: *mut i128 =
        uu_tac::tac::h3cfa8e66554e074d(var_2f0, var_2e8, rax_2, rax_3, r15, r14_1 + 0);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h3b403ca4fc6daa2d(&var_2f8);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf06510748f9f349f(&var_3b0);
    result
}
