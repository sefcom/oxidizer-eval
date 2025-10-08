
  int64_t* uu_install::behavior::h7987ba58edb264ae(int64_t* arg1, void* arg2)

{
    int32_t r13 = 0;
    char rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        arg2, "directoryignoredcreate-leadingow…", 9);
    int64_t var_138;
    int32_t var_130;
    int64_t var_128;
    void* const var_118;
    int32_t var_90;
    int32_t r15_2;
    
    if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
        arg2, "modei128 as dyn ERANGEEDEADLKENA…", 4))
    {
        r15_2 = 0;
        label_466817:
        uucore::features::backup_control::determine_backup_mode::h09b58a9d9bda0a55(&var_118, arg2);
        void* const rax_5 = var_118;
        int64_t var_110;
        
        if (!rax_5)
        {
            char var_38_1 = var_110;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hcffcdc3b06842590(
                &var_118, arg2, "target-directoryfailed to chmod …", 0x10);
            void* rax_6 = clap_builder::parser::error::MatchesError::unwrap::h3af3e9883b639b7a(
                "target-directoryfailed to chmod …", 0x10, &var_118);
            int64_t var_50;
            
            if (!rax_6)
                var_50 = -0x8000000000000000;
            else
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_50, rax_6);
            
            bool r15_3 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "no-target-directoryverbosefiles(…", 0x13);
            int64_t* var_150;
            uint64_t rax_11;
            
            if (!(r15_3 & var_50 != -0x8000000000000000))
            {
                char rax_13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "preserve-timestampsstripstrip-pr…", 0x13);
                char rax_14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "comparedirectoryignoredcreate-le…", 7);
                char const* const r12_2 = "stripstrip-programno-target-dire…";
                char rax_15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "stripstrip-programno-target-dire…", 5);
                
                if (!rax_13)
                {
                    if (rax_14 & rax_15)
                    {
                        int64_t rax_18;
                        int64_t rdx_6;
                        rax_18 = uucore::util_name::h074417a1e6395129();
                        var_138 = rax_18;
                        var_130 = rdx_6;
                        var_150 = &var_138;
                        int64_t (* var_148_3)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb0c432d6311a3dda;
                        var_118 = &data_502188;
                        int64_t var_110_5 = 2;
                        int64_t var_f8_3 = 0;
                        int64_t** var_108_6 = &var_150;
                        int64_t var_100_3 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
                        var_118 = &data_502290;
                        int64_t var_110_6 = 1;
                        int64_t var_108_7 = 8;
                        var_100_3 = {0};
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
                        rax_11 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
                        goto label_46699e;
                    }
                }
                else if (rax_14)
                {
                    int64_t rax_16;
                    int64_t rdx_5;
                    rax_16 = uucore::util_name::h074417a1e6395129();
                    var_138 = rax_16;
                    var_130 = rdx_5;
                    var_150 = &var_138;
                    int64_t (* var_148_2)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb0c432d6311a3dda;
                    var_118 = &data_502188;
                    int64_t var_110_3 = 2;
                    int64_t var_f8_2 = 0;
                    int64_t** var_108_4 = &var_150;
                    int64_t var_100_2 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
                    var_118 = &data_502280;
                    int64_t var_110_4 = 1;
                    int64_t var_108_5 = 8;
                    var_100_2 = {0};
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
                    rax_11 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
                    goto label_46699e;
                }
                
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hcffcdc3b06842590(&var_118, arg2, "ownerpreserve-timestampsstripstr…", 5);
                void* const* rdx_7 = &var_118;
                void* rax_19 = clap_builder::parser::error::MatchesError::unwrap::h3af3e9883b639b7a(
                    "ownerpreserve-timestampsstripstr…", 5, rdx_7);
                void** rcx_3;
                
                if (!rax_19)
                    rcx_3 = nullptr;
                else
                {
                    rcx_3 = *(rax_19 + 8);
                    rdx_7 = *(rax_19 + 0x10);
                }
                
                if (!rcx_3)
                    rdx_7 = rcx_3;
                
                void** rsi_6 = 1;
                
                if (rcx_3)
                    rsi_6 = rcx_3;
                
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7990a55799cbd755(&var_118, rsi_6, rdx_7);
                uint64_t var_108;
                uint64_t var_78_1 = var_108;
                int128_t var_88 = var_118;
                int32_t var_11c_1;
                int32_t var_94;
                
                if (!var_108)
                {
                    var_11c_1 = 0;
                    label_466ce6:
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hcffcdc3b06842590(&var_118, arg2, "group/home/34r7hm4n/dev/oxidizer…", 5);
                    uint64_t rdx_9 = &var_118;
                    void* rax_23 =
                        clap_builder::parser::error::MatchesError::unwrap::h3af3e9883b639b7a(
                        "group/home/34r7hm4n/dev/oxidizer…", 5, rdx_9);
                    uint64_t rcx_4;
                    
                    if (!rax_23)
                        rcx_4 = 0;
                    else
                    {
                        rcx_4 = *(rax_23 + 8);
                        rdx_9 = *(rax_23 + 0x10);
                    }
                    
                    if (!rcx_4)
                        rdx_9 = rcx_4;
                    
                    uint64_t rsi_10 = 1;
                    
                    if (rcx_4)
                        rsi_10 = rcx_4;
                    
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7990a55799cbd755(&var_118, rsi_10, rdx_9);
                    uint64_t var_58_1 = var_108;
                    int128_t var_68 = var_118;
                    int32_t var_120_1;
                    int64_t var_100;
                    
                    if (!var_108)
                    {
                        var_120_1 = 0;
                        label_466e34:
                        uucore::features::backup_control::determine_backup_suffix::ha7b1c82b4746605a(&var_150);
                        char rax_27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "verbosefiles(uutils coreutils) 0…", 7);
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hcffcdc3b06842590(&var_118, arg2, "strip-programno-target-directory…", 0xd);
                        uint64_t rax_28 =
                            clap_builder::parser::error::MatchesError::unwrap::h3af3e9883b639b7a(
                            "strip-programno-target-directory…", 0xd, &var_118);
                        char* rcx_5;
                        
                        if (!rax_28)
                            rcx_5 = nullptr;
                        else
                        {
                            rcx_5 = *(rax_28 + 8);
                            rax_28 = *(rax_28 + 0x10);
                        }
                        
                        if (rcx_5)
                            r12_2 = rcx_5;
                        
                        uint64_t rdx_12 = 5;
                        
                        if (rcx_5)
                            rdx_12 = rax_28;
                        
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7990a55799cbd755(&var_118, r12_2, rdx_12);
                        var_138 = var_118;
                        char rax_30 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "create-leadingownerpreserve-time…", 0xe);
                        int64_t var_40;
                        int64_t var_d8_1 = var_40;
                        int128_t zmm0_7 = var_50;
                        int128_t var_e8_1 = zmm0_7;
                        int128_t zmm1_1 = var_150;
                        var_118 = zmm1_1;
                        var_100 = var_138;
                        arg1[8] = var_40;
                        *(arg1 + 0x30) = zmm0_7;
                        int64_t var_f8;
                        arg1[4] = var_f8;
                        arg1[5] = var_108;
                        int64_t var_140;
                        arg1[2] = var_140;
                        arg1[3] = var_100;
                        *arg1 = zmm1_1;
                        arg1[9] = r15_2;
                        *(arg1 + 0x4c) = var_90;
                        arg1[0xa] = var_11c_1;
                        *(arg1 + 0x54) = var_94;
                        arg1[0xb] = var_120_1;
                        *(arg1 + 0x5c) = r13;
                        arg1[0xc] = rax ^ 1;
                        *(arg1 + 0x61) = rax_27;
                        *(arg1 + 0x62) = rax_13;
                        *(arg1 + 0x63) = rax_14;
                        *(arg1 + 0x64) = rax_15;
                        *(arg1 + 0x65) = rax_30;
                        *(arg1 + 0x66) = r15_3;
                        *(arg1 + 0x67) = var_38_1;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3429258871469867(
                            &var_68);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3429258871469867(
                            &var_88);
                    }
                    else
                    {
                        _$LT$uucore..features..entries..Group$u20$as$u20$uucore..features..entries..Locate$LT$$RF$str$GT$$GT$::locate::h2c7d885aadff2e1b(&var_118, *var_68[8], var_108);
                        
                        if (var_118 != -0x8000000000000000)
                        {
                            r13 = var_100;
                            core::ptr::drop_in_place$LT$uucore..features..entries..Group$GT$::h32ecda9d58c74f56(&var_118);
                            *var_150[4] = r13;
                            var_150 = 0;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$u32$C$std..io..error..Error$GT$$GT$::h6e773bfcd50389c6(&var_150);
                            var_120_1 = 1;
                            goto label_466e34;
                        }
                        
                        int64_t var_148_5 = var_110;
                        var_150 = 1;
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_138, &var_68);
                        int64_t var_100_5 = var_128;
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
                    
                    if (var_118 != -0x8000000000000000)
                    {
                        core::ptr::drop_in_place$LT$uucore..features..entries..Passwd$GT$::h3e064612819241ba(&var_118);
                        int32_t var_a0;
                        var_94 = var_a0;
                        *var_150[4] = var_a0;
                        r12_2 = "stripstrip-programno-target-dire…";
                        var_150 = 0;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$u32$C$std..io..error..Error$GT$$GT$::h6e773bfcd50389c6(&var_150);
                        var_11c_1 = 1;
                        goto label_466ce6;
                    }
                    
                    int64_t var_148_4 = var_110;
                    var_150 = 1;
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_138, &var_88);
                    int64_t var_100_4 = var_128;
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
                int64_t rax_10;
                int64_t rdx_4;
                rax_10 = uucore::util_name::h074417a1e6395129();
                var_138 = rax_10;
                var_130 = rdx_4;
                var_150 = &var_138;
                int64_t (* var_148_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb0c432d6311a3dda;
                var_118 = &data_502188;
                int64_t var_110_1 = 2;
                int64_t var_f8_1 = 0;
                int64_t** var_108_2 = &var_150;
                int64_t var_100_1 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
                var_118 = &data_502270;
                int64_t var_110_2 = 1;
                int64_t var_108_3 = 8;
                var_100_1 = {0};
                std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
                rax_11 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
                label_46699e:
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
        void* rax_2 = clap_builder::parser::error::MatchesError::unwrap::h3af3e9883b639b7a(
            "modei128 as dyn ERANGEEDEADLKENA…", 4, &var_118);
        
        if (!rax_2)
            goto label_4668bc;
        
        uu_install::mode::parse::hbbdca2d765f61b21(&var_138, *(rax_2 + 8), *(rax_2 + 0x10), rax, 
            uucore::features::mode::get_umask::h22fe72fd4e3f2e99());
        
        if (var_138 == -0x8000000000000000)
        {
            var_90 = var_130;
            r15_2 = 1;
            goto label_466817;
        }
        
        int64_t var_108_1 = var_128;
        var_118 = var_138;
        uu_install::behavior::_$u7b$$u7b$closure$u7d$$u7d$::h449f89b24c43dfad(&var_118);
        label_4668bc:
        arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
        arg1[2] = &data_503620;
        *arg1 = -0x8000000000000000;
    }
    return arg1;
}
