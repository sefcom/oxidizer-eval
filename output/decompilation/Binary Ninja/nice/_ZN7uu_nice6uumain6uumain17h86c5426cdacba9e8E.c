
  uint64_t uu_nice::uumain::uumain::h86c5426cdacba9e8(int64_t arg1)

{
    void var_318;
    uu_nice::standardize_nice_args::ha446c24066e6006d(&var_318, arg1);
    char var_2f8;
    uu_nice::uu_app::h9be1c328dcb05353(&var_2f8);
    int32_t* var_3d8;
    clap_builder::builder::command::Command::try_get_matches_from::h957c5b32311c2989(&var_3d8, 
        &var_2f8, &var_318);
    int32_t* rax = var_3d8;
    int64_t* argv;
    
    if (-(rax) == -0x8000000000000000)
        return alloc::boxed::Box$LT$T$GT$::new::he9c1a89dbf08c502(argv, 0x7d);
    
    int128_t var_3c4;
    int128_t var_36c_1 = var_3c4;
    int128_t var_3b4;
    int128_t var_35c_1 = var_3b4;
    int32_t var_3a4;
    int32_t var_34c_1 = var_3a4;
    int32_t* var_380 = rax;
    int64_t* argv_1 = argv;
    int32_t var_3c8;
    int32_t var_370_1 = var_3c8;
    nix::errno::_$LT$impl$u20$nix..errno..consts..Errno$GT$::clear::h624c875a22ccd2d1();
    int32_t rax_2 = getpriority(PRIO_PROCESS, 0);
    int32_t var_404 = rax_2;
    void** rax_3 = __errno_location();
    int64_t r15_3 = *rax_3 << 0x20 | 2;
    std::io::error::repr_bitpacked::decode_repr::h9f1fc6dea12f3e72(&var_2f8, r15_3);
    
    if (var_2f8)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    int32_t var_2f4;
    uint64_t result;
    int64_t var_3f0;
    
    if (!var_2f4)
    {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5c0b8fe645a553e5(r15_3);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1fe75eb626fa2790(
            &var_2f8, &var_380, "adjustmentCOMMANDsrc/uu/nice/src…", 0xa);
        void* rax_9 = clap_builder::parser::error::MatchesError::unwrap::haddbc4ced1b44624(
            "adjustmentCOMMANDsrc/uu/nice/src…", 0xa, &var_2f8);
        uint32_t rax_14;
        
        if (!rax_9)
        {
            rax_14 = 0xa;
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_380, "COMMANDsrc/uu/nice/src/nice.rsRu…", 7))
                goto label_452b52;
            
            var_3d8 = &var_404;
            uint64_t (* var_3d0_2)(int32_t* arg1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
            var_2f8 = &data_4dae78;
            int64_t var_2f0_3 = 2;
            int64_t var_2d8_3 = 0;
            int32_t** var_2e8_5 = &var_3d8;
            int64_t var_2e0_3 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_2f8);
            result = 0;
        }
        else
        {
            void* var_388 = rax_9;
            
            if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_380, "COMMANDsrc/uu/nice/src/nice.rsRu…", 7))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h2a17592469341a2b(&var_3d8, "A command must be given with an …", 0x2b);
                int64_t var_2e8_6 = var_3c8;
                var_2f8 = var_3d8;
                int64_t var_2e0;
                var_2e0 = 0x7d;
                result = alloc::boxed::Box$LT$T$GT$::new::h10d0a70c4624870f(&var_2f8);
            }
            else
            {
                int64_t rax_11 =
                    core::num::_$LT$impl$u20$i32$GT$::from_ascii_radix::h8c416a74051ba1e6(
                    *(rax_9 + 8), *(rax_9 + 0x10));
                
                if (!(rax_11 & 1))
                {
                    rax_14 = rax_11 >> 0x20;
                    label_452b52:
                    int32_t rbp_2 = rax_2 + rax_14;
                    var_404 = rbp_2;
                    
                    if (setpriority(0, 0, rbp_2) != 0xffffffff)
                        goto label_452b91;
                    
                    int64_t* var_398 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                    int64_t rax_22;
                    int64_t rdx_10;
                    rax_22 = uucore::util_name::h074417a1e6395129();
                    var_3f0 = rax_22;
                    int64_t var_3e8 = rdx_10;
                    int64_t** var_400 = *rax_3 << 0x20 | 2;
                    var_3d8 = &var_3f0;
                    argv = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h43d45138044c2afe;
                    var_3c8 = &var_400;
                    *var_3c4[4] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                    var_2f8 = &data_4daf00;
                    int64_t var_2f0_6 = 2;
                    int64_t var_2d8 = 0;
                    int32_t** var_2e8 = &var_3d8;
                    int64_t var_2e0_6 = 2;
                    void* rax_26 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(&var_398, &var_2f8);
                    
                    if (!rax_26)
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h74030e7c43287adc(0);
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5c0b8fe645a553e5(
                            var_400);
                        label_452b91:
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hf7158cb6cc1c6b5d(&var_2f8, &var_380, "COMMANDsrc/uu/nice/src/nice.rsRu…", 7);
                        clap_builder::parser::error::MatchesError::unwrap::h3283cf699de599ee(
                            &var_3d8, "COMMANDsrc/uu/nice/src/nice.rsRu…", 7, &var_2f8);
                        
                        if (!var_3d8)
                        {
                            core::option::unwrap_failed::h893f57cb7db71cb7();
                            /* no return */
                        }
                        
                        int128_t var_2c8_1 = var_3b4;
                        var_2d8 = var_3c4;
                        var_2e8 = var_3c8;
                        var_2f8 = var_3d8;
                        core::iter::traits::iterator::Iterator::collect::hca13c6b89a368b3c(
                            &var_3f0, &var_2f8);
                        core::iter::traits::iterator::Iterator::collect::hac1c030636c1b29a(
                            &var_3d8, var_3e8);
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h8c30812ad29a1869(&var_3d8);
                        
                        if (!var_3c8)
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
                            /* no return */
                        }
                        
                        execvp(*argv, argv);
                        int64_t** rax_18;
                        int64_t rdx_9;
                        rax_18 = uucore::util_name::h074417a1e6395129();
                        var_400 = rax_18;
                        int64_t var_3f8_1 = rdx_9;
                        var_398 = &var_400;
                        int64_t (* var_390_1)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h43d45138044c2afe;
                        var_2f8 = &data_4dae58;
                        int64_t var_2f0_4 = 2;
                        int64_t var_2d8_4 = 0;
                        int64_t** var_2e8_7 = &var_398;
                        int64_t var_2e0_4 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_2f8);
                        var_398 = *rax_3 << 0x20 | 2;
                        var_400 = &var_398;
                        int64_t (* var_3f8_2)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                        var_2f8 = &data_4daf20;
                        int64_t var_2f0_5 = 2;
                        int64_t var_2d8_5 = 0;
                        int64_t*** var_2e8_8 = &var_400;
                        int64_t var_2e0_5 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_2f8);
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5c0b8fe645a553e5(
                            var_398);
                        int64_t r14_3 = *rax_3 << 0x20 | 2;
                        std::io::error::repr_bitpacked::decode_repr::h9f1fc6dea12f3e72(&var_2f8, 
                            r14_3);
                        
                        if (var_2f8)
                        {
                            core::option::unwrap_failed::h893f57cb7db71cb7();
                            /* no return */
                        }
                        
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5c0b8fe645a553e5(
                            r14_3);
                        int32_t rdi_31;
                        rdi_31 = var_2f4 == 2;
                        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(rdi_31 | 0x7e);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::h3f99d563eaf87d88(var_3d8, argv);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..ffi..c_str..CString$GT$$GT$::h75819d6d89b7c13f(&var_3f0);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h479001d9968fc37f(&var_380);
                        return 0;
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h74030e7c43287adc(rax_26);
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5c0b8fe645a553e5(
                        var_400);
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(0x7d);
                    result = 0;
                }
                else
                {
                    var_3f0 = *rax_11[1];
                    var_3d8 = &var_388;
                    int64_t (* var_3d0_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb7ecbd9d79ddfc84;
                    var_3c8 = &var_3f0;
                    *var_3c4[4] = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h3e61086f3d7b9af4;
                    var_2f8 = &data_4daee0;
                    int64_t var_2f0_2 = 2;
                    int64_t var_2d8_2 = 0;
                    int32_t** var_2e8_3 = &var_3d8;
                    int64_t var_2e0_2 = 2;
                    int128_t var_330;
                    core::option::Option$LT$T$GT$::map_or_else::h187a8924d1beca49(&var_330, 
                        &var_2f8);
                    var_2e0_2 = 0x7d;
                    var_2f8 = var_330;
                    int64_t var_320;
                    int64_t var_2e8_4 = var_320;
                    result = alloc::boxed::Box$LT$T$GT$::new::h10d0a70c4624870f(&var_2f8);
                }
            }
        }
    }
    else
    {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5c0b8fe645a553e5(r15_3);
        var_3f0 = *rax_3 << 0x20 | 2;
        var_3d8 = &var_3f0;
        int64_t (* var_3d0)(int64_t* arg1, int64_t* arg2) =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
        var_2f8 = &data_4daed0;
        int64_t var_2f0_1 = 1;
        int64_t var_2d8_1 = 0;
        int32_t** var_2e8_1 = &var_3d8;
        int64_t var_2e0_1 = 1;
        int128_t var_348;
        core::option::Option$LT$T$GT$::map_or_else::h187a8924d1beca49(&var_348, &var_2f8);
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5c0b8fe645a553e5(var_3f0);
        var_2e0_1 = 0x7d;
        var_2f8 = var_348;
        int64_t var_338;
        int64_t var_2e8_2 = var_338;
        result = alloc::boxed::Box$LT$T$GT$::new::h10d0a70c4624870f(&var_2f8);
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h479001d9968fc37f(&var_380);
    return result;
}
