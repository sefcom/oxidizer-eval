
  int64_t uu_expr::syntax_tree::StringOp::eval::h76d6f11cecdfc211(int64_t* arg1, char arg2, char* arg3, char* arg4)

{
    uint64_t rbx;
    uint64_t var_30 = rbx;
    int64_t var_158;
    int64_t var_138;
    int128_t var_128;
    int128_t var_f8;
    int64_t var_c8;
    int64_t var_b0;
    int128_t var_88;
    int64_t var_78;
    void* r12_1;
    int128_t zmm0;
    
    switch (arg2)
    {
        case 0:
        {
            if (!(*arg3 & 1))
            {
                void var_e0;
                uu_expr::syntax_tree::NumOrStr::eval_as_string::h12de1e9c78140f1f(&var_e0, 
                    &arg3[8]);
                
                if (!(*arg4 & 1))
                {
                    uu_expr::syntax_tree::NumOrStr::eval_as_string::h12de1e9c78140f1f(&var_c8, 
                        &arg4[8]);
                    int64_t var_c0;
                    int64_t var_b8;
                    uu_expr::syntax_tree::check_posix_regex_errors::h83c506dd31e4b1f6(&var_138, 
                        var_c0, var_b8);
                    int64_t rax_14 = var_138;
                    
                    if (rax_14 != 0xd)
                    {
                        arg1[4] = *var_128[8];
                        int128_t var_130;
                        *(arg1 + 0x10) = var_130;
                        arg1[1] = rax_14;
                        *arg1 = 1;
                    }
                    else
                    {
                        int64_t rax_15;
                        int64_t rdx_2;
                        rax_15 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h1bcad2531ed7b92a(var_b8 + 1, 1, 1);
                        var_158 = rax_15;
                        int64_t var_148_1 = 0;
                        alloc::string::String::push::h0ede46164189e411(&var_158, 0x5e);
                        int64_t var_98 = var_c0;
                        int64_t var_90_1 = var_b8 + var_c0;
                        char rax_16;
                        int32_t rdx_3;
                        rax_16 = core::str::validations::next_code_point::h84659763701eb288(
                            &var_98, rbx);
                        int32_t r14_2 = 0x110000;
                        
                        if (rax_16 & 1)
                            r14_2 = rdx_3;
                        
                        if (r14_2 == 0x2a)
                        {
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::he36b228b683b60fd(&var_158, "\*\^0splitn always returns at le…", 
                                "\^0splitn always returns at leas…");
                            label_4a4c02:
                            var_138 = var_98;
                            char r13_1 = 0;
                            
                            while (true)
                            {
                                char rax_30;
                                int32_t rdx_9;
                                rax_30 = core::str::validations::next_code_point::h84659763701eb288(
                                    &var_138, 0x110000);
                                int32_t r12_2 = rdx_9;
                                
                                if (!(rax_30 & 1))
                                    r12_2 = 0x110000;
                                
                                if (r12_2 == 0x5e)
                                {
                                    int32_t rax_31;
                                    rax_31 = r14_2 - 0x5d < 0xfffffffe;
                                    rax_31 |= r13_1;
                                    
                                    if (rax_31 & 1)
                                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::he36b228b683b60fd(&var_158, "\^0splitn always returns at leas…", 
                                            "0splitn always returns at least …");
                                    else
                                        alloc::string::String::push::h0ede46164189e411(&var_158, 
                                            r12_2);
                                }
                                else
                                {
                                    if (r12_2 == 0x110000)
                                        break;
                                    
                                    alloc::string::String::push::h0ede46164189e411(&var_158, r12_2);
                                }
                                
                                r13_1 = (r13_1 ^ 1) & r14_2 == 0x5c;
                                r14_2 = r12_2;
                            }
                            
                            int64_t var_50;
                            onig::Regex::with_options::h89d1b975e89c8f9f(&var_50, rdx_2, var_148_1, 
                                8, &OnigSyntaxGrep);
                            
                            if (!(0 + -(var_50)))
                            {
                                core::ptr::drop_in_place$LT$onig..Error$GT$::hf7fa5a0a586a9cf4(
                                    &var_50);
                                arg1[1] = 5;
                                *arg1 = 1;
                            }
                            else
                            {
                                int64_t var_48;
                                int64_t var_140 = var_48;
                                int64_t var_e8;
                                int64_t var_d8;
                                int64_t var_d0;
                                
                                if (!onig::Regex::captures_len::h214af1c8012253d5(&var_140))
                                {
                                    onig::Regex::find::h355dc042883af91c(&var_b0, &var_140, var_d8, 
                                        var_d0);
                                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9513cad8dee9a7f6(&var_138, "0splitn always returns at least …", 1);
                                    int64_t var_78_1 = var_128;
                                    var_88 = var_138;
                                    core::option::Option$LT$T$GT$::map_or::h190a8db1175ac8ec(
                                        &var_f8, &var_b0, &var_88);
                                }
                                else
                                {
                                    uint64_t rdx_12 = onig::find::_$LT$impl$u20$onig..Regex$GT$::captures::h7fd9814b3e784e9b(&var_88, &var_140, var_d8, var_d0);
                                    void* rax_35;
                                    
                                    if (!var_88)
                                        rax_35 = nullptr;
                                    else
                                    {
                                        int64_t var_58;
                                        int64_t var_108_1 = var_58;
                                        int128_t var_68;
                                        int128_t var_118_1 = var_68;
                                        var_128 = var_78;
                                        var_138 = var_88;
                                        rax_35 = uu_expr::syntax_tree::StringOp::eval::_$u7b$$u7b$closure$u7d$$u7d$::h3636dcc8514b00e4(&var_138);
                                    }
                                    
                                    if (!rax_35)
                                        rdx_12 = rax_35;
                                    
                                    void* rsi_15 = 1;
                                    
                                    if (rax_35)
                                        rsi_15 = rax_35;
                                    
                                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9513cad8dee9a7f6(&var_138, rsi_15, rdx_12);
                                    var_e8 = var_128;
                                    var_f8 = var_138;
                                }
                                arg1[4] = var_e8;
                                *(arg1 + 0x10) = var_f8;
                                arg1[1] = -0x8000000000000000;
                                *arg1 = 0;
                                core::ptr::drop_in_place$LT$onig..Regex$GT$::hf1676455564f5d2b(
                                    &var_140);
                            }
                        }
                        else
                        {
                            if (r14_2 == 0x5e)
                                goto label_4a4c02;
                            
                            if (r14_2 != 0x110000)
                            {
                                alloc::string::String::push::h0ede46164189e411(&var_158, r14_2);
                                goto label_4a4c02;
                            }
                            
                            _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_138, 0);
                            int128_t zmm0_8 = var_138;
                            *(arg1 + 0x18) = var_128;
                            *(arg1 + 8) = zmm0_8;
                            *arg1 = 0;
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(
                            &var_158);
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(
                        &var_c8);
                }
                else
                {
                    int128_t zmm0_1 = *(arg4 + 8);
                    *(arg1 + 0x18) = *(arg4 + 0x18);
                    *(arg1 + 8) = zmm0_1;
                    *arg1 = 1;
                }
                
                return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(
                    &var_e0);
            }
            
            label_4a47d2:
            zmm0 = *(arg3 + 8);
            *(arg1 + 0x18) = *(arg3 + 0x18);
            *(arg1 + 8) = zmm0;
            *arg1 = 1;
            break;
        }
        case 1:
        {
            if (*arg3 & 1)
                goto label_4a47d2;
            
            uu_expr::syntax_tree::NumOrStr::eval_as_string::h12de1e9c78140f1f(&var_158, &arg3[8]);
            int64_t* rdi_6;
            
            if (!(*arg4 & 1))
            {
                uu_expr::syntax_tree::NumOrStr::eval_as_string::h12de1e9c78140f1f(&var_f8, 
                    &arg4[8]);
                int64_t var_150;
                var_b0 = var_150;
                int64_t var_148;
                int64_t var_a8_1 = var_148 + var_150;
                int64_t var_a0_1 = 0;
                uint64_t rax_19;
                int32_t rdx_4;
                rax_19 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2cd4ce92fdece041(&var_b0);
                
                if (rdx_4 != 0x110000)
                {
                    uint64_t r14_3 = rax_19;
                    int32_t rbp_1 = rdx_4;
                    label_4a4a8f:
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_88, &var_f8);
                    int64_t var_80;
                    var_c8 = var_80;
                    int64_t var_c0_1 = var_78 + var_80;
                    
                    while (true)
                    {
                        char rax_24;
                        int32_t rdx_5;
                        rax_24 = core::str::validations::next_code_point::h84659763701eb288(
                            &var_c8, 
                        
                        if (!(rax_24 & 1) || rdx_5 == 0x110000)
                        {
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(&var_88);
                            uint64_t rax_25;
                            int32_t rdx_6;
                            rax_25 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2cd4ce92fdece041(&var_b0);
                            r14_3 = rax_25;
                            rbp_1 = rdx_6;
                            
                            if (rdx_6 != 0x110000)
                                goto label_4a4a8f;
                            
                            goto label_4a4a09;
                        }
                        
                        if (rdx_5 != rbp_1)
                            continue;
                        
                        _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_138, r14_3 + 1);
                        int128_t zmm0_11 = var_138;
                        *(arg1 + 0x18) = var_128;
                        *(arg1 + 8) = zmm0_11;
                        *arg1 = 0;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(
                            &var_88);
                        break;
                    }
                }
                else
                {
                    label_4a4a09:
                    _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_138, 0);
                    int128_t zmm0_9 = var_138;
                    *(arg1 + 0x18) = var_128;
                    *(arg1 + 8) = zmm0_9;
                    *arg1 = 0;
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(&var_f8);
                rdi_6 = &var_158;
            }
            else
            {
                int128_t zmm0_4 = *(arg4 + 8);
                *(arg1 + 0x18) = *(arg4 + 0x18);
                *(arg1 + 8) = zmm0_4;
                *arg1 = 1;
                rdi_6 = &var_158;
            }
            
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(rdi_6);
            break;
        }
        case 2:
        {
            if (*arg3 & 1)
                goto label_4a47d2;
            
            if (uu_expr::syntax_tree::is_truthy::hefcaac958900f87a(&arg3[8]))
            {
                r12_1 = &arg4[8];
                
                if (*arg4 & 1)
                {
                    int128_t zmm0_2 = *r12_1;
                    *(arg1 + 0x18) = *(r12_1 + 0x10);
                    *(arg1 + 8) = zmm0_2;
                    *arg1 = 1;
                    /* tailcall */
                    return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::hed5f1ee52967d14e(&arg3[8]);
                }
                
                if (uu_expr::syntax_tree::is_truthy::hefcaac958900f87a(r12_1))
                {
                    int128_t zmm0_10 = *(arg3 + 8);
                    *(arg1 + 0x18) = *(arg3 + 0x18);
                    *(arg1 + 8) = zmm0_10;
                    *arg1 = 0;
                    /* tailcall */
                    return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::hed5f1ee52967d14e(r12_1);
                }
                
                _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_138, 0);
                label_4a4b94:
                int128_t zmm0_12 = var_138;
                *(arg1 + 0x18) = var_128;
                *(arg1 + 8) = zmm0_12;
                *arg1 = 0;
                core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::hed5f1ee52967d14e(
                    r12_1);
                /* tailcall */
                return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::hed5f1ee52967d14e(&arg3[8]);
            }
            
            _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_138, 0);
            int128_t zmm0_5 = var_138;
            *(arg1 + 0x18) = var_128;
            *(arg1 + 8) = zmm0_5;
            *arg1 = 0;
            core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::hed5f1ee52967d14e(
                &arg3[8]);
            break;
        }
        case 3:
        {
            int64_t rax_6 = 1;
            
            if (*arg3 & 1)
                goto label_4a47b2;
            
            if (!uu_expr::syntax_tree::is_truthy::hefcaac958900f87a(&arg3[8]))
            {
                r12_1 = &arg4[8];
                int64_t rax_12 = 1;
                
                if (*arg4 & 1)
                    goto label_4a48a3;
                
                if (!uu_expr::syntax_tree::is_truthy::hefcaac958900f87a(r12_1))
                {
                    _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_138, 0);
                    goto label_4a4b94;
                }
                
                rax_12 = 0;
                label_4a48a3:
                zmm0 = *r12_1;
                *(arg1 + 0x18) = *(r12_1 + 0x10);
                *(arg1 + 8) = zmm0;
                *arg1 = rax_12;
                /* tailcall */
                return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::hed5f1ee52967d14e(&arg3[8]);
            }
            
            rax_6 = 0;
            label_4a47b2:
            zmm0 = *(arg3 + 8);
            *(arg1 + 0x18) = *(arg3 + 0x18);
            *(arg1 + 8) = zmm0;
            *arg1 = rax_6;
            break;
        }
    }
    
    /* tailcall */
    return core::ptr::drop_in_place$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$::h0c833a88cc9a87cf(arg4);
}
