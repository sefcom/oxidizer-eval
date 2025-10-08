
  uint64_t uu_du::uumain::uumain::h8e6fd9b29ab94c0c(int64_t arg1)

{
    char var_4e8;
    uu_du::uu_app::habf9d5389fa2ad43(&var_4e8);
    int64_t var_6e8;
    clap_builder::builder::command::Command::try_get_matches_from::hf257c367152324ab(&var_6e8, 
        &var_4e8, arg1);
    int64_t rax = var_6e8;
    uint64_t result;
    uint64_t result_1;
    
    if (-(rax) != -0x8000000000000000)
    {
        int64_t var_6b8;
        int64_t var_760_1 = var_6b8;
        char var_6c8[0x10];
        char var_770_1[0x10] = var_6c8;
        int128_t var_6d8;
        int128_t var_780_1 = var_6d8;
        int64_t var_790 = rax;
        uint64_t result_6 = result_1;
        char rax_2 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_790, "sldfiles0-from-", 1);
        char rax_3 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_790, "ldfiles0-from-", 1);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2517011d0d696a1e(
            &var_4e8, &var_790, "dfiles0-from-", 1);
        char* rdx_1 = &var_4e8;
        void* rax_4 = clap_builder::parser::error::MatchesError::unwrap::hfa815ded740039e4(
            "dfiles0-from-", 1, rdx_1);
        char* rsi_3;
        
        if (!rax_4)
            rsi_3 = nullptr;
        else
        {
            rsi_3 = *(rax_4 + 8);
            rdx_1 = *(rax_4 + 0x10);
        }
        
        uu_du::parse_depth::hceb993b72658530c(&var_4e8, rsi_3, rdx_1, rax_2, rax_4);
        uint64_t result_2;
        result = result_2;
        void** result_18;
        void** const result_25 = result_18;
        
        if (!(var_4e8 & 1))
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2517011d0d696a1e(
                &var_4e8, &var_790, "files0-from-", 0xb);
            void* rax_5 = clap_builder::parser::error::MatchesError::unwrap::hfa815ded740039e4(
                "files0-from-", 0xb, &var_4e8);
            int64_t var_738;
            uint64_t result_7;
            void** result_21;
            char var_4c8[0x10];
            int64_t* var_4a8;
            
            if (!rax_5)
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1e8d9c077ce615df(&var_4e8, &var_790);
                int64_t var_1e8;
                clap_builder::parser::error::MatchesError::unwrap::hbec4f085d5806c39(&var_1e8, 
                    &var_4e8);
                
                if (!var_1e8)
                {
                    uint64_t result_19 =
                        alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18, 0);
                    
                    if (!result_19)
                    {
                        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                        /* no return */
                    }
                    
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7651e926367bff37(&var_4e8, ".invalid -- argument %Y-%m-%d %H…", 1);
                    var_6d8 = result_18;
                    int128_t zmm0_2 = var_4e8;
                    var_6e8 = zmm0_2;
                    *(result_19 + 0x10) = result_18;
                    *result_19 = zmm0_2;
                    var_738 = 1;
                    result_7 = result_19;
                    result_21 = 1;
                }
                else if (!rax_3)
                {
                    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h1aeda11ed83b4b74(&var_4e8);
                    var_6c8 = var_4c8;
                    var_6d8 = result_18;
                    var_6e8 = var_4e8;
                    int128_t var_1b8;
                    int128_t var_4b8_1 = var_1b8;
                    char var_1c8[0x10];
                    var_4c8 = var_1c8;
                    int128_t var_1d8;
                    result_18 = var_1d8;
                    var_4e8 = var_1e8;
                    var_4a8 = &var_6e8;
                    core::iter::traits::iterator::Iterator::collect::h22080d4473c3e9d8(&var_738, 
                        &var_4e8);
                    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::hb2ba018c11aa0fcc(&var_6e8);
                }
                else
                    core::iter::traits::iterator::Iterator::collect::hc4080f7e7a8dd1fe(&var_738, 
                        &var_1e8);
                
                goto label_48323b;
            }
            
            int64_t r14_1 = *(rax_5 + 8);
            uint64_t r12_1 = *(rax_5 + 0x10);
            
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he7eed17eb63b1446(r14_1, r12_1, "-", 1))
                goto label_483127;
            
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2517011d0d696a1e(
                &var_4e8, &var_790, "FILEWORDcharJu", 4);
            int64_t* var_598;
            
            if (!clap_builder::parser::error::MatchesError::unwrap::hfa815ded740039e4(
                "FILEWORDcharJu", 4, &var_4e8))
            {
                r14_1 = *(rax_5 + 8);
                r12_1 = *(rax_5 + 0x10);
                label_483127:
                uu_du::read_files_from::h40a5e404b0358f57(&var_4e8, r14_1, r12_1);
                int64_t rax_12 = var_4e8;
                
                if (rax_12 != -0x8000000000000000)
                {
                    var_738 = rax_12;
                    result_7 = result_2;
                    result_21 = result_18;
                    label_48323b:
                    char var_798_1 = 3;
                    
                    if (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_790, "timecodetip:\x1b[3mkeysu128for<\x1b…", 4))
                        var_798_1 =
                            uu_du::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hac9031018db8eaa8(
                            &var_790);
                    
                    int64_t rbx_3 = 1;
                    
                    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "hsibkmblock-size???BUGallSone-fi…", 1))
                        goto label_483324;
                    
                    void** result_14;
                    void** result_12;
                    uint64_t result_5;
                    
                    if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "sibkmblock-size???BUGallSone-fil…", 2))
                    {
                        result_14 = 1;
                        rbx_3 = 2;
                        
                        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "bkmblock-size???BUGallSone-file-…", 1))
                            goto label_483324;
                        
                        result_14 = 0x400;
                        
                        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "kmblock-size???BUGallSone-file-s…", 1))
                            goto label_483324;
                        
                        result_14 = 0x100000;
                        
                        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "mblock-size???BUGallSone-file-sy…", 1))
                            goto label_483324;
                        
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2517011d0d696a1e(&var_4e8, &var_790, "block-size???BUGallSone-file-sys…", 0xa);
                        char* rdx_21 = &var_4e8;
                        void* rax_57 =
                            clap_builder::parser::error::MatchesError::unwrap::hfa815ded740039e4(
                            "block-size???BUGallSone-file-sys…", 0xa, rdx_21);
                        void* rsi_40;
                        
                        if (!rax_57)
                            rsi_40 = nullptr;
                        else
                        {
                            rsi_40 = *(rax_57 + 8);
                            rdx_21 = *(rax_57 + 0x10);
                        }
                        
                        uu_du::read_block_size::hba09d611c2cef060(&var_4e8, rsi_40, rdx_21);
                        result_5 = var_4e8;
                        result_12 = result_2;
                        
                        if (result_5)
                        {
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h78ada35842c1c60c(&var_738);
                            result = result_5;
                        }
                        else
                        {
                            result_14 = result_12;
                            rbx_3 = 2;
                            
                            if (result_12)
                                goto label_483324;
                            
                            int64_t rax_61;
                            int64_t rdx_23;
                            rax_61 =
                                core::option::Option$LT$T$GT$::map_or::he13ac907a9cc0a4c(rax_57);
                            var_6e8 = 0;
                            int64_t var_6e0_1 = rax_61;
                            var_6d8 = rdx_23;
                            *var_6d8[8] = 1;
                            var_598 = &data_544518;
                            int64_t (* var_590_1)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3abf390e95704a5f;
                            int64_t* var_588_1 = &var_6e8;
                            int64_t (* var_580_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                            var_4e8 = &data_5443f8;
                            int64_t var_4e0_6 = 2;
                            var_4c8[0] = 0;
                            int64_t** var_4d8_6 = &var_598;
                            int64_t var_4d0_8 = 2;
                            void var_190;
                            core::option::Option$LT$T$GT$::map_or_else::h7a5b8d51dc97c2b7(&var_190, 
                                &var_4e8);
                            std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
                                alloc::boxed::Box$LT$T$GT$::new::h44b81601374506c4(&var_190), 
                                &data_5444c0);
                            result_5 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h78ada35842c1c60c(&var_738);
                            result = result_5;
                        }
                    }
                    else
                    {
                        rbx_3 = 0;
                        label_483324:
                        char rax_21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "allSone-file-systemdereferenceve…", 3);
                        char rax_22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "Sone-file-systemdereferenceverbo…", 1);
                        char rax_23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "one-file-systemdereferenceverbos…", 0xf);
                        
                        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "dereferenceverbosetime-stylecino…", 0xb))
                        {
                            if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "dereference-argsConnection reset…", 0x10))
                                var_6e8 = -0x7ffffffffffffffe;
                            else
                            {
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hfec35f2891046d51(&var_4e8, result_7, result_21);
                                var_6d8 = result_18;
                                var_6e8 = var_4e8;
                            }
                        }
                        else
                            var_6e8 = -0x8000000000000000;
                        
                        char rax_28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "verbosetime-stylecinodesthreshol…", 7);
                        uu_du::build_exclude_patterns::he2599e522f595380(&var_4e8, &var_790);
                        int64_t rax_29 = var_4e8;
                        result_12 = result_18;
                        
                        if (rax_29 != -0x8000000000000000)
                        {
                            char var_6f0_1 = rax_21;
                            char var_6ef_1 = rax_22;
                            char var_6ee_1 = rax_23;
                            int128_t var_708_1 = var_6e8;
                            int64_t var_6f8_1 = var_6d8;
                            char var_6ed_1 = rax_3;
                            int64_t var_720 = rax_29;
                            void** result_15 = result_12;
                            
                            if (var_798_1 != 3)
                            {
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2517011d0d696a1e(&var_4e8, &var_790, "time-stylecinodesthresholdappare…", 0xa);
                                char* rdx_7 = &var_4e8;
                                void* rax_30 = clap_builder::parser::error::MatchesError::unwrap::hfa815ded740039e4("time-stylecinodesthresholdappare…", 0xa, rdx_7);
                                int64_t rsi_18;
                                
                                if (!rax_30)
                                    rsi_18 = 0;
                                else
                                {
                                    rsi_18 = *(rax_30 + 8);
                                    rdx_7 = *(rax_30 + 0x10);
                                }
                                
                                uu_du::parse_time_style::ha80c5924fa1465d3(&var_4e8, rsi_18, rdx_7);
                                result_5 = result_2;
                                result_12 = result_18;
                                
                                if (var_4e8 & 1)
                                    goto label_483663;
                                
                                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7651e926367bff37(&var_4e8, result_5, result_12);
                                goto label_48359c;
                            }
                            
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7651e926367bff37(&var_4e8, "%Y-%m-%d %H:%M: warning: options…", 0xe);
                            label_48359c:
                            int128_t var_628 = var_4e8;
                            char rax_32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "cinodesthresholdapparent-size0fa…", 1);
                            char rax_33 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "inodesthresholdapparent-size0fai…", 6);
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2517011d0d696a1e(&var_4e8, &var_790, "thresholdapparent-size0failed to…", 9);
                            void* rax_34 = clap_builder::parser::error::MatchesError::unwrap::hfa815ded740039e4("thresholdapparent-size0failed to…", 9, &var_4e8);
                            
                            if (!rax_34)
                            {
                                result_5 = 2;
                                label_483694:
                                char r14_2 = 1;
                                
                                if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "apparent-size0failed to spawn th…", 0xd))
                                    r14_2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "bkmblock-size???BUGallSone-file-…", 1);
                                
                                char rax_38 = 0xa;
                                
                                if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "0failed to spawn threadctimestat…", 1))
                                    rax_38 = 0;
                                
                                char var_5b8_1 = rax_32;
                                char var_5b7_1 = rax_33;
                                void** const result_26 = result_25;
                                void** result_16 = result_12;
                                char var_5b6_1 = r14_2;
                                void** result_22 = result_14;
                                char var_5b4_1 = var_798_1;
                                int128_t zmm0_7 = var_628;
                                void** result_23 = result_18;
                                char var_5b3_1 = rax_38;
                                char var_5b5_1 = rax_2;
                                uint64_t result_8;
                                
                                if (rax_33)
                                {
                                    char rax_40 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "apparent-size0failed to spawn th…", 
                                        0xd);
                                    char rax_41;
                                    
                                    if (!rax_40)
                                        rax_41 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "bkmblock-size???BUGallSone-file-…", 1);
                                    
                                    if (rax_40 || rax_41)
                                    {
                                        int64_t rax_42;
                                        uint64_t result_11;
                                        rax_42 = uucore::util_name::h074417a1e6395129();
                                        var_6e8 = rax_42;
                                        result_1 = result_11;
                                        var_598 = &var_6e8;
                                        result_8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3abf390e95704a5f;
                                        var_4e8 = &data_544418;
                                        int64_t var_4e0_1 = 2;
                                        var_4c8[0] = 0;
                                        int64_t** var_4d8_1 = &var_598;
                                        int64_t var_4d0_2 = 1;
                                        std::io::stdio::_eprint::h57899770eacec2ad(&var_4e8);
                                        var_4e8 = &data_544438;
                                        int64_t var_4e0_2 = 1;
                                        result_18 = 8;
                                        var_4d0_2 = {0};
                                        std::io::stdio::_eprint::h57899770eacec2ad(&var_4e8);
                                    }
                                }
                                
                                std::sync::mpmc::channel::h09ea4bcf5f399c64(&var_4e8);
                                int128_t zmm1_3 = result_18;
                                int128_t var_748 = var_4e8;
                                var_4a8 = result_23;
                                int128_t var_4b8_2 = zmm0_7;
                                char var_4c8_1[0x10] = rbx_3;
                                result_18 = result_5;
                                var_4e8 = result;
                                int128_t var_498_1 = zmm1_3;
                                var_6d8 = -0x8000000000000000;
                                var_6e8 = 0;
                                var_6c8[8] = 0;
                                result_12 = 1;
                                std::thread::Builder::spawn_unchecked::h1a74e926b26d7081(&var_598, 
                                    &var_6e8, &var_4e8);
                                int128_t var_500;
                                core::result::Result$LT$T$C$E$GT$::expect::h2f06b66bc931a73b(
                                    &var_500, &var_598);
                                void var_220;
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::ha530788e678a8673(&var_220, &var_738);
                                int64_t var_5b0;
                                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2fb691deda856684(&var_5b0, &var_220);
                                int64_t rbp_3 = var_5b0;
                                void* rbx_4;
                                
                                if (rbp_3 != -0x8000000000000000)
                                {
                                    while (true)
                                    {
                                        int64_t var_5a8;
                                        int64_t rsi_32 = var_5a8;
                                        char var_7a8_1;
                                        var_7a8_1 = rsi_32;
                                        void* rsi_29;
                                        int128_t var_658;
                                        uint64_t var_5a0;
                                        int64_t var_588;
                                        
                                        if (!result_15)
                                        {
                                            label_483c13:
                                            uu_du::Stat::new::hd07a900d361a9fcd(&var_598, rsi_32, 
                                                var_5a0, nullptr, &var_720);
                                            
                                            if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_598, 
                                                data_41d730)) != 0xffff)
                                            {
                                                char var_7a0_1;
                                                var_7a0_1 = rbp_3;
                                                int64_t* r14_5 = var_598;
                                                int64_t var_558;
                                                var_798_1 = var_558;
                                                char var_750_1;
                                                int64_t var_550;
                                                var_750_1 = var_550;
                                                _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h1aeda11ed83b4b74(&var_4e8);
                                                char var_638_1[0x10] = var_4c8_1;
                                                int128_t var_648_1 = result_18;
                                                var_658 = var_4e8;
                                                int64_t var_580;
                                                int64_t var_578;
                                                
                                                if (r14_5 & 1)
                                                {
                                                    uint64_t rbx_6;
                                                    rbx_6 = 1;
                                                    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h661577fb3310518c(&var_658, var_588, var_580, var_578);
                                                }
                                                
                                                uint64_t result_17 = result_8;
                                                var_4e8 = r14_5;
                                                int64_t var_4d0_6 = var_580;
                                                int64_t var_4d8_5 = var_588;
                                                var_4c8_1[0] = var_578;
                                                int64_t var_560;
                                                *var_4b8_2[8] = var_560;
                                                int128_t var_570;
                                                var_4c8_1 = var_570;
                                                int64_t var_4a8_1 = var_798_1;
                                                int64_t var_4a0_1 = var_750_1;
                                                int128_t var_518;
                                                int128_t var_468_1 = var_518;
                                                char var_528[0x10];
                                                char var_478_1[0x10] = var_528;
                                                int128_t var_538;
                                                int128_t var_488_1 = var_538;
                                                int128_t var_548;
                                                int128_t var_498_2 = var_548;
                                                uu_du::du::h5e7b3b5654d85404(&var_6e8, &var_4e8, 
                                                    &var_720, 0, &var_658, &var_748);
                                                void** result_24 = var_6d8;
                                                
                                                if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(
                                                    var_6e8, data_41d730)) == 0xffff)
                                                {
                                                    result = uu_du::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h8a613f6ada946d57(result_24);
                                                    label_4840c3:
                                                    rbp_3 = var_7a0_1;
                                                    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uu_du..FileInfo$GT$$GT$::h59a93eb5d5a0c8b8(var_658, *var_658[8]);
                                                    rsi_29 = var_7a8_1;
                                                    label_4840e7:
                                                    core::mem::drop::ha3c1637ff772b3c5(rbp_3, 
                                                        rsi_29);
                                                    rbx_4 = 1;
                                                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..path..PathBuf$GT$$GT$::hb879ab12e0453d40(&var_220);
                                                    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::hd2d73872bc1c73e5(&var_500);
                                                    core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$core..result..Result$LT$uu_du..StatPrintInfo$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::h65223c277f44ec42(&var_748);
                                                    break;
                                                }
                                                
                                                char var_668[0x10];
                                                char var_468_2[0x10] = var_668;
                                                char var_678[0x10];
                                                char var_478_2[0x10] = var_678;
                                                char var_688[0x10];
                                                char var_488_2[0x10] = var_688;
                                                int128_t var_698;
                                                int128_t var_498_3 = var_698;
                                                int128_t var_6a8;
                                                var_4a8_1 = var_6a8;
                                                var_4b8_2 = var_6b8;
                                                var_4c8_1 = var_6c8;
                                                uint64_t result_9 = result_1;
                                                var_4e8 = var_6e8;
                                                result_18 = result_24;
                                                int64_t var_4d0_7 = *var_6d8[8];
                                                int64_t var_458_1 = 0;
                                                char var_178[0x10];
                                                std::sync::mpmc::Sender$LT$T$GT$::send::hde26e4fd3d4a569a(&var_178, var_748, *var_748[8], &var_4e8);
                                                uint32_t temp0_8 = _mm_movemask_epi8(
                                                    __pcmpeqb_xmmdq_memdq(var_178, *data_41d8e0));
                                                uint64_t result_4;
                                                
                                                if (temp0_8 != 0xffff)
                                                {
                                                    result_4 = uu_du::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h1faeb4db56da009b(&var_178);
                                                    result = result_4;
                                                }
                                                
                                                if (temp0_8 != 0xffff && result_4)
                                                    goto label_4840c3;
                                                
                                                core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uu_du..FileInfo$GT$$GT$::h59a93eb5d5a0c8b8(var_658, *var_658[8]);
                                                rbp_3 = var_7a0_1;
                                                rsi_29 = var_7a8_1;
                                            }
                                            else
                                            {
                                                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_du..Stat$C$std..io..error..Error$GT$$GT$::hc73781dfb8b4708d(&var_598);
                                                alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_598, var_7a8_1, var_5a0);
                                                var_6e8 = 0;
                                                result_1 = result_8;
                                                *var_6d8[8] = 1;
                                                var_658 = &var_6e8;
                                                *var_658[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                                                var_4e8 = &data_544468;
                                                int64_t var_4e0_4 = 2;
                                                var_4c8_1[0] = 0;
                                                int128_t* var_4d8_3 = &var_658;
                                                int64_t var_4d0_4 = 1;
                                                int128_t var_200;
                                                core::option::Option$LT$T$GT$::map_or_else::h7a5b8d51dc97c2b7(&var_200, &var_4e8);
                                                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h3e7c9b5222ed42c0(&var_598);
                                                var_4d0_4 = 1;
                                                var_4e8 = var_200;
                                                int64_t var_1f0;
                                                int64_t var_4d8_4 = var_1f0;
                                                result_18 = alloc::boxed::Box$LT$T$GT$::new::h0e985dccdd4461d4(&var_4e8);
                                                void** const var_4d0_5 = &data_544560;
                                                int64_t var_4e0_5 = 0;
                                                var_4e8 = 2;
                                                char var_d8[0x10];
                                                std::sync::mpmc::Sender$LT$T$GT$::send::hde26e4fd3d4a569a(&var_d8, var_748, *var_748[8], &var_4e8);
                                                rsi_29 = var_7a8_1;
                                                
                                                if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_d8, 
                                                    *data_41d8e0)) != 0xffff)
                                                {
                                                    uint64_t result_3 = uu_du::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h1faeb4db56da009b(&var_d8);
                                                    result = result_3;
                                                    rsi_29 = var_7a8_1;
                                                    
                                                    if (result_3)
                                                        goto label_4840e7;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_598, rsi_32, var_5a0);
                                            uint64_t result_13 = result_2;
                                            int64_t r14_4 = result_15 * 0x38 + result_13;
                                            char i;
                                            
                                            do
                                            {
                                                uint64_t result_20 = result_13 + 0x38;
                                                
                                                if (result_13 == r14_4)
                                                    result_20 = result_13;
                                                
                                                if (result_13 == r14_4)
                                                {
                                                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h3e7c9b5222ed42c0(&var_598);
                                                    rsi_32 = var_7a8_1;
                                                    goto label_483c13;
                                                }
                                                
                                                i = glob::Pattern::matches::ha07a8c317a63e971(
                                                    result_13, result_8, var_588);
                                                result_13 = result_20;
                                            } while (!i);
                                            
                                            if (rax_28)
                                            {
                                                var_6e8 = 0;
                                                result_1 = result_8;
                                                var_6d8 = var_588;
                                                *var_6d8[8] = 1;
                                                var_658 = &var_6e8;
                                                *var_658[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                                                var_4e8 = &data_544448;
                                                int64_t var_4e0_3 = 2;
                                                var_4c8_1[0] = 0;
                                                result_18 = &var_658;
                                                int64_t var_4d0_3 = 1;
                                                std::io::stdio::_print::h5e446ff973c02de6(&var_4e8);
                                            }
                                            
                                            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h3e7c9b5222ed42c0(&var_598);
                                            rsi_29 = var_7a8_1;
                                        }
                                        core::mem::drop::ha3c1637ff772b3c5(rbp_3, rsi_29);
                                        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2fb691deda856684(&var_5b0, &var_220);
                                        rbp_3 = var_5b0;
                                        
                                        if (rbp_3 == -0x8000000000000000)
                                            goto label_48399c;
                                    }
                                }
                                else
                                {
                                    label_48399c:
                                    rbx_4 = 1;
                                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..path..PathBuf$GT$$GT$::hb879ab12e0453d40(&var_220);
                                    var_4e8 = var_748;
                                    core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$core..result..Result$LT$uu_du..StatPrintInfo$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::h65223c277f44ec42(&var_4e8);
                                    int64_t var_4f0;
                                    int64_t var_4d8_2 = var_4f0;
                                    var_4e8 = var_500;
                                    std::thread::JoinInner$LT$T$GT$::join::hc56fb18cbf5b940d(
                                        &var_6e8, &var_4e8);
                                    result = result_1;
                                    
                                    if (var_6e8 == 1)
                                        result = uu_du::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hbd5ff82507294a37(result, var_6d8);
                                    else if (!result)
                                    {
                                        core::ptr::drop_in_place$LT$uu_du..TraversalOptions$GT$::hcc4bf0d4031920a5(&var_720);
                                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h03f64aefb39393f7(&var_790);
                                        return 0;
                                    }
                                }
                                core::ptr::drop_in_place$LT$uu_du..TraversalOptions$GT$::hcc4bf0d4031920a5(&var_720);
                            }
                            else
                            {
                                uu_du::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h65ca9d671e2d2d73(&var_4e8, *(rax_34 + 8), *(rax_34 + 0x10));
                                uint64_t result_10 = var_4e8;
                                result_5 = result_10;
                                
                                if (result_10 != 2)
                                    result_5 = result_2;
                                
                                result_12 = result_18;
                                
                                if (!(result_10 & 1))
                                    goto label_483694;
                                
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hab3f62d631b46647(&var_628);
                                label_483663:
                                core::ptr::drop_in_place$LT$uu_du..TraversalOptions$GT$::hcc4bf0d4031920a5(&var_720);
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h78ada35842c1c60c(&var_738);
                                result = result_5;
                            }
                        }
                        else
                        {
                            core::ptr::drop_in_place$LT$uu_du..Deref$GT$::h93f1fdf341a019aa(
                                &var_6e8);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h78ada35842c1c60c(&var_738);
                            result = result_2;
                        }
                    }
                }
                else
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            }
            else
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2517011d0d696a1e(&var_4e8, &var_790, "FILEWORDcharJu", 4);
                void* rax_8 = clap_builder::parser::error::MatchesError::unwrap::hfa815ded740039e4(
                    "FILEWORDcharJu", 4, &var_4e8);
                
                if (!rax_8)
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                int64_t rcx_4 = *(rax_8 + 8);
                int64_t rax_9 = *(rax_8 + 0x10);
                var_6e8 = 0;
                int64_t var_6e0 = rcx_4;
                var_6d8 = rax_9;
                *var_6d8[8] = 1;
                var_598 = &var_6e8;
                int64_t (* var_590)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_4e8 = &data_5443d8;
                int64_t var_4e0 = 2;
                var_4c8[0] = 0;
                int64_t** var_4d8 = &var_598;
                int64_t var_4d0_1 = 1;
                void var_1a8;
                core::option::Option$LT$T$GT$::map_or_else::h7a5b8d51dc97c2b7(&var_1a8, &var_4e8);
                std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
                    alloc::boxed::Box$LT$T$GT$::new::h44b81601374506c4(&var_1a8), &data_5444c0);
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            }
        }
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h03f64aefb39393f7(&var_790);
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(result_1);
    return result;
}
