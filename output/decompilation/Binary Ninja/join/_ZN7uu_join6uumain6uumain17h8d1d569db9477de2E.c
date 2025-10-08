
  uint64_t uu_join::uumain::uumain::h8d1d569db9477de2(int64_t arg1)

{
    int64_t var_460;
    uu_join::uu_app::hf0c646455b56e430(&var_460);
    int64_t var_180;
    clap_builder::builder::command::Command::try_get_matches_from::h6344f1457e8c4b42(&var_180, 
        &var_460, arg1);
    int64_t rax = var_180;
    int64_t var_178;
    
    if (-(rax) == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_178);
    
    int64_t var_150;
    int64_t var_4c8_1 = var_150;
    int128_t var_160;
    int128_t var_4d8_1 = var_160;
    int128_t var_170;
    int128_t var_4e8_1 = var_170;
    int64_t var_4f8 = rax;
    int64_t var_4f0_1 = var_178;
    uu_join::parse_settings::ha7f529424dcbcc67(&var_460, &var_4f8);
    int64_t rax_2 = var_460;
    uint64_t result_2;
    uint64_t result = result_2;
    
    if (rax_2 != -0x8000000000000000)
    {
        int64_t var_408;
        int64_t var_510_1 = var_408;
        int64_t var_568 = rax_2;
        uint64_t result_1 = result;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h044ef7089f501803(
            &var_460, &var_4f8, "file1file2-/home/34r7hm4n/.rustu…");
        void* rax_3 = clap_builder::parser::error::MatchesError::unwrap::h303782eb8d86c058(
            "file1file2-/home/34r7hm4n/.rustu…", &var_460);
        void* rax_4;
        
        if (rax_3)
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h044ef7089f501803(
                &var_460, &var_4f8, "file2-/home/34r7hm4n/.rustup/too…");
            rax_4 = clap_builder::parser::error::MatchesError::unwrap::h303782eb8d86c058(
                "file2-/home/34r7hm4n/.rustup/too…", &var_460);
        }
        
        if (!rax_3 || !rax_4)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        uint64_t r12_1 = 1;
        char rax_5 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h6dfc583ec70d37c7(*(rax_3 + 8), *(rax_3 + 0x10), "-/home/34r7hm4n/.rustup/toolchai…", 1);
        char rax_6;
        
        if (rax_5)
            rax_6 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h6dfc583ec70d37c7(*(rax_4 + 8), *(rax_4 + 0x10), "-/home/34r7hm4n/.rustup/toolchai…", 1);
        
        int128_t var_448;
        
        if (!rax_5 || !rax_6)
        {
            int128_t var_438;
            int64_t r15_1 = *var_438[8];
            uint64_t rcx_5 = r15_1 ^ 0x8000000000000000;
            
            if (rcx_5 < 4)
                r12_1 = rcx_5;
            
            int128_t var_428;
            uint64_t rax_9;
            
            switch (r12_1)
            {
                case 0:
                {
                    rax_9 = var_428;
                    r12_1 = *var_428[1] | (*var_428[5] | *var_428[7] << 0x10) << 0x20;
                    uint64_t rdx_5 = 1;
                    
                    if (rcx_5 < 4)
                        rdx_5 = rcx_5;
                    
                    void** var_450;
                    uint64_t result_3;
                    void** rdx_18;
                    
                    switch (rdx_5)
                    {
                        case 0:
                        {
                            label_4660cf:
                            var_450 = var_450;
                            var_460 = var_568;
                            result_3 = uu_join::exec::h240f3fcdcfc58a54(*(rax_3 + 8), 
                                *(rax_3 + 0x10), *(rax_4 + 8), *(rax_4 + 0x10), &var_460, rax_9);
                            result = result_3;
                            break;
                        }
                        case 1:
                        {
                            label_4661df:
                            uint64_t r12_5 = r12_1 << 8 | rax_9;
                            int64_t r13_3 = *(rax_3 + 8);
                            uint64_t rax_11 = *(rax_3 + 0x10);
                            uint64_t rax_12 = *(rax_4 + 8);
                            uint64_t r14_3 = *(rax_4 + 0x10);
                            int128_t var_418;
                            int128_t var_470_1 = var_418;
                            int128_t var_480_1 = var_428;
                            int128_t var_490_1 = var_438;
                            int128_t var_4a0_1 = var_448;
                            int128_t var_4b0_1 = var_450;
                            int128_t var_4c0 = var_568;
                            memchr::memmem::FinderBuilder::build_forward_with_ranker::he3705527259d3c49(&var_460, 1, r12_5);
                            memcpy(&var_180, &var_460, 0x120);
                            uint64_t result_4;
                            void** rdx_23;
                            result_4 = uu_join::exec::h3f5682ee62539478(r13_3, rax_11, rax_12, 
                                r14_3, &var_4c0, &var_180);
                            result = result_4;
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h58ee7191efc6e1eb(r15_1, r12_5);
                            break;
                        }
                        case 2:
                        {
                            label_466143:
                            var_450 = var_450;
                            var_460 = var_568;
                            result_3 = uu_join::exec::hdc95ee4ff91a8f17(*(rax_3 + 8), 
                                *(rax_3 + 0x10), *(rax_4 + 8), *(rax_4 + 0x10), &var_460);
                            result = result_3;
                            break;
                        }
                        case 3:
                        {
                            label_4661b0:
                            var_450 = var_450;
                            var_460 = var_568;
                            result_3 = uu_join::exec::hfcb69fdd78287944(*(rax_3 + 8), 
                                *(rax_3 + 0x10), *(rax_4 + 8), *(rax_4 + 0x10), &var_460);
                            result = result_3;
                            break;
                        }
                    }
                    break;
                }
                case 1:
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h950c0b3c5b783c8f(&var_460, var_428, *var_428[8]);
                    r15_1 = var_460;
                    rax_9 = result_2;
                    r12_1 = *result_2[1] | (*result_2[5] | *result_2[7] << 0x10) << 0x20;
                    int64_t r13_2 = -0x8000000000000000 ^ r15_1;
                    int64_t rdx_14 = 1;
                    
                    if (r13_2 < 4)
                        rdx_14 = r13_2;
                    
                    switch (rdx_14)
                    {
                        case 0:
                        {
                            goto label_4660cf;
                        }
                        case 1:
                        {
                            goto label_4661df;
                        }
                        case 2:
                        {
                            goto label_466143;
                        }
                        case 3:
                        {
                            goto label_4661b0;
                        }
                    }
                    break;
                }
                case 2:
                {
                    r15_1 = -0x7ffffffffffffffe;
                    label_465fee:
                    uint64_t r13_1 = -0x8000000000000000 ^ r15_1;
                    rax_9 = 1;
                    
                    if (r13_1 < 4)
                        rax_9 = r13_1;
                    
                    switch (rax_9)
                    {
                        case 1:
                        {
                            goto label_4661df;
                        }
                        case 2:
                        {
                            goto label_466143;
                        }
                        case 3:
                        {
                            goto label_4661b0;
                        }
                    }
                    break;
                }
                case 3:
                {
                    r15_1 = -0x7ffffffffffffffd;
                    goto label_465fee;
                }
            }
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h2e3148bc2a0eecbc(&var_180, "both files cannot be standard in…", 0x23);
            int64_t var_450_1 = var_170;
            var_460 = var_180;
            var_448 = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::ha572905631bde212(&var_460);
            core::ptr::drop_in_place$LT$uu_join..Settings$GT$::ha1256ac33370452f(&var_568);
        }
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hbafc4eb677249fa1(&var_4f8);
    return result;
}
