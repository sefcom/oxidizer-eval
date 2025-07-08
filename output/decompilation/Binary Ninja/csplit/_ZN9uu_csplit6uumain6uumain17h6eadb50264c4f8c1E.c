
  int64_t* uu_csplit::uumain::uumain::h6eadb50264c4f8c1(int64_t arg1)

{
    int128_t var_2e8;
    uu_csplit::uu_app::h86eb726b6073e125(&var_2e8);
    size_t result_1;
    clap_builder::builder::command::Command::try_get_matches_from::hcae3b529826e6a0d(&result_1, 
        &var_2e8, arg1);
    size_t result_4 = result_1;
    int64_t* result;
    void** result_2;
    
    if (result_4 != -0x8000000000000000)
    {
        int64_t var_418;
        int64_t var_450_1 = var_418;
        int128_t var_428;
        int128_t var_460_1 = var_428;
        int128_t var_438;
        int128_t var_470_1 = var_438;
        size_t result_6 = result_4;
        void** result_3 = result_2;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc5a9f76a4b949bc1(
            &var_2e8, &result_6, "filemode{", 4);
        void* rax_1 = clap_builder::parser::error::MatchesError::unwrap::hafaa8c6d7408a0e9(
            "filemode{", 4, &var_2e8);
        
        if (rax_1)
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h22bc54f1ce978fdd(
                &var_2e8, &result_6, "pattern-", 7);
            clap_builder::parser::error::MatchesError::unwrap::hb8cfc70c55ca00cf(&result_1, 
                "pattern-", 7, &var_2e8);
        }
        
        if (!rax_1 || !result_1)
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        int128_t var_368_1 = var_418;
        int128_t var_378_1 = var_428;
        int128_t var_388_1 = var_438;
        int128_t var_398 = result_1;
        void var_498;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::ha175ecf279fa0b9b(&var_498, &var_398);
        void var_350;
        uu_csplit::CsplitOptions::new::h18a4d0e2255fb53b(&var_350, &result_6);
        void* var_4a0;
        void** var_490;
        int64_t var_488;
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3b2659a33d278162(*(rax_1 + 8), *(rax_1 + 0x10), "-", 1))
        {
            std::fs::File::open::hffa7441d5a04c38c(&var_2e8, rax_1);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hdd6233119bcf60a2(&result_1, &var_2e8, rax_1);
            result = result_1;
            
            if (!result)
            {
                var_4a0 = result_2;
                std::fs::File::metadata::he899a18112e6f19e(&var_2e8, &var_4a0);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hde00539526dd8324(&result_1, &var_2e8, rax_1);
                int32_t var_410;
                
                if (result_1 == 2)
                {
                    result = result_2;
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::h14d311f58d6bf7d5(var_4a0);
                }
                else
                {
                    int128_t var_2d8;
                    
                    if ((0xf000 & var_410) != 0x8000)
                    {
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&result_1, rax_1);
                        *var_2d8[8] = var_438;
                        var_2e8 = result_1;
                        var_2e8 = 0xb;
                        result = alloc::boxed::Box$LT$T$GT$::new::h6b837569a0db69e2(&var_2e8);
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h14d311f58d6bf7d5(var_4a0);
                    }
                    else
                    {
                        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hc0bfa7f749c36949(&var_2e8, 0x2000, var_4a0);
                        uu_csplit::csplit::hbd1c068a297fe5d8(&result_1, &var_350, var_490, var_488, 
                            &var_2e8);
                        size_t result_5 = result_1;
                        
                        if (result_5 == 0xc)
                            goto label_561517;
                        
                        var_2d8 = var_438;
                        var_2e8 = result_2;
                        var_2e8 = result_5;
                        result = alloc::boxed::Box$LT$T$GT$::new::h6b837569a0db69e2(&var_2e8);
                    }
                }
            }
        }
        else
        {
            std::io::stdio::stdin::h7215cc131abb55d8();
            var_4a0 = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
            int32_t* rax_3;
            char rdx_2;
            rax_3 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&var_4a0);
            uu_csplit::csplit::habea2b7448100cb7(&result_1, &var_350, var_490, var_488, rax_3, 
                rdx_2 & 1);
            
            if (result_1 == 0xc)
            {
                label_561517:
                core::ptr::drop_in_place$LT$uu_csplit..CsplitOptions$GT$::h17e4cab8b6953a0e(
                    &var_350);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h1581f7c1aae30641(&var_498);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h21e213836082c314(&result_6);
                return nullptr;
            }
            
            int64_t var_2c8_1 = var_428;
            int128_t var_2d8_1 = var_438;
            var_2e8 = result_1;
            result = alloc::boxed::Box$LT$T$GT$::new::h6b837569a0db69e2(&var_2e8);
        }
        core::ptr::drop_in_place$LT$uu_csplit..CsplitOptions$GT$::h17e4cab8b6953a0e(&var_350);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h1581f7c1aae30641(&var_498);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h21e213836082c314(&result_6);
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(result_2);
    return result;
}
