
  fn uu_expr::syntax_tree::StringOp::eval::h01695848f5743b72(arg1: *mut i64, arg2: i8, arg3: *mut i8, arg4: *mut i8) -> i64

{
    let mut var_1e8: *mut *mut c_void;
    let mut var_1e0: i128;
    let mut var_1d0: i128;
    let mut var_1a8: i128;
    let mut var_198: i128;
    let mut var_198_1: i128;
    let mut var_198_2: i128;
    let mut var_168: i128;
    let mut var_138: i64;
    let mut var_128: i64;
    let mut var_118: i128;
    let mut var_e0: i64;
    let mut result: i8;
    let mut zmm0: i128;
    let mut zmm0_6: i128;
    let mut zmm1: i128;
    let mut zmm1_6: i128;
    
    match arg2
    {
        0 =>
        {
            result = uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_1e8, arg3);
            let cond:0_1: bool = var_1e8 == 0;
            let mut var_c8: i128 = var_1e0;
            
            if !cond:0_1
            {
                zmm0 = var_c8;
                zmm1 = var_1d0;
                goto 'label_52f200;
            }
            
            let mut var_f8: ();
            uu_expr::syntax_tree::NumOrStr::eval_as_string::h2669c68487e16a4d(&var_f8, &var_c8);
            uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_1e8, arg4);
            let cond:4_1: bool = var_1e8 == 0;
            let mut var_a8: i128 = var_1e0;
            
            if cond:4_1
            {
                uu_expr::syntax_tree::NumOrStr::eval_as_string::h2669c68487e16a4d(&var_e0, &var_a8);
                var_1a8 = &var_e0;
                *var_1a8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_1e8 = &data_5a30a8;
                var_1e0 = 1;
                *var_1d0[8] = 0;
                *var_1e0[8] = &var_1a8;
                var_1d0 = 1;
                let mut var_48: i128;
                core::option::Option$LT$T$GT$::map_or_else::h082c899fe6c94410(&var_48, &var_1e8);
                var_118 = var_48;
                let var_38: i64;
                let var_108_1: i64 = var_38;
                onig::Regex::with_options::h1d1b8e0979b80cda(&var_1a8, *var_118[8], var_38, 0, 
                    &OnigSyntaxGrep);
                
                if var_1a8 != -0x8000000000000000
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
                    let mut var_140: i64 = *var_1a8[8];
                    let mut var_158: i64;
                    let var_f0: i64;
                    let var_e8: i64;
                    
                    if onig::Regex::captures_len::h72100434800fcce4(&var_140) == 0
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
                        let mut rdx_2: u64 =
                            onig::find::_$LT$impl$u20$onig..Regex$GT$::captures::hf41029da913b76cc(
                            &var_1a8, &var_140, var_f0, var_e8);
                        let mut rax_8: u64;
                        
                        if var_1a8 == 0
                        {
                            rax_8 = 0;
                        }
                        else
                        {
                            let var_178: i64;
                            let var_1b8_1: i64 = var_178;
                            let var_188: i128;
                            var_1d0 = var_188;
                            var_1e0 = var_198;
                            var_1e8 = var_1a8;
                            rax_8 = uu_expr::syntax_tree::StringOp::eval::_$u7b$$u7b$closure$u7d$$u7d$::h42abeb28d39ade43(&var_1e8);
                        }
                        
                        let mut rsi_20: u64 = 1;
                        
                        if rax_8 != 0
                        {
                            rsi_20 = rax_8;
                        }
                        
                        if rax_8 == 0
                        {
                            rdx_2 = rax_8;
                        }
                        
                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd7cff6a23e23a786(&var_1e8, rsi_20, rdx_2);
                        var_158 = *var_1e0[8];
                        var_168 = var_1e8;
                    }
                    arg1[4] = var_158;
                    *arg1.byte_offset(0x10) = var_168;
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
                let zmm0_4: i128 = var_a8;
                *arg1.byte_offset(0x18) = var_1d0;
                *arg1.byte_offset(8) = zmm0_4;
                *arg1 = 1;
            }
            
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2134d78e0f3082f1(
                &var_f8);
        }
        1 =>
        {
            result = uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_1e8, arg3);
            let cond:3_1: bool = var_1e8 == 0;
            let mut var_88: i128 = var_1e0;
            
            if !cond:3_1
            {
                zmm0 = var_88;
                zmm1 = var_1d0;
                goto 'label_52f200;
            }
            
            uu_expr::syntax_tree::NumOrStr::eval_as_string::h2669c68487e16a4d(&var_118, &var_88);
            uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_1e8, arg4);
            let cond:5_1: bool = var_1e8 == 0;
            let mut var_68: i128 = var_1e0;
            
            if cond:5_1
            {
                uu_expr::syntax_tree::NumOrStr::eval_as_string::h2669c68487e16a4d(&var_168, 
                    &var_68);
                let rax_9: i64 = *var_118[8];
                var_138 = rax_9;
                let var_108: i64;
                let var_130_1: i64 = var_108 + rax_9;
                let var_128_1: i64 = 0;
                let mut rax_10: u64;
                let mut rdx_3: i32;
                rax_10 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb6fd71ec85720353(&var_138);
                let mut var_100_1: u64 = rax_10;
                
                if rdx_3 != 0x110000
                {
                    let mut rbp_1: i32 = rdx_3;
                    let mut rdi_26: *mut i128 = &var_1a8;
                    let mut rsi_15: *mut i128 = &var_168;
                    'label_52f5fd:
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(rdi_26, rsi_15);
                    let rax_12: i64 = *var_1a8[8];
                    var_e0 = rax_12;
                    let var_d8_1: i64 = var_198 + rax_12;
                    
                    loop
                    {
                        let mut rax_13: i32;
                        let mut rdx_4: i32;
                        rax_13 = core::str::validations::next_code_point::h8f3327c6e6b0d560(
                            &var_e0, arg1);
                        
                        if rax_13 == 0 || rdx_4 == 0x110000
                        {
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2134d78e0f3082f1(&var_1a8);
                            let mut rax_14: u64;
                            let mut rdx_5: i32;
                            rax_14 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb6fd71ec85720353(&var_138);
                            var_100_1 = rax_14;
                            rbp_1 = rdx_5;
                            rsi_15 = &var_168;
                            rdi_26 = &var_1a8;
                            
                            if rdx_5 != 0x110000
                            {
                                goto 'label_52f5fd;
                            }
                            
                            goto 'label_52f563;
                        }
                        
                        if rdx_4 != rbp_1
                        {
                            continue;
                        }
                        
                        _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::hb616907385e333f7(&var_1e8, var_100_1 + 1);
                        let zmm0_11: i128 = var_1e8;
                        *arg1.byte_offset(0x18) = var_1e0;
                        *arg1.byte_offset(8) = zmm0_11;
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
                    'label_52f563:
                    _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::hb616907385e333f7(&var_1e8, 0);
                    let zmm0_10: i128 = var_1e8;
                    *arg1.byte_offset(0x18) = var_1e0;
                    *arg1.byte_offset(8) = zmm0_10;
                    *arg1 = 0;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2134d78e0f3082f1(
                        &var_168);
                }
            }
            else
            {
                let zmm0_5: i128 = var_68;
                *arg1.byte_offset(0x18) = var_1d0;
                *arg1.byte_offset(8) = zmm0_5;
                *arg1 = 1;
            }
            
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2134d78e0f3082f1(
                &var_118);
        }
        2 =>
        {
            result = uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_1e8, arg3);
            let cond:1_1: bool = var_1e8 != 0;
            var_1a8 = var_1e0;
            var_198_1 = var_1d0;
            
            if !cond:1_1
            {
                var_168 = var_1a8;
                
                if uu_expr::syntax_tree::is_truthy::hbc2e5d0622d8ecb0(&var_168) == 0
                {
                    _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::hb616907385e333f7(&var_1e8, 0);
                    zmm0_6 = var_1e8;
                    zmm1_6 = var_1e0;
                    'label_52f356:
                    *arg1.byte_offset(0x18) = zmm1_6;
                    *arg1.byte_offset(8) = zmm0_6;
                    *arg1 = 0;
                    return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h033ac62706effd52(&var_168);
                }
                
                uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_1e8, arg4);
                let cond:6_1: bool = var_1e8 != 0;
                var_1a8 = var_1e0;
                var_198_2 = var_1d0;
                
                if cond:6_1
                {
                    'label_52f391:
                    let zmm0_1: i128 = var_1a8;
                    *arg1.byte_offset(0x18) = var_198_2;
                    *arg1.byte_offset(8) = zmm0_1;
                    *arg1 = 1;
                    return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h033ac62706effd52(&var_168);
                }
                
                var_128 = var_198_2;
                var_138 = var_1a8;
                
                if uu_expr::syntax_tree::is_truthy::hbc2e5d0622d8ecb0(&var_138) != 0
                {
                    let zmm0_2: i128 = var_168;
                    *arg1.byte_offset(0x18) = var_198_1;
                    *arg1.byte_offset(8) = zmm0_2;
                    *arg1 = 0;
                    return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h033ac62706effd52(&var_138);
                }
                
                _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::hb616907385e333f7(&var_1e8, 0);
                let zmm0_12: i128 = var_1e8;
                *arg1.byte_offset(0x18) = var_1e0;
                *arg1.byte_offset(8) = zmm0_12;
                *arg1 = 0;
                core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h033ac62706effd52(
                    &var_138);
                return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h033ac62706effd52(&var_168);
            }
            
            'label_52f1b4:
            zmm0 = var_1a8;
            zmm1 = var_198_1;
            'label_52f200:
            *arg1.byte_offset(0x18) = zmm1;
            *arg1.byte_offset(8) = zmm0;
            *arg1 = 1;
        }
        3 =>
        {
            result = uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_1e8, arg3);
            let cond:2_1: bool = var_1e8 == 0;
            var_1a8 = var_1e0;
            var_198_1 = var_1d0;
            
            if !cond:2_1
            {
                goto 'label_52f1b4;
            }
            
            var_168 = var_1a8;
            result = uu_expr::syntax_tree::is_truthy::hbc2e5d0622d8ecb0(&var_168);
            
            if result == 0
            {
                uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_1e8, arg4);
                let cond:7_1: bool = var_1e8 == 0;
                var_1a8 = var_1e0;
                var_198_2 = var_1d0;
                
                if !cond:7_1
                {
                    goto 'label_52f391;
                }
                
                var_128 = var_198_2;
                var_138 = var_1a8;
                
                if uu_expr::syntax_tree::is_truthy::hbc2e5d0622d8ecb0(&var_138) != 0
                {
                    zmm0_6 = var_138;
                    zmm1_6 = var_128;
                    goto 'label_52f356;
                }
                
                _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::hb616907385e333f7(&var_1e8, 0);
                let zmm0_13: i128 = var_1e8;
                *arg1.byte_offset(0x18) = var_1e0;
                *arg1.byte_offset(8) = zmm0_13;
                *arg1 = 0;
                core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h033ac62706effd52(
                    &var_138);
                return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h033ac62706effd52(&var_168);
            }
            
            let zmm0_3: i128 = var_168;
            *arg1.byte_offset(0x18) = var_198_1;
            *arg1.byte_offset(8) = zmm0_3;
            *arg1 = 0;
        }
    }
    
    result
}
