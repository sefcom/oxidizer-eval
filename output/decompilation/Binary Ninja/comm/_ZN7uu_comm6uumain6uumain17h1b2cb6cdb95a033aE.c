
  uint64_t uu_comm::uumain::uumain::h1b2cb6cdb95a033a(int64_t arg1)

{
    int128_t var_2e8;
    uu_comm::uu_app::heda42fe78558df76(&var_2e8);
    uint64_t result_1;
    clap_builder::builder::command::Command::try_get_matches_from::h181a77cac1f57dc4(&result_1, 
        &var_2e8, arg1);
    uint64_t result_4 = result_1;
    void** var_3e0;
    
    if (-(result_4) == -0x8000000000000000)
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3e0);
    
    int64_t var_3b8;
    int64_t var_360 = var_3b8;
    int128_t var_3c8;
    int128_t var_370 = var_3c8;
    int128_t var_3d8;
    int128_t var_380 = var_3d8;
    uint64_t result_5 = result_4;
    void** var_388 = var_3e0;
    char rbp = 0xa;
    
    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &result_5, "zero-terminatedFILE1FILE2", 0xf))
        rbp = 0;
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc986bf75dfb2bd0b(
        &var_2e8, &result_5, "FILE1FILE2");
    void* rax_2 = clap_builder::parser::error::MatchesError::unwrap::h99a8cffcdf606bc7(
        "FILE1FILE2", &var_2e8);
    
    if (rax_2)
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc986bf75dfb2bd0b(
            &var_2e8, &result_5, "FILE2");
        void* rax_3 =
            clap_builder::parser::error::MatchesError::unwrap::h99a8cffcdf606bc7("FILE2", &var_2e8);
        
        if (rax_3)
        {
            uu_comm::open_file::h7884d427373f2014(&var_2e8, *(rax_2 + 8), *(rax_2 + 0x10), rbp);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::haafc44006a8851b9(&result_1, &var_2e8);
            char rax_4 = var_3b8;
            uint64_t result = result_1;
            
            if (rax_4 != 0xb)
            {
                int128_t var_338_1 = var_3c8;
                int128_t var_348_1 = var_3d8;
                int32_t var_327_1 = *var_3b8[1];
                var_327_1 = *var_3b8[4];
                uint64_t result_2 = result;
                void** const var_350_1 = var_3e0;
                char var_328_1 = rax_4;
                uu_comm::open_file::h7884d427373f2014(&var_2e8, *(rax_3 + 8), *(rax_3 + 0x10), rbp);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::haafc44006a8851b9(&result_1, &var_2e8);
                char rax_5 = var_3b8;
                result = result_1;
                
                if (rax_5 != 0xb)
                {
                    int128_t var_300_1 = var_3c8;
                    int128_t var_310_1 = var_3d8;
                    int32_t var_2ef_1 = *var_3b8[1];
                    var_2ef_1 = *var_3b8[4];
                    uint64_t result_3 = result;
                    void** const var_318_1 = var_3e0;
                    char var_2f0_1 = rax_5;
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h201bea90c25efd84(&var_2e8, &result_5);
                    clap_builder::parser::error::MatchesError::unwrap::hbd3b62ba7e51e5e0(&result_1, 
                        &var_2e8);
                    
                    if (!result_1)
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    int128_t var_2b8_1 = var_3b8;
                    int128_t var_2c8_1 = var_3c8;
                    int128_t var_2d8_1 = var_3d8;
                    var_2e8 = result_1;
                    void var_3a8;
                    core::iter::traits::iterator::Iterator::collect::h4381b22585bb38a4(&var_3a8, 
                        &var_2e8);
                    int64_t var_398;
                    
                    if (!var_398)
                    {
                        core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(1, 0);
                        /* no return */
                    }
                    
                    int64_t r15_2 = 0;
                    
                    while (true)
                    {
                        void* var_3a0;
                        
                        if (var_398 * 0x18 + -0xffffffffffffffe8 == r15_2)
                        {
                            char* rbx_3 = *(var_3a0 + 8);
                            uint64_t r14_3 = *(var_3a0 + 0x10);
                            uint64_t r15_3 = 1;
                            char rax_11 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::heef2191397db73b6(rbx_3, r14_3, 1, 0);
                            char const* const rdx_7 = &data_418183[0x19];
                            
                            if (!rax_11)
                                rdx_7 = rbx_3;
                            
                            if (!rax_11)
                                r15_3 = r14_3;
                            
                            result = uu_comm::comm::h801203c8d9c12946(&result_2, &result_3, rdx_7, 
                                r15_3, &result_5);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h56d5ca914f97bac9(&var_3a8);
                            core::ptr::drop_in_place$LT$uu_comm..LineReader$GT$::h10723131176a625c(
                                &result_3);
                            break;
                        }
                        
                        char rax_8 = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h55b011975c5ce3ef(*(var_3a0 + r15_2 + 0x20), *(var_3a0 + r15_2 + 0x28), 
                            *(var_3a0 + 8), *(var_3a0 + 0x10));
                        r15_2 += 0x18;
                        
                        if (!rax_8)
                        {
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hb4fb8443dc0132f8(&result_1, "multiple conflicting output deli…", 0x30);
                            var_2d8_1 = var_3d8;
                            var_2e8 = result_1;
                            *var_2d8_1[8] = 1;
                            result = alloc::boxed::Box$LT$T$GT$::new::heeaf76c1ef99f7fa(&var_2e8);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h56d5ca914f97bac9(&var_3a8);
                            core::ptr::drop_in_place$LT$uu_comm..LineReader$GT$::h10723131176a625c(
                                &result_3);
                            break;
                        }
                    }
                }
                
                core::ptr::drop_in_place$LT$uu_comm..LineReader$GT$::h10723131176a625c(&result_2);
            }
            
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h013d5c357a168e48(&result_5);
            return result;
        }
    }
    
    core::option::unwrap_failed::h893f57cb7db71cb7();
    /* no return */
}
