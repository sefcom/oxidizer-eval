
  fn just::compiler::Compiler::compile::h029c05ce59997e38(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: u64) -> i64

{
    let mut r15: *mut i64 = arg1;
    let mut rax: i64;
    let mut rdx: i64;
    rax = std::thread::local::LocalKey$LT$T$GT$::with::hdd70f1898d43baa2();
    let mut var_8c8: i128 = *data_82bd10;
    let zmm0: i128 = data_82bd20;
    let var_8a0: i64 = rdx;
    let mut var_920: i64 = 0;
    let var_918: i64 = 8;
    let var_910: i64 = 0;
    let mut rax_1: i64;
    let mut rdx_1: i64;
    rax_1 = std::thread::local::LocalKey$LT$T$GT$::with::hdd70f1898d43baa2();
    let var_808: i128 = data_82bd20;
    let mut var_818: i128 = *data_82bd10;
    let var_7f8: i64 = rax_1;
    let var_7f0: i64 = rdx_1;
    let mut rax_2: i64;
    let mut rdx_2: i64;
    rax_2 = std::thread::local::LocalKey$LT$T$GT$::with::hdd70f1898d43baa2();
    let var_7d8: i128 = data_82bd20;
    let mut var_7e8: i128 = *data_82bd10;
    let var_7c0: i64 = rdx_2;
    let mut var_9b8: i64 = 0;
    let var_9b0: *mut i128 = 8;
    let var_9a8: i64 = 0;
    let mut var_718: i64;
    just::source::Source::root::hc15322b4e8fc1460(&var_718, arg3, arg4);
    alloc::vec::Vec$LT$T$C$A$GT$::push::hdd9fa74465954247(&var_9b8, &var_718);
    let mut rbx: i64 = var_9a8;
    let mut var_998: i128;
    let mut var_988: u64;
    let mut var_898: i64;
    let mut var_710: i128;
    let var_700: i128;
    let var_6f0: i128;
    let mut var_6e0: i128;
    let var_6d0: i128;
    let mut var_6c0: i128;
    let mut var_398: i64;
    let mut var_370: i128;
    let mut var_350: i128;
    
    if rbx == 0
    {
        'label_65ac4a:
        var_898 = -0x8000000000000000;
    }
    else
    {
        let var_a20_1: *mut i64 = r15;
        
        loop
        {
            rbx -= 1;
            let rcx_1: i64 = rbx << 7;
            let zmm1_1: i128 = *var_9b0.byte_offset(rcx_1).byte_offset(0x10);
            let zmm2_1: i128 = *var_9b0.byte_offset(rcx_1).byte_offset(0x20);
            let zmm3_1: i128 = *var_9b0.byte_offset(rcx_1).byte_offset(0x30);
            var_898 = *var_9b0.byte_offset(rcx_1);
            let var_858_1: i128 = *var_9b0.byte_offset(rcx_1).byte_offset(0x40);
            let var_848_1: i128 = *var_9b0.byte_offset(rcx_1).byte_offset(0x50);
            
            if var_898 == -0x8000000000000000
            {
                break;
            }
            
            let var_328_1: i96 = (*var_9b0.byte_offset(rcx_1).byte_offset(0x70));
            let mut var_338: i128 = *var_9b0.byte_offset(rcx_1).byte_offset(0x60);
            var_350 = var_848_1;
            let mut var_358: i8;
            var_358 = var_858_1;
            let zmm0_3: i128 = var_898;
            var_370 = zmm3_1;
            var_398 = zmm0_3;
            
            if hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h0362f06993c1c474(&var_818, 
                &*var_370[8]) == 0
            {
                let var_360: i64;
                just::loader::Loader::load::hbf3396d2a4dee187(&var_718, arg2, arg3, arg4, var_360, 
                    var_358);
                let rax_5: i8 = var_718;
                
                if rax_5 != 0x38
                {
                    let rcx_25: i32 = *var_718[1];
                    *r15.byte_offset(0xc) = *var_718[4];
                    *r15.byte_offset(9) = rcx_25;
                    *r15.byte_offset(0x30) = var_6f0;
                    *r15.byte_offset(0x40) = var_6e0;
                    *r15.byte_offset(0x50) = var_6d0;
                    *r15.byte_offset(0x60) = var_6c0;
                    r15[1] = rax_5;
                    *r15.byte_offset(0x10) = var_710;
                    *r15.byte_offset(0x20) = var_700;
                    'label_65b420:
                    *r15 = -0x8000000000000000;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h31c8eb8c4d0056c0(&var_398);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::hfc639b08ed3124bb(zmm2_1, *zmm2_1[8]);
                    core::ptr::drop_in_place$LT$core..option..Option$LT$just..namepath..Namepath$GT$$GT$::h24538336dfc925c3(&var_338);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(
                        &*var_370[8]);
                }
                else
                {
                    let r12_1: i64 = var_710;
                    let rbx_1: u64 = *var_710[8];
                    let rbp_1: i64 = var_700;
                    let rax_6: i64 = *var_700[8];
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_718, r12_1, rbx_1);
                    let var_988_1: i64 = *var_710[8];
                    var_998 = var_718;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hfd422a69ba548d71(&var_920, &var_998);
                    let mut r8_3: i64 = just::lexer::Lexer::lex::h69602b08cd4f3247(&var_718, r12_1, 
                        rbx_1, rbp_1, rax_6);
                    let rcx_4: i8 = var_6d0;
                    let rax_8: i64 = var_718;
                    let r9_2: i64 = var_710;
                    let rax_9: i64 = *var_710[8];
                    
                    if rcx_4 != 0x25
                    {
                        *r15.byte_offset(0x48) = var_6e0;
                        *r15.byte_offset(0x38) = var_6f0;
                        *r15.byte_offset(0x28) = var_700;
                        *r15.byte_offset(0x59) = *var_6d0[1];
                        *r15.byte_offset(0x5c) = *var_6d0[4];
                        r15[1] = 0xc;
                        r15[2] = rax_8;
                        r15[3] = r9_2;
                        r15[4] = rax_9;
                        r15[0xb] = rcx_4;
                        goto 'label_65b420;
                    }
                    
                    if var_338 == -0x8000000000000000
                    {
                        r8_3 = 0;
                    }
                    
                    r15 = 1;
                    let mut var_a40: i64;
                    var_a40 = var_350;
                    just::parser::Parser::parse::hc11613bffd6ff44c(&var_718, *var_328_1[8], 
                        *zmm2_1[8], var_370, r8_3, r9_2, rax_9);
                    let rax_10: i64 = var_718;
                    
                    if rax_10 == -0x8000000000000000
                    {
                        *var_718[7] = var_710;
                        var_a20_1[1] = 0xc;
                        *var_a20_1.byte_offset(9) = var_718;
                        *var_a20_1.byte_offset(0x19) = var_700;
                        *var_a20_1.byte_offset(0x29) = var_6f0;
                        *var_a20_1.byte_offset(0x39) = var_6e0;
                        *var_a20_1.byte_offset(0x49) = var_6d0;
                        var_a20_1[0xb] = *var_6d0[7];
                        *var_a20_1 = -0x8000000000000000;
                        r15 = 1;
                    }
                    else
                    {
                        let var_6b0: i128;
                        let var_40_1: i128 = var_6b0;
                        let var_50_1: i128 = var_6c0;
                        let var_60_1: i128 = var_6d0;
                        let var_70_1: i128 = var_6e0;
                        let var_80_1: i128 = var_6f0;
                        let var_90_1: i128 = var_700;
                        let mut var_a8: i64 = rax_10;
                        r15 = 1;
                        _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&var_718, var_360, var_358);
                        let mut var_9e8_1: u64 = *var_710[8];
                        let mut var_9f8: i128 = var_718;
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_718, r12_1, rbx_1);
                        let var_988_2: i64 = *var_710[8];
                        var_998 = var_718;
                        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h31c492fe8a635b34(
                            &var_718, &var_818, &var_9f8, &var_998);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h35203c2827c71cb0(&var_718);
                        _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&var_718, var_360, var_358);
                        var_988 = *var_710[8];
                        var_998 = var_718;
                        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h88dfb442d3e81d98(
                            &var_7e8, &var_998, rbp_1, rax_6);
                        let r14_1: i64 = *var_710[8];
                        
                        if r14_1 == 0
                        {
                            'label_65ab7c:
                            let var_9e8_2: i64 = var_358;
                            var_9f8 = var_370;
                            _$LT$just..ast..Ast$u20$as$u20$core..clone..Clone$GT$::clone::h20039f0ff4dbb51e(&var_718, &var_a8);
                            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hb5294498aec23d08(
                                &var_998, &var_8c8, &var_9f8, &var_718);
                            core::ptr::drop_in_place$LT$core..option..Option$LT$just..ast..Ast$GT$$GT$::h7f200deecf76b3a0(&var_998);
                            core::ptr::drop_in_place$LT$just..ast..Ast$GT$::he88877c928d48d3e(
                                &var_a8);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..name..Name$GT$$GT$::h3abfcfc45501c2a2(rax_8, r9_2);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h31c8eb8c4d0056c0(&var_398);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::hfc639b08ed3124bb(zmm2_1, *zmm2_1[8]);
                            core::ptr::drop_in_place$LT$core..option..Option$LT$just..namepath..Namepath$GT$$GT$::h24538336dfc925c3(&var_338);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(
                                &var_350);
                            r15 = var_a20_1;
                            
                            if rbx == 0
                            {
                                goto 'label_65ac4a;
                            }
                            
                            continue;
                        }
                        else
                        {
                            let rax_14: *mut c_void = var_710;
                            let mut rbp_2: i64 = 0;
                            
                            loop
                            {
                                let rax_17: i64 =
                                    *rax_14.byte_offset(0xc8).byte_offset(rbp_2).byte_offset(-0xc8)
                                    ^ 0x8000000000000000;
                                let mut var_a18: i128;
                                let mut var_a10: i64;
                                let var_a08: u64;
                                
                                if rax_17 == 3
                                {
                                    let mut rax_22: *mut i8;
                                    let mut rdx_17: u64;
                                    rax_22 = std::path::Path::parent::hef287f60afa56900(var_360, 
                                        var_358);
                                    
                                    if rax_22 == 0
                                    {
                                        core::option::unwrap_failed::h893f57cb7db71cb7();
                                        /* no return */
                                    }
                                    
                                    just::compiler::Compiler::expand_tilde::he94855b8847afd9b(
                                        &var_718, 
                                        *rax_14.byte_offset(0xc8).byte_offset(rbp_2).
                                            byte_offset(-0xb8), 
                                        *rax_14.byte_offset(0xc8).byte_offset(rbp_2).
                                        byte_offset(-0xb0));
                                    let rax_23: i8 = var_718;
                                    
                                    if rax_23 != 0x38
                                    {
                                        let zmm0_13: i128 = *var_718[1];
                                        var_998 = var_710;
                                        var_998 = zmm0_13;
                                        var_a20_1[0xd] = *var_6c0[8];
                                        *var_a20_1.byte_offset(0x58) = var_6d0;
                                        *var_a20_1.byte_offset(0x48) = var_6e0;
                                        *var_a20_1.byte_offset(0x38) = var_6f0;
                                        *var_a20_1.byte_offset(0x28) = var_700;
                                        *var_a20_1.byte_offset(0x18) = var_998;
                                        *var_a20_1.byte_offset(9) = var_998;
                                        var_a20_1[1] = rax_23;
                                        *var_a20_1 = -0x8000000000000000;
                                        r15 = 1;
                                        core::ptr::drop_in_place$LT$just..ast..Ast$GT$::he88877c928d48d3e(&var_a8);
                                        break;
                                    }
                                    
                                    var_988 = var_700;
                                    var_998 = var_710;
                                    let mut var_3b8: i128 = var_998;
                                    let var_3a8_1: u64 = var_988;
                                    std::path::Path::join::h8b41166b2967df99(&var_9f8, rax_22, 
                                        rdx_17, &var_3b8);
                                    _$LT$$RF$std..path..Path$u20$as$u20$lexiclean..Lexiclean$GT$::lexiclean::h6a5ff6ae87480de6(&var_a18, *var_9f8[8], var_9e8_1);
                                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_9f8);
                                    
                                    if std::path::Path::is_file::h6e28d87ff76ffc41(var_a10, var_a08)
                                        == 0
                                    {
                                        if *rax_14.byte_offset(0xc8).byte_offset(rbp_2).
                                            byte_offset(-0x30) == 0
                                        {
                                            *var_6e0[0xf] =
                                                *rax_14.byte_offset(rbp_2).byte_offset(0x90);
                                            let zmm1_7: i128 =
                                                *rax_14.byte_offset(rbp_2).byte_offset(0x60);
                                            let zmm2_7: i128 =
                                                *rax_14.byte_offset(rbp_2).byte_offset(0x70);
                                            let zmm3_6: i128 =
                                                *rax_14.byte_offset(rbp_2).byte_offset(0x80);
                                            *var_718[7] =
                                                *rax_14.byte_offset(rbp_2).byte_offset(0x50);
                                            var_a20_1[1] = 0x21;
                                            *var_a20_1.byte_offset(9) = var_718;
                                            *var_a20_1.byte_offset(0x19) = zmm1_7;
                                            *var_a20_1.byte_offset(0x29) = zmm2_7;
                                            *var_a20_1.byte_offset(0x39) = zmm3_6;
                                            var_a20_1[9] = *var_6e0[7];
                                            var_a20_1[0xa] = *var_6e0[0xf];
                                            *var_a20_1 = -0x8000000000000000;
                                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_a18);
                                            r15 = 1;
                                            core::ptr::drop_in_place$LT$just..ast..Ast$GT$::he88877c928d48d3e(&var_a8);
                                            break;
                                        }
                                        
                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_a18);
                                    }
                                    else
                                    {
                                        if _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hba127b94f5894115(&var_a18, zmm1_1, *zmm1_1[8]) != 0
                                        {
                                            var_a20_1[7] = var_a08;
                                            *var_a20_1.byte_offset(0x28) = var_a18;
                                            *var_718[7] = var_370;
                                            *var_710[0xf] = var_358;
                                            var_a20_1[1] = 8;
                                            *var_a20_1.byte_offset(9) = var_718;
                                            var_a20_1[3] = *var_710[7];
                                            var_a20_1[4] = *var_710[0xf];
                                            *var_a20_1 = -0x8000000000000000;
                                            r15 = nullptr;
                                            core::ptr::drop_in_place$LT$just..ast..Ast$GT$::he88877c928d48d3e(&var_a8);
                                            break;
                                        }
                                        
                                        _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&var_718, var_a10, var_a08);
                                        var_998 = var_718;
                                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h35203c2827c71cb0(rax_14.byte_offset(0x38).byte_offset(rbp_2));
                                        *rax_14.byte_offset(0xc8).byte_offset(rbp_2).
                                            byte_offset(-0x80) = *var_710[8];
                                        *rax_14.byte_offset(0xc8).byte_offset(rbp_2).
                                            byte_offset(-0x90) = var_998;
                                        var_988 = var_a08;
                                        var_998 = var_a18;
                                        just::source::Source::import::h2eeb856d6368391e(&var_718, 
                                            &var_398, &var_998, 
                                            *rax_14.byte_offset(0xc8).byte_offset(rbp_2).
                                                byte_offset(-0x40));
                                        alloc::vec::Vec$LT$T$C$A$GT$::push::hdd9fa74465954247(
                                            &var_9b8, &var_718);
                                    }
                                }
                                else if rax_17 == 4
                                {
                                    let mut rax_18: *mut i8;
                                    let mut rdx_15: u64;
                                    rax_18 = std::path::Path::parent::hef287f60afa56900(var_360, 
                                        var_358);
                                    
                                    if rax_18 == 0
                                    {
                                        core::option::unwrap_failed::h893f57cb7db71cb7();
                                        /* no return */
                                    }
                                    
                                    let mut rsi_14: i64 = -0x8000000000000000;
                                    let mut zmm0_12: i128;
                                    
                                    if *rax_14.byte_offset(0xc8).byte_offset(rbp_2).
                                        byte_offset(-0x78) != -0x8000000000000000
                                    {
                                        just::compiler::Compiler::expand_tilde::he94855b8847afd9b(
                                            &var_718, 
                                            *rax_14.byte_offset(0xc8).byte_offset(rbp_2).
                                                byte_offset(-0x70), 
                                            *rax_14.byte_offset(0xc8).byte_offset(rbp_2).
                                            byte_offset(-0x68));
                                        let rax_20: u32 = var_718;
                                        let rcx_9: i32 = *var_718[1];
                                        let rsi_16: i32 = *var_718[4];
                                        let rcx_10: i64 = var_710;
                                        var_9f8 = var_710;
                                        let rsi_17: i64 = *var_6c0[8];
                                        var_988 = var_6f0;
                                        var_998 = var_700;
                                        rsi_14 = -0x8000000000000000;
                                        
                                        if rax_20 != 0x39
                                        {
                                            if rax_20 != 0x38
                                            {
                                                *var_a20_1.byte_offset(0xc) = rsi_16;
                                                *var_a20_1.byte_offset(9) = rcx_9;
                                                var_a18 = var_9f8;
                                                var_a20_1[0xd] = rsi_17;
                                                zmm0_12 = var_998;
                                                *var_a20_1.byte_offset(0x58) = var_6d0;
                                                *var_a20_1.byte_offset(0x48) = var_6e0;
                                                *var_a20_1.byte_offset(0x38) = var_988;
                                                *var_a20_1.byte_offset(0x28) = zmm0_12;
                                                zmm0_12 = var_a18;
                                                let var_8e8_3: i128 = zmm0_12;
                                                *var_a20_1.byte_offset(0x18) = zmm0_12;
                                                var_a20_1[1] = rax_20;
                                                var_a20_1[2] = rcx_10;
                                                *var_a20_1 = -0x8000000000000000;
                                                r15 = 1;
                                                core::ptr::drop_in_place$LT$just..ast..Ast$GT$::he88877c928d48d3e(&var_a8);
                                                break;
                                                break;
                                            }
                                            
                                            var_a18 = var_9f8;
                                            rsi_14 = rcx_10;
                                        }
                                    }
                                    
                                    zmm0_12 = var_a18;
                                    let var_8e8_1: i128 = zmm0_12;
                                    let mut var_900: i64 = rsi_14;
                                    let var_958_2: i64 = *rax_14.byte_offset(0xc8).
                                        byte_offset(rbp_2).byte_offset(-8);
                                    let var_968_2: i128 = *rax_14.byte_offset(0xc8).
                                        byte_offset(rbp_2).byte_offset(-0x18);
                                    let var_978_2: i128 = *rax_14.byte_offset(0xc8).
                                        byte_offset(rbp_2).byte_offset(-0x28);
                                    var_988 = *rax_14.byte_offset(0xc8).byte_offset(rbp_2).
                                        byte_offset(-0x38);
                                    var_998 = *rax_14.byte_offset(0xc8).byte_offset(rbp_2).
                                        byte_offset(-0x48);
                                    let mut r8_4: i64;
                                    
                                    if rsi_14 == -0x8000000000000000
                                    {
                                        r8_4 = 0;
                                    }
                                    else
                                    {
                                        r8_4 = zmm0_12;
                                    }
                                    
                                    just::compiler::Compiler::find_module_file::h693ba5e762d20c81(
                                        &var_718, rax_18, rdx_15, &var_998, r8_4, *zmm0_12[8]);
                                    let rax_32: i8 = var_718;
                                    
                                    if rax_32 != 0x38
                                    {
                                        let rcx_17: i32 = *var_718[1];
                                        *var_a20_1.byte_offset(0xc) = *var_718[4];
                                        *var_a20_1.byte_offset(9) = rcx_17;
                                        var_9f8 = var_710;
                                        var_a20_1[0xd] = *var_6c0[8];
                                        *var_a20_1.byte_offset(0x58) = var_6d0;
                                        *var_a20_1.byte_offset(0x48) = var_6e0;
                                        *var_a20_1.byte_offset(0x38) = var_6f0;
                                        *var_a20_1.byte_offset(0x28) = var_700;
                                        *var_a20_1.byte_offset(0x18) = var_9f8;
                                        var_a20_1[1] = rax_32;
                                        var_a20_1[2] = var_710;
                                        *var_a20_1 = -0x8000000000000000;
                                        r15 = 1;
                                        'label_65b2f4:
                                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h35203c2827c71cb0(&var_900);
                                        core::ptr::drop_in_place$LT$just..ast..Ast$GT$::he88877c928d48d3e(&var_a8);
                                        break;
                                    }
                                    
                                    let rax_33: i64 = var_710;
                                    
                                    if rax_33 == -0x8000000000000000
                                    {
                                        if *rax_14.byte_offset(0xc8).byte_offset(rbp_2) == 0
                                        {
                                            *var_6e0[0xf] =
                                                *rax_14.byte_offset(rbp_2).byte_offset(0xc0);
                                            let zmm1_8: i128 =
                                                *rax_14.byte_offset(rbp_2).byte_offset(0x90);
                                            let zmm2_8: i128 =
                                                *rax_14.byte_offset(rbp_2).byte_offset(0xa0);
                                            let zmm3_7: i128 =
                                                *rax_14.byte_offset(rbp_2).byte_offset(0xb0);
                                            *var_718[7] =
                                                *rax_14.byte_offset(rbp_2).byte_offset(0x80);
                                            var_a20_1[1] = 0x22;
                                            *var_a20_1.byte_offset(9) = var_718;
                                            *var_a20_1.byte_offset(0x19) = zmm1_8;
                                            *var_a20_1.byte_offset(0x29) = zmm2_8;
                                            *var_a20_1.byte_offset(0x39) = zmm3_7;
                                            var_a20_1[9] = *var_6e0[7];
                                            var_a20_1[0xa] = *var_6e0[0xf];
                                            *var_a20_1 = -0x8000000000000000;
                                            r15 = 1;
                                            goto 'label_65b2f4;
                                        }
                                        
                                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h35203c2827c71cb0(&var_900);
                                    }
                                    else
                                    {
                                        var_a18 = rax_33;
                                        var_a10 = var_710;
                                        
                                        if _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hba127b94f5894115(&var_a18, zmm1_1, *zmm1_1[8]) != 0
                                        {
                                            var_a20_1[7] = var_a08;
                                            *var_a20_1.byte_offset(0x28) = var_a18;
                                            *var_718[7] = var_370;
                                            *var_710[0xf] = var_358;
                                            var_a20_1[1] = 8;
                                            *var_a20_1.byte_offset(9) = var_718;
                                            var_a20_1[3] = *var_710[7];
                                            var_a20_1[4] = *var_710[0xf];
                                            *var_a20_1 = -0x8000000000000000;
                                            r15 = nullptr;
                                            goto 'label_65b2f4;
                                        }
                                        
                                        _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&var_718, var_a10, var_a08);
                                        var_998 = var_718;
                                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h35203c2827c71cb0(rax_14.byte_offset(0x20).byte_offset(rbp_2));
                                        *rax_14.byte_offset(0xc8).byte_offset(rbp_2).
                                            byte_offset(-0x98) = *var_710[8];
                                        *rax_14.byte_offset(0xc8).byte_offset(rbp_2).
                                            byte_offset(-0xa8) = var_998;
                                        let var_958_3: i64 = *rax_14.byte_offset(0xc8).
                                            byte_offset(rbp_2).byte_offset(-8);
                                        let var_968_3: i128 = *rax_14.byte_offset(0xc8).
                                            byte_offset(rbp_2).byte_offset(-0x18);
                                        let var_978_3: i128 = *rax_14.byte_offset(0xc8).
                                            byte_offset(rbp_2).byte_offset(-0x28);
                                        var_988 = *rax_14.byte_offset(0xc8).byte_offset(rbp_2).
                                            byte_offset(-0x38);
                                        var_998 = *rax_14.byte_offset(0xc8).byte_offset(rbp_2).
                                            byte_offset(-0x48);
                                        var_9e8_1 = var_a08;
                                        var_9f8 = var_a18;
                                        just::source::Source::module::h8a09876a3d20f69d(&var_718, 
                                            &var_398, &var_998, &var_9f8);
                                        alloc::vec::Vec$LT$T$C$A$GT$::push::hdd9fa74465954247(
                                            &var_9b8, &var_718);
                                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h35203c2827c71cb0(&var_900);
                                    }
                                }
                                rbp_2 += 0x100;
                                
                                if r14_1 << 8 == rbp_2
                                {
                                    goto 'label_65ab7c;
                                }
                            }
                        }
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..name..Name$GT$$GT$::h3abfcfc45501c2a2(rax_8, r9_2);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h31c8eb8c4d0056c0(&var_398);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::hfc639b08ed3124bb(zmm2_1, *zmm2_1[8]);
                    core::ptr::drop_in_place$LT$core..option..Option$LT$just..namepath..Namepath$GT$$GT$::h24538336dfc925c3(&var_338);
                    
                    if r15 != 0
                    {
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(
                            &*var_370[8]);
                    }
                }
                
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_350);
                goto 'label_65b471;
            }
            
            core::ptr::drop_in_place$LT$just..source..Source$GT$::hba42e36bd79a254e(&var_398);
            
            if rbx == 0
            {
                goto 'label_65ac4a;
            }
        }
    }
    
    core::ptr::drop_in_place$LT$core..option..Option$LT$just..source..Source$GT$$GT$::h40df8fb550687323(&var_898);
    var_898 = -0x8000000000000000;
    let var_358_1: i8 = 0x25;
    just::analyzer::Analyzer::analyze::h647d89e635aa2068(&var_718, &var_8c8, &var_898, 8, 0, 
        var_918, var_910, &var_398, &var_818, arg3, arg4);
    let rbx_6: i64 = var_718;
    
    if rbx_6 == -0x8000000000000000
    {
        *var_718[7] = var_710;
        r15[1] = 0xc;
        *r15.byte_offset(9) = var_718;
        *r15.byte_offset(0x19) = var_700;
        *r15.byte_offset(0x29) = var_6f0;
        *r15.byte_offset(0x39) = var_6e0;
        *r15.byte_offset(0x49) = var_6d0;
        r15[0xb] = *var_6d0[7];
        *r15 = -0x8000000000000000;
        'label_65b471:
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..source..Source$GT$$GT$::h03225a9cc1e5fa8e(&var_9b8);
        core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$std..path..PathBuf$C$$RF$str$GT$$GT$::h28152c6871ee959f(&var_7e8);
        core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$std..path..PathBuf$C$std..path..PathBuf$GT$$GT$::hc5a70bc35adf0222(&var_818);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h31c8eb8c4d0056c0(&var_920);
        return core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$std..path..PathBuf$C$just..ast..Ast$GT$$GT$::h9c0425c40e3c1f24(&var_8c8);
    }
    
    let mut var_340: ();
    memcpy(&var_340, &var_6c0, 0x290);
    let var_390_1: i128 = var_710;
    let var_380_1: i128 = var_700;
    var_370 = var_6f0;
    let var_360_1: i128 = var_6e0;
    var_350 = var_6d0;
    var_898 = var_8c8;
    var_398 = rbx_6;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_998, arg3, arg4);
    let var_420_1: u64 = var_988;
    let var_430_1: i128 = var_998;
    let var_3e8_1: i128 = var_7e8;
    let var_3d8_1: i128 = var_7d8;
    let var_3c8_1: i128 = rax_2;
    let var_418_1: i128 = var_898;
    let var_408_1: i128 = zmm0;
    let var_3f8_1: i128 = rax;
    memcpy(&var_718, &var_398, 0x2e8);
    memcpy(r15, &var_718, 0x360);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..source..Source$GT$$GT$::h03225a9cc1e5fa8e(
        &var_9b8);
    core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$std..path..PathBuf$C$std..path..PathBuf$GT$$GT$::hc5a70bc35adf0222(&var_818);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h31c8eb8c4d0056c0(
        &var_920)
}
