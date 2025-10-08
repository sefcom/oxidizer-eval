
  uint64_t uu_shred::uumain::uumain::h5887b3d9b9cbbb8d(int64_t arg1)

{
    int128_t var_2f8;
    uu_shred::uu_app::hd2dcc3f31ff24fbd(&var_2f8);
    void* const var_3e0;
    clap_builder::builder::command::Command::try_get_matches_from::hb2603a8aac55f96b(&var_3e0, 
        &var_2f8, arg1);
    void* const rax = var_3e0;
    int64_t var_3d8;
    
    if (-(rax) == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3d8);
    
    int64_t var_3b0;
    int64_t var_360_1 = var_3b0;
    int128_t var_3c0;
    int128_t var_370_1 = var_3c0;
    int128_t var_3d0;
    int128_t var_380_1 = var_3d0;
    void* const var_390 = rax;
    int64_t var_388_1 = var_3d8;
    uint64_t result;
    
    if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
        &var_390, "filesizei128 as dyn ERANGEEDEADL…", 4))
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hf24d55a9f5c3adef(&var_3e0, "missing file operandinvalid numb…", 0x14);
        int64_t var_2e8_3 = var_3d0;
        var_2f8 = var_3e0;
        int32_t var_2e0_2 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h0cbabd4dbd3f10dd(&var_2f8);
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h092ce364be16c0e0(
            &var_2f8, &var_390, "iterationsuremoveforceexactverbo…", 0xa);
        void* rax_3 = clap_builder::parser::error::MatchesError::unwrap::hd0a37637593e9037(
            "iterationsuremoveforceexactverbo…", 0xa, &var_2f8);
        
        if (!rax_3)
        {
            core::panicking::panic::h85d6dd562679980c("internal error: entered unreacha…");
            /* no return */
        }
        
        char* r14_1 = *(rax_3 + 8);
        int64_t r15_1 = *(rax_3 + 0x10);
        char var_3a0;
        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_3a0, r14_1, 
            r15_1);
        int64_t* var_348;
        int32_t var_2e0;
        
        if (!var_3a0)
        {
            char r12_1 = 3;
            
            if (!
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_390, "uremoveforceexactverboseError fl…", 1))
            {
                if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_390, "removeforceexactverboseError flu…", 6))
                    r12_1 = 0;
                else
                {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h092ce364be16c0e0(&var_2f8, &var_390, "removeforceexactverboseError flu…", 6);
                    void* rax_11 =
                        clap_builder::parser::error::MatchesError::unwrap::hd0a37637593e9037(
                        "removeforceexactverboseError flu…", 6, &var_2f8);
                    
                    if (!rax_11)
                    {
                        label_45d68a:
                        var_2f8 = &data_4f9130;
                        *var_2f8[8] = 1;
                        void var_3f8;
                        void* var_2e8_4 = &var_3f8;
                        var_2e0 = {0};
                        core::panicking::panic_fmt::h96f341d36638c225(&var_2f8);
                        /* no return */
                    }
                    
                    int64_t rbx_1 = *(rax_11 + 8);
                    uint64_t r15_2 = *(rax_11 + 0x10);
                    r12_1 = 1;
                    
                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h0fae521c240e2ca1(rbx_1, r15_2, "unlinkinternal error: entered un…", 6))
                    {
                        r12_1 = 2;
                        
                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h0fae521c240e2ca1(rbx_1, r15_2, "wi", 4))
                        {
                            r12_1 = 3;
                            
                            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h0fae521c240e2ca1(rbx_1, r15_2, "wipesync", 8))
                                goto label_45d68a;
                        }
                    }
                }
            }
            
            char rax_15 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_390, "forceexactverboseError flushing …", 5);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h092ce364be16c0e0(
                &var_2f8, &var_390, "sizei128 as dyn ERANGEEDEADLKENA…", 4);
            void* rax_16 = clap_builder::parser::error::MatchesError::unwrap::hd0a37637593e9037(
                "sizei128 as dyn ERANGEEDEADLKENA…", 4, &var_2f8);
            int128_t var_328;
            int64_t rax_17;
            
            if (!rax_16)
                rax_17 = -0x8000000000000000;
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_2f8, rax_16);
                rax_17 = var_2f8;
                var_328 = var_2f8;
            }
            
            var_2f8 = rax_17;
            var_2f8 = var_328;
            int64_t rax_18;
            int64_t rdx_6;
            rax_18 = uu_shred::get_size::hc596c7d8cb6dc047(&var_2f8);
            char rax_19 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_390, "exactverboseError flushing stdou…", 5);
            r14_1 = rax_18 == 1;
            char rax_20 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_390, "zeroAnsi -- \x1b[8mhelpNoneshim\x1b…", 4);
            char rax_21 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_390, "verboseError flushing stdout: ", 7);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h8bd62655a1af8d38(
                &var_2f8, &var_390);
            clap_builder::parser::error::MatchesError::unwrap::h33ee07f20d67fd13(&var_3e0, 
                &var_2f8);
            
            if (!var_3e0)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
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
                void* rax_23 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::heca40172de734678(&var_2f8);
                
                if (!rax_23)
                    break;
                
                int64_t var_398;
                uint64_t rax_24;
                int64_t* rdx_8;
                rax_24 = uu_shred::wipe_file::h03ce7ff5299acd49(*(rax_23 + 8), *(rax_23 + 0x10), 
                    var_398, r12_1, rax_18, rdx_6, rax_19 | r14_1, rax_20, rax_21, rax_15);
                
                if (!rax_24)
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h18201937fcef5433(0, rdx_8);
                else
                {
                    uint64_t var_3f0 = rax_24;
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(rdx_8[0xb](rax_24));
                    int64_t rax_26;
                    int64_t rdx_9;
                    rax_26 = uucore::util_name::h074417a1e6395129();
                    var_3a0 = rax_26;
                    int64_t var_398_1 = rdx_9;
                    var_348 = &var_3a0;
                    int64_t (* var_340_2)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h70866de6320419bf;
                    uint64_t* var_338_1 = &var_3f0;
                    int64_t (* var_330_1)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h8d46ecfbc1450336;
                    var_3e0 = &data_4f9140;
                    int64_t var_3d8_2 = 3;
                    var_3c0 = 0;
                    var_3d0 = &var_348;
                    *var_3d0[8] = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_3e0);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h2f42d0ed9674364b(var_3f0, rdx_8);
                }
            }
            
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h5e7a0c77e1447be5(&var_390);
            return 0;
        }
        
        var_3e0 = nullptr;
        char* var_3d8_1 = r14_1;
        var_3d0 = r15_1;
        *var_3d0[8] = 1;
        var_348 = &var_3e0;
        int64_t (* var_340_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_2f8 = &data_4f9120;
        *var_2f8[8] = 1;
        int64_t var_2d8_1 = 0;
        int64_t** var_2e8_1 = &var_348;
        var_2e0 = 1;
        int128_t var_310;
        core::option::Option$LT$T$GT$::map_or_else::h8c2fdc05c5d844dc(&var_310, &var_2f8);
        int32_t var_2e0_1 = 1;
        var_2f8 = var_310;
        int64_t var_300;
        int64_t var_2e8_2 = var_300;
        result = alloc::boxed::Box$LT$T$GT$::new::h0cbabd4dbd3f10dd(&var_2f8);
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h5e7a0c77e1447be5(&var_390);
    return result;
}
