
  int64_t* uu_tee::uumain::uumain::h4f24f17b635a96b5(int64_t arg1)

{
    int128_t var_2e8;
    uu_tee::uu_app::hd12bc0652bb3e89d(&var_2e8);
    int64_t var_340;
    clap_builder::builder::command::Command::try_get_matches_from::h11c1e228193462c3(&var_340, 
        &var_2e8, arg1);
    int64_t rax = var_340;
    int64_t* result;
    int64_t var_338;
    
    if (rax != -0x8000000000000000)
    {
        int64_t var_310;
        int64_t var_348_1 = var_310;
        int128_t var_320;
        int128_t var_358_1 = var_320;
        int128_t var_330;
        int128_t var_368_1 = var_330;
        int64_t var_378 = rax;
        int64_t var_370_1 = var_338;
        char rax_2 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_378, "appendignore-interruptsignore-pi…", 6);
        char rax_3 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_378, "ignore-interruptsignore-pipe-err…", 0x11);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h5619aa58ea2d0a49(
            &var_2e8, &var_378);
        clap_builder::parser::error::MatchesError::unwrap::h12e60ca066924c5f(&var_340, 
            "filei128 as dyn exitERANGEEDEADL…", 4, &var_2e8);
        int64_t var_390_1;
        int64_t var_380;
        int128_t var_2d8;
        
        if (!var_340)
        {
            var_390_1 = 0;
            int64_t var_388_1 = 8;
            var_380 = 0;
        }
        else
        {
            int128_t var_2b8_1 = var_310;
            int128_t var_2c8_1 = var_320;
            var_2d8 = var_330;
            var_2e8 = var_340;
            int64_t var_300;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h4a98ffca8b57971d(&var_300, &var_2e8);
            int64_t var_388;
            int128_t var_2f8;
            var_388 = var_2f8;
            var_390_1 = var_300;
        }
        
        char rcx_3;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_378, "ignore-pipe-errors", 0x12))
        {
            rcx_3 = 4;
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&var_378, "output-errorwarn-nopipeexit-nopi…", 0xc))
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::had8f468e20909500(&var_2e8, &var_378);
                void* rax_7 = clap_builder::parser::error::MatchesError::unwrap::h5d8204b5c404fdee(
                    "output-errorwarn-nopipeexit-nopi…", 0xc, &var_2e8);
                
                if (!rax_7)
                    rcx_3 = 1;
                else
                {
                    int64_t r14_1 = *(rax_7 + 8);
                    int128_t* r15 = *(rax_7 + 0x10);
                    
                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf4afa01266150c3c(r14_1, r15, "warnZero\x1b[7m", 4))
                    {
                        rcx_3 = 1;
                        
                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf4afa01266150c3c(r14_1, r15, "warn-nopipeexit-nopipeappendigno…", 0xb))
                        {
                            rcx_3 = 2;
                            
                            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf4afa01266150c3c(r14_1, r15, "exitERANGEEDEADLKENAMETOOLONGENO…", 4))
                            {
                                rcx_3 = 3;
                                
                                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf4afa01266150c3c(r14_1, r15, "exit-nopipeappendignore-interrup…", 0xb))
                                {
                                    core::panicking::panic::h8c3a660c3523e4a4(
                                        "internal error: entered unreacha…");
                                    /* no return */
                                }
                            }
                        }
                    }
                    else
                        rcx_3 = 0;
                }
            }
        }
        else
            rcx_3 = 1;
        
        *var_2d8[8] = rax_2;
        *var_2d8[9] = rax_3;
        var_2e8 = var_390_1;
        var_2d8 = var_380;
        *var_2d8[0xa] = rcx_3;
        int64_t rax_13 = uu_tee::tee::hda7657f7329b70fc(&var_2e8);
        
        if (!rax_13)
            result = nullptr;
        else
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1);
        
        core::ptr::drop_in_place$LT$uu_tee..Options$GT$::h96fa9444c1876fc5(&var_2e8);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h706c76a15fabed08(&var_378);
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc4231765db700f47(rax_13);
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_338);
    return result;
}
