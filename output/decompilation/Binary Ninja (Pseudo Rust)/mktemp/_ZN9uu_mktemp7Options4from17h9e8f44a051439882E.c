
  fn uu_mktemp::Options::from::h9e8f44a051439882(arg1: *mut i128, arg2: *mut c_void) -> *mut i128

{
    let mut var_e0: i8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h789cfa99835b6965(&var_e0, 
        arg2, "tmpdirptTMPDIRXXXsrc/uu/mktemp/s…", 6);
    let rax_1: *mut c_void = core::option::Option$LT$T$GT$::or_else::h248713d5b765eca6(
        clap_builder::parser::error::MatchesError::unwrap::h12ab4f930c67ffa3(
            "tmpdirptTMPDIRXXXsrc/uu/mktemp/s…", 6, &var_e0), 
        arg2);
    let mut var_60: i64;
    
    if rax_1 == 0
    {
        var_60 = -0x8000000000000000;
    }
    else
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h5e9a9c3d89a1dce2(&var_60, *rax_1.byte_offset(8), *rax_1.byte_offset(0x10));
    }
    
    let mut rbp: i64;
    rbp = 1;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf4be33f6152294d1(&var_e0, 
        arg2, "template", 8);
    let rax_2: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h948cd45e5aec830e(
        "template", 8, &var_e0);
    let mut var_d8: i128;
    let mut var_a8: i64;
    let mut var_98: i128;
    let mut var_88: i64;
    let mut var_78: i128;
    let mut var_68: i64;
    let mut r13_1: i8;
    let var_58: i128;
    
    if rax_2 == 0
    {
        let rax_6: i64 = var_60;
        
        if rax_6 != -0x8000000000000000
        {
            var_d8 = var_58;
            var_e0 = rax_6;
        }
        else
        {
            std::env::temp_dir::h4c6b7a08795666f1(&var_e0);
        }
        
        var_a8 = *var_d8[8];
        let rax_10: i64 = var_e0;
        let var_b0_1: i64 = var_d8;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3c498dae33407f89(&var_e0, "tmp.XXXXXXXXXXdirectorydry-runqu…", 0xe);
        var_68 = *var_d8[8];
        var_78 = var_e0;
        var_98 = rax_10;
        var_88 = var_a8;
        r13_1 = 0;
    }
    else
    {
        std::env::var::hf86fc8a5cc8e1c21(&var_e0);
        let r12_1: i8 = var_e0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::hed0475f018d949a2(&var_e0);
        let mut rax_3: i8;
        
        if (r12_1 & 1) == 0
        {
            rax_3 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "tTMPDIRXXXsrc/uu/mktemp/src/mkte…", 1);
        }
        
        let mut var_48: i128;
        let mut rcx_1: i64;
        
        if (r12_1 & 1) != 0 || rax_3 == 0
        {
            rcx_1 = var_60;
            
            if rcx_1 != -0x8000000000000000
            {
                var_48 = var_58;
                r13_1 = 0;
            }
            else
            {
                let rax_4: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "tTMPDIRXXXsrc/uu/mktemp/src/mkte…", 1);
                let mut rax_5: i8;
                
                if rax_4 == 0
                {
                    rax_5 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(arg2, "tmpdirptTMPDIRXXXsrc/uu/mktemp/s…", 6);
                    rcx_1 = -0x8000000000000000;
                    r13_1 = 1;
                }
                
                if rax_4 != 0 || rax_5 != 0
                {
                    std::env::temp_dir::h4c6b7a08795666f1(&var_e0);
                    rcx_1 = var_e0;
                    var_48 = var_d8;
                    r13_1 = 1;
                }
            }
        }
        else
        {
            std::env::var_os::hdb714acdd43fad0e(&var_e0);
            rcx_1 = var_e0;
            
            if rcx_1 != -0x8000000000000000
            {
                var_48 = var_d8;
                r13_1 = 1;
            }
            else
            {
                r13_1 = 1;
            }
        }
        
        let mut var_b0: i64;
        var_b0 = var_48;
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_e0, rax_2);
        var_88 = var_a8;
        var_98 = rcx_1;
        var_78 = var_e0;
        var_68 = *var_d8[8];
    }
    let rax_14: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "directorydry-runquietsuffixtmpdi…", 9);
    let rax_15: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "dry-runquietsuffixtmpdirptTMPDIR…", 7);
    let rax_16: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "quietsuffixtmpdirptTMPDIRXXXsrc/…", 5);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf4be33f6152294d1(&var_e0, 
        arg2, "suffixtmpdirptTMPDIRXXXsrc/uu/mk…", 6);
    let rax_17: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h948cd45e5aec830e(
        "suffixtmpdirptTMPDIRXXXsrc/uu/mk…", 6, &var_e0);
    let mut var_b8: i64;
    
    if rax_17 == 0
    {
        var_b8 = -0x8000000000000000;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_e0, rax_17);
        var_a8 = *var_d8[8];
        var_b8 = var_e0;
    }
    
    let rax_19: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "tTMPDIRXXXsrc/uu/mktemp/src/mkte…", 1);
    arg1[1] = var_68;
    *arg1 = var_78;
    *arg1.byte_offset(0x48) = rax_14;
    *arg1.byte_offset(0x49) = rax_15;
    *arg1.byte_offset(0x4a) = rax_16;
    *arg1.byte_offset(0x18) = var_98;
    *arg1.byte_offset(0x28) = var_88;
    arg1[3] = var_b8;
    arg1[4] = var_a8;
    *arg1.byte_offset(0x4b) = rax_19;
    
    if r13_1 != 0
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h92010b458ccdc0ce(&var_60);
    }
    
    arg1
}
