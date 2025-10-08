
  fn uu_ptx::get_config::h0871b6c26e5986f1(arg1: *mut i128, arg2: *mut c_void) -> *mut i128

{
    let mut var_88: i128;
    _$LT$uu_ptx..Config$u20$as$u20$core..default..Default$GT$::default::hd765301625a6e0fd(&var_88);
    let mut var_c8: i8;
    let mut rax_2: u64;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "traditionalflag-truncationmacro-…", 0xb) == 0
    {
        let var_c0_2: *const i8 = "GNU extensions-S:assertion faile…";
        let var_b8_2: i64 = 0xe;
        var_c8 = 1;
        rax_2 = alloc::boxed::Box$LT$T$GT$::new::h2875cf048a4ad78b(&var_c8);
        'label_52b48c:
        *arg1.byte_offset(8) = rax_2;
        arg1[1] = &data_651798;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$uu_ptx..Config$GT$::h513a670c84b922c8(&var_88);
        return arg1;
    }
    
    let var_30_1: i8 = 0;
    let mut var_2b_1: i8 = 1;
    let mut var_58: i128;
    alloc::str::_$LT$impl$u20$alloc..borrow..ToOwned$u20$for$u20$str$GT$::clone_into::h29d41bfe54f0b37f(&var_58);
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(arg2, 
        "sentence-regexpword-regexpbreak-…", 0xf) != 0
    {
        let var_c0_1: *const i8 = "-S:assertion failed: beg <= enda…";
        let var_b8_1: i64 = 2;
        var_c8 = 1;
        rax_2 = alloc::boxed::Box$LT$T$GT$::new::h2875cf048a4ad78b(&var_c8);
        goto 'label_52b48c;
    }
    
    let var_2f_1: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "auto-referencetraditionalflag-tr…", 0xe);
    let var_2e_1: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "referenceswidthProduce a permute…", 0xa);
    let var_2d: i8;
    let var_2d_1: i8 = var_2d &
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "right-side-refssentence-regexpwo…", 0xf);
    let rax_7: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "ignore-caseignore-fileonly-filer…", 0xb);
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(arg2, 
        "macro-nameformatright-side-refss…", 0xa) == 0
    {
        goto 'label_52b5c0;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h88d1a3ba1868cd68(&var_c8, 
        arg2, "macro-nameformatright-side-refss…", 0xa);
    let rax_9: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h04f490a5ade46ed0(
        "macro-nameformatright-side-refss…", 0xa, &var_c8);
    
    if rax_9 != 0
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_c8, rax_9);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_88);
        let var_b8: i64;
        let var_78: i64 = var_b8;
        var_88 = var_c8;
        'label_52b5c0:
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
            arg2, "flag-truncationmacro-nameformatr…", 0xf) == 0
        {
            goto 'label_52b63d;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h88d1a3ba1868cd68(
            &var_c8, arg2, "flag-truncationmacro-nameformatr…", 0xf);
        let rax_12: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h04f490a5ade46ed0(
            "flag-truncationmacro-nameformatr…", 0xf, &var_c8);
        
        if rax_12 != 0
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_c8, rax_12);
            let mut var_70: i128;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_70);
            let var_60_1: i64 = var_b8;
            var_70 = var_c8;
            'label_52b63d:
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(arg2, "widthProduce a permuted index of…", 5) == 0
            {
                goto 'label_52b6d1;
            }
            
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h88d1a3ba1868cd68(
                &var_c8, arg2, "widthProduce a permuted index of…", 5);
            let rax_15: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::h04f490a5ade46ed0(
                "widthProduce a permuted index of…", 5, &var_c8);
            
            if rax_15 != 0
            {
                let mut var_98: i8;
                core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_98, 
                    *rax_15.byte_offset(8), *rax_15.byte_offset(0x10));
                let var_97: i8;
                
                if var_98 == 1
                {
                    var_c8 = 2;
                    let var_c7_1: i8 = var_97;
                    rax_2 = alloc::boxed::Box$LT$T$GT$::new::h2875cf048a4ad78b(&var_c8);
                    goto 'label_52b48c;
                }
                
                let var_90: i64;
                let var_40_1: i64 = var_90;
                'label_52b6d1:
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(arg2, "gap-siz", 8) == 0
                {
                    goto 'label_52b76a;
                }
                
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h88d1a3ba1868cd68(&var_c8, arg2, "gap-siz", 8);
                let rax_19: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h04f490a5ade46ed0("gap-siz", 
                    8, &var_c8);
                
                if rax_19 != 0
                {
                    core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(
                        &var_98, *rax_19.byte_offset(8), *rax_19.byte_offset(0x10));
                    
                    if var_98 != 0
                    {
                        var_c8 = 2;
                        let var_c7_2: i8 = var_97;
                        rax_2 = alloc::boxed::Box$LT$T$GT$::new::h2875cf048a4ad78b(&var_c8);
                        goto 'label_52b48c;
                    }
                    
                    let var_38: i64 = var_90;
                    'label_52b76a:
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h88d1a3ba1868cd68(&var_c8, arg2, "formatright-side-refssentence-re…", 6);
                    let rax_22: *mut c_void =
                        clap_builder::parser::error::MatchesError::unwrap::h04f490a5ade46ed0(
                        "formatright-side-refssentence-re…", 6, &var_c8);
                    
                    if rax_22 != 0
                    {
                        let r15_1: i64 = *rax_22.byte_offset(8);
                        let r12_1: u64 = *rax_22.byte_offset(0x10);
                        let mut rcx_1: i8 = 1;
                        
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hc639eb17d6278023(r15_1, r12_1, "roffHashj", 4) == 0
                        {
                            rcx_1 = 2;
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hc639eb17d6278023(r15_1, r12_1, "texinternal error: entered unrea…", 3) == 0
                            {
                                var_c8 = &data_651768;
                                let var_c0_3: i64 = 1;
                                let mut var_d0: ();
                                let var_b8_3: *mut c_void = &var_d0;
                                let var_b0: i128 = {0};
                                core::panicking::panic_fmt::h96f341d36638c225(&var_c8);
                                /* no return */
                            }
                        }
                        
                        var_2b_1 = rcx_1;
                    }
                    
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "roffHashj", 4) != 0
                    {
                        var_2b_1 = 1;
                    }
                    
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "texinternal error: entered unrea…", 3) != 0
                    {
                        var_2b_1 = 2;
                    }
                    
                    arg1[5] = var_38;
                    *arg1.byte_offset(0x58) = var_30_1;
                    *arg1.byte_offset(0x5c) = rax_7;
                    *arg1.byte_offset(0x5d) = var_2b_1;
                    let var_2a: i16;
                    *arg1.byte_offset(0x5e) = var_2a;
                    let var_48: i128;
                    arg1[4] = var_48;
                    let zmm0_3: i128 = var_88;
                    let zmm2_1: i128 = var_70;
                    arg1[3] = var_58;
                    arg1[2] = zmm2_1;
                    arg1[1] = var_78;
                    *arg1 = zmm0_3;
                    return arg1;
                }
            }
        }
    }
    
    core::option::expect_failed::h3f620cfb8545dc61("parsing options failedGNU extens…");
    /* no return */
}
