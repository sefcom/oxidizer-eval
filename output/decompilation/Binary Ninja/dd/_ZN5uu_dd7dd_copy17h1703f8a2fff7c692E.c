
  off64_t uu_dd::dd_copy::h1703f8a2fff7c692(int32_t* arg1, int128_t* arg2)

{
    int64_t rbp;
    rbp = 1;
    int64_t rax;
    int32_t rdx;
    rax = std::time::Instant::now::h9c8927e2f473c2b3();
    int64_t var_218 = rax;
    uint64_t r15 = arg2[1];
    uint64_t rax_4 = uu_dd::calc_bsize::h13ab530ab475ef72(*(*(arg1 + 8) + 0x70), *(r15 + 0x78));
    int128_t s_3;
    std::sync::mpmc::channel::h855ca8fb6aeda91c(&s_3);
    int128_t s_7 = s_3;
    char rax_7 = *(*(arg1 + 8) + 0xa6);
    int128_t s_4;
    int128_t s_1 = s_4;
    char var_238 = rax_7;
    s_4 = -0x8000000000000000;
    s_3 = 0;
    rbp = 1;
    int64_t s_2;
    std::thread::Builder::spawn_unchecked::h860d342b6a02b1fe(&s_2, &s_3);
    int128_t var_160;
    core::result::Result$LT$T$C$E$GT$::expect::hae1648ffdc1cd49b(&var_160, &s_2);
    char rax_8 = *(r15 + 0x93);
    int64_t* rax_10 = *(arg1 + 8);
    int64_t rcx = *rax_10;
    off64_t result;
    int128_t var_1f8;
    int64_t var_150;
    
    if ((!rcx || rcx == 1) && !rax_10[1])
    {
        r15 = 1;
        rbp = 1;
        off64_t result_1 = uu_dd::flush_caches_full_length::h852ee23a16d52f1f(arg1, arg2);
        result = result_1;
        
        if (!result_1)
        {
            *s_4[8] = arg2[1];
            s_3 = *arg2;
            s_3 = -0x8000000000000000;
            __builtin_memset(&s_1, 0, 0x1c);
            __builtin_memset(&s_2, 0, 0x20);
            int64_t var_1e8_3 = var_150;
            var_1f8 = var_160;
            result = uu_dd::finalize::hab8d4b3fb7143922(&s_3, &s_1, &s_2, var_218, rdx, &s_7, 
                &var_1f8, !rax_8);
            rbp = 0;
        }
        else
        {
            rbp = 1;
            core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h34f9f794f4847285(&var_160);
        }
    }
    else
    {
        r15 = 1;
        rbp = 1;
        void var_148;
        _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h1a0e457649d60ac2(&var_148, 0xdd, rax_4);
        r15 = 1;
        rbp = 1;
        void var_120;
        uu_dd::Alarm::with_interval::he7e19ce09b7e3abf(&var_120);
        r15 = 1;
        rbp = 1;
        rbp = 1;
        uu_dd::progress::SignalHandler::install_signal_handler::he2c75cf1b31a635f(&s_2, 
            uu_dd::Alarm::manual_trigger_fn::h737085a66dc3c163(&var_120), &data_560fd8);
        void* rax_13 = *(arg1 + 8);
        int128_t var_1b8;
        
        if (!s_2)
        {
            void var_100;
            var_1f8 = &var_100;
            
            if (*(rax_13 + 0xa6) != 2)
            {
                s_1 = &var_1f8;
                *s_1[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb0f2d90884185144;
                s_3 = &data_561138;
                *s_3[8] = 2;
                var_1b8 = 0;
                s_4 = &s_1;
                *s_4[8] = 1;
                rbp = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&s_3);
                rax_13 = *(arg1 + 8);
            }
        }
        
        char rax_15 = *(rax_13 + 0x45);
        void* rax_16 = arg2[1];
        char rdx_2 = *(rax_16 + 0x9c);
        int128_t var_228;
        
        if (!*(rax_16 + 0xa5))
        {
            int64_t var_230_1 = arg2[1];
            s_1 = *arg2;
            s_1 = -0x8000000000000000;
        }
        else
        {
            int64_t var_1e8_1 = arg2[1];
            var_1f8 = *arg2;
            uu_dd::bufferedoutput::BufferedOutput::new::h93483d7819281523(&s_3, &var_1f8);
            s_1 = s_3;
            var_238 = s_4;
            var_228 = var_1b8;
        }
        
        int32_t var_29c_1 = 0;
        int64_t s;
        __builtin_memset(&s, 0, 0x48);
        int64_t var_168_1 = 0;
        
        while (true)
        {
            int64_t* rax_20 = *(arg1 + 8);
            int64_t rdi_10 = *rax_20;
            int64_t var_288_1;
            int64_t var_280_1;
            int64_t var_278_1;
            int64_t var_270_1;
            int64_t var_268_1;
            int64_t var_260_1;
            int64_t rsi_5;
            
            if (!rdi_10)
            {
                rsi_5 = rax_20[1];
                
                if (var_288_1 + s < rsi_5)
                    goto label_4d8313;
            }
            else if (rdi_10 != 1)
            {
                rsi_5 = rax_20[1];
                label_4d8313:
                uu_dd::read_helper::h638d567deabbf60c(&s_3, arg1, &var_148, 
                    uu_dd::calc_loop_bsize::h77fb8cf8da4525ff(rdi_10, rsi_5, s, var_288_1, 
                        var_270_1, var_278_1, rax_20[0xe], rax_4));
                result = *s_3[8];
                
                if (s_3)
                {
                    label_4d86f1:
                    core::ptr::drop_in_place$LT$uu_dd..BlockWriter$GT$::h048e0304ba11ba1f(&s_1);
                    r15 = 1;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$uu_dd..progress..SignalHandler$C$std..io..error..Error$GT$$GT$::h50a5ab9792467d2a(&s_2);
                    r15 = 1;
                    core::ptr::drop_in_place$LT$uu_dd..Alarm$GT$::h14ec7af47f6c1bdc(&var_120);
                    r15 = 1;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hcaeb013c8c4216fe(
                        &var_148);
                    rbp = 0;
                    break;
                }
                
                int64_t r14_1 = s_4;
                int64_t rbp_2 = *s_4[8];
                
                if (result || r14_1)
                {
                    uu_dd::BlockWriter::write_blocks::h4171594e3d4f7075(&s_3, &s_1);
                    
                    if (s_3)
                        result = *s_3[8];
                    else
                    {
                        int64_t r13_1 = s_4;
                        int64_t rbx_1 = *s_4[8];
                        int64_t var_250_1;
                        
                        if (rax_15)
                        {
                            core::result::Result$LT$T$C$E$GT$::unwrap::h561911936e9e2a34(var_250_1
                                >> 0x3f);
                            core::result::Result$LT$T$C$E$GT$::unwrap::h561911936e9e2a34(rbp_2
                                >> 0x3f);
                            arg1[1];
                            uu_dd::Input::discard_cache::h2bede2b9be5bf459(*arg1);
                        }
                        
                        int64_t var_258_1;
                        
                        if (rdx_2)
                        {
                            int64_t rdi_18;
                            rdi_18 = var_258_1 >> 0x3f | var_168_1;
                            core::result::Result$LT$T$C$E$GT$::unwrap::h561911936e9e2a34(rdi_18);
                            int64_t rdi_19;
                            rdi_19 = r13_1 >> 0x3f | rbx_1;
                            core::result::Result$LT$T$C$E$GT$::unwrap::h561911936e9e2a34(rdi_19);
                            uu_dd::BlockWriter::discard_cache::hd6a990a3b71c9db7(&s_1);
                        }
                        
                        var_250_1 += rbp_2;
                        int64_t temp0_1 = var_258_1;
                        var_258_1 += r13_1;
                        var_168_1 = var_168_1 + rbx_1;
                        s += result;
                        var_288_1 += r14_1;
                        var_29c_1 += var_1b8;
                        var_280_1 += rbp_2;
                        var_268_1 += var_1b8;
                        var_260_1 += *var_1b8[8];
                        int64_t temp1_1 = var_270_1;
                        var_270_1 += r13_1;
                        var_278_1 = var_278_1 + rbx_1;
                        char rax_33 = uu_dd::Alarm::get_trigger::h51a33321f8d9afe9(&var_120);
                        
                        if (rax_33 == 1)
                            rbx_1 = 0;
                        else if (rax_33 != 2)
                            continue;
                        else
                            rbx_1 = 1;
                        
                        int64_t rax_35;
                        int32_t rdx_9;
                        rax_35 = std::time::Instant::elapsed::hd84d976472e03263(&var_218);
                        int64_t s_6 = s;
                        int64_t var_90_1 = var_288_1;
                        int64_t var_88_1 = var_280_1;
                        int32_t var_80_1 = var_29c_1;
                        int64_t var_78_1 = var_270_1;
                        int64_t var_70_1 = var_278_1;
                        int64_t var_68_1 = var_268_1;
                        int64_t var_60_1 = var_260_1;
                        int64_t var_a8 = rax_35;
                        int32_t var_a0_1 = rdx_9;
                        char var_58_1 = rbx_1;
                        std::sync::mpmc::Sender$LT$T$GT$::send::hf546e8e151154c35(&s_3, &s_7, 
                            &var_a8);
                        continue;
                    }
                    
                    goto label_4d86f1;
                }
            }
            else
            {
                rsi_5 = rax_20[1];
                
                if (var_280_1 < rsi_5)
                    goto label_4d8313;
            }
            int128_t var_1b8_1 = var_228;
            int128_t var_1c8 = var_238;
            s_3 = s_1;
            int64_t s_5 = s;
            int64_t var_c0_1 = var_288_1;
            int64_t var_b8_1 = var_280_1;
            int32_t var_b0_1 = var_29c_1;
            *var_1f8[8] = var_278_1;
            var_1f8 = var_270_1;
            int64_t var_1e8_2 = var_268_1;
            int64_t var_1e0_1 = var_260_1;
            int64_t var_38_1 = var_150;
            int128_t var_48 = var_160;
            result = uu_dd::finalize::hab8d4b3fb7143922(&s_3, &s_5, &var_1f8, var_218, rdx, &s_7, 
                &var_48, !rax_8);
            core::ptr::drop_in_place$LT$core..result..Result$LT$uu_dd..progress..SignalHandler$C$std..io..error..Error$GT$$GT$::h50a5ab9792467d2a(&s_2);
            core::ptr::drop_in_place$LT$uu_dd..Alarm$GT$::h14ec7af47f6c1bdc(&var_120);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hcaeb013c8c4216fe(&var_148);
            core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$uu_dd..progress..ProgUpdate$GT$$GT$::hb35f3f7f21d9b252(&s_7);
            goto label_4d8764;
        }
        
        core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h34f9f794f4847285(
            &var_160);
    }
    core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$uu_dd..progress..ProgUpdate$GT$$GT$::hb35f3f7f21d9b252(&s_7);
    
    if (rbp)
        core::ptr::drop_in_place$LT$uu_dd..Output$GT$::hdcd5f9e7ad84b1ee(*arg2, *(arg2 + 4));
    
    label_4d8764:
    core::ptr::drop_in_place$LT$uu_dd..Input$GT$::h02b6681dd6fb5196(arg1[1]);
    return result;
}
