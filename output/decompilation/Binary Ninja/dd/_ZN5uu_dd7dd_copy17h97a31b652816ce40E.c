
  off64_t uu_dd::dd_copy::h97a31b652816ce40(int32_t* arg1, char* arg2)

{
    int64_t rbp;
    rbp = 1;
    int64_t rax;
    int32_t rdx;
    rax = std::time::Instant::now::h767314cc8c6c5886();
    int64_t var_228 = rax;
    void* r15 = *(arg2 + 0x10);
    uint64_t rax_3 = uu_dd::calc_bsize::hdf3018661f9ee7c0(*(*(arg1 + 8) + 0x70), *(r15 + 0x78));
    char const (** const var_208)[0xcf];
    std::sync::mpmc::channel::hfa786908ce127370(&var_208);
    char const (** const r14)[0xcf] = var_208;
    off64_t result_1;
    int32_t* result_3 = result_1;
    char const (** const var_218)[0xcf] = r14;
    char rax_6 = *(*(arg1 + 8) + 0xa6);
    int128_t s_3;
    int128_t s_1 = s_3;
    char var_248 = rax_6;
    s_3 = -0x8000000000000000;
    var_208 = nullptr;
    char var_1e0 = 0;
    rbp = 1;
    int64_t s_2;
    std::thread::Builder::spawn_unchecked::hc49a1619cc03f387(&s_2, &var_208, &s_1);
    int128_t var_148;
    core::result::Result$LT$T$C$E$GT$::expect::hde2740aff8c517d5(&var_148, &s_2);
    char rax_7 = *(r15 + 0x93) ^ 1;
    int32_t* rax_9 = *(arg1 + 8);
    off64_t result;
    void* var_168;
    int64_t var_138;
    
    if (*rax_9 == 2 || *(rax_9 + 8))
    {
        rbp = 1;
        int64_t var_1a0;
        _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h06af5c098bf34970(&var_1a0, 0xdd, rax_3);
        void var_120;
        uu_dd::Alarm::with_interval::h0592b4190ad49d75(&var_120, 1, 0);
        int32_t rax_10;
        rax_10 = 1;
        int32_t var_2c0_1 = rax_10;
        rbp = 1;
        rbp = 1;
        uu_dd::progress::SignalHandler::install_signal_handler::hb77c05ee19a2f2b6(&s_2, 
            uu_dd::Alarm::manual_trigger_fn::hde6ca228babcadfa(&var_120));
        void* rax_13 = *(arg1 + 8);
        int128_t var_1e8;
        
        if (!s_2)
        {
            void var_100;
            var_168 = &var_100;
            
            if (*(rax_13 + 0xa6) != 2)
            {
                s_1 = &var_168;
                *s_1[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfd62f017e54a1480;
                var_208 = &data_53de20;
                result_1 = 2;
                var_1e8 = 0;
                s_3 = &s_1;
                *s_3[8] = 1;
                rbp = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_208);
                rax_13 = *(arg1 + 8);
            }
        }
        
        char rax_15 = *(rax_13 + 0x45);
        void* rax_16 = *(arg2 + 0x10);
        char rcx_2 = *(rax_16 + 0x9c);
        int128_t var_238;
        
        if (!*(rax_16 + 0xa5))
        {
            int64_t var_240_1 = *(arg2 + 0x10);
            s_1 = *arg2;
            s_1 = -0x8000000000000000;
        }
        else
        {
            uu_dd::bufferedoutput::BufferedOutput::new::hbb882339419c4f36(&var_208, arg2);
            var_238 = var_1e8;
            var_248 = s_3;
            s_1 = var_208;
        }
        
        char const (** const rax_18)[0xcf] = var_218;
        int32_t var_2ac_1 = 0;
        int64_t s;
        __builtin_memset(&s, 0, 0x48);
        int64_t var_170_1 = 0;
        
        while (true)
        {
            int64_t* rax_21 = *(arg1 + 8);
            int64_t rdi_10 = *rax_21;
            int64_t rsi_5 = rax_21[1];
            int64_t var_298_1;
            int64_t var_290_1;
            int64_t rcx_4;
            
            if (rdi_10 != 2)
            {
                rcx_4 = var_298_1 + s;
                
                if (rdi_10 & 1)
                    rcx_4 = var_290_1;
            }
            
            int64_t var_288_1;
            void* var_280_1;
            int64_t var_278_1;
            int64_t var_270_1;
            int64_t var_198;
            
            if (rdi_10 == 2 || rcx_4 < rsi_5)
            {
                uu_dd::read_helper::h46da3b2d66f4431e(&var_208, arg1, &var_1a0, 
                    uu_dd::calc_loop_bsize::hf5b351f02be9ced6(rdi_10, rsi_5, s, var_298_1, 
                        var_280_1, var_288_1, rax_21[0xe], rax_3));
                result = result_1;
                
                if (var_208 == 1)
                {
                    label_491736:
                    core::ptr::drop_in_place$LT$uu_dd..BlockWriter$GT$::h4573056733d671f2(&s_1);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$uu_dd..progress..SignalHandler$C$std..io..error..Error$GT$$GT$::h510969c33d4f529e(&s_2);
                    core::ptr::drop_in_place$LT$uu_dd..Alarm$GT$::ha6da245dddaf5862(&var_120);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h270e478e73f6834b(
                        var_1a0, var_198);
                    rbp = 0;
                    break;
                }
                
                int64_t r14_2 = s_3;
                
                if (result | r14_2)
                {
                    off64_t rbp_2 = *s_3[8];
                    uu_dd::BlockWriter::write_blocks::hb7310594a23c1026(&var_208, &s_1);
                    
                    if (var_208 == 1)
                        result = result_1;
                    else
                    {
                        off64_t r12_1 = s_3;
                        int64_t rbx_1 = *s_3[8];
                        int64_t var_260_1;
                        
                        if (rax_15)
                        {
                            core::result::Result$LT$T$C$E$GT$::unwrap::hab12e77de6c67244(var_260_1
                                >> 0x3f);
                            core::result::Result$LT$T$C$E$GT$::unwrap::hab12e77de6c67244(rbp_2
                                >> 0x3f);
                            uu_dd::Input::discard_cache::h505abcb6f4256ec2(*arg1, arg1[1], 
                                var_260_1, rbp_2);
                        }
                        
                        int64_t var_268_1;
                        
                        if (rcx_2)
                        {
                            core::result::Result$LT$T$C$E$GT$::unwrap::hab12e77de6c67244(
                                var_268_1 >> 0x3f | var_170_1);
                            core::result::Result$LT$T$C$E$GT$::unwrap::hab12e77de6c67244(
                                r12_1 >> 0x3f | rbx_1);
                            uu_dd::BlockWriter::discard_cache::hd6361abadcee340d(&s_1, var_268_1, 
                                r12_1);
                        }
                        
                        var_260_1 += rbp_2;
                        int64_t temp0_1 = var_268_1;
                        var_268_1 += r12_1;
                        var_170_1 = var_170_1 + rbx_1;
                        s += result;
                        var_298_1 += r14_2;
                        var_2ac_1 += var_1e8;
                        var_290_1 += rbp_2;
                        var_278_1 += var_1e8;
                        var_270_1 += var_1e0;
                        void* temp1_1 = var_280_1;
                        var_280_1 += r12_1;
                        var_288_1 = var_288_1 + rbx_1;
                        char rax_36 = uu_dd::Alarm::get_trigger::h676d02444d734923(&var_120);
                        
                        if (rax_36 - 1 >= 2)
                            continue;
                        else
                        {
                            int64_t rax_38;
                            int32_t rdx_9;
                            rax_38 = std::time::Instant::elapsed::h537da767ad82472a(&var_228);
                            int64_t s_5 = s;
                            int64_t var_90_1 = var_298_1;
                            int64_t var_88_1 = var_290_1;
                            int32_t var_80_1 = var_2ac_1;
                            void* var_78_1 = var_280_1;
                            int64_t var_70_1 = var_288_1;
                            int64_t var_68_1 = var_278_1;
                            int64_t var_60_1 = var_270_1;
                            int64_t var_a8 = rax_38;
                            int32_t var_a0_1 = rdx_9;
                            bool var_58_1 = rax_36 != 1;
                            std::sync::mpmc::Sender$LT$T$GT$::send::h514a0951d0dfaab8(&var_208, 
                                rax_18, result_3, &var_a8);
                            continue;
                        }
                    }
                    
                    goto label_491736;
                }
            }
            
            int128_t var_1e8_1 = var_238;
            int128_t var_1f8 = var_248;
            var_208 = s_1;
            int64_t s_4 = s;
            int64_t var_c0_1 = var_298_1;
            int64_t var_b8_1 = var_290_1;
            int32_t var_b0_1 = var_2ac_1;
            int64_t var_160_1 = var_288_1;
            var_168 = var_280_1;
            int64_t var_158_1 = var_278_1;
            int64_t var_150_1 = var_270_1;
            int64_t var_38_1 = var_138;
            int128_t var_48 = var_148;
            result = uu_dd::finalize::hd2fe8bf08b90de3e(&var_208, &s_4, &var_168, var_228, rdx, 
                rax_18, result_3, &var_48, rax_7);
            int32_t var_2c0_2 = 0;
            core::ptr::drop_in_place$LT$core..result..Result$LT$uu_dd..progress..SignalHandler$C$std..io..error..Error$GT$$GT$::h510969c33d4f529e(&s_2);
            core::ptr::drop_in_place$LT$uu_dd..Alarm$GT$::ha6da245dddaf5862(&var_120);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h270e478e73f6834b(var_1a0, 
                var_198);
            core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$uu_dd..progress..ProgUpdate$GT$$GT$::hfd684a6e04b6e3d8(&var_218);
            goto label_4917c3;
        }
        
        core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h04c84524a3cb659e(
            &var_148);
    }
    else
    {
        rbp = 1;
        off64_t result_2 = uu_dd::flush_caches_full_length::h2d347dd9f2f16b2f(arg1, arg2);
        result = result_2;
        
        if (!result_2)
        {
            *s_3[8] = *(arg2 + 0x10);
            result_1 = *arg2;
            var_208 = -0x8000000000000000;
            __builtin_memset(&s_1, 0, 0x1c);
            __builtin_memset(&s_2, 0, 0x20);
            int64_t var_158_2 = var_138;
            var_168 = var_148;
            result = uu_dd::finalize::hd2fe8bf08b90de3e(&var_208, &s_1, &s_2, var_228, rdx, r14, 
                result_3, &var_168, rax_7);
            rbp = 0;
        }
        else
        {
            rbp = 1;
            core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h04c84524a3cb659e(&var_148);
        }
    }
    core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$uu_dd..progress..ProgUpdate$GT$$GT$::hfd684a6e04b6e3d8(&var_218);
    
    if (rbp)
        core::ptr::drop_in_place$LT$uu_dd..Output$GT$::he2074b4203b220e7(*arg2, *(arg2 + 4));
    
    label_4917c3:
    core::ptr::drop_in_place$LT$uu_dd..Input$GT$::h0e5e373a8e2b4ad9(arg1[1]);
    return result;
}
