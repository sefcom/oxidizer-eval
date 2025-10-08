
  fn uu_ls::Config::from::h82af185516eb5913(arg1: *mut i64, arg2: u64) -> *mut i64

{
    let rax: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "contextgroup-directories-firstdi…", 7);
    let mut var_398: i8;
    uu_ls::extract_format::h97a71c2b75d25f2b(&var_398, arg2);
    let mut rbp: i8 = var_398;
    let rax_1: i8 = uu_ls::extract_files::h9e160bb0932eec0f(arg2);
    let mut var_416: i8 = 1;
    let mut var_390: *mut c_void;
    let mut var_388: *const i8;
    let mut var_380: *const i8;
    let mut var_2a0: *const i8;
    let mut var_298: i64;
    let mut var_290: *const i8;
    let mut var_288: *mut i8;
    let mut var_280: *const i8;
    let mut var_278: i64;
    let mut var_270: *const i8;
    let mut var_148: i64;
    
    if rbp != 1
    {
        let mut rcx_1: i64;
        
        if var_390 == 0
        {
            rcx_1 = 0;
        }
        else
        {
            let mut rax_2: i8;
            let mut rdx_2: i64;
            rax_2 = uu_ls::Config::from::_$u7b$$u7b$closure$u7d$$u7d$::h4ded6d4dcec58c4c(arg2, 
                var_390, var_388);
            rcx_1 = 0;
            
            if (rax_2 & 1) != 0
            {
                rcx_1 = rdx_2;
            }
        }
        
        var_148 = rcx_1;
        var_2a0 = "gonumeric-uid-gidallalmost-allSt…";
        var_298 = 1;
        var_290 = "onumeric-uid-gidallalmost-allStU…";
        var_288 = 1;
        var_280 = "numeric-uid-gidallalmost-allStUv…";
        var_278 = 0xf;
        var_270 = "full-timeignorecontextgroup-dire…";
        let var_268_1: i64 = 9;
        var_398 = &var_2a0;
        let mut var_260: ();
        var_390 = &var_260;
        var_388 = arg2;
        var_380 = nullptr;
        let var_368_1: i64 = 0;
        var_416 = 1;
        
        if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hff7ad56065d75b13(core::iter::adapters::flatten::FlattenCompat$LT$I$C$U$GT$::iter_try_fold::h3ec37c71eeb41e17(&var_398, &var_148)) == 0
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h172437770ffa9ae0(
                &var_2a0, arg2, "1Cxtabsizemgonumeric-uid-gidalla…", 1);
            
            if var_2a0 != 0
            {
                var_388 = var_290;
                var_398 = var_2a0;
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h45c0c3cb9ce2c562(arg2, "1Cxtabsizemgonumeric-uid-gidalla…", 1) == 2
                {
                    let rcx_2: i8 = rbp;
                    rbp = 2;
                    
                    if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hff7ad56065d75b13(core::iter::traits::iterator::Iterator::try_fold::h9cd0c2173f564cd9(
                        &var_398, &var_148)) == 0
                    {
                        rbp = rcx_2;
                    }
                }
            }
            
            var_416 = rbp;
        }
    }
    
    let rax_9: i8 = uu_ls::extract_sort::h07e4377306d463a7(arg2);
    let rax_10: i8 = uu_ls::extract_time::hd6278fc767568d0f(arg2);
    let rax_11: i8 = uu_ls::extract_color::h349ba64db1ed3f00(arg2);
    let rax_12: i8 = uu_ls::extract_hyperlink::hae52003f9f8916da(arg2);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fe44c4217b6c6ae(
        &var_398, arg2, "block-sizehuman-readablesikibiby…", 0xa);
    let rax_13: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::he9eef133f866d763(
        "block-sizehuman-readablesikibiby…", 0xa, &var_398);
    let mut rbx_1: i8;
    let mut rbp_1: i8;
    let mut r12: u64;
    let mut r13_1: i8;
    let mut r15_1: u64;
    
    if rax_13 == 0
    {
        r15_1 = arg2;
        r12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "sikibibytesescapeliteralquote-na…", 2);
        'label_592d5a:
        rbp_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            r15_1, "human-readablesikibibytesescapel…", 0xe);
        r13_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            r15_1, "kibibytesescapeliteralquote-name…", 9);
        rbx_1 = 2;
        
        if r12 == 0
        {
            rbx_1 = rbp_1;
        }
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fe44c4217b6c6ae(
            &var_398, arg2, "block-sizehuman-readablesikibiby…", 0xa);
        let rax_14: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::he9eef133f866d763(
            "block-sizehuman-readablesikibiby…", 0xa, &var_398);
        
        if rax_14 == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        r12 = 1;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(*rax_14.byte_offset(8), *rax_14.byte_offset(0x10), "sikibibytesescapeliteralquote-na…", 
            2) == 0
        {
            r12 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "sikibibytesescapeliteralquote-na…", 2);
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fe44c4217b6c6ae(
            &var_398, arg2, "block-sizehuman-readablesikibiby…", 0xa);
        let rax_17: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::he9eef133f866d763(
            "block-sizehuman-readablesikibiby…", 0xa, &var_398);
        
        if rax_17 == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(*rax_17.byte_offset(8), *rax_17.byte_offset(0x10), "human-readablesikibibytesescapel…", 
            0xe) == 0
        {
            r15_1 = arg2;
            goto 'label_592d5a;
        }
        
        r13_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "kibibytesescapeliteralquote-name…", 9);
        rbx_1 = r12 + 1;
        rbp_1 = 1;
    }
    let mut var_1d0: i64;
    std::env::var_os::h584be2191f4a6db4(&var_1d0, "BLOCKSIZEBLOCK_SIZELS_BLOCK_SIZE…");
    let mut var_200: i64;
    std::env::var_os::h584be2191f4a6db4(&var_200, "BLOCK_SIZELS_BLOCK_SIZEPOSIXLY_C…");
    let mut var_1e8: i64;
    std::env::var_os::h584be2191f4a6db4(&var_1e8, "LS_BLOCK_SIZEPOSIXLY_CORRECT*~.*…");
    let mut var_198: i64;
    std::env::var_os::h584be2191f4a6db4(&var_198, "POSIXLY_CORRECT*~.*~TABSIZE(uuti…");
    let var_2bc: i8 = rbx_1;
    let mut var_414: i8;
    let mut var_410: i8;
    let mut var_408: i8;
    let mut var_3e0: *mut c_void;
    let mut var_3d8: i64;
    let var_1f8: *mut c_void;
    let var_1e0: *mut c_void;
    let var_1c8: *mut c_void;
    let mut rdx_11: u64;
    
    if rax_13 == 0
    {
        let rax_26: i64 = var_1e8;
        let mut rax_29: *mut c_void;
        
        if rax_26 != -0x8000000000000000
        {
            var_3d8 = rax_26;
            var_3e0 = var_1e0;
            let var_1d8: u64;
            rdx_11 = var_1d8;
            rax_29 = 1;
            var_408 = rax_29;
            var_410 = 0;
            'label_592ee8:
            rax_29 = 1;
            var_414 = rax_29;
            rbx_1 = 0;
            
            if (rbp_1 | r12) != 0 || rdx_11 == 0
            {
                goto 'label_593087;
            }
            
            goto 'label_592f0c;
        }
        
        let rax_27: i64 = var_200;
        
        if rax_27 != -0x8000000000000000
        {
            var_3d8 = rax_27;
            var_3e0 = var_1f8;
            let var_1f0: u64;
            rdx_11 = var_1f0;
            rax_29 = 1;
            var_410 = rax_29;
            var_408 = 0;
            goto 'label_592ee8;
        }
        
        let rax_28: i64 = var_1d0;
        
        if rax_28 == -0x8000000000000000
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_398, 1, 0);
            goto 'label_592e16;
        }
        
        var_3d8 = rax_28;
        var_3e0 = var_1c8;
        let var_1c0: u64;
        rdx_11 = var_1c0;
        let mut rax_33: *mut c_void;
        rax_33 = 1;
        var_410 = rax_33;
        var_414 = 0;
        rax_33 = 1;
        var_408 = rax_33;
        rbx_1 = 1;
        
        if (rbp_1 | r12) == 0 && rdx_11 != 0
        {
            goto 'label_592f0c;
        }
        
        goto 'label_593087;
    }
    
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_398, *rax_13.byte_offset(8), *rax_13.byte_offset(0x10));
    'label_592e16:
    var_3d8 = var_398;
    var_3e0 = var_390;
    rdx_11 = var_388;
    let mut rax_25: *mut c_void;
    rax_25 = 1;
    var_410 = rax_25;
    rbx_1 = 0;
    rax_25 = 1;
    var_408 = rax_25;
    rax_25 = 1;
    var_414 = rax_25;
    let mut var_3c8: *mut i64;
    let mut var_3a8_1: i64;
    let mut var_3a0_1: i64;
    let var_190: i64;
    let mut rdi_118: i64;
    let mut r12_1: u64;
    
    if (rbp_1 | r12) == 0 && rdx_11 != 0
    {
        'label_592f0c:
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_3c8, var_3e0, rdx_11);
        r12_1 = arg2;
        let var_3c0: *mut c_void;
        let var_3b8: u64;
        uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(&var_2a0, var_3c0, 
            var_3b8);
        
        if var_2a0 == 4
        {
            let mut rcx_3: i64 = var_298;
            
            if rbx_1 == 0
            {
                let mut rax_32: i64 = 0x400;
                
                if r13_1 == 0
                {
                    rax_32 = rcx_3;
                }
                
                var_3a8_1 = rcx_3;
                
                if rax_13 != 0
                {
                    rax_32 = rcx_3;
                }
                
                var_3a0_1 = rax_32;
            }
            else
            {
                if r13_1 != 0
                {
                    rcx_3 = 0x400;
                }
                
                var_3a0_1 = rcx_3;
                var_3a8_1 = 1;
            }
            
            'label_593035:
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..features..parser..parse_size..ParseSizeError$GT$$GT$::h2cce121cad747743(&var_2a0);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h5012a4810cee898d(
                &var_3c8);
            goto 'label_5930d1;
        }
        
        if rax_13 == 0
        {
            let mut rdx_13: i64 = 1;
            var_3a0_1 = 0x400;
            
            if rbx_1 == 0
            {
                rdx_13 = 0x400;
            }
            
            var_3a8_1 = rdx_13;
            goto 'label_593035;
        }
        
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_148, rax_13);
        let var_138: *mut i8;
        var_380 = var_138;
        var_390 = var_148;
        var_398 = -0x7ffffffffffffffd;
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h581d68ae8b2b86a1(&var_398);
        arg1[2] = &data_6869e8;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..features..parser..parse_size..ParseSizeError$GT$$GT$::h2cce121cad747743(&var_2a0);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h5012a4810cee898d(&var_3c8);
        'label_593248:
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(var_3d8, 
            var_3e0);
        core::ptr::drop_in_place$LT$std..env..VarError$GT$::hac62f4fc27395a09(var_198, var_190);
        let rdi_49: i64 = var_1e8;
        
        if (var_410 & rdi_49 != -0x8000000000000000) != 0
        {
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(rdi_49, 
                var_1e0);
        }
        
        let rdi_50: i64 = var_200;
        
        if rdi_50 != -0x8000000000000000 && var_408 != 0
        {
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(rdi_50, 
                var_1f8);
        }
        
        rdi_118 = var_1d0;
        
        if rdi_118 != -0x8000000000000000
        {
            'label_5942e8:
            
            if var_414 != 0
            {
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(
                    rdi_118, var_1c8);
            }
        }
    }
    else
    {
        'label_593087:
        
        if var_198 != -0x8000000000000000
        {
            var_3a0_1 = (r13_1 << 9) + 0x200;
        }
        else
        {
            let mut rcx_5: i64 = 0x400;
            
            if r12 != 0
            {
                rcx_5 = 0x3e8;
            }
            
            var_3a0_1 = rcx_5;
        }
        
        var_3a8_1 = 1;
        r12_1 = arg2;
        'label_5930d1:
        let rax_37: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            r12_1, "authorformatignore-backupsdirect…", 6);
        let mut var_3e4_1: i8;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            r12_1, "no-groupPatternsParseIntcreation…", 8) == 0
        {
            var_3e4_1 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                r12_1, "onumeric-uid-gidallalmost-allStU…", 1) ^ 1;
        }
        else
        {
            var_3e4_1 = 0;
        }
        
        let rax_41: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            r12_1, "gonumeric-uid-gidallalmost-allSt…", 1);
        let rax_42: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            r12_1, "numeric-uid-gidallalmost-allStUv…", 0xf);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fe44c4217b6c6ae(
            &var_398, r12_1, "widthauthorformatignore-backupsd…", 5);
        uu_ls::parse_width::h699105a2614aa38f(&var_2a0, 
            clap_builder::parser::error::MatchesError::unwrap::he9eef133f866d763(
                "widthauthorformatignore-backupsd…", 5, &var_398));
        let rax_44: *const i8 = var_2a0;
        let rdx_15: i16 = var_298;
        let mut rax_46: u64;
        
        if rax_44 != -0x7ffffffffffffffa
        {
            let var_370_1: i64 = var_278;
            *var_380[2] = *var_288[2];
            *var_390[2] = *var_298[2];
            var_398 = rax_44;
            var_390 = rdx_15;
            rax_46 = alloc::boxed::Box$LT$T$GT$::new::h581d68ae8b2b86a1(&var_398);
            'label_59322c:
            arg1[1] = rax_46;
            arg1[2] = &data_6869e8;
            *arg1 = -0x8000000000000000;
            goto 'label_593248;
        }
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            r12_1, "hide-control-charsshow-control-c…", 0x12) == 0
        {
            rbp_1 = 1;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                r12_1, "show-control-charswidthauthorfor…", 0x12) == 0
            {
                std::io::stdio::stdout::hb6a8e10bcccf3287();
                rbp_1 = std::sys::io::is_terminal::isatty::is_terminal::h0e1d734d892dc985() ^ 1;
            }
        }
        else
        {
            rbp_1 = 0;
        }
        
        let rax_50: i32 = uu_ls::extract_quoting_style::h200ad966f0acf148(r12_1, rbp_1);
        let rax_51: i8 = uu_ls::extract_indicator_style::he22d10d1f55443b8(r12_1);
        let var_415_1: bool =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            r12_1, "diredhyperlink%b %e  %Y%Y-%m-%d …", 5);
        let mut var_3ec_1: i8;
        let mut var_1b8: i64;
        let mut var_1a8: *mut i8;
        
        if (var_416 != 1 & (var_415_1 ^ 1)) != 0
        {
            var_3ec_1 = rbp_1;
            var_1b8 = -0x7ffffffffffffffe;
        }
        else
        {
            uu_ls::parse_time_style::hacb3b16b50cd334e(&var_2a0, r12_1);
            let rax_53: *const i8 = var_2a0;
            var_148 = var_298;
            
            if rax_53 != -0x7ffffffffffffffa
            {
                let var_378_1: i128 = var_280;
                var_390 = var_148;
                var_380 = var_288;
                var_398 = rax_53;
                rax_46 = alloc::boxed::Box$LT$T$GT$::new::h581d68ae8b2b86a1(&var_398);
                goto 'label_59322c;
            }
            
            var_3ec_1 = rbp_1;
            var_1b8 = var_148;
            var_1a8 = var_288;
        }
        
        let mut var_2b8: i64 = 0;
        let var_2b0_1: i64 = 8;
        let var_2a8_1: i64 = 0;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            r12_1, "ignore-backupsdirectoryinodereve…", 0xe) != 0
        {
            glob::Pattern::new::hda57ded22d9a19a1(&var_398, "*~.*~TABSIZE(uutils coreutils) 0…", 2);
            core::result::Result$LT$T$C$E$GT$::unwrap::h0061ec4d59cc343c(&var_2a0, &var_398);
            alloc::vec::Vec$LT$T$C$A$GT$::push::h355ad8e955573c97(&var_2b8, &var_2a0);
            glob::Pattern::new::hda57ded22d9a19a1(&var_398, ".*~TABSIZE(uutils coreutils) 0.0…", 3);
            core::result::Result$LT$T$C$E$GT$::unwrap::h0061ec4d59cc343c(&var_2a0, &var_398);
            alloc::vec::Vec$LT$T$C$A$GT$::push::h355ad8e955573c97(&var_2b8, &var_2a0);
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h515ae0bf911bf05f(
            &var_398, r12_1, "ignorecontextgroup-directories-f…", 6);
        clap_builder::parser::error::MatchesError::unwrap::hce850597106bdf7f(&var_2a0, 
            "ignorecontextgroup-directories-f…", 6, &var_398);
        let mut var_360_1: i128 = var_270;
        let mut var_370: i64;
        var_370 = var_280;
        var_380 = var_290;
        var_390 = var_2a0;
        let var_180: i128;
        let mut var_348_1: i128 = var_180;
        let var_170: i128;
        let mut var_338_1: i128 = var_170;
        let var_160: i128;
        let mut var_328_1: i128 = var_160;
        let var_150: i64;
        let var_318_1: i64 = var_150;
        let mut var_308_1: i128 = var_180;
        let mut var_2f8_1: i128 = var_170;
        let mut var_2e8_1: i128 = var_160;
        let var_2d8_1: i64 = var_150;
        var_398 = 1;
        let var_350_1: i64 = 0;
        let var_310_1: i64 = 0;
        
        loop
        {
            let rax_60: *mut c_void = _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5211ac9742757d65(&var_398);
            
            if rax_60 == 0
            {
                break;
            }
            
            let mut var_a0: i64;
            uucore::features::parser::parse_glob::from_str::hec6dc6cec3d01504(&var_a0, 
                *rax_60.byte_offset(8), *rax_60.byte_offset(0x10));
            
            if var_a0 != -0x8000000000000000
            {
                alloc::vec::Vec$LT$T$C$A$GT$::push::h355ad8e955573c97(&var_2b8, &var_a0);
            }
            else
            {
                let mut rax_61: i64;
                let mut rdx_22: i64;
                rax_61 = uucore::util_name::h074417a1e6395129();
                var_148 = rax_61;
                let var_140_1: i64 = rdx_22;
                var_3c8 = &var_148;
                let var_3c0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf27cb4f53db833cd;
                var_2a0 = &data_686938;
                let var_298_1: i64 = 2;
                let var_280_1: i64 = 0;
                let var_290_1: *mut *mut i64 = &var_3c8;
                let var_288_1: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_2a0);
                let rax_62: i64 = *rax_60.byte_offset(8);
                let rcx_13: i64 = *rax_60.byte_offset(0x10);
                var_148 = 0;
                let var_140_2: i64 = rax_62;
                let var_138_2: i64 = rcx_13;
                let var_130_1: i8 = 1;
                var_3c8 = &var_148;
                let var_3c0_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_2a0 = &data_686958;
                let var_298_2: i64 = 2;
                var_280 = nullptr;
                var_290 = &var_3c8;
                let var_288_2: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_2a0);
            }
        }
        
        if rax_1 == 2
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h515ae0bf911bf05f(
                &var_398, arg2, "hidehurdNZSTTBMTmainCubaWITAchar…", 4);
            clap_builder::parser::error::MatchesError::unwrap::hce850597106bdf7f(&var_2a0, 
                "hidehurdNZSTTBMTmainCubaWITAchar…", 4, &var_398);
            var_360_1 = var_270;
            var_370 = var_280;
            var_380 = var_290;
            var_390 = var_2a0;
            var_348_1 = var_180;
            var_338_1 = var_170;
            var_328_1 = var_160;
            let var_318_2: i64 = var_150;
            var_308_1 = var_180;
            var_2f8_1 = var_170;
            var_2e8_1 = var_160;
            let var_2d8_2: i64 = var_150;
            var_398 = 1;
            let var_350_2: i64 = 0;
            let var_310_2: i64 = 0;
            
            loop
            {
                let rax_65: *mut c_void = _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5211ac9742757d65(&var_398);
                
                if rax_65 == 0
                {
                    break;
                }
                
                let mut var_68: i64;
                uucore::features::parser::parse_glob::from_str::hec6dc6cec3d01504(&var_68, 
                    *rax_65.byte_offset(8), *rax_65.byte_offset(0x10));
                
                if var_68 != -0x8000000000000000
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h355ad8e955573c97(&var_2b8, &var_68);
                }
                else
                {
                    let mut rax_66: i64;
                    let mut rdx_25: i64;
                    rax_66 = uucore::util_name::h074417a1e6395129();
                    var_148 = rax_66;
                    let var_140_3: i64 = rdx_25;
                    var_3c8 = &var_148;
                    let var_3c0_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf27cb4f53db833cd;
                    var_2a0 = &data_686938;
                    let var_298_3: i64 = 2;
                    let var_280_2: i64 = 0;
                    let var_290_2: *mut *mut i64 = &var_3c8;
                    let var_288_3: i64 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_2a0);
                    let rax_67: i64 = *rax_65.byte_offset(8);
                    let rcx_15: i64 = *rax_65.byte_offset(0x10);
                    var_148 = 0;
                    let var_140_4: i64 = rax_67;
                    let var_138_3: i64 = rcx_15;
                    let var_130_2: i8 = 1;
                    var_3c8 = &var_148;
                    let var_3c0_4: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_2a0 = &data_686978;
                    let var_298_4: i64 = 2;
                    let var_280_3: i64 = 0;
                    let var_290_3: *mut *mut i64 = &var_3c8;
                    let var_288_4: i64 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_2a0);
                }
            }
        }
        
        let rax_68: i64 = uu_ls::Config::from::_$u7b$$u7b$closure$u7d$$u7d$::hca882a26640d0f17(
            arg2, "zerowhenAnsiEire -- \x1b[8mhelpn…", 4);
        let var_390_1: i64 = 0;
        let var_388_1: i64 = 9;
        var_380 = "xtabsizemgonumeric-uid-gidallalm…";
        let mut var_378: i128;
        var_378 = 1;
        let var_370_2: *const i8 = "Cxtabsizemgonumeric-uid-gidallal…";
        let var_368_2: i64 = 1;
        var_360_1 = "mgonumeric-uid-gidallalmost-allS…";
        *var_360_1[8] = 1;
        let var_350_3: *const i8 = "long', 'FFMTZero\x1b[7mauto";
        var_348_1 = 4;
        *var_348_1[8] = "onumeric-uid-gidallalmost-allStU…";
        var_338_1 = 1;
        *var_338_1[8] = "gonumeric-uid-gidallalmost-allSt…";
        var_328_1 = 1;
        *var_328_1[8] = "numeric-uid-gidallalmost-allStUv…";
        let var_318_3: i64 = 0xf;
        let var_310_3: *const i8 = "1Cxtabsizemgonumeric-uid-gidalla…";
        var_308_1 = 1;
        *var_308_1[8] = "formatignore-backupsdirectoryino…";
        var_2f8_1 = 6;
        var_398 = arg2;
        let mut rax_69: i8;
        let mut rdx_26: i64;
        rax_69 = core::iter::traits::iterator::Iterator::reduce::h60e4bf788bf9afd1(&var_398);
        let mut rsi_32: i64 = 0;
        
        if (rax_69 & 1) != 0
        {
            rsi_32 = rdx_26;
        }
        
        let mut rbp_2: i8 = var_416;
        
        if rax_68 > rsi_32
        {
            rbp_2 = 2 - (var_416 == 1);
        }
        
        let rax_71: i64 = uu_ls::Config::from::_$u7b$$u7b$closure$u7d$$u7d$::hca882a26640d0f17(
            arg2, "zerowhenAnsiEire -- \x1b[8mhelpn…", 4);
        let var_390_2: i64 = 0;
        let var_388_2: i64 = 1;
        var_380 = "colorpathsindicator-styletime-st…";
        var_378 = 5;
        var_398 = arg2;
        let mut rax_72: i8;
        let mut rdx_27: i64;
        rax_72 = core::iter::traits::iterator::Iterator::reduce::h776b87a80d9abceb(&var_398);
        let mut rcx_17: i64 = 0;
        
        if (rax_72 & 1) != 0
        {
            rcx_17 = rdx_27;
        }
        
        let rax_73: i64 = uu_ls::Config::from::_$u7b$$u7b$closure$u7d$$u7d$::hca882a26640d0f17(
            arg2, "zerowhenAnsiEire -- \x1b[8mhelpn…", 4);
        let var_390_3: i64 = 0;
        let var_388_3: i64 = 2;
        var_380 = "hide-control-charsshow-control-c…";
        var_378 = 0x12;
        let var_370_3: *const i8 = "show-control-charswidthauthorfor…";
        let var_368_3: i64 = 0x12;
        var_398 = arg2;
        let mut rax_74: i8;
        let mut rdx_28: i64;
        rax_74 = core::iter::traits::iterator::Iterator::reduce::h1aa6ef0bbaabddf1(&var_398);
        let mut rcx_18: i64 = 0;
        
        if (rax_74 & 1) != 0
        {
            rcx_18 = rdx_28;
        }
        
        let mut r15_2: *mut c_void;
        r15_2 = rax_73 > rcx_18;
        let rax_75: i64 = uu_ls::Config::from::_$u7b$$u7b$closure$u7d$$u7d$::hca882a26640d0f17(
            arg2, "zerowhenAnsiEire -- \x1b[8mhelpn…", 4);
        let var_390_4: i64 = 0;
        let var_388_4: i64 = 4;
        var_380 = "quoting-stylehide-control-charss…";
        var_378 = 0xd;
        let var_370_4: *const i8 = "quote-namepfile-typedereferenced…";
        let var_368_4: i64 = 0xa;
        var_360_1 = "escapeliteralquote-namepfile-typ…";
        *var_360_1[8] = 6;
        let var_350_4: *const i8 = "literalquote-namepfile-typederef…";
        var_348_1 = 7;
        var_398 = arg2;
        let mut rax_76: i8;
        let mut rdx_29: i64;
        rax_76 = core::iter::traits::iterator::Iterator::reduce::hf3f9f1012874749e(&var_398);
        let mut rcx_19: u32;
        rcx_19 = rax_11 & rax_71 <= rcx_17;
        let r14_3: u64 = rcx_19;
        let mut rcx_20: i64 = 0;
        
        if (rax_76 & 1) != 0
        {
            rcx_20 = rdx_29;
        }
        
        let mut r15_3: i8 = 3;
        
        if rax_75 <= rcx_20
        {
            r15_3 = rax_50;
        }
        
        let mut r13_2: i8 = rax_50 >> 8;
        
        if rax_75 > rcx_20
        {
            r13_2 = var_3ec_1 | r15_2;
        }
        
        if r14_3 != 0
        {
            lscolors::LsColors::from_env::hd14810e1aa664586(&var_398, r14_3);
            
            if var_398 != -0x8000000000000000
            {
                memcpy(&var_2a0, &var_398, 0xa0);
            }
            else
            {
                _$LT$lscolors..LsColors$u20$as$u20$core..default..Default$GT$::default::h20bd32057ce99be7(&var_2a0);
            }
            
            memcpy(&var_148, &var_2a0, 0xa0);
            
            if var_415_1 != 0
            {
                goto 'label_593d85;
            }
            
            goto 'label_593e9d;
        }
        
        var_148 = -0x8000000000000000;
        let mut var_3fc: i8;
        
        if var_415_1 == 0
        {
            'label_593e9d:
            let mut rax_82: u32 = 1;
            
            if uu_ls::dired::is_dired_arg_present::h4057440d3249dc1d() == 0
            {
                rax_82 = rbp_2;
            }
            
            var_3fc = rax_82;
        }
        else
        {
            'label_593d85:
            let mut rax_79: i8;
            let mut rcx_21: i32;
            rax_79 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "zerowhenAnsiEire -- \x1b[8mhelpn…", 4);
            rcx_21 = 1;
            var_3fc = rcx_21;
            
            if rax_79 != 0
            {
                var_398 = -0x7ffffffffffffffc;
                arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h581d68ae8b2b86a1(&var_398);
                arg1[2] = &data_6869e8;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$core..option..Option$LT$lscolors..LsColors$GT$$GT$::hcdd29262374fdd6d(&var_148);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$glob..Pattern$GT$$GT$::h7f4f5f3b8121bb89(&var_2b8);
                core::ptr::drop_in_place$LT$uu_ls..TimeStyle$GT$::h2bcef35c506d62c3(&var_1b8);
                goto 'label_593248;
            }
        }
        
        let mut var_416_1: i8 = 3;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "dereferencedereference-command-l…", 0xb) == 0
        {
            var_416_1 = 2;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "dereference-command-linederefere…", 0x18) == 0
            {
                var_416_1 = 1;
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "dereference-command-line-symlink…", 0x27) == 0
                {
                    var_416_1 = !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "directoryinodereverserecursiveco…", 9) & rax_51 != 3
                        & var_3fc != 1;
                }
            }
        }
        
        let mut rbp_3: i64;
        
        if r14_3 == 0
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fe44c4217b6c6ae(
                &var_398, arg2, "tabsizemgonumeric-uid-gidallalmo…", 7);
            let rax_87: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::he9eef133f866d763(
                "tabsizemgonumeric-uid-gidallalmo…", 7, &var_398);
            let mut rdi_103: i64;
            
            if rax_87 == 0
            {
                rdi_103 = 0;
            }
            else
            {
                core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_398, 
                    *rax_87.byte_offset(8), *rax_87.byte_offset(0x10));
                rdi_103 = var_398 ^ 1;
            }
            
            let mut rax_88: i8;
            let mut rdx_33: i64;
            rax_88 = core::option::Option$LT$T$GT$::or_else::hd7f013b5a69f74d6(rdi_103);
            rbp_3 = 8;
            
            if (rax_88 & 1) != 0
            {
                rbp_3 = rdx_33;
            }
        }
        else
        {
            rbp_3 = 0;
        }
        
        let mut var_3e8_1: i32;
        var_3e8_1 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "recursivecolorpathsindicator-sty…", 9);
        let rax_90: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "reverserecursivecolorpathsindica…", 7);
        var_3c8 = var_2b8;
        let rax_92: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "directoryinodereverserecursiveco…", 9);
        memcpy(&var_2a0, &var_148, 0xa0);
        let rax_93: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "inodereverserecursivecolorpathsi…", 5);
        let rax_94: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "sizeIranWESTAKSTHKSTACSTi128 as …", 4);
        let rax_95: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "group-directories-firstdiredhype…", 0x17);
        let mut r13_3: i8 = 0xa;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "zerowhenAnsiEire -- \x1b[8mhelpn…", 4) != 0
        {
            r13_3 = 0;
        }
        
        let var_388_5: i64 = var_2a8_1;
        var_398 = var_3c8;
        memcpy(&var_380, &var_2a0, 0xa0);
        var_2e8_1 = var_1b8;
        let var_2d0_1: *mut i8 = var_1a8;
        memcpy(arg1, &var_398, 0xd0);
        arg1[0x1a] = var_3a8_1;
        arg1[0x1b] = var_3a0_1;
        arg1[0x1c] = rbp_3;
        arg1[0x1d] = rax_37;
        *arg1.byte_offset(0xe9) = var_3e4_1;
        *arg1.byte_offset(0xea) = rax_41 ^ 1;
        *arg1.byte_offset(0xeb) = rax_42;
        *arg1.byte_offset(0xec) = rdx_15;
        *arg1.byte_offset(0xee) = var_3e8_1;
        *arg1.byte_offset(0xef) = rax_90;
        arg1[0x1e] = rax_92;
        *arg1.byte_offset(0xf1) = rax_93;
        *arg1.byte_offset(0xf2) = rax_94;
        *arg1.byte_offset(0xf3) = rax;
        *arg1.byte_offset(0xf4) = 0;
        *arg1.byte_offset(0xf5) = rax_95;
        *arg1.byte_offset(0xf6) = var_415_1;
        *arg1.byte_offset(0xf7) = rax_12;
        arg1[0x1f] = rax_1;
        *arg1.byte_offset(0xf9) = var_2bc;
        *arg1.byte_offset(0xfa) = var_416_1;
        *arg1.byte_offset(0xfb) = rax_10;
        *arg1.byte_offset(0xfc) = r15_3;
        *arg1.byte_offset(0xfd) = r13_2;
        *arg1.byte_offset(0xfe) = rax_50 >> 0x10;
        *arg1.byte_offset(0xff) = rax_51;
        arg1[0x20] = var_3fc;
        *arg1.byte_offset(0x101) = rax_9;
        *arg1.byte_offset(0x102) = r13_3;
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(var_3d8, 
            var_3e0);
        core::ptr::drop_in_place$LT$std..env..VarError$GT$::hac62f4fc27395a09(var_198, var_190);
        let rdi_116: i64 = var_1e8;
        
        if (var_410 & rdi_116 != -0x8000000000000000) != 0
        {
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(rdi_116, 
                var_1e0);
        }
        
        let rdi_117: i64 = var_200;
        
        if rdi_117 != -0x8000000000000000 && var_408 != 0
        {
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(rdi_117, 
                var_1f8);
        }
        
        rdi_118 = var_1d0;
        
        if rdi_118 != -0x8000000000000000
        {
            goto 'label_5942e8;
        }
    }
    arg1
}
