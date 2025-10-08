
  fn just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(arg1: *mut i8, arg2: *mut i64, arg3: *mut i64) -> u64

{
    let mut r14: *mut i64 = arg3;
    let mut r13: i64 = *arg3;
    let mut rcx: i64 = r13 - 7;
    
    if rcx >= 0xb
    {
        rcx = 3;
    }
    
    let mut rax: *mut c_void = 8;
    let mut var_1c8: i128;
    let mut var_1b8: u64;
    let mut var_1b0: i128;
    let var_1a0: i128;
    let var_190: i128;
    let var_178: i128;
    let var_168: i64;
    let mut var_158: *mut c_void;
    let mut result_1: i64;
    let mut var_138: i128;
    let mut var_118: i128;
    let mut var_109: i128;
    let mut var_f8: i128;
    let mut result: u64;
    let mut rax_37: i8;
    let mut rcx_31: i8;
    let mut rcx_32: *mut i128;
    let mut zmm0_2: i128;
    let mut zmm0_12: i128;
    
    match rcx
    {
        0 =>
        {
            'label_665ea5:
            just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, arg2, 
                r14[1]);
            result = var_1c8;
            
            if result != 0x38
            {
                'label_665f21:
                var_118 = var_1c8;
                *arg1.byte_offset(0x60) = var_168;
                *arg1.byte_offset(0x50) = var_178;
                *arg1.byte_offset(0x40) = var_190;
                *arg1.byte_offset(0x30) = var_1a0;
                *arg1.byte_offset(0x20) = var_1b0;
                *arg1.byte_offset(0x10) = var_1b8;
                zmm0_2 = var_118;
                'label_665f60:
                *arg1.byte_offset(1) = zmm0_2;
                *arg1 = result;
                return result;
            }
            
            let rax_30: i64 = var_1b0;
            var_158 = var_1c8;
            let var_148_1: i64 = rax_30;
            
            if rax_30 != 0
            {
                just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(arg1, arg2, 
                    r14[2]);
                return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(
                    &var_158);
            }
            
            *arg1.byte_offset(8) = 0;
            *arg1.byte_offset(0x10) = 1;
            *arg1.byte_offset(0x18) = 0;
            'label_665f83:
            *arg1 = 0x38;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_158)
        }
        1 =>
        {
            'label_665fb1:
            just::evaluator::Evaluator::evaluate_condition::hff24f5aa7f9c2ad8(&var_1c8, arg2, 
                &r14[2]);
            rcx_31 = var_1c8;
            result = *var_1c8[1];
            
            if rcx_31 != 0x38
            {
                'label_6663e0:
                *arg1.byte_offset(0x60) = var_168;
                *arg1.byte_offset(0x52) = var_178;
                *arg1.byte_offset(0x42) = var_190;
                let zmm0: i128 = var_1c8;
                *arg1.byte_offset(0x32) = var_1a0;
                *arg1.byte_offset(0x22) = var_1b0;
                *arg1.byte_offset(0x12) = *var_1b8[2];
                *arg1.byte_offset(2) = zmm0;
                *arg1 = rcx_31;
                arg1[1] = result;
                return result;
            }
            
            if (result & 1) != 0
            {
                *arg1.byte_offset(8) = 0;
                *arg1.byte_offset(0x10) = 1;
                *arg1.byte_offset(0x18) = 0;
                *arg1 = 0x38;
                return result;
            }
            
            just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, arg2, 
                r14[1], rcx_31);
            result = var_1c8;
            
            if result != 0x38
            {
                goto 'label_665f21;
            }
            
            let rax_31: i64 = var_1b0;
            *var_109[8] = rax_31;
            zmm0_2 = var_1c8;
            var_118 = zmm0_2;
            *var_158[7] = zmm0_2;
            *arg1 = 2;
            zmm0_2 = var_158;
            result = result_1;
            rcx_32 = rax_31;
            'label_66604d:
            *arg1.byte_offset(1) = zmm0_2;
            *arg1.byte_offset(0x10) = result;
            *arg1.byte_offset(0x18) = rcx_32;
            result
        }
        2 =>
        {
            'label_666062:
            var_158 = &r14[1];
            
            if *(*arg2).byte_offset(0x198) != 0
            {
                var_118 = &var_158;
                *var_118[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h15fafb9b4c0844ff;
                var_1c8 = &data_82fb20;
                *var_1c8[8] = 2;
                *var_1b0[8] = 0;
                let var_1b8_1: *mut i128 = &var_118;
                var_1b0 = 1;
                let mut var_78: i128;
                let mut rcx_34: i64;
                let mut rdx_31: i64;
                let mut rsi_32: i64;
                let mut rdi_43: i64;
                let mut r8_11: i64;
                let mut r9_11: i64;
                rcx_34 = core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_78, 0, 
                    arg3, &var_1c8);
                let var_68: i64;
                *arg1.byte_offset(0x18) = var_68;
                /* tailcall */
                return sub_666154(var_78, arg1, rdi_43, rsi_32, rdx_31, rcx_34, r8_11, r9_11);
            }
            
            let mut rcx_36: i64;
            let mut rdx_33: i64;
            let mut rsi_34: i64;
            let mut rdi_45: i64;
            let mut r8_13: i64;
            let mut r9_12: i64;
            rcx_36 = just::evaluator::Evaluator::run_backtick::h68d1c4adb40306f8(&var_1c8, arg2, 
                r14[2], r14[3], &r14[4]);
            result = var_1c8;
            
            if result != 0x38
            {
                goto 'label_665f21;
            }
            
            let rax_35: i64 = var_1b0;
            *var_109[8] = rax_35;
            zmm0_2 = var_1c8;
            var_118 = zmm0_2;
            *arg1.byte_offset(0x18) = rax_35;
            /* tailcall */
            sub_666154(zmm0_2, arg1, rdi_45, rsi_34, rdx_33, rcx_36, r8_13, r9_12)
        }
        3 =>
        {
            'label_665343:
            let mut var_1b0_1: i128;
            let mut var_1a0_1: i128;
            let mut var_190_1: i128;
            let mut var_d8: i128;
            let mut rax_3: i8;
            let mut rax_16: i8;
            let mut rdx: i64;
            let mut rsi_1: i64;
            let mut rdi_1: i64;
            let mut rdi_16: *mut i64;
            let mut r8_1: i64;
            let mut r9_1: i64;
            
            match r13
            {
                0 =>
                {
                    let rax_1: i64 = r14[1];
                    let var_180_1: i64 = r14[0xa];
                    var_190_1 = *r14.byte_offset(0x40);
                    var_1a0_1 = *r14.byte_offset(0x30);
                    var_1b0_1 = *r14.byte_offset(0x20);
                    var_1c8 = *r14.byte_offset(0x10);
                    var_1c8 = arg2;
                    result = rax_1(&var_118, &var_1c8);
                    'label_665a33:
                    
                    if (var_118 & 1) == 0
                    {
                        let rcx_21: i64 = *var_109[9];
                        *arg1.byte_offset(0x18) = rcx_21;
                        /* tailcall */
                        return sub_666154(var_118, arg1, rdi_1, rsi_1, rdx, rcx_21, r8_1, r9_1);
                    }
                    
                    let rcx_18: i64 = *(&data_49fa78).byte_offset(r13 << 3);
                    *var_190_1[0xf] = *r14.byte_offset(rcx_18).byte_offset(0x40);
                    let zmm2_1: i128 = *r14.byte_offset(rcx_18).byte_offset(0x20);
                    let zmm3_1: i128 = *r14.byte_offset(rcx_18).byte_offset(0x30);
                    *var_1b8[7] = *r14.byte_offset(rcx_18).byte_offset(0x10);
                    var_1c8 = *r14.byte_offset(rcx_18);
                    *arg1.byte_offset(0x60) = *var_109[9];
                    *arg1.byte_offset(0x50) = var_118;
                    *arg1 = 0x19;
                    *arg1.byte_offset(1) = var_1c8;
                    *arg1.byte_offset(0x11) = var_1b8;
                    *arg1.byte_offset(0x21) = zmm2_1;
                    *arg1.byte_offset(0x31) = zmm3_1;
                    *arg1.byte_offset(0x40) = var_190_1;
                    return result;
                }
                1 =>
                {
                    just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, 
                        arg2, r14[2]);
                    result = var_1c8;
                    
                    if result == 0x38
                    {
                        var_138 = var_1c8;
                        let rax_14: i64 = r14[1];
                        let var_180_5: i64 = r14[0xb];
                        var_190_1 = *r14.byte_offset(0x48);
                        var_1a0_1 = *r14.byte_offset(0x38);
                        var_1b0_1 = *r14.byte_offset(0x28);
                        var_1c8 = *r14.byte_offset(0x18);
                        var_1c8 = arg2;
                        rax_14(&var_118, &var_1c8, *var_138[8], var_1b0);
                        rdi_16 = &var_138;
                        'label_665a26:
                        result = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(rdi_16);
                        goto 'label_665a33;
                    }
                }
                2 =>
                {
                    just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, 
                        arg2, r14[2]);
                    result = var_1c8;
                    
                    if result == 0x38
                    {
                        var_f8 = var_1c8;
                        let rdx_5: *mut i32 = r14[3];
                        let mut r8_3: i64;
                        
                        if *rdx_5 != 0x12
                        {
                            just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(
                                &var_1c8, arg2, rdx_5);
                            rax_3 = var_1c8;
                            
                            if rax_3 != 0x38
                            {
                                goto 'label_665c05;
                            }
                            
                            var_138 = var_1c8;
                            let var_128_6: i64 = var_1b0;
                            r8_3 = 0;
                            
                            if !(0 + -(var_138))
                            {
                                r8_3 = *var_138[8];
                            }
                        }
                        else
                        {
                            var_138 = -0x8000000000000000;
                            r8_3 = 0;
                        }
                        
                        let rax_7: i64 = r14[1];
                        let var_180_3: i64 = r14[0xc];
                        var_190_1 = *r14.byte_offset(0x50);
                        var_1a0_1 = *r14.byte_offset(0x40);
                        var_1b0_1 = *r14.byte_offset(0x30);
                        var_1c8 = *r14.byte_offset(0x20);
                        var_1c8 = arg2;
                        rax_7(&var_118, &var_1c8, *var_f8[8], var_1b0, r8_3);
                        core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(
                            &var_138);
                        rdi_16 = &var_f8;
                        goto 'label_665a26;
                    }
                }
                3 =>
                {
                    just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, 
                        arg2, r14[0xb]);
                    result = var_1c8;
                    
                    if result == 0x38
                    {
                        var_f8 = var_1c8;
                        var_138 = 0;
                        *var_138[8] = 8;
                        let var_128_2: i64 = 0;
                        let rbp_1: i64 = r14[0xe];
                        
                        if rbp_1 == 0
                        {
                            'label_665625:
                            let rax_12: i64 = r14[1];
                            let var_180_4: i64 = r14[0xa];
                            var_190_1 = *r14.byte_offset(0x40);
                            var_1a0_1 = *r14.byte_offset(0x30);
                            var_1b0_1 = *r14.byte_offset(0x20);
                            var_1c8 = *r14.byte_offset(0x10);
                            var_1c8 = arg2;
                            rax_12(&var_118, &var_1c8, *var_f8[8], var_1b0, *var_138[8], var_128_2);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_138);
                            rdi_16 = &var_f8;
                            goto 'label_665a26;
                        }
                        
                        let mut r12_1: i64 = r14[0xd];
                        let mut rbp_2: i64 = rbp_1 << 7;
                        
                        loop
                        {
                            just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(
                                &var_1c8, arg2, r12_1);
                            let rax_9: i8 = var_1c8;
                            
                            if rax_9 != 0x38
                            {
                                *result_1[7] = var_1b8;
                                var_158 = var_1c8;
                                *arg1.byte_offset(0x60) = var_168;
                                *arg1.byte_offset(0x50) = var_178;
                                *arg1.byte_offset(0x40) = var_190;
                                *arg1.byte_offset(0x30) = var_1a0;
                                *arg1.byte_offset(0x20) = var_1b0;
                                *arg1.byte_offset(0x10) = *result_1[7];
                                *arg1.byte_offset(1) = var_158;
                                *arg1 = rax_9;
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_138);
                                break;
                            }
                            
                            *var_158[7] = var_1c8;
                            let mut var_b8: i128 = *var_158[7];
                            let var_a8_1: i64 = var_1b0;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h2be7ee32b7c9f397(&var_138, 
                                &var_b8);
                            r12_1 -= -0x80;
                            let temp1_1: i64 = rbp_2;
                            rbp_2 -= 0x80;
                            
                            if temp1_1 == 0x80
                            {
                                goto 'label_665625;
                            }
                        }
                        
                        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_f8);
                    }
                }
                4 =>
                {
                    just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, 
                        arg2, r14[2]);
                    result = var_1c8;
                    
                    if result == 0x38
                    {
                        var_f8 = var_1c8;
                        just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(
                            &var_1c8, arg2, r14[3]);
                        rax_3 = var_1c8;
                        
                        if rax_3 == 0x38
                        {
                            var_138 = var_1c8;
                            let rax_5: i64 = r14[1];
                            let var_180_2: i64 = r14[0xc];
                            var_190_1 = *r14.byte_offset(0x50);
                            var_1a0_1 = *r14.byte_offset(0x40);
                            var_1b0_1 = *r14.byte_offset(0x30);
                            var_1c8 = *r14.byte_offset(0x20);
                            var_1c8 = arg2;
                            rax_5(&var_118, &var_1c8, *var_f8[8], var_1b0, *var_138[8], var_1b0);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_138);
                            rdi_16 = &var_f8;
                            goto 'label_665a26;
                        }
                        
                        'label_665c05:
                        *result_1[7] = var_1b8;
                        var_158 = var_1c8;
                        *arg1.byte_offset(0x60) = var_168;
                        *arg1.byte_offset(0x50) = var_178;
                        *arg1.byte_offset(0x40) = var_190;
                        *arg1.byte_offset(0x30) = var_1a0;
                        *arg1.byte_offset(0x20) = var_1b0;
                        *arg1.byte_offset(0x10) = *result_1[7];
                        *arg1.byte_offset(1) = var_158;
                        *arg1 = rax_3;
                        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_f8);
                    }
                }
                5 =>
                {
                    just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, 
                        arg2, r14[0xb]);
                    result = var_1c8;
                    
                    if result == 0x38
                    {
                        var_d8 = var_1c8;
                        just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(
                            &var_1c8, arg2, r14[0xc]);
                        rax_16 = var_1c8;
                        
                        if rax_16 != 0x38
                        {
                            'label_665b49:
                            *result_1[7] = var_1b8;
                            var_158 = var_1c8;
                            *arg1.byte_offset(0x60) = var_168;
                            *arg1.byte_offset(0x50) = var_178;
                            *arg1.byte_offset(0x40) = var_190;
                            *arg1.byte_offset(0x30) = var_1a0;
                            *arg1.byte_offset(0x20) = var_1b0;
                            *arg1.byte_offset(0x10) = *result_1[7];
                            *arg1.byte_offset(1) = var_158;
                            *arg1 = rax_16;
                            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_d8);
                        }
                        
                        var_f8 = var_1c8;
                        var_138 = 0;
                        *var_138[8] = 8;
                        let var_128_4: i64 = 0;
                        let rbp_3: i64 = r14[0xf];
                        
                        if rbp_3 != 0
                        {
                            let mut r12_2: i64 = r14[0xe];
                            let mut i_1: i64 = rbp_3 << 7;
                            let mut i: i64;
                            
                            do
                            {
                                just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(
                                    &var_1c8, arg2, r12_2);
                                let rax_18: i8 = var_1c8;
                                
                                if rax_18 != 0x38
                                {
                                    *result_1[7] = var_1b8;
                                    var_158 = var_1c8;
                                    *arg1.byte_offset(0x60) = var_168;
                                    *arg1.byte_offset(0x50) = var_178;
                                    *arg1.byte_offset(0x40) = var_190;
                                    *arg1.byte_offset(0x30) = var_1a0;
                                    *arg1.byte_offset(0x20) = var_1b0;
                                    *arg1.byte_offset(0x10) = *result_1[7];
                                    *arg1.byte_offset(1) = var_158;
                                    *arg1 = rax_18;
                                    let mut rcx_28: i64;
                                    let mut rdx_25: i64;
                                    let mut rsi_25: i64;
                                    let mut rdi_35: i64;
                                    let mut r8_9: i64;
                                    let mut r9_9: i64;
                                    rcx_28 = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_138);
                                    /* tailcall */
                                    return sub_665dab(rdi_35, rsi_25, rdx_25, rcx_28, r8_9, r9_9);
                                }
                                
                                *var_158[7] = var_1c8;
                                let mut var_98: i128 = *var_158[7];
                                let var_88_1: i64 = var_1b0;
                                alloc::vec::Vec$LT$T$C$A$GT$::push::h2be7ee32b7c9f397(&var_138, 
                                    &var_98);
                                r12_2 -= -0x80;
                                i = i_1;
                                i_1 -= 0x80;
                            } while i != 0x80;
                        }
                        
                        let rax_21: i64 = r14[1];
                        let var_180_6: i64 = r14[0xa];
                        var_190_1 = *r14.byte_offset(0x40);
                        var_1a0_1 = *r14.byte_offset(0x30);
                        var_1b0_1 = *r14.byte_offset(0x20);
                        var_1c8 = *r14.byte_offset(0x10);
                        var_1c8 = arg2;
                        rax_21(&var_118, &var_1c8, *var_d8[8], var_1b0, *var_f8[8], var_1b0, 
                            var_138, var_1c8);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_138);
                        'label_665a19:
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(
                            &var_f8);
                        rdi_16 = &var_d8;
                        goto 'label_665a26;
                    }
                }
                6 =>
                {
                    just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, 
                        arg2, r14[2]);
                    result = var_1c8;
                    
                    if result == 0x38
                    {
                        var_d8 = var_1c8;
                        just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(
                            &var_1c8, arg2, r14[3]);
                        rax_16 = var_1c8;
                        
                        if rax_16 != 0x38
                        {
                            goto 'label_665b49;
                        }
                        
                        var_f8 = var_1c8;
                        let mut rdx_21: i64;
                        let mut rsi_21: i64;
                        let mut rdi_26: i64;
                        let mut r8_6: i64;
                        let mut r9_5: i64;
                        rdx_21 = just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(
                            &var_1c8, arg2, r14[4]);
                        let rax_24: i8 = var_1c8;
                        
                        if rax_24 != 0x38
                        {
                            *result_1[7] = var_1b8;
                            var_158 = var_1c8;
                            *arg1.byte_offset(0x60) = var_168;
                            *arg1.byte_offset(0x50) = var_178;
                            *arg1.byte_offset(0x40) = var_190;
                            *arg1.byte_offset(0x30) = var_1a0;
                            *arg1.byte_offset(0x20) = var_1b0;
                            *arg1.byte_offset(0x10) = *result_1[7];
                            *arg1.byte_offset(1) = var_158;
                            *arg1 = rax_24;
                            /* tailcall */
                            return sub_665dab(rdi_26, rsi_21, rdx_21, var_168, r8_6, r9_5);
                        }
                        
                        var_138 = var_1c8;
                        let var_128_5: i64 = var_1b0;
                        let rax_26: i64 = r14[1];
                        let var_180_7: i64 = r14[0xd];
                        var_190_1 = *r14.byte_offset(0x58);
                        var_1a0_1 = *r14.byte_offset(0x48);
                        var_1b0_1 = *r14.byte_offset(0x38);
                        var_1c8 = *r14.byte_offset(0x28);
                        var_1c8 = arg2;
                        rax_26(&var_118, &var_1c8, *var_d8[8], var_1b0, *var_f8[8], var_1b0, 
                            var_138, var_1c8);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(
                            &var_138);
                        goto 'label_665a19;
                    }
                }
            }
            
            *result_1[7] = var_1b8;
            var_158 = var_1c8;
            *arg1.byte_offset(0x60) = var_168;
            *arg1.byte_offset(0x50) = var_178;
            *arg1.byte_offset(0x40) = var_190;
            *arg1.byte_offset(0x30) = var_1a0;
            *arg1.byte_offset(0x20) = var_1b0;
            *arg1.byte_offset(0x10) = *result_1[7];
            zmm0_2 = var_158;
            goto 'label_665f60;
        }
        4 =>
        {
            'label_66616c:
            just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, arg2, 
                r14[1]);
            result = var_1c8;
            
            if result != 0x38
            {
                goto 'label_665f21;
            }
            
            var_138 = var_1c8;
            just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, arg2, 
                r14[2]);
            rax_37 = var_1c8;
            
            if rax_37 == 0x38
            {
                let rcx_37: i64 = var_1b0;
                *var_109[8] = rcx_37;
                var_158 = var_1c8;
                let var_148_2: i64 = rcx_37;
                let var_1b8_2: i64 = var_1b0;
                var_1c8 = var_138;
                _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::hd8bff7acee645ba5(&var_118, &var_1c8, result_1, rcx_37);
                *arg1.byte_offset(0x18) = *var_109[1];
                zmm0_12 = var_118;
                'label_666228:
                *arg1.byte_offset(8) = zmm0_12;
                goto 'label_665f83;
            }
            
            'label_66624d:
            var_118 = var_1c8;
            *arg1.byte_offset(0x60) = var_168;
            *arg1.byte_offset(0x50) = var_178;
            *arg1.byte_offset(0x40) = var_190;
            *arg1.byte_offset(0x30) = var_1a0;
            *arg1.byte_offset(0x20) = var_1b0;
            *arg1.byte_offset(0x10) = var_1b8;
            *arg1.byte_offset(1) = var_118;
            *arg1 = rax_37;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_138)
        }
        5 =>
        {
            goto 'label_6662ab;
        }
        6 =>
        {
            loop
            {
                r14 = *r14.byte_offset(rax);
                r13 = *r14;
                let mut rax_42: i64 = r13 - 7;
                
                if rax_42 >= 0xb
                {
                    rax_42 = 3;
                }
                
                rax = 8;
                
                match rax_42
                {
                    0 =>
                    {
                        goto 'label_665ea5;
                    }
                    1 =>
                    {
                        goto 'label_665fb1;
                    }
                    2 =>
                    {
                        goto 'label_666062;
                    }
                    3 =>
                    {
                        break;
                    }
                    4 =>
                    {
                        goto 'label_66616c;
                    }
                    5 =>
                    {
                        'label_6662ab:
                        arg3 = just::evaluator::Evaluator::evaluate_condition::hff24f5aa7f9c2ad8(
                            &var_1c8, arg2, &r14[3]);
                        rcx_31 = var_1c8;
                        result = *var_1c8[1];
                        
                        if rcx_31 != 0x38
                        {
                            goto 'label_6663e0;
                        }
                        
                        result = !result;
                        rax = ((result & 1) << 3) + 8;
                        continue;
                    }
                    6 =>
                    {
                        continue;
                    }
                    7 =>
                    {
                        goto 'label_6662f5;
                    }
                    8 =>
                    {
                        goto 'label_666430;
                    }
                    9 =>
                    {
                        goto 'label_665e80;
                    }
                    0xa =>
                    {
                        goto 'label_666485;
                    }
                }
            }
            
            goto 'label_665343;
        }
        7 =>
        {
            'label_6662f5:
            let rdx_38: i64 = r14[2];
            
            if rdx_38 == 0
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_138, "//rustc/bf64d66bd58719fac2585eae…", 1);
                just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, arg2, 
                    r14[1]);
                rax_37 = var_1c8;
                
                if rax_37 != 0x38
                {
                    goto 'label_66624d;
                }
                
                let rcx_44: i64 = var_1b0;
                *var_109[8] = rcx_44;
                let zmm0_11: i128 = var_1c8;
                var_118 = zmm0_11;
                var_158 = zmm0_11;
                let var_148_5: i64 = rcx_44;
                _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::hd8bff7acee645ba5(&var_f8, &var_138, result_1, rcx_44);
                let var_e8: i64;
                *arg1.byte_offset(0x18) = var_e8;
                zmm0_12 = var_f8;
                goto 'label_666228;
            }
            
            just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, arg2, 
                rdx_38);
            result = var_1c8;
            
            if result != 0x38
            {
                goto 'label_665f21;
            }
            
            var_138 = var_1c8;
            just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, arg2, 
                r14[1]);
            rax_37 = var_1c8;
            
            if rax_37 != 0x38
            {
                goto 'label_66624d;
            }
            
            var_158 = var_1c8;
            var_1c8 = var_138;
            _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::hd8bff7acee645ba5(&var_118, &var_1c8, "//rustc/bf64d66bd58719fac2585eae…", 1);
            _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::hd8bff7acee645ba5(&var_1c8, &var_118, result_1, var_1b0);
            *arg1.byte_offset(0x18) = var_1b0;
            zmm0_12 = var_1c8;
            goto 'label_666228;
        }
        8 =>
        {
            'label_666430:
            let mut rcx_42: i64;
            let mut rdx_43: i64;
            let mut rsi_44: i64;
            let mut rdi_55: i64;
            let mut r8_14: i64;
            let mut r9_13: i64;
            rcx_42 = just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, 
                arg2, r14[1]);
            result = var_1c8;
            
            if result != 0x38
            {
                goto 'label_665f21;
            }
            
            let rax_47: i64 = var_1b0;
            var_158 = var_1c8;
            
            if rax_47 != 0
            {
                *arg1.byte_offset(0x18) = rax_47;
                /* tailcall */
                return sub_666154(var_158, arg1, rdi_55, rsi_44, rdx_43, rcx_42, r8_14, r9_13);
            }
            
            just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(arg1, arg2, r14[2]);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_158)
        }
        9 =>
        {
            'label_665e80:
            let mut rcx_29: i64;
            let mut rdx_26: i64;
            let mut rsi_27: i64;
            let mut rdi_37: i64;
            let mut r8_10: i64;
            let mut r9_10: i64;
            rcx_29 = _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_1c8, &r14[1]);
            *arg1.byte_offset(0x18) = var_1b8;
            /* tailcall */
            sub_666154(var_1c8, arg1, rdi_37, rsi_27, rdx_26, rcx_29, r8_10, r9_10)
        }
        0xa =>
        {
            'label_666485:
            let mut rax_49: *mut c_void;
            let mut rdx_44: u64;
            rax_49 = just::token::Token::lexeme::h66587cdf67f63270(&r14[1]);
            var_158 = rax_49;
            let var_150: u64 = rdx_44;
            let mut rax_50: i64;
            let mut rdx_45: u64;
            rax_50 = just::scope::Scope::value::hb06d4bb986c3514e(&arg2[5], rax_49, rdx_44);
            
            if rax_50 != 0
            {
                let mut var_48: i128;
                let mut rcx_43: i64;
                let mut rdx_46: i64;
                let mut rsi_47: i64;
                let mut rdi_59: i64;
                let mut r8_15: i64;
                let mut r9_14: i64;
                rcx_43 = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_48, rax_50, rdx_45);
                let var_38: i64;
                *arg1.byte_offset(0x18) = var_38;
                /* tailcall */
                return sub_666154(var_48, arg1, rdi_59, rsi_47, rdx_46, rcx_43, r8_15, r9_14);
            }
            
            let rax_53: *mut i64 = arg2[4];
            let mut rax_54: *mut i64;
            
            if rax_53 != 0
            {
                rax_54 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h62a22d89973a7e72(*rax_53, rax_53[1], rax_49, rdx_44);
            }
            
            if rax_53 == 0 || rax_54 == 0
            {
                var_118 = &var_158;
                *var_118[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
                var_1c8 = &data_82fb40;
                *var_1c8[8] = 2;
                *var_1b0[8] = 0;
                let mut var_1b8_4: *mut i128 = &var_118;
                var_1b0 = 1;
                let mut var_60: i128;
                core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_60, 0, rdx_45, 
                    &var_1c8);
                var_1c8 = var_60;
                let var_50: i64;
                var_1b8_4 = var_50;
                *arg1 = 0x1d;
                zmm0_2 = var_1c8;
                result = *var_1c8[0xf];
                rcx_32 = var_1b8_4;
                goto 'label_66604d;
            }
            
            just::evaluator::Evaluator::evaluate_assignment::h6f66c21b7dd7e3b7(&var_1c8, arg2, 
                rax_54);
            result = var_1c8;
            
            if result == 0x38
            {
                let mut rcx_46: i64;
                let mut rdx_52: i64;
                let mut rsi_53: i64;
                let mut rdi_66: i64;
                let mut r8_16: i64;
                let mut r9_15: i64;
                rcx_46 = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_118, *var_1c8[8], var_1b8);
                *arg1.byte_offset(0x18) = *var_109[1];
                /* tailcall */
                return sub_666154(var_118, arg1, rdi_66, rsi_53, rdx_52, rcx_46, r8_16, r9_15);
            }
            
            let rcx_48: i32 = *var_1c8[1];
            *arg1.byte_offset(4) = *var_1c8[4];
            *arg1.byte_offset(1) = rcx_48;
            let zmm0_14: i128 = var_1c8;
            *arg1.byte_offset(0x18) = var_1b0;
            *arg1.byte_offset(0x28) = var_1a0;
            *arg1.byte_offset(0x38) = var_190;
            let var_180: i64;
            *arg1.byte_offset(0x48) = var_180;
            *arg1.byte_offset(0x58) = var_178;
            *arg1 = result;
            *arg1.byte_offset(8) = zmm0_14;
            result
        }
    }
}
