
  fn uu_dd::dd_copy::h97a31b652816ce40(arg1: *mut i32, arg2: *mut i8) -> off64_t

{
    let mut rbp: i64;
    rbp = 1;
    let mut rax: i64;
    let mut rdx: i32;
    rax = std::time::Instant::now::h767314cc8c6c5886();
    let mut var_228: i64 = rax;
    let r15: *mut c_void = *arg2.byte_offset(0x10);
    let rax_3: u64 = uu_dd::calc_bsize::hdf3018661f9ee7c0(
        *(*arg1.byte_offset(8)).byte_offset(0x70), *r15.byte_offset(0x78));
    let mut var_208: *mut *mut [i8; 0xcf];
    std::sync::mpmc::channel::hfa786908ce127370(&var_208);
    let r14: *mut *mut [i8; 0xcf] = var_208;
    let mut result_1: off64_t;
    let result_3: *mut i32 = result_1;
    let mut var_218: *mut *mut [i8; 0xcf] = r14;
    let rax_6: i8 = *(*arg1.byte_offset(8)).byte_offset(0xa6);
    let mut s_3: i128;
    let mut s_1: i128 = s_3;
    let mut var_248: i8 = rax_6;
    s_3 = -0x8000000000000000;
    var_208 = nullptr;
    let var_1e0: i8 = 0;
    rbp = 1;
    let mut s_2: i64;
    std::thread::Builder::spawn_unchecked::hc49a1619cc03f387(&s_2, &var_208, &s_1);
    let mut var_148: i128;
    core::result::Result$LT$T$C$E$GT$::expect::hde2740aff8c517d5(&var_148, &s_2);
    let rax_7: i8 = *r15.byte_offset(0x93) ^ 1;
    let rax_9: *mut i32 = *arg1.byte_offset(8);
    let mut result: off64_t;
    let mut var_168: *mut c_void;
    let var_138: i64;
    
    if *rax_9 == 2 || *rax_9.byte_offset(8) != 0
    {
        rbp = 1;
        let mut var_1a0: i64;
        _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h06af5c098bf34970(&var_1a0, 0xdd, rax_3);
        let mut var_120: ();
        uu_dd::Alarm::with_interval::h0592b4190ad49d75(&var_120, 1, 0);
        let mut rax_10: i32;
        rax_10 = 1;
        let var_2c0_1: i32 = rax_10;
        rbp = 1;
        rbp = 1;
        uu_dd::progress::SignalHandler::install_signal_handler::hb77c05ee19a2f2b6(&s_2, 
            uu_dd::Alarm::manual_trigger_fn::hde6ca228babcadfa(&var_120));
        let mut rax_13: *mut c_void = *arg1.byte_offset(8);
        let mut var_1e8: i128;
        
        if s_2 == 0
        {
            let mut var_100: ();
            var_168 = &var_100;
            
            if *rax_13.byte_offset(0xa6) != 2
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
                rax_13 = *arg1.byte_offset(8);
            }
        }
        
        let rax_15: i8 = *rax_13.byte_offset(0x45);
        let rax_16: *mut c_void = *arg2.byte_offset(0x10);
        let rcx_2: i8 = *rax_16.byte_offset(0x9c);
        let mut var_238: i128;
        
        if *rax_16.byte_offset(0xa5) == 0
        {
            let var_240_1: i64 = *arg2.byte_offset(0x10);
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
        
        let rax_18: *mut *mut [i8; 0xcf] = var_218;
        let mut var_2ac_1: i32 = 0;
        let mut s: i64;
        __builtin_memset(&s, 0, 0x48);
        let mut var_170_1: i64 = 0;
        
        loop
        {
            let rax_21: *mut i64 = *arg1.byte_offset(8);
            let rdi_10: i64 = *rax_21;
            let rsi_5: i64 = rax_21[1];
            let mut var_298_1: i64;
            let mut var_290_1: i64;
            let mut rcx_4: i64;
            
            if rdi_10 != 2
            {
                rcx_4 = var_298_1 + s;
                
                if (rdi_10 & 1) != 0
                {
                    rcx_4 = var_290_1;
                }
            }
            
            let mut var_288_1: i64;
            let mut var_280_1: *mut c_void;
            let mut var_278_1: i64;
            let mut var_270_1: i64;
            let var_198: i64;
            
            if rdi_10 == 2 || rcx_4 < rsi_5
            {
                uu_dd::read_helper::h46da3b2d66f4431e(&var_208, arg1, &var_1a0, 
                    uu_dd::calc_loop_bsize::hf5b351f02be9ced6(rdi_10, rsi_5, s, var_298_1, 
                        var_280_1, var_288_1, rax_21[0xe], rax_3));
                result = result_1;
                
                if var_208 == 1
                {
                    'label_491736:
                    core::ptr::drop_in_place$LT$uu_dd..BlockWriter$GT$::h4573056733d671f2(&s_1);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$uu_dd..progress..SignalHandler$C$std..io..error..Error$GT$$GT$::h510969c33d4f529e(&s_2);
                    core::ptr::drop_in_place$LT$uu_dd..Alarm$GT$::ha6da245dddaf5862(&var_120);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h270e478e73f6834b(
                        var_1a0, var_198);
                    rbp = 0;
                    break;
                }
                
                let r14_2: i64 = s_3;
                
                if (result | r14_2) != 0
                {
                    let rbp_2: off64_t = *s_3[8];
                    uu_dd::BlockWriter::write_blocks::hb7310594a23c1026(&var_208, &s_1);
                    
                    if var_208 == 1
                    {
                        result = result_1;
                    }
                    else
                    {
                        let r12_1: off64_t = s_3;
                        let rbx_1: i64 = *s_3[8];
                        let mut var_260_1: i64;
                        
                        if rax_15 != 0
                        {
                            core::result::Result$LT$T$C$E$GT$::unwrap::hab12e77de6c67244(var_260_1
                                >> 0x3f);
                            core::result::Result$LT$T$C$E$GT$::unwrap::hab12e77de6c67244(rbp_2
                                >> 0x3f);
                            uu_dd::Input::discard_cache::h505abcb6f4256ec2(*arg1, arg1[1], 
                                var_260_1, rbp_2);
                        }
                        
                        let mut var_268_1: i64;
                        
                        if rcx_2 != 0
                        {
                            core::result::Result$LT$T$C$E$GT$::unwrap::hab12e77de6c67244((
                                var_268_1 >> 0x3f | var_170_1) != 0);
                            core::result::Result$LT$T$C$E$GT$::unwrap::hab12e77de6c67244((
                                r12_1 >> 0x3f | rbx_1) != 0);
                            uu_dd::BlockWriter::discard_cache::hd6361abadcee340d(&s_1, var_268_1, 
                                r12_1);
                        }
                        
                        var_260_1 += rbp_2;
                        let temp0_1: i64 = var_268_1;
                        var_268_1 += r12_1;
                        var_170_1 = var_170_1 + rbx_1;
                        s += result;
                        var_298_1 += r14_2;
                        var_2ac_1 += var_1e8;
                        var_290_1 += rbp_2;
                        var_278_1 += var_1e8;
                        var_270_1 += var_1e0;
                        let temp1_1: *mut c_void = var_280_1;
                        var_280_1 += r12_1;
                        var_288_1 = var_288_1 + rbx_1;
                        let rax_36: i8 = uu_dd::Alarm::get_trigger::h676d02444d734923(&var_120);
                        
                        if rax_36 - 1 >= 2
                        {
                            continue;
                        }
                        else
                        {
                            let mut rax_38: i64;
                            let mut rdx_9: i32;
                            rax_38 = std::time::Instant::elapsed::h537da767ad82472a(&var_228);
                            let s_5: i64 = s;
                            let var_90_1: i64 = var_298_1;
                            let var_88_1: i64 = var_290_1;
                            let var_80_1: i32 = var_2ac_1;
                            let var_78_1: *mut c_void = var_280_1;
                            let var_70_1: i64 = var_288_1;
                            let var_68_1: i64 = var_278_1;
                            let var_60_1: i64 = var_270_1;
                            let mut var_a8: i64 = rax_38;
                            let var_a0_1: i32 = rdx_9;
                            let var_58_1: bool = rax_36 != 1;
                            std::sync::mpmc::Sender$LT$T$GT$::send::h514a0951d0dfaab8(&var_208, 
                                rax_18, result_3, &var_a8);
                            continue;
                        }
                    }
                    
                    goto 'label_491736;
                }
            }
            
            let var_1e8_1: i128 = var_238;
            let var_1f8: i128 = var_248;
            var_208 = s_1;
            let mut s_4: i64 = s;
            let var_c0_1: i64 = var_298_1;
            let var_b8_1: i64 = var_290_1;
            let var_b0_1: i32 = var_2ac_1;
            let var_160_1: i64 = var_288_1;
            var_168 = var_280_1;
            let var_158_1: i64 = var_278_1;
            let var_150_1: i64 = var_270_1;
            let var_38_1: i64 = var_138;
            let mut var_48: i128 = var_148;
            result = uu_dd::finalize::hd2fe8bf08b90de3e(&var_208, &s_4, &var_168, var_228, rdx, 
                rax_18, result_3, &var_48, rax_7);
            let var_2c0_2: i32 = 0;
            core::ptr::drop_in_place$LT$core..result..Result$LT$uu_dd..progress..SignalHandler$C$std..io..error..Error$GT$$GT$::h510969c33d4f529e(&s_2);
            core::ptr::drop_in_place$LT$uu_dd..Alarm$GT$::ha6da245dddaf5862(&var_120);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h270e478e73f6834b(var_1a0, 
                var_198);
            core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$uu_dd..progress..ProgUpdate$GT$$GT$::hfd684a6e04b6e3d8(&var_218);
            goto 'label_4917c3;
        }
        
        core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h04c84524a3cb659e(
            &var_148);
    }
    else
    {
        rbp = 1;
        let result_2: off64_t = uu_dd::flush_caches_full_length::h2d347dd9f2f16b2f(arg1, arg2);
        result = result_2;
        
        if result_2 == 0
        {
            *s_3[8] = *arg2.byte_offset(0x10);
            result_1 = *arg2;
            var_208 = -0x8000000000000000;
            __builtin_memset(&s_1, 0, 0x1c);
            __builtin_memset(&s_2, 0, 0x20);
            let var_158_2: i64 = var_138;
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
    
    if rbp != 0
    {
        core::ptr::drop_in_place$LT$uu_dd..Output$GT$::he2074b4203b220e7(*arg2, 
            *arg2.byte_offset(4));
    }
    
    'label_4917c3:
    core::ptr::drop_in_place$LT$uu_dd..Input$GT$::h0e5e373a8e2b4ad9(arg1[1]);
    result
}
