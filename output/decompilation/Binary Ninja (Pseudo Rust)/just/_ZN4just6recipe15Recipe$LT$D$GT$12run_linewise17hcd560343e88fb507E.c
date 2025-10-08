
  fn just::recipe::Recipe$LT$D$GT$::run_linewise::hcd560343e88fb507(arg1: *mut i8, arg2: *mut c_void, arg3: *mut i64, arg4: *mut c_void, arg5: i64, arg6: i64, arg7: *mut i64) -> i64

{
    let rax: *mut c_void = *arg2.byte_offset(8);
    let rcx_2: *mut c_void = (*arg2.byte_offset(0x10) << 5) + rax;
    let mut var_338: *mut c_void = rax;
    let mut var_348: i64 = 0;
    let r14: i64 = *arg2.byte_offset(0xc0);
    
    if *core::option::Option$LT$T$GT$::get_or_insert_with::hca198ddf3f46da3d(&var_348, &var_338)
        == 0
    {
        'label_6847eb:
        *arg1 = 0x38;
    }
    else
    {
        let mut r14_1: i64 = r14 + 1;
        let mut rbp_1: *mut c_void = arg3[2];
        let rcx_4: *mut c_void = *arg3;
        let rdx: *mut i64 = arg3[1];
        let rdx_1: i8 = *arg2.byte_offset(0xfd);
        let rax_5: *mut c_void = rbp_1.byte_offset(0xa8);
        let rax_6: *mut c_void = arg3[3];
        let rax_7: *mut c_void = rbp_1.byte_offset(0x238);
        let var_310_1: *mut c_void = rbp_1;
        
        loop
        {
            let mut var_2d0: i64 = 0;
            let var_2c8_1: *mut i8 = 1;
            let var_2c0_1: i64 = 0;
            let rax_10: *mut c_void = *
                core::option::Option$LT$T$GT$::get_or_insert_with::hca198ddf3f46da3d(&var_348, 
                &var_338);
            let mut r13_1: i8;
            
            if rax_10 == 0
            {
                r13_1 = 0;
            }
            else
            {
                r13_1 = just::line::Line::is_quiet::h3a5d44d89007f671(*rax_10.byte_offset(8), 
                    *rax_10.byte_offset(0x10));
            }
            
            let rax_13: *mut c_void = *
                core::option::Option$LT$T$GT$::get_or_insert_with::hca198ddf3f46da3d(&var_348, 
                &var_338);
            let mut var_354_1: i8;
            let mut rbx_1: i8;
            
            if rax_13 == 0
            {
                var_354_1 = 0;
                
                if *rbp_1.byte_offset(0x1e7) != 1
                {
                    rbx_1 = 0;
                }
                else
                {
                    'label_683f7c:
                    let rax_16: *mut c_void = *
                        core::option::Option$LT$T$GT$::get_or_insert_with::hca198ddf3f46da3d(
                        &var_348, &var_338);
                    
                    if rax_16 == 0
                    {
                        rbx_1 = 0;
                    }
                    else
                    {
                        rbx_1 = just::line::Line::is_comment::h9a81c927aacfe8c9(
                            *rax_16.byte_offset(8), *rax_16.byte_offset(0x10));
                    }
                }
            }
            else
            {
                var_354_1 = just::line::Line::is_infallible::h6abb30f774dbfe3f(
                    *rax_13.byte_offset(8), *rax_13.byte_offset(0x10));
                
                if *rbp_1.byte_offset(0x1e7) == 1
                {
                    goto 'label_683f7c;
                }
                
                rbx_1 = 0;
            }
            
            let mut var_320_1: i64;
            let mut var_308: i128;
            let mut var_2f8: i32;
            let mut var_228: i8;
            let mut var_227: i128;
            let mut var_210: i64;
            let mut var_208: i128;
            let mut var_118: i128;
            let mut var_109: i128;
            
            if *core::option::Option$LT$T$GT$::get_or_insert_with::hca198ddf3f46da3d(&var_348, 
                &var_338) == 0
            {
                'label_684220:
                var_320_1 = r14_1;
                
                if rbx_1 == 0
                {
                    'label_684249:
                    let r15_4: u64 = r13_1 + var_354_1;
                    let mut rax_31: *mut c_void;
                    let mut rdx_9: i64;
                    rax_31 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r15_4, var_2c8_1, var_2c0_1);
                    
                    if rax_31 == 0
                    {
                        core::str::slice_error_fail::h1a2885084e28d077(var_2c8_1, var_2c0_1, r15_4, 
                            var_2c0_1);
                        /* no return */
                    }
                    
                    if rdx_9 == 0
                    {
                        rbp_1 = var_310_1;
                    }
                    else
                    {
                        let mut r14_5: *mut c_void = rcx_4;
                        rbp_1 = var_310_1;
                        
                        if *r14_5.byte_offset(0x198) != 0
                        {
                            'label_6842ab:
                            
                            if *r14_5.byte_offset(0x19b) == 0
                            {
                                *var_227[0xf] = *rcx_4.byte_offset(0x194);
                                var_228 = *rcx_4.byte_offset(0x184);
                            }
                            else
                            {
                                let rcx_9: i8 = *r14_5.byte_offset(0x195);
                                let rdx_10: i32 = *r14_5.byte_offset(0x180);
                                var_228 = *r14_5.byte_offset(0x184);
                                var_227 = 1;
                                *var_227[4] = 0;
                                *var_227[1] = 0;
                                *var_227[8] = rdx_10;
                                *var_227[0xc] = 0xa;
                                let var_217_1: i8 = rcx_9;
                            }
                            
                            let mut var_2b2: i8;
                            just::color::Color::stderr::h04afff4548ac818e(&var_2b2, &var_228);
                            let mut zmm0_2: u128;
                            let mut zmm1_2: i64;
                            let var_2b1: i64;
                            let var_2a9: i64;
                            let var_2a1: i8;
                            let mut r14_6: u32;
                            
                            if *r14_5.byte_offset(0x1a2) == 0
                            {
                                r14_6 = var_2a1;
                                
                                if r14_6 != 0
                                {
                                    'label_684545:
                                    zmm0_2 = {0};
                                    
                                    if r14_6 != 1
                                    {
                                        zmm1_2 = *"\n"[0];
                                    }
                                    else
                                    {
                                        zmm1_2 = *"\n"[0];
                                        
                                        if var_2b2 == 1
                                        {
                                            zmm0_2 = var_2b1;
                                            zmm1_2 = var_2a9;
                                        }
                                    }
                                }
                                else
                                {
                                    zmm0_2 = var_2b1;
                                    zmm1_2 = var_2a9;
                                }
                            }
                            else
                            {
                                let mut var_128: ();
                                chrono::offset::local::Local::now::h41ddf45366a21dac(&var_128);
                                var_118 = *rcx_4.byte_offset(0x68);
                                *var_109[1] = 8;
                                *var_109[9] = 0;
                                let mut var_f8_1: i8 = 0;
                                chrono::datetime::DateTime$LT$Tz$GT$::format_with_items::h14b63f323818dc79(&var_228, &var_128, &var_118);
                                let mut var_250: ();
                                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h7a0253cb9a868533(&var_250, &var_228);
                                r14_6 = var_2a1;
                                let mut zmm0_4: u128;
                                let mut zmm1_3: i64;
                                
                                if r14_6 == 0
                                {
                                    zmm0_4 = var_2b1;
                                    zmm1_3 = var_2a9;
                                }
                                else
                                {
                                    zmm0_4 = {0};
                                    
                                    if r14_6 != 1
                                    {
                                        zmm1_3 = *"\n"[0];
                                    }
                                    else
                                    {
                                        zmm1_3 = *"\n"[0];
                                        
                                        if var_2b2 == 1
                                        {
                                            zmm0_4 = var_2b1;
                                            zmm1_3 = var_2a9;
                                        }
                                    }
                                }
                                
                                let var_2f0_1: u128 = zmm0_4 | zmm1_3 << 0x40;
                                var_308 = -0x8000000000000000;
                                let var_248: i64;
                                *var_308[8] = var_248;
                                let var_240: i32;
                                var_2f8 = var_240;
                                let mut var_238: *mut i128 = &var_308;
                                let var_230_1: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h246055d15162f7c1;
                                var_118 = &data_830bf0;
                                *var_118[8] = 2;
                                var_f8_1 = 0;
                                *var_109[1] = &var_238;
                                *var_109[9] = 1;
                                std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
                                core::ptr::drop_in_place$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$GT$::h67f49c18e7cd0b03(&var_308);
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_250);
                                core::ptr::drop_in_place$LT$chrono..format..formatting..DelayedFormat$LT$chrono..format..strftime..StrftimeItems$GT$$GT$::h832ee16fadc7d71f(&var_228);
                                
                                if r14_6 != 0
                                {
                                    goto 'label_684545;
                                }
                                
                                zmm0_2 = var_2b1;
                                zmm1_2 = var_2a9;
                            }
                            var_109 = zmm0_2 | zmm1_2 << 0x40;
                            var_118 = -0x8000000000000000;
                            *var_118[8] = rax_31;
                            *var_109[1] = rdx_9;
                            var_308 = &var_118;
                            *var_308[8] = _$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h246055d15162f7c1;
                            var_228 = &data_82dbd8;
                            *var_227[7] = 2;
                            var_208 = 0;
                            *var_227[0xf] = &var_308;
                            var_210 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_228);
                            core::ptr::drop_in_place$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$GT$::h67f49c18e7cd0b03(&var_118);
                            r14_5 = rcx_4;
                        }
                        else
                        {
                            let mut rax_32: i8 = *r14_5.byte_offset(0x1a7);
                            
                            if rax_32 >= 2
                            {
                                goto 'label_6842ab;
                            }
                            
                            if ((r13_1 ^ rdx_1) & 1) == 0
                            {
                                if *rbp_1.byte_offset(0x1ea) == 0
                                {
                                    goto 'label_68445a;
                                }
                                
                                r14_5 = rcx_4;
                                
                                if just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(
                                    arg2.byte_offset(0xd8), 0xb) != 0
                                {
                                    rax_32 = *r14_5.byte_offset(0x1a7);
                                    'label_68445a:
                                    
                                    if rax_32 != 0
                                    {
                                        goto 'label_6842ab;
                                    }
                                }
                            }
                        }
                        
                        if *r14_5.byte_offset(0x198) == 0
                        {
                            just::settings::Settings::shell_command::h194009976e056ef8(&var_118, 
                                rax_5, r14_5);
                            let mut var_140: i64;
                            just::recipe::Recipe$LT$D$GT$::working_directory::hac15927441629eaf(
                                &var_140, arg2, rbp_1, rax_6);
                            
                            if var_140 != -0x8000000000000000
                            {
                                std::process::Command::current_dir::hb900367fa6eef4b5(&var_118, 
                                    &var_140);
                            }
                            
                            std::process::Command::arg::h20b967969329bd8e(&var_118, rax_31);
                            let mut rax_40: i8;
                            let mut rdx_15: i32;
                            
                            if *rbp_1.byte_offset(0x1e9) == 0
                            {
                                rax_40 =
                                    just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(
                                    arg2.byte_offset(0xd8), 0xe);
                            }
                            
                            if *rbp_1.byte_offset(0x1e9) != 0 || rax_40 != 0
                            {
                                std::process::Command::arg::h20b967969329bd8e(&var_118, 
                                    just::token::Token::lexeme::h66587cdf67f63270(arg2.
                                        byte_offset(0x90)));
                                rdx_15 = std::process::Command::args::hc5540de655bfe19a(&var_118, 
                                    arg5, arg6);
                            }
                            
                            if *rcx_4.byte_offset(0x1a7) == 0
                            {
                                std::process::Command::stdout::h735b5e124ef77713(&var_118, 1, 
                                    std::process::Command::stderr::h9fed92c06b70fc7e(&var_118, 1, 
                                        rdx_15));
                            }
                            
                            _$LT$std..process..Command$u20$as$u20$just..command_ext..CommandExt$GT$::export::hbded0bf5acb950b5(&var_118, rax_5, rdx, arg4, rax_7);
                            memcpy(&var_228, &var_118, 0xe0);
                            _$LT$std..process..Command$u20$as$u20$just..command_ext..CommandExt$GT$::status_guard::h0e09d4f2af31801d(&var_308, &var_228);
                            var_228 = var_308;
                            
                            if var_228 == 1
                            {
                                let rbx_5: i64 = *var_227[7];
                                var_308 = rbx_5;
                                let mut rax_46: *mut c_void;
                                let mut rdx_21: i64;
                                rax_46 = just::token::Token::lexeme::h66587cdf67f63270(arg2.
                                    byte_offset(0x90));
                                *arg1 = 0x1f;
                                *arg1.byte_offset(8) = rax_46;
                                *arg1.byte_offset(0x10) = rdx_21;
                                *arg1.byte_offset(0x18) = rbx_5;
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_2d0);
                                break;
                            }
                            
                            let r15_5: i32 = *var_227[3];
                            let rbx_4: i32 = r15_5 & 0x7f;
                            let mut rcx_18: *mut i8;
                            
                            if rbx_4 == 0
                            {
                                let r15_7: u32 = r15_5 >> 8;
                                
                                if (r15_7 == 0 | var_354_1) == 0
                                {
                                    let mut rax_48: *mut c_void;
                                    let mut rdx_23: i64;
                                    rax_48 = just::token::Token::lexeme::h66587cdf67f63270(arg2.
                                        byte_offset(0x90));
                                    let rax_50: i8 = just::recipe::Recipe$LT$D$GT$::print_exit_message::he133fff8607c7ca6(arg2, *var_310_1.byte_offset(0x1e8));
                                    rcx_18 = arg1;
                                    *rcx_18 = 9;
                                    rcx_18[1] = rax_50;
                                    *rcx_18.byte_offset(4) = r15_7;
                                    *rcx_18.byte_offset(8) = rax_48;
                                    *rcx_18.byte_offset(0x10) = rdx_23;
                                    'label_68493b:
                                    *rcx_18.byte_offset(0x18) = 1;
                                    *rcx_18.byte_offset(0x20) = var_320_1;
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_2d0);
                                    break;
                                }
                                
                                if (var_354_1 | var_2f8 == 0) == 0
                                {
                                    *arg1 = 0x1e;
                                    *arg1.byte_offset(4) = var_2f8;
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_2d0);
                                    break;
                                }
                                
                                rbp_1 = var_310_1;
                            }
                            else
                            {
                                if var_354_1 == 0
                                {
                                    let mut rax_47: *mut c_void;
                                    let mut rdx_22: i64;
                                    rax_47 = just::token::Token::lexeme::h66587cdf67f63270(arg2.
                                        byte_offset(0x90));
                                    let mut rsi_31: i8 = 0x32;
                                    
                                    if rbx_4 + 1 >= 2
                                    {
                                        rsi_31 = 0x2c;
                                    }
                                    
                                    rcx_18 = arg1;
                                    *rcx_18 = rsi_31;
                                    *rcx_18.byte_offset(4) = rbx_4;
                                    *rcx_18.byte_offset(8) = rax_47;
                                    *rcx_18.byte_offset(0x10) = rdx_22;
                                    goto 'label_68493b;
                                }
                                
                                rbp_1 = var_310_1;
                            }
                        }
                    }
                }
            }
            else
            {
                let rax_19: i8 = var_348;
                let var_340: *mut c_void;
                let mut r15_1: *mut c_void = var_340;
                var_348 = 0;
                
                if rbx_1 == 0
                {
                    if (rax_19 & 1) == 0
                    {
                        r15_1 = var_338;
                        
                        if r15_1 == rcx_2
                        {
                            'label_684983:
                            core::option::unwrap_failed::h893f57cb7db71cb7();
                            /* no return */
                        }
                        
                        var_338 = r15_1.byte_offset(0x20);
                    }
                    else if r15_1 == 0
                    {
                        goto 'label_684983;
                    }
                    
                    just::evaluator::Evaluator::evaluate_line::hdd6d3ca4461d16bf(&var_228, arg7, 
                        *r15_1.byte_offset(8), *r15_1.byte_offset(0x10), 0);
                    let mut rax_22: i8 = var_228;
                    
                    if rax_22 == 0x38
                    {
                        *var_109[8] = var_210;
                        var_118 = var_227;
                        var_308 = var_118;
                        let rdx_3: i64 = *var_109[8];
                        var_2f8 = rdx_3;
                        let rsi_11: i64 = *var_308[8];
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb25a112a407b21ec(&var_2d0, rsi_11, rdx_3 + rsi_11);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(
                            &var_308);
                        var_320_1 = r14_1 + 1;
                        
                        if just::line::Line::is_continuation::h5ed80636f0322bb6(
                            *r15_1.byte_offset(8), *r15_1.byte_offset(0x10)) == 0
                        {
                            goto 'label_684249;
                        }
                        
                        alloc::string::String::pop::h86cb5b5bb86d0e70(&var_2d0);
                        
                        if *core::option::Option$LT$T$GT$::get_or_insert_with::hca198ddf3f46da3d(
                            &var_348, &var_338) == 0
                        {
                            goto 'label_684249;
                        }
                        
                        let mut rcx_7: i64 = r14_1 + 2;
                        
                        loop
                        {
                            r14_1 = rcx_7;
                            let mut r15_2: *mut c_void = var_340;
                            let cond:5_1: bool = (var_348 & 1) == 0;
                            var_348 = 0;
                            
                            if cond:5_1
                            {
                                r15_2 = var_338;
                                
                                if r15_2 == rcx_2
                                {
                                    goto 'label_684983;
                                }
                                
                                var_338 = r15_2.byte_offset(0x20);
                            }
                            else if r15_2 == 0
                            {
                                goto 'label_684983;
                            }
                            
                            just::evaluator::Evaluator::evaluate_line::hdd6d3ca4461d16bf(&var_228, 
                                arg7, *r15_2.byte_offset(8), *r15_2.byte_offset(0x10), 1);
                            rax_22 = var_228;
                            
                            if rax_22 != 0x38
                            {
                                break;
                            }
                            
                            *var_109[8] = var_210;
                            var_118 = var_227;
                            var_308 = var_118;
                            let rdx_6: i64 = *var_109[8];
                            var_2f8 = rdx_6;
                            let rsi_15: i64 = *var_308[8];
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb25a112a407b21ec(&var_2d0, rsi_15, rdx_6 + rsi_15);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_308);
                            
                            if just::line::Line::is_continuation::h5ed80636f0322bb6(
                                *r15_2.byte_offset(8), *r15_2.byte_offset(0x10)) == 0
                            {
                                var_320_1 = r14_1;
                                
                                if rbx_1 != 0
                                {
                                    goto 'label_683eb0;
                                }
                                
                                goto 'label_684249;
                            }
                            
                            alloc::string::String::pop::h86cb5b5bb86d0e70(&var_2d0);
                            rcx_7 = r14_1 + 1;
                            
                            if *core::option::Option$LT$T$GT$::get_or_insert_with::hca198ddf3f46da3d(&var_348, &var_338) == 0
                            {
                                goto 'label_684220;
                            }
                        }
                    }
                    
                    var_118 = var_227;
                    let var_1c8: i64;
                    *arg1.byte_offset(0x60) = var_1c8;
                    let var_1d8: i128;
                    *arg1.byte_offset(0x50) = var_1d8;
                    let var_1e8: i128;
                    *arg1.byte_offset(0x40) = var_1e8;
                    let var_1f8: i128;
                    *arg1.byte_offset(0x30) = var_1f8;
                    *arg1.byte_offset(0x20) = var_208;
                    *arg1.byte_offset(0x10) = var_227;
                    *arg1.byte_offset(1) = var_118;
                    *arg1 = rax_22;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(
                        &var_2d0);
                    break;
                }
                
                if (rax_19 & 1) == 0
                {
                    r15_1 = var_338;
                    
                    if r15_1 == rcx_2
                    {
                        goto 'label_684983;
                    }
                    
                    var_338 = r15_1.byte_offset(0x20);
                    just::line::Line::is_continuation::h5ed80636f0322bb6(*r15_1.byte_offset(8), 
                        *r15_1.byte_offset(0x10));
                    var_320_1 = r14_1 + 1;
                }
                else
                {
                    if r15_1 == 0
                    {
                        goto 'label_684983;
                    }
                    
                    just::line::Line::is_continuation::h5ed80636f0322bb6(*r15_1.byte_offset(8), 
                        *r15_1.byte_offset(0x10));
                    var_320_1 = r14_1 + 1;
                }
            }
            'label_683eb0:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_2d0);
            r14_1 = var_320_1;
            
            if *core::option::Option$LT$T$GT$::get_or_insert_with::hca198ddf3f46da3d(&var_348, 
                &var_338) == 0
            {
                goto 'label_6847eb;
            }
        }
    }
    
    core::ptr::drop_in_place$LT$just..evaluator..Evaluator$GT$::he8a263daf6e01e97(arg7)
}
