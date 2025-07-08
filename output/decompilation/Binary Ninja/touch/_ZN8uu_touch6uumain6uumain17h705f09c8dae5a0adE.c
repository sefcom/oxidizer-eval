
  int64_t* uu_touch::uumain::uumain::h705f09c8dae5a0ad(int64_t arg1)

{
    int128_t var_2f8;
    uu_touch::uu_app::h6cafa39b57a66b7b(&var_2f8);
    int64_t var_418;
    clap_builder::builder::command::Command::try_get_matches_from::h839733911ffe4e3d(&var_418, 
        &var_2f8, arg1);
    int64_t rax = var_418;
    int64_t* result;
    int64_t var_410;
    
    if (rax != -0x8000000000000000)
    {
        int64_t var_3e8;
        int64_t var_3a0_1 = var_3e8;
        int128_t var_3f8;
        int128_t var_3b0_1 = var_3f8;
        int128_t var_408;
        int128_t var_3c0_1 = var_408;
        int64_t var_3d0 = rax;
        int64_t var_3c8_1 = var_410;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h219e52a321966872(
            &var_2f8, &var_3d0, "filesatimemtime0.0.28Update the …", 5);
        clap_builder::parser::error::MatchesError::unwrap::h253c999d17ec96d2(&var_418, 
            "filesatimemtime0.0.28Update the …", 5, &var_2f8);
        int64_t rax_2 = var_418;
        
        if (!rax_2)
            result = uu_touch::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h649caa4cf9839cd8();
        else
        {
            int64_t var_3e0;
            int64_t var_300_1 = var_3e0;
            int128_t var_310_1 = var_3f8;
            int128_t var_320_1 = var_408;
            int64_t var_338 = rax_2;
            int128_t var_330_1 = var_410;
            void var_380;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::he495c32affd9a0b5(&var_380, &var_338);
            char rax_3 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_3d0, "no-dereferencereferencetimestamp", 0xe);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::haaca2baeff626b88(
                &var_2f8, &var_3d0, "referencetimestamp", 9);
            void* rax_4 = clap_builder::parser::error::MatchesError::unwrap::h85a915a6ea0f12c0(
                "referencetimestamp", 9, &var_2f8);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h153b4a940d494604(
                &var_2f8, &var_3d0, "timestamp", 9);
            void* rax_5 = clap_builder::parser::error::MatchesError::unwrap::h85a915a6ea0f12c0(
                "timestamp", 9, &var_2f8);
            int128_t var_438;
            void** var_428;
            void** var_2e8;
            
            if (!rax_4)
            {
                if (!rax_5)
                {
                    var_438 = -0x7fffffffffffffff;
                    goto label_573cc9;
                }
                
                uu_touch::parse_timestamp::h96cd6cd8bd424ce5(&var_2f8, *(rax_5 + 8), 
                    *(rax_5 + 0x10));
                
                if (!var_2f8)
                {
                    *var_438[8] = *var_2f8[8];
                    var_428 = var_2e8;
                    var_438 = -0x8000000000000000;
                    goto label_573cc9;
                }
                
                result = *var_2f8[8];
            }
            else
            {
                std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_2f8, *(rax_4 + 8), 
                    *(rax_4 + 0x10));
                var_428 = var_2e8;
                var_438 = var_2f8;
                label_573cc9:
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h153b4a940d494604(&var_2f8, &var_3d0, "datethur]", 4);
                void* rax_7 = clap_builder::parser::error::MatchesError::unwrap::h85a915a6ea0f12c0(
                    "datethur]", 4, &var_2f8);
                int64_t var_398;
                void** var_388;
                
                if (!rax_7)
                    var_398 = -0x8000000000000000;
                else
                {
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_2f8, rax_7);
                    var_388 = var_2e8;
                    var_398 = var_2f8;
                }
                
                char rax_10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_3d0, "no-createno-dereferencereference…", 9);
                int128_t var_368 = var_438;
                var_408 = var_388;
                var_418 = var_398;
                bool rax_13 = uu_touch::determine_atime_mtime_change::hda9df64dc3778c17(&var_3d0);
                char var_2c8_1 = rax_10;
                char var_2c7_1 = rax_3;
                int128_t var_2e0_1 = var_368;
                void** var_2d0_1 = var_428;
                var_2f8 = var_418;
                int64_t var_2e8_1 = var_408;
                bool var_2c5_1 = rax_13;
                char var_2c6_1 = 0;
                int128_t* var_378;
                int64_t var_370;
                uu_touch::touch::h8e2a06923358d7c5(&var_368, var_378, var_370, &var_2f8);
                int64_t rax_14 = var_368;
                
                if (rax_14 == -0x7ffffffffffffffc)
                {
                    core::ptr::drop_in_place$LT$uu_touch..Options$GT$::hb83ab5f2538670c9(&var_2f8);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_touch..InputFile$GT$$GT$::hca9fb99717cd0aa2(&var_380);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h082071c536512932(&var_3d0);
                    return nullptr;
                }
                
                int64_t var_340;
                *var_3f8[8] = var_340;
                int128_t var_350;
                var_408 = var_350;
                var_410 = var_368;
                var_418 = rax_14;
                result = alloc::boxed::Box$LT$T$GT$::new::h5aa8999775824872(&var_418);
                core::ptr::drop_in_place$LT$uu_touch..Options$GT$::hb83ab5f2538670c9(&var_2f8);
            }
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_touch..InputFile$GT$$GT$::hca9fb99717cd0aa2(&var_380);
        }
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h082071c536512932(&var_3d0);
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_410);
    return result;
}
