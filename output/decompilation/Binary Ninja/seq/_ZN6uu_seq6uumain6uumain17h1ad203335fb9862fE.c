
  uint64_t uu_seq::uumain::uumain::h1ad203335fb9862f(int64_t arg1)

{
    int64_t r12;
    int64_t var_28 = r12;
    int64_t var_338;
    uu_seq::uu_app::hd0faaa9474e9c549(&var_338);
    int128_t var_428;
    uu_seq::split_short_args_with_value::hdae2cdacdc174560(&var_428, arg1);
    int64_t var_518;
    clap_builder::builder::command::Command::try_get_matches_from::hd1c88fd558842ae0(&var_518, 
        &var_338, &var_428);
    int64_t rax = var_518;
    int64_t var_510;
    
    if (-(rax) == -0x8000000000000000)
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_510);
    
    int64_t var_4e8;
    int64_t var_430 = var_4e8;
    int128_t var_4f8;
    int128_t var_440 = var_4f8;
    int128_t var_508;
    int128_t var_450 = var_508;
    int64_t var_460 = rax;
    int64_t var_458 = var_510;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h38deca854bdaffca(
        &var_338, &var_460);
    int64_t var_70;
    clap_builder::parser::error::MatchesError::unwrap::hb9b645cf222daec1(&var_70, &var_338);
    uint64_t result;
    
    if (!var_70)
    {
        var_338 = -0x7fffffffffffffff;
        result = alloc::boxed::Box$LT$T$GT$::new::h8df98ea5beea200a(&var_338);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6d0652b0080590cd(&var_460);
        return result;
    }
    
    int64_t var_4c0;
    core::iter::traits::iterator::Iterator::collect::hf43435935691e018(&var_4c0, &var_70);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hed9adfe4617c837c(
        &var_338, &var_460, "separatorterminatorequal-widthfo…", 9);
    int64_t rax_3;
    uint64_t rdx_4;
    rax_3 = core::option::Option$LT$T$GT$::map_or::h3479f1cde4d6a743(
        clap_builder::parser::error::MatchesError::unwrap::he420c565d1c1c117(
        "separatorterminatorequal-widthfo…", 9, &var_338));
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h8638b58448d95b8c(&var_338, rax_3, rdx_4);
    int128_t var_4a8 = var_338;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hed9adfe4617c837c(
        &var_338, &var_460, "terminatorequal-widthformatwrite…", 0xa);
    uint64_t rax_5 = clap_builder::parser::error::MatchesError::unwrap::he420c565d1c1c117(
        "terminatorequal-widthformatwrite…", 0xa, &var_338);
    char* rcx_3;
    
    if (!rax_5)
        rcx_3 = nullptr;
    else
    {
        rcx_3 = *(rax_5 + 8);
        rax_5 = *(rax_5 + 0x10);
    }
    
    uint64_t rdx_6 = 1;
    
    if (rcx_3)
        rdx_6 = rax_5;
    
    char const* const rsi_10 = "\nTry ' --help' for more informa…";
    
    if (rcx_3)
        rsi_10 = rcx_3;
    
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h8638b58448d95b8c(&var_338, rsi_10, rdx_6);
    uint64_t var_328;
    var_508 = var_328;
    var_518 = var_338;
    char rax_8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_460, "equal-widthformatwrite error/hom…", 0xb);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hed9adfe4617c837c(
        &var_338, &var_460, "formatwrite error/home/34r7hm4n/…", 6);
    void* rax_9 = clap_builder::parser::error::MatchesError::unwrap::he420c565d1c1c117(
        "formatwrite error/home/34r7hm4n/…", 6, &var_338);
    int64_t r15;
    
    if (!rax_9)
        r15 = 0;
    else
    {
        r15 = *(rax_9 + 8);
        r12 = *(rax_9 + 0x10);
    }
    
    uint64_t var_418_1 = var_328;
    var_428 = var_4a8;
    int128_t zmm0_4 = var_518;
    uint64_t var_400_1 = var_508;
    char var_3e8_1 = rax_8;
    int64_t var_3f8_1 = r15;
    int64_t var_3f0_1 = r12;
    uint64_t rax_11;
    rax_11 = r15;
    int64_t* rbx_1;
    int64_t* var_4b8;
    int64_t var_4b0;
    
    if (!(rax_8 & rax_11))
    {
        int128_t var_3d8;
        int128_t var_3c8;
        int128_t var_3b8;
        int128_t var_3a8;
        int128_t var_398;
        int64_t var_388;
        int128_t var_378;
        int128_t var_368;
        char var_330;
        int128_t var_318;
        int128_t var_308;
        
        if (var_4b0 <= 1)
        {
            uu_seq::number::PreciseNumber::one::hbe78ba0f3eadaa72(&var_3d8);
            label_46b5e2:
            uu_seq::number::PreciseNumber::one::hbe78ba0f3eadaa72(&var_398);
            label_46b5f4:
            int64_t rax_17 = 0;
            
            if (var_388 < -0x7ffffffffffffffb)
                rax_17 = var_388 - 0x7fffffffffffffff;
            
            if (rax_17)
            {
                if (rax_17 != 3)
                    goto label_46b740;
                
                goto label_46b615;
            }
            
            int64_t* var_4c8_1;
            
            if (*var_378[8] == 1)
            {
                label_46b615:
                
                if (var_4b0 < 2)
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(1, var_4b0);
                    /* no return */
                }
                
                var_4c8_1 = var_4b8;
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_518, var_4b8[1]);
                int64_t var_320_1 = var_508;
                var_330 = var_518;
                var_338 = -0x8000000000000000;
                result = alloc::boxed::Box$LT$T$GT$::new::h8df98ea5beea200a(&var_338);
            }
            else
            {
                label_46b740:
                
                if (var_4b0 < 1)
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(var_4b0 - 1, 0);
                    /* no return */
                }
                
                var_4c8_1 = var_4b8;
                void* rax_25 = var_4b8[var_4b0 - 1];
                uu_seq::numberparse::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$uu_seq..number..PreciseNumber$GT$::from_str::h0a7ede5c0f7af91b(&var_338, *(rax_25 + 8), *(rax_25 + 0x10));
                
                if (var_338 != 2)
                {
                    int128_t var_478_1 = var_308;
                    int128_t var_488_1 = var_318;
                    uint64_t var_498_1;
                    var_498_1 = var_328;
                    var_4a8 = var_338;
                    uint16_t var_51c_1;
                    char var_51a_1;
                    uint16_t rax_29;
                    char rcx_5;
                    uint64_t rdx_13;
                    uint64_t rbx_6;
                    int64_t rsi_25;
                    bool rdi_41;
                    int64_t r8_2;
                    char r9_2;
                    uint64_t r10_3;
                    char r11_2;
                    int64_t r12_4;
                    char r13_3;
                    int64_t r14_3;
                    int64_t r15_1;
                    int128_t zmm0_12;
                    
                    if (!r15)
                    {
                        int64_t rax_31;
                        int64_t rdx_15;
                        rax_31 = uu_seq::select_precision::h84cf8927d3a54a3b(&var_3d8, &var_398, 
                            &var_4a8);
                        r12_4 = rax_31;
                        r15_1 = rdx_15;
                        
                        if (!rax_8)
                            r10_3 = 0;
                        else
                        {
                            int64_t rbx_5 = 0;
                            
                            if (r12_4 & 1)
                                rbx_5 = r15_1;
                            
                            int64_t rax_33 = core::cmp::Ord::max::h79a6793063d99ff6(
                                core::cmp::Ord::max::h79a6793063d99ff6(*var_3a8[8], *var_368[8]), 
                                *var_478_1[8]);
                            int64_t r10_2 = rbx_5 + 1;
                            
                            if (!rbx_5)
                                r10_2 = rbx_5;
                            
                            r10_3 = r10_2 + rax_33;
                        }
                        
                        if (!(r12_4 & 1))
                        {
                            var_51a_1 = *var_338[2];
                            var_51c_1 = var_338;
                            rax_29 = 2;
                            rdi_41 = false;
                            rcx_5 = 0;
                            rdx_13 = 0;
                            r12_4 = 0;
                        }
                        else
                        {
                            var_51a_1 = *var_338[2];
                            var_51c_1 = var_338;
                            rdi_41 = !r15_1;
                            rcx_5 = 2;
                            rax_29 = 0;
                            rdx_13 = r10_3;
                        }
                        
                        zmm0_12 = {0};
                        rbx_6 = 1;
                        r14_3 = 0;
                        rsi_25 = 1;
                        r8_2 = 0;
                        r9_2 = 0;
                        r11_2 = 0;
                        r13_3 = 0;
                        goto label_46baf8;
                    }
                    
                    uucore::features::format::Format$LT$F$C$T$GT$::parse::h4331081ad9a72b1b(
                        &var_338, r15);
                    r12_4 = var_338;
                    r15_1 = var_330;
                    rdx_13 = var_328;
                    int64_t var_320;
                    r13_3 = var_320;
                    r11_2 = *var_320[1];
                    r9_2 = *var_320[2];
                    rcx_5 = *var_320[3];
                    rax_29 = *var_320[4];
                    var_518 = *var_320[5];
                    *var_518[2] = *var_320[7];
                    r8_2 = var_318;
                    rsi_25 = *var_318[8];
                    
                    if (r12_4 != 2)
                    {
                        zmm0_12 = var_308;
                        uint64_t var_2f8;
                        rbx_6 = var_2f8;
                        int64_t var_2f0;
                        r14_3 = var_2f0;
                        var_51c_1 = var_518;
                        var_51a_1 = *var_518[2];
                        r10_3 = 0;
                        rdi_41 = false;
                        label_46baf8:
                        var_518 = r12_4;
                        int64_t var_510_1 = r15_1;
                        var_508 = rdx_13;
                        *var_508[8] = r13_3;
                        *var_508[9] = r11_2;
                        *var_508[0xa] = r9_2;
                        *var_508[0xb] = rcx_5;
                        *var_508[0xc] = rax_29;
                        *var_508[0xd] = var_51c_1;
                        *var_508[0xf] = var_51a_1;
                        var_4f8 = r8_2;
                        *var_4f8[8] = rsi_25;
                        var_4e8 = zmm0_12;
                        uint64_t var_4d8_1 = rbx_6;
                        int64_t var_4d0_1 = r14_3;
                        var_318 = var_3a8;
                        var_328 = var_3b8;
                        var_338 = var_3c8;
                        var_318 = var_388;
                        var_308 = var_378;
                        int64_t var_2f0_1 = var_368;
                        int128_t var_2e8_1 = var_498_1;
                        int128_t var_2d8_1 = var_488_1;
                        int64_t var_2c8_1 = var_478_1;
                        char const (** rax_43)[0xc0] = uu_seq::print_seq::hd8f134a0bd2a85e1(
                            &var_338, *var_428[8], var_418_1, *zmm0_4[8], var_400_1, &var_518, 
                            rbx_6, rdi_41, r10_3);
                        
                        if (!rax_43)
                            result = 0;
                        else if (std::io::error::Error::kind::h135fe00c4e7365f3(rax_43) != 0xb)
                            result = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h842103caaddd84ec();
                        else
                        {
                            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hbedef271bd731043(rax_43);
                            result = 0;
                        }
                        
                        core::ptr::drop_in_place$LT$uucore..features..format..Format$LT$uucore..features..format..num_format..Float$C$$RF$uucore..features..extendedbigdecimal..ExtendedBigDecimal$GT$$GT$::h10ba32ca73e4e6fe(&var_518);
                        core::ptr::drop_in_place$LT$uu_seq..SeqOptions$GT$::h62b1a2b151fa4e05(
                            &var_428);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u64$GT$$GT$::h8f47eee04581b9b5(var_4c0, var_4c8_1);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6d0652b0080590cd(&var_460);
                        return result;
                    }
                    
                    *var_328[7] = *var_518[2];
                    *var_328[5] = var_518;
                    var_338 = r15_1;
                    var_330 = rdx_13;
                    var_328 = r13_3;
                    *var_328[1] = r11_2;
                    *var_328[2] = r9_2;
                    *var_328[3] = rcx_5;
                    *var_328[4] = rax_29;
                    int64_t var_320_2 = r8_2;
                    var_318 = rsi_25;
                    result = alloc::boxed::Box$LT$T$GT$::new::hc23a4c00967b272a(&var_338);
                    int64_t var_490;
                    core::ptr::drop_in_place$LT$uu_seq..number..PreciseNumber$GT$::h9d4f9d9c6f44184f(var_498_1, var_490);
                }
                else
                {
                    int128_t var_350;
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_350, var_4c8_1[var_4b0 - 1]);
                    int64_t var_340;
                    var_508 = var_340;
                    var_518 = var_350;
                    *var_508[8] = var_330;
                    result = alloc::boxed::Box$LT$T$GT$::new::h8df98ea5beea200a(&var_518);
                }
            }
            
            int64_t var_380;
            core::ptr::drop_in_place$LT$uu_seq..number..PreciseNumber$GT$::h9d4f9d9c6f44184f(
                var_388, var_380);
            rbx_1 = var_4c8_1;
            core::ptr::drop_in_place$LT$uu_seq..number..PreciseNumber$GT$::h9d4f9d9c6f44184f(
                var_3c8, *var_3c8[8]);
        }
        else
        {
            void* rax_14 = *var_4b8;
            uu_seq::numberparse::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$uu_seq..number..PreciseNumber$GT$::from_str::h0a7ede5c0f7af91b(&var_338, *(rax_14 + 8), *(rax_14 + 0x10));
            
            if (var_338 != 2)
            {
                var_3a8 = var_308;
                var_3b8 = var_318;
                var_3c8 = var_328;
                var_3d8 = var_338;
                
                if (var_4b0 == 2)
                    goto label_46b5e2;
                
                void* rax_21 = var_4b8[1];
                uu_seq::numberparse::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$uu_seq..number..PreciseNumber$GT$::from_str::h0a7ede5c0f7af91b(&var_338, *(rax_21 + 8), *(rax_21 + 0x10));
                
                if (var_338 != 2)
                {
                    var_368 = var_308;
                    var_378 = var_318;
                    var_388 = var_328;
                    var_398 = var_338;
                    goto label_46b5f4;
                }
                
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_4a8, var_4b8[1]);
                var_508 = var_328;
                var_518 = var_4a8;
                *var_508[8] = var_330;
                result = alloc::boxed::Box$LT$T$GT$::new::h8df98ea5beea200a(&var_518);
                rbx_1 = var_4b8;
                core::ptr::drop_in_place$LT$uu_seq..number..PreciseNumber$GT$::h9d4f9d9c6f44184f(
                    var_3c8, *var_3c8[8]);
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_4a8, *var_4b8);
                var_508 = var_328;
                var_518 = var_4a8;
                *var_508[8] = var_330;
                result = alloc::boxed::Box$LT$T$GT$::new::h8df98ea5beea200a(&var_518);
                rbx_1 = var_4b8;
            }
        }
    }
    else
    {
        var_338 = -0x7ffffffffffffffe;
        result = alloc::boxed::Box$LT$T$GT$::new::h8df98ea5beea200a(&var_338);
        rbx_1 = var_4b8;
    }
    core::ptr::drop_in_place$LT$uu_seq..SeqOptions$GT$::h62b1a2b151fa4e05(&var_428);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u64$GT$$GT$::h8f47eee04581b9b5(var_4c0, rbx_1);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6d0652b0080590cd(&var_460);
    return result;
}
