
  fn uu_ls::uumain::uumain::h6ce5242baf0a2f7e(arg1: i64) -> *mut i64

{
    let mut var_2e8: ();
    uu_ls::uu_app::hb4ccd0ffed05c357(&var_2e8);
    let mut var_4e8: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h00423b9aa1c2dc0b(&var_4e8, 
        &var_2e8, arg1);
    let mut result: *mut i64;
    let mut result_5: *mut i64;
    let result_1: *mut i64;
    let mut var_3e8: i64;
    let mut var_3d0: i32;
    
    if var_4e8 != -0x8000000000000000
    {
        let mut var_4b8: i64;
        let var_538_1: i64 = var_4b8;
        let var_4c8: i128;
        let var_548_1: i128 = var_4c8;
        let mut var_4d8: i128;
        let var_558_1: i128 = var_4d8;
        let mut var_568: i128 = var_4e8;
        uu_ls::Config::from::h304081f9da8d7174(&var_4e8, &var_568);
        let r15_1: i64 = var_4e8;
        result = result_1;
        let r14_1: *mut *mut c_void = var_4d8;
        
        if r15_1 != -0x8000000000000000
        {
            memcpy(&var_3d0, &*var_4d8[8], 0xe8);
            var_3e8 = r15_1;
            let result_2: *mut i64 = result;
            let var_3d8_1: *mut *mut c_void = r14_1;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hb6addf61d5028314(
                &var_4e8, &var_568, "pathsindicator-styletime-stylefu…", 5);
            clap_builder::parser::error::MatchesError::unwrap::hbdad559483153a61(&result_5, 
                "pathsindicator-styletime-stylefu…", 5, &var_4e8);
            let mut var_5c0: i64;
            let mut var_5b8: i128;
            
            if result_5 == 0
            {
                uu_ls::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h22093b37bd2384cb(&var_5c0);
            }
            else
            {
                let zmm0_2: i128 = result_5;
                let var_578: i128;
                var_4b8 = var_578;
                let var_588: i128;
                let var_4c8_1: i128 = var_588;
                let var_598: i128;
                var_4d8 = var_598;
                var_4e8 = zmm0_2;
                let mut var_500: i64;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hd2e5f05ce42ef7b6(&var_500, &var_4e8);
                let var_4f8: i128;
                var_5b8 = var_4f8;
                var_5c0 = var_500;
            }
            
            var_4d8 = *var_5b8[8];
            var_4e8 = var_5c0;
            let var_4e0: i64 = var_5b8;
            let mut result_4: *mut i128;
            let mut rdx_1: *mut *mut c_void;
            result_4 = uu_ls::list::h6ddc1ea5566af8cc(&var_4e8, &var_3e8);
            result = result_4;
            core::ptr::drop_in_place$LT$uu_ls..Config$GT$::h7c5f40e29ecb6421(&var_3e8);
        }
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hbd92667a6015f01d(&var_568);
    }
    else
    {
        let rax: i8 = *result_1.byte_offset(0xd5);
        
        if (rax & 0x1d) != 0xc
        {
            let mut result_3: *mut i64;
            
            if rax == 0
            {
                result_5 = result_1;
                let mut var_530: i128;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h472e4e5d4acf0daa(
                    &var_530, &result_5);
                var_3d0 = 1;
                var_3e8 = var_530;
                let var_520: i64;
                let var_3d8_3: i64 = var_520;
                result_3 = alloc::boxed::Box$LT$T$GT$::new::h4d783d11ad85c540(&var_3e8);
            }
            else
            {
                result_5 = result_1;
                let mut var_518: i128;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h472e4e5d4acf0daa(
                    &var_518, &result_5);
                var_3d0 = 2;
                var_3e8 = var_518;
                let var_508: i64;
                let var_3d8_2: i64 = var_508;
                result_3 = alloc::boxed::Box$LT$T$GT$::new::h4d783d11ad85c540(&var_3e8);
            }
            
            result = result_3;
            core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::haf3241a1492a8015(result_5);
        }
        else
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(result_1);
        }
    }
    result
}
