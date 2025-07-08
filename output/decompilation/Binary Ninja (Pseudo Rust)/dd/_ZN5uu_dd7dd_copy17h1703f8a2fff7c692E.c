
  fn uu_dd::dd_copy::h1703f8a2fff7c692(arg1: *mut i32, arg2: *mut i128) -> off64_t

{
    let mut rbp: i64;
    rbp = 1;
    let mut rax: i64;
    let mut rdx: i32;
    rax = std::time::Instant::now::h9c8927e2f473c2b3();
    let mut var_218: i64 = rax;
    let mut r15: u64 = arg2[1];
    let rax_4: u64 = uu_dd::calc_bsize::h13ab530ab475ef72(
        *(*arg1.byte_offset(8)).byte_offset(0x70), *(r15 + 0x78));
    let mut s_3: i128;
    std::sync::mpmc::channel::h855ca8fb6aeda91c(&s_3);
    let mut s_7: i128 = s_3;
    let rax_7: i8 = *(*arg1.byte_offset(8)).byte_offset(0xa6);
    let mut s_4: i128;
    let mut s_1: i128 = s_4;
    let mut var_238: i8 = rax_7;
    s_4 = -0x8000000000000000;
    s_3 = 0;
    rbp = 1;
    let mut s_2: i64;
    std::thread::Builder::spawn_unchecked::h860d342b6a02b1fe(&s_2, &s_3);
    let mut var_160: i128;
    core::result::Result$LT$T$C$E$GT$::expect::hae1648ffdc1cd49b(&var_160, &s_2);
    let rax_8: i8 = *(r15 + 0x93);
    let rax_10: *mut i64 = *arg1.byte_offset(8);
    let rcx: i64 = *rax_10;
    let mut result: off64_t;
    let mut var_1f8: i128;
    let var_150: i64;
    
    if (rcx == 0 || rcx == 1) && rax_10[1] == 0
    {
        r15 = 1;
        rbp = 1;
        let result_1: off64_t = uu_dd::flush_caches_full_length::h852ee23a16d52f1f(arg1, arg2);
        result = result_1;
        
        if result_1 == 0
        {
            *s_4[8] = arg2[1];
            s_3 = *arg2;
            s_3 = -0x8000000000000000;
            __builtin_memset(&s_1, 0, 0x1c);
            __builtin_memset(&s_2, 0, 0x20);
            let var_1e8_3: i64 = var_150;
            var_1f8 = var_160;
            result = uu_dd::finalize::hab8d4b3fb7143922(&s_3, &s_1, &s_2, var_218, rdx, &s_7, 
                &var_1f8, rax_8 == 0);
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
        let mut var_148: ();
        _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h1a0e457649d60ac2(&var_148, 0xdd, rax_4);
        r15 = 1;
        rbp = 1;
        let mut var_120: ();
        uu_dd::Alarm::with_interval::he7e19ce09b7e3abf(&var_120);
        r15 = 1;
        rbp = 1;
        rbp = 1;
        uu_dd::progress::SignalHandler::install_signal_handler::he2c75cf1b31a635f(&s_2, 
            uu_dd::Alarm::manual_trigger_fn::h737085a66dc3c163(&var_120), &data_560fd8);
        let mut rax_13: *mut c_void = *arg1.byte_offset(8);
        let mut var_1b8: i128;
        
        if s_2 == 0
        {
            let mut var_100: ();
            var_1f8 = &var_100;
            
            if *rax_13.byte_offset(0xa6) != 2
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
                rax_13 = *arg1.byte_offset(8);
            }
        }
        
        let rax_15: i8 = *rax_13.byte_offset(0x45);
        let rax_16: *mut c_void = arg2[1];
        let rdx_2: i8 = *rax_16.byte_offset(0x9c);
        let mut var_228: i128;
        
        if *rax_16.byte_offset(0xa5) == 0
        {
            let var_230_1: i64 = arg2[1];
            s_1 = *arg2;
            s_1 = -0x8000000000000000;
        }
        else
        {
            let var_1e8_1: i64 = arg2[1];
            var_1f8 = *arg2;
            uu_dd::bufferedoutput::BufferedOutput::new::h93483d7819281523(&s_3, &var_1f8);
            s_1 = s_3;
            var_238 = s_4;
            var_228 = var_1b8;
        }
        
        let mut var_29c_1: i32 = 0;
        let mut s: i64;
        __builtin_memset(&s, 0, 0x48);
        let mut var_168_1: i64 = 0;
        
        loop
        {
            let rax_20: *mut i64 = *arg1.byte_offset(8);
            let rdi_10: i64 = *rax_20;
            let mut var_288_1: i64;
            let mut var_280_1: i64;
            let mut var_278_1: i64;
            let mut var_270_1: i64;
            let mut var_268_1: i64;
            let mut var_260_1: i64;
            let mut rsi_5: i64;
            
            if rdi_10 == 0
            {
                rsi_5 = rax_20[1];
                
                if var_288_1 + s < rsi_5
                {
                    goto 'label_4d8313;
                }
            }
            else if rdi_10 != 1
            {
                rsi_5 = rax_20[1];
                'label_4d8313:
                uu_dd::read_helper::h638d567deabbf60c(&s_3, arg1, &var_148, 
                    uu_dd::calc_loop_bsize::h77fb8cf8da4525ff(rdi_10, rsi_5, s, var_288_1, 
                        var_270_1, var_278_1, rax_20[0xe], rax_4));
                result = *s_3[8];
                
                if s_3 != 0
                {
                    'label_4d86f1:
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
                
                let r14_1: i64 = s_4;
                let rbp_2: i64 = *s_4[8];
                
                if result != 0 || r14_1 != 0
                {
                    uu_dd::BlockWriter::write_blocks::h4171594e3d4f7075(&s_3, &s_1);
                    
                    if s_3 != 0
                    {
                        result = *s_3[8];
                    }
                    else
                    {
                        let r13_1: i64 = s_4;
                        let mut rbx_1: i64 = *s_4[8];
                        let mut var_250_1: i64;
                        
                        if rax_15 != 0
                        {
                            core::result::Result$LT$T$C$E$GT$::unwrap::h561911936e9e2a34(var_250_1
                                >> 0x3f);
                            core::result::Result$LT$T$C$E$GT$::unwrap::h561911936e9e2a34(rbp_2
                                >> 0x3f);
                            arg1[1];
                            uu_dd::Input::discard_cache::h2bede2b9be5bf459(*arg1);
                        }
                        
                        let mut var_258_1: i64;
                        
                        if rdx_2 != 0
                        {
                            let mut rdi_18: i64;
                            rdi_18 = (var_258_1 >> 0x3f | var_168_1) != 0;
                            core::result::Result$LT$T$C$E$GT$::unwrap::h561911936e9e2a34(rdi_18);
                            let mut rdi_19: i64;
                            rdi_19 = (r13_1 >> 0x3f | rbx_1) != 0;
                            core::result::Result$LT$T$C$E$GT$::unwrap::h561911936e9e2a34(rdi_19);
                            uu_dd::BlockWriter::discard_cache::hd6a990a3b71c9db7(&s_1);
                        }
                        
                        var_250_1 += rbp_2;
                        let temp0_1: i64 = var_258_1;
                        var_258_1 += r13_1;
                        var_168_1 = var_168_1 + rbx_1;
                        s += result;
                        var_288_1 += r14_1;
                        var_29c_1 += var_1b8;
                        var_280_1 += rbp_2;
                        var_268_1 += var_1b8;
                        var_260_1 += *var_1b8[8];
                        let temp1_1: i64 = var_270_1;
                        var_270_1 += r13_1;
                        var_278_1 = var_278_1 + rbx_1;
                        let rax_33: i8 = uu_dd::Alarm::get_trigger::h51a33321f8d9afe9(&var_120);
                        
                        if rax_33 == 1
                        {
                            rbx_1 = 0;
                        }
                        else if rax_33 != 2
                        {
                            continue;
                        }
                        else
                        {
                            rbx_1 = 1;
                        }
                        
                        let mut rax_35: i64;
                        let mut rdx_9: i32;
                        rax_35 = std::time::Instant::elapsed::hd84d976472e03263(&var_218);
                        let s_6: i64 = s;
                        let var_90_1: i64 = var_288_1;
                        let var_88_1: i64 = var_280_1;
                        let var_80_1: i32 = var_29c_1;
                        let var_78_1: i64 = var_270_1;
                        let var_70_1: i64 = var_278_1;
                        let var_68_1: i64 = var_268_1;
                        let var_60_1: i64 = var_260_1;
                        let mut var_a8: i64 = rax_35;
                        let var_a0_1: i32 = rdx_9;
                        let var_58_1: i8 = rbx_1;
                        std::sync::mpmc::Sender$LT$T$GT$::send::hf546e8e151154c35(&s_3, &s_7, 
                            &var_a8);
                        continue;
                    }
                    
                    goto 'label_4d86f1;
                }
            }
            else
            {
                rsi_5 = rax_20[1];
                
                if var_280_1 < rsi_5
                {
                    goto 'label_4d8313;
                }
            }
            let var_1b8_1: i128 = var_228;
            let var_1c8: i128 = var_238;
            s_3 = s_1;
            let mut s_5: i64 = s;
            let var_c0_1: i64 = var_288_1;
            let var_b8_1: i64 = var_280_1;
            let var_b0_1: i32 = var_29c_1;
            *var_1f8[8] = var_278_1;
            var_1f8 = var_270_1;
            let var_1e8_2: i64 = var_268_1;
            let var_1e0_1: i64 = var_260_1;
            let var_38_1: i64 = var_150;
            let mut var_48: i128 = var_160;
            result = uu_dd::finalize::hab8d4b3fb7143922(&s_3, &s_5, &var_1f8, var_218, rdx, &s_7, 
                &var_48, rax_8 == 0);
            core::ptr::drop_in_place$LT$core..result..Result$LT$uu_dd..progress..SignalHandler$C$std..io..error..Error$GT$$GT$::h50a5ab9792467d2a(&s_2);
            core::ptr::drop_in_place$LT$uu_dd..Alarm$GT$::h14ec7af47f6c1bdc(&var_120);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hcaeb013c8c4216fe(&var_148);
            core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$uu_dd..progress..ProgUpdate$GT$$GT$::hb35f3f7f21d9b252(&s_7);
            goto 'label_4d8764;
        }
        
        core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h34f9f794f4847285(
            &var_160);
    }
    core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$uu_dd..progress..ProgUpdate$GT$$GT$::hb35f3f7f21d9b252(&s_7);
    
    if rbp != 0
    {
        core::ptr::drop_in_place$LT$uu_dd..Output$GT$::hdcd5f9e7ad84b1ee(*arg2, 
            *arg2.byte_offset(4));
    }
    
    'label_4d8764:
    core::ptr::drop_in_place$LT$uu_dd..Input$GT$::h02b6681dd6fb5196(arg1[1]);
    result
}
