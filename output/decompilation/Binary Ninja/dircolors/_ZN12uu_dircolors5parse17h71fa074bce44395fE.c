
  int64_t uu_dircolors::parse::h71fa074bce44395f(int64_t* arg1, int128_t* arg2, char* arg3)

{
    int64_t rbp;
    int64_t var_8 = rbp;
    int64_t r14;
    r14 = 1;
    char const (** const var_378)[0x1a];
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hee6bf1574c352e3c(&var_378, 0x6fe, 0);
    size_t var_370;
    
    if (var_378)
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_370);
        /* no return */
    }
    
    size_t var_2a0 = var_370;
    int64_t var_368;
    int64_t var_298 = var_368;
    int64_t var_290 = 0;
    r14 = 1;
    uu_dircolors::get_colors_format_strings::h3d385b99c9468f76(&var_378, arg3);
    int64_t var_198 = var_368;
    int128_t var_1a8 = var_378;
    int128_t var_360;
    int128_t var_1c8 = var_360;
    int64_t rdi_3 = *var_1a8[8];
    int64_t rax_2;
    uint64_t rdx;
    rax_2 = core::slice::iter::Iter$LT$T$GT$::make_slice::h5d9082f7b38128f5(rdi_3, var_368 + rdi_3);
    int64_t r15;
    r15 = 1;
    r14 = 1;
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hb4877afa2fbcf6a6(&var_2a0, rax_2, rdx);
    r15 = 1;
    r14 = 1;
    std::env::var::h4c097dcfeefd9ab9(&var_378, "TERMtrue.jarhurdDOOR.asf.flisock…");
    int128_t var_208;
    int64_t var_1f8;
    int128_t var_158;
    
    if (!var_378)
    {
        var_1f8 = var_360;
        var_208 = var_370;
    }
    else
    {
        int64_t var_148_1 = var_360;
        var_158 = var_370;
        r15 = 1;
        r14 = 1;
        uu_dircolors::parse::_$u7b$$u7b$closure$u7d$$u7d$::h23ff856b4f10dbff(&var_208, &var_158);
    }
    
    int64_t rax_3 = *var_208[8];
    _$LT$I$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h62181ef6c62eb43b(
        &var_378, arg2);
    core::iter::traits::iterator::Iterator::enumerate::h37c9db441ff7667b(&var_158, &var_378);
    char rax_6 = *arg3;
    uint32_t var_3b0 = 0;
    
    while (true)
    {
        int64_t var_120;
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h18a0e2ab2d93f8f1(&var_120, &var_158);
        int64_t var_118;
        rbp = var_118 != -0x8000000000000000;
        
        if (var_118 == -0x8000000000000000)
            break;
        
        int64_t rax_7 = var_120;
        int64_t var_108;
        int64_t var_1d8_1 = var_108;
        int128_t var_1e8 = var_118;
        int64_t var_218 = rax_7 + 1;
        char* rax_9;
        void* rdx_2;
        rax_9 = alloc::str::_$LT$impl$u20$core..borrow..Borrow$LT$str$GT$$u20$for$u20$alloc..string..String$GT$::borrow::ha27266882ad30354(*var_1e8[8]);
        int64_t rax_10;
        int64_t rdx_3;
        rax_10 =
            _$LT$str$u20$as$u20$uu_dircolors..StrUtils$GT$::purify::had3361032469b65a(rax_9, rdx_2);
        
        if (rdx_3)
        {
            void var_180;
            uu_dircolors::escape::h9e775b2dd37a0760(&var_180, rax_10, rdx_3);
            char* var_178;
            void* var_170;
            _$LT$str$u20$as$u20$uu_dircolors..StrUtils$GT$::split_two::h1a868daf304bd95e(&var_378, 
                var_178, var_170);
            char* rsi_12 = var_378;
            char const (* var_2b0)[0x0] = rsi_12;
            int64_t rcx_3 = var_360;
            int64_t var_288 = var_368;
            char const (** const var_3a8)[0x0];
            int64_t* var_2d0;
            int64_t rcx;
            int64_t r8;
            
            if (!rcx_3)
            {
                var_3a8 = nullptr;
                int64_t var_3a0_7 = rcx;
                int64_t var_398_7 = r8;
                char var_390_1 = 0;
                var_2d0 = &var_3a8;
                int64_t (* var_2c8_4)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                int64_t* var_2c0_4 = &var_218;
                uint64_t (* var_2b8_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                var_378 = &std::sys::pal::unix::stack_overflow::imp::GUARD::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::VAL::hdb43507c931d3044.1;
                int64_t var_370_1 = 3;
                *var_360[8] = 0;
                int64_t** var_368_7 = &var_2d0;
                var_360 = 2;
                int128_t var_100;
                core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&var_100, &var_378);
                int64_t var_f0;
                arg1[3] = var_f0;
                *(arg1 + 8) = var_100;
                *arg1 = 1;
            }
            else
            {
                void var_278;
                alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h8673807247540a26(&var_278, 
                    rsi_12, var_370);
                int64_t var_270;
                uint64_t var_268;
                char rax_12 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha729273d498af9d1(var_270, var_268, "term) = .jpgexecZero.zst.bmp.yuv…", 4);
                char rax_13;
                
                if (!rax_12)
                    rax_13 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha729273d498af9d1(var_270, var_268, "colortermoptionscolor", 9);
                
                uint32_t r13;
                
                if (rax_12 || rax_13)
                {
                    r13 = 1;
                    
                    if (!_$LT$str$u20$as$u20$uu_dircolors..StrUtils$GT$::fnmatch::haff50f05c6a9d49d(
                        rax_3, var_1f8, var_288, rcx_3))
                    {
                        r13 = var_3b0 != 1;
                        r13 *= 2;
                        r13 |= 1;
                    }
                    
                    goto label_46c646;
                }
                
                char rax_15 = var_3b0;
                uint32_t rcx_5 = rax_15;
                
                if (rax_15 == 1)
                    rcx_5 = 2;
                
                r13 = 3;
                char var_390;
                int64_t (* var_2b8)(int64_t* arg1, int64_t arg2);
                
                if (rcx_5 == 3)
                {
                    label_46c646:
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(
                        &var_278);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(
                        &var_180);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(
                        &var_1e8);
                    var_3b0 = r13;
                    continue;
                }
                else
                {
                    r13 = rcx_5;
                    int128_t var_e8 = var_270;
                    var_3b0 = var_2b0;
                    var_378 = 0;
                    int64_t rax_18;
                    uint64_t rdx_7;
                    rax_18 =
                        core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2e, &var_378);
                    
                    if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf50e9cc3cb3717b9(
                        var_3b0, var_370, rax_18, rdx_7))
                    {
                        if (rax_6 != 2)
                        {
                            var_3a8 = &var_2b0;
                            int64_t (* var_3a0_3)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hab03ba9f5c878c54;
                            int64_t* var_398_3 = &var_288;
                            var_390 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hab03ba9f5c878c54;
                            var_378 = &data_524448;
                            var_370 = 3;
                            *var_360[8] = 0;
                            char const (** const* var_368_3)[0x0] = &var_3a8;
                            var_360 = 2;
                            int128_t var_c0;
                            core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&var_c0, 
                                &var_378);
                            var_378 = var_c0;
                            int64_t var_b0;
                            var_368 = var_b0;
                            int64_t rax_30;
                            uint64_t rdx_13;
                            rax_30 =
                                core::slice::iter::Iter$LT$T$GT$::make_slice::h5d9082f7b38128f5(
                                var_370, var_b0 + var_370);
                            alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hb4877afa2fbcf6a6(
                                &var_2a0, rax_30, rdx_13);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_378);
                        }
                        else
                        {
                            var_2d0 = &var_288;
                            int64_t (* var_2c8_1)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hab03ba9f5c878c54;
                            int64_t* var_2c0_1 = &var_2b0;
                            var_2b8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hab03ba9f5c878c54;
                            var_378 = 2;
                            int64_t var_368_1 = 2;
                            *var_360[8] = 0;
                            int64_t var_350_1 = 0x20;
                            char var_348_1 = 3;
                            int32_t var_25d;
                            int32_t var_344_1 = var_25d;
                            int32_t var_347_1 = var_25d;
                            int64_t var_340_1 = 2;
                            int64_t var_330_1 = 2;
                            int64_t var_320;
                            __builtin_memcpy(&var_320, 
                                "\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 0x11);
                            int64_t var_308_1 = 2;
                            int64_t var_2f8_1 = 2;
                            int64_t var_2e8_1 = 0;
                            int64_t var_2e0_1 = 0x20;
                            char var_2d8_1 = 3;
                            int32_t var_2d4_1 = var_25d;
                            int32_t var_2d7_1 = var_25d;
                            var_3a8 = &data_524518;
                            int64_t var_3a0_1 = 4;
                            int64_t* var_388_1 = &var_378;
                            int64_t var_380_1 = 3;
                            int64_t** var_398_1 = &var_2d0;
                            var_390 = 2;
                            int128_t var_d8;
                            core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&var_d8, 
                                &var_3a8);
                            var_378 = var_d8;
                            int64_t var_c8;
                            var_368 = var_c8;
                            int64_t rax_22;
                            uint64_t rdx_9;
                            rax_22 =
                                core::slice::iter::Iter$LT$T$GT$::make_slice::h5d9082f7b38128f5(
                                var_370, var_c8 + var_370);
                            alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hb4877afa2fbcf6a6(
                                &var_2a0, rax_22, rdx_9);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_378);
                        }
                        
                        goto label_46c646;
                    }
                    
                    var_3b0 = var_2b0;
                    var_378 = 0;
                    int64_t rax_25;
                    uint64_t rdx_10;
                    rax_25 =
                        core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2a, &var_378);
                    
                    if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf50e9cc3cb3717b9(
                        var_3b0, var_370, rax_25, rdx_10))
                    {
                        if (rax_6 != 2)
                        {
                            var_3a8 = &var_2b0;
                            int64_t (* var_3a0_5)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hab03ba9f5c878c54;
                            int64_t* var_398_5 = &var_288;
                            var_390 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hab03ba9f5c878c54;
                            var_378 = &data_524478;
                            var_370 = 3;
                            *var_360[8] = 0;
                            char const (** const* var_368_5)[0x0] = &var_3a8;
                            var_360 = 2;
                            int128_t var_90;
                            core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&var_90, 
                                &var_378);
                            var_378 = var_90;
                            int64_t var_80;
                            var_368 = var_80;
                            int64_t rax_39;
                            uint64_t rdx_15;
                            rax_39 =
                                core::slice::iter::Iter$LT$T$GT$::make_slice::h5d9082f7b38128f5(
                                var_370, var_80 + var_370);
                            alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hb4877afa2fbcf6a6(
                                &var_2a0, rax_39, rdx_15);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_378);
                        }
                        else
                        {
                            var_2d0 = &var_288;
                            int64_t (* var_2c8_2)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hab03ba9f5c878c54;
                            char const (** var_2c0_2)[0x0] = &var_2b0;
                            var_2b8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hab03ba9f5c878c54;
                            var_378 = 2;
                            int64_t var_368_2 = 2;
                            *var_360[8] = 0;
                            int64_t var_350_2 = 0x20;
                            char var_348_2 = 3;
                            int32_t var_256;
                            int32_t var_344_2 = var_256;
                            int32_t var_347_2 = var_256;
                            int64_t var_340_2 = 2;
                            int64_t var_330_2 = 2;
                            int64_t var_320_1;
                            __builtin_memcpy(&var_320_1, 
                                "\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 0x11);
                            int64_t var_308_2 = 2;
                            int64_t var_2f8_2 = 2;
                            int64_t var_2e8_2 = 0;
                            int64_t var_2e0_2 = 0x20;
                            char var_2d8_2 = 3;
                            int32_t var_2d4_2 = var_256;
                            int32_t var_2d7_2 = var_256;
                            var_3a8 = &data_5244d8;
                            int64_t var_3a0_2 = 4;
                            char const (** const* var_388_2)[0x1a] = &var_378;
                            int64_t var_380_2 = 3;
                            int64_t** var_398_2 = &var_2d0;
                            var_390 = 2;
                            int128_t var_a8;
                            core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&var_a8, 
                                &var_3a8);
                            var_378 = var_a8;
                            int64_t var_98;
                            var_368 = var_98;
                            int64_t rax_29;
                            uint64_t rdx_12;
                            rax_29 =
                                core::slice::iter::Iter$LT$T$GT$::make_slice::h5d9082f7b38128f5(
                                var_370, var_98 + var_370);
                            alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hb4877afa2fbcf6a6(
                                &var_2a0, rax_29, rdx_12);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_378);
                        }
                        
                        goto label_46c646;
                    }
                    
                    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha729273d498af9d1(var_270, var_268, "optionscolor", 7))
                        goto label_46c646;
                    
                    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha729273d498af9d1(var_270, var_268, "color", 5))
                        goto label_46c646;
                    
                    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha729273d498af9d1(var_270, var_268, "eightbitESTRPIPENotFoundTimedOut…", 8))
                        goto label_46c646;
                    
                    char const (** const var_168)[0xa7] = &data_5291b8;
                    void** const var_160_1 =
                        &uucore::features::colors::FILE_ATTRIBUTE_CODES::h4c28990ed9a93d44;
                    int64_t* rax_34 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h560e3f18ade269e2(&var_168, &var_e8);
                    
                    if (rax_34)
                    {
                        char const (* var_210)[0x0] = &rax_34[2];
                        
                        if (rax_6 != 2)
                        {
                            var_3a8 = &var_210;
                            int64_t (* var_3a0_6)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h43e9b8a205962480;
                            int64_t* var_398_6 = &var_288;
                            var_390 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hab03ba9f5c878c54;
                            var_378 = &data_524478;
                            var_370 = 3;
                            *var_360[8] = 0;
                            char const (** const* var_368_6)[0x0] = &var_3a8;
                            var_360 = 2;
                            int128_t var_60;
                            core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&var_60, 
                                &var_378);
                            var_378 = var_60;
                            int64_t var_50;
                            var_368 = var_50;
                            int64_t rax_41;
                            uint64_t rdx_16;
                            rax_41 =
                                core::slice::iter::Iter$LT$T$GT$::make_slice::h5d9082f7b38128f5(
                                var_370, var_50 + var_370);
                            alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hb4877afa2fbcf6a6(
                                &var_2a0, rax_41, rdx_16);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_378);
                        }
                        else
                        {
                            var_2d0 = &var_288;
                            int64_t (* var_2c8_3)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hab03ba9f5c878c54;
                            char const (** var_2c0_3)[0x0] = &var_210;
                            var_2b8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h43e9b8a205962480;
                            var_378 = 2;
                            int64_t var_368_4 = 2;
                            *var_360[8] = 0;
                            int64_t var_350_3 = 0x20;
                            char var_348_3 = 3;
                            int32_t var_24f;
                            int32_t var_344_3 = var_24f;
                            int32_t var_347_3 = var_24f;
                            int64_t var_340_3 = 2;
                            int64_t var_330_3 = 2;
                            int64_t var_320_2;
                            __builtin_memcpy(&var_320_2, 
                                "\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 0x11);
                            int64_t var_308_3 = 2;
                            int64_t var_2f8_3 = 2;
                            int64_t var_2e8_3 = 0;
                            int64_t var_2e0_3 = 0x20;
                            char var_2d8_3 = 3;
                            int32_t var_2d4_3 = var_24f;
                            int32_t var_2d7_3 = var_24f;
                            var_3a8 = &data_5244d8;
                            int64_t var_3a0_4 = 4;
                            char const (** const* var_388_3)[0x1a] = &var_378;
                            int64_t var_380_3 = 3;
                            int64_t** var_398_4 = &var_2d0;
                            var_390 = 2;
                            int128_t var_78;
                            core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&var_78, 
                                &var_3a8);
                            var_378 = var_78;
                            int64_t var_68;
                            var_368 = var_68;
                            int64_t rax_38;
                            uint64_t rdx_14;
                            rax_38 =
                                core::slice::iter::Iter$LT$T$GT$::make_slice::h5d9082f7b38128f5(
                                var_370, var_68 + var_370);
                            alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hb4877afa2fbcf6a6(
                                &var_2a0, rax_38, rdx_14);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_378);
                        }
                        
                        goto label_46c646;
                    }
                }
                
                var_2d0 = nullptr;
                int64_t var_2c8_5 = rcx;
                int64_t var_2c0_5 = r8;
                var_2b8 = 0;
                var_378 = &var_2d0;
                int64_t (* var_370_2)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                int64_t* var_368_8 = &var_218;
                var_360 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                *var_360[8] = &var_2b0;
                int64_t (* var_350_4)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hab03ba9f5c878c54;
                var_3a8 = &data_5244a8;
                int64_t var_3a0_8 = 3;
                int64_t var_388_4 = 0;
                char const (** const* var_398_8)[0x1a] = &var_378;
                var_390 = 3;
                int128_t var_48;
                core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&var_48, &var_3a8);
                int64_t var_38;
                arg1[3] = var_38;
                *(arg1 + 8) = var_48;
                *arg1 = 1;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_278);
            }
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_180);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_1e8);
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map_while..MapWhile$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$..ok$GT$$GT$$GT$::h2aaf8c82ee3105eb(&var_158);
            int64_t* r15_1;
            r15_1 = 1;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_208);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_1c8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_1a8);
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(
                &var_2a0);
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_1e8);
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map_while..MapWhile$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$..ok$GT$$GT$$GT$::h2aaf8c82ee3105eb(&var_158);
    
    if (*arg3 == 2)
        alloc::string::String::pop::hb9a0a0c79640417e(&var_2a0);
    
    int64_t rdi_54 = *var_1c8[8];
    int64_t var_350;
    int64_t rax_43;
    uint64_t rdx_17;
    rax_43 =
        core::slice::iter::Iter$LT$T$GT$::make_slice::h5d9082f7b38128f5(rdi_54, var_350 + rdi_54);
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hb4877afa2fbcf6a6(&var_2a0, rax_43, rdx_17);
    arg1[3] = var_290;
    *(arg1 + 8) = var_2a0;
    *arg1 = 0;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_208);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_1c8);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_1a8);
}
