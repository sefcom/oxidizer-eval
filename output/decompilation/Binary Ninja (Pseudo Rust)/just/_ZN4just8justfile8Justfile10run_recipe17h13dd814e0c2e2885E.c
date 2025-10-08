
  fn just::justfile::Justfile::run_recipe::h13dd814e0c2e2885(arg1: *mut i8, arg2: *mut c_void, arg3: i64, arg4: *mut c_void, arg5: i64, arg6: i8, arg7: *mut i32, arg8: *mut c_void, arg9: *mut *mut c_void, arg10: i64) -> *mut i64

{
    let rax: *mut c_void = just::ran::Ran::mutex::heea021f2ce4a14a7(arg7, arg8, arg2, arg3);
    let mut var_140: *mut c_void = rax;
    let mut var_1a8: i8;
    std::sync::poison::mutex::Mutex$LT$T$GT$::lock::hb47545a45a83d034(&var_1a8, 
        rax.byte_offset(0x10));
    let mut rax_1: *mut i32;
    let mut rdx_1: i8;
    rax_1 = core::result::Result$LT$T$C$E$GT$::unwrap::h269726c6fb11b939(&var_1a8);
    
    if *rax_1.byte_offset(5) != 0
    {
        *arg1 = 0x38;
    }
    else
    {
        let var_1a7: i8;
        let var_1a6: i128;
        let var_196: i128;
        let var_186: i128;
        let var_176: i128;
        let var_166: i128;
        let var_148: i64;
        
        if *arg4.byte_offset(0x1a5) == 0
        {
            just::recipe::Recipe$LT$D$GT$::confirm::hf942a5381005005c(&var_1a8, arg8);
            let rcx_7: i8 = var_1a8;
            
            if rcx_7 != 0x38
            {
                *arg1.byte_offset(0x60) = var_148;
                let var_156: i128;
                *arg1.byte_offset(0x52) = var_156;
                *arg1.byte_offset(0x42) = var_166;
                *arg1.byte_offset(0x32) = var_176;
                *arg1.byte_offset(0x22) = var_186;
                *arg1.byte_offset(0x12) = var_196;
                *arg1.byte_offset(2) = var_1a6;
                *arg1 = rcx_7;
                arg1[1] = var_1a7;
            }
            else
            {
                if (var_1a7 & 1) != 0
                {
                    goto 'label_66ef0f;
                }
                
                let mut rax_11: *mut c_void;
                let mut rdx_12: i64;
                rax_11 = just::token::Token::lexeme::h66587cdf67f63270(arg8.byte_offset(0x90));
                *arg1 = 0x26;
                *arg1.byte_offset(8) = rax_11;
                *arg1.byte_offset(0x10) = rdx_12;
            }
        }
        else
        {
            'label_66ef0f:
            let mut rax_2: *mut c_void;
            let mut rdx_2: u64;
            rax_2 = just::recipe::Recipe::module_path::h2114682f44294136(arg8);
            let rax_3: *mut i64 =
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hd770162b19fb0ee2(
                *arg9, arg9[1], rax_2, rdx_2);
            
            if rax_3 == 0
            {
                core::option::expect_failed::h3f620cfb8545dc61("failed to retrieve scope for mod…");
                /* no return */
            }
            
            let rcx_2: i64 = *rax_3;
            let mut var_138: *mut c_void = arg4;
            let var_130_1: i64 = arg5;
            let var_120_1: i64 = arg10;
            just::evaluator::Evaluator::evaluate_parameters::ha5b7a1a22f5cd100(&var_1a8, &var_138, 
                arg6, arg2, arg3, *arg8.byte_offset(0x50), *arg8.byte_offset(0x58), rax_3[1]);
            let rax_4: i8 = var_1a8;
            let mut var_f8: i128;
            
            if rax_4 != 0x38
            {
                var_f8 = var_1a7;
                *arg1.byte_offset(0x60) = var_148;
                *arg1.byte_offset(0x50) = var_166;
                *arg1.byte_offset(0x40) = var_176;
                *arg1.byte_offset(0x30) = var_186;
                let zmm0_1: i128 = var_f8;
                *arg1.byte_offset(0x21) = var_196;
                *arg1.byte_offset(0x11) = var_1a6;
                *arg1.byte_offset(1) = zmm0_1;
                *arg1 = rax_4;
            }
            else
            {
                let rax_5: i64 = *var_176[6];
                let mut var_c9: i128;
                *var_c9[8] = rax_5;
                let var_d8: i128 = var_186;
                let var_e8: i128 = var_196;
                var_f8 = var_1a6;
                let var_48_1: i128 = var_196;
                let mut var_58: i128 = var_1a6;
                let mut var_118: i128 = var_186;
                let mut var_98: i64 = 0;
                let var_88_1: i64 = 0;
                let var_80_1: *mut i128 = &var_58;
                let var_d8_1: i128 = {0};
                var_f8 = var_138;
                let var_e8_1: i128 = rcx_2;
                let var_b0_1: i8 = 1;
                *var_c9[9] = 0;
                let var_b8_1: *mut i64 = &var_98;
                let r12_1: i64 = *arg8.byte_offset(0xf0);
                let rbx_1: *mut c_void = *arg8.byte_offset(0x20);
                let rbp_1: i64 = *arg8.byte_offset(0x28);
                let mut rax_6: *mut c_void;
                let mut rdx_8: i64;
                rax_6 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hd2d1f379cc75c597(r12_1, rbx_1, rbp_1);
                just::justfile::Justfile::run_dependencies::h985cd0506c66477f(&var_1a8, arg4, 
                    &var_138, rax_6, rdx_8, arg5, &var_f8, arg7, arg8, arg9, arg10);
                let mut rax_7: i8 = var_1a8;
                
                if rax_7 != 0x38
                {
                    'label_66f345:
                    *arg1.byte_offset(0x60) = var_148;
                    *arg1.byte_offset(0x51) = var_166;
                    *arg1.byte_offset(0x41) = var_176;
                    *arg1.byte_offset(0x31) = var_186;
                    *arg1.byte_offset(0x21) = var_196;
                    *arg1.byte_offset(0x11) = var_1a6;
                    *arg1.byte_offset(1) = var_1a7;
                    *arg1 = rax_7;
                    'label_66f390:
                    core::ptr::drop_in_place$LT$just..evaluator..Evaluator$GT$::he8a263daf6e01e97(
                        &var_f8);
                    core::ptr::drop_in_place$LT$just..scope..Scope$GT$::h7ff7b84fe4911a9f(&var_98);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_118);
                    core::ptr::drop_in_place$LT$just..scope..Scope$GT$::h7ff7b84fe4911a9f(&var_58);
                }
                else
                {
                    just::recipe::Recipe$LT$D$GT$::run::hef557c87b94c38c2(&var_1a8, arg8, &var_138, 
                        &var_98, *var_118[8], rax_5, arg6);
                    rax_7 = var_1a8;
                    
                    if rax_7 != 0x38
                    {
                        goto 'label_66f345;
                    }
                    
                    if rbp_1 < r12_1
                    {
                        core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(r12_1, 
                            rbp_1);
                        /* no return */
                    }
                    
                    let mut var_78: i32 = 0;
                    let var_74_1: i8 = 0;
                    let var_70_1: i64 = 0;
                    let var_60_1: i64 = 0;
                    just::justfile::Justfile::run_dependencies::h985cd0506c66477f(&var_1a8, arg4, 
                        &var_138, rbx_1.byte_offset(r12_1 << 5), rbp_1 - r12_1, arg5, &var_f8, 
                        &var_78, arg8, arg9, arg10);
                    let rax_8: i8 = var_1a8;
                    
                    if rax_8 != 0x38
                    {
                        *arg1.byte_offset(0x60) = var_148;
                        *arg1.byte_offset(0x51) = var_166;
                        *arg1.byte_offset(0x41) = var_176;
                        *arg1.byte_offset(0x31) = var_186;
                        *arg1.byte_offset(0x21) = var_196;
                        *arg1.byte_offset(0x11) = var_1a6;
                        *arg1.byte_offset(1) = var_1a7;
                        *arg1 = rax_8;
                        core::ptr::drop_in_place$LT$just..ran..Ran$GT$::h351cc0e2f6e1536f(&var_78);
                        goto 'label_66f390;
                    }
                    
                    core::ptr::drop_in_place$LT$just..ran..Ran$GT$::h351cc0e2f6e1536f(&var_78);
                    *rax_1.byte_offset(5) = 1;
                    *arg1 = 0x38;
                    core::ptr::drop_in_place$LT$just..evaluator..Evaluator$GT$::he8a263daf6e01e97(
                        &var_f8);
                    core::ptr::drop_in_place$LT$just..scope..Scope$GT$::h7ff7b84fe4911a9f(&var_98);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_118);
                    core::ptr::drop_in_place$LT$just..scope..Scope$GT$::h7ff7b84fe4911a9f(&var_58);
                }
            }
        }
    }
    
    core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$just..signal_handler..SignalHandler$GT$$GT$::hf98ecd4a30a182c6(rax_1, rdx_1 & 1);
    core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$std..sync..poison..mutex..Mutex$LT$bool$GT$$GT$$GT$::hc5f130d1b842e4bb(&var_140)
}
