
  fn uu_install::behavior::h7987ba58edb264ae(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut r13: i32 = 0;
    let rax: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "directoryignoredcreate-leadingow…", 9);
    let mut var_138: i64;
    let mut var_130: i32;
    let var_128: i64;
    let mut var_118: *mut c_void;
    let mut var_90: i32;
    let mut r15_2: i32;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(arg2, 
        "modei128 as dyn ERANGEEDEADLKENA…", 4) == 0
    {
        r15_2 = 0;
        'label_466817:
        uucore::features::backup_control::determine_backup_mode::h09b58a9d9bda0a55(&var_118, arg2);
        let rax_5: *mut c_void = var_118;
        let mut var_110: i64;
        
        if rax_5 == 0
        {
            let var_38_1: i8 = var_110;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hcffcdc3b06842590(
                &var_118, arg2, "target-directoryfailed to chmod …", 0x10);
            let rax_6: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::h3af3e9883b639b7a(
                "target-directoryfailed to chmod …", 0x10, &var_118);
            let mut var_50: i64;
            
            if rax_6 == 0
            {
                var_50 = -0x8000000000000000;
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_50, rax_6);
            }
            
            let r15_3: bool =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "no-target-directoryverbosefiles(…", 0x13);
            let mut var_150: *mut i64;
            let mut rax_11: u64;
            
            if (r15_3 & var_50 != -0x8000000000000000) == 0
            {
                let rax_13: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "preserve-timestampsstripstrip-pr…", 0x13);
                let rax_14: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "comparedirectoryignoredcreate-le…", 7);
                let mut r12_2: *mut c_void = "stripstrip-programno-target-dire…";
                let rax_15: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "stripstrip-programno-target-dire…", 5);
                
                if rax_13 == 0
                {
                    if (rax_14 & rax_15) != 0
                    {
                        let mut rax_18: i64;
                        let mut rdx_6: i64;
                        rax_18 = uucore::util_name::h074417a1e6395129();
                        var_138 = rax_18;
                        var_130 = rdx_6;
                        var_150 = &var_138;
                        let var_148_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb0c432d6311a3dda;
                        var_118 = &data_502188;
                        let var_110_5: i64 = 2;
                        let var_f8_3: i64 = 0;
                        let var_108_6: *mut *mut i64 = &var_150;
                        let mut var_100_3: i64 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
                        var_118 = &data_502290;
                        let var_110_6: i64 = 1;
                        let var_108_7: i64 = 8;
                        var_100_3 = {0};
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
                        rax_11 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
                        goto 'label_46699e;
                    }
                }
                else if rax_14 != 0
                {
                    let mut rax_16: i64;
                    let mut rdx_5: i64;
                    rax_16 = uucore::util_name::h074417a1e6395129();
                    var_138 = rax_16;
                    var_130 = rdx_5;
                    var_150 = &var_138;
                    let var_148_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb0c432d6311a3dda;
                    var_118 = &data_502188;
                    let var_110_3: i64 = 2;
                    let var_f8_2: i64 = 0;
                    let var_108_4: *mut *mut i64 = &var_150;
                    let mut var_100_2: i64 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
                    var_118 = &data_502280;
                    let var_110_4: i64 = 1;
                    let var_108_5: i64 = 8;
                    var_100_2 = {0};
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
                    rax_11 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
                    goto 'label_46699e;
                }
                
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hcffcdc3b06842590(&var_118, arg2, "ownerpreserve-timestampsstripstr…", 5);
                let mut rdx_7: *const *mut c_void = &var_118;
                let rax_19: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h3af3e9883b639b7a(
                    "ownerpreserve-timestampsstripstr…", 5, rdx_7);
                let mut rcx_3: *mut *mut c_void;
                
                if rax_19 == 0
                {
                    rcx_3 = nullptr;
                }
                else
                {
                    rcx_3 = *rax_19.byte_offset(8);
                    rdx_7 = *rax_19.byte_offset(0x10);
                }
                
                if rcx_3 == 0
                {
                    rdx_7 = rcx_3;
                }
                
                let mut rsi_6: *mut *mut c_void = 1;
                
                if rcx_3 != 0
                {
                    rsi_6 = rcx_3;
                }
                
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7990a55799cbd755(&var_118, rsi_6, rdx_7);
                let var_108: u64;
                let var_78_1: u64 = var_108;
                let mut var_88: i128 = var_118;
                let mut var_11c_1: i32;
                let mut var_94: i32;
                
                if var_108 == 0
                {
                    var_11c_1 = 0;
                    'label_466ce6:
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hcffcdc3b06842590(&var_118, arg2, "group/home/34r7hm4n/dev/oxidizer…", 5);
                    let mut rdx_9: u64 = &var_118;
                    let rax_23: *mut c_void =
                        clap_builder::parser::error::MatchesError::unwrap::h3af3e9883b639b7a(
                        "group/home/34r7hm4n/dev/oxidizer…", 5, rdx_9);
                    let mut rcx_4: u64;
                    
                    if rax_23 == 0
                    {
                        rcx_4 = 0;
                    }
                    else
                    {
                        rcx_4 = *rax_23.byte_offset(8);
                        rdx_9 = *rax_23.byte_offset(0x10);
                    }
                    
                    if rcx_4 == 0
                    {
                        rdx_9 = rcx_4;
                    }
                    
                    let mut rsi_10: u64 = 1;
                    
                    if rcx_4 != 0
                    {
                        rsi_10 = rcx_4;
                    }
                    
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7990a55799cbd755(&var_118, rsi_10, rdx_9);
                    let var_58_1: u64 = var_108;
                    let mut var_68: i128 = var_118;
                    let mut var_120_1: i32;
                    let mut var_100: i64;
                    
                    if var_108 == 0
                    {
                        var_120_1 = 0;
                        'label_466e34:
                        uucore::features::backup_control::determine_backup_suffix::ha7b1c82b4746605a(&var_150);
                        let rax_27: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "verbosefiles(uutils coreutils) 0…", 7);
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hcffcdc3b06842590(&var_118, arg2, "strip-programno-target-directory…", 0xd);
                        let mut rax_28: u64 =
                            clap_builder::parser::error::MatchesError::unwrap::h3af3e9883b639b7a(
                            "strip-programno-target-directory…", 0xd, &var_118);
                        let mut rcx_5: *mut c_void;
                        
                        if rax_28 == 0
                        {
                            rcx_5 = nullptr;
                        }
                        else
                        {
                            rcx_5 = *(rax_28 + 8);
                            rax_28 = *(rax_28 + 0x10);
                        }
                        
                        if rcx_5 != 0
                        {
                            r12_2 = rcx_5;
                        }
                        
                        let mut rdx_12: u64 = 5;
                        
                        if rcx_5 != 0
                        {
                            rdx_12 = rax_28;
                        }
                        
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7990a55799cbd755(&var_118, r12_2, rdx_12);
                        var_138 = var_118;
                        let rax_30: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "create-leadingownerpreserve-time…", 0xe);
                        let var_40: i64;
                        let var_d8_1: i64 = var_40;
                        let zmm0_7: i128 = var_50;
                        let var_e8_1: i128 = zmm0_7;
                        let zmm1_1: i128 = var_150;
                        var_118 = zmm1_1;
                        var_100 = var_138;
                        arg1[8] = var_40;
                        *arg1.byte_offset(0x30) = zmm0_7;
                        let var_f8: i64;
                        arg1[4] = var_f8;
                        arg1[5] = var_108;
                        let var_140: i64;
                        arg1[2] = var_140;
                        arg1[3] = var_100;
                        *arg1 = zmm1_1;
                        arg1[9] = r15_2;
                        *arg1.byte_offset(0x4c) = var_90;
                        arg1[0xa] = var_11c_1;
                        *arg1.byte_offset(0x54) = var_94;
                        arg1[0xb] = var_120_1;
                        *arg1.byte_offset(0x5c) = r13;
                        arg1[0xc] = rax ^ 1;
                        *arg1.byte_offset(0x61) = rax_27;
                        *arg1.byte_offset(0x62) = rax_13;
                        *arg1.byte_offset(0x63) = rax_14;
                        *arg1.byte_offset(0x64) = rax_15;
                        *arg1.byte_offset(0x65) = rax_30;
                        *arg1.byte_offset(0x66) = r15_3;
                        *arg1.byte_offset(0x67) = var_38_1;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3429258871469867(
                            &var_68);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3429258871469867(
                            &var_88);
                    }
                    else
                    {
                        _$LT$uucore..features..entries..Group$u20$as$u20$uucore..features..entries..Locate$LT$$RF$str$GT$$GT$::locate::h2c7d885aadff2e1b(&var_118, *var_68[8], var_108);
                        
                        if var_118 != -0x8000000000000000
                        {
                            r13 = var_100;
                            core::ptr::drop_in_place$LT$uucore..features..entries..Group$GT$::h32ecda9d58c74f56(&var_118);
                            *var_150[4] = r13;
                            var_150 = 0;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$u32$C$std..io..error..Error$GT$$GT$::h6e773bfcd50389c6(&var_150);
                            var_120_1 = 1;
                            goto 'label_466e34;
                        }
                        
                        let var_148_5: i64 = var_110;
                        var_150 = 1;
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_138, &var_68);
                        let var_100_5: i64 = var_128;
                        var_110 = var_138;
                        var_118 = 0xc;
                        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_118);
                        arg1[2] = &data_502208;
                        *arg1 = -0x8000000000000000;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$u32$C$std..io..error..Error$GT$$GT$::h6e773bfcd50389c6(&var_150);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3429258871469867(
                            &var_68);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3429258871469867(
                            &var_88);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h79b91b45a57cd15b(&var_50);
                    }
                }
                else
                {
                    _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$$RF$str$GT$$GT$::locate::h4bb3a5c7c498e57d(&var_118, *var_88[8], var_108);
                    
                    if var_118 != -0x8000000000000000
                    {
                        core::ptr::drop_in_place$LT$uucore..features..entries..Passwd$GT$::h3e064612819241ba(&var_118);
                        let var_a0: i32;
                        var_94 = var_a0;
                        *var_150[4] = var_a0;
                        r12_2 = "stripstrip-programno-target-dire…";
                        var_150 = 0;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$u32$C$std..io..error..Error$GT$$GT$::h6e773bfcd50389c6(&var_150);
                        var_11c_1 = 1;
                        goto 'label_466ce6;
                    }
                    
                    let var_148_4: i64 = var_110;
                    var_150 = 1;
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_138, &var_88);
                    let var_100_4: i64 = var_128;
                    var_110 = var_138;
                    var_118 = 0xb;
                    arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_118);
                    arg1[2] = &data_502208;
                    *arg1 = -0x8000000000000000;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$u32$C$std..io..error..Error$GT$$GT$::h6e773bfcd50389c6(&var_150);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3429258871469867(
                        &var_88);
                    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h79b91b45a57cd15b(&var_50);
                }
            }
            else
            {
                let mut rax_10: i64;
                let mut rdx_4: i64;
                rax_10 = uucore::util_name::h074417a1e6395129();
                var_138 = rax_10;
                var_130 = rdx_4;
                var_150 = &var_138;
                let var_148_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb0c432d6311a3dda;
                var_118 = &data_502188;
                let var_110_1: i64 = 2;
                let var_f8_1: i64 = 0;
                let var_108_2: *mut *mut i64 = &var_150;
                let mut var_100_1: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
                var_118 = &data_502270;
                let var_110_2: i64 = 1;
                let var_108_3: i64 = 8;
                var_100_1 = {0};
                std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
                rax_11 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
                'label_46699e:
                arg1[1] = rax_11;
                arg1[2] = &data_503620;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h79b91b45a57cd15b(&var_50);
            }
        }
        else
        {
            arg1[1] = rax_5;
            arg1[2] = var_110;
            *arg1 = -0x8000000000000000;
        }
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hcffcdc3b06842590(
            &var_118, arg2, "modei128 as dyn ERANGEEDEADLKENA…", 4);
        let rax_2: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h3af3e9883b639b7a(
            "modei128 as dyn ERANGEEDEADLKENA…", 4, &var_118);
        
        if rax_2 == 0
        {
            goto 'label_4668bc;
        }
        
        uu_install::mode::parse::hbbdca2d765f61b21(&var_138, *rax_2.byte_offset(8), 
            *rax_2.byte_offset(0x10), rax, uucore::features::mode::get_umask::h22fe72fd4e3f2e99());
        
        if var_138 == -0x8000000000000000
        {
            var_90 = var_130;
            r15_2 = 1;
            goto 'label_466817;
        }
        
        let var_108_1: i64 = var_128;
        var_118 = var_138;
        uu_install::behavior::_$u7b$$u7b$closure$u7d$$u7d$::h449f89b24c43dfad(&var_118);
        'label_4668bc:
        arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
        arg1[2] = &data_503620;
        *arg1 = -0x8000000000000000;
    }
    arg1
}
