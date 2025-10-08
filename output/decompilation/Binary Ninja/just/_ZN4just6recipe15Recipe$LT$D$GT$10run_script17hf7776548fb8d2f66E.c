
  int64_t just::recipe::Recipe$LT$D$GT$::run_script::hf7776548fb8d2f66(char* arg1, void* arg2, int64_t* arg3, void* arg4, int64_t arg5, int64_t arg6, int64_t* arg7)

{
    int64_t var_2e0 = 0;
    void* var_2d8 = 8;
    int64_t var_2d0 = 0;
    int64_t rax = *(arg2 + 8);
    int64_t rax_1 = *(arg2 + 0x10);
    char var_2c8;
    int128_t var_2c0;
    int128_t var_2b8;
    int128_t var_1a9;
    char rax_3;
    
    if (rax_1)
    {
        int64_t r13_1 = 0;
        
        while (true)
        {
            just::evaluator::Evaluator::evaluate_line::hdd6d3ca4461d16bf(&var_2c8, arg7, 
                *(rax + r13_1 + 8), *(rax + r13_1 + 0x10), 0);
            rax_3 = var_2c8;
            
            if (rax_3 != 0x38)
                break;
            
            *var_1a9[8] = *var_2b8[8];
            int128_t var_68 = var_2c0;
            int64_t var_58_1 = *var_1a9[8];
            alloc::vec::Vec$LT$T$C$A$GT$::push::h2be7ee32b7c9f397(&var_2e0, &var_68);
            r13_1 += 0x20;
            
            if (rax_1 << 5 == r13_1)
                goto label_684b83;
        }
        
        goto label_6851ee;
    }
    
    label_684b83:
    void* r12_1 = *arg3;
    int128_t var_378;
    int128_t var_348;
    int128_t var_338;
    char var_337;
    int128_t var_2c7;
    int128_t var_2a8;
    int128_t var_1b8;
    int128_t var_1b1;
    int128_t var_198;
    
    if (*(r12_1 + 0x1a7) && (*(r12_1 + 0x198) || *(arg2 + 0xfd) == 1) && var_2d0)
    {
        int64_t i = 0;
        
        do
        {
            char rcx_1 = *(r12_1 + 0x195);
            int32_t rdx_2 = *(r12_1 + 0x180);
            var_2c8 = *(r12_1 + 0x184);
            var_2c7 = 1;
            *var_2c7[4] = 0;
            *var_2c7[1] = 0;
            *var_2c0[1] = rdx_2;
            *var_2c0[5] = 0xa;
            *var_2b8[1] = rcx_1;
            uint32_t rdx_3;
            uint32_t rsi_3;
            rdx_3 = just::color::Color::stderr::h04afff4548ac818e(&var_348, &var_2c8);
            uint32_t rcx_2 = var_337;
            char rax_11;
            int64_t zmm0_2;
            
            if (!rcx_2)
            {
                label_684c71:
                zmm0_2 = *var_348[1];
                rax_11 = *var_348[9];
                rcx_2 = *var_348[0xd];
                rdx_3 = *var_348[0xa] | *var_348[0xc] << 0x10;
                rsi_3 = *var_348[0xe] | var_338 << 0x10;
            }
            else
            {
                zmm0_2 = {0};
                rax_11 = 0xa;
                
                if (rcx_2 != 1)
                    rcx_2 = 0xa;
                else
                {
                    rcx_2 = 0xa;
                    
                    if (var_348 == 1)
                        goto label_684c71;
                }
            }
            
            *var_1a9[9] = zmm0_2;
            var_198 = rax_11;
            *var_198[1] = rdx_3;
            *var_198[3] = rdx_3 >> 0x10;
            *var_198[4] = rcx_2;
            *var_198[5] = rsi_3;
            *var_198[7] = rsi_3 >> 0x10;
            var_1b8 = -0x8000000000000000;
            *var_1b1[1] = *(var_2d8 + i + 8);
            *var_1a9[1] = *(var_2d8 + i + 0x10);
            var_378 = &var_1b8;
            *var_378[8] = _$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h246055d15162f7c1;
            var_2c8 = &data_82dbd8;
            var_2c0 = 2;
            var_2a8 = 0;
            var_2b8 = &var_378;
            *var_2b8[8] = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_2c8);
            core::ptr::drop_in_place$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$GT$::h67f49c18e7cd0b03(&var_1b8);
            i += 0x18;
        } while (var_2d0 * 0x18 != i);
    }
    
    if (!*(r12_1 + 0x198))
    {
        int64_t* rax_13 =
            just::attribute_set::AttributeSet::get::h29ad4fd4e40977f3(arg2 + 0xd8, 0x10);
        int64_t rdx_6;
        
        if (rax_13)
            rdx_6 = *rax_13;
        
        int128_t var_d8;
        
        if (rax_13 && rdx_6 + 0x7fffffffffffffff > 0x13)
        {
            void* rsi_11 = arg3[2];
            void* r8_1 = nullptr;
            
            if (*(rsi_11 + 0xd8) != -0x8000000000000000)
                r8_1 = rsi_11 + 0xd8;
            
            if (rdx_6 == -0x8000000000000000)
                rax_13 = r8_1;
            
            if (!rax_13)
            {
                just::interpreter::Interpreter::default_script_interpreter::h895623f6a8e849df();
                rax_13 = &just::interpreter::Interpreter::default_script_interpreter::INSTANCE::h2296fe7f4ab02c14;
            }
            
            *var_d8[8] = rax_13;
            var_d8 = 0;
            goto label_684f8a;
        }
        
        if (!var_2d0)
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_2c8, "evaluated_lines was emptybad she…", 0x19);
            int64_t rax_15 = var_2c8;
            *(arg1 + 0x10) = var_2c0;
            *arg1 = 0x1d;
            *(arg1 + 8) = rax_15;
        }
        else
        {
            int64_t var_1e8 = var_2d8;
            int64_t var_50;
            uint64_t rdx_8 = just::shebang::Shebang::new::he57eb4f1ce7ed327(&var_50, 
                *(var_2d8 + 8), *(var_2d8 + 0x10));
            int64_t var_329;
            int128_t var_298;
            int128_t var_288;
            int128_t var_278;
            
            if (!var_50)
            {
                just::recipe::Recipe$LT$D$GT$::run_script::_$u7b$$u7b$closure$u7d$$u7d$::hcc2d4e154cae4a5b(&var_2c8, &var_1e8, rdx_8);
                rax_3 = var_2c8;
                var_348 = var_2c7;
                var_338 = var_2b8;
                var_329 = var_2a8;
                var_1b8 = var_2a8;
                
                if (rax_3 == 0x38)
                    goto label_684f62;
                
                var_378 = var_348;
                int128_t zmm0_1 = var_1b8;
                *(arg1 + 0x58) = var_278;
                *(arg1 + 0x48) = var_288;
                *(arg1 + 0x38) = var_298;
                *(arg1 + 0x28) = zmm0_1;
                *(arg1 + 0x20) = var_329;
                zmm0_1 = var_378;
                *(arg1 + 0x11) = var_338;
                *(arg1 + 1) = zmm0_1;
                *arg1 = rax_3;
            }
            else
            {
                int64_t var_40;
                int64_t var_331 = var_40;
                var_348 = var_50;
                label_684f62:
                var_d8 = var_348;
                int64_t var_c8_1 = var_331;
                int64_t var_c0_1 = var_329;
                label_684f8a:
                just::execution_context::ExecutionContext::tempdir::h39cbfc80d5808fca(&var_2c8, 
                    arg3, arg2);
                rax_3 = var_2c8;
                int64_t var_268;
                
                if (rax_3 != 0x38)
                {
                    label_6851ee:
                    var_1b8 = var_2c7;
                    *(arg1 + 0x60) = var_268;
                    *(arg1 + 0x50) = var_278;
                    *(arg1 + 0x40) = var_288;
                    *(arg1 + 0x30) = var_298;
                    *(arg1 + 0x20) = var_2a8;
                    *(arg1 + 0x10) = var_2b8;
                    *(arg1 + 1) = var_1b8;
                    *arg1 = rax_3;
                }
                else
                {
                    int64_t rax_17 = *var_2b8[8];
                    *var_1a9[8] = rax_17;
                    int128_t var_b8 = var_2c0;
                    int64_t var_a8_1 = rax_17;
                    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(
                        &var_1e8, var_b8, *var_b8[8]);
                    int64_t rax_18 = *(arg2 + 0xd8);
                    int64_t rcx_6 = *(arg2 + 0xe0);
                    int64_t rsi_16 = rax_18;
                    
                    if (rax_18)
                        rsi_16 = *(arg2 + 0xe8);
                    
                    int64_t rdx_11;
                    rdx_11 = rax_18;
                    var_2c8 = rdx_11;
                    var_2c0 = 0;
                    var_2b8 = rax_18;
                    *var_2b8[8] = rcx_6;
                    var_2a8 = rdx_11;
                    *var_2a8[8] = 0;
                    var_298 = rax_18;
                    *var_298[8] = rcx_6;
                    var_288 = rsi_16;
                    char* rax_19;
                    int64_t rdx_12;
                    rax_19 = core::iter::traits::iterator::Iterator::try_fold::h5e811dad93d39452(
                        &var_2c8);
                    uint64_t rax_20;
                    int64_t rdx_13;
                    rax_20 = just::token::Token::lexeme::h66587cdf67f63270(arg2 + 0x90);
                    just::executor::Executor::script_filename::he1d781f6fc31137a(&var_2c8, &var_d8, 
                        rax_20, rdx_13, rax_19);
                    std::path::PathBuf::push::h48e66e1b6229fa08(&var_1e8, &var_2c8);
                    void var_80;
                    just::executor::Executor::script::h9615beeece302e47(&var_80, var_d8, 
                        *var_d8[8], rax, rax_1, var_2d8, var_2d0);
                    
                    if (*(r12_1 + 0x1a7) == 3)
                    {
                        char rcx_9 = *(r12_1 + 0x195);
                        var_2c8 = *(r12_1 + 0x184);
                        var_2c7 = 0;
                        *var_2c0[1] = 0xa00000004;
                        *var_2b8[1] = rcx_9;
                        uint32_t rdi_22;
                        uint32_t r8_4;
                        rdi_22 = just::color::Color::stderr::h04afff4548ac818e(&var_348, &var_2c8);
                        uint32_t rsi_21 = var_337;
                        char rdx_16;
                        int64_t zmm0_4;
                        
                        if (!rsi_21)
                        {
                            label_68518c:
                            zmm0_4 = *var_348[1];
                            rdx_16 = *var_348[9];
                            rsi_21 = *var_348[0xd];
                            rdi_22 = *var_348[0xa] | *var_348[0xc] << 0x10;
                            r8_4 = *var_348[0xe] | var_338 << 0x10;
                        }
                        else
                        {
                            zmm0_4 = {0};
                            rdx_16 = 0xa;
                            
                            if (rsi_21 != 1)
                                rsi_21 = 0xa;
                            else
                            {
                                rsi_21 = 0xa;
                                
                                if (var_348 == 1)
                                    goto label_68518c;
                            }
                        }
                        
                        *var_1a9[9] = zmm0_4;
                        var_198 = rdx_16;
                        *var_198[1] = rdi_22;
                        *var_198[3] = rdi_22 >> 0x10;
                        *var_198[4] = rsi_21;
                        *var_198[5] = r8_4;
                        *var_198[7] = r8_4 >> 0x10;
                        var_1b8 = -0x8000000000000000;
                        int64_t var_78;
                        *var_1b1[1] = var_78;
                        int64_t var_70;
                        *var_1a9[1] = var_70;
                        var_378 = &var_1b8;
                        *var_378[8] = _$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h246055d15162f7c1;
                        var_2c8 = &data_82dbd8;
                        var_2c0 = 2;
                        var_2a8 = 0;
                        var_2b8 = &var_378;
                        *var_2b8[8] = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_2c8);
                        core::ptr::drop_in_place$LT$ansi_term..display..ANSIGenericString$LT$str$GT$$GT$::h67f49c18e7cd0b03(&var_1b8);
                    }
                    
                    char const (** rax_25)[0xb4] =
                        std::fs::write::h00d17955715bd664(&var_1e8, &var_80);
                    int128_t var_168;
                    char rax_26;
                    
                    if (rax_25)
                    {
                        just::execution_context::ExecutionContext::tempdir::_$u7b$$u7b$closure$u7d$$u7d$::h73d903d964048742(&var_2c8, arg2, rax_25);
                        rax_26 = var_2c8;
                        var_1b8 = var_2c7;
                        var_168 = var_278;
                        *var_168[0xf] = var_268;
                    }
                    
                    char* rdx_26;
                    int128_t zmm0_5;
                    int128_t zmm1_4;
                    int128_t zmm2_3;
                    int128_t zmm3_3;
                    
                    if (rax_25 && rax_26 != 0x38)
                    {
                        rdx_26 = arg1;
                        *(rdx_26 + 0x60) = *var_168[0xf];
                        *(rdx_26 + 0x51) = var_168;
                        *(rdx_26 + 0x41) = var_288;
                        zmm0_5 = var_1b8;
                        zmm1_4 = var_2b8;
                        zmm2_3 = var_2a8;
                        zmm3_3 = var_298;
                        label_6858ff:
                        *(rdx_26 + 0x31) = zmm3_3;
                        *(rdx_26 + 0x21) = zmm2_3;
                        *(rdx_26 + 0x11) = zmm1_4;
                        *(rdx_26 + 1) = zmm0_5;
                        *rdx_26 = rax_26;
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(
                            &var_1e8);
                        core::ptr::drop_in_place$LT$tempfile..dir..TempDir$GT$::h1eb013ff5fec252b(
                            &var_b8);
                    }
                    else
                    {
                        void* rax_27;
                        int64_t rdx_19;
                        rax_27 = just::token::Token::lexeme::h66587cdf67f63270(arg2 + 0x90);
                        void* rdx_20 = arg3[2];
                        just::recipe::Recipe$LT$D$GT$::working_directory::hac15927441629eaf(
                            &var_378, arg2, rdx_20, arg3[3]);
                        int64_t rcx_16;
                        
                        if (var_378 == -0x8000000000000000)
                            rcx_16 = 0;
                        else
                            rcx_16 = *var_378[8];
                        
                        int64_t var_368;
                        int64_t var_1e0;
                        int64_t var_1d8;
                        just::executor::Executor::command::ha6f1d0ee763617d4(&var_2c8, &var_d8, 
                            r12_1, var_1e0, var_1d8, rax_27, rdx_19, rcx_16, var_368);
                        int64_t rax_31 = var_2c8;
                        var_348 = var_2c0;
                        *var_329[1] = var_2a8;
                        int64_t var_260;
                        
                        if (rax_31 != -0x8000000000000000)
                        {
                            int128_t var_1f8;
                            int128_t var_e8_1 = var_1f8;
                            int128_t var_208;
                            int128_t var_f8_1 = var_208;
                            int128_t var_218;
                            int128_t var_108_1 = var_218;
                            int128_t var_228;
                            int128_t var_118_1 = var_228;
                            int128_t var_238;
                            int128_t var_128_1 = var_238;
                            int128_t var_248;
                            int128_t var_138_1 = var_248;
                            int128_t var_258;
                            int128_t var_148_1 = var_258;
                            var_1b1 = var_348;
                            var_1a9 = var_2b8;
                            var_198 = *var_329[1];
                            int128_t var_188 = var_298;
                            int128_t var_178 = var_288;
                            var_168 = var_278;
                            int64_t var_150_1 = var_260;
                            var_1b8 = rax_31;
                            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h35203c2827c71cb0(&var_378);
                            char rax_34;
                            
                            if (!*(rdx_20 + 0x1e9))
                                rax_34 =
                                    just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(
                                    arg2 + 0xd8, 0xe);
                            
                            if (*(rdx_20 + 0x1e9) || rax_34)
                                std::process::Command::args::hc5540de655bfe19a(&var_1b8, arg5, 
                                    arg6);
                            
                            _$LT$std..process..Command$u20$as$u20$just..command_ext..CommandExt$GT$::export::hbded0bf5acb950b5(&var_1b8, rdx_20 + 0xa8, arg3[1], arg4, rdx_20 + 0x238);
                            memcpy(&var_2c8, &var_1b8, 0xe0);
                            _$LT$std..process..Command$u20$as$u20$just..command_ext..CommandExt$GT$::status_guard::h0e09d4f2af31801d(&var_348, &var_2c8);
                            var_378 = var_348;
                            
                            if (var_378 != 1)
                            {
                                int32_t rbx_4 = var_2b8;
                                int32_t rax_38 = *var_378[4];
                                int64_t var_3a8_2;
                                var_3a8_2 = *(rdx_20 + 0x1e8);
                                core::option::Option$LT$T$GT$::map_or_else::h968c8b1a26c3c1b4(
                                    &var_2c8, !(rax_38 & 0x7f), *rax_38[1], arg2, rax_38, arg2, 
                                    var_3a8_2);
                                rax_26 = var_2c8;
                                
                                if (rax_26 != 0x38)
                                {
                                    rdx_26 = arg1;
                                    *(rdx_26 + 0x60) = var_268;
                                    *(rdx_26 + 0x51) = var_278;
                                    *(rdx_26 + 0x41) = var_288;
                                    zmm0_5 = var_2c7;
                                    zmm1_4 = var_2b8;
                                    zmm2_3 = var_2a8;
                                    zmm3_3 = var_298;
                                    goto label_6858ff;
                                }
                                
                                if (!rbx_4)
                                {
                                    *arg1 = 0x38;
                                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_1e8);
                                    core::ptr::drop_in_place$LT$tempfile..dir..TempDir$GT$::h1eb013ff5fec252b(&var_b8);
                                }
                                else
                                {
                                    *arg1 = 0x1e;
                                    *(arg1 + 4) = rbx_4;
                                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_1e8);
                                    core::ptr::drop_in_place$LT$tempfile..dir..TempDir$GT$::h1eb013ff5fec252b(&var_b8);
                                }
                            }
                            else
                            {
                                int64_t rbx_3 = *var_378[8];
                                var_348 = rbx_3;
                                void* rax_36;
                                int64_t rdx_24;
                                rax_36 = just::token::Token::lexeme::h66587cdf67f63270(arg2 + 0x90);
                                just::executor::Executor::error::hb67514b2f69537b4(&var_2c8, 
                                    &var_d8, rbx_3, rax_36, rdx_24);
                                *(arg1 + 0x60) = var_268;
                                *(arg1 + 0x50) = var_278;
                                *(arg1 + 0x40) = var_288;
                                int128_t zmm0_8 = var_2c8;
                                *(arg1 + 0x30) = var_298;
                                *(arg1 + 0x20) = var_2a8;
                                *(arg1 + 0x10) = var_2b8;
                                *arg1 = zmm0_8;
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_1e8);
                                core::ptr::drop_in_place$LT$tempfile..dir..TempDir$GT$::h1eb013ff5fec252b(&var_b8);
                            }
                        }
                        else
                        {
                            *(arg1 + 0x60) = var_260;
                            *(arg1 + 0x50) = var_278;
                            *(arg1 + 0x40) = var_288;
                            int128_t zmm0_6 = var_348;
                            *(arg1 + 0x30) = var_298;
                            *(arg1 + 0x20) = *var_329[1];
                            *(arg1 + 0x10) = var_2b8;
                            *arg1 = zmm0_6;
                            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h35203c2827c71cb0(&var_378);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(
                                &var_1e8);
                            core::ptr::drop_in_place$LT$tempfile..dir..TempDir$GT$::h1eb013ff5fec252b(&var_b8);
                        }
                    }
                }
            }
        }
    }
    else
        *arg1 = 0x38;
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(
        &var_2e0);
    return core::ptr::drop_in_place$LT$just..evaluator..Evaluator$GT$::he8a263daf6e01e97(arg7);
}
