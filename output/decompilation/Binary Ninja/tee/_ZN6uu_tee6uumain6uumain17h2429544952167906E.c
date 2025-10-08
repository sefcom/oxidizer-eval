
  uint64_t uu_tee::uumain::uumain::h2429544952167906(int64_t arg1)

{
    int64_t var_2f8;
    uu_tee::uu_app::h27e6bdd98eaadaea(&var_2f8);
    int64_t var_370;
    clap_builder::builder::command::Command::try_get_matches_from::h2da8acde3128a25d(&var_370, 
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
        &var_3a8, "appendignore-interruptsignore-pi…", 6);
    char rax_3 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_3a8, "ignore-interruptsignore-pipe-err…", 0x11);
    uint64_t r14_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_3a8, "ignore-pipe-errorsoutput-error/h…", 0x12);
    uint64_t r13;
    
    if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
        &var_3a8, "output-error/home/34r7hm4n/.rust…", 0xc))
    {
        int64_t rax_8;
        rax_8 = !r14_1;
        r13 = rax_8 * 3 + 1;
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1a89d41e6f3305aa(
            &var_2f8, &var_3a8);
        void* rax_6 =
            clap_builder::parser::error::MatchesError::unwrap::hf7f32ab232d6922f(&var_2f8);
        r13 = 1;
        
        if (rax_6)
        {
            int64_t r15_1 = *(rax_6 + 8);
            uint64_t r12_1 = *(rax_6 + 0x10);
            
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1c950ec8de21896f(r15_1, r12_1, "warnZero\x1b[7mBool", 4))
            {
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1c950ec8de21896f(r15_1, r12_1, "warn-nopipeexit-nopipeappendigno…", 0xb))
                {
                    r13 = 2;
                    
                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1c950ec8de21896f(r15_1, r12_1, "exitERANGEEDEADLKENAMETOOLONGENO…", 4))
                    {
                        r13 = 3;
                        
                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1c950ec8de21896f(r15_1, r12_1, "exit-nopipeappendignore-interrup…", 0xb))
                        {
                            core::panicking::panic::h85d6dd562679980c(
                                "internal error: entered unreacha…");
                            /* no return */
                        }
                    }
                }
            }
            else
                r13 = 0;
        }
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hc412427a058aefc8(
        &var_2f8, &var_3a8);
    int64_t var_338;
    clap_builder::parser::error::MatchesError::unwrap::hd8109de55e05b90b(&var_338, &var_2f8);
    int64_t rax_9;
    int64_t rcx_4;
    int64_t rdx_2;
    
    if (!var_338)
    {
        rax_9 = 8;
        rcx_4 = 0;
        rdx_2 = 0;
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::hfa6ad4387addb41c(&var_2f8, &var_338);
        rcx_4 = var_2f8;
        int64_t var_2f0;
        rax_9 = var_2f0;
        int64_t var_2e8;
        rdx_2 = var_2e8;
    }
    
    char var_2e0 = rax_2;
    char var_2df = rax_3;
    char var_2de = r14_1;
    var_2f8 = rcx_4;
    int64_t var_2f0_1 = rax_9;
    int64_t var_2e8_1 = rdx_2;
    char var_2dd = r13;
    int64_t rax_10 = uu_tee::tee::hf98133f44c3e9f72(&var_2f8);
    uint64_t result;
    
    if (!rax_10)
        result = 0;
    else
        result = uu_tee::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h639a3aa4e0e2d2bd(rax_10);
    
    core::ptr::drop_in_place$LT$uu_tee..Options$GT$::hd6d4299ff0376049(&var_2f8);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf45c1a3f8dedf8e0(&var_3a8);
    return result;
}
