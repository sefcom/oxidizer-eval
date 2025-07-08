
  int64_t* uu_pr::build_options::h94d2c892cdb8648c(int64_t* arg1, void* arg2, int64_t* arg3, uint64_t arg4, int64_t arg5, uint64_t arg6)

{
    char rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        arg2, "form-feedUse a <form-feed> for n…", 9);
    char rax_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "mergeMerge files. Standard outpu…", 5);
    int128_t var_328;
    int64_t var_318;
    
    if (rax_1)
    {
        uint64_t rdx;
        char const* const rsi;
        int64_t* rdi_3;
        
        if (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
            arg2, "columnProduce multi-column outpu…", 6))
        {
            rsi = "cannot specify number of columns…";
            rdi_3 = &var_328;
            rdx = 0x3a;
            label_5c4592:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h52af2e019a03ed2d(rdi_3, 
                rsi, rdx);
            arg1[1] = -0x7fffffffffffffff;
            *(arg1 + 0x10) = var_328;
            arg1[4] = var_318;
            *arg1 = 2;
            return arg1;
        }
        
        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "acrossModify the effect of the -…", 6))
        {
            rsi = "cannot specify both printing acr…";
            rdi_3 = &var_328;
            rdx = 0x3c;
            goto label_5c4592;
        }
    }
    
    char rax_5 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "mergeMerge files. Standard outpu…", 5);
    char const* const r12_1 = "headerUse the string header to r…";
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf528812c919d4af6(
        &var_328, arg2, "headerUse the string header to r…", 6);
    void* rax_6 = clap_builder::parser::error::MatchesError::unwrap::hf38d98c9afef2728(
        "headerUse the string header to r…", 6, &var_328);
    char* rcx_1;
    int64_t r13_1;
    int64_t r15_1;
    
    if (!rax_6)
    {
        r15_1 = 0;
        
        if (rax_1)
        {
            r13_1 = 1;
            rcx_1 = nullptr;
        }
        else
        {
            label_5c4645:
            
            if (!arg4)
            {
                core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
                /* no return */
            }
            
            int64_t rbx_1 = *arg3;
            char* rbp_1 = arg3[1];
            r13_1 = 1;
            char rax_7 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbb47e2b296de4d69(rbx_1, rbp_1, "-cannot specify number of column…", 1);
            rcx_1 = nullptr;
            
            if (!rax_7)
                rcx_1 = rbp_1;
            
            if (!rax_7)
                r13_1 = rbx_1;
        }
    }
    else
    {
        r15_1 = *(rax_6 + 8);
        r12_1 = *(rax_6 + 0x10);
        
        if (!rax_1)
            goto label_5c4645;
        
        r13_1 = 1;
        rcx_1 = nullptr;
    }
    
    if (!r15_1)
        r12_1 = rcx_1;
    
    if (r15_1)
        r13_1 = r15_1;
    
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h52af2e019a03ed2d(&var_328, 
        r13_1, r12_1);
    int64_t var_198_1 = var_318;
    int128_t var_1a8 = var_328;
    _$LT$uu_pr..NumberingMode$u20$as$u20$core..default..Default$GT$::default::h62d70fa0066756c7(
        &var_328);
    uint64_t var_308;
    uint64_t r12_2 = var_308;
    core::ptr::drop_in_place$LT$uu_pr..NumberingMode$GT$::h7b44dbe916af3d67(&var_328);
    char const* const var_2b8;
    uu_pr::parse_usize::hfdefcaff0fd209a5(&var_2b8, arg2, "first-line-numberstart counting …", 
        0x11);
    *var_328[8] = r12_2;
    var_328 = -0x7ffffffffffffffb;
    char const* const r15_2 = var_2b8;
    uint64_t var_2b0;
    int128_t var_2a8;
    int128_t var_148;
    
    if (r15_2 != -0x7ffffffffffffffa)
    {
        r12_2 = var_2b0;
        var_148 = var_2a8;
        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$uu_pr..PrError$GT$$GT$::ha4194cf31cf0eea9(&var_328);
    }
    
    if (r15_2 != -0x7ffffffffffffffa && r15_2 != -0x7ffffffffffffffb)
    {
        *(arg1 + 0x18) = var_148;
        arg1[1] = r15_2;
        arg1[2] = r12_2;
        *arg1 = 2;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_1a8);
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf528812c919d4af6(
            &var_328, arg2, "number-linesProvide width digit …", 0xc);
        void* rax_9 = clap_builder::parser::error::MatchesError::unwrap::hf38d98c9afef2728(
            "number-linesProvide width digit …", 0xc, &var_328);
        uint64_t var_298;
        
        if (!rax_9)
            var_2b8 = -0x8000000000000000;
        else
        {
            uu_pr::build_options::_$u7b$$u7b$closure$u7d$$u7d$::h8ef498fb2ad05c80(&var_328, r12_2, 
                *(rax_9 + 8), *(rax_9 + 0x10));
            var_298 = var_308;
            var_2a8 = var_318;
            var_2b8 = var_328;
        }
        
        core::option::Option$LT$T$GT$::or_else::ha3e2a98868988ec3(&var_148, &var_2b8, arg2);
        char rax_11 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "double-spaceProduce output that …", 0xc);
        int128_t var_1e8;
        int64_t var_1d8;
        
        if (!rax_11)
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h52af2e019a03ed2d(
                &var_328, "\n argument -cannot specify numb…", 1);
            var_1d8 = var_318;
            var_1e8 = var_328;
        }
        else
            alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&var_1e8, 
                "\n argument -cannot specify numb…", 1, 2);
        
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h52af2e019a03ed2d(&var_328, 
            "\n argument -cannot specify numb…", 1);
        int64_t var_178_1 = var_318;
        int128_t var_188 = var_328;
        uint64_t var_268;
        int128_t var_168;
        
        if (rax_1)
        {
            label_5c48dc:
            chrono::offset::local::Local::now::ha82adb6e05d16f38(&var_268);
            var_2b8 = "%b %d %H:%M %Yinvalid --pages ar…";
            var_2b0 = 0xe;
            var_2a8 = 8;
            *var_2a8[8] = 0;
            chrono::datetime::DateTime$LT$Tz$GT$::format_with_items::h8783bdf86431a8e2(&var_328, 
                &var_268, &var_2b8);
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hac2fd916285297b4(&var_168, 
                &var_328);
            core::ptr::drop_in_place$LT$chrono..format..formatting..DelayedFormat$LT$chrono..format..strftime..StrftimeItems$GT$$GT$::hc5f165bf2c68bf1e(&var_328);
        }
        else
        {
            if (!arg4)
            {
                core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
                /* no return */
            }
            
            int64_t r14_2 = *arg3;
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbb47e2b296de4d69(r14_2, arg3[1], "-cannot specify number of column…", 1))
                goto label_5c48dc;
            
            uu_pr::file_last_modified_time::ha75c4cf04aa4487b(&var_168, r14_2);
        }
        
        int32_t rax_15;
        rax_15 = 1;
        int32_t var_2cc_1 = rax_15;
        regex::regex::string::Regex::new::h2b022f3b326b0361(&var_328, 
            "\s*\+(\d+:*\d*)\s*\s*-(\d+)\s* /…");
        void var_120;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8fa19f49ce20910d(&var_120, &var_328);
        regex::regex::string::Regex::captures_at::h3dfa64f8a9d1e89b(&var_2b8, &var_120, arg5, arg6);
        int128_t var_288;
        int64_t var_278;
        uint64_t var_260;
        int128_t var_258;
        uint64_t var_248_1;
        uint64_t rax_17;
        uint64_t rcx_4;
        int128_t zmm0_8;
        
        if (var_2b8 != 2)
        {
            int64_t var_2e8_1 = var_278;
            int128_t var_2f8_1 = var_288;
            var_308 = var_298;
            var_318 = var_2a8;
            var_328 = var_2b8;
            uu_pr::build_options::_$u7b$$u7b$closure$u7d$$u7d$::hb4b836d6dfb59964(&var_268, 
                &var_328);
            rcx_4 = var_268;
            rax_17 = var_260;
            
            if (rcx_4 == -0x7ffffffffffffffb)
                goto label_5c4a95;
            
            var_248_1 = 1;
            
            if (rcx_4 == -0x7ffffffffffffffa)
                goto label_5c4ac0;
            
            zmm0_8 = var_258;
            label_5c522d:
            *(arg1 + 0x18) = zmm0_8;
            arg1[1] = rcx_4;
            arg1[2] = rax_17;
            *arg1 = 2;
            label_5c563c:
            core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::had11a4c52115c130(
                &var_120);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_168);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_188);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_1e8);
            core::ptr::drop_in_place$LT$core..option..Option$LT$uu_pr..NumberingMode$GT$$GT$::hf3dc7f07a38e8ff6(&var_148);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_1a8);
        }
        else
        {
            rax_17 = 1;
            label_5c4a95:
            var_248_1 = rax_17;
            label_5c4ac0:
            void* rsi_16 = regex::regex::string::Regex::captures_at::h3dfa64f8a9d1e89b(&var_2b8, 
                &var_120, arg5, arg6);
            char* rdi_31;
            
            if (var_2b8 != 2)
            {
                int64_t var_2e8_2 = var_278;
                int128_t var_2f8_2 = var_288;
                var_308 = var_298;
                var_318 = var_2a8;
                var_328 = var_2b8;
                char* rax_20;
                void* rdx_12;
                rax_20 =
                    uu_pr::build_options::_$u7b$$u7b$closure$u7d$$u7d$::h20f6ec5ab6200f34(&var_328);
                rdi_31 = rax_20;
                rsi_16 = rdx_12;
            }
            else
                rdi_31 = nullptr;
            
            char* rax_21;
            int64_t rdx_13;
            rax_21 = core::option::Option$LT$T$GT$::filter::hb95f08937d3c1d4e(rdi_31, rsi_16);
            uint64_t var_240;
            int64_t* rbp;
            
            if (rax_21)
            {
                uu_pr::build_options::_$u7b$$u7b$closure$u7d$$u7d$::h7437547c2616abd3(&var_328, 
                    rax_21, rdx_13);
                int64_t rax_22 = var_328;
                var_240 = *var_328[8];
                
                if (rax_22 == -0x7ffffffffffffffb)
                {
                    rbp = 1;
                    goto label_5c4b91;
                }
                
                if (rax_22 == -0x7ffffffffffffffa)
                {
                    rbp = nullptr;
                    goto label_5c4b91;
                }
                
                *(arg1 + 0x18) = var_318;
                arg1[1] = rax_22;
                arg1[2] = var_240;
                *arg1 = 2;
                goto label_5c563c;
            }
            
            rbp = nullptr;
            label_5c4b91:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf528812c919d4af6(
                &var_328, arg2, "pagesBegin and stop printing wit…", 5);
            void* rax_23 = clap_builder::parser::error::MatchesError::unwrap::hf38d98c9afef2728(
                "pagesBegin and stop printing wit…", 5, &var_328);
            
            if (rax_23)
            {
                uu_pr::build_options::_$u7b$$u7b$closure$u7d$$u7d$::h2ddd4089cb1ade00(&var_328, 
                    *(rax_23 + 8), *(rax_23 + 0x10));
                char* rax_24 = var_328;
                var_268 = var_328;
                
                if (rax_24 != -0x8000000000000000)
                {
                    var_2b0 = var_268;
                    var_2b8 = rax_24;
                    core::ops::function::FnOnce::call_once::ha1b2362239e97776(&var_328, arg2, 
                        &var_2b8);
                    rcx_4 = var_328;
                    rax_17 = *var_328[8];
                    
                    if (rcx_4 == -0x7ffffffffffffffb)
                        var_248_1 = rax_17;
                    else if (rcx_4 != -0x7ffffffffffffffa)
                    {
                        zmm0_8 = var_318;
                        goto label_5c522d;
                    }
                }
            }
            
            uint64_t var_150 = var_248_1;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf528812c919d4af6(
                &var_328, arg2, "pagesBegin and stop printing wit…", 5);
            void* rax_28 = core::option::Option$LT$T$GT$::filter::h140b96ae474dbf5e(
                clap_builder::parser::error::MatchesError::unwrap::hf38d98c9afef2728(
                "pagesBegin and stop printing wit…", 5, &var_328));
            int64_t rax_30;
            
            if (rax_28)
            {
                uu_pr::build_options::_$u7b$$u7b$closure$u7d$$u7d$::h38790067a811e053(&var_328, 
                    *(rax_28 + 8), *(rax_28 + 0x10));
                char* rax_29 = var_328;
                var_268 = var_328;
                
                if (rax_29 == -0x8000000000000000)
                    goto label_5c4d59;
                
                var_2b0 = var_268;
                var_2b8 = rax_29;
                core::ops::function::FnOnce::call_once::ha1b2362239e97776(&var_328, arg2, &var_2b8);
                rcx_4 = var_328;
                rax_17 = *var_328[8];
                
                if (rcx_4 == -0x7ffffffffffffffb)
                {
                    var_240 = rax_17;
                    label_5c4d75:
                    var_268 = var_240;
                    
                    if (var_248_1 <= var_240)
                    {
                        rax_30 = 1;
                        goto label_5c4e55;
                    }
                    
                    var_2b8 = &var_150;
                    uint64_t (* var_2b0_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    var_2a8 = &var_268;
                    *var_2a8[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    var_328 = &data_709250;
                    *var_328[8] = 3;
                    int64_t var_308_1 = 0;
                    char const* const* var_318_1 = &var_2b8;
                    int64_t var_310_1 = 2;
                    int128_t var_60;
                    core::option::Option$LT$T$GT$::map_or_else::h4ea8d69383c77fdd(&var_60, 
                        &var_328);
                    int64_t var_50;
                    arg1[4] = var_50;
                    *(arg1 + 0x10) = var_60;
                    arg1[1] = -0x7fffffffffffffff;
                    *arg1 = 2;
                    goto label_5c563c;
                }
                
                if (rcx_4 != -0x7ffffffffffffffa)
                {
                    zmm0_8 = var_318;
                    goto label_5c522d;
                }
            }
            
            label_5c4d59:
            
            if (rbp)
                goto label_5c4d75;
            
            rax_30 = 0;
            label_5c4e55:
            uu_pr::parse_usize::hfdefcaff0fd209a5(&var_2b8, arg2, 
                "lengthOverride the 66-line defau…", 6);
            uint64_t rbp_3 = (rax ^ 1) * 3 + 0x3f;
            *var_328[8] = rbp_3;
            var_328 = -0x7ffffffffffffffb;
            char const* const r14_3 = var_2b8;
            char var_2bc_2;
            
            if (r14_3 != -0x7ffffffffffffffa)
            {
                rbp_3 = var_2b0;
                var_268 = var_2a8;
                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$uu_pr..PrError$GT$$GT$::ha4194cf31cf0eea9(&var_328);
                
                if (r14_3 != -0x7ffffffffffffffb)
                {
                    *(arg1 + 0x18) = var_268;
                    arg1[1] = r14_3;
                    arg1[2] = rbp_3;
                    *arg1 = 2;
                    goto label_5c563c;
                }
                
                if (rbp_3 >= 0xa)
                    goto label_5c4eac;
                
                var_2bc_2 = 0;
                goto label_5c4ec6;
            }
            
            label_5c4eac:
            var_2bc_2 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "omit-headerWrite neither the fiv…", 0xb) ^ 1;
            rbp_3 -= 0xa;
            label_5c4ec6:
            int128_t var_1c8;
            int64_t var_1b8;
            
            if (!
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "form-feedUse a <form-feed> for n…", 9))
            {
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h52af2e019a03ed2d(
                    &var_328, "\n argument -cannot specify numb…", 1);
                var_1b8 = var_318;
                var_1c8 = var_328;
            }
            else
            {
                char* rax_38 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(1, 1);
                
                if (!rax_38)
                {
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                    /* no return */
                }
                
                *rax_38 = 0xc;
                void var_48;
                alloc::slice::hack::into_vec::h170b8d01c23dd35d(&var_48, rax_38, 1);
                alloc::string::String::from_utf8::hacb364918987915a(&var_328, &var_48);
                core::result::Result$LT$T$C$E$GT$::unwrap::hff028afbac41c813(&var_1c8, &var_328);
            }
            
            char var_33d =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "acrossModify the effect of the -…", 6);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf528812c919d4af6(
                &var_328, arg2, "sep-stringseparate columns by ST…", 0xa);
            void* rax_41 = clap_builder::parser::error::MatchesError::unwrap::hf38d98c9afef2728(
                "sep-stringseparate columns by ST…", 0xa, &var_328);
            int64_t var_218;
            int128_t var_210;
            int64_t rax_42;
            
            if (rax_41)
            {
                label_5c502f:
                core::ops::function::FnOnce::call_once::hb52d6c73ae74d5cf(&var_328, rax_41);
                rax_42 = var_328;
                var_2b8 = var_328;
                
                if (rax_42 == -0x8000000000000000)
                    goto label_5c504f;
                
                var_210 = var_2b8;
                var_218 = rax_42;
            }
            else
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf528812c919d4af6(&var_328, arg2, "separatorSeparate text columns b…", 9);
                rax_41 = clap_builder::parser::error::MatchesError::unwrap::hf38d98c9afef2728(
                    "separatorSeparate text columns b…", 9, &var_328);
                
                if (rax_41)
                    goto label_5c502f;
                
                label_5c504f:
                var_268 = 0;
                int64_t rax_43;
                uint64_t rdx_23;
                rax_43 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(9, &var_268);
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h52af2e019a03ed2d(
                    &var_328, rax_43, rdx_23);
                *var_210[8] = var_318;
                var_218 = var_328;
            }
            
            rax_42 = 1;
            int32_t var_33c_1 = rax_42;
            uint64_t r14_4 = 0x48;
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(arg2, "widthSet the width of the line t…", 5))
            {
                r14_4 = 0x48;
                
                if (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(arg2, "separatorSeparate text columns b…", 9))
                    r14_4 = 0x200;
            }
            
            uu_pr::parse_usize::hfdefcaff0fd209a5(&var_2b8, arg2, 
                "widthSet the width of the line t…", 5);
            *var_328[8] = r14_4;
            var_328 = -0x7ffffffffffffffb;
            char const* const r15_4 = var_2b8;
            
            if (r15_4 != -0x7ffffffffffffffa)
            {
                r14_4 = var_2b0;
                var_268 = var_2a8;
                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$uu_pr..PrError$GT$$GT$::ha4194cf31cf0eea9(&var_328);
            }
            
            if (r15_4 != -0x7ffffffffffffffa && r15_4 != -0x7ffffffffffffffb)
            {
                *(arg1 + 0x18) = var_268;
                arg1[1] = r15_4;
                arg1[2] = r14_4;
                *arg1 = 2;
                label_5c5622:
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_218);
                label_5c562f:
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_1c8);
                goto label_5c563c;
            }
            
            uint64_t var_220 = r14_4;
            uint64_t var_200;
            int64_t var_1f8_1;
            
            if (!
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "join-linesmerge full lines, turn…", 0xa))
            {
                uu_pr::parse_usize::hfdefcaff0fd209a5(&var_328, arg2, 
                    "page-widthset page width to PAGE…", 0xa);
                int64_t rax_47 = var_328;
                int64_t rcx_9;
                
                if (rax_47 != -0x7ffffffffffffffa)
                {
                    uint64_t rdx_25 = *var_328[8];
                    rcx_9 = 1;
                    
                    if (rax_47 != -0x7ffffffffffffffb)
                    {
                        *(arg1 + 0x18) = var_318;
                        arg1[1] = rax_47;
                        arg1[2] = rdx_25;
                        *arg1 = 2;
                        goto label_5c5622;
                    }
                    
                    var_200 = rdx_25;
                }
                else
                    rcx_9 = 0;
                
                var_1f8_1 = rcx_9;
            }
            else
                var_1f8_1 = 0;
            
            regex::regex::string::Regex::new::h2b022f3b326b0361(&var_328, 
                "\s*-(\d+)\s* /home/34r7hm4n/.car…");
            uint64_t r12_11 = 0;
            void var_e8;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8fa19f49ce20910d(&var_e8, &var_328);
            int32_t rax_50;
            rax_50 = 1;
            int32_t var_33c_2 = rax_50;
            regex::regex::string::Regex::captures_at::h3dfa64f8a9d1e89b(&var_2b8, &var_e8, arg5, 
                arg6);
            uint64_t rax_52;
            char rbx_2;
            int128_t zmm0_23;
            
            if (var_2b8 != 2)
            {
                int64_t var_2e8_3 = var_278;
                int128_t var_2f8_3 = var_288;
                var_308 = var_298;
                var_318 = var_2a8;
                var_328 = var_2b8;
                uu_pr::build_options::_$u7b$$u7b$closure$u7d$$u7d$::h56f47d86be9314d3(&var_268, 
                    &var_328);
                rax_52 = var_268;
                r12_11 = var_260;
                
                if (rax_52 == -0x7ffffffffffffffb)
                {
                    r14_4 = 0;
                    goto label_5c5391;
                }
                
                r14_4 = 1;
                
                if (rax_52 == -0x7ffffffffffffffa)
                    goto label_5c5391;
                
                zmm0_23 = var_258;
                label_5c558e:
                *(arg1 + 0x18) = zmm0_23;
                arg1[1] = rax_52;
                arg1[2] = r12_11;
                *arg1 = 2;
                rax_52 = 1;
                int32_t var_33c_4 = rax_52;
                rbx_2 = 0;
                label_5c55f2:
                core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::had11a4c52115c130(
                    &var_e8);
                
                if (!rbx_2)
                    goto label_5c5622;
                
                goto label_5c562f;
            }
            
            r14_4 = 1;
            label_5c5391:
            uu_pr::parse_usize::hfdefcaff0fd209a5(&var_328, arg2, 
                "columnProduce multi-column outpu…", 6);
            rax_52 = var_328;
            uint64_t var_310;
            
            if (rax_52 != -0x7ffffffffffffffa)
            {
                r12_11 = *var_328[8];
                
                if (rax_52 != -0x7ffffffffffffffb)
                {
                    zmm0_23 = var_318;
                    goto label_5c558e;
                }
                
                *var_2a8[8] = &var_220;
                var_2b8 = var_218;
                var_2a8 = *var_210[8];
                label_5c5448:
                var_318 = var_2a8;
                var_328 = var_2b8;
                var_310 = var_220;
                var_308 = r12_11;
                char var_300_1 = var_33d;
            }
            else
            {
                *var_2a8[8] = &var_220;
                var_2b8 = var_218;
                var_2a8 = *var_210[8];
                char* var_298_1 = &var_33d;
                
                if (!r14_4)
                    goto label_5c5448;
                
                var_328 = -0x8000000000000000;
                int32_t var_33c_3 = 0;
                core::ptr::drop_in_place$LT$uu_pr..build_options..$u7b$$u7b$closure$u7d$$u7d$$GT$::h2fa688b4a75204f5(&var_2b8);
            }
            
            uu_pr::parse_usize::hfdefcaff0fd209a5(&var_268, arg2, 
                "indentEach line of output shall …", 6);
            int64_t var_2b0_2 = 0;
            var_2b8 = -0x8000000000000005;
            uint64_t r15_6 = var_268;
            uint64_t r14_5;
            
            if (r15_6 != -0x7ffffffffffffffa)
            {
                r14_5 = var_260;
                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$uu_pr..PrError$GT$$GT$::ha4194cf31cf0eea9(&var_2b8);
                
                if (r15_6 != -0x7ffffffffffffffb)
                {
                    *(arg1 + 0x18) = var_258;
                    arg1[1] = r15_6;
                    arg1[2] = r14_5;
                    *arg1 = 2;
                    int32_t var_33c_5 = 0;
                    core::ptr::drop_in_place$LT$core..option..Option$LT$uu_pr..ColumnModeOptions$GT$$GT$::h09df0facecc11534(&var_328);
                    rbx_2 = 1;
                    int32_t var_33c_6 = 0;
                    goto label_5c55f2;
                }
            }
            else
                r14_5 = 0;
            
            int128_t var_100;
            alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&var_100, 
                " /home/34r7hm4n/.cargo/registry/…", 1, r14_5);
            char rax_57 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "join-linesmerge full lines, turn…", 0xa);
            uint64_t r14_6 = rax_5;
            int64_t rdx_29;
            
            if (var_328 == -0x8000000000000000)
            {
                label_5c556f:
                uu_pr::build_options::_$u7b$$u7b$closure$u7d$$u7d$::h2f6e5f2b8a2f8c99(&var_2b8, 
                    r14_6);
                
                if (!rax_57)
                {
                    label_5c56ba:
                    int64_t rax_60 = var_328;
                    uint64_t rcx_15;
                    
                    if (rax_60 == -0x8000000000000000)
                        rcx_15 = 0;
                    else
                        rcx_15 = var_308;
                    
                    if (r14_6)
                        rcx_15 = arg4;
                    
                    rdx_29 = var_1f8_1;
                    
                    if (rcx_15 >= 2)
                    {
                        uint64_t rcx_16 = 0x48;
                        
                        if (rax_60 != -0x8000000000000000)
                            rcx_16 = var_310;
                        
                        var_200 = rcx_16;
                        rdx_29 = 1;
                    }
                }
                else
                    rdx_29 = 0;
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_2b8, &var_328);
                char const* const rax_58 = var_2b8;
                var_268 = var_2b0_2;
                
                if (rax_58 == -0x8000000000000000)
                    goto label_5c556f;
                
                var_2b0_2 = var_268;
                var_2b8 = rax_58;
                
                if (!rax_57)
                    goto label_5c56ba;
                
                rdx_29 = 0;
            }
            
            int64_t var_128;
            arg1[0x1f] = var_128;
            int128_t zmm0_26 = var_148;
            int128_t var_138;
            *(arg1 + 0xe8) = var_138;
            *(arg1 + 0xd8) = zmm0_26;
            arg1[8] = var_198_1;
            *(arg1 + 0x30) = var_1a8;
            arg1[0xb] = var_178_1;
            *(arg1 + 0x48) = var_188;
            arg1[0xe] = var_1d8;
            *(arg1 + 0x60) = var_1e8;
            *(arg1 + 0x78) = var_168;
            int64_t var_158;
            arg1[0x11] = var_158;
            *(arg1 + 0x90) = var_1c8;
            arg1[0x14] = var_1b8;
            *(arg1 + 0x100) = var_328;
            *(arg1 + 0x110) = var_318;
            *(arg1 + 0x120) = var_308;
            *(arg1 + 0xa8) = var_100;
            int64_t var_f0;
            arg1[0x17] = var_f0;
            *(arg1 + 0xc0) = var_2b8;
            arg1[0x1a] = var_2a8;
            *arg1 = rax_30;
            arg1[1] = var_240;
            arg1[2] = r14_6;
            arg1[3] = arg4;
            arg1[4] = rdx_29;
            arg1[5] = var_200;
            arg1[0x26] = var_248_1;
            arg1[0x27] = rbp_3;
            arg1[0x28] = rax_11;
            *(arg1 + 0x141) = var_2bc_2;
            *(arg1 + 0x142) = rax;
            *(arg1 + 0x143) = rax_57;
            r12_11 = 1;
            int32_t var_33c_7 = 0;
            core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::had11a4c52115c130(&var_e8);
            int32_t var_2cc_2 = 0;
            core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::had11a4c52115c130(
                &var_120);
        }
    }
    
    return arg1;
}
