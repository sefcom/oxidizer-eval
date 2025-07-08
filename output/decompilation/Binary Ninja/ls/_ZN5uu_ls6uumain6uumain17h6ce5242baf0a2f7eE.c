
  int64_t* uu_ls::uumain::uumain::h6ce5242baf0a2f7e(int64_t arg1)

{
    void var_2e8;
    uu_ls::uu_app::hb4ccd0ffed05c357(&var_2e8);
    int64_t var_4e8;
    clap_builder::builder::command::Command::try_get_matches_from::h00423b9aa1c2dc0b(&var_4e8, 
        &var_2e8, arg1);
    int64_t* result;
    int64_t* result_5;
    int64_t* result_1;
    int64_t var_3e8;
    int32_t var_3d0;
    
    if (var_4e8 != -0x8000000000000000)
    {
        int64_t var_4b8;
        int64_t var_538_1 = var_4b8;
        int128_t var_4c8;
        int128_t var_548_1 = var_4c8;
        int128_t var_4d8;
        int128_t var_558_1 = var_4d8;
        int128_t var_568 = var_4e8;
        uu_ls::Config::from::h304081f9da8d7174(&var_4e8, &var_568);
        int64_t r15_1 = var_4e8;
        result = result_1;
        void** const r14_1 = var_4d8;
        
        if (r15_1 != -0x8000000000000000)
        {
            memcpy(&var_3d0, &*var_4d8[8], 0xe8);
            var_3e8 = r15_1;
            int64_t* result_2 = result;
            void** const var_3d8_1 = r14_1;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hb6addf61d5028314(
                &var_4e8, &var_568, "pathsindicator-styletime-stylefu…", 5);
            clap_builder::parser::error::MatchesError::unwrap::hbdad559483153a61(&result_5, 
                "pathsindicator-styletime-stylefu…", 5, &var_4e8);
            int64_t var_5c0;
            int128_t var_5b8;
            
            if (!result_5)
                uu_ls::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h22093b37bd2384cb(&var_5c0);
            else
            {
                int128_t zmm0_2 = result_5;
                int128_t var_578;
                var_4b8 = var_578;
                int128_t var_588;
                int128_t var_4c8_1 = var_588;
                int128_t var_598;
                var_4d8 = var_598;
                var_4e8 = zmm0_2;
                int64_t var_500;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hd2e5f05ce42ef7b6(&var_500, &var_4e8);
                int128_t var_4f8;
                var_5b8 = var_4f8;
                var_5c0 = var_500;
            }
            
            var_4d8 = *var_5b8[8];
            var_4e8 = var_5c0;
            int64_t var_4e0 = var_5b8;
            int128_t* result_4;
            void** rdx_1;
            result_4 = uu_ls::list::h6ddc1ea5566af8cc(&var_4e8, &var_3e8);
            result = result_4;
            core::ptr::drop_in_place$LT$uu_ls..Config$GT$::h7c5f40e29ecb6421(&var_3e8);
        }
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hbd92667a6015f01d(&var_568);
    }
    else
    {
        char rax = *(result_1 + 0xd5);
        
        if ((rax & 0x1d) != 0xc)
        {
            int64_t* result_3;
            
            if (!rax)
            {
                result_5 = result_1;
                int128_t var_530;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h472e4e5d4acf0daa(
                    &var_530, &result_5);
                var_3d0 = 1;
                var_3e8 = var_530;
                int64_t var_520;
                int64_t var_3d8_3 = var_520;
                result_3 = alloc::boxed::Box$LT$T$GT$::new::h4d783d11ad85c540(&var_3e8);
            }
            else
            {
                result_5 = result_1;
                int128_t var_518;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h472e4e5d4acf0daa(
                    &var_518, &result_5);
                var_3d0 = 2;
                var_3e8 = var_518;
                int64_t var_508;
                int64_t var_3d8_2 = var_508;
                result_3 = alloc::boxed::Box$LT$T$GT$::new::h4d783d11ad85c540(&var_3e8);
            }
            
            result = result_3;
            core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::haf3241a1492a8015(result_5);
        }
        else
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(result_1);
    }
    return result;
}
