
  uint64_t uu_csplit::uumain::uumain::h622bcb8a2660cea2(int64_t arg1)

{
    int128_t var_2e8;
    uu_csplit::uu_app::h42f8ce6b5616d423(&var_2e8);
    int64_t var_3b8;
    clap_builder::builder::command::Command::try_get_matches_from::ha98054be1a4393c6(&var_3b8, 
        &var_2e8, arg1);
    int64_t rax = var_3b8;
    int64_t var_3b0;
    
    if (-(rax) == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3b0);
    
    int64_t var_388;
    int64_t var_320_1 = var_388;
    int128_t var_398;
    int128_t var_330_1 = var_398;
    int128_t var_3a8;
    int128_t var_340_1 = var_3a8;
    int64_t var_350 = rax;
    int64_t var_348_1 = var_3b0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h8df2d62e1575d4aa(
        &var_2e8, &var_350);
    void* rax_2 = clap_builder::parser::error::MatchesError::unwrap::he433efa232898a78(&var_2e8);
    
    if (rax_2)
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hb1657544231e952d(
            &var_2e8, &var_350);
        clap_builder::parser::error::MatchesError::unwrap::h1e5e9e31acc0be39(&var_3b8, &var_2e8);
        
        if (var_3b8)
        {
            var_2e8 = var_3b8;
            void var_3d8;
            core::iter::traits::iterator::Iterator::collect::hecc4a77bdb42bbe4(&var_3d8, &var_2e8);
            uu_csplit::CsplitOptions::new::hcbcb732a44184854(&var_2e8, &var_350);
            int64_t rax_4 = var_2e8;
            int128_t var_318 = var_2e8;
            uint64_t result;
            
            if (rax_4 != -0x8000000000000000)
            {
                int64_t var_288;
                int64_t var_358_1 = var_288;
                int128_t var_298;
                int128_t var_368_1 = var_298;
                int128_t var_2a8;
                int128_t var_378_1 = var_2a8;
                var_388 = var_388;
                var_3b0 = var_318;
                *var_398[8] = *var_398[8];
                var_3b8 = rax_4;
                uint64_t result_1;
                int128_t var_3f0;
                int64_t var_3e0;
                void* var_3d0;
                int64_t var_3c8;
                int128_t var_2c8_1;
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h38f9f743da6120de(*(rax_2 + 8), *(rax_2 + 0x10), "-cannot open  for readingError f…", 1))
                {
                    std::fs::File::open::he7ad27c5ba7152e8(&var_2e8, rax_2);
                    *(rax_2 + 8);
                    *(rax_2 + 0x10);
                    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8d2f9b30ba986471(&result_1, &var_2e8);
                    result = result_1;
                    
                    if (!result)
                    {
                        int32_t var_3f8;
                        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hd51d46b7da96853c(&var_2e8, var_3f8);
                        uu_csplit::csplit::h417fd27a890efb75(&result_1, &var_3b8, var_3d0, var_3c8, 
                            &var_2e8);
                        
                        if (result_1 == 0xd)
                            goto label_519693;
                        
                        var_2c8_1 = var_3e0;
                        int128_t var_2d8_3 = var_3f0;
                        var_2e8 = result_1;
                        result = alloc::boxed::Box$LT$T$GT$::new::h2f10a7c0150c2495(&var_2e8);
                    }
                }
                else
                {
                    std::io::stdio::stdin::h9a05a2c3e7544b2a();
                    void* var_3c0 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
                    int32_t* rax_7;
                    char rdx_1;
                    rax_7 = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(&var_3c0);
                    uu_csplit::csplit::hd8fd0c4dd6790b44(&result_1, &var_3b8, var_3d0, var_3c8, 
                        rax_7);
                    
                    if (result_1 == 0xd)
                    {
                        label_519693:
                        core::ptr::drop_in_place$LT$uu_csplit..CsplitOptions$GT$::h93e4a6c4ee8a35f8(
                            &var_3b8);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hd5017c74ad85d1e7(&var_3d8);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0355794e45a04e25(&var_350);
                        return 0;
                    }
                    
                    var_2c8_1 = var_3e0;
                    int128_t var_2d8_2 = var_3f0;
                    var_2e8 = result_1;
                    result = alloc::boxed::Box$LT$T$GT$::new::h2f10a7c0150c2495(&var_2e8);
                }
                core::ptr::drop_in_place$LT$uu_csplit..CsplitOptions$GT$::h93e4a6c4ee8a35f8(
                    &var_3b8);
            }
            else
                result = alloc::boxed::Box$LT$T$GT$::new::h2f10a7c0150c2495(&var_318);
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hd5017c74ad85d1e7(&var_3d8);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0355794e45a04e25(&var_350);
            return result;
        }
    }
    
    core::option::unwrap_failed::h893f57cb7db71cb7();
    /* no return */
}
