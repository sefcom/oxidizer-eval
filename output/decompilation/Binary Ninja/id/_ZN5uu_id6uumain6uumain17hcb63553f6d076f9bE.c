
  uint64_t uu_id::uumain::uumain::hcb63553f6d076f9b(int64_t arg1)

{
    void* var_688;
    uu_id::uu_app::h29c9bf865c558e60(&var_688);
    int128_t var_3b8;
    clap_builder::builder::command::Command::after_help::h56e9354dd2bb340d(&var_3b8, &var_688);
    void* const var_7c8;
    clap_builder::builder::command::Command::try_get_matches_from::h29efddedcb406833(&var_7c8, 
        &var_3b8, arg1);
    void* const rax = var_7c8;
    int64_t (* var_7c0)(char* arg1, int64_t* arg2);
    
    if (-(rax) == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_7c0);
    
    int64_t var_798;
    int64_t var_6e0_1 = var_798;
    int128_t var_7a8;
    int128_t var_6f0_1 = var_7a8;
    int128_t var_7b8;
    int128_t var_700_1 = var_7b8;
    void* const var_710 = rax;
    int64_t (* var_708_1)(char* arg1, int64_t* arg2) = var_7c0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hedd4567a5efc7126(
        &var_688, &var_710);
    int64_t var_f0;
    clap_builder::parser::error::MatchesError::unwrap::hfac66af166ed83b5(&var_f0, &var_688);
    void* var_738;
    int64_t var_730;
    int64_t var_728;
    int128_t var_680;
    
    if (!var_f0)
    {
        label_457073:
        var_738 = nullptr;
        var_730 = 8;
        var_728 = 0;
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::h122b407c8fc85fb2(&var_688, &var_f0);
        void* rax_2 = var_688;
        var_3b8 = var_680;
        
        if (rax_2 == -0x8000000000000000)
            goto label_457073;
        
        var_730 = var_3b8;
        var_738 = rax_2;
    }
    
    char rax_3 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_710, &data_418978[0x10], 4);
    char rax_4 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_710, "userSomedumb\x1b[5m\x1b[9m <= tr…", 4);
    char rax_5 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_710, "groupgroupscontext ", 5);
    char rax_6 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_710, "groupscontext ", 6);
    uint64_t r14_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_710, "realBOLDBlue\x1b[4muserSomedumb\x1b…", 4);
    char rax_8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_710, "zeroAnsi -- \x1b[8mhelpNoneshimU…", 4);
    char rax_9 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_710, "context ", 7);
    bool cond:0_1 = var_728;
    char var_7d4 = rax_3;
    char var_7d0_1 = r14_1;
    char var_7ce_1 = rax_9;
    char var_7cd_1 = 0;
    int32_t var_7e8 = 0;
    char rbp_1 = rax_5 | rax_6 | rax_4;
    char var_7fd;
    int64_t var_3a8;
    uint64_t result_1;
    uint64_t result;
    
    if (!rax_3)
    {
        r14_1 ^= 1;
        r14_1 |= rbp_1;
        
        if (r14_1)
        {
            if (!((rax_8 ^ 1) | rax_9 | rbp_1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he95092b90f1a89a0(&var_3b8, "option --zero not permitted in d…", 0x2d);
                *var_680[8] = var_3a8;
                var_688 = var_3b8;
                int32_t var_670_3 = 1;
                result_1 = alloc::boxed::Box$LT$T$GT$::new::ha21fca55809c2c7c(&var_688);
                label_457d06:
                result = result_1;
                label_457d11:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h8511733bf174c94e(&var_738);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::ha20d46652b104649(&var_710);
                return result;
            }
            
            goto label_4571ea;
        }
        
        if (!rax_9)
            goto label_4572a4;
        
        if (!var_728)
        {
            char rcx_13 = 0xa;
            
            if (rax_8)
                rcx_13 = 0;
            
            var_7fd = rcx_13;
            goto label_457cc9;
        }
        
        label_45724e:
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he95092b90f1a89a0(&var_3b8, "cannot print security context wh…", 0x31);
        *var_680[8] = var_3a8;
        var_688 = var_3b8;
        int32_t var_670_1 = 1;
        result_1 = alloc::boxed::Box$LT$T$GT$::new::ha21fca55809c2c7c(&var_688);
        goto label_457d06;
    }
    
    if (!(rbp_1 | rax_9))
    {
        label_4572a4:
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he95092b90f1a89a0(&var_3b8, "printing only names or real IDs …", 0x36);
        *var_680[8] = var_3a8;
        var_688 = var_3b8;
        int32_t var_670_2 = 1;
        result_1 = alloc::boxed::Box$LT$T$GT$::new::ha21fca55809c2c7c(&var_688);
        goto label_457d06;
    }
    
    label_4571ea:
    char const* const var_720_1;
    
    if (var_728)
    {
        if (rax_9)
            goto label_45724e;
        
        char const* const rdx_1 = " ";
        
        if (rax_8)
            rdx_1 = &data_4189a8[0x23];
        
        var_720_1 = rdx_1;
        char rax_10 = 0xa;
        
        if (rax_8)
            rax_10 = 0;
        
        var_7fd = rax_10;
        goto label_457319;
    }
    
    char* rsi_6 = " ";
    
    if (rax_8)
        rsi_6 = &data_4189a8[0x23];
    
    var_720_1 = rsi_6;
    char rcx_6 = 0xa;
    
    if (rax_8)
        rcx_6 = 0;
    
    var_7fd = rcx_6;
    
    if (rax_9)
    {
        label_457cc9:
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he95092b90f1a89a0(&var_3b8, "--context (-Z) works only on an …", 0x36);
        *var_680[8] = var_3a8;
        var_688 = var_3b8;
        int32_t var_670_4 = 1;
        result_1 = alloc::boxed::Box$LT$T$GT$::new::ha21fca55809c2c7c(&var_688);
        goto label_457d06;
    }
    
    label_457319:
    int64_t var_6b0 = 0;
    int64_t var_6a8_1 = var_728;
    char var_6a0_1 = 0;
    char rax_14;
    int64_t rdx_2;
    rax_14 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::hd913dad9e67c4a33(&var_6b0);
    
    if (rax_14 & 1)
    {
        int64_t r12_2 = rdx_2;
        int64_t rax_16;
        rax_16 = var_728 >= 2;
        char const* const rax_17 = &data_4189a8[0x23];
        
        if (var_728 < 2)
            rax_17 = 1;
        
        char rax_18;
        
        do
        {
            void* const* var_788;
            int64_t (* var_780)(void* arg1, int64_t arg2);
            int64_t var_778;
            int64_t* var_768;
            int64_t (* var_760)(int32_t* arg1, int64_t* arg2);
            int128_t var_668;
            int128_t var_398;
            int128_t var_388;
            int128_t var_378;
            int128_t var_368;
            int128_t var_358;
            int128_t var_348;
            
            if (!cond:0_1)
            {
                var_3b8 = -0x8000000000000000;
                label_4575da:
                
                if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_710, "passwordNO_COLORNulErrorhuman-re…", 8))
                {
                    uu_id::pline::h1d390836edad1713(var_3b8 != -0x8000000000000000);
                    label_457d6c:
                    core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..entries..Passwd$GT$$GT$::h2a02baf630b817d1(&var_3b8);
                    result = 0;
                    goto label_457d11;
                }
                
                if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_710, "human-readableauditcannot find n…", 0xe))
                {
                    int128_t var_618_1 = var_348;
                    int128_t var_628_1 = var_358;
                    int128_t var_638_1 = var_368;
                    int128_t var_648_1 = var_378;
                    int128_t var_658_1 = var_388;
                    int128_t var_668_1 = var_398;
                    var_680 = var_3a8;
                    var_688 = var_3b8;
                    uu_id::pretty::h6432800401a89dba(&var_688, r14_1);
                    result = 0;
                    goto label_457d11;
                }
                
                if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_710, "auditcannot find name for user I…", 5))
                    goto label_457d6c;
                
                int64_t r13_2 = var_3b8;
                uint32_t var_340;
                uint32_t r15_2 = var_340;
                int32_t var_33c;
                r14_1 = var_33c;
                int32_t rax_28;
                uint32_t rbx_3;
                
                if (!var_7d0_1 && (rax_4 || rax_5 || rax_6))
                {
                    rbx_3 = uucore::features::process::geteuid::hd0ed7b4820ed9632();
                    rax_28 = uucore::features::process::getegid::h2ca565c9eb3bafb7();
                }
                else
                {
                    rbx_3 = uucore::features::process::getuid::h408babfb7f2600cd();
                    rax_28 = uucore::features::process::getgid::h996eeb286e507395();
                }
                
                if (r13_2 == -0x8000000000000000)
                    r15_2 = rbx_3;
                
                if (r13_2 == -0x8000000000000000)
                    r14_1 = rax_28;
                
                uint32_t var_7fc = r15_2;
                uint32_t var_7ec = r14_1;
                int32_t rax_30 = uucore::features::process::geteuid::hd0ed7b4820ed9632();
                int32_t rax_31 = uucore::features::process::getegid::h2ca565c9eb3bafb7();
                uint32_t rcx_8 = var_7fc;
                uint32_t rsi_8 = var_7ec;
                var_7e8 = 1;
                uint32_t var_7e4_1 = rcx_8;
                uint32_t var_7e0_1 = rsi_8;
                int32_t var_7dc_1 = rax_30;
                int32_t var_7d8_1 = rax_31;
                int32_t var_670;
                
                if (rax_5)
                {
                    if (!var_7d4)
                    {
                        int64_t rax_33;
                        uint64_t rdx_7;
                        rax_33 =
                            core::fmt::num::imp::_$LT$impl$u20$u32$GT$::_fmt::hcfe26aa883005358(
                            rsi_8, &var_788, 0xa);
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he95092b90f1a89a0(&var_688, rax_33, rdx_7);
                        var_7b8 = *var_680[8];
                        var_7c8 = var_688;
                    }
                    else
                    {
                        _$LT$uucore..features..entries..Group$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::hf537d3ad4e514fa6(&var_688, rsi_8);
                        void* rax_32 = var_688;
                        int64_t (* rdx_6)(char* arg1, int64_t* arg2) = var_680;
                        
                        if (rax_32 != -0x8000000000000000)
                        {
                            var_7c8 = rax_32;
                            var_7c0 = rdx_6;
                            var_7b8 = *var_680[8];
                        }
                        else
                            uu_id::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::head321a69e27931b(
                                &var_7c8, &var_7ec, rdx_6);
                    }
                    
                    var_788 = &var_7c8;
                    var_780 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    var_688 = &data_4182c0;
                    var_680 = 1;
                    var_668 = 0;
                    *var_680[8] = &var_788;
                    var_670 = 1;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_688);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcee18d35cbfb2d14(
                        var_7c8, var_7c0);
                }
                
                if (rax_4)
                {
                    if (!var_7d4)
                    {
                        int64_t rax_35;
                        uint64_t rdx_9;
                        rax_35 =
                            core::fmt::num::imp::_$LT$impl$u20$u32$GT$::_fmt::hcfe26aa883005358(
                            var_7fc, &var_788, 0xa);
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he95092b90f1a89a0(&var_688, rax_35, rdx_9);
                        var_7b8 = *var_680[8];
                        var_7c8 = var_688;
                    }
                    else
                    {
                        int64_t var_b0;
                        _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::h5d0bb482984d9c00(&var_b0, var_7fc);
                        int64_t (* var_a8)(char* arg1, int64_t* arg2);
                        
                        if (var_b0 != -0x8000000000000000)
                        {
                            uucore::features::entries::uid2usr::_$u7b$$u7b$closure$u7d$$u7d$::h6ed47d8d1f5b04c0(&var_688, &var_b0);
                            void* rax_37 = var_688;
                            int64_t (* rdx_8)(char* arg1, int64_t* arg2) = var_680;
                            
                            if (rax_37 != -0x8000000000000000)
                            {
                                var_7c8 = rax_37;
                                var_7c0 = rdx_8;
                                var_7b8 = *var_680[8];
                            }
                            else
                                uu_id::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h3e5f1e42e9a89374(&var_7c8, &var_7fc, rdx_8);
                        }
                        else
                            uu_id::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h3e5f1e42e9a89374(
                                &var_7c8, &var_7fc, var_a8);
                    }
                    
                    var_788 = &var_7c8;
                    var_780 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    var_688 = &data_4182c0;
                    var_680 = 1;
                    var_668 = 0;
                    *var_680[8] = &var_788;
                    var_670 = 1;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_688);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcee18d35cbfb2d14(
                        var_7c8, var_7c0);
                }
                
                uucore::features::entries::get_groups_gnu::hafb36095cbadaa6c(&var_688, 1, var_7ec);
                int64_t var_6d8;
                core::result::Result$LT$T$C$E$GT$::unwrap::hdf2c3fa37216f039(&var_6d8, &var_688);
                void* var_750;
                void* var_748;
                int64_t var_6d0;
                int64_t var_6c8;
                
                if (!cond:0_1)
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hd3dbc4273215df96(&var_750, var_6d0, var_6c8);
                else
                {
                    if (var_3b8 == -0x8000000000000000)
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    uucore::features::entries::Passwd::belongs_to::h86a03abed7028785(&var_688, 
                        &var_3b8);
                    void* rax_38 = var_688;
                    var_7c8 = var_680;
                    
                    if (rax_38 == -0x8000000000000000)
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    var_750 = rax_38;
                    var_748 = var_7c8;
                }
                int64_t var_740;
                
                if (rax_6)
                {
                    var_688 = var_748;
                    var_680 = var_748 + (var_740 << 2);
                    *var_680[8] = &var_7d4;
                    core::iter::traits::iterator::Iterator::collect::ha9cd2803a3611dbc(&var_788, 
                        &var_688);
                    alloc::str::join_generic_copy::ha258ccce1c75cdef(&var_688, var_780, var_778, 
                        var_720_1);
                    int64_t var_758_1 = *var_680[8];
                    char temp4_1 = cond:0_1 & 1;
                    char const* const rax_42 = 1;
                    
                    if (temp4_1)
                        rax_42 = rax_17;
                    
                    int64_t rcx_12 = 0;
                    
                    if (temp4_1)
                        rcx_12 = rax_16;
                    
                    if (!rax_8)
                        rax_42 = 1;
                    
                    if (!rax_8)
                        rcx_12 = 0;
                    
                    var_768 = var_688;
                    char const* const var_698 = rax_42;
                    int64_t var_690_1 = rcx_12;
                    var_7c8 = &var_768;
                    int64_t (* var_7c0_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    var_7b8 = &var_698;
                    *var_7b8[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h09315c6309a338a3;
                    var_688 = &data_418618;
                    var_680 = 2;
                    var_668 = 0;
                    *var_680[8] = &var_7c8;
                    var_670 = 2;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_688);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcee18d35cbfb2d14(
                        var_768, var_760);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h8511733bf174c94e(&var_788);
                }
                
                if (!rbp_1)
                    uu_id::id_print::h3604a9066f84a09c(&var_7e8, var_748, var_740);
                
                var_7c8 = &var_7fd;
                var_7c0 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::hd41883bc456718a9;
                var_688 = &data_4182c0;
                var_680 = 1;
                var_668 = 0;
                *var_680[8] = &var_7c8;
                var_670 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_688);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u32$GT$$GT$::h33604453175825cc(
                    var_750, var_748);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u32$GT$$GT$::h33604453175825cc(
                    var_6d8, var_6d0);
                core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..entries..Passwd$GT$$GT$::h2a02baf630b817d1(&var_3b8);
                
                if (r12_2 + 1 >= var_728)
                    break;
            }
            else
            {
                if (r12_2 >= var_728)
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(r12_2, var_728);
                    /* no return */
                }
                
                int64_t rbx_2 = r12_2 * 3;
                _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$$RF$str$GT$$GT$::locate::h4bb3a5c7c498e57d(&var_688, *(var_730 + (rbx_2 << 3) + 8), *(var_730 + (rbx_2 << 3) + 0x10));
                
                if (var_688 != -0x8000000000000000)
                {
                    int128_t var_618;
                    var_348 = var_618;
                    int128_t var_628;
                    var_358 = var_628;
                    int128_t var_638;
                    var_368 = var_638;
                    int128_t var_648;
                    var_378 = var_648;
                    int128_t var_658;
                    var_388 = var_658;
                    var_398 = var_668;
                    var_3a8 = var_680;
                    var_3b8 = var_688;
                    goto label_4575da;
                }
                
                void** rax_20;
                int64_t rdx_5;
                rax_20 = uucore::util_name::h074417a1e6395129();
                var_788 = rax_20;
                int64_t var_780_1 = rdx_5;
                var_768 = &var_788;
                int64_t (* var_760_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h09315c6309a338a3;
                var_7c8 = &data_4e81d0;
                int64_t var_7c0_1 = 2;
                var_7a8 = 0;
                var_7b8 = &var_768;
                *var_7b8[8] = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_7c8);
                void* rax_22 = var_730 + (rbx_2 << 3);
                int64_t (* rcx_7)(void* arg1, int64_t arg2) = *(rax_22 + 8);
                int64_t rax_23 = *(rax_22 + 0x10);
                var_788 = nullptr;
                var_780 = rcx_7;
                var_778 = rax_23;
                char var_770_1 = 1;
                var_768 = &var_788;
                var_760 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_7c8 = &data_4e8248;
                var_7c0 = 2;
                var_7a8 = 0;
                var_7b8 = &var_768;
                *var_7b8[8] = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_7c8);
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                
                if (r12_2 + 1 >= var_728)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..entries..Passwd$C$std..io..error..Error$GT$$GT$::ha058da657a6ab5f0(&var_688);
                    break;
                }
                
                core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..entries..Passwd$C$std..io..error..Error$GT$$GT$::ha058da657a6ab5f0(&var_688);
            }
            int64_t rdx_3;
            rax_18 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::hd913dad9e67c4a33(&var_6b0);
            r12_2 = rdx_3;
        } while (rax_18 & 1);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h8511733bf174c94e(
        &var_738);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::ha20d46652b104649(&var_710);
    return 0;
}
