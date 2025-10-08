
  uint64_t uu_groups::uumain::uumain::hd384e73a342192e5(int64_t arg1)

{
    void* const var_338;
    uu_groups::uu_app::he4594228214da6d4(&var_338);
    int64_t var_418;
    clap_builder::builder::command::Command::try_get_matches_from::h1c0fb712ff2f6afe(&var_418, 
        &var_338, arg1);
    int64_t rax = var_418;
    int64_t var_410;
    
    if (-(rax) == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_410);
    
    int64_t var_3e8;
    int64_t var_360_1 = var_3e8;
    int128_t var_3f8;
    int128_t var_370_1 = var_3f8;
    int128_t var_408;
    int128_t var_380_1 = var_408;
    int64_t var_390 = rax;
    int64_t var_388_1 = var_410;
    int32_t rdx_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hc0c0f3908f36d32e(
        &var_338, &var_390);
    int64_t var_70;
    clap_builder::parser::error::MatchesError::unwrap::h29fb37b6f35ebb81(&var_70, &var_338);
    int128_t* var_4f8;
    int64_t (* var_4f0)(int64_t* arg1, int64_t arg2);
    int64_t** var_4e8;
    int64_t* var_488;
    void* const var_460;
    int128_t var_330;
    
    if (!var_70)
    {
        label_4553e9:
        var_460 = nullptr;
        int64_t var_458_1 = 8;
        int64_t var_450_1 = 0;
    }
    else
    {
        rdx_1 =
            core::iter::traits::iterator::Iterator::collect::ha737becd1ce606a3(&var_338, &var_70);
        void* const rax_2 = var_338;
        var_418 = var_330;
        
        if (rax_2 == -0x8000000000000000)
            goto label_4553e9;
        
        int64_t var_458;
        var_458 = var_418;
        var_460 = rax_2;
        int64_t var_450;
        
        if (var_450)
        {
            void var_358;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h61f0d1cd8d127d0b(&var_358, &var_460);
            int64_t i;
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h881f37c21302990c(&i, &var_358);
            
            if (i != -0x8000000000000000)
            {
                do
                {
                    int128_t var_4c8 = i;
                    uint64_t var_438;
                    _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$$RF$str$GT$$GT$::locate::h4bb3a5c7c498e57d(&var_418, *var_4c8[8], var_438);
                    int128_t var_4a8;
                    int64_t var_318;
                    
                    if (var_418 != -0x8000000000000000)
                    {
                        int128_t var_3a8;
                        int128_t var_2c8_1 = var_3a8;
                        int128_t var_3b8;
                        int128_t var_2d8_1 = var_3b8;
                        int128_t var_3c8;
                        int128_t var_2e8_1 = var_3c8;
                        int128_t var_3d8;
                        int128_t var_2f8_1 = var_3d8;
                        int128_t var_308_1 = var_3e8;
                        var_318 = var_3f8;
                        var_330 = var_408;
                        var_338 = var_418;
                        uucore::features::entries::Passwd::belongs_to::h86a03abed7028785(&var_4f8, 
                            &var_338);
                        void var_430;
                        core::iter::traits::iterator::Iterator::collect::h2a37e036c85de82e(
                            &var_430, var_4f0);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u32$GT$$GT$::h45a91fa7e12fd058(var_4f8, var_4f0);
                        int64_t var_428;
                        int64_t var_420;
                        alloc::str::join_generic_copy::h65d40f3639046fb8(&var_4f8, var_428, 
                            var_420);
                        int64_t** var_498_1 = var_4e8;
                        var_4a8 = var_4f8;
                        var_488 = &var_4c8;
                        int64_t (* var_480_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        int128_t* var_478_2 = &var_4a8;
                        int64_t (* var_470_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_4f8 = &data_4e1770;
                        var_4f0 = 3;
                        int64_t var_4d8_1 = 0;
                        var_4e8 = &var_488;
                        int64_t var_4e0_2 = 2;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_4f8);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h89c1341a341191fe(
                            var_4a8, *var_4a8[8]);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h51d18d21b2c0e218(&var_430);
                        core::ptr::drop_in_place$LT$uucore..features..entries..Passwd$GT$::h6dbe57604f11a767(&var_338);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h89c1341a341191fe(
                            var_4c8, *var_4c8[8]);
                    }
                    else
                    {
                        uint64_t var_478_1 = var_438;
                        var_488 = var_4c8;
                        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                        int64_t rax_7;
                        int64_t rdx_6;
                        rax_7 = uucore::util_name::h074417a1e6395129();
                        var_4a8 = rax_7;
                        *var_4a8[8] = rdx_6;
                        var_4f8 = &var_4a8;
                        var_4f0 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd5ec53a6e88e5b08;
                        var_4e8 = &var_488;
                        int64_t (* var_4e0_1)(void* arg1, int64_t* arg2) = _$LT$uu_groups..GroupsError$u20$as$u20$core..fmt..Display$GT$::fmt::hd998d0f2fe9171d6;
                        var_338 = &data_4e17a0;
                        var_330 = 3;
                        var_318 = 0;
                        *var_330[8] = &var_4f8;
                        int64_t var_320_2 = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_338);
                        core::ptr::drop_in_place$LT$uu_groups..GroupsError$GT$::hb6a578406184b27c(
                            &var_488);
                        core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..entries..Passwd$C$std..io..error..Error$GT$$GT$::heee72112ecf77919(&var_418);
                    }
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h881f37c21302990c(&i, &var_358);
                } while (i != -0x8000000000000000);
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hb41b6572950f633b(&var_358);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7f195760c4d450b4(&var_390);
            return 0;
        }
    }
    
    uucore::features::entries::get_groups_gnu::hafb36095cbadaa6c(&var_338, 0, rdx_1);
    void* const r15_1 = var_338;
    int64_t r14_1 = var_330;
    uint64_t result;
    
    if (r15_1 != -0x8000000000000000)
    {
        core::iter::traits::iterator::Iterator::collect::h2a37e036c85de82e(&var_4f8, r14_1);
        alloc::str::join_generic_copy::h65d40f3639046fb8(&var_338, var_4f0, var_4e8);
        var_408 = *var_330[8];
        var_418 = var_338;
        var_488 = &var_418;
        int64_t (* var_480_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_338 = &data_4e1718;
        var_330 = 2;
        int64_t var_318_1 = 0;
        *var_330[8] = &var_488;
        int64_t var_320_1 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_338);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h89c1341a341191fe(var_418, var_410);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h51d18d21b2c0e218(&var_4f8);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u32$GT$$GT$::h45a91fa7e12fd058(r15_1, r14_1);
        result = 0;
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..vec..Vec$LT$u32$GT$$C$std..io..error..Error$GT$$GT$::h391048e49a02e523(-0x8000000000000000, r14_1);
        var_338 = -0x8000000000000000;
        result = alloc::boxed::Box$LT$T$GT$::new::h7722da9b537c65ec(&var_338);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h51d18d21b2c0e218(
        &var_460);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7f195760c4d450b4(&var_390);
    return result;
}
