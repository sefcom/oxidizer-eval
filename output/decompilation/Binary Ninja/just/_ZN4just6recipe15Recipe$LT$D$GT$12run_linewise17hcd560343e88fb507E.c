
  int64_t just::recipe::Recipe$LT$D$GT$::run_linewise::hcd560343e88fb507(char* arg1, void* arg2, int64_t* arg3, void* arg4, int64_t arg5, int64_t arg6, int64_t* arg7)

{
    void* rax = *(arg2 + 8);
    void* rcx_2 = (*(arg2 + 0x10) << 5) + rax;
    void* var_338 = rax;
    int64_t var_348 = 0;
    int64_t r14 = *(arg2 + 0xc0);
    
    if (!*core::option::Option$LT$T$GT$::get_or_insert_with::hca198ddf3f46da3d(&var_348, &var_338))
    {
        label_6847eb:
        *arg1 = 0x38;
    }
    else
    {
        int64_t r14_1 = r14 + 1;
        void* rbp_1 = arg3[2];
        void* rcx_4 = *arg3;
        int64_t* rdx = arg3[1];
        char rdx_1 = *(arg2 + 0xfd);
        void* rax_5 = rbp_1 + 0xa8;
        void* rax_6 = arg3[3];
        void* rax_7 = rbp_1 + 0x238;
        void* var_310_1 = rbp_1;
        
        while (true)
        {
            int64_t var_2d0 = 0;
            char* var_2c8_1 = 1;
            int64_t var_2c0_1 = 0;
            void* rax_10 = *core::option::Option$LT$T$GT$::get_or_insert_with::hca198ddf3f46da3d(
                &var_348, &var_338);
            char r13_1;
            
            if (!rax_10)
                r13_1 = 0;
            else
                r13_1 =
                    just::line::Line::is_quiet::h3a5d44d89007f671(*(rax_10 + 8), *(rax_10 + 0x10));
            
            void* rax_13 = *core::option::Option$LT$T$GT$::get_or_insert_with::hca198ddf3f46da3d(
                &var_348, &var_338);
            char var_354_1;
            char rbx_1;
            
            if (!rax_13)
            {
                var_354_1 = 0;
                
                if (*(rbp_1 + 0x1e7) != 1)
                    rbx_1 = 0;
                else
                {
                    label_683f7c:
                    void* rax_16 = *
                        core::option::Option$LT$T$GT$::get_or_insert_with::hca198ddf3f46da3d(
                        &var_348, &var_338);
                    
                    if (!rax_16)
                        rbx_1 = 0;
                    else
                        rbx_1 = just::line::Line::is_comment::h9a81c927aacfe8c9(*(rax_16 + 8), 
                            *(rax_16 + 0x10));
                }
            }
            else
            {
                var_354_1 = just::line::Line::is_infallible::h6abb30f774dbfe3f(*(rax_13 + 8), 
                    *(rax_13 + 0x10));
                
                if (*(rbp_1 + 0x1e7) == 1)
                    goto label_683f7c;
                
                rbx_1 = 0;
            }
            
            int64_t var_320_1;
            int128_t var_308;
            int32_t var_2f8;
            char var_228;
            int128_t var_227;
            int64_t var_210;
            int128_t var_208;
            int128_t var_118;
            int128_t var_109;
            
            if (!*core::option::Option$LT$T$GT$::get_or_insert_with::hca198ddf3f46da3d(&var_348, 
                &var_338))
            {
                label_684220:
                var_320_1 = r14_1;
                
                if (!rbx_1)
                {
                    label_684249:
                    uint64_t r15_4 = r13_1 + var_354_1;
                    void* rax_31;
                    int64_t rdx_9;
                    rax_31 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r15_4, var_2c8_1, var_2c0_1);
                    
                    if (!rax_31)
                    {
                        core::str::slice_error_fail::h1a2885084e28d077(var_2c8_1, var_2c0_1, r15_4, 
                            var_2c0_1);
                        /* no return */
                    }
                    
                    if (!rdx_9)
                        rbp_1 = var_310_1;
                    else
                    {
                        void* r14_5 = rcx_4;
                        rbp_1 = var_310_1;
                        
                        if (*(r14_5 + 0x198))
                        {
                            label_6842ab:
                            
                            if (!*(r14_5 + 0x19b))
                            {
                                *var_227[0xf] = *(rcx_4 + 0x194);
                                var_228 = *(rcx_4 + 0x184);
                            }
                            else
                            {
                                char rcx_9 = *(r14_5 + 0x195);
                                int32_t rdx_10 = *(r14_5 + 0x180);
                                var_228 = *(r14_5 + 0x184);
                                var_227 = 1;
                                *var_227[4] = 0;
                                *var_227[1] = 0;
                                *var_227[8] = rdx_10;
                                *var_227[0xc] = 0xa;
                                char var_217_1 = rcx_9;
                            }
                            
                            char var_2b2;
                            just::color::Color::stderr::h04afff4548ac818e(&var_2b2, &var_228);
                            uint128_t zmm0_2;
                            int64_t zmm1_2;
                            int64_t var_2b1;
                            int64_t var_2a9;
                            char var_2a1;
                            uint32_t r14_6;
                            
                            if (!*(r14_5 + 0x1a2))
                            {
                                r14_6 = var_2a1;
                                
                                if (r14_6)
                                {
                                    label_684545:
                                    zmm0_2 = {0};
                                    
                                    if (r14_6 != 1)
                                        zmm1_2 = (*"\n")[0];
                                    else
                                    {
                                        zmm1_2 = (*"\n")[0];
                                        
                                        if (var_2b2 == 1)
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
                                void var_128;
                                chrono::offset::local::Local::now::h41ddf45366a21dac(&var_128);
                                var_118 = *(rcx_4 + 0x68);
                                *var_109[1] = 8;
                                *var_109[9] = 0;
                                char var_f8_1 = 0;
                                chrono::datetime::DateTime$LT$Tz$GT$::format_with_items::h14b63f323818dc79(&var_228, &var_128, &var_118);
                                void var_250;
                                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h7a0253cb9a868533(&var_250, &var_228);
                                r14_6 = var_2a1;
                                uint128_t zmm0_4;
                                int64_t zmm1_3;
                                
                                if (!r14_6)
                                {
                                    zmm0_4 = var_2b1;
                                    zmm1_3 = var_2a9;
                                }
                                else
                                {
                                    zmm0_4 = {0};
                                    
                                    if (r14_6 != 1)
                                        zmm1_3 = (*"\n")[0];
                                    else
                                    {
                                        zmm1_3 = (*"\n")[0];
                                        
                                        if (var_2b2 == 1)
                                        {
                                            zmm0_4 = var_2b1;
                                            zmm1_3 = var_2a9;
                                        }
                                    }
                                }
                                
                                uint128_t var_2f0_1 = zmm0_4 | zmm1_3 << 0x40;
                                var_308 = -0x8000000000000000;
                                int64_t var_248;
                                *var_308[8] = var_248;
                                int32_t var_240;
                                var_2f8 = var_240;
                                int128_t* var_238 = &var_308;
                                uint64_t (* var_230_1)(int64_t* arg1, int64_t arg2) = _$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h246055d15162f7c1;
                                var_118 = &data_830bf0;
                                *var_118[8] = 2;
                                var_f8_1 = 0;
                                *var_109[1] = &var_238;
                                *var_109[9] = 1;
                                std::io::stdio::_eprint::h57899770eacec2ad(&var_118);
                                core::ptr::drop_in_place$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$GT$::h67f49c18e7cd0b03(&var_308);
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_250);
                                core::ptr::drop_in_place$LT$chrono..format..formatting..DelayedFormat$LT$chrono..format..strftime..StrftimeItems$GT$$GT$::h832ee16fadc7d71f(&var_228);
                                
                                if (r14_6)
                                    goto label_684545;
                                
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
                            char rax_32 = *(r14_5 + 0x1a7);
                            
                            if (rax_32 >= 2)
                                goto label_6842ab;
                            
                            if (!((r13_1 ^ rdx_1) & 1))
                            {
                                if (!*(rbp_1 + 0x1ea))
                                    goto label_68445a;
                                
                                r14_5 = rcx_4;
                                
                                if (just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(
                                    arg2 + 0xd8, 0xb))
                                {
                                    rax_32 = *(r14_5 + 0x1a7);
                                    label_68445a:
                                    
                                    if (rax_32)
                                        goto label_6842ab;
                                }
                            }
                        }
                        
                        if (!*(r14_5 + 0x198))
                        {
                            just::settings::Settings::shell_command::h194009976e056ef8(&var_118, 
                                rax_5, r14_5);
                            int64_t var_140;
                            just::recipe::Recipe$LT$D$GT$::working_directory::hac15927441629eaf(
                                &var_140, arg2, rbp_1, rax_6);
                            
                            if (var_140 != -0x8000000000000000)
                                std::process::Command::current_dir::hb900367fa6eef4b5(&var_118, 
                                    &var_140);
                            
                            std::process::Command::arg::h20b967969329bd8e(&var_118, rax_31);
                            char rax_40;
                            int32_t rdx_15;
                            
                            if (!*(rbp_1 + 0x1e9))
                                rax_40 =
                                    just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(
                                    arg2 + 0xd8, 0xe);
                            
                            if (*(rbp_1 + 0x1e9) || rax_40)
                            {
                                std::process::Command::arg::h20b967969329bd8e(&var_118, 
                                    just::token::Token::lexeme::h66587cdf67f63270(arg2 + 0x90));
                                rdx_15 = std::process::Command::args::hc5540de655bfe19a(&var_118, 
                                    arg5, arg6);
                            }
                            
                            if (!*(rcx_4 + 0x1a7))
                                std::process::Command::stdout::h735b5e124ef77713(&var_118, 1, 
                                    std::process::Command::stderr::h9fed92c06b70fc7e(&var_118, 1, 
                                        rdx_15));
                            
                            _$LT$std..process..Command$u20$as$u20$just..command_ext..CommandExt$GT$::export::hbded0bf5acb950b5(&var_118, rax_5, rdx, arg4, rax_7);
                            memcpy(&var_228, &var_118, 0xe0);
                            _$LT$std..process..Command$u20$as$u20$just..command_ext..CommandExt$GT$::status_guard::h0e09d4f2af31801d(&var_308, &var_228);
                            var_228 = var_308;
                            
                            if (var_228 == 1)
                            {
                                int64_t rbx_5 = *var_227[7];
                                var_308 = rbx_5;
                                void* rax_46;
                                int64_t rdx_21;
                                rax_46 = just::token::Token::lexeme::h66587cdf67f63270(arg2 + 0x90);
                                *arg1 = 0x1f;
                                *(arg1 + 8) = rax_46;
                                *(arg1 + 0x10) = rdx_21;
                                *(arg1 + 0x18) = rbx_5;
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_2d0);
                                break;
                            }
                            
                            int32_t r15_5 = *var_227[3];
                            int32_t rbx_4 = r15_5 & 0x7f;
                            char* rcx_18;
                            
                            if (!rbx_4)
                            {
                                uint32_t r15_7 = r15_5 >> 8;
                                
                                if (!(!r15_7 | var_354_1))
                                {
                                    void* rax_48;
                                    int64_t rdx_23;
                                    rax_48 =
                                        just::token::Token::lexeme::h66587cdf67f63270(arg2 + 0x90);
                                    char rax_50 = just::recipe::Recipe$LT$D$GT$::print_exit_message::he133fff8607c7ca6(arg2, *(var_310_1 + 0x1e8));
                                    rcx_18 = arg1;
                                    *rcx_18 = 9;
                                    rcx_18[1] = rax_50;
                                    *(rcx_18 + 4) = r15_7;
                                    *(rcx_18 + 8) = rax_48;
                                    *(rcx_18 + 0x10) = rdx_23;
                                    label_68493b:
                                    *(rcx_18 + 0x18) = 1;
                                    *(rcx_18 + 0x20) = var_320_1;
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_2d0);
                                    break;
                                }
                                
                                if (!(var_354_1 | !var_2f8))
                                {
                                    *arg1 = 0x1e;
                                    *(arg1 + 4) = var_2f8;
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_2d0);
                                    break;
                                }
                                
                                rbp_1 = var_310_1;
                            }
                            else
                            {
                                if (!var_354_1)
                                {
                                    void* rax_47;
                                    int64_t rdx_22;
                                    rax_47 =
                                        just::token::Token::lexeme::h66587cdf67f63270(arg2 + 0x90);
                                    char rsi_31 = 0x32;
                                    
                                    if (rbx_4 + 1 >= 2)
                                        rsi_31 = 0x2c;
                                    
                                    rcx_18 = arg1;
                                    *rcx_18 = rsi_31;
                                    *(rcx_18 + 4) = rbx_4;
                                    *(rcx_18 + 8) = rax_47;
                                    *(rcx_18 + 0x10) = rdx_22;
                                    goto label_68493b;
                                }
                                
                                rbp_1 = var_310_1;
                            }
                        }
                    }
                }
            }
            else
            {
                char rax_19 = var_348;
                void* var_340;
                void* r15_1 = var_340;
                var_348 = 0;
                
                if (!rbx_1)
                {
                    if (!(rax_19 & 1))
                    {
                        r15_1 = var_338;
                        
                        if (r15_1 == rcx_2)
                        {
                            label_684983:
                            core::option::unwrap_failed::h893f57cb7db71cb7();
                            /* no return */
                        }
                        
                        var_338 = r15_1 + 0x20;
                    }
                    else if (!r15_1)
                        goto label_684983;
                    
                    just::evaluator::Evaluator::evaluate_line::hdd6d3ca4461d16bf(&var_228, arg7, 
                        *(r15_1 + 8), *(r15_1 + 0x10), 0);
                    char rax_22 = var_228;
                    
                    if (rax_22 == 0x38)
                    {
                        *var_109[8] = var_210;
                        var_118 = var_227;
                        var_308 = var_118;
                        int64_t rdx_3 = *var_109[8];
                        var_2f8 = rdx_3;
                        int64_t rsi_11 = *var_308[8];
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb25a112a407b21ec(&var_2d0, rsi_11, rdx_3 + rsi_11);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(
                            &var_308);
                        var_320_1 = r14_1 + 1;
                        
                        if (!just::line::Line::is_continuation::h5ed80636f0322bb6(*(r15_1 + 8), 
                                *(r15_1 + 0x10)))
                            goto label_684249;
                        
                        alloc::string::String::pop::h86cb5b5bb86d0e70(&var_2d0);
                        
                        if (!*core::option::Option$LT$T$GT$::get_or_insert_with::hca198ddf3f46da3d(
                                &var_348, &var_338))
                            goto label_684249;
                        
                        int64_t rcx_7 = r14_1 + 2;
                        
                        while (true)
                        {
                            r14_1 = rcx_7;
                            void* r15_2 = var_340;
                            bool cond:5_1 = !(var_348 & 1);
                            var_348 = 0;
                            
                            if (cond:5_1)
                            {
                                r15_2 = var_338;
                                
                                if (r15_2 == rcx_2)
                                    goto label_684983;
                                
                                var_338 = r15_2 + 0x20;
                            }
                            else if (!r15_2)
                                goto label_684983;
                            
                            just::evaluator::Evaluator::evaluate_line::hdd6d3ca4461d16bf(&var_228, 
                                arg7, *(r15_2 + 8), *(r15_2 + 0x10), 1);
                            rax_22 = var_228;
                            
                            if (rax_22 != 0x38)
                                break;
                            
                            *var_109[8] = var_210;
                            var_118 = var_227;
                            var_308 = var_118;
                            int64_t rdx_6 = *var_109[8];
                            var_2f8 = rdx_6;
                            int64_t rsi_15 = *var_308[8];
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb25a112a407b21ec(&var_2d0, rsi_15, rdx_6 + rsi_15);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_308);
                            
                            if (!just::line::Line::is_continuation::h5ed80636f0322bb6(*(r15_2 + 8), 
                                *(r15_2 + 0x10)))
                            {
                                var_320_1 = r14_1;
                                
                                if (rbx_1)
                                    goto label_683eb0;
                                
                                goto label_684249;
                            }
                            
                            alloc::string::String::pop::h86cb5b5bb86d0e70(&var_2d0);
                            rcx_7 = r14_1 + 1;
                            
                            if (!*core::option::Option$LT$T$GT$::get_or_insert_with::hca198ddf3f46da3d(&var_348, &var_338))
                                goto label_684220;
                        }
                    }
                    
                    var_118 = var_227;
                    int64_t var_1c8;
                    *(arg1 + 0x60) = var_1c8;
                    int128_t var_1d8;
                    *(arg1 + 0x50) = var_1d8;
                    int128_t var_1e8;
                    *(arg1 + 0x40) = var_1e8;
                    int128_t var_1f8;
                    *(arg1 + 0x30) = var_1f8;
                    *(arg1 + 0x20) = var_208;
                    *(arg1 + 0x10) = var_227;
                    *(arg1 + 1) = var_118;
                    *arg1 = rax_22;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(
                        &var_2d0);
                    break;
                }
                
                if (!(rax_19 & 1))
                {
                    r15_1 = var_338;
                    
                    if (r15_1 == rcx_2)
                        goto label_684983;
                    
                    var_338 = r15_1 + 0x20;
                    just::line::Line::is_continuation::h5ed80636f0322bb6(*(r15_1 + 8), 
                        *(r15_1 + 0x10));
                    var_320_1 = r14_1 + 1;
                }
                else
                {
                    if (!r15_1)
                        goto label_684983;
                    
                    just::line::Line::is_continuation::h5ed80636f0322bb6(*(r15_1 + 8), 
                        *(r15_1 + 0x10));
                    var_320_1 = r14_1 + 1;
                }
            }
            label_683eb0:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_2d0);
            r14_1 = var_320_1;
            
            if (!*core::option::Option$LT$T$GT$::get_or_insert_with::hca198ddf3f46da3d(&var_348, 
                    &var_338))
                goto label_6847eb;
        }
    }
    
    return core::ptr::drop_in_place$LT$just..evaluator..Evaluator$GT$::he8a263daf6e01e97(arg7);
}
