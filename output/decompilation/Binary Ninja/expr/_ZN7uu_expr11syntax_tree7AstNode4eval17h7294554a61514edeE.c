
  int64_t* uu_expr::syntax_tree::AstNode::eval::h7294554a61514ede(int64_t* arg1, void* arg2)

{
    uint64_t rax = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 8);
    
    if (!rax)
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    *rax = arg2;
    int64_t var_288 = 1;
    int64_t var_270 = 0;
    int64_t var_260 = 0;
    int64_t var_278 = 0;
    uint64_t rbp = rax;
    int64_t* r13 = *rbp;
    int64_t rax_1 = *r13;
    int64_t rsi = 0;
    
    if (rax_1 + 0x7fffffffffffffff < 4)
        rsi = rax_1 ^ 0x8000000000000000;
    
    int64_t r14 = var_288;
    int128_t var_2b8;
    int128_t var_2a8;
    int64_t var_298;
    int128_t var_258;
    char* var_250;
    int128_t var_248;
    int64_t var_238;
    int128_t var_1d8;
    int128_t var_1c8;
    int64_t var_1b8;
    int128_t var_170;
    void* rbx_2;
    uint64_t rsi_32;
    int64_t rdi_43;
    
    switch (rsi)
    {
        case 0:
        {
            label_4a57d4:
            int32_t rbp_1 = r13[4];
            char* rax_4;
            char rbx_1;
            
            if (rax_1 != -0x8000000000000000)
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
            goto label_4a5783;
        }
        case 1:
        {
            label_4a5cb5:
            int32_t rbx_4 = r13[4];
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_2b8, &r13[1]);
            var_238 = var_2a8;
            var_248 = var_2b8;
            var_250 = -0x8000000000000000;
            var_258 = 0;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hd3e63ca5919932ed(
                &var_2b8, &var_270, rbx_4, &var_258);
            core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$$GT$::h00a86d471ef57dac(&var_2b8);
            goto label_4a5783;
        }
        case 2:
        {
            while (true)
            {
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h99c8b623889323ea(&var_1d8, &var_270, *(r13[2] + 0x20));
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h99c8b623889323ea(&var_2b8, &var_270, *(r13[1] + 0x20));
                rbx_2 = &r13[1];
                var_238 = var_1b8;
                var_248 = var_1c8;
                var_258 = var_1d8;
                int128_t var_230_2 = var_2b8;
                
                if (var_258 != 2 && var_230_2 != 2)
                {
                    int64_t var_98_1 = var_238;
                    int128_t var_a8_1 = var_248;
                    int128_t var_b8 = var_258;
                    int128_t var_88 = var_230_2;
                    int128_t var_78_1 = var_2a8;
                    int64_t var_68_1 = var_298;
                    void var_58;
                    uu_expr::syntax_tree::BinOp::eval::h135374f3f8bf6168(&var_58, r13[3], 
                        *(r13 + 0x19), &var_88, &var_b8);
                    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hd3e63ca5919932ed(&var_258, &var_270, r13[4], &var_58);
                    core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$$GT$::h00a86d471ef57dac(&var_258);
                    label_4a5783:
                    int64_t rax_2 = var_278;
                    
                    if (!rax_2)
                    {
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h99c8b623889323ea(&var_258, &var_270, *(arg2 + 0x20));
                        
                        if (var_258 == 2)
                        {
                            core::option::unwrap_failed::h893f57cb7db71cb7();
                            /* no return */
                        }
                        
                        arg1[4] = var_238;
                        int128_t zmm0_11 = var_258;
                        *(arg1 + 0x10) = var_248;
                        *arg1 = zmm0_11;
                        core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$u32$C$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$$GT$::h5aab3143cda1a591(&var_270);
                        rdi_43 = var_288;
                        rsi_32 = rax;
                        goto label_4a6051;
                    }
                    
                    var_278 = rax_2 - 1;
                    r14 = var_288;
                    rbp = rax;
                    r13 = *(rbp + (rax_2 << 3) - 8);
                    rax_1 = *r13;
                    int64_t rsi_1 = 0;
                    
                    if (rax_1 + 0x7fffffffffffffff < 4)
                        rsi_1 = rax_1 ^ 0x8000000000000000;
                    
                    switch (rsi_1)
                    {
                        case 0:
                        {
                            goto label_4a57d4;
                        }
                        case 1:
                        {
                            goto label_4a5cb5;
                        }
                        case 2:
                        {
                            continue;
                        }
                        case 3:
                        {
                            goto label_4a58aa;
                        }
                        case 4:
                        {
                            goto label_4a5be0;
                        }
                    }
                }
                
                core::ptr::drop_in_place$LT$$LP$core..option..Option$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$$C$core..option..Option$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$$RP$$GT$::hbde778e28d7a7b9e(&var_258);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h3d6e35a0706b285e(&var_288, r13);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h3d6e35a0706b285e(&var_288, r13[2]);
                break;
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::h3d6e35a0706b285e(&var_288, *rbx_2);
            goto label_4a5783;
        }
        case 3:
        {
            label_4a58aa:
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h99c8b623889323ea(
                &var_170, &var_270, *(r13[1] + 0x20));
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h99c8b623889323ea(
                &var_1d8, &var_270, *(r13[2] + 0x20));
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h99c8b623889323ea(
                &var_2b8, &var_270, *(r13[3] + 0x20));
            rbx_2 = &r13[3];
            int64_t var_150;
            var_238 = var_150;
            int128_t var_160;
            var_248 = var_160;
            var_258 = var_170;
            int128_t var_230_1 = var_1d8;
            int128_t var_208_1 = var_2b8;
            int64_t rax_12 = var_258;
            
            if (rax_12 == 2 || var_230_1 == 2 || var_208_1 == 2)
            {
                core::ptr::drop_in_place$LT$$LP$core..option..Option$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$$C$core..option..Option$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$$C$core..option..Option$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$$RP$$GT$::hd016b3437cc63792(&var_258);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h3d6e35a0706b285e(&var_288, r13);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h3d6e35a0706b285e(&var_288, r13[1]);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h3d6e35a0706b285e(&var_288, r13[2]);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h3d6e35a0706b285e(&var_288, *rbx_2);
                goto label_4a5783;
            }
            
            int128_t var_118 = var_250;
            int128_t var_148 = var_230_1;
            int64_t var_128_1 = var_1b8;
            int128_t var_1a8 = var_208_1;
            int128_t var_198_1 = var_2a8;
            int64_t var_188_1 = var_298;
            int128_t* rdi_47;
            
            if (rax_12 & 1)
            {
                int128_t zmm0_2 = var_118;
                *(arg1 + 0x18) = var_248;
                *(arg1 + 8) = zmm0_2;
                *arg1 = 1;
                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$::h0c833a88cc9a87cf(&var_1a8);
                rdi_47 = &var_148;
            }
            else
            {
                uu_expr::syntax_tree::NumOrStr::eval_as_string::h12de1e9c78140f1f(&var_1d8, 
                    &var_118);
                
                if (!(var_148 & 1))
                {
                    uu_expr::syntax_tree::NumOrStr::eval_as_bigint::hfc488cc1793399d6(&var_258, 
                        &*var_148[8]);
                    int64_t rbx_3;
                    
                    if (var_258 != 1)
                    {
                        char* rax_14 = var_250;
                        var_2b8 = var_248;
                        var_2a8 = var_238;
                        
                        if (rax_14 != -0x8000000000000000)
                        {
                            *var_248[8] = var_2a8;
                            var_250 = var_2b8;
                            var_258 = rax_14;
                            char rax_27;
                            int64_t rdx_25;
                            rax_27 = uu_expr::syntax_tree::AstNode::eval::_$u7b$$u7b$closure$u7d$$u7d$::h888a71dbbdbd1e88(&var_258);
                            rbx_3 = 0;
                            
                            if (rax_27 & 1)
                                rbx_3 = rdx_25;
                            
                            if (!(var_1a8 & 1))
                                goto label_4a5b07;
                        }
                        else
                        {
                            rbx_3 = 0;
                            
                            if (!(var_1a8 & 1))
                                goto label_4a5b07;
                        }
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$uu_expr..ExprError$GT$$GT$::h5a4f09785cad4f22(&var_258);
                        rbx_3 = 0;
                        
                        if (!(var_1a8 & 1))
                        {
                            label_4a5b07:
                            uu_expr::syntax_tree::NumOrStr::eval_as_bigint::hfc488cc1793399d6(
                                &var_258, &*var_1a8[8]);
                            
                            if (var_258 != 1)
                            {
                                char* rax_15 = var_250;
                                var_2b8 = var_248;
                                var_2a8 = var_238;
                                
                                if (rax_15 == -0x8000000000000000)
                                    goto label_4a5b77;
                                
                                *var_248[8] = var_2a8;
                                var_250 = var_2b8;
                                var_258 = rax_15;
                                bool rax_16;
                                int64_t rdx_12;
                                rax_16 = uu_expr::syntax_tree::AstNode::eval::_$u7b$$u7b$closure$u7d$$u7d$::h888a71dbbdbd1e88(&var_258);
                                
                                if (!(rax_16 & 1) || !(rbx_3 & rdx_12))
                                    goto label_4a5b77;
                                
                                int64_t rax_30 = *var_1d8[8];
                                var_258 = rax_30;
                                int64_t var_250_1 = var_1c8 + rax_30;
                                var_248 = rbx_3 - 1;
                                *var_248[8] = rdx_12;
                                int128_t var_d0;
                                core::iter::traits::iterator::Iterator::collect::hda526cf35d7f87d0(
                                    &var_d0, &var_258);
                                int64_t var_c0;
                                var_238 = var_c0;
                                var_248 = var_d0;
                                var_250 = -0x8000000000000000;
                                var_258 = 0;
                                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hd3e63ca5919932ed(&var_2b8, &var_270, r13[4], &var_258);
                            }
                            else
                            {
                                core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$uu_expr..ExprError$GT$$GT$::h5a4f09785cad4f22(&var_258);
                                label_4a5b77:
                                var_250 = -0x8000000000000000;
                                var_248 = 0;
                                *var_248[8] = 1;
                                var_238 = 0;
                                var_258 = 0;
                                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hd3e63ca5919932ed(&var_2b8, &var_270, r13[4], &var_258);
                            }
                            
                            core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$$GT$::h00a86d471ef57dac(&var_2b8);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(&var_1d8);
                            goto label_4a5783;
                        }
                    }
                    int128_t zmm0_4 = var_1a8;
                    *(arg1 + 0x18) = var_198_1;
                    *(arg1 + 8) = zmm0_4;
                    *arg1 = 1;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(
                        &var_1d8);
                    goto label_4a6046;
                }
                
                int128_t zmm0_3 = var_148;
                *(arg1 + 0x18) = var_1c8;
                *(arg1 + 8) = zmm0_3;
                *arg1 = 1;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(&var_1d8);
                rdi_47 = &var_1a8;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$::h0c833a88cc9a87cf(rdi_47);
            goto label_4a6046;
        }
        case 4:
        {
            label_4a5be0:
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h99c8b623889323ea(
                &var_258, &var_270, *(r13[1] + 0x20));
            int64_t rax_18 = var_258;
            
            if (rax_18 == 2)
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$$GT$::h00a86d471ef57dac(&var_258);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h3d6e35a0706b285e(&var_288, r13);
                rbx_2 = &r13[1];
                alloc::vec::Vec$LT$T$C$A$GT$::push::h3d6e35a0706b285e(&var_288, *rbx_2);
                goto label_4a5783;
            }
            
            int128_t var_f8 = var_250;
            
            if (!(rax_18 & 1))
            {
                int64_t rax_19 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(var_250, var_248 + var_250, 
                    uu_expr::syntax_tree::NumOrStr::eval_as_string::h12de1e9c78140f1f(&var_258, 
                        &var_f8));
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(&var_258);
                int32_t rbp_2 = r13[4];
                _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_2b8, rax_19);
                var_248 = var_2a8;
                var_250 = var_2b8;
                var_258 = 0;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hd3e63ca5919932ed(&var_2b8, &var_270, rbp_2, &var_258);
                core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$$GT$::h00a86d471ef57dac(&var_2b8);
                goto label_4a5783;
            }
            
            int128_t zmm0_6 = var_f8;
            *(arg1 + 0x18) = var_248;
            *(arg1 + 8) = zmm0_6;
            *arg1 = 1;
            label_4a6046:
            core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$u32$C$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$$GT$::h5aab3143cda1a591(&var_270);
            rdi_43 = r14;
            rsi_32 = rbp;
            label_4a6051:
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u64$GT$$GT$::h8b6941f1ad84c071(rdi_43, 
                rsi_32);
            return arg1;
            break;
        }
    }
}
