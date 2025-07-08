
  fn uu_paste::uumain::uumain::h967e437026621dde(arg1: i64) -> *mut i64

{
    let mut var_2e8: i128;
    uu_paste::uu_app::h87aafd5fcd701ee2(&var_2e8);
    let mut var_3a0: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h432ea8e08ddeef92(&var_3a0, 
        &var_2e8, arg1);
    let rax: i64 = var_3a0;
    let var_398: i64;
    
    if rax == -0x8000000000000000
    {
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_398);
    }
    
    let var_370: i64;
    let var_330: i64 = var_370;
    let var_380: i128;
    let var_340: i128 = var_380;
    let var_390: i128;
    let var_350: i128 = var_390;
    let mut var_360: i64 = rax;
    let var_358: i64 = var_398;
    let rax_2: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_360, "serialzero-terminatedMismatch be…", 6);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h57227010f103cd0d(
        &var_2e8, &var_360, "delimitersserialzero-terminatedM…", 0xa);
    let rax_3: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h0991818dee6e6288(
        "delimitersserialzero-terminatedM…", 0xa, &var_2e8);
    
    if rax_3 != 0
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hc81f2305348f416f(
            &var_2e8, &var_360, "filei128 as dyn ERANGEEDEADLKENA…", 4);
        clap_builder::parser::error::MatchesError::unwrap::h7e58b49d533eae37(&var_3a0, 
            "filei128 as dyn ERANGEEDEADLKENA…", 4, &var_2e8);
        
        if var_3a0 != 0
        {
            let var_2f8: i128 = var_370;
            let var_308: i128 = var_380;
            let var_318: i128 = var_390;
            let mut var_328: i128 = var_3a0;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h752fd5cc24101cd6(&var_3a0, &var_328);
            let rax_4: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_360, "zero-terminatedMismatch between …", 0xf);
            let var_2d8: i64 = var_390;
            var_2e8 = var_3a0;
            let mut r8_1: i8 = 0xa;
            
            if rax_4 != 0
            {
                r8_1 = 0;
            }
            
            let mut result: *mut i64;
            let mut rdx_4: i64;
            result = uu_paste::paste::he585c60ea6ad59b1(&var_2e8, rax_2, *rax_3.byte_offset(8), 
                *rax_3.byte_offset(0x10), r8_1);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hcb2544864fe14ef9(&var_360);
            return result;
        }
    }
    
    core::option::unwrap_failed::h0e11329e76906eaa();
    /* no return */
}
