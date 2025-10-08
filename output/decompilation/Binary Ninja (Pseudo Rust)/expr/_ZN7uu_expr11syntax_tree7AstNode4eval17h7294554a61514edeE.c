
  fn uu_expr::syntax_tree::AstNode::eval::h7294554a61514ede(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let rax: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 8);
    
    if rax == 0
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    *rax = arg2;
    let mut var_288: i64 = 1;
    let mut var_270: i64 = 0;
    let var_260: i64 = 0;
    let mut var_278: i64 = 0;
    let mut rbp: u64 = rax;
    let mut r13: *mut i64 = *rbp;
    let mut rax_1: i64 = *r13;
    let mut rsi: i64 = 0;
    
    if rax_1 + 0x7fffffffffffffff < 4
    {
        rsi = rax_1 ^ 0x8000000000000000;
    }
    
    let mut r14: i64 = var_288;
    let mut var_2b8: i128;
    let mut var_2a8: i128;
    let var_298: i64;
    let mut var_258: i128;
    let mut var_250: *mut i8;
    let mut var_248: i128;
    let mut var_238: i64;
    let mut var_1d8: i128;
    let var_1c8: i128;
    let var_1b8: i64;
    let mut var_170: i128;
    let mut rbx_2: *mut c_void;
    let mut rsi_32: u64;
    let mut rdi_43: i64;
    
    match rsi
    {
        0 =>
        {
            'label_4a57d4:
            let rbp_1: i32 = r13[4];
            let mut rax_4: *mut i8;
            let mut rbx_1: i8;
            
            if rax_1 != -0x8000000000000000
            {
                rbx_1 = r13[3];
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::he7c299945dfde9b2(&var_2b8, r13[1], r13[2]);
                rax_4 = var_2b8;
                var_1d8 = var_2b8;
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_2b8, &r13[1]);
                var_1d8 = var_2b8;
                rbx_1 = var_2a8;
                var_170 = *var_2a8[1];
                *var_170[3] = *var_2a8[4];
                rax_4 = -0x8000000000000000;
            }
            
            var_250 = rax_4;
            var_248 = var_1d8;
            var_238 = rbx_1;
            *var_238[4] = *var_170[3];
            *var_238[1] = var_170;
            var_258 = 0;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hd3e63ca5919932ed(
                &var_2b8, &var_270, rbp_1, &var_258);
            core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$$GT$::h00a86d471ef57dac(&var_2b8);
            goto 'label_4a5783;
        }
        1 =>
        {
            'label_4a5cb5:
            let rbx_4: i32 = r13[4];
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_2b8, &r13[1]);
            var_238 = var_2a8;
            var_248 = var_2b8;
            var_250 = -0x8000000000000000;
            var_258 = 0;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hd3e63ca5919932ed(
                &var_2b8, &var_270, rbx_4, &var_258);
            core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$$GT$::h00a86d471ef57dac(&var_2b8);
            goto 'label_4a5783;
        }
        2 =>
        {
            loop
            {
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h99c8b623889323ea(&var_1d8, &var_270, *(r13[2] + 0x20));
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h99c8b623889323ea(&var_2b8, &var_270, *(r13[1] + 0x20));
                rbx_2 = &r13[1];
                var_238 = var_1b8;
                var_248 = var_1c8;
                var_258 = var_1d8;
                let var_230_2: i128 = var_2b8;
                
                if var_258 != 2 && var_230_2 != 2
                {
                    let var_98_1: i64 = var_238;
                    let var_a8_1: i128 = var_248;
                    let mut var_b8: i128 = var_258;
                    let mut var_88: i128 = var_230_2;
                    let var_78_1: i128 = var_2a8;
                    let var_68_1: i64 = var_298;
                    let mut var_58: ();
                    uu_expr::syntax_tree::BinOp::eval::h135374f3f8bf6168(&var_58, r13[3], 
                        *r13.byte_offset(0x19), &var_88, &var_b8);
                    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hd3e63ca5919932ed(&var_258, &var_270, r13[4], &var_58);
                    core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$$GT$::h00a86d471ef57dac(&var_258);
                    'label_4a5783:
                    let rax_2: i64 = var_278;
                    
                    if rax_2 == 0
                    {
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h99c8b623889323ea(&var_258, &var_270, *arg2.byte_offset(0x20));
                        
                        if var_258 == 2
                        {
                            core::option::unwrap_failed::h893f57cb7db71cb7();
                            /* no return */
                        }
                        
                        arg1[4] = var_238;
                        let zmm0_11: i128 = var_258;
                        *arg1.byte_offset(0x10) = var_248;
                        *arg1 = zmm0_11;
                        core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$u32$C$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$$GT$::h5aab3143cda1a591(&var_270);
                        rdi_43 = var_288;
                        rsi_32 = rax;
                        goto 'label_4a6051;
                    }
                    
                    var_278 = rax_2 - 1;
                    r14 = var_288;
                    rbp = rax;
                    r13 = *(rbp + (rax_2 << 3) - 8);
                    rax_1 = *r13;
                    let mut rsi_1: i64 = 0;
                    
                    if rax_1 + 0x7fffffffffffffff < 4
                    {
                        rsi_1 = rax_1 ^ 0x8000000000000000;
                    }
                    
                    match rsi_1
                    {
                        0 =>
                        {
                            goto 'label_4a57d4;
                        }
                        1 =>
                        {
                            goto 'label_4a5cb5;
                        }
                        2 =>
                        {
                            continue;
                        }
                        3 =>
                        {
                            goto 'label_4a58aa;
                        }
                        4 =>
                        {
                            goto 'label_4a5be0;
                        }
                    }
                }
                
                core::ptr::drop_in_place$LT$$LP$core..option..Option$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$$C$core..option..Option$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$$RP$$GT$::hbde778e28d7a7b9e(&var_258);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h3d6e35a0706b285e(&var_288, r13);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h3d6e35a0706b285e(&var_288, r13[2]);
                break;
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::h3d6e35a0706b285e(&var_288, *rbx_2);
            goto 'label_4a5783;
        }
        3 =>
        {
            'label_4a58aa:
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h99c8b623889323ea(
                &var_170, &var_270, *(r13[1] + 0x20));
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h99c8b623889323ea(
                &var_1d8, &var_270, *(r13[2] + 0x20));
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h99c8b623889323ea(
                &var_2b8, &var_270, *(r13[3] + 0x20));
            rbx_2 = &r13[3];
            let var_150: i64;
            var_238 = var_150;
            let var_160: i128;
            var_248 = var_160;
            var_258 = var_170;
            let var_230_1: i128 = var_1d8;
            let var_208_1: i128 = var_2b8;
            let rax_12: i64 = var_258;
            
            if rax_12 == 2 || var_230_1 == 2 || var_208_1 == 2
            {
                core::ptr::drop_in_place$LT$$LP$core..option..Option$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$$C$core..option..Option$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$$C$core..option..Option$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$$RP$$GT$::hd016b3437cc63792(&var_258);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h3d6e35a0706b285e(&var_288, r13);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h3d6e35a0706b285e(&var_288, r13[1]);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h3d6e35a0706b285e(&var_288, r13[2]);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h3d6e35a0706b285e(&var_288, *rbx_2);
                goto 'label_4a5783;
            }
            
            let mut var_118: i128 = var_250;
            let mut var_148: i128 = var_230_1;
            let var_128_1: i64 = var_1b8;
            let mut var_1a8: i128 = var_208_1;
            let var_198_1: i128 = var_2a8;
            let var_188_1: i64 = var_298;
            let mut rdi_47: *mut i128;
            
            if (rax_12 & 1) != 0
            {
                let zmm0_2: i128 = var_118;
                *arg1.byte_offset(0x18) = var_248;
                *arg1.byte_offset(8) = zmm0_2;
                *arg1 = 1;
                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$::h0c833a88cc9a87cf(&var_1a8);
                rdi_47 = &var_148;
            }
            else
            {
                uu_expr::syntax_tree::NumOrStr::eval_as_string::h12de1e9c78140f1f(&var_1d8, 
                    &var_118);
                
                if (var_148 & 1) == 0
                {
                    uu_expr::syntax_tree::NumOrStr::eval_as_bigint::hfc488cc1793399d6(&var_258, 
                        &*var_148[8]);
                    let mut rbx_3: i64;
                    
                    if var_258 != 1
                    {
                        let rax_14: *mut i8 = var_250;
                        var_2b8 = var_248;
                        var_2a8 = var_238;
                        
                        if rax_14 != -0x8000000000000000
                        {
                            *var_248[8] = var_2a8;
                            var_250 = var_2b8;
                            var_258 = rax_14;
                            let mut rax_27: i8;
                            let mut rdx_25: i64;
                            rax_27 = uu_expr::syntax_tree::AstNode::eval::_$u7b$$u7b$closure$u7d$$u7d$::h888a71dbbdbd1e88(&var_258);
                            rbx_3 = 0;
                            
                            if (rax_27 & 1) != 0
                            {
                                rbx_3 = rdx_25;
                            }
                            
                            if (var_1a8 & 1) == 0
                            {
                                goto 'label_4a5b07;
                            }
                        }
                        else
                        {
                            rbx_3 = 0;
                            
                            if (var_1a8 & 1) == 0
                            {
                                goto 'label_4a5b07;
                            }
                        }
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$uu_expr..ExprError$GT$$GT$::h5a4f09785cad4f22(&var_258);
                        rbx_3 = 0;
                        
                        if (var_1a8 & 1) == 0
                        {
                            'label_4a5b07:
                            uu_expr::syntax_tree::NumOrStr::eval_as_bigint::hfc488cc1793399d6(
                                &var_258, &*var_1a8[8]);
                            
                            if var_258 != 1
                            {
                                let rax_15: *mut i8 = var_250;
                                var_2b8 = var_248;
                                var_2a8 = var_238;
                                
                                if rax_15 == -0x8000000000000000
                                {
                                    goto 'label_4a5b77;
                                }
                                
                                *var_248[8] = var_2a8;
                                var_250 = var_2b8;
                                var_258 = rax_15;
                                let mut rax_16: bool;
                                let mut rdx_12: i64;
                                rax_16 = uu_expr::syntax_tree::AstNode::eval::_$u7b$$u7b$closure$u7d$$u7d$::h888a71dbbdbd1e88(&var_258);
                                
                                if (rax_16 & 1) == 0 || (rbx_3 != 0 & rdx_12 != 0) == 0
                                {
                                    goto 'label_4a5b77;
                                }
                                
                                let rax_30: i64 = *var_1d8[8];
                                var_258 = rax_30;
                                let var_250_1: i64 = var_1c8 + rax_30;
                                var_248 = rbx_3 - 1;
                                *var_248[8] = rdx_12;
                                let mut var_d0: i128;
                                core::iter::traits::iterator::Iterator::collect::hda526cf35d7f87d0(
                                    &var_d0, &var_258);
                                let var_c0: i64;
                                var_238 = var_c0;
                                var_248 = var_d0;
                                var_250 = -0x8000000000000000;
                                var_258 = 0;
                                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hd3e63ca5919932ed(&var_2b8, &var_270, r13[4], &var_258);
                            }
                            else
                            {
                                core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$uu_expr..ExprError$GT$$GT$::h5a4f09785cad4f22(&var_258);
                                'label_4a5b77:
                                var_250 = -0x8000000000000000;
                                var_248 = 0;
                                *var_248[8] = 1;
                                var_238 = 0;
                                var_258 = 0;
                                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hd3e63ca5919932ed(&var_2b8, &var_270, r13[4], &var_258);
                            }
                            
                            core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$$GT$::h00a86d471ef57dac(&var_2b8);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(&var_1d8);
                            goto 'label_4a5783;
                        }
                    }
                    let zmm0_4: i128 = var_1a8;
                    *arg1.byte_offset(0x18) = var_198_1;
                    *arg1.byte_offset(8) = zmm0_4;
                    *arg1 = 1;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(
                        &var_1d8);
                    goto 'label_4a6046;
                }
                
                let zmm0_3: i128 = var_148;
                *arg1.byte_offset(0x18) = var_1c8;
                *arg1.byte_offset(8) = zmm0_3;
                *arg1 = 1;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(&var_1d8);
                rdi_47 = &var_1a8;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$::h0c833a88cc9a87cf(rdi_47);
            goto 'label_4a6046;
        }
        4 =>
        {
            'label_4a5be0:
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h99c8b623889323ea(
                &var_258, &var_270, *(r13[1] + 0x20));
            let rax_18: i64 = var_258;
            
            if rax_18 == 2
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$$GT$::h00a86d471ef57dac(&var_258);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h3d6e35a0706b285e(&var_288, r13);
                rbx_2 = &r13[1];
                alloc::vec::Vec$LT$T$C$A$GT$::push::h3d6e35a0706b285e(&var_288, *rbx_2);
                goto 'label_4a5783;
            }
            
            let mut var_f8: i128 = var_250;
            
            if (rax_18 & 1) == 0
            {
                let rax_19: i64 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(var_250, var_248.byte_offset(var_250), 
                    uu_expr::syntax_tree::NumOrStr::eval_as_string::h12de1e9c78140f1f(&var_258, 
                        &var_f8));
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(&var_258);
                let rbp_2: i32 = r13[4];
                _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_2b8, rax_19);
                var_248 = var_2a8;
                var_250 = var_2b8;
                var_258 = 0;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hd3e63ca5919932ed(&var_2b8, &var_270, rbp_2, &var_258);
                core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$$GT$::h00a86d471ef57dac(&var_2b8);
                goto 'label_4a5783;
            }
            
            let zmm0_6: i128 = var_f8;
            *arg1.byte_offset(0x18) = var_248;
            *arg1.byte_offset(8) = zmm0_6;
            *arg1 = 1;
            'label_4a6046:
            core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$u32$C$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$$GT$::h5aab3143cda1a591(&var_270);
            rdi_43 = r14;
            rsi_32 = rbp;
            'label_4a6051:
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u64$GT$$GT$::h8b6941f1ad84c071(rdi_43, 
                rsi_32);
            arg1
        }
    }
}
