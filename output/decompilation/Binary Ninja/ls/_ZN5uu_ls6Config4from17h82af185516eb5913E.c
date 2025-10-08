
  int64_t* uu_ls::Config::from::h82af185516eb5913(int64_t* arg1, uint64_t arg2)

{
    char rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        arg2, "contextgroup-directories-firstdi…", 7);
    char var_398;
    uu_ls::extract_format::h97a71c2b75d25f2b(&var_398, arg2);
    char rbp = var_398;
    char rax_1 = uu_ls::extract_files::h9e160bb0932eec0f(arg2);
    char var_416 = 1;
    void* var_390;
    char const* const var_388;
    char const* const var_380;
    char const* const var_2a0;
    int64_t var_298;
    char const* const var_290;
    char* var_288;
    char const* const var_280;
    int64_t var_278;
    char const* const var_270;
    int64_t var_148;
    
    if (rbp != 1)
    {
        int64_t rcx_1;
        
        if (!var_390)
            rcx_1 = 0;
        else
        {
            char rax_2;
            int64_t rdx_2;
            rax_2 = uu_ls::Config::from::_$u7b$$u7b$closure$u7d$$u7d$::h4ded6d4dcec58c4c(arg2, 
                var_390, var_388);
            rcx_1 = 0;
            
            if (rax_2 & 1)
                rcx_1 = rdx_2;
        }
        
        var_148 = rcx_1;
        var_2a0 = "gonumeric-uid-gidallalmost-allSt…";
        var_298 = 1;
        var_290 = "onumeric-uid-gidallalmost-allStU…";
        var_288 = 1;
        var_280 = "numeric-uid-gidallalmost-allStUv…";
        var_278 = 0xf;
        var_270 = "full-timeignorecontextgroup-dire…";
        int64_t var_268_1 = 9;
        var_398 = &var_2a0;
        void var_260;
        var_390 = &var_260;
        var_388 = arg2;
        var_380 = nullptr;
        int64_t var_368_1 = 0;
        var_416 = 1;
        
        if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hff7ad56065d75b13(core::iter::adapters::flatten::FlattenCompat$LT$I$C$U$GT$::iter_try_fold::h3ec37c71eeb41e17(&var_398, &var_148)))
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h172437770ffa9ae0(
                &var_2a0, arg2, "1Cxtabsizemgonumeric-uid-gidalla…", 1);
            
            if (var_2a0)
            {
                var_388 = var_290;
                var_398 = var_2a0;
                
                if (clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h45c0c3cb9ce2c562(arg2, "1Cxtabsizemgonumeric-uid-gidalla…", 1) == 2)
                {
                    char rcx_2 = rbp;
                    rbp = 2;
                    
                    if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hff7ad56065d75b13(core::iter::traits::iterator::Iterator::try_fold::h9cd0c2173f564cd9(
                            &var_398, &var_148)))
                        rbp = rcx_2;
                }
            }
            
            var_416 = rbp;
        }
    }
    
    char rax_9 = uu_ls::extract_sort::h07e4377306d463a7(arg2);
    char rax_10 = uu_ls::extract_time::hd6278fc767568d0f(arg2);
    char rax_11 = uu_ls::extract_color::h349ba64db1ed3f00(arg2);
    char rax_12 = uu_ls::extract_hyperlink::hae52003f9f8916da(arg2);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fe44c4217b6c6ae(
        &var_398, arg2, "block-sizehuman-readablesikibiby…", 0xa);
    void* rax_13 = clap_builder::parser::error::MatchesError::unwrap::he9eef133f866d763(
        "block-sizehuman-readablesikibiby…", 0xa, &var_398);
    char rbx_1;
    char rbp_1;
    uint64_t r12;
    char r13_1;
    uint64_t r15_1;
    
    if (!rax_13)
    {
        r15_1 = arg2;
        r12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "sikibibytesescapeliteralquote-na…", 2);
        label_592d5a:
        rbp_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            r15_1, "human-readablesikibibytesescapel…", 0xe);
        r13_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            r15_1, "kibibytesescapeliteralquote-name…", 9);
        rbx_1 = 2;
        
        if (!r12)
            rbx_1 = rbp_1;
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fe44c4217b6c6ae(
            &var_398, arg2, "block-sizehuman-readablesikibiby…", 0xa);
        void* rax_14 = clap_builder::parser::error::MatchesError::unwrap::he9eef133f866d763(
            "block-sizehuman-readablesikibiby…", 0xa, &var_398);
        
        if (!rax_14)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        r12 = 1;
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(*(rax_14 + 8), *(rax_14 + 0x10), "sikibibytesescapeliteralquote-na…", 2))
            r12 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "sikibibytesescapeliteralquote-na…", 2);
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fe44c4217b6c6ae(
            &var_398, arg2, "block-sizehuman-readablesikibiby…", 0xa);
        void* rax_17 = clap_builder::parser::error::MatchesError::unwrap::he9eef133f866d763(
            "block-sizehuman-readablesikibiby…", 0xa, &var_398);
        
        if (!rax_17)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(*(rax_17 + 8), *(rax_17 + 0x10), "human-readablesikibibytesescapel…", 0xe))
        {
            r15_1 = arg2;
            goto label_592d5a;
        }
        
        r13_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "kibibytesescapeliteralquote-name…", 9);
        rbx_1 = r12 + 1;
        rbp_1 = 1;
    }
    int64_t var_1d0;
    std::env::var_os::h584be2191f4a6db4(&var_1d0, "BLOCKSIZEBLOCK_SIZELS_BLOCK_SIZE…");
    int64_t var_200;
    std::env::var_os::h584be2191f4a6db4(&var_200, "BLOCK_SIZELS_BLOCK_SIZEPOSIXLY_C…");
    int64_t var_1e8;
    std::env::var_os::h584be2191f4a6db4(&var_1e8, "LS_BLOCK_SIZEPOSIXLY_CORRECT*~.*…");
    int64_t var_198;
    std::env::var_os::h584be2191f4a6db4(&var_198, "POSIXLY_CORRECT*~.*~TABSIZE(uuti…");
    char var_2bc = rbx_1;
    char var_414;
    char var_410;
    char var_408;
    void* var_3e0;
    int64_t var_3d8;
    void* var_1f8;
    void* var_1e0;
    void* var_1c8;
    uint64_t rdx_11;
    
    if (!rax_13)
    {
        int64_t rax_26 = var_1e8;
        void* rax_29;
        
        if (rax_26 != -0x8000000000000000)
        {
            var_3d8 = rax_26;
            var_3e0 = var_1e0;
            uint64_t var_1d8;
            rdx_11 = var_1d8;
            rax_29 = 1;
            var_408 = rax_29;
            var_410 = 0;
            label_592ee8:
            rax_29 = 1;
            var_414 = rax_29;
            rbx_1 = 0;
            
            if (rbp_1 | r12 || !rdx_11)
                goto label_593087;
            
            goto label_592f0c;
        }
        
        int64_t rax_27 = var_200;
        
        if (rax_27 != -0x8000000000000000)
        {
            var_3d8 = rax_27;
            var_3e0 = var_1f8;
            uint64_t var_1f0;
            rdx_11 = var_1f0;
            rax_29 = 1;
            var_410 = rax_29;
            var_408 = 0;
            goto label_592ee8;
        }
        
        int64_t rax_28 = var_1d0;
        
        if (rax_28 == -0x8000000000000000)
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_398, 1, 0);
            goto label_592e16;
        }
        
        var_3d8 = rax_28;
        var_3e0 = var_1c8;
        uint64_t var_1c0;
        rdx_11 = var_1c0;
        void* rax_33;
        rax_33 = 1;
        var_410 = rax_33;
        var_414 = 0;
        rax_33 = 1;
        var_408 = rax_33;
        rbx_1 = 1;
        
        if (!(rbp_1 | r12) && rdx_11)
            goto label_592f0c;
        
        goto label_593087;
    }
    
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_398, *(rax_13 + 8), *(rax_13 + 0x10));
    label_592e16:
    var_3d8 = var_398;
    var_3e0 = var_390;
    rdx_11 = var_388;
    void* rax_25;
    rax_25 = 1;
    var_410 = rax_25;
    rbx_1 = 0;
    rax_25 = 1;
    var_408 = rax_25;
    rax_25 = 1;
    var_414 = rax_25;
    int64_t* var_3c8;
    int64_t var_3a8_1;
    int64_t var_3a0_1;
    int64_t var_190;
    int64_t rdi_118;
    uint64_t r12_1;
    
    if (!(rbp_1 | r12) && rdx_11)
    {
        label_592f0c:
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_3c8, var_3e0, rdx_11);
        r12_1 = arg2;
        void* var_3c0;
        uint64_t var_3b8;
        uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(&var_2a0, var_3c0, 
            var_3b8);
        
        if (var_2a0 == 4)
        {
            int64_t rcx_3 = var_298;
            
            if (!rbx_1)
            {
                int64_t rax_32 = 0x400;
                
                if (!r13_1)
                    rax_32 = rcx_3;
                
                var_3a8_1 = rcx_3;
                
                if (rax_13)
                    rax_32 = rcx_3;
                
                var_3a0_1 = rax_32;
            }
            else
            {
                if (r13_1)
                    rcx_3 = 0x400;
                
                var_3a0_1 = rcx_3;
                var_3a8_1 = 1;
            }
            
            label_593035:
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..features..parser..parse_size..ParseSizeError$GT$$GT$::h2cce121cad747743(&var_2a0);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h5012a4810cee898d(
                &var_3c8);
            goto label_5930d1;
        }
        
        if (!rax_13)
        {
            int64_t rdx_13 = 1;
            var_3a0_1 = 0x400;
            
            if (!rbx_1)
                rdx_13 = 0x400;
            
            var_3a8_1 = rdx_13;
            goto label_593035;
        }
        
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_148, rax_13);
        char* var_138;
        var_380 = var_138;
        var_390 = var_148;
        var_398 = -0x7ffffffffffffffd;
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h581d68ae8b2b86a1(&var_398);
        arg1[2] = &data_6869e8;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..features..parser..parse_size..ParseSizeError$GT$$GT$::h2cce121cad747743(&var_2a0);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h5012a4810cee898d(&var_3c8);
        label_593248:
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(var_3d8, 
            var_3e0);
        core::ptr::drop_in_place$LT$std..env..VarError$GT$::hac62f4fc27395a09(var_198, var_190);
        int64_t rdi_49 = var_1e8;
        
        if (var_410 & rdi_49 != -0x8000000000000000)
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(rdi_49, 
                var_1e0);
        
        int64_t rdi_50 = var_200;
        
        if (rdi_50 != -0x8000000000000000 && var_408)
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(rdi_50, 
                var_1f8);
        
        rdi_118 = var_1d0;
        
        if (rdi_118 != -0x8000000000000000)
        {
            label_5942e8:
            
            if (var_414)
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(
                    rdi_118, var_1c8);
        }
    }
    else
    {
        label_593087:
        
        if (var_198 != -0x8000000000000000)
            var_3a0_1 = (r13_1 << 9) + 0x200;
        else
        {
            int64_t rcx_5 = 0x400;
            
            if (r12)
                rcx_5 = 0x3e8;
            
            var_3a0_1 = rcx_5;
        }
        
        var_3a8_1 = 1;
        r12_1 = arg2;
        label_5930d1:
        char rax_37 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            r12_1, "authorformatignore-backupsdirect…", 6);
        char var_3e4_1;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                r12_1, "no-groupPatternsParseIntcreation…", 8))
            var_3e4_1 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                r12_1, "onumeric-uid-gidallalmost-allStU…", 1) ^ 1;
        else
            var_3e4_1 = 0;
        
        char rax_41 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            r12_1, "gonumeric-uid-gidallalmost-allSt…", 1);
        char rax_42 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            r12_1, "numeric-uid-gidallalmost-allStUv…", 0xf);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fe44c4217b6c6ae(
            &var_398, r12_1, "widthauthorformatignore-backupsd…", 5);
        uu_ls::parse_width::h699105a2614aa38f(&var_2a0, 
            clap_builder::parser::error::MatchesError::unwrap::he9eef133f866d763(
                "widthauthorformatignore-backupsd…", 5, &var_398));
        char const* const rax_44 = var_2a0;
        int16_t rdx_15 = var_298;
        uint64_t rax_46;
        
        if (rax_44 != -0x7ffffffffffffffa)
        {
            int64_t var_370_1 = var_278;
            *var_380[2] = *var_288[2];
            *var_390[2] = *var_298[2];
            var_398 = rax_44;
            var_390 = rdx_15;
            rax_46 = alloc::boxed::Box$LT$T$GT$::new::h581d68ae8b2b86a1(&var_398);
            label_59322c:
            arg1[1] = rax_46;
            arg1[2] = &data_6869e8;
            *arg1 = -0x8000000000000000;
            goto label_593248;
        }
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            r12_1, "hide-control-charsshow-control-c…", 0x12))
        {
            rbp_1 = 1;
            
            if (!
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                r12_1, "show-control-charswidthauthorfor…", 0x12))
            {
                std::io::stdio::stdout::hb6a8e10bcccf3287();
                rbp_1 = std::sys::io::is_terminal::isatty::is_terminal::h0e1d734d892dc985() ^ 1;
            }
        }
        else
            rbp_1 = 0;
        
        int32_t rax_50 = uu_ls::extract_quoting_style::h200ad966f0acf148(r12_1, rbp_1);
        char rax_51 = uu_ls::extract_indicator_style::he22d10d1f55443b8(r12_1);
        bool var_415_1 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            r12_1, "diredhyperlink%b %e  %Y%Y-%m-%d …", 5);
        char var_3ec_1;
        int64_t var_1b8;
        char* var_1a8;
        
        if (var_416 != 1 & (var_415_1 ^ 1))
        {
            var_3ec_1 = rbp_1;
            var_1b8 = -0x7ffffffffffffffe;
        }
        else
        {
            uu_ls::parse_time_style::hacb3b16b50cd334e(&var_2a0, r12_1);
            char const* const rax_53 = var_2a0;
            var_148 = var_298;
            
            if (rax_53 != -0x7ffffffffffffffa)
            {
                int128_t var_378_1 = var_280;
                var_390 = var_148;
                var_380 = var_288;
                var_398 = rax_53;
                rax_46 = alloc::boxed::Box$LT$T$GT$::new::h581d68ae8b2b86a1(&var_398);
                goto label_59322c;
            }
            
            var_3ec_1 = rbp_1;
            var_1b8 = var_148;
            var_1a8 = var_288;
        }
        
        int64_t var_2b8 = 0;
        int64_t var_2b0_1 = 8;
        int64_t var_2a8_1 = 0;
        
        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            r12_1, "ignore-backupsdirectoryinodereve…", 0xe))
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
        int128_t var_360_1 = var_270;
        int64_t var_370;
        var_370 = var_280;
        var_380 = var_290;
        var_390 = var_2a0;
        int128_t var_180;
        int128_t var_348_1 = var_180;
        int128_t var_170;
        int128_t var_338_1 = var_170;
        int128_t var_160;
        int128_t var_328_1 = var_160;
        int64_t var_150;
        int64_t var_318_1 = var_150;
        int128_t var_308_1 = var_180;
        int128_t var_2f8_1 = var_170;
        int128_t var_2e8_1 = var_160;
        int64_t var_2d8_1 = var_150;
        var_398 = 1;
        int64_t var_350_1 = 0;
        int64_t var_310_1 = 0;
        
        while (true)
        {
            void* rax_60 = _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5211ac9742757d65(&var_398);
            
            if (!rax_60)
                break;
            
            int64_t var_a0;
            uucore::features::parser::parse_glob::from_str::hec6dc6cec3d01504(&var_a0, 
                *(rax_60 + 8), *(rax_60 + 0x10));
            
            if (var_a0 != -0x8000000000000000)
                alloc::vec::Vec$LT$T$C$A$GT$::push::h355ad8e955573c97(&var_2b8, &var_a0);
            else
            {
                int64_t rax_61;
                int64_t rdx_22;
                rax_61 = uucore::util_name::h074417a1e6395129();
                var_148 = rax_61;
                int64_t var_140_1 = rdx_22;
                var_3c8 = &var_148;
                int64_t (* var_3c0_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf27cb4f53db833cd;
                var_2a0 = &data_686938;
                int64_t var_298_1 = 2;
                int64_t var_280_1 = 0;
                int64_t** var_290_1 = &var_3c8;
                int64_t var_288_1 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_2a0);
                int64_t rax_62 = *(rax_60 + 8);
                int64_t rcx_13 = *(rax_60 + 0x10);
                var_148 = 0;
                int64_t var_140_2 = rax_62;
                int64_t var_138_2 = rcx_13;
                char var_130_1 = 1;
                var_3c8 = &var_148;
                int64_t (* var_3c0_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_2a0 = &data_686958;
                int64_t var_298_2 = 2;
                var_280 = nullptr;
                var_290 = &var_3c8;
                int64_t var_288_2 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_2a0);
            }
        }
        
        if (rax_1 == 2)
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
            int64_t var_318_2 = var_150;
            var_308_1 = var_180;
            var_2f8_1 = var_170;
            var_2e8_1 = var_160;
            int64_t var_2d8_2 = var_150;
            var_398 = 1;
            int64_t var_350_2 = 0;
            int64_t var_310_2 = 0;
            
            while (true)
            {
                void* rax_65 = _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5211ac9742757d65(&var_398);
                
                if (!rax_65)
                    break;
                
                int64_t var_68;
                uucore::features::parser::parse_glob::from_str::hec6dc6cec3d01504(&var_68, 
                    *(rax_65 + 8), *(rax_65 + 0x10));
                
                if (var_68 != -0x8000000000000000)
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h355ad8e955573c97(&var_2b8, &var_68);
                else
                {
                    int64_t rax_66;
                    int64_t rdx_25;
                    rax_66 = uucore::util_name::h074417a1e6395129();
                    var_148 = rax_66;
                    int64_t var_140_3 = rdx_25;
                    var_3c8 = &var_148;
                    int64_t (* var_3c0_3)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf27cb4f53db833cd;
                    var_2a0 = &data_686938;
                    int64_t var_298_3 = 2;
                    int64_t var_280_2 = 0;
                    int64_t** var_290_2 = &var_3c8;
                    int64_t var_288_3 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_2a0);
                    int64_t rax_67 = *(rax_65 + 8);
                    int64_t rcx_15 = *(rax_65 + 0x10);
                    var_148 = 0;
                    int64_t var_140_4 = rax_67;
                    int64_t var_138_3 = rcx_15;
                    char var_130_2 = 1;
                    var_3c8 = &var_148;
                    int64_t (* var_3c0_4)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_2a0 = &data_686978;
                    int64_t var_298_4 = 2;
                    int64_t var_280_3 = 0;
                    int64_t** var_290_3 = &var_3c8;
                    int64_t var_288_4 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_2a0);
                }
            }
        }
        
        int64_t rax_68 = uu_ls::Config::from::_$u7b$$u7b$closure$u7d$$u7d$::hca882a26640d0f17(arg2, 
            "zerowhenAnsiEire -- \x1b[8mhelpn…", 4);
        int64_t var_390_1 = 0;
        int64_t var_388_1 = 9;
        var_380 = "xtabsizemgonumeric-uid-gidallalm…";
        int128_t var_378;
        var_378 = 1;
        char const* const var_370_2 = "Cxtabsizemgonumeric-uid-gidallal…";
        int64_t var_368_2 = 1;
        var_360_1 = "mgonumeric-uid-gidallalmost-allS…";
        *var_360_1[8] = 1;
        char const* const var_350_3 = "long', 'FFMTZero\x1b[7mauto";
        var_348_1 = 4;
        *var_348_1[8] = "onumeric-uid-gidallalmost-allStU…";
        var_338_1 = 1;
        *var_338_1[8] = "gonumeric-uid-gidallalmost-allSt…";
        var_328_1 = 1;
        *var_328_1[8] = "numeric-uid-gidallalmost-allStUv…";
        int64_t var_318_3 = 0xf;
        char const* const var_310_3 = "1Cxtabsizemgonumeric-uid-gidalla…";
        var_308_1 = 1;
        *var_308_1[8] = "formatignore-backupsdirectoryino…";
        var_2f8_1 = 6;
        var_398 = arg2;
        char rax_69;
        int64_t rdx_26;
        rax_69 = core::iter::traits::iterator::Iterator::reduce::h60e4bf788bf9afd1(&var_398);
        int64_t rsi_32 = 0;
        
        if (rax_69 & 1)
            rsi_32 = rdx_26;
        
        char rbp_2 = var_416;
        
        if (rax_68 > rsi_32)
            rbp_2 = 2 - (var_416 == 1);
        
        int64_t rax_71 = uu_ls::Config::from::_$u7b$$u7b$closure$u7d$$u7d$::hca882a26640d0f17(arg2, 
            "zerowhenAnsiEire -- \x1b[8mhelpn…", 4);
        int64_t var_390_2 = 0;
        int64_t var_388_2 = 1;
        var_380 = "colorpathsindicator-styletime-st…";
        var_378 = 5;
        var_398 = arg2;
        char rax_72;
        int64_t rdx_27;
        rax_72 = core::iter::traits::iterator::Iterator::reduce::h776b87a80d9abceb(&var_398);
        int64_t rcx_17 = 0;
        
        if (rax_72 & 1)
            rcx_17 = rdx_27;
        
        int64_t rax_73 = uu_ls::Config::from::_$u7b$$u7b$closure$u7d$$u7d$::hca882a26640d0f17(arg2, 
            "zerowhenAnsiEire -- \x1b[8mhelpn…", 4);
        int64_t var_390_3 = 0;
        int64_t var_388_3 = 2;
        var_380 = "hide-control-charsshow-control-c…";
        var_378 = 0x12;
        char const* const var_370_3 = "show-control-charswidthauthorfor…";
        int64_t var_368_3 = 0x12;
        var_398 = arg2;
        char rax_74;
        int64_t rdx_28;
        rax_74 = core::iter::traits::iterator::Iterator::reduce::h1aa6ef0bbaabddf1(&var_398);
        int64_t rcx_18 = 0;
        
        if (rax_74 & 1)
            rcx_18 = rdx_28;
        
        void* r15_2;
        r15_2 = rax_73 > rcx_18;
        int64_t rax_75 = uu_ls::Config::from::_$u7b$$u7b$closure$u7d$$u7d$::hca882a26640d0f17(arg2, 
            "zerowhenAnsiEire -- \x1b[8mhelpn…", 4);
        int64_t var_390_4 = 0;
        int64_t var_388_4 = 4;
        var_380 = "quoting-stylehide-control-charss…";
        var_378 = 0xd;
        char const* const var_370_4 = "quote-namepfile-typedereferenced…";
        int64_t var_368_4 = 0xa;
        var_360_1 = "escapeliteralquote-namepfile-typ…";
        *var_360_1[8] = 6;
        char const* const var_350_4 = "literalquote-namepfile-typederef…";
        var_348_1 = 7;
        var_398 = arg2;
        char rax_76;
        int64_t rdx_29;
        rax_76 = core::iter::traits::iterator::Iterator::reduce::hf3f9f1012874749e(&var_398);
        uint32_t rcx_19;
        rcx_19 = rax_11 & rax_71 <= rcx_17;
        uint64_t r14_3 = rcx_19;
        int64_t rcx_20 = 0;
        
        if (rax_76 & 1)
            rcx_20 = rdx_29;
        
        char r15_3 = 3;
        
        if (rax_75 <= rcx_20)
            r15_3 = rax_50;
        
        char r13_2 = rax_50 >> 8;
        
        if (rax_75 > rcx_20)
            r13_2 = var_3ec_1 | r15_2;
        
        if (r14_3)
        {
            lscolors::LsColors::from_env::hd14810e1aa664586(&var_398, r14_3);
            
            if (var_398 != -0x8000000000000000)
                memcpy(&var_2a0, &var_398, 0xa0);
            else
                _$LT$lscolors..LsColors$u20$as$u20$core..default..Default$GT$::default::h20bd32057ce99be7(&var_2a0);
            
            memcpy(&var_148, &var_2a0, 0xa0);
            
            if (var_415_1)
                goto label_593d85;
            
            goto label_593e9d;
        }
        
        var_148 = -0x8000000000000000;
        char var_3fc;
        
        if (!var_415_1)
        {
            label_593e9d:
            uint32_t rax_82 = 1;
            
            if (!uu_ls::dired::is_dired_arg_present::h4057440d3249dc1d())
                rax_82 = rbp_2;
            
            var_3fc = rax_82;
        }
        else
        {
            label_593d85:
            char rax_79;
            int32_t rcx_21;
            rax_79 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "zerowhenAnsiEire -- \x1b[8mhelpn…", 4);
            rcx_21 = 1;
            var_3fc = rcx_21;
            
            if (rax_79)
            {
                var_398 = -0x7ffffffffffffffc;
                arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h581d68ae8b2b86a1(&var_398);
                arg1[2] = &data_6869e8;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$core..option..Option$LT$lscolors..LsColors$GT$$GT$::hcdd29262374fdd6d(&var_148);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$glob..Pattern$GT$$GT$::h7f4f5f3b8121bb89(&var_2b8);
                core::ptr::drop_in_place$LT$uu_ls..TimeStyle$GT$::h2bcef35c506d62c3(&var_1b8);
                goto label_593248;
            }
        }
        
        char var_416_1 = 3;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "dereferencedereference-command-l…", 0xb))
        {
            var_416_1 = 2;
            
            if (!
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "dereference-command-linederefere…", 0x18))
            {
                var_416_1 = 1;
                
                if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "dereference-command-line-symlink…", 0x27))
                    var_416_1 = ~clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "directoryinodereverserecursiveco…", 9) & rax_51 != 3
                        & var_3fc != 1;
            }
        }
        
        int64_t rbp_3;
        
        if (!r14_3)
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fe44c4217b6c6ae(
                &var_398, arg2, "tabsizemgonumeric-uid-gidallalmo…", 7);
            void* rax_87 = clap_builder::parser::error::MatchesError::unwrap::he9eef133f866d763(
                "tabsizemgonumeric-uid-gidallalmo…", 7, &var_398);
            int64_t rdi_103;
            
            if (!rax_87)
                rdi_103 = 0;
            else
            {
                core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_398, 
                    *(rax_87 + 8), *(rax_87 + 0x10));
                rdi_103 = var_398 ^ 1;
            }
            
            char rax_88;
            int64_t rdx_33;
            rax_88 = core::option::Option$LT$T$GT$::or_else::hd7f013b5a69f74d6(rdi_103);
            rbp_3 = 8;
            
            if (rax_88 & 1)
                rbp_3 = rdx_33;
        }
        else
            rbp_3 = 0;
        
        int32_t var_3e8_1;
        var_3e8_1 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "recursivecolorpathsindicator-sty…", 9);
        char rax_90 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "reverserecursivecolorpathsindica…", 7);
        var_3c8 = var_2b8;
        char rax_92 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "directoryinodereverserecursiveco…", 9);
        memcpy(&var_2a0, &var_148, 0xa0);
        char rax_93 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "inodereverserecursivecolorpathsi…", 5);
        char rax_94 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "sizeIranWESTAKSTHKSTACSTi128 as …", 4);
        char rax_95 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "group-directories-firstdiredhype…", 0x17);
        char r13_3 = 0xa;
        
        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "zerowhenAnsiEire -- \x1b[8mhelpn…", 4))
            r13_3 = 0;
        
        int64_t var_388_5 = var_2a8_1;
        var_398 = var_3c8;
        memcpy(&var_380, &var_2a0, 0xa0);
        var_2e8_1 = var_1b8;
        char* var_2d0_1 = var_1a8;
        memcpy(arg1, &var_398, 0xd0);
        arg1[0x1a] = var_3a8_1;
        arg1[0x1b] = var_3a0_1;
        arg1[0x1c] = rbp_3;
        arg1[0x1d] = rax_37;
        *(arg1 + 0xe9) = var_3e4_1;
        *(arg1 + 0xea) = rax_41 ^ 1;
        *(arg1 + 0xeb) = rax_42;
        *(arg1 + 0xec) = rdx_15;
        *(arg1 + 0xee) = var_3e8_1;
        *(arg1 + 0xef) = rax_90;
        arg1[0x1e] = rax_92;
        *(arg1 + 0xf1) = rax_93;
        *(arg1 + 0xf2) = rax_94;
        *(arg1 + 0xf3) = rax;
        *(arg1 + 0xf4) = 0;
        *(arg1 + 0xf5) = rax_95;
        *(arg1 + 0xf6) = var_415_1;
        *(arg1 + 0xf7) = rax_12;
        arg1[0x1f] = rax_1;
        *(arg1 + 0xf9) = var_2bc;
        *(arg1 + 0xfa) = var_416_1;
        *(arg1 + 0xfb) = rax_10;
        *(arg1 + 0xfc) = r15_3;
        *(arg1 + 0xfd) = r13_2;
        *(arg1 + 0xfe) = rax_50 >> 0x10;
        *(arg1 + 0xff) = rax_51;
        arg1[0x20] = var_3fc;
        *(arg1 + 0x101) = rax_9;
        *(arg1 + 0x102) = r13_3;
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(var_3d8, 
            var_3e0);
        core::ptr::drop_in_place$LT$std..env..VarError$GT$::hac62f4fc27395a09(var_198, var_190);
        int64_t rdi_116 = var_1e8;
        
        if (var_410 & rdi_116 != -0x8000000000000000)
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(rdi_116, 
                var_1e0);
        
        int64_t rdi_117 = var_200;
        
        if (rdi_117 != -0x8000000000000000 && var_408)
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(rdi_117, 
                var_1f8);
        
        rdi_118 = var_1d0;
        
        if (rdi_118 != -0x8000000000000000)
            goto label_5942e8;
    }
    return arg1;
}
