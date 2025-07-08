
  int64_t uu_expr::syntax_tree::StringOp::eval::h01695848f5743b72(int64_t* arg1, char arg2, char* arg3, char* arg4)

{
    void** const var_1e8;
    int128_t var_1e0;
    int128_t var_1d0;
    int128_t var_1a8;
    int128_t var_198;
    int128_t var_198_1;
    int128_t var_198_2;
    int128_t var_168;
    int64_t var_138;
    int64_t var_128;
    int128_t var_118;
    int64_t var_e0;
    char result;
    int128_t zmm0;
    int128_t zmm0_6;
    int128_t zmm1;
    int128_t zmm1_6;
    
    switch (arg2)
    {
        case 0:
        {
            result = uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_1e8, arg3);
            bool cond:0_1 = !var_1e8;
            int128_t var_c8 = var_1e0;
            
            if (!cond:0_1)
            {
                zmm0 = var_c8;
                zmm1 = var_1d0;
                goto label_52f200;
            }
            
            void var_f8;
            uu_expr::syntax_tree::NumOrStr::eval_as_string::h2669c68487e16a4d(&var_f8, &var_c8);
            uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_1e8, arg4);
            bool cond:4_1 = !var_1e8;
            int128_t var_a8 = var_1e0;
            
            if (cond:4_1)
            {
                uu_expr::syntax_tree::NumOrStr::eval_as_string::h2669c68487e16a4d(&var_e0, &var_a8);
                var_1a8 = &var_e0;
                *var_1a8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_1e8 = &data_5a30a8;
                var_1e0 = 1;
                *var_1d0[8] = 0;
                *var_1e0[8] = &var_1a8;
                var_1d0 = 1;
                int128_t var_48;
                core::option::Option$LT$T$GT$::map_or_else::h082c899fe6c94410(&var_48, &var_1e8);
                var_118 = var_48;
                int64_t var_38;
                int64_t var_108_1 = var_38;
                onig::Regex::with_options::h1d1b8e0979b80cda(&var_1a8, *var_118[8], var_38, 0, 
                    &OnigSyntaxGrep);
                
                if (var_1a8 != -0x8000000000000000)
                {
                    var_1e0 = var_198;
                    var_1e8 = var_1a8;
                    core::ptr::drop_in_place$LT$onig..Error$GT$::h2d398d0896f7bfd6(&var_1e8);
                    arg1[1] = 5;
                    *arg1 = 1;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2134d78e0f3082f1(
                        &var_118);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2134d78e0f3082f1(
                        &var_e0);
                }
                else
                {
                    int64_t var_140 = *var_1a8[8];
                    int64_t var_158;
                    int64_t var_f0;
                    int64_t var_e8;
                    
                    if (!onig::Regex::captures_len::h72100434800fcce4(&var_140))
                    {
                        onig::Regex::find::h4ab7093dbf371f0f(&var_138, &var_140, var_f0, var_e8);
                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd7cff6a23e23a786(&var_1e8, "0src/uu/expr/src/syntax_tree.rs|…", 1);
                        var_198 = *var_1e0[8];
                        var_1a8 = var_1e8;
                        core::option::Option$LT$T$GT$::map_or::h5217cb8d6b2f0b0f(&var_168, 
                            &var_138, &var_1a8);
                    }
                    else
                    {
                        uint64_t rdx_2 =
                            onig::find::_$LT$impl$u20$onig..Regex$GT$::captures::hf41029da913b76cc(
                            &var_1a8, &var_140, var_f0, var_e8);
                        uint64_t rax_8;
                        
                        if (!var_1a8)
                            rax_8 = 0;
                        else
                        {
                            int64_t var_178;
                            int64_t var_1b8_1 = var_178;
                            int128_t var_188;
                            var_1d0 = var_188;
                            var_1e0 = var_198;
                            var_1e8 = var_1a8;
                            rax_8 = uu_expr::syntax_tree::StringOp::eval::_$u7b$$u7b$closure$u7d$$u7d$::h42abeb28d39ade43(&var_1e8);
                        }
                        
                        uint64_t rsi_20 = 1;
                        
                        if (rax_8)
                            rsi_20 = rax_8;
                        
                        if (!rax_8)
                            rdx_2 = rax_8;
                        
                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd7cff6a23e23a786(&var_1e8, rsi_20, rdx_2);
                        var_158 = *var_1e0[8];
                        var_168 = var_1e8;
                    }
                    arg1[4] = var_158;
                    *(arg1 + 0x10) = var_168;
                    arg1[1] = -0x8000000000000000;
                    *arg1 = 0;
                    core::ptr::drop_in_place$LT$onig..Regex$GT$::h86f48e8d3b727657(&var_140);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2134d78e0f3082f1(
                        &var_118);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2134d78e0f3082f1(
                        &var_e0);
                }
            }
            else
            {
                int128_t zmm0_4 = var_a8;
                *(arg1 + 0x18) = var_1d0;
                *(arg1 + 8) = zmm0_4;
                *arg1 = 1;
            }
            
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2134d78e0f3082f1(
                &var_f8);
            break;
        }
        case 1:
        {
            result = uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_1e8, arg3);
            bool cond:3_1 = !var_1e8;
            int128_t var_88 = var_1e0;
            
            if (!cond:3_1)
            {
                zmm0 = var_88;
                zmm1 = var_1d0;
                goto label_52f200;
            }
            
            uu_expr::syntax_tree::NumOrStr::eval_as_string::h2669c68487e16a4d(&var_118, &var_88);
            uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_1e8, arg4);
            bool cond:5_1 = !var_1e8;
            int128_t var_68 = var_1e0;
            
            if (cond:5_1)
            {
                uu_expr::syntax_tree::NumOrStr::eval_as_string::h2669c68487e16a4d(&var_168, 
                    &var_68);
                int64_t rax_9 = *var_118[8];
                var_138 = rax_9;
                int64_t var_108;
                int64_t var_130_1 = var_108 + rax_9;
                int64_t var_128_1 = 0;
                uint64_t rax_10;
                int32_t rdx_3;
                rax_10 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb6fd71ec85720353(&var_138);
                uint64_t var_100_1 = rax_10;
                
                if (rdx_3 != 0x110000)
                {
                    int32_t rbp_1 = rdx_3;
                    int128_t* rdi_26 = &var_1a8;
                    int128_t* rsi_15 = &var_168;
                    label_52f5fd:
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(rdi_26, rsi_15);
                    int64_t rax_12 = *var_1a8[8];
                    var_e0 = rax_12;
                    int64_t var_d8_1 = var_198 + rax_12;
                    
                    while (true)
                    {
                        int32_t rax_13;
                        int32_t rdx_4;
                        rax_13 = core::str::validations::next_code_point::h8f3327c6e6b0d560(
                            &var_e0, arg1);
                        
                        if (!rax_13 || rdx_4 == 0x110000)
                        {
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2134d78e0f3082f1(&var_1a8);
                            uint64_t rax_14;
                            int32_t rdx_5;
                            rax_14 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb6fd71ec85720353(&var_138);
                            var_100_1 = rax_14;
                            rbp_1 = rdx_5;
                            rsi_15 = &var_168;
                            rdi_26 = &var_1a8;
                            
                            if (rdx_5 != 0x110000)
                                goto label_52f5fd;
                            
                            goto label_52f563;
                        }
                        
                        if (rdx_4 != rbp_1)
                            continue;
                        
                        _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::hb616907385e333f7(&var_1e8, var_100_1 + 1);
                        int128_t zmm0_11 = var_1e8;
                        *(arg1 + 0x18) = var_1e0;
                        *(arg1 + 8) = zmm0_11;
                        *arg1 = 0;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2134d78e0f3082f1(
                            &var_1a8);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2134d78e0f3082f1(
                            &var_168);
                        break;
                    }
                }
                else
                {
                    label_52f563:
                    _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::hb616907385e333f7(&var_1e8, 0);
                    int128_t zmm0_10 = var_1e8;
                    *(arg1 + 0x18) = var_1e0;
                    *(arg1 + 8) = zmm0_10;
                    *arg1 = 0;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2134d78e0f3082f1(
                        &var_168);
                }
            }
            else
            {
                int128_t zmm0_5 = var_68;
                *(arg1 + 0x18) = var_1d0;
                *(arg1 + 8) = zmm0_5;
                *arg1 = 1;
            }
            
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2134d78e0f3082f1(
                &var_118);
            break;
        }
        case 2:
        {
            result = uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_1e8, arg3);
            bool cond:1_1 = var_1e8;
            var_1a8 = var_1e0;
            var_198_1 = var_1d0;
            
            if (!cond:1_1)
            {
                var_168 = var_1a8;
                
                if (!uu_expr::syntax_tree::is_truthy::hbc2e5d0622d8ecb0(&var_168))
                {
                    _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::hb616907385e333f7(&var_1e8, 0);
                    zmm0_6 = var_1e8;
                    zmm1_6 = var_1e0;
                    label_52f356:
                    *(arg1 + 0x18) = zmm1_6;
                    *(arg1 + 8) = zmm0_6;
                    *arg1 = 0;
                    return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h033ac62706effd52(&var_168);
                }
                
                uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_1e8, arg4);
                bool cond:6_1 = var_1e8;
                var_1a8 = var_1e0;
                var_198_2 = var_1d0;
                
                if (cond:6_1)
                {
                    label_52f391:
                    int128_t zmm0_1 = var_1a8;
                    *(arg1 + 0x18) = var_198_2;
                    *(arg1 + 8) = zmm0_1;
                    *arg1 = 1;
                    return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h033ac62706effd52(&var_168);
                }
                
                var_128 = var_198_2;
                var_138 = var_1a8;
                
                if (uu_expr::syntax_tree::is_truthy::hbc2e5d0622d8ecb0(&var_138))
                {
                    int128_t zmm0_2 = var_168;
                    *(arg1 + 0x18) = var_198_1;
                    *(arg1 + 8) = zmm0_2;
                    *arg1 = 0;
                    return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h033ac62706effd52(&var_138);
                }
                
                _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::hb616907385e333f7(&var_1e8, 0);
                int128_t zmm0_12 = var_1e8;
                *(arg1 + 0x18) = var_1e0;
                *(arg1 + 8) = zmm0_12;
                *arg1 = 0;
                core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h033ac62706effd52(
                    &var_138);
                return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h033ac62706effd52(&var_168);
            }
            
            label_52f1b4:
            zmm0 = var_1a8;
            zmm1 = var_198_1;
            label_52f200:
            *(arg1 + 0x18) = zmm1;
            *(arg1 + 8) = zmm0;
            *arg1 = 1;
            break;
        }
        case 3:
        {
            result = uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_1e8, arg3);
            bool cond:2_1 = !var_1e8;
            var_1a8 = var_1e0;
            var_198_1 = var_1d0;
            
            if (!cond:2_1)
                goto label_52f1b4;
            
            var_168 = var_1a8;
            result = uu_expr::syntax_tree::is_truthy::hbc2e5d0622d8ecb0(&var_168);
            
            if (!result)
            {
                uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_1e8, arg4);
                bool cond:7_1 = !var_1e8;
                var_1a8 = var_1e0;
                var_198_2 = var_1d0;
                
                if (!cond:7_1)
                    goto label_52f391;
                
                var_128 = var_198_2;
                var_138 = var_1a8;
                
                if (uu_expr::syntax_tree::is_truthy::hbc2e5d0622d8ecb0(&var_138))
                {
                    zmm0_6 = var_138;
                    zmm1_6 = var_128;
                    goto label_52f356;
                }
                
                _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::hb616907385e333f7(&var_1e8, 0);
                int128_t zmm0_13 = var_1e8;
                *(arg1 + 0x18) = var_1e0;
                *(arg1 + 8) = zmm0_13;
                *arg1 = 0;
                core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h033ac62706effd52(
                    &var_138);
                return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h033ac62706effd52(&var_168);
            }
            
            int128_t zmm0_3 = var_168;
            *(arg1 + 0x18) = var_198_1;
            *(arg1 + 8) = zmm0_3;
            *arg1 = 0;
            break;
        }
    }
    
    return result;
}
