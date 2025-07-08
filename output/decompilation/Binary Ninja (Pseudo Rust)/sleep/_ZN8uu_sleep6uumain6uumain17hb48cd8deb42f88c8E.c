
  fn uu_sleep::uumain::uumain::hb48cd8deb42f88c8(arg1: i64) -> *mut i64

{
    let mut var_2e0: ();
    uu_sleep::uu_app::h7f221250c3adad43(&var_2e0);
    let mut var_398: i64;
    clap_builder::builder::command::Command::try_get_matches_from::hbd40256cc2cf125e(&var_398, 
        &var_2e0, arg1);
    let rax: i64 = var_398;
    let mut result: *mut i64;
    let var_390: i64;
    
    if rax != -0x8000000000000000
    {
        let var_368: i64;
        let var_328_1: i64 = var_368;
        let var_378: i128;
        let var_338_1: i128 = var_378;
        let var_388: i128;
        let var_348_1: i128 = var_388;
        let mut var_358: i64 = rax;
        let var_350_1: i64 = var_390;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hf38ba5ff74f42866(
            &var_2e0, &var_358, "NUMBERmissing operand\nTry ' --h…", 6);
        clap_builder::parser::error::MatchesError::unwrap::hea6b78228c129aa9(&var_398, 
            "NUMBERmissing operand\nTry ' --h…", 6, &var_2e0);
        let rax_2: i64 = var_398;
        
        if rax_2 == 0
        {
            result = uu_sleep::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h73c29d1253cb1db0();
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc32700fa5920fcdd(&var_358);
        }
        else
        {
            let var_360: i64;
            let var_2e8_1: i64 = var_360;
            let var_2f8_1: i128 = var_378;
            let var_308_1: i128 = var_388;
            let mut var_320: i64 = rax_2;
            let var_318_1: i128 = var_390;
            let mut var_3b0: ();
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h0792a09e5940ffc1(&var_3b0, &var_320);
            let var_3a8: *mut i64;
            let var_3a0: i64;
            result = uu_sleep::sleep::h137a23986a4540a5(var_3a8, var_3a0);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h46204c2f7a452ad4(
                &var_3b0);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc32700fa5920fcdd(&var_358);
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_390);
    }
    result
}
