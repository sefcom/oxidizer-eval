
  fn just::justfile::Justfile::run::h44a153d0be889dd4(arg1: *mut i8, arg2: *mut c_void, arg3: *mut c_void, arg4: *mut c_void, arg5: *mut i64, arg6: i64, arg7: i64) -> i64

{
    let rax: i64 = *arg5;
    let rcx: i64 = arg5[1];
    let mut rsi: i64 = rax;
    let mut rdx: *mut i8;
    rdx = rax != 0;
    
    if rax != 0
    {
        rsi = arg5[2];
    }
    
    let mut var_3e8: *const i8 = rdx;
    let result: i64 = 0;
    let var_3c0: i64 = 0;
    let mut var_220: i128;
    core::iter::traits::iterator::Iterator::collect::h7b08ed1676f42405(&var_220, &var_3e8);
    let var_210: i64;
    
    if var_210 != 0
    {
        *var_3e8[7] = var_220;
        *arg1 = 0x33;
        *arg1.byte_offset(1) = var_3e8;
        *arg1.byte_offset(0x10) = result;
        *arg1.byte_offset(0x18) = var_210;
        return result;
    }
    
    let var_398: i128;
    let var_388: i64;
    let mut var_2d8: i64;
    let mut var_1d8: i128;
    
    if *arg3.byte_offset(0x19d) == 0
    {
        var_2d8 = 0;
        let var_2c8_2: i64 = 0;
        'label_66db68:
        let mut var_f0: ();
        just::scope::Scope::root::hda0e4ba20c461efb(&var_f0);
        let mut var_68: ();
        typed_arena::Arena$LT$T$GT$::new::hd6515356f5b54e6a(&var_68);
        let mut var_250: *mut c_void = nullptr;
        let var_240_1: i64 = 0;
        just::justfile::Justfile::evaluate_scopes::h6ff4fac1720d11b8(&var_3e8, arg2, &var_68, arg3, 
            &var_2d8, arg5, &var_f0, &var_250, arg4);
        let rax_6: i8 = var_3e8;
        
        if rax_6 != 0x38
        {
            *arg1.byte_offset(0x60) = var_388;
            *arg1.byte_offset(0x51) = var_398;
            *arg1.byte_offset(0x41) = *rsi[1];
            let zmm0_3: i128 = *var_3e8[1];
            *arg1.byte_offset(0x31) = *rax[1];
            *arg1.byte_offset(0x21) = *rdx[1];
            *arg1.byte_offset(0x11) = *rax[1];
            *arg1.byte_offset(1) = zmm0_3;
            *arg1 = rax_6;
            'label_66e78d:
            core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$$LP$$RF$just..justfile..Justfile$C$$RF$just..scope..Scope$RP$$GT$$GT$::h32af9d5b63dc3081(&var_250);
            core::ptr::drop_in_place$LT$typed_arena..Arena$LT$just..scope..Scope$GT$$GT$::h663a7193296ae013(&var_68);
            core::ptr::drop_in_place$LT$just..scope..Scope$GT$::h7ff7b84fe4911a9f(&var_f0);
            core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$alloc..string..String$GT$$GT$::ha376ddf44fdc42b7(&var_2d8);
        }
        else
        {
            let var_248: i64;
            let rax_7: *mut c_void =
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hc82ab274f21ca297(
                var_250, var_248, *arg2.byte_offset(0x38), *arg2.byte_offset(0x40));
            
            if rax_7 == 0
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            let rbp_1: *mut i64 = *rax_7.byte_offset(8);
            let rcx_6: i64 = *arg3.byte_offset(0x138) ^ 0x8000000000000000;
            let mut rax_8: i64 = 2;
            
            if rcx_6 < 0x11
            {
                rax_8 = rcx_6;
            }
            
            let mut var_400: i16;
            let mut var_308: *mut c_void;
            let mut var_2b8: i8;
            let mut var_2a8: i32;
            
            if rax_8 == 2
            {
                if *arg3.byte_offset(0x1a1) == 0
                {
                    std::process::Command::new::h8c26813fa7e2543d(&var_1d8, 
                        arg3.byte_offset(0x150));
                }
                else
                {
                    just::settings::Settings::shell_command::h194009976e056ef8(&var_3e8, 
                        arg2.byte_offset(0xa8), arg3);
                    std::process::Command::arg::hdfbbb0c642d6ac00(&var_3e8, 
                        arg3.byte_offset(0x150));
                    memcpy(&var_1d8, &var_3e8, 0xe0);
                }
                
                let rsi_14: i64 = *arg3.byte_offset(0x140);
                let rdx_10: i64 = *arg3.byte_offset(0x148);
                std::process::Command::args::h47fc44e4a8bf7289(&var_1d8, rsi_14, rdx_10);
                std::process::Command::current_dir::hfb203bdc96bba19b(&var_1d8, 
                    arg4.byte_offset(0x18));
                var_308 = nullptr;
                let var_2f8_1: i64 = 0;
                let var_2f0_1: *mut i64 = rbp_1;
                let mut r12: i64;
                r12 = 1;
                _$LT$std..process..Command$u20$as$u20$just..command_ext..CommandExt$GT$::export::hbded0bf5acb950b5(&var_1d8, arg2.byte_offset(0xa8), &var_2d8, &var_308, arg2.byte_offset(0x238));
                memcpy(&var_3e8, &var_1d8, 0xe0);
                _$LT$std..process..Command$u20$as$u20$just..command_ext..CommandExt$GT$::status_guard::h0e09d4f2af31801d(&var_2b8, &var_3e8);
                let r15_5: i32 = var_2a8;
                let mut rbp_2: i32;
                
                if (var_2b8 & 1) == 0
                {
                    let var_2b4: i32;
                    rbp_2 = var_2b4;
                    'label_66e1dd:
                    
                    if rbp_2 != 0
                    {
                        _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&var_3e8, *arg3.byte_offset(0x158), *arg3.byte_offset(0x160));
                        var_2a8 = rax;
                        var_2b8 = var_3e8;
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h828044586946af78(&var_3e8, rsi_14, rdx_10);
                        *arg1.byte_offset(0x18) = var_2a8;
                        *arg1.byte_offset(8) = var_2b8;
                        *arg1.byte_offset(0x20) = var_3e8;
                        *arg1.byte_offset(0x30) = rax;
                        *arg1 = 0xb;
                        *arg1.byte_offset(4) = rbp_2;
                    }
                    else if r15_5 == 0
                    {
                        *arg1 = 0x38;
                    }
                    else
                    {
                        *arg1 = 0x1e;
                        *arg1.byte_offset(4) = r15_5;
                    }
                }
                else
                {
                    let var_2b0: i64;
                    just::justfile::Justfile::run::_$u7b$$u7b$closure$u7d$$u7d$::h500eb1357fdc462c(
                        &var_3e8, *arg3.byte_offset(0x158), *arg3.byte_offset(0x160), rsi_14, 
                        rdx_10, var_2b0);
                    let rax_19: i8 = var_3e8;
                    var_400 = *var_3e8[1];
                    rbp_2 = *var_3e8[4];
                    var_2b8 = result;
                    var_2a8 = rcx;
                    let var_298_1: i128 = var_3c0;
                    let var_288_1: i128 = rcx;
                    let var_278_1: i128 = arg2;
                    
                    if rax_19 == 0x38
                    {
                        goto 'label_66e1dd;
                    }
                    
                    arg1[3] = *var_3e8[3];
                    *arg1.byte_offset(1) = var_400;
                    *arg1.byte_offset(8) = var_2b8;
                    *arg1.byte_offset(0x18) = var_2a8;
                    *arg1.byte_offset(0x28) = var_298_1;
                    *arg1.byte_offset(0x38) = var_288_1;
                    *arg1.byte_offset(0x48) = var_278_1;
                    *arg1.byte_offset(0x58) = var_398;
                    *arg1 = rax_19;
                    *arg1.byte_offset(4) = rbp_2;
                }
                core::ptr::drop_in_place$LT$just..scope..Scope$GT$::h7ff7b84fe4911a9f(&var_308);
                goto 'label_66e78d;
            }
            
            let mut var_1c9: i128;
            
            if rax_8 == 6
            {
                if *arg3.byte_offset(0x140) != -0x8000000000000000
                {
                    let r15_4: i64 = *arg3.byte_offset(0x148);
                    let r12_1: u64 = *arg3.byte_offset(0x150);
                    let mut rax_18: i64;
                    let mut rdx_9: i64;
                    rax_18 = just::scope::Scope::value::hb06d4bb986c3514e(rbp_1, r15_4, r12_1);
                    
                    if rax_18 == 0
                    {
                        just::justfile::Justfile::suggest_variable::h768f9f50c733e0a8(&var_1d8, 
                            arg2, r15_4, r12_1);
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_2b8, arg3.byte_offset(0x140));
                        *arg1.byte_offset(0x38) = var_2a8;
                        *arg1.byte_offset(0x28) = var_2b8;
                        *var_3e8[7] = var_1d8;
                        let mut var_3d8: i64;
                        *var_3d8[7] = var_1c9;
                        *arg1 = 0x15;
                        *arg1.byte_offset(1) = var_3e8;
                        *arg1.byte_offset(0x11) = var_3d8;
                        *arg1.byte_offset(0x20) = rcx;
                    }
                    else
                    {
                        var_2b8 = rax_18;
                        let var_2b0_1: i64 = rdx_9;
                        var_1d8 = &var_2b8;
                        *var_1d8[8] =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
                        var_3e8 = &data_465db0;
                        let var_3e0: i64 = 1;
                        let var_3c8_1: i64 = 0;
                        let var_3d8_1: *mut i128 = &var_1d8;
                        let var_3d0_1: i64 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_3e8);
                        *arg1 = 0x38;
                    }
                }
                else
                {
                    let rax_9: i64 = *rbp_1;
                    let mut rcx_7: i64;
                    let mut zmm0_4: i128;
                    
                    if rax_9 == 0
                    {
                        zmm0_4 = {0};
                        rcx_7 = 0;
                    }
                    else
                    {
                        zmm0_4 = *rbp_1.byte_offset(8);
                        rcx_7 = 1;
                    }
                    
                    let mut var_d0: i64 = rcx_7;
                    let var_c8_1: i64 = 0;
                    let var_c0_1: i64 = rax_9;
                    let var_b8_1: i64 = zmm0_4;
                    let var_b0_1: i64 = rcx_7;
                    let var_a8_1: i64 = 0;
                    let var_a0_1: i64 = rax_9;
                    let var_98_1: i128 = zmm0_4;
                    let rax_24: i64 =
                        core::iter::traits::iterator::Iterator::fold::ha230720025cbcf4e(&var_d0);
                    let rax_25: i64 = *rbp_1;
                    let mut rcx_20: *mut i8;
                    let mut zmm0_11: i128;
                    
                    if rax_25 == 0
                    {
                        zmm0_11 = {0};
                        rcx_20 = nullptr;
                    }
                    else
                    {
                        zmm0_11 = *rbp_1.byte_offset(8);
                        rcx_20 = 1;
                    }
                    
                    var_3e8 = rcx_20;
                    let var_3e0_1: i64 = 0;
                    let var_3d8_2: i64 = rax_25;
                    let var_3d0_2: i64 = zmm0_11;
                    let var_3c8_2: *mut i8 = rcx_20;
                    let var_3c0_1: i64 = 0;
                    let var_3b8_1: i64 = rax_25;
                    let mut var_3b0: i64;
                    var_3b0 = zmm0_11;
                    
                    if rax_24 > 0xffff
                    {
                        loop
                        {
                            let mut rax_30: i64;
                            let mut rdx_22: *mut c_void;
                            rax_30 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4d1d04c89b6ca8e6(&var_3e8);
                            
                            if rax_30 == 0
                            {
                                break;
                            }
                            
                            if rdx_22 == 0
                            {
                                break;
                            }
                            
                            if *rdx_22.byte_offset(0x66) == 0
                            {
                                let mut rax_31: *mut c_void;
                                let mut rdx_24: i64;
                                rax_31 = just::token::Token::lexeme::h66587cdf67f63270(rdx_22.
                                    byte_offset(0x18));
                                var_400 = rax_31;
                                let var_3f8_2: i64 = rdx_24;
                                var_1d8 = &data_82ce08;
                                *var_1d8[8] = 1;
                                *var_1c9[1] = 8;
                                var_1c9 = {0};
                                core::panicking::panic_fmt::h96f341d36638c225(&var_1d8);
                                /* no return */
                            }
                        }
                    }
                    else
                    {
                        loop
                        {
                            let mut rax_28: i64;
                            let mut rdx_20: *mut c_void;
                            rax_28 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4d1d04c89b6ca8e6(&var_3e8);
                            
                            if rax_28 == 0
                            {
                                break;
                            }
                            
                            if rdx_20 == 0
                            {
                                break;
                            }
                            
                            if *rdx_20.byte_offset(0x66) == 0
                            {
                                let mut rax_29: *mut c_void;
                                let mut rdx_21: i64;
                                rax_29 = just::token::Token::lexeme::h66587cdf67f63270(rdx_20.
                                    byte_offset(0x18));
                                var_400 = rax_29;
                                let var_3f8_1: i64 = rdx_21;
                                var_2b8 = &var_400;
                                let var_2b0_2: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
                                var_2a8 = rdx_20;
                                let var_2a0_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                                let mut var_298: i128;
                                var_298 = 0;
                                *var_298[8] = rax_24;
                                var_308 = &data_8301a8;
                                let var_300_2: i64 = 3;
                                let var_2e8_1: *mut c_void = &data_471130;
                                let var_2e0_1: i64 = 2;
                                let var_2f8_2: *mut i8 = &var_2b8;
                                let var_2f0_3: i64 = 3;
                                std::io::stdio::_print::h5e446ff973c02de6(&var_308);
                            }
                        }
                    }
                    
                    *arg1 = 0x38;
                }
                
                goto 'label_66e78d;
            }
            
            let mut var_1f0: i64;
            core::iter::traits::iterator::Iterator::collect::hd7d28e57b04694ba(&var_1f0, arg6);
            let var_1e8: i64;
            let var_1e0: i64;
            just::argument_parser::ArgumentParser::parse_arguments::hcf80b6b83f04fab6(&var_3e8, 
                arg2, var_1e8, var_1e0);
            let rax_12: i8 = var_3e8;
            
            if rax_12 != 0x38
            {
                var_1d8 = *var_3e8[1];
                *arg1.byte_offset(0x60) = var_388;
                *arg1.byte_offset(0x50) = var_398;
                *arg1.byte_offset(0x40) = rsi;
                *arg1.byte_offset(0x30) = rax;
                *arg1.byte_offset(0x20) = rdx;
                *arg1.byte_offset(0x10) = rax;
                *arg1.byte_offset(1) = var_1d8;
                *arg1 = rax_12;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(var_1f0, var_1e8);
                goto 'label_66e78d;
            }
            
            let mut var_208: i128 = result;
            let var_1f8_1: i64 = rcx;
            let mut var_238: i64 = 0;
            let var_230_1: i64 = 8;
            let var_228_1: i64 = 0;
            
            if rcx != 0
            {
                let r15_3: i64 = *var_208[8];
                let mut i: i64 = 0;
                
                do
                {
                    just::justfile::Justfile::invocation::h7dbacef274c6ed0e(&var_3e8, arg2, 
                        *(r15_3 + i + 8), *(r15_3 + i + 0x10), *(r15_3 + i + 0x20), 
                        *(r15_3 + i + 0x28), 0);
                    let rax_16: i8 = var_3e8;
                    
                    if rax_16 != 0x38
                    {
                        var_1d8 = *var_3e8[1];
                        *arg1.byte_offset(0x58) = var_398;
                        *arg1.byte_offset(0x48) = arg2;
                        *arg1.byte_offset(0x38) = rcx;
                        *arg1.byte_offset(0x28) = var_3c0;
                        *arg1.byte_offset(0x20) = rdx;
                        let zmm0_6: i128 = var_1d8;
                        *arg1.byte_offset(0x11) = *rax[1];
                        *arg1.byte_offset(1) = zmm0_6;
                        *arg1 = rax_16;
                        goto 'label_66e6cb;
                    }
                    
                    var_1c9 = rcx;
                    var_1d8 = result;
                    let mut var_88: i128 = var_1d8;
                    let var_78_1: i128 = var_1c9;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hccff6a8e265ff87e(&var_238, &var_88);
                    i += 0x30;
                } while rcx * 0x30 != i;
            }
            
            if *arg3.byte_offset(0x1a0) != 0 && var_228_1 >= 2
            {
                *arg1 = 0x16;
                *arg1.byte_offset(8) = var_228_1;
                'label_66e6cb:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..justfile..Invocation$GT$$GT$::h40b6867bb2dc82a5(&var_238);
                'label_66e770:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..argument_parser..ArgumentGroup$GT$$GT$::h723770c4ad86c3c3(&var_208);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(var_1f0, var_1e8);
                goto 'label_66e78d;
            }
            
            var_308 = 0;
            *var_308[4] = 0;
            let var_300_1: i64 = 0;
            let var_2f0_2: i64 = 0;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h4a43cbe8819ee2ea(&var_2b8, &var_238);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcdb832d90bc0aa2f(&var_1d8, &var_2b8);
            let mut r13_2: i64 = var_1d8;
            
            if r13_2 != -0x8000000000000000
            {
                loop
                {
                    let rbp_3: i64 = *var_1d8[8];
                    core::iter::traits::iterator::Iterator::collect::hb7e8c019ce75787d(&var_400, 
                        rbp_3);
                    let var_3f8: *mut c_void;
                    let var_3f0: i64;
                    just::justfile::Justfile::run_recipe::h13dd814e0c2e2885(&var_3e8, var_3f8, 
                        var_3f0, arg3, &var_2d8, 0, &var_308, *var_1c9[9], &var_250, arg4);
                    let rax_23: i8 = var_3e8;
                    
                    if rax_23 != 0x38
                    {
                        *arg1.byte_offset(0x60) = var_388;
                        *arg1.byte_offset(0x51) = var_398;
                        *arg1.byte_offset(0x41) = *rsi[1];
                        let zmm0_10: i128 = *var_3e8[1];
                        *arg1.byte_offset(0x31) = *rax[1];
                        *arg1.byte_offset(0x21) = *rdx[1];
                        *arg1.byte_offset(0x11) = *rax[1];
                        *arg1.byte_offset(1) = zmm0_10;
                        *arg1 = rax_23;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_400);
                        core::ptr::drop_in_place$LT$just..justfile..Invocation$GT$::hbdbe404d2ce59abc(r13_2, rbp_3);
                        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$just..justfile..Invocation$GT$$GT$::hb9dce2d48e39b98b(&var_2b8);
                        core::ptr::drop_in_place$LT$just..ran..Ran$GT$::h351cc0e2f6e1536f(&var_308);
                        break;
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_400);
                    core::ptr::drop_in_place$LT$just..justfile..Invocation$GT$::hbdbe404d2ce59abc(
                        r13_2, rbp_3);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcdb832d90bc0aa2f(&var_1d8, &var_2b8);
                    r13_2 = var_1d8;
                    
                    if r13_2 == -0x8000000000000000
                    {
                        goto 'label_66e3a6;
                    }
                }
                
                goto 'label_66e770;
            }
            
            'label_66e3a6:
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$just..justfile..Invocation$GT$$GT$::hb9dce2d48e39b98b(&var_2b8);
            *arg1 = 0x38;
            core::ptr::drop_in_place$LT$just..ran..Ran$GT$::h351cc0e2f6e1536f(&var_308);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..argument_parser..ArgumentGroup$GT$$GT$::h723770c4ad86c3c3(&var_208);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(var_1f0, var_1e8);
            core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$$LP$$RF$just..justfile..Justfile$C$$RF$just..scope..Scope$RP$$GT$$GT$::h32af9d5b63dc3081(&var_250);
            core::ptr::drop_in_place$LT$typed_arena..Arena$LT$just..scope..Scope$GT$$GT$::h663a7193296ae013(&var_68);
            core::ptr::drop_in_place$LT$just..scope..Scope$GT$::h7ff7b84fe4911a9f(&var_f0);
            core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$alloc..string..String$GT$$GT$::ha376ddf44fdc42b7(&var_2d8);
        }
    }
    else
    {
        just::load_dotenv::load_dotenv::h65248fa26d942f27(&var_3e8, arg3, arg2.byte_offset(0xa8), 
            *arg4.byte_offset(0x20), *arg4.byte_offset(0x28));
        let rax_4: i8 = var_3e8;
        
        if rax_4 == 0x38
        {
            var_2d8 = result;
            let var_2c8_1: i64 = rcx;
            goto 'label_66db68;
        }
        
        var_1d8 = *var_3e8[1];
        *arg1.byte_offset(0x60) = var_388;
        *arg1.byte_offset(0x50) = var_398;
        *arg1.byte_offset(0x40) = rsi;
        *arg1.byte_offset(0x30) = rax;
        *arg1.byte_offset(0x20) = rdx;
        *arg1.byte_offset(0x10) = rax;
        *arg1.byte_offset(1) = var_1d8;
        *arg1 = rax_4;
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(
        &var_220)
}
