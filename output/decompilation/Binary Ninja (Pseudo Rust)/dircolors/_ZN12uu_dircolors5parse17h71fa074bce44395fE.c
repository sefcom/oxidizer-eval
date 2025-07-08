
  fn uu_dircolors::parse::h71fa074bce44395f(arg1: *mut i64, arg2: *mut i128, arg3: *mut i8) -> i64

{
    let mut rbp: i64;
    let var_8: i64 = rbp;
    let mut r14: i64;
    r14 = 1;
    let mut var_378: *mut *mut [i8; 0x1a];
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hee6bf1574c352e3c(&var_378, 0x6fe, 0);
    let mut var_370: size_t;
    
    if var_378 != 0
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_370);
        /* no return */
    }
    
    let mut var_2a0: size_t = var_370;
    let mut var_368: i64;
    let var_298: i64 = var_368;
    let var_290: i64 = 0;
    r14 = 1;
    uu_dircolors::get_colors_format_strings::h3d385b99c9468f76(&var_378, arg3);
    let var_198: i64 = var_368;
    let mut var_1a8: i128 = var_378;
    let mut var_360: i128;
    let mut var_1c8: i128 = var_360;
    let rdi_3: i64 = *var_1a8[8];
    let mut rax_2: i64;
    let mut rdx: u64;
    rax_2 = core::slice::iter::Iter$LT$T$GT$::make_slice::h5d9082f7b38128f5(rdi_3, var_368 + rdi_3);
    let mut r15: i64;
    r15 = 1;
    r14 = 1;
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hb4877afa2fbcf6a6(&var_2a0, rax_2, rdx);
    r15 = 1;
    r14 = 1;
    std::env::var::h4c097dcfeefd9ab9(&var_378, "TERMtrue.jarhurdDOOR.asf.flisock…");
    let mut var_208: i128;
    let mut var_1f8: i64;
    let mut var_158: i128;
    
    if var_378 == 0
    {
        var_1f8 = var_360;
        var_208 = var_370;
    }
    else
    {
        let var_148_1: i64 = var_360;
        var_158 = var_370;
        r15 = 1;
        r14 = 1;
        uu_dircolors::parse::_$u7b$$u7b$closure$u7d$$u7d$::h23ff856b4f10dbff(&var_208, &var_158);
    }
    
    let rax_3: i64 = *var_208[8];
    _$LT$I$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h62181ef6c62eb43b(
        &var_378, arg2);
    core::iter::traits::iterator::Iterator::enumerate::h37c9db441ff7667b(&var_158, &var_378);
    let rax_6: i8 = *arg3;
    let mut var_3b0: u32 = 0;
    
    loop
    {
        let mut var_120: i64;
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h18a0e2ab2d93f8f1(&var_120, &var_158);
        let var_118: i64;
        rbp = var_118 != -0x8000000000000000;
        
        if var_118 == -0x8000000000000000
        {
            break;
        }
        
        let rax_7: i64 = var_120;
        let var_108: i64;
        let var_1d8_1: i64 = var_108;
        let mut var_1e8: i128 = var_118;
        let mut var_218: i64 = rax_7 + 1;
        let mut rax_9: *mut i8;
        let mut rdx_2: *mut c_void;
        rax_9 = alloc::str::_$LT$impl$u20$core..borrow..Borrow$LT$str$GT$$u20$for$u20$alloc..string..String$GT$::borrow::ha27266882ad30354(*var_1e8[8]);
        let mut rax_10: i64;
        let mut rdx_3: i64;
        rax_10 =
            _$LT$str$u20$as$u20$uu_dircolors..StrUtils$GT$::purify::had3361032469b65a(rax_9, rdx_2);
        
        if rdx_3 != 0
        {
            let mut var_180: ();
            uu_dircolors::escape::h9e775b2dd37a0760(&var_180, rax_10, rdx_3);
            let var_178: *mut i8;
            let var_170: *mut c_void;
            _$LT$str$u20$as$u20$uu_dircolors..StrUtils$GT$::split_two::h1a868daf304bd95e(&var_378, 
                var_178, var_170);
            let rsi_12: *mut i8 = var_378;
            let mut var_2b0: *mut [i8; 0x0] = rsi_12;
            let rcx_3: i64 = var_360;
            let mut var_288: i64 = var_368;
            let mut var_3a8: *mut *mut [i8; 0x0];
            let mut var_2d0: *mut i64;
            let rcx: i64;
            let r8: i64;
            
            if rcx_3 == 0
            {
                var_3a8 = nullptr;
                let var_3a0_7: i64 = rcx;
                let var_398_7: i64 = r8;
                let var_390_1: i8 = 0;
                var_2d0 = &var_3a8;
                let var_2c8_4: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                let var_2c0_4: *mut i64 = &var_218;
                let var_2b8_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                var_378 = &std::sys::pal::unix::stack_overflow::imp::GUARD::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::VAL::hdb43507c931d3044.1;
                let var_370_1: i64 = 3;
                *var_360[8] = 0;
                let var_368_7: *mut *mut i64 = &var_2d0;
                var_360 = 2;
                let mut var_100: i128;
                core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&var_100, &var_378);
                let var_f0: i64;
                arg1[3] = var_f0;
                *arg1.byte_offset(8) = var_100;
                *arg1 = 1;
            }
            else
            {
                let mut var_278: ();
                alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h8673807247540a26(&var_278, 
                    rsi_12, var_370);
                let var_270: i64;
                let var_268: u64;
                let rax_12: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha729273d498af9d1(var_270, var_268, "term) = .jpgexecZero.zst.bmp.yuv…", 4);
                let mut rax_13: i8;
                
                if rax_12 == 0
                {
                    rax_13 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha729273d498af9d1(var_270, var_268, "colortermoptionscolor", 9);
                }
                
                let mut r13: u32;
                
                if rax_12 != 0 || rax_13 != 0
                {
                    r13 = 1;
                    
                    if _$LT$str$u20$as$u20$uu_dircolors..StrUtils$GT$::fnmatch::haff50f05c6a9d49d(
                        rax_3, var_1f8, var_288, rcx_3) == 0
                    {
                        r13 = var_3b0 != 1;
                        r13 *= 2;
                        r13 |= 1;
                    }
                    
                    goto 'label_46c646;
                }
                
                let rax_15: i8 = var_3b0;
                let mut rcx_5: u32 = rax_15;
                
                if rax_15 == 1
                {
                    rcx_5 = 2;
                }
                
                r13 = 3;
                let mut var_390: i8;
                let mut var_2b8: fn(arg1: *mut i64, arg2: i64) -> i64;
                
                if rcx_5 == 3
                {
                    'label_46c646:
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
                    let mut var_e8: i128 = var_270;
                    var_3b0 = var_2b0;
                    var_378 = 0;
                    let mut rax_18: i64;
                    let mut rdx_7: u64;
                    rax_18 =
                        core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2e, &var_378);
                    
                    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf50e9cc3cb3717b9(
                        var_3b0, var_370, rax_18, rdx_7) != 0
                    {
                        if rax_6 != 2
                        {
                            var_3a8 = &var_2b0;
                            let var_3a0_3: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hab03ba9f5c878c54;
                            let var_398_3: *mut i64 = &var_288;
                            var_390 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hab03ba9f5c878c54;
                            var_378 = &data_524448;
                            var_370 = 3;
                            *var_360[8] = 0;
                            let var_368_3: *const *mut *mut [i8; 0x0] = &var_3a8;
                            var_360 = 2;
                            let mut var_c0: i128;
                            core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&var_c0, 
                                &var_378);
                            var_378 = var_c0;
                            let var_b0: i64;
                            var_368 = var_b0;
                            let mut rax_30: i64;
                            let mut rdx_13: u64;
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
                            let var_2c8_1: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hab03ba9f5c878c54;
                            let var_2c0_1: *mut i64 = &var_2b0;
                            var_2b8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hab03ba9f5c878c54;
                            var_378 = 2;
                            let var_368_1: i64 = 2;
                            *var_360[8] = 0;
                            let var_350_1: i64 = 0x20;
                            let var_348_1: i8 = 3;
                            let var_25d: i32;
                            let var_344_1: i32 = var_25d;
                            let var_347_1: i32 = var_25d;
                            let var_340_1: i64 = 2;
                            let var_330_1: i64 = 2;
                            let mut var_320: i64;
                            __builtin_memcpy(&var_320, 
                                "\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 0x11);
                            let var_308_1: i64 = 2;
                            let var_2f8_1: i64 = 2;
                            let var_2e8_1: i64 = 0;
                            let var_2e0_1: i64 = 0x20;
                            let var_2d8_1: i8 = 3;
                            let var_2d4_1: i32 = var_25d;
                            let var_2d7_1: i32 = var_25d;
                            var_3a8 = &data_524518;
                            let var_3a0_1: i64 = 4;
                            let var_388_1: *mut i64 = &var_378;
                            let var_380_1: i64 = 3;
                            let var_398_1: *mut *mut i64 = &var_2d0;
                            var_390 = 2;
                            let mut var_d8: i128;
                            core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&var_d8, 
                                &var_3a8);
                            var_378 = var_d8;
                            let var_c8: i64;
                            var_368 = var_c8;
                            let mut rax_22: i64;
                            let mut rdx_9: u64;
                            rax_22 =
                                core::slice::iter::Iter$LT$T$GT$::make_slice::h5d9082f7b38128f5(
                                var_370, var_c8 + var_370);
                            alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hb4877afa2fbcf6a6(
                                &var_2a0, rax_22, rdx_9);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_378);
                        }
                        
                        goto 'label_46c646;
                    }
                    
                    var_3b0 = var_2b0;
                    var_378 = 0;
                    let mut rax_25: i64;
                    let mut rdx_10: u64;
                    rax_25 =
                        core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2a, &var_378);
                    
                    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf50e9cc3cb3717b9(
                        var_3b0, var_370, rax_25, rdx_10) != 0
                    {
                        if rax_6 != 2
                        {
                            var_3a8 = &var_2b0;
                            let var_3a0_5: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hab03ba9f5c878c54;
                            let var_398_5: *mut i64 = &var_288;
                            var_390 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hab03ba9f5c878c54;
                            var_378 = &data_524478;
                            var_370 = 3;
                            *var_360[8] = 0;
                            let var_368_5: *const *mut *mut [i8; 0x0] = &var_3a8;
                            var_360 = 2;
                            let mut var_90: i128;
                            core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&var_90, 
                                &var_378);
                            var_378 = var_90;
                            let var_80: i64;
                            var_368 = var_80;
                            let mut rax_39: i64;
                            let mut rdx_15: u64;
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
                            let var_2c8_2: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hab03ba9f5c878c54;
                            let var_2c0_2: *mut *mut [i8; 0x0] = &var_2b0;
                            var_2b8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hab03ba9f5c878c54;
                            var_378 = 2;
                            let var_368_2: i64 = 2;
                            *var_360[8] = 0;
                            let var_350_2: i64 = 0x20;
                            let var_348_2: i8 = 3;
                            let var_256: i32;
                            let var_344_2: i32 = var_256;
                            let var_347_2: i32 = var_256;
                            let var_340_2: i64 = 2;
                            let var_330_2: i64 = 2;
                            let mut var_320_1: i64;
                            __builtin_memcpy(&var_320_1, 
                                "\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 0x11);
                            let var_308_2: i64 = 2;
                            let var_2f8_2: i64 = 2;
                            let var_2e8_2: i64 = 0;
                            let var_2e0_2: i64 = 0x20;
                            let var_2d8_2: i8 = 3;
                            let var_2d4_2: i32 = var_256;
                            let var_2d7_2: i32 = var_256;
                            var_3a8 = &data_5244d8;
                            let var_3a0_2: i64 = 4;
                            let var_388_2: *const *mut *mut [i8; 0x1a] = &var_378;
                            let var_380_2: i64 = 3;
                            let var_398_2: *mut *mut i64 = &var_2d0;
                            var_390 = 2;
                            let mut var_a8: i128;
                            core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&var_a8, 
                                &var_3a8);
                            var_378 = var_a8;
                            let var_98: i64;
                            var_368 = var_98;
                            let mut rax_29: i64;
                            let mut rdx_12: u64;
                            rax_29 =
                                core::slice::iter::Iter$LT$T$GT$::make_slice::h5d9082f7b38128f5(
                                var_370, var_98 + var_370);
                            alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hb4877afa2fbcf6a6(
                                &var_2a0, rax_29, rdx_12);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_378);
                        }
                        
                        goto 'label_46c646;
                    }
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha729273d498af9d1(var_270, var_268, "optionscolor", 7) != 0
                    {
                        goto 'label_46c646;
                    }
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha729273d498af9d1(var_270, var_268, "color", 5) != 0
                    {
                        goto 'label_46c646;
                    }
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha729273d498af9d1(var_270, var_268, "eightbitESTRPIPENotFoundTimedOut…", 8) != 0
                    {
                        goto 'label_46c646;
                    }
                    
                    let mut var_168: *mut *mut [i8; 0xa7] = &data_5291b8;
                    let var_160_1: *mut *mut c_void =
                        &uucore::features::colors::FILE_ATTRIBUTE_CODES::h4c28990ed9a93d44;
                    let rax_34: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h560e3f18ade269e2(&var_168, &var_e8);
                    
                    if rax_34 != 0
                    {
                        let mut var_210: *mut [i8; 0x0] = &rax_34[2];
                        
                        if rax_6 != 2
                        {
                            var_3a8 = &var_210;
                            let var_3a0_6: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h43e9b8a205962480;
                            let var_398_6: *mut i64 = &var_288;
                            var_390 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hab03ba9f5c878c54;
                            var_378 = &data_524478;
                            var_370 = 3;
                            *var_360[8] = 0;
                            let var_368_6: *const *mut *mut [i8; 0x0] = &var_3a8;
                            var_360 = 2;
                            let mut var_60: i128;
                            core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&var_60, 
                                &var_378);
                            var_378 = var_60;
                            let var_50: i64;
                            var_368 = var_50;
                            let mut rax_41: i64;
                            let mut rdx_16: u64;
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
                            let var_2c8_3: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hab03ba9f5c878c54;
                            let var_2c0_3: *mut *mut [i8; 0x0] = &var_210;
                            var_2b8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h43e9b8a205962480;
                            var_378 = 2;
                            let var_368_4: i64 = 2;
                            *var_360[8] = 0;
                            let var_350_3: i64 = 0x20;
                            let var_348_3: i8 = 3;
                            let var_24f: i32;
                            let var_344_3: i32 = var_24f;
                            let var_347_3: i32 = var_24f;
                            let var_340_3: i64 = 2;
                            let var_330_3: i64 = 2;
                            let mut var_320_2: i64;
                            __builtin_memcpy(&var_320_2, 
                                "\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 0x11);
                            let var_308_3: i64 = 2;
                            let var_2f8_3: i64 = 2;
                            let var_2e8_3: i64 = 0;
                            let var_2e0_3: i64 = 0x20;
                            let var_2d8_3: i8 = 3;
                            let var_2d4_3: i32 = var_24f;
                            let var_2d7_3: i32 = var_24f;
                            var_3a8 = &data_5244d8;
                            let var_3a0_4: i64 = 4;
                            let var_388_3: *const *mut *mut [i8; 0x1a] = &var_378;
                            let var_380_3: i64 = 3;
                            let var_398_4: *mut *mut i64 = &var_2d0;
                            var_390 = 2;
                            let mut var_78: i128;
                            core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&var_78, 
                                &var_3a8);
                            var_378 = var_78;
                            let var_68: i64;
                            var_368 = var_68;
                            let mut rax_38: i64;
                            let mut rdx_14: u64;
                            rax_38 =
                                core::slice::iter::Iter$LT$T$GT$::make_slice::h5d9082f7b38128f5(
                                var_370, var_68 + var_370);
                            alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hb4877afa2fbcf6a6(
                                &var_2a0, rax_38, rdx_14);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_378);
                        }
                        
                        goto 'label_46c646;
                    }
                }
                
                var_2d0 = nullptr;
                let var_2c8_5: i64 = rcx;
                let var_2c0_5: i64 = r8;
                var_2b8 = 0;
                var_378 = &var_2d0;
                let var_370_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                let var_368_8: *mut i64 = &var_218;
                var_360 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                *var_360[8] = &var_2b0;
                let var_350_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hab03ba9f5c878c54;
                var_3a8 = &data_5244a8;
                let var_3a0_8: i64 = 3;
                let var_388_4: i64 = 0;
                let var_398_8: *const *mut *mut [i8; 0x1a] = &var_378;
                var_390 = 3;
                let mut var_48: i128;
                core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&var_48, &var_3a8);
                let var_38: i64;
                arg1[3] = var_38;
                *arg1.byte_offset(8) = var_48;
                *arg1 = 1;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_278);
            }
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_180);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_1e8);
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map_while..MapWhile$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$..ok$GT$$GT$$GT$::h2aaf8c82ee3105eb(&var_158);
            let mut r15_1: *mut i64;
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
    
    if *arg3 == 2
    {
        alloc::string::String::pop::hb9a0a0c79640417e(&var_2a0);
    }
    
    let rdi_54: i64 = *var_1c8[8];
    let var_350: i64;
    let mut rax_43: i64;
    let mut rdx_17: u64;
    rax_43 =
        core::slice::iter::Iter$LT$T$GT$::make_slice::h5d9082f7b38128f5(rdi_54, var_350 + rdi_54);
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hb4877afa2fbcf6a6(&var_2a0, rax_43, rdx_17);
    arg1[3] = var_290;
    *arg1.byte_offset(8) = var_2a0;
    *arg1 = 0;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_208);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_1c8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_1a8)
}
