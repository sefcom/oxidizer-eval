
  fn uu_pathchk::uumain::uumain::ha865b54404696b2a(arg1: i64) -> u64

{
    let mut var_2f8: i128;
    uu_pathchk::uu_app::hcf6bb8f6c69b5fe1(&var_2f8);
    let mut var_3e8: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h91d48215402f156d(&var_3e8, 
        &var_2f8, arg1);
    let rax: i64 = var_3e8;
    let var_3e0: i64;
    
    if -(rax) == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3e0);
    }
    
    let mut var_3b8: i64;
    let var_370_1: i64 = var_3b8;
    let var_3c8: i128;
    let var_380_1: i128 = var_3c8;
    let var_3d8: i128;
    let var_390_1: i128 = var_3d8;
    let mut var_3a0: i64 = rax;
    let var_398_1: i64 = var_3e0;
    let rax_2: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_3a0, "posixposix-specialportability", 5);
    let rax_3: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_3a0, "posix-specialportability", 0xd);
    let rax_4: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_3a0, "portability", 0xb);
    let mut rcx_4: i8 = rax_3 * 2;
    
    if rax_4 != 0
    {
        rcx_4 = 3;
    }
    
    let mut rax_5: i8 = rax_4 * 2 + 1;
    
    if rax_3 != 0
    {
        rax_5 = 3;
    }
    
    if rax_2 == 0
    {
        rax_5 = rcx_4;
    }
    
    let mut var_401: i8 = rax_5;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hd77336760d159f4b(
        &var_2f8, &var_3a0);
    let mut var_338: i64;
    clap_builder::parser::error::MatchesError::unwrap::he1c77c60a7d9017c(&var_338, &var_2f8);
    let mut var_2e8: i64;
    
    if var_338 == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h03438f36a34a2f67(&var_3e8, "missing operandposixposix-specia…", 0xf);
        var_2e8 = var_3d8;
        var_2f8 = var_3e8;
        let var_2e0_1: i32 = 1;
        let result: u64 = alloc::boxed::Box$LT$T$GT$::new::h4c140981458fd33f(&var_2f8);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h58206ca2068824bf(&var_3a0);
        return result;
    }
    
    let var_308: i128;
    var_3b8 = var_308;
    let var_318: i128;
    let var_3c8_1: i128 = var_318;
    let var_328: i128;
    let var_3d8_1: i128 = var_328;
    var_3e8 = var_338;
    let mut r14_1: i8 = 1;
    
    loop
    {
        let rax_6: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::heb84bf0f2da2d516(&var_3e8);
        
        if rax_6 == 0
        {
            break;
        }
        
        let mut var_400: i64 = 0;
        let var_3f8_1: *mut c_void = 8;
        let var_3f0_1: i64 = 0;
        let r12_1: i64 = *rax_6.byte_offset(0x10);
        _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(
            &var_2e8, *rax_6.byte_offset(8), r12_1);
        var_2f8 = 0;
        *var_2f8[8] = r12_1;
        let var_2b8_1: i16 = 1;
        
        loop
        {
            let mut rax_7: i64;
            let mut rdx_2: u64;
            rax_7 = core::str::iter::SplitInternal$LT$P$GT$::next::h7d4b2239e319dfa0(&var_2f8);
            
            if rax_7 == 0
            {
                break;
            }
            
            let mut var_350: i128;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h03438f36a34a2f67(&var_350, rax_7, rdx_2);
            let var_340: i64;
            let var_358_1: i64 = var_340;
            let mut var_368: i128 = var_350;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h397790ff523f9e2c(&var_400, &var_368);
        }
        
        let rax_9: i8 = uu_pathchk::check_path::h3260b82c8fbc03b6(&var_401, var_3f8_1, var_3f0_1);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hd87479fcf43cf10e(&var_400);
        r14_1 &= rax_9;
    }
    
    if (r14_1 & 1) == 0
    {
        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h58206ca2068824bf(&var_3a0);
    0
}
