
  int64_t* uu_shred::uumain::uumain::ha4d870c4a682fe02(int64_t arg1)

{
    int64_t r13 = -0x8000000000000000;
    int128_t var_2f8;
    uu_shred::uu_app::h2fbccd128ef7bb3f(&var_2f8);
    void* const var_3e0;
    clap_builder::builder::command::Command::try_get_matches_from::h99921733234819cb(&var_3e0, 
        &var_2f8, arg1);
    void* const rax = var_3e0;
    int64_t var_3d8;
    
    if (rax == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_3d8);
    
    int64_t var_3b0;
    int64_t var_360_1 = var_3b0;
    int128_t var_3c0;
    int128_t var_370_1 = var_3c0;
    int128_t var_3d0;
    int128_t var_380_1 = var_3d0;
    void* const var_390 = rax;
    int64_t var_388_1 = var_3d8;
    int64_t* result;
    
    if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
        &var_390, "filei128 as dyn ", 4))
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h06f51ff0b681cc1d(&var_3e0);
        int64_t var_2e8_3 = var_3d0;
        var_2f8 = var_3e0;
        int32_t var_2e0_2 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h6f09ec56500fdb36(&var_2f8);
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9ae0da281e336987(
            &var_2f8, &var_390, "iterationsmissing file operandin…", 0xa);
        void* rax_3 = clap_builder::parser::error::MatchesError::unwrap::h232dbe99beeae5a0(
            "iterationsmissing file operandin…", 0xa, &var_2f8);
        
        if (!rax_3)
        {
            core::panicking::panic::h8c3a660c3523e4a4("internal error: entered unreacha…");
            /* no return */
        }
        
        char* r14_1 = *(rax_3 + 8);
        int64_t r15_1 = *(rax_3 + 0x10);
        char var_3a0;
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_3a0, r14_1, r15_1);
        int64_t* var_348;
        int32_t var_2e0;
        
        if (!var_3a0)
        {
            char r12_1 = 3;
            
            if (!
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_390, "uforceexactverbose", 1))
            {
                if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&var_390, "removeunlinkinternal error: ente…", 6))
                    r12_1 = 0;
                else
                {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9ae0da281e336987(&var_2f8, &var_390, "removeunlinkinternal error: ente…", 6);
                    void* rax_11 =
                        clap_builder::parser::error::MatchesError::unwrap::h232dbe99beeae5a0(
                        "removeunlinkinternal error: ente…", 6, &var_2f8);
                    
                    if (!rax_11)
                    {
                        label_474cf3:
                        var_2f8 = &data_535d90;
                        *var_2f8[8] = 1;
                        void var_3f8;
                        void* var_2e8_4 = &var_3f8;
                        var_2e0 = {0};
                        core::panicking::panic_fmt::he12d0d7468628bb4(&var_2f8);
                        /* no return */
                    }
                    
                    *(rax_11 + 0x10);
                    int64_t rax_12;
                    uint64_t rdx_5;
                    rax_12 =
                        core::ops::function::FnOnce::call_once::h18758c16304d57a3(*(rax_11 + 8));
                    
                    if (!rax_12)
                        goto label_474cf3;
                    
                    r12_1 = 1;
                    
                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4e8ad70e399e9a77(rax_12, rdx_5, "unlinkinternal error: entered un…", 6))
                    {
                        r12_1 = 2;
                        
                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4e8ad70e399e9a77(rax_12, rdx_5, "wipe -> \x1b[2mzeroAnsi -- \x1b[…", 4))
                        {
                            r12_1 = 3;
                            
                            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4e8ad70e399e9a77(rax_12, rdx_5, "wipesync", 8))
                                goto label_474cf3;
                        }
                    }
                }
            }
            
            char rax_16 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_390, "forceexactverbose", 5);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9ae0da281e336987(
                &var_2f8, &var_390, "sizefilei128 as dyn ", 4);
            void* rax_17 = clap_builder::parser::error::MatchesError::unwrap::h232dbe99beeae5a0(
                "sizefilei128 as dyn ", 4, &var_2f8);
            int128_t var_328;
            
            if (rax_17)
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_2f8, rax_17);
                r13 = var_2f8;
                var_328 = var_2f8;
            }
            
            var_2f8 = r13;
            var_2f8 = var_328;
            int64_t rax_18;
            int64_t rdx_7;
            rax_18 = uu_shred::get_size::h94b39895cde5bfc0(&var_2f8);
            char rax_19 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_390, "exactverbose", 5);
            r14_1 = rax_18 == 1;
            char rax_20 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_390, "zeroAnsi -- \x1b[8mhelpNoneshimn…", 4);
            char rax_21 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_390, "verbose", 7);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::he002fca6a0afce48(
                &var_2f8, &var_390, "filei128 as dyn ", 4);
            clap_builder::parser::error::MatchesError::unwrap::h31860016ec26d6ae(&var_3e0, 
                "filei128 as dyn ", 4, &var_2f8);
            
            if (!var_3e0)
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            int128_t var_2c8_1 = var_3b0;
            int64_t var_2d8;
            var_2d8 = var_3c0;
            int64_t var_2e8;
            var_2e8 = var_3d0;
            var_2f8 = var_3e0;
            
            while (true)
            {
                void* rax_23 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf805dfc0e659cc7d(&var_2f8);
                
                if (!rax_23)
                    break;
                
                int64_t var_398;
                int128_t* rax_24;
                int64_t* rdx_9;
                rax_24 = uu_shred::wipe_file::hcdd557f5a4f902dc(*(rax_23 + 8), *(rax_23 + 0x10), 
                    var_398, r12_1, rax_18, rdx_7, rax_19 | r14_1, rax_20, rax_21, rax_16);
                
                if (rax_24)
                {
                    int128_t* var_3f0 = rax_24;
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(rdx_9[0xc](rax_24));
                    int64_t rax_26;
                    int64_t rdx_10;
                    rax_26 = uucore::util_name::h60d842bf27b05e82();
                    var_3a0 = rax_26;
                    int64_t var_398_1 = rdx_10;
                    var_348 = &var_3a0;
                    int64_t (* var_340_2)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc8f8012ae4a14f0e;
                    int128_t** var_338_1 = &var_3f0;
                    int64_t (* var_330_1)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hd17b5a2a40f7a343;
                    var_3e0 = &data_535da0;
                    int64_t var_3d8_2 = 3;
                    var_3c0 = 0;
                    var_3d0 = &var_348;
                    *var_3d0[8] = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_3e0);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::he57c1f6784037e65(var_3f0, rdx_9);
                }
            }
            
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0da6067fb215cf4f(&var_390);
            return nullptr;
        }
        
        var_3e0 = nullptr;
        char* var_3d8_1 = r14_1;
        var_3d0 = r15_1;
        *var_3d0[8] = 1;
        var_348 = &var_3e0;
        int64_t (* var_340_1)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_2f8 = &data_535d80;
        *var_2f8[8] = 1;
        int64_t var_2d8_1 = 0;
        int64_t** var_2e8_1 = &var_348;
        var_2e0 = 1;
        int128_t var_310;
        core::option::Option$LT$T$GT$::map_or_else::h1468cc81a7d721f1(&var_310, &var_2f8);
        int32_t var_2e0_1 = 1;
        var_2f8 = var_310;
        int64_t var_300;
        int64_t var_2e8_2 = var_300;
        result = alloc::boxed::Box$LT$T$GT$::new::h6f09ec56500fdb36(&var_2f8);
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0da6067fb215cf4f(&var_390);
    return result;
}
