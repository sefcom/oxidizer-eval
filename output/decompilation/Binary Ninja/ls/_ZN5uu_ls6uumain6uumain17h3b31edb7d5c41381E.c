
  uint64_t uu_ls::uumain::uumain::h3b31edb7d5c41381(int64_t arg1)

{
    void var_2e0;
    uu_ls::uu_app::h9a6b851284402e3c(&var_2e0);
    uint64_t result_6;
    clap_builder::builder::command::Command::try_get_matches_from::h685e70cbec1a8c5d(&result_6, 
        &var_2e0, arg1);
    uint64_t result;
    uint64_t result_5;
    uint64_t result_1;
    uint64_t result_8;
    int32_t var_410;
    
    if (!(0 + -(result_6)))
    {
        int64_t var_508;
        int64_t var_578_1 = var_508;
        int128_t var_518;
        int128_t var_588_1 = var_518;
        int128_t var_528;
        int128_t var_598_1 = var_528;
        int128_t var_5a8 = result_6;
        uu_ls::Config::from::h82af185516eb5913(&result_6, &var_5a8);
        uint64_t result_7 = result_6;
        result = result_1;
        void** const r14_1 = var_528;
        
        if (result_7 != -0x8000000000000000)
        {
            memcpy(&var_410, &*var_528[8], 0xf0);
            result_8 = result_7;
            uint64_t result_2 = result;
            void** const var_418_1 = r14_1;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfbcc0c2063884afe(
                &result_6, &var_5a8, "pathsindicator-styletime-stylefu…", 5);
            int64_t var_320;
            clap_builder::parser::error::MatchesError::unwrap::h38b2a52603c26d21(&var_320, 
                "pathsindicator-styletime-stylefu…", 5, &result_6);
            int128_t var_5b8;
            
            if (!var_320)
                uu_ls::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hd8ca182971461fb3(&result_5);
            else
            {
                core::iter::traits::iterator::Iterator::collect::h922548e3af56ba0f(&result_6, 
                    &var_320);
                var_5b8 = result_1;
                result_5 = result_6;
            }
            
            var_528 = *var_5b8[8];
            result_6 = result_5;
            int64_t var_530 = var_5b8;
            uint64_t result_4;
            void** rdx_1;
            result_4 = uu_ls::list::hbc04f019ee17b84a(&result_6, &result_8);
            result = result_4;
            core::ptr::drop_in_place$LT$uu_ls..Config$GT$::h98e9458fc2400b9c(&result_8);
        }
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9e0ce0f8c0d39563(&var_5a8);
    }
    else
    {
        char rax = *(result_1 + 0xdd);
        
        if ((rax & 0x1d) != 0xc)
        {
            uint64_t result_3;
            
            if (!rax)
            {
                result_5 = result_1;
                int128_t var_568;
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h70bef1f1c8439ae2(&var_568, &result_5);
                var_410 = 1;
                result_8 = var_568;
                int64_t var_558;
                int64_t var_418_3 = var_558;
                result_3 = alloc::boxed::Box$LT$T$GT$::new::hb11a5103b6a510f6(&result_8);
            }
            else
            {
                result_5 = result_1;
                int128_t var_550;
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h70bef1f1c8439ae2(&var_550, &result_5);
                var_410 = 2;
                result_8 = var_550;
                int64_t var_540;
                int64_t var_418_2 = var_540;
                result_3 = alloc::boxed::Box$LT$T$GT$::new::hb11a5103b6a510f6(&result_8);
            }
            
            result = result_3;
            core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::he8922a481c94e95b(result_5);
        }
        else
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(result_1);
    }
    return result;
}
