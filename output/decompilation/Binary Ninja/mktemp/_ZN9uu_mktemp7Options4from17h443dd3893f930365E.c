
  int128_t* uu_mktemp::Options::from::h443dd3893f930365(int128_t* arg1, void* arg2)

{
    int64_t var_f8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf6f73fc6bf26a6b8(&var_f8, 
        arg2, "tmpdirptcould not persist file w…", 6);
    void* rax_1 = core::option::Option$LT$T$GT$::or_else::h8f598a9301515393(
        clap_builder::parser::error::MatchesError::unwrap::h537a0ee6d900c4b6(
            "tmpdirptcould not persist file w…", 6, &var_f8), 
        arg2);
    int64_t var_48;
    
    if (!rax_1)
        var_48 = -0x8000000000000000;
    else
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0e8a4977c3ae2c93(&var_48, rax_1);
    
    int64_t rbp;
    rbp = 1;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h3b661d49c3129788(&var_f8, 
        arg2, "templateDeadlock", 8);
    void* rax_2 = clap_builder::parser::error::MatchesError::unwrap::h6b94152c1ad7c019(
        "templateDeadlock", 8, &var_f8);
    int128_t var_f0;
    int128_t var_c8;
    int64_t var_b8_1;
    int64_t var_a8;
    char r13_1;
    int128_t var_40;
    
    if (!rax_2)
    {
        int64_t rax_3 = var_48;
        
        if (rax_3 != -0x8000000000000000)
        {
            var_f0 = var_40;
            var_f8 = rax_3;
        }
        else
            core::ops::function::FnOnce::call_once::hf53ea78b54af737a(&var_f8);
        
        int64_t rax_9 = *var_f0[8];
        var_a8 = var_f8;
        int64_t var_a0_1 = var_f0;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hf2364d4dece97e39(&var_c8, 
            "tmp.XXXXXXXXXXdirectorydry-runqu…", 0xe);
        int64_t var_b8;
        *var_f0[8] = var_b8;
        var_f8 = var_c8;
        var_c8 = var_a8;
        var_b8_1 = rax_9;
        r13_1 = 0;
    }
    else
    {
        std::env::var::hcc03575b5bbeee78(&var_f8, "TMPDIRXXXsrc/uu/mktemp/src/mktem…");
        int128_t var_68;
        int64_t rcx_1;
        
        if (!var_f8)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h3557f1c2629c09bc(&var_f8);
            
            if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "tcould not persist file with --s…", 1))
                goto label_4bec40;
            
            std::env::var_os::h12c3a7256523b4d0(&var_f8, "TMPDIRXXXsrc/uu/mktemp/src/mktem…");
            rcx_1 = var_f8;
            
            if (rcx_1 != -0x8000000000000000)
            {
                var_68 = var_f0;
                r13_1 = 1;
            }
            else
                r13_1 = 1;
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h3557f1c2629c09bc(&var_f8);
            label_4bec40:
            rcx_1 = var_48;
            
            if (rcx_1 != -0x8000000000000000)
            {
                var_68 = var_40;
                r13_1 = 0;
            }
            else
            {
                char rax_5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "tcould not persist file with --s…", 1);
                char rax_6;
                
                if (!rax_5)
                {
                    rax_6 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(arg2, "tmpdirptcould not persist file w…", 6);
                    rcx_1 = -0x8000000000000000;
                    r13_1 = 1;
                }
                
                if (rax_5 || rax_6)
                {
                    std::env::temp_dir::h5c298e5697888810(&var_f8);
                    rcx_1 = var_f8;
                    var_68 = var_f0;
                    r13_1 = 1;
                }
            }
        }
        
        int128_t var_88;
        var_88 = rcx_1;
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
            &var_a8, rax_2);
        int64_t var_78;
        var_b8_1 = var_78;
        var_c8 = var_68;
        var_f8 = var_a8;
        int64_t var_98;
        *var_f0[8] = var_98;
    }
    int128_t var_68_1 = var_c8;
    int128_t zmm0_3 = var_f8;
    char rax_16 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "directorydry-runquietsuffixtmpdi…", 9);
    char rax_17 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "dry-runquietsuffixtmpdirptcould …", 7);
    char rax_18 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "quietsuffixtmpdirptcould not per…", 5);
    int64_t var_98_2 = var_b8_1;
    var_a8 = var_68_1;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h3b661d49c3129788(&var_f8, 
        arg2, "suffixtmpdirptcould not persist …", 6);
    void* rax_20 = clap_builder::parser::error::MatchesError::unwrap::h6b94152c1ad7c019(
        "suffixtmpdirptcould not persist …", 6, &var_f8);
    
    if (!rax_20)
        var_c8 = -0x8000000000000000;
    else
    {
        core::ops::function::FnOnce::call_once::hbf845b1b4445c736(&var_f8, rax_20);
        var_b8_1 = *var_f0[8];
        var_c8 = var_f8;
    }
    
    char rax_22 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "tcould not persist file with --s…", 1);
    arg1[1] = *var_f0[8];
    *arg1 = zmm0_3;
    *(arg1 + 0x48) = rax_16;
    *(arg1 + 0x49) = rax_17;
    *(arg1 + 0x4a) = rax_18;
    *(arg1 + 0x18) = var_a8;
    *(arg1 + 0x28) = var_98_2;
    arg1[3] = var_c8;
    arg1[4] = var_b8_1;
    *(arg1 + 0x4b) = rax_22;
    
    if (r13_1)
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hfe845c517ac2f71c(&var_48);
    
    return arg1;
}
