
  uint64_t uu_touch::uumain::uumain::h00b61d7fc07eeb76(int64_t arg1)

{
    uint64_t var_2f8;
    uu_touch::uu_app::h87dc9501cc8a91b8(&var_2f8);
    int64_t var_3a8;
    clap_builder::builder::command::Command::try_get_matches_from::ha75500579b5057ef(&var_3a8, 
        &var_2f8, arg1);
    int64_t rax = var_3a8;
    int64_t var_3a0;
    
    if (-(rax) == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3a0);
    
    int64_t var_378;
    int64_t var_3b0_1 = var_378;
    int128_t var_388;
    int128_t var_3c0_1 = var_388;
    int128_t var_398;
    int128_t var_3d0_1 = var_398;
    int64_t var_3e0 = rax;
    int64_t var_3d8_1 = var_3a0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h2f81de9b8b326350(
        &var_2f8, &var_3e0, "filessrc/uu/touch/src/touch.rs19…", 5);
    clap_builder::parser::error::MatchesError::unwrap::h7a77c11b74ac35e8(&var_3a8, 
        "filessrc/uu/touch/src/touch.rs19…", 5, &var_2f8);
    int64_t rax_2 = var_3a8;
    uint64_t result;
    
    if (!rax_2)
        result = uu_touch::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hfa7db5e5c19c49bd();
    else
    {
        int64_t var_370;
        int64_t var_300_1 = var_370;
        int128_t var_310_1 = var_388;
        int128_t var_320_1 = var_398;
        int64_t var_338 = rax_2;
        int128_t var_330_1 = var_3a0;
        int64_t var_438;
        core::iter::traits::iterator::Iterator::collect::h6af070cfaf069711(&var_438, &var_338);
        uint64_t result_3 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_3e0, "no-dereferencefilessrc/uu/touch/…", 0xe);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h836d00c007cc38f2(
            &var_2f8, &var_3e0, "referencetimestampaccessmodifica…", 9);
        void* rax_4 = clap_builder::parser::error::MatchesError::unwrap::h72b734edb63d908d(
            "referencetimestampaccessmodifica…", 9, &var_2f8);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0b60f984f29437ad(
            &var_2f8, &var_3e0, "datethur]", 4);
        void* rax_5 = clap_builder::parser::error::MatchesError::unwrap::h72b734edb63d908d(
            "datethur]", 4, &var_2f8);
        uint64_t r12_1 = -0x8000000000000000;
        char var_459_1 = result_3;
        uint64_t var_400;
        uint64_t result_1;
        uint64_t var_2e8;
        
        if (rax_5)
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_2f8, rax_5);
            r12_1 = var_2f8;
            result_3 = result_1;
            var_400 = var_2e8;
        }
        
        uint64_t rbx_1 = "timestampaccessmodificationno-cr…";
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0b60f984f29437ad(
            &var_2f8, &var_3e0, "timestampaccessmodificationno-cr…", 9);
        int64_t* result_2 = &var_2f8;
        void* rax_8 = clap_builder::parser::error::MatchesError::unwrap::h72b734edb63d908d(
            "timestampaccessmodificationno-cr…", 9, result_2);
        uint64_t rdi_12;
        
        if (!rax_8)
            rdi_12 = -0x8000000000000000;
        else
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_2f8, rax_8);
            rdi_12 = var_2f8;
            result_2 = result_1;
            rbx_1 = var_2e8;
        }
        
        int64_t* result_8 = nullptr;
        uint64_t result_9 = result_3;
        
        if (r12_1 == -0x8000000000000000)
            result_9 = 0;
        
        if (rdi_12 != -0x8000000000000000)
            result_8 = result_2;
        
        uint64_t var_458_2;
        uint64_t result_5;
        int64_t* var_430;
        int64_t var_428;
        uint64_t r12_2;
        uint64_t result_4;
        
        if (uu_touch::is_first_filename_timestamp::h32f3ea922c596898(rax_4, result_9, var_400, 
            result_8, rbx_1, var_430, var_428))
        {
            if (!var_428)
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
                /* no return */
            }
            
            void* rsi_9 = *var_430;
            
            if (*(rsi_9 + 0x10) != 0xa)
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_2f8, rsi_9);
            else
                uu_touch::shr2::h8714b431bd575308(&var_2f8, *(rsi_9 + 8), 0xa);
            
            r12_2 = var_2f8;
            result_4 = result_1;
            rbx_1 = var_2e8;
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h601344d7e62d7c5b(rdi_12, result_2);
            uint64_t result_6 = result_4;
            uint64_t var_458_3 = r12_2;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1206d63c58f066cf(&var_2f8, &var_430[1], var_428 - 1);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::h4a208bc490968955(
                var_438, var_430);
            uint64_t var_428_1 = var_2e8;
            var_438 = var_2f8;
            result_5 = result_4;
            var_458_2 = r12_2;
            
            if (rax_4)
                goto label_52a94b;
            
            goto label_52aa0c;
        }
        
        result_4 = result_2;
        r12_2 = rdi_12;
        result_5 = result_4;
        var_458_2 = r12_2;
        int128_t var_418;
        uint64_t var_408;
        void* const rbp_1;
        
        if (!rax_4)
        {
            label_52aa0c:
            
            if (r12_2 == -0x8000000000000000)
            {
                var_418 = -0x7fffffffffffffff;
                rbp_1 = 1;
                goto label_52aac1;
            }
            
            uu_touch::parse_timestamp::h36e945b547dfef75(&var_2f8, result_4, rbx_1);
            result = result_1;
            
            if (var_2f8 != 1)
            {
                *var_418[8] = result;
                var_408 = var_2e8;
                var_418 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8d2cce2e40acf799(var_458_2, 
                    result_5);
                rbp_1 = nullptr;
                goto label_52aac1;
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8d2cce2e40acf799(var_458_2, 
                result_5);
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h601344d7e62d7c5b(r12_1, result_3);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::h4a208bc490968955(
                var_438, var_430);
        }
        else
        {
            label_52a94b:
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfebea16f99122a4b(&var_2f8, *(rax_4 + 8), *(rax_4 + 0x10));
            var_408 = var_2e8;
            var_418 = var_2f8;
            rbp_1 = 1;
            label_52aac1:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h01224e89f645dead(&var_2f8, &var_438);
            void var_3f8;
            core::iter::traits::iterator::Iterator::collect::he9a1102dc169f52d(&var_3f8, &var_2f8);
            char rax_12 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_3e0, "no-createno-dereferencefilessrc/…", 9);
            char rax_13 = uu_touch::determine_atime_mtime_change::he34ebc95df27ae4a(&var_3e0);
            char var_2c8_1 = rax_12;
            char var_2c7_1 = var_459_1;
            int128_t var_2e0_1 = var_418;
            uint64_t var_2d0_1 = var_408;
            var_2f8 = r12_1;
            uint64_t result_7 = result_3;
            uint64_t var_2e8_1 = var_400;
            char var_2c5_1 = rax_13;
            char var_2c6_1 = 0;
            int64_t var_3f0;
            int64_t var_3e8;
            int64_t var_368;
            uu_touch::touch::h0be58da63b86e7de(&var_368, var_3f0, var_3e8, &var_2f8);
            int64_t rax_14 = var_368;
            
            if (rax_14 == -0x7ffffffffffffffc)
            {
                core::ptr::drop_in_place$LT$uu_touch..Options$GT$::hb0e39d6893f0637e(&var_2f8);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_touch..InputFile$GT$$GT$::h71b89a8908b0edfb(&var_3f8);
                
                if (var_458_2 != -0x8000000000000000 && rbp_1)
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8d2cce2e40acf799(
                        var_458_2, result_5);
                
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf089da88c992188d(&var_3e0);
                return 0;
            }
            
            int64_t var_340;
            *var_388[8] = var_340;
            int128_t var_350;
            var_398 = var_350;
            int128_t var_360;
            var_3a0 = var_360;
            var_3a8 = rax_14;
            result = alloc::boxed::Box$LT$T$GT$::new::h3ec608fb377dcd08(&var_3a8);
            core::ptr::drop_in_place$LT$uu_touch..Options$GT$::hb0e39d6893f0637e(&var_2f8);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_touch..InputFile$GT$$GT$::h71b89a8908b0edfb(&var_3f8);
            
            if ((var_458_2 != -0x8000000000000000 & rbp_1) == 1)
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8d2cce2e40acf799(var_458_2, 
                    result_5);
        }
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf089da88c992188d(&var_3e0);
    return result;
}
