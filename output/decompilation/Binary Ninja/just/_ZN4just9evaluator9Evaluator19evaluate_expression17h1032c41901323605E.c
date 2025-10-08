
  uint64_t just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(char* arg1, int64_t* arg2, int64_t* arg3)

{
    int64_t* r14 = arg3;
    int64_t r13 = *arg3;
    int64_t rcx = r13 - 7;
    
    if (rcx >= 0xb)
        rcx = 3;
    
    void* rax = 8;
    int128_t var_1c8;
    uint64_t var_1b8;
    int128_t var_1b0;
    int128_t var_1a0;
    int128_t var_190;
    int128_t var_178;
    int64_t var_168;
    void* var_158;
    int64_t result_1;
    int128_t var_138;
    int128_t var_118;
    int128_t var_109;
    int128_t var_f8;
    uint64_t result;
    char rax_37;
    char rcx_31;
    int128_t* rcx_32;
    int128_t zmm0_2;
    int128_t zmm0_12;
    
    switch (rcx)
    {
        case 0:
        {
            label_665ea5:
            just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, arg2, 
                r14[1]);
            result = var_1c8;
            
            if (result != 0x38)
            {
                label_665f21:
                var_118 = var_1c8;
                *(arg1 + 0x60) = var_168;
                *(arg1 + 0x50) = var_178;
                *(arg1 + 0x40) = var_190;
                *(arg1 + 0x30) = var_1a0;
                *(arg1 + 0x20) = var_1b0;
                *(arg1 + 0x10) = var_1b8;
                zmm0_2 = var_118;
                label_665f60:
                *(arg1 + 1) = zmm0_2;
                *arg1 = result;
                return result;
            }
            
            int64_t rax_30 = var_1b0;
            var_158 = var_1c8;
            int64_t var_148_1 = rax_30;
            
            if (rax_30)
            {
                just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(arg1, arg2, 
                    r14[2]);
                return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(
                    &var_158);
            }
            
            *(arg1 + 8) = 0;
            *(arg1 + 0x10) = 1;
            *(arg1 + 0x18) = 0;
            label_665f83:
            *arg1 = 0x38;
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(
                &var_158);
            break;
        }
        case 1:
        {
            label_665fb1:
            just::evaluator::Evaluator::evaluate_condition::hff24f5aa7f9c2ad8(&var_1c8, arg2, 
                &r14[2]);
            rcx_31 = var_1c8;
            result = *var_1c8[1];
            
            if (rcx_31 != 0x38)
            {
                label_6663e0:
                *(arg1 + 0x60) = var_168;
                *(arg1 + 0x52) = var_178;
                *(arg1 + 0x42) = var_190;
                int128_t zmm0 = var_1c8;
                *(arg1 + 0x32) = var_1a0;
                *(arg1 + 0x22) = var_1b0;
                *(arg1 + 0x12) = *var_1b8[2];
                *(arg1 + 2) = zmm0;
                *arg1 = rcx_31;
                arg1[1] = result;
                return result;
            }
            
            if (result & 1)
            {
                *(arg1 + 8) = 0;
                *(arg1 + 0x10) = 1;
                *(arg1 + 0x18) = 0;
                *arg1 = 0x38;
                return result;
            }
            
            just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, arg2, 
                r14[1], rcx_31);
            result = var_1c8;
            
            if (result != 0x38)
                goto label_665f21;
            
            int64_t rax_31 = var_1b0;
            *var_109[8] = rax_31;
            zmm0_2 = var_1c8;
            var_118 = zmm0_2;
            *var_158[7] = zmm0_2;
            *arg1 = 2;
            zmm0_2 = var_158;
            result = result_1;
            rcx_32 = rax_31;
            label_66604d:
            *(arg1 + 1) = zmm0_2;
            *(arg1 + 0x10) = result;
            *(arg1 + 0x18) = rcx_32;
            return result;
            break;
        }
        case 2:
        {
            label_666062:
            var_158 = &r14[1];
            
            if (*(*arg2 + 0x198))
            {
                var_118 = &var_158;
                *var_118[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h15fafb9b4c0844ff;
                var_1c8 = &data_82fb20;
                *var_1c8[8] = 2;
                *var_1b0[8] = 0;
                int128_t* var_1b8_1 = &var_118;
                var_1b0 = 1;
                int128_t var_78;
                int64_t rcx_34;
                int64_t rdx_31;
                int64_t rsi_32;
                int64_t rdi_43;
                int64_t r8_11;
                int64_t r9_11;
                rcx_34 = core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_78, 0, 
                    arg3, &var_1c8);
                int64_t var_68;
                *(arg1 + 0x18) = var_68;
                /* tailcall */
                return sub_666154(var_78, arg1, rdi_43, rsi_32, rdx_31, rcx_34, r8_11, r9_11);
            }
            
            int64_t rcx_36;
            int64_t rdx_33;
            int64_t rsi_34;
            int64_t rdi_45;
            int64_t r8_13;
            int64_t r9_12;
            rcx_36 = just::evaluator::Evaluator::run_backtick::h68d1c4adb40306f8(&var_1c8, arg2, 
                r14[2], r14[3], &r14[4]);
            result = var_1c8;
            
            if (result != 0x38)
                goto label_665f21;
            
            int64_t rax_35 = var_1b0;
            *var_109[8] = rax_35;
            zmm0_2 = var_1c8;
            var_118 = zmm0_2;
            *(arg1 + 0x18) = rax_35;
            /* tailcall */
            return sub_666154(zmm0_2, arg1, rdi_45, rsi_34, rdx_33, rcx_36, r8_13, r9_12);
        }
        case 3:
        {
            label_665343:
            int128_t var_1b0_1;
            int128_t var_1a0_1;
            int128_t var_190_1;
            int128_t var_d8;
            char rax_3;
            char rax_16;
            int64_t rdx;
            int64_t rsi_1;
            int64_t rdi_1;
            int64_t* rdi_16;
            int64_t r8_1;
            int64_t r9_1;
            
            switch (r13)
            {
                case 0:
                {
                    int64_t rax_1 = r14[1];
                    int64_t var_180_1 = r14[0xa];
                    var_190_1 = *(r14 + 0x40);
                    var_1a0_1 = *(r14 + 0x30);
                    var_1b0_1 = *(r14 + 0x20);
                    var_1c8 = *(r14 + 0x10);
                    var_1c8 = arg2;
                    result = rax_1(&var_118, &var_1c8);
                    label_665a33:
                    
                    if (!(var_118 & 1))
                    {
                        int64_t rcx_21 = *var_109[9];
                        *(arg1 + 0x18) = rcx_21;
                        /* tailcall */
                        return sub_666154(var_118, arg1, rdi_1, rsi_1, rdx, rcx_21, r8_1, r9_1);
                    }
                    
                    int64_t rcx_18 = *(&data_49fa78 + (r13 << 3));
                    *var_190_1[0xf] = *(r14 + rcx_18 + 0x40);
                    int128_t zmm2_1 = *(r14 + rcx_18 + 0x20);
                    int128_t zmm3_1 = *(r14 + rcx_18 + 0x30);
                    *var_1b8[7] = *(r14 + rcx_18 + 0x10);
                    var_1c8 = *(r14 + rcx_18);
                    *(arg1 + 0x60) = *var_109[9];
                    *(arg1 + 0x50) = var_118;
                    *arg1 = 0x19;
                    *(arg1 + 1) = var_1c8;
                    *(arg1 + 0x11) = var_1b8;
                    *(arg1 + 0x21) = zmm2_1;
                    *(arg1 + 0x31) = zmm3_1;
                    *(arg1 + 0x40) = var_190_1;
                    return result;
                    break;
                }
                case 1:
                {
                    just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, 
                        arg2, r14[2]);
                    result = var_1c8;
                    
                    if (result == 0x38)
                    {
                        var_138 = var_1c8;
                        int64_t rax_14 = r14[1];
                        int64_t var_180_5 = r14[0xb];
                        var_190_1 = *(r14 + 0x48);
                        var_1a0_1 = *(r14 + 0x38);
                        var_1b0_1 = *(r14 + 0x28);
                        var_1c8 = *(r14 + 0x18);
                        var_1c8 = arg2;
                        rax_14(&var_118, &var_1c8, *var_138[8], var_1b0);
                        rdi_16 = &var_138;
                        label_665a26:
                        result = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(rdi_16);
                        goto label_665a33;
                    }
                    break;
                }
                case 2:
                {
                    just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, 
                        arg2, r14[2]);
                    result = var_1c8;
                    
                    if (result == 0x38)
                    {
                        var_f8 = var_1c8;
                        int32_t* rdx_5 = r14[3];
                        int64_t r8_3;
                        
                        if (*rdx_5 != 0x12)
                        {
                            just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(
                                &var_1c8, arg2, rdx_5);
                            rax_3 = var_1c8;
                            
                            if (rax_3 != 0x38)
                                goto label_665c05;
                            
                            var_138 = var_1c8;
                            int64_t var_128_6 = var_1b0;
                            r8_3 = 0;
                            
                            if (!(0 + -(var_138)))
                                r8_3 = *var_138[8];
                        }
                        else
                        {
                            var_138 = -0x8000000000000000;
                            r8_3 = 0;
                        }
                        
                        int64_t rax_7 = r14[1];
                        int64_t var_180_3 = r14[0xc];
                        var_190_1 = *(r14 + 0x50);
                        var_1a0_1 = *(r14 + 0x40);
                        var_1b0_1 = *(r14 + 0x30);
                        var_1c8 = *(r14 + 0x20);
                        var_1c8 = arg2;
                        rax_7(&var_118, &var_1c8, *var_f8[8], var_1b0, r8_3);
                        core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(
                            &var_138);
                        rdi_16 = &var_f8;
                        goto label_665a26;
                    }
                    break;
                }
                case 3:
                {
                    just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, 
                        arg2, r14[0xb]);
                    result = var_1c8;
                    
                    if (result == 0x38)
                    {
                        var_f8 = var_1c8;
                        var_138 = 0;
                        *var_138[8] = 8;
                        int64_t var_128_2 = 0;
                        int64_t rbp_1 = r14[0xe];
                        
                        if (!rbp_1)
                        {
                            label_665625:
                            int64_t rax_12 = r14[1];
                            int64_t var_180_4 = r14[0xa];
                            var_190_1 = *(r14 + 0x40);
                            var_1a0_1 = *(r14 + 0x30);
                            var_1b0_1 = *(r14 + 0x20);
                            var_1c8 = *(r14 + 0x10);
                            var_1c8 = arg2;
                            rax_12(&var_118, &var_1c8, *var_f8[8], var_1b0, *var_138[8], var_128_2);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_138);
                            rdi_16 = &var_f8;
                            goto label_665a26;
                        }
                        
                        int64_t r12_1 = r14[0xd];
                        int64_t rbp_2 = rbp_1 << 7;
                        
                        while (true)
                        {
                            just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(
                                &var_1c8, arg2, r12_1);
                            char rax_9 = var_1c8;
                            
                            if (rax_9 != 0x38)
                            {
                                *result_1[7] = var_1b8;
                                var_158 = var_1c8;
                                *(arg1 + 0x60) = var_168;
                                *(arg1 + 0x50) = var_178;
                                *(arg1 + 0x40) = var_190;
                                *(arg1 + 0x30) = var_1a0;
                                *(arg1 + 0x20) = var_1b0;
                                *(arg1 + 0x10) = *result_1[7];
                                *(arg1 + 1) = var_158;
                                *arg1 = rax_9;
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_138);
                                break;
                            }
                            
                            *var_158[7] = var_1c8;
                            int128_t var_b8 = *var_158[7];
                            int64_t var_a8_1 = var_1b0;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h2be7ee32b7c9f397(&var_138, 
                                &var_b8);
                            r12_1 -= -0x80;
                            int64_t temp1_1 = rbp_2;
                            rbp_2 -= 0x80;
                            
                            if (temp1_1 == 0x80)
                                goto label_665625;
                        }
                        
                        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_f8);
                    }
                    break;
                }
                case 4:
                {
                    just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, 
                        arg2, r14[2]);
                    result = var_1c8;
                    
                    if (result == 0x38)
                    {
                        var_f8 = var_1c8;
                        just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(
                            &var_1c8, arg2, r14[3]);
                        rax_3 = var_1c8;
                        
                        if (rax_3 == 0x38)
                        {
                            var_138 = var_1c8;
                            int64_t rax_5 = r14[1];
                            int64_t var_180_2 = r14[0xc];
                            var_190_1 = *(r14 + 0x50);
                            var_1a0_1 = *(r14 + 0x40);
                            var_1b0_1 = *(r14 + 0x30);
                            var_1c8 = *(r14 + 0x20);
                            var_1c8 = arg2;
                            rax_5(&var_118, &var_1c8, *var_f8[8], var_1b0, *var_138[8], var_1b0);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_138);
                            rdi_16 = &var_f8;
                            goto label_665a26;
                        }
                        
                        label_665c05:
                        *result_1[7] = var_1b8;
                        var_158 = var_1c8;
                        *(arg1 + 0x60) = var_168;
                        *(arg1 + 0x50) = var_178;
                        *(arg1 + 0x40) = var_190;
                        *(arg1 + 0x30) = var_1a0;
                        *(arg1 + 0x20) = var_1b0;
                        *(arg1 + 0x10) = *result_1[7];
                        *(arg1 + 1) = var_158;
                        *arg1 = rax_3;
                        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_f8);
                    }
                    break;
                }
                case 5:
                {
                    just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, 
                        arg2, r14[0xb]);
                    result = var_1c8;
                    
                    if (result == 0x38)
                    {
                        var_d8 = var_1c8;
                        just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(
                            &var_1c8, arg2, r14[0xc]);
                        rax_16 = var_1c8;
                        
                        if (rax_16 != 0x38)
                        {
                            label_665b49:
                            *result_1[7] = var_1b8;
                            var_158 = var_1c8;
                            *(arg1 + 0x60) = var_168;
                            *(arg1 + 0x50) = var_178;
                            *(arg1 + 0x40) = var_190;
                            *(arg1 + 0x30) = var_1a0;
                            *(arg1 + 0x20) = var_1b0;
                            *(arg1 + 0x10) = *result_1[7];
                            *(arg1 + 1) = var_158;
                            *arg1 = rax_16;
                            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_d8);
                        }
                        
                        var_f8 = var_1c8;
                        var_138 = 0;
                        *var_138[8] = 8;
                        int64_t var_128_4 = 0;
                        int64_t rbp_3 = r14[0xf];
                        
                        if (rbp_3)
                        {
                            int64_t r12_2 = r14[0xe];
                            int64_t i_1 = rbp_3 << 7;
                            int64_t i;
                            
                            do
                            {
                                just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(
                                    &var_1c8, arg2, r12_2);
                                char rax_18 = var_1c8;
                                
                                if (rax_18 != 0x38)
                                {
                                    *result_1[7] = var_1b8;
                                    var_158 = var_1c8;
                                    *(arg1 + 0x60) = var_168;
                                    *(arg1 + 0x50) = var_178;
                                    *(arg1 + 0x40) = var_190;
                                    *(arg1 + 0x30) = var_1a0;
                                    *(arg1 + 0x20) = var_1b0;
                                    *(arg1 + 0x10) = *result_1[7];
                                    *(arg1 + 1) = var_158;
                                    *arg1 = rax_18;
                                    int64_t rcx_28;
                                    int64_t rdx_25;
                                    int64_t rsi_25;
                                    int64_t rdi_35;
                                    int64_t r8_9;
                                    int64_t r9_9;
                                    rcx_28 = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_138);
                                    /* tailcall */
                                    return sub_665dab(rdi_35, rsi_25, rdx_25, rcx_28, r8_9, r9_9);
                                }
                                
                                *var_158[7] = var_1c8;
                                int128_t var_98 = *var_158[7];
                                int64_t var_88_1 = var_1b0;
                                alloc::vec::Vec$LT$T$C$A$GT$::push::h2be7ee32b7c9f397(&var_138, 
                                    &var_98);
                                r12_2 -= -0x80;
                                i = i_1;
                                i_1 -= 0x80;
                            } while (i != 0x80);
                        }
                        
                        int64_t rax_21 = r14[1];
                        int64_t var_180_6 = r14[0xa];
                        var_190_1 = *(r14 + 0x40);
                        var_1a0_1 = *(r14 + 0x30);
                        var_1b0_1 = *(r14 + 0x20);
                        var_1c8 = *(r14 + 0x10);
                        var_1c8 = arg2;
                        rax_21(&var_118, &var_1c8, *var_d8[8], var_1b0, *var_f8[8], var_1b0, 
                            var_138, var_1c8);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_138);
                        label_665a19:
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(
                            &var_f8);
                        rdi_16 = &var_d8;
                        goto label_665a26;
                    }
                    break;
                }
                case 6:
                {
                    just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, 
                        arg2, r14[2]);
                    result = var_1c8;
                    
                    if (result == 0x38)
                    {
                        var_d8 = var_1c8;
                        just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(
                            &var_1c8, arg2, r14[3]);
                        rax_16 = var_1c8;
                        
                        if (rax_16 != 0x38)
                            goto label_665b49;
                        
                        var_f8 = var_1c8;
                        int64_t rdx_21;
                        int64_t rsi_21;
                        int64_t rdi_26;
                        int64_t r8_6;
                        int64_t r9_5;
                        rdx_21 = just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(
                            &var_1c8, arg2, r14[4]);
                        char rax_24 = var_1c8;
                        
                        if (rax_24 != 0x38)
                        {
                            *result_1[7] = var_1b8;
                            var_158 = var_1c8;
                            *(arg1 + 0x60) = var_168;
                            *(arg1 + 0x50) = var_178;
                            *(arg1 + 0x40) = var_190;
                            *(arg1 + 0x30) = var_1a0;
                            *(arg1 + 0x20) = var_1b0;
                            *(arg1 + 0x10) = *result_1[7];
                            *(arg1 + 1) = var_158;
                            *arg1 = rax_24;
                            /* tailcall */
                            return sub_665dab(rdi_26, rsi_21, rdx_21, var_168, r8_6, r9_5);
                        }
                        
                        var_138 = var_1c8;
                        int64_t var_128_5 = var_1b0;
                        int64_t rax_26 = r14[1];
                        int64_t var_180_7 = r14[0xd];
                        var_190_1 = *(r14 + 0x58);
                        var_1a0_1 = *(r14 + 0x48);
                        var_1b0_1 = *(r14 + 0x38);
                        var_1c8 = *(r14 + 0x28);
                        var_1c8 = arg2;
                        rax_26(&var_118, &var_1c8, *var_d8[8], var_1b0, *var_f8[8], var_1b0, 
                            var_138, var_1c8);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(
                            &var_138);
                        goto label_665a19;
                    }
                    break;
                }
            }
            
            *result_1[7] = var_1b8;
            var_158 = var_1c8;
            *(arg1 + 0x60) = var_168;
            *(arg1 + 0x50) = var_178;
            *(arg1 + 0x40) = var_190;
            *(arg1 + 0x30) = var_1a0;
            *(arg1 + 0x20) = var_1b0;
            *(arg1 + 0x10) = *result_1[7];
            zmm0_2 = var_158;
            goto label_665f60;
        }
        case 4:
        {
            label_66616c:
            just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, arg2, 
                r14[1]);
            result = var_1c8;
            
            if (result != 0x38)
                goto label_665f21;
            
            var_138 = var_1c8;
            just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, arg2, 
                r14[2]);
            rax_37 = var_1c8;
            
            if (rax_37 == 0x38)
            {
                int64_t rcx_37 = var_1b0;
                *var_109[8] = rcx_37;
                var_158 = var_1c8;
                int64_t var_148_2 = rcx_37;
                int64_t var_1b8_2 = var_1b0;
                var_1c8 = var_138;
                _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::hd8bff7acee645ba5(&var_118, &var_1c8, result_1, rcx_37);
                *(arg1 + 0x18) = *var_109[1];
                zmm0_12 = var_118;
                label_666228:
                *(arg1 + 8) = zmm0_12;
                goto label_665f83;
            }
            
            label_66624d:
            var_118 = var_1c8;
            *(arg1 + 0x60) = var_168;
            *(arg1 + 0x50) = var_178;
            *(arg1 + 0x40) = var_190;
            *(arg1 + 0x30) = var_1a0;
            *(arg1 + 0x20) = var_1b0;
            *(arg1 + 0x10) = var_1b8;
            *(arg1 + 1) = var_118;
            *arg1 = rax_37;
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(
                &var_138);
            break;
        }
        case 5:
        {
            goto label_6662ab;
        }
        case 6:
        {
            while (true)
            {
                r14 = *(r14 + rax);
                r13 = *r14;
                int64_t rax_42 = r13 - 7;
                
                if (rax_42 >= 0xb)
                    rax_42 = 3;
                
                rax = 8;
                
                switch (rax_42)
                {
                    case 0:
                    {
                        goto label_665ea5;
                    }
                    case 1:
                    {
                        goto label_665fb1;
                    }
                    case 2:
                    {
                        goto label_666062;
                    }
                    case 3:
                    {
                        break;
                        break;
                    }
                    case 4:
                    {
                        goto label_66616c;
                    }
                    case 5:
                    {
                        label_6662ab:
                        arg3 = just::evaluator::Evaluator::evaluate_condition::hff24f5aa7f9c2ad8(
                            &var_1c8, arg2, &r14[3]);
                        rcx_31 = var_1c8;
                        result = *var_1c8[1];
                        
                        if (rcx_31 != 0x38)
                            goto label_6663e0;
                        
                        result = ~result;
                        rax = ((result & 1) << 3) + 8;
                        continue;
                    }
                    case 6:
                    {
                        continue;
                    }
                    case 7:
                    {
                        goto label_6662f5;
                    }
                    case 8:
                    {
                        goto label_666430;
                    }
                    case 9:
                    {
                        goto label_665e80;
                    }
                    case 0xa:
                    {
                        goto label_666485;
                    }
                }
            }
            
            goto label_665343;
        }
        case 7:
        {
            label_6662f5:
            int64_t rdx_38 = r14[2];
            
            if (!rdx_38)
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_138, "//rustc/bf64d66bd58719fac2585eae…", 1);
                just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, arg2, 
                    r14[1]);
                rax_37 = var_1c8;
                
                if (rax_37 != 0x38)
                    goto label_66624d;
                
                int64_t rcx_44 = var_1b0;
                *var_109[8] = rcx_44;
                int128_t zmm0_11 = var_1c8;
                var_118 = zmm0_11;
                var_158 = zmm0_11;
                int64_t var_148_5 = rcx_44;
                _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::hd8bff7acee645ba5(&var_f8, &var_138, result_1, rcx_44);
                int64_t var_e8;
                *(arg1 + 0x18) = var_e8;
                zmm0_12 = var_f8;
                goto label_666228;
            }
            
            just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, arg2, 
                rdx_38);
            result = var_1c8;
            
            if (result != 0x38)
                goto label_665f21;
            
            var_138 = var_1c8;
            just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, arg2, 
                r14[1]);
            rax_37 = var_1c8;
            
            if (rax_37 != 0x38)
                goto label_66624d;
            
            var_158 = var_1c8;
            var_1c8 = var_138;
            _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::hd8bff7acee645ba5(&var_118, &var_1c8, "//rustc/bf64d66bd58719fac2585eae…", 1);
            _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::hd8bff7acee645ba5(&var_1c8, &var_118, result_1, var_1b0);
            *(arg1 + 0x18) = var_1b0;
            zmm0_12 = var_1c8;
            goto label_666228;
        }
        case 8:
        {
            label_666430:
            int64_t rcx_42;
            int64_t rdx_43;
            int64_t rsi_44;
            int64_t rdi_55;
            int64_t r8_14;
            int64_t r9_13;
            rcx_42 = just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_1c8, 
                arg2, r14[1]);
            result = var_1c8;
            
            if (result != 0x38)
                goto label_665f21;
            
            int64_t rax_47 = var_1b0;
            var_158 = var_1c8;
            
            if (rax_47)
            {
                *(arg1 + 0x18) = rax_47;
                /* tailcall */
                return sub_666154(var_158, arg1, rdi_55, rsi_44, rdx_43, rcx_42, r8_14, r9_13);
            }
            
            just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(arg1, arg2, r14[2]);
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(
                &var_158);
            break;
        }
        case 9:
        {
            label_665e80:
            int64_t rcx_29;
            int64_t rdx_26;
            int64_t rsi_27;
            int64_t rdi_37;
            int64_t r8_10;
            int64_t r9_10;
            rcx_29 = _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_1c8, &r14[1]);
            *(arg1 + 0x18) = var_1b8;
            /* tailcall */
            return sub_666154(var_1c8, arg1, rdi_37, rsi_27, rdx_26, rcx_29, r8_10, r9_10);
        }
        case 0xa:
        {
            label_666485:
            void* rax_49;
            uint64_t rdx_44;
            rax_49 = just::token::Token::lexeme::h66587cdf67f63270(&r14[1]);
            var_158 = rax_49;
            uint64_t var_150 = rdx_44;
            int64_t rax_50;
            uint64_t rdx_45;
            rax_50 = just::scope::Scope::value::hb06d4bb986c3514e(&arg2[5], rax_49, rdx_44);
            
            if (rax_50)
            {
                int128_t var_48;
                int64_t rcx_43;
                int64_t rdx_46;
                int64_t rsi_47;
                int64_t rdi_59;
                int64_t r8_15;
                int64_t r9_14;
                rcx_43 = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_48, rax_50, rdx_45);
                int64_t var_38;
                *(arg1 + 0x18) = var_38;
                /* tailcall */
                return sub_666154(var_48, arg1, rdi_59, rsi_47, rdx_46, rcx_43, r8_15, r9_14);
            }
            
            int64_t* rax_53 = arg2[4];
            int64_t* rax_54;
            
            if (rax_53)
                rax_54 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h62a22d89973a7e72(*rax_53, rax_53[1], rax_49, rdx_44);
            
            if (!rax_53 || !rax_54)
            {
                var_118 = &var_158;
                *var_118[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
                var_1c8 = &data_82fb40;
                *var_1c8[8] = 2;
                *var_1b0[8] = 0;
                int128_t* var_1b8_4 = &var_118;
                var_1b0 = 1;
                int128_t var_60;
                core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_60, 0, rdx_45, 
                    &var_1c8);
                var_1c8 = var_60;
                int64_t var_50;
                var_1b8_4 = var_50;
                *arg1 = 0x1d;
                zmm0_2 = var_1c8;
                result = *var_1c8[0xf];
                rcx_32 = var_1b8_4;
                goto label_66604d;
            }
            
            just::evaluator::Evaluator::evaluate_assignment::h6f66c21b7dd7e3b7(&var_1c8, arg2, 
                rax_54);
            result = var_1c8;
            
            if (result == 0x38)
            {
                int64_t rcx_46;
                int64_t rdx_52;
                int64_t rsi_53;
                int64_t rdi_66;
                int64_t r8_16;
                int64_t r9_15;
                rcx_46 = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_118, *var_1c8[8], var_1b8);
                *(arg1 + 0x18) = *var_109[1];
                /* tailcall */
                return sub_666154(var_118, arg1, rdi_66, rsi_53, rdx_52, rcx_46, r8_16, r9_15);
            }
            
            int32_t rcx_48 = *var_1c8[1];
            *(arg1 + 4) = *var_1c8[4];
            *(arg1 + 1) = rcx_48;
            int128_t zmm0_14 = var_1c8;
            *(arg1 + 0x18) = var_1b0;
            *(arg1 + 0x28) = var_1a0;
            *(arg1 + 0x38) = var_190;
            int64_t var_180;
            *(arg1 + 0x48) = var_180;
            *(arg1 + 0x58) = var_178;
            *arg1 = result;
            *(arg1 + 8) = zmm0_14;
            return result;
            break;
        }
    }
}
