
  int64_t* uu_join::uumain::uumain::h1b6d83c6f48ee96d(int64_t arg1)

{
    int64_t var_460;
    uu_join::uu_app::h2d689a8b41cf12f0(&var_460);
    int64_t var_180;
    clap_builder::builder::command::Command::try_get_matches_from::h7cd18d2507ff2cb6(&var_180, 
        &var_460, arg1);
    int64_t rax = var_180;
    int64_t* result;
    int64_t var_178;
    
    if (rax != -0x8000000000000000)
    {
        int64_t var_150;
        int64_t var_4c8_1 = var_150;
        int128_t var_160;
        int128_t var_4d8_1 = var_160;
        int128_t var_170;
        int128_t var_4e8_1 = var_170;
        int64_t var_4f8 = rax;
        int64_t var_4f0_1 = var_178;
        uu_join::parse_settings::h8cf47cd535767909(&var_460, &var_4f8);
        int64_t rax_2 = var_460;
        int64_t* result_2;
        result = result_2;
        
        if (rax_2 != -0x8000000000000000)
        {
            int64_t var_408;
            int64_t var_528_1 = var_408;
            int128_t var_438;
            int128_t var_558 = var_438;
            int64_t var_580 = rax_2;
            int64_t* result_1 = result;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a3561c1fe3beb95(
                &var_460, &var_4f8, "file1file2-capacity overflow/rus…", 5);
            void* rax_3 = clap_builder::parser::error::MatchesError::unwrap::hed9f402bd0e7a7b2(
                "file1file2-capacity overflow/rus…", 5, &var_460);
            void* rax_4;
            
            if (rax_3)
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a3561c1fe3beb95(&var_460, &var_4f8, "file2-capacity overflow/rustc/8b…", 5);
                rax_4 = clap_builder::parser::error::MatchesError::unwrap::hed9f402bd0e7a7b2(
                    "file2-capacity overflow/rustc/8b…", 5, &var_460);
            }
            
            if (!rax_3 || !rax_4)
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            int64_t r14_2 = *(rax_3 + 8);
            uint64_t rbx_2 = *(rax_3 + 0x10);
            char rax_5 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8d59285a30fd8aff(r14_2, rbx_2, "-capacity overflow/rustc/8bfcae7…", 1);
            char rax_6;
            
            if (rax_5)
                rax_6 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8d59285a30fd8aff(*(rax_4 + 8), *(rax_4 + 0x10), "-capacity overflow/rustc/8bfcae7…", 1);
            
            int128_t var_448;
            
            if (!rax_5 || !rax_6)
            {
                int64_t rax_10 = *var_558[8] ^ 0x8000000000000000;
                int64_t rdx_3 = 1;
                
                if (rax_10 >= 4)
                    rax_10 = 1;
                
                int64_t* result_5;
                void** result_7;
                char rax_13;
                void* result_3;
                int64_t rcx_3;
                void** rdx_13;
                
                switch (rax_10)
                {
                    case 0:
                    {
                        int128_t var_428;
                        rax_13 = var_428;
                        rcx_3 = -0x8000000000000000;
                        
                        switch (0)
                        {
                            case 0:
                            {
                                label_475406:
                                var_438 = var_558;
                                result_7 = result_7;
                                var_460 = var_580;
                                result_3 = uu_join::exec::h84507deb68976620(r14_2, rbx_2, 
                                    *(rax_4 + 8), *(rax_4 + 0x10), &var_460, rax_13);
                                result = result_3;
                                break;
                            }
                            case 1:
                            {
                                label_47551f:
                                int64_t var_520 = rcx_3;
                                char var_518_1 = rax_13;
                                int64_t* result_6 = result_5;
                                result_6 = result_5;
                                int64_t r12_3 = *(rax_4 + 8);
                                uint64_t r15_2 = *(rax_4 + 0x10);
                                int128_t var_418;
                                int128_t var_470_1 = var_418;
                                int128_t var_480_1 = var_428;
                                int128_t var_490_1 = var_558;
                                int128_t var_4a0_1 = var_448;
                                int128_t var_4b0_1 = result_7;
                                int128_t var_4c0 = var_580;
                                var_180 = 1;
                                memchr::memmem::FinderBuilder::build_forward_with_ranker::h00ab6db1a626f082(&var_460, &var_180, &var_520);
                                memcpy(&var_180, &var_460, 0x120);
                                int128_t* result_4;
                                void** rdx_18;
                                result_4 = uu_join::exec::h99a16e0e986e240a(r14_2, rbx_2, r12_3, 
                                    r15_2, &var_4c0, &var_180);
                                result = result_4;
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8146444ea6c0efb2(&var_520);
                                break;
                            }
                        }
                        break;
                    }
                    case 1:
                    {
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0ad05dcf4e8c4432(&var_460, &*var_558[8]);
                        rcx_3 = var_460;
                        rax_13 = result_2;
                        result_5 = result_2;
                        int64_t r12_2 = -0x8000000000000000 ^ rcx_3;
                        int64_t rdx_9 = 1;
                        
                        if (r12_2 < 4)
                            rdx_9 = r12_2;
                        
                        result_5 = result_7;
                        
                        switch (rdx_9)
                        {
                            case 0:
                            {
                                goto label_475406;
                            }
                            case 1:
                            {
                                goto label_47551f;
                            }
                            case 2:
                            {
                                label_475477:
                                var_438 = var_558;
                                result_7 = result_7;
                                var_460 = var_580;
                                result_3 = uu_join::exec::h3549e6cfd5b8c4ea(r14_2, rbx_2, 
                                    *(rax_4 + 8), *(rax_4 + 0x10), &var_460);
                                result = result_3;
                                break;
                            }
                            case 3:
                            {
                                label_4754e1:
                                var_438 = var_558;
                                result_7 = result_7;
                                var_460 = var_580;
                                result_3 = uu_join::exec::he72a5f97bdf4dbef(r14_2, rbx_2, 
                                    *(rax_4 + 8), *(rax_4 + 0x10), &var_460);
                                result = result_3;
                                break;
                            }
                        }
                        break;
                    }
                    case 2:
                    {
                        rcx_3 = -0x7ffffffffffffffe;
                        label_47535a:
                        int64_t r12_1 = -0x8000000000000000 ^ rcx_3;
                        
                        if (r12_1 < 4)
                            rdx_3 = r12_1;
                        
                        rax_13 = 0x38;
                        
                        switch (rdx_3)
                        {
                            case 1:
                            {
                                goto label_47551f;
                            }
                            case 2:
                            {
                                goto label_475477;
                            }
                            case 3:
                            {
                                goto label_4754e1;
                            }
                        }
                        break;
                    }
                    case 3:
                    {
                        rcx_3 = -0x7ffffffffffffffd;
                        goto label_47535a;
                    }
                }
            }
            else
            {
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hffccecc10e570152(
                    &var_180);
                int64_t var_450 = var_170;
                var_460 = var_180;
                var_448 = 1;
                result = alloc::boxed::Box$LT$T$GT$::new::h5d0185bc8dd5466c(&var_460);
                core::ptr::drop_in_place$LT$uu_join..Settings$GT$::h9f47be3a5d5db85b(&var_580);
            }
        }
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he0c483a964158d1e(&var_4f8);
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_178);
    return result;
}
