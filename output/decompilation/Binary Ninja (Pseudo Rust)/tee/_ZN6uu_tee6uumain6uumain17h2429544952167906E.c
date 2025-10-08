
  fn uu_tee::uumain::uumain::h2429544952167906(arg1: i64) -> u64

{
    let mut var_2f8: i64;
    uu_tee::uu_app::h27e6bdd98eaadaea(&var_2f8);
    let mut var_370: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h2da8acde3128a25d(&var_370, 
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
        &var_3a8, "appendignore-interruptsignore-pi…", 6);
    let rax_3: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_3a8, "ignore-interruptsignore-pipe-err…", 0x11);
    let r14_1: u64 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_3a8, "ignore-pipe-errorsoutput-error/h…", 0x12);
    let mut r13: u64;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
        &var_3a8, "output-error/home/34r7hm4n/.rust…", 0xc) == 0
    {
        let mut rax_8: i64;
        rax_8 = r14_1 == 0;
        r13 = rax_8 * 3 + 1;
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1a89d41e6f3305aa(
            &var_2f8, &var_3a8);
        let rax_6: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::hf7f32ab232d6922f(&var_2f8);
        r13 = 1;
        
        if rax_6 != 0
        {
            let r15_1: i64 = *rax_6.byte_offset(8);
            let r12_1: u64 = *rax_6.byte_offset(0x10);
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1c950ec8de21896f(r15_1, r12_1, "warnZero\x1b[7mBool", 4) == 0
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1c950ec8de21896f(r15_1, r12_1, "warn-nopipeexit-nopipeappendigno…", 0xb) == 0
                {
                    r13 = 2;
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1c950ec8de21896f(r15_1, r12_1, "exitERANGEEDEADLKENAMETOOLONGENO…", 4) == 0
                    {
                        r13 = 3;
                        
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1c950ec8de21896f(r15_1, r12_1, "exit-nopipeappendignore-interrup…", 0xb) == 0
                        {
                            core::panicking::panic::h85d6dd562679980c(
                                "internal error: entered unreacha…");
                            /* no return */
                        }
                    }
                }
            }
            else
            {
                r13 = 0;
            }
        }
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hc412427a058aefc8(
        &var_2f8, &var_3a8);
    let mut var_338: i64;
    clap_builder::parser::error::MatchesError::unwrap::hd8109de55e05b90b(&var_338, &var_2f8);
    let mut rax_9: i64;
    let mut rcx_4: i64;
    let mut rdx_2: i64;
    
    if var_338 == 0
    {
        rax_9 = 8;
        rcx_4 = 0;
        rdx_2 = 0;
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::hfa6ad4387addb41c(&var_2f8, &var_338);
        rcx_4 = var_2f8;
        let var_2f0: i64;
        rax_9 = var_2f0;
        let var_2e8: i64;
        rdx_2 = var_2e8;
    }
    
    let var_2e0: i8 = rax_2;
    let var_2df: i8 = rax_3;
    let var_2de: i8 = r14_1;
    var_2f8 = rcx_4;
    let var_2f0_1: i64 = rax_9;
    let var_2e8_1: i64 = rdx_2;
    let var_2dd: i8 = r13;
    let rax_10: i64 = uu_tee::tee::hf98133f44c3e9f72(&var_2f8);
    let mut result: u64;
    
    if rax_10 == 0
    {
        result = 0;
    }
    else
    {
        result = uu_tee::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h639a3aa4e0e2d2bd(rax_10);
    }
    
    core::ptr::drop_in_place$LT$uu_tee..Options$GT$::hd6d4299ff0376049(&var_2f8);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf45c1a3f8dedf8e0(&var_3a8);
    result
}
