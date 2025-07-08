
  int64_t* uu_hashsum::uumain::uumain::hb03e775e367c9d85(int64_t arg1)

{
    void** const r14 = -0x8000000000000000;
    int64_t var_688 = arg1;
    int64_t rsi;
    int64_t var_680 = rsi;
    int64_t var_678;
    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h096e5dfd273c576c(&var_678, &var_688);
    void** var_6d8;
    int128_t var_608;
    void** var_5f8;
    int128_t zmm0;
    
    if (var_678 != -0x8000000000000000)
    {
        void** var_668;
        var_6d8 = var_668;
        zmm0 = var_678;
    }
    else
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_608, "hashsumlength", 7);
        var_6d8 = var_5f8;
        zmm0 = var_608;
    }
    
    int128_t var_6e8 = zmm0;
    int16_t* rax_2;
    size_t rdx;
    rax_2 = std::path::Path::file_stem::h441d431a81936839(*var_6e8[8], var_6d8);
    int16_t* rsi_3 = "hashsumlength";
    
    if (rax_2)
        rsi_3 = rax_2;
    
    if (!rax_2)
        rdx = 7;
    
    void var_6c8;
    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&var_6c8, rsi_3, rdx);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h137756251426bd57(
        &var_608, &var_6e8);
    void** var_668_1 = var_5f8;
    var_678 = var_608;
    int128_t var_630;
    core::iter::traits::iterator::Iterator::chain::h97a8a1bc38742947(&var_630, &var_678, var_688);
    int64_t var_6c0;
    uint64_t var_6b8;
    uu_hashsum::uu_app::hc311ff14781827c9(&var_608, var_6c0, var_6b8);
    void var_2f8;
    memcpy(&var_2f8, &var_608, 0x2c8);
    int64_t var_610;
    int64_t var_658 = var_610;
    int128_t var_620;
    var_668_1 = var_620;
    var_678 = var_630;
    clap_builder::builder::command::Command::try_get_matches_from::h6accf9addc69a3f7(&var_608, 
        &var_2f8, &var_678);
    int64_t rax_5 = var_608;
    int64_t rdi_9 = *var_608[8];
    int64_t* result;
    
    if (rax_5 != -0x8000000000000000)
    {
        int64_t var_5d8;
        int64_t var_6f0_1 = var_5d8;
        int128_t var_5e8;
        int128_t var_700_1 = var_5e8;
        int128_t var_710_1 = var_5f8;
        int64_t var_720 = rax_5;
        int64_t var_718_1 = rdi_9;
        char rax_7 = alloc::string::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$alloc..borrow..Cow$LT$str$GT$$GT$::eq::hbcba38ba17ba20b8(var_6c0, var_6b8);
        int64_t* rax_8;
        
        if (rax_7)
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb563847c130c951d(
                &var_608, &var_720, "length", 6);
            rax_8 = clap_builder::parser::error::MatchesError::unwrap::hf231815055423523("length", 
                6, &var_608);
        }
        
        char var_340;
        
        if (!rax_7 || !rax_8)
        {
            result = nullptr;
            
            if (var_340)
            {
                label_5774b6:
                uu_hashsum::create_algorithm_from_flags::h44fb2b955b3a7236(&var_608, &var_720);
            }
            else
            {
                label_5774e0:
                uucore::features::checksum::detect_algo::hbb2f85fa7c8cfc19(&var_608, var_6c0, 
                    var_6b8, result, r14);
            }
            
            char* rax_9 = var_608;
            result = *var_608[8];
            
            if (!rax_9)
            {
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h839c649016960889(&var_720);
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h8c0f4ce039b6cae5(
                    &var_6c8);
            }
            else
            {
                int128_t var_5f0;
                int128_t var_698_1 = var_5f0;
                char* var_6b0_1 = rax_9;
                int64_t* result_1 = result;
                void** const var_6a0 = var_5f8;
                char rax_10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_720, "binarycheckstatusquietstrictigno…", 6);
                
                if (!rax_10)
                    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_720, "textSomee", 4);
                
                char rax_11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_720, "checkstatusquietstrictignore-mis…", 5);
                char rax_12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_720, "statusquietstrictignore-missing", 6);
                char rax_13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_720, "quietstrictignore-missing", 5);
                char rax_14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_720, "strictignore-missing", 6);
                char rax_15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_720, "warnZeroV", 4);
                char rax_16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_720, "ignore-missing", 0xe);
                char r15_1 = rax_16;
                char r13_1 = rax_13 | rax_12;
                
                if (rax_16)
                {
                    rax_16 = 1;
                    
                    if (rax_11)
                        goto label_577656;
                    
                    goto label_577759;
                }
                
                if (rax_11)
                {
                    label_577656:
                    rax_16 = 0xb;
                    
                    if ((clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_720, "textSomee", 4) | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_720, "binarycheckstatusquietstrictigno…", 
                            6)) == 1)
                        goto label_577759;
                    
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h3c3cf47d3b80e519(&var_608, &var_720, "fileEDOMmode{", 4);
                    clap_builder::parser::error::MatchesError::unwrap::h656dce67331d5fa4(&var_678, 
                        "fileEDOMmode{", 4, &var_608);
                    core::option::Option$LT$T$GT$::map_or_else::he38e8e5edddfdc58(&var_608, 
                        &var_678);
                    int64_t rdi_28 = *var_608[8];
                    int64_t* result_2;
                    void** rdx_13;
                    result_2 =
                        uucore::features::checksum::perform_checksum_validation::h2e1552b39f9ed5c0(
                        rdi_28, (var_5f8 << 4) + rdi_28, rax_9, result, 1, *var_698_1[8], 
                        rax_12 << 0x18 | r13_1 << 0x10 | rax_14 << 0x20
                            | (rax_15 & (rax_12 ^ 1)) << 0x28 | r15_1 << 8);
                    result = result_2;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h293673efeeb2dedb(&var_608);
                    goto label_57776e;
                }
                
                char temp1_1 = rax_14 | r13_1;
                char var_72b_2 = temp1_1;
                
                if (!temp1_1)
                {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf2b443d784377908(&var_608, &var_720, "no-namescapacitys", 8);
                    char* rax_23;
                    
                    if (var_608 != 2)
                        rax_23 = nullptr;
                    else
                        rax_23 = *var_608[8];
                    
                    char const* const rcx_9 = &data_46902c[4];
                    
                    if (rax_23)
                        rcx_9 = rax_23;
                    
                    char const rax_24 = *rcx_9;
                    char rax_25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_720, "zeroAnsib", 4);
                    int64_t rax_26;
                    int64_t rdx_15;
                    rax_26 = _$LT$alloc..boxed..Box$LT$F$C$A$GT$$u20$as$u20$core..ops..function..Fn$LT$Args$GT$$GT$::call::hdd8219fcd907cd8a(&var_6a0);
                    int64_t r13_2 = *var_698_1[8];
                    char rax_27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_720, "tagBLAKE2b ( ( *blake2bdescripti…", 3);
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h3c3cf47d3b80e519(&var_608, &var_720, "fileEDOMmode{", 4);
                    int64_t var_338;
                    clap_builder::parser::error::MatchesError::unwrap::h656dce67331d5fa4(&var_338, 
                        "fileEDOMmode{", 4, &var_608);
                    int64_t (* result_3)(void* arg1, int64_t arg2);
                    void** rdx_16;
                    
                    if (!var_338)
                    {
                        var_608 = rax_9;
                        *var_608[8] = result;
                        int64_t var_5f8_2 = rax_26;
                        var_5f0 = rdx_15;
                        var_5e8 = r13_2;
                        *var_5e8[8] = rax_10;
                        *var_5e8[9] = rax_27;
                        *var_5e8[0xa] = rax_24;
                        *var_5e8[0xb] = rax_25;
                        result_3 = uu_hashsum::hashsum::h6a37e88fa19edadd(&var_608);
                    }
                    else
                    {
                        var_608 = rax_9;
                        *var_608[8] = result;
                        int64_t var_5f8_1 = rax_26;
                        var_5f0 = rdx_15;
                        var_5e8 = r13_2;
                        *var_5e8[8] = rax_10;
                        *var_5e8[9] = rax_27;
                        *var_5e8[0xa] = rax_24;
                        *var_5e8[0xb] = rax_25;
                        result_3 = uu_hashsum::hashsum::h440870b73b1317fa(&var_608, &var_338);
                    }
                    result = result_3;
                    core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::h786198480f8a4310(var_6a0, 
                        var_698_1);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h839c649016960889(&var_720);
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h8c0f4ce039b6cae5(&var_6c8);
                }
                else
                {
                    rax_16 = r13_1 | 2;
                    label_577759:
                    result = alloc::boxed::Box$LT$T$GT$::new::hdfd64d504f612c9e(rax_16);
                    label_57776e:
                    core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::h786198480f8a4310(var_5f8, 
                        var_698_1);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h839c649016960889(&var_720);
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h8c0f4ce039b6cae5(&var_6c8);
                }
            }
        }
        else
        {
            uucore::features::checksum::calculate_blake2b_length::h2a821e36733dba3a(&var_608, 
                *rax_8);
            result = *var_608[8];
            r14 = var_5f8;
            
            if (!var_608)
            {
                if (!var_340)
                    goto label_5774e0;
                
                goto label_5774b6;
            }
            
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h839c649016960889(&var_720);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h8c0f4ce039b6cae5(
                &var_6c8);
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(rdi_9);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h8c0f4ce039b6cae5(&var_6c8);
    }
    
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3260fd7b72cdc76(&var_6e8);
    return result;
}
