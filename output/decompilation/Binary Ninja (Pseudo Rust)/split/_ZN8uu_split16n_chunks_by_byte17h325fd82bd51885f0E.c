
  fn uu_split::n_chunks_by_byte::h325fd82bd51885f0(arg1: *mut i64, arg2: *mut c_void, arg3: *mut *mut c_void, arg4: i64, arg5: *mut *mut c_void) -> u64

{
    let mut r15: *mut *mut c_void = arg3;
    let mut var_c8: i64 = 0;
    let var_c0: i64 = 1;
    let var_b8: i64 = 0;
    let mut rax_1: i8;
    let mut rdx_1: *mut *mut c_void;
    rax_1 = uu_split::get_input_size::h76e4bf9c0daaab1c(&arg1[0xe], arg2, &var_c8, *arg1, arg1[1]);
    let mut r12: *mut *mut c_void = rdx_1;
    let mut r13: i64;
    let mut result: u64;
    
    if (rax_1 & 1) == 0
    {
        r13 = var_c0;
        let mut var_88: i64 = r13;
        let var_80_1: i64 = var_b8;
        let var_78_1: *mut c_void = arg2;
        let var_70_1: i8 = 0;
        
        if arg4 == 0
        {
            let mut rax_4: *mut *mut c_void = r12;
            
            if r15 < r12
            {
                rax_4 = r15;
            }
            
            if *arg1.byte_offset(0xa1) != 0
            {
                r15 = rax_4;
            }
            
            if r15 != 0
            {
                goto 'label_470aad;
            }
            
            result = 0;
        }
        else if r12 == 0 || r15 == 0
        {
            result = 0;
        }
        else
        {
            'label_470aad:
            std::io::stdio::stdout::hb6a8e10bcccf3287();
            let mut result_1: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
            let mut var_140: *mut i64 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&result_1);
            let mut result_6: *mut i64 = nullptr;
            let var_100_1: i64 = 8;
            let var_f8_1: i64 = 0;
            let mut var_e8_1: u64;
            let mut rax_10: u64;
            
            if (r12 | r15) >> 0x20 == 0
            {
                let rax_11: i32 = r12;
                let temp2_2: i32 = r15;
                rax_10 = COMBINE(0, rax_11) / temp2_2;
                var_e8_1 = COMBINE(0, rax_11) % temp2_2;
            }
            else
            {
                let rdx_2: i64 = 0;
                let temp2_1: i32 = r15;
                rax_10 = COMBINE(rdx_2, r12) / temp2_1;
                var_e8_1 = COMBINE(rdx_2, r12) % temp2_1;
            }
            
            let var_e0_1: *mut *mut c_void = r15;
            
            if arg4 != 0
            {
                goto 'label_470b7f;
            }
            
            _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::init::h95c34a5c8d1a9d91(&result_1, r15, arg1, 0);
            let result_5: *mut i64 = result_1;
            let result_2: u64;
            result = result_2;
            
            if -(result_5) == -0x8000000000000000
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9ac88a79a4d2d114(&result_6);
                core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h1369307f6e9c4811(
                    var_140);
            }
            else
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9ac88a79a4d2d114(&result_6);
                result_6 = result_5;
                let result_3: u64 = result;
                let var_128: *mut *mut c_void;
                let var_f8_2: *mut *mut c_void = var_128;
                r15 = var_e0_1;
                'label_470b7f:
                let var_160_1: i64 = r13;
                let mut var_a0: i64 = 1;
                let var_98_1: *mut *mut c_void = r15;
                let var_90_1: i8 = 0;
                let mut rax_14: i8;
                let mut rdx_6: i64;
                rax_14 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h4a3c52dfa8d527ec(&var_a0);
                
                if (rax_14 & 1) == 0
                {
                    'label_470dd0:
                    r13 = var_160_1;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9ac88a79a4d2d114(&result_6);
                    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h1369307f6e9c4811(
                        var_140);
                    result = 0;
                }
                else
                {
                    let mut r14_1: i64 = rdx_6;
                    let mut var_158: *mut c_void;
                    let mut var_150_1: i64;
                    let mut result_4: u64;
                    let mut rbx_1: i64;
                    
                    if (arg4 & 1) == 0
                    {
                        loop
                        {
                            var_158 = nullptr;
                            var_150_1 = 1;
                            let var_148_2: u64 = 0;
                            
                            if r12 == 0
                            {
                                goto 'label_470dbf;
                            }
                            
                            let mut rax_21: *mut *mut c_void = rax_10 + 0;
                            
                            if r14_1 == var_e0_1
                            {
                                rax_21 = r12;
                            }
                            
                            result_1 = &var_88;
                            let var_128_2: *mut *mut c_void = rax_21;
                            let mut rax_22: i8;
                            let mut rdx_9: i64;
                            rax_22 = std::io::default_read_to_end::hfa36e1d8c1f6f3bf(&result_1, 
                                &var_158);
                            rbx_1 = rdx_9;
                            
                            if (rax_22 & 1) != 0
                            {
                                goto 'label_470e0f;
                            }
                            
                            _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::get_writer::h595821988eb35f9a(&result_1, &result_6, r14_1 - 1, arg1);
                            result = result_1;
                            
                            if result != 0
                            {
                                r13 = var_160_1;
                                goto 'label_470f29;
                            }
                            
                            let r13_1: i64 = rax_21[2];
                            
                            if var_148_2 >= (*rax_21).byte_offset(-r13_1)
                            {
                                if std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h12d792e0f419688e(rax_21, var_150_1, var_148_2) != 0
                                {
                                    r13 = var_160_1;
                                    result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                    break;
                                }
                            }
                            else
                            {
                                memcpy(rax_21[1].byte_offset(r13_1), var_150_1, var_148_2);
                                rax_21[2] = r13_1 + var_148_2;
                            }
                            
                            r12 -= rbx_1;
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(var_158, var_150_1);
                            let mut rax_25: i8;
                            let mut rdx_12: i64;
                            rax_25 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h4a3c52dfa8d527ec(&var_a0);
                            r14_1 = rdx_12;
                            
                            if (rax_25 & 1) == 0
                            {
                                goto 'label_470dd0;
                            }
                        }
                    }
                    else
                    {
                        loop
                        {
                            var_158 = nullptr;
                            var_150_1 = 1;
                            let var_148_1: u64 = 0;
                            let mut rsi_11: i64;
                            let mut rdi_15: *mut c_void;
                            
                            if r12 == 0
                            {
                                'label_470dbf:
                                rsi_11 = 1;
                                rdi_15 = nullptr;
                            }
                            else
                            {
                                let mut rax_17: *mut *mut c_void = rax_10 + 0;
                                
                                if r14_1 == var_e0_1
                                {
                                    rax_17 = r12;
                                }
                                
                                result_1 = &var_88;
                                let var_130: *mut *mut c_void = rax_17;
                                let var_128_1: *mut *mut c_void = rax_17;
                                let mut rax_18: i8;
                                let mut rdx_7: i64;
                                rax_18 = std::io::default_read_to_end::hfa36e1d8c1f6f3bf(&result_1, 
                                    &var_158);
                                rbx_1 = rdx_7;
                                
                                if (rax_18 & 1) != 0
                                {
                                    'label_470e0f:
                                    let mut var_d0: i64 = rbx_1;
                                    let mut var_68: *mut c_void = &arg1[0xe];
                                    let var_60_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                                    let var_58_1: *mut i64 = &var_d0;
                                    let var_50_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                                    result_1 = &data_50b040;
                                    let var_130_2: i64 = 2;
                                    let var_118_1: i64 = 0;
                                    let var_128_3: *mut *mut c_void = &var_68;
                                    let mut var_120_1: i64 = 2;
                                    r13 = var_160_1;
                                    let mut var_48: i128;
                                    core::option::Option$LT$T$GT$::map_or_else::he9a9868ebfde35f3(
                                        &var_48, 0, &result_1);
                                    var_120_1 = 1;
                                    result_1 = var_48;
                                    let var_38: i64;
                                    let var_128_4: i64 = var_38;
                                    result = alloc::boxed::Box$LT$T$GT$::new::he26860fb58d4a888(
                                        &result_1);
                                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2c8dec07427c60f4(&var_d0);
                                    goto 'label_470f29;
                                }
                                
                                if r14_1 == arg5
                                {
                                    r13 = var_160_1;
                                    
                                    if _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_140, var_150_1, var_148_1) != 0
                                    {
                                        result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                        break;
                                    }
                                    
                                    rdi_15 = var_158;
                                    rsi_11 = var_150_1;
                                }
                                else
                                {
                                    r12 -= rbx_1;
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(var_158, var_150_1);
                                    let mut rax_19: i8;
                                    let mut rdx_8: i64;
                                    rax_19 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h4a3c52dfa8d527ec(&var_a0);
                                    r14_1 = rdx_8;
                                    
                                    if (rax_19 & 1) == 0
                                    {
                                        goto 'label_470dd0;
                                    }
                                    
                                    continue;
                                }
                            }
                            
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(rdi_15, rsi_11);
                            goto 'label_470dd0;
                        }
                    }
                    result = result_4;
                    'label_470f29:
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(
                        var_158, var_150_1);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9ac88a79a4d2d114(&result_6);
                    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h1369307f6e9c4811(
                        var_140);
                }
            }
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        r13 = var_c0;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(var_c8, r13);
    result
}
