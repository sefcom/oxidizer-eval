
  int64_t* uu_expr::syntax_tree::RelationOp::eval::hd7a9fc0cf468118d(int64_t* arg1, bool arg2, char* arg3, char* arg4)

{
    int64_t var_98;
    int64_t* result = uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_98, arg3);
    bool cond:0 = !var_98;
    int128_t var_90;
    int128_t var_108 = var_90;
    int128_t var_80;
    
    if (cond:0)
    {
        int128_t var_68 = var_108;
        uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_98, arg4);
        bool cond:1_1 = !var_98;
        var_108 = var_90;
        
        if (!cond:1_1)
        {
            int128_t zmm0_1 = var_108;
            *(arg1 + 0x18) = var_80;
            *(arg1 + 8) = zmm0_1;
            *arg1 = 1;
            return 
                core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h033ac62706effd52(
                &var_68);
        }
        
        int128_t var_48 = var_108;
        char* r14;
        r14 = 1;
        int64_t var_e8;
        uu_expr::syntax_tree::NumOrStr::to_bigint::h057de6875f85a4e9(&var_e8, &var_68);
        r14 = 1;
        uu_expr::syntax_tree::NumOrStr::to_bigint::h057de6875f85a4e9(&var_108, &var_48);
        bool rbp;
        
        if (var_e8 == -0x8000000000000000 || var_108 == -0x8000000000000000)
        {
            var_90 = var_80;
            var_98 = var_68;
            r14 = 1;
            void var_c8;
            uu_expr::syntax_tree::NumOrStr::eval_as_string::h2669c68487e16a4d(&var_c8, &var_98);
            var_90 = var_80;
            var_98 = var_48;
            void var_b0;
            uu_expr::syntax_tree::NumOrStr::eval_as_string::h2669c68487e16a4d(&var_b0, &var_98);
            int64_t var_c0;
            uint64_t var_b8;
            int64_t var_a8;
            uint64_t var_a0;
            
            switch (arg2)
            {
                case false:
                {
                    rbp = _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$core..cmp..PartialOrd$LT$alloc..vec..Vec$LT$T$C$A2$GT$$GT$$GT$::partial_cmp::h1cebb42fe5dd0e5f(var_c0, var_b8, var_a8, var_a0) == 0xff;
                    break;
                }
                case true:
                {
                    rbp = _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$core..cmp..PartialOrd$LT$alloc..vec..Vec$LT$T$C$A2$GT$$GT$$GT$::partial_cmp::h1cebb42fe5dd0e5f(var_c0, var_b8, var_a8, var_a0) - 3 < 0xfe;
                    break;
                }
                case true:
                {
                    rbp = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::he097164911c4a276(var_c0, var_b8, var_a8, var_a0);
                    break;
                }
                case true:
                {
                    rbp = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::he097164911c4a276(var_c0, var_b8, var_a8, var_a0) ^ 1;
                    break;
                }
                case true:
                {
                    rbp = _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$core..cmp..PartialOrd$LT$alloc..vec..Vec$LT$T$C$A2$GT$$GT$$GT$::partial_cmp::h1cebb42fe5dd0e5f(var_c0, var_b8, var_a8, var_a0) == 1;
                    break;
                }
                case true:
                {
                    rbp = _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$core..cmp..PartialOrd$LT$alloc..vec..Vec$LT$T$C$A2$GT$$GT$$GT$::partial_cmp::h1cebb42fe5dd0e5f(var_c0, var_b8, var_a8, var_a0) < 2;
                    break;
                }
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2134d78e0f3082f1(&var_b0);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2134d78e0f3082f1(&var_c8);
            r14 = nullptr;
            goto label_52ea96;
        }
        
        int64_t var_e0;
        int64_t var_d8;
        char var_d0;
        int64_t r15;
        bool cond:3_1;
        
        switch (arg2)
        {
            case false:
            {
                r14 = 1;
                r15 = 1;
                cond:3_1 = _$LT$num_bigint..bigint..BigInt$u20$as$u20$core..cmp..Ord$GT$::cmp::h7a6fa568a6525531(&var_e8, &var_108) == 0xff;
                label_52e90b:
                rbp = cond:3_1;
                r14 = 1;
                goto label_52ea96;
            }
            case true:
            {
                r14 = 1;
                r15 = 1;
                r14 = 1;
                
                if (_$LT$num_bigint..bigint..BigInt$u20$as$u20$core..cmp..Ord$GT$::cmp::h7a6fa568a6525531(&var_e8, &var_108) != 1)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h6f8abaf0145a9576(&var_108);
                    r14 = 1;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h6f8abaf0145a9576(&var_e8);
                    r14 = 1;
                    result = _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::hb616907385e333f7(&var_98, 1);
                }
                else
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h6f8abaf0145a9576(&var_108);
                    r14 = 1;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h6f8abaf0145a9576(&var_e8);
                    r14 = 1;
                    result = _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::hb616907385e333f7(&var_98, 0);
                }
                break;
            }
            case true:
            {
                if (var_d0 != *var_80[8])
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h6f8abaf0145a9576(&var_108);
                    r14 = 1;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h6f8abaf0145a9576(&var_e8);
                    r14 = 1;
                    result = _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::hb616907385e333f7(&var_98, 0);
                }
                else
                {
                    if (var_d0 != 1)
                    {
                        r14 = 1;
                        r15 = 1;
                        rbp = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::hc86a8171fbe67109(var_e0, var_d8, *var_108[8], var_80);
                        goto label_52ea96;
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h6f8abaf0145a9576(&var_108);
                    r14 = 1;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h6f8abaf0145a9576(&var_e8);
                    r14 = 1;
                    result = _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::hb616907385e333f7(&var_98, 1);
                }
                break;
            }
            case true:
            {
                r14 = 1;
                
                if (var_d0 == *var_80[8])
                {
                    if (var_d0 == 1)
                    {
                        rbp = false;
                        goto label_52ea96;
                    }
                    
                    r14 = 1;
                    r15 = 1;
                    rbp = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::hc86a8171fbe67109(var_e0, var_d8, *var_108[8], var_80) ^ 1;
                    r14 = 1;
                    goto label_52ea96;
                }
                
                rbp = true;
                label_52ea96:
                core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h6f8abaf0145a9576(&var_108);
                core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h6f8abaf0145a9576(&var_e8);
                
                if (rbp)
                    result = _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::hb616907385e333f7(&var_98, 1);
                else
                    result = _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::hb616907385e333f7(&var_98, 0);
                break;
            }
            case true:
            {
                r14 = 1;
                r15 = 1;
                cond:3_1 = _$LT$num_bigint..bigint..BigInt$u20$as$u20$core..cmp..Ord$GT$::cmp::h7a6fa568a6525531(&var_e8, &var_108) == 1;
                goto label_52e90b;
            }
            case true:
            {
                r14 = 1;
                r15 = 1;
                r14 = 1;
                
                if (_$LT$num_bigint..bigint..BigInt$u20$as$u20$core..cmp..Ord$GT$::cmp::h7a6fa568a6525531(&var_e8, &var_108) > 1)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h6f8abaf0145a9576(&var_108);
                    r14 = 1;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h6f8abaf0145a9576(&var_e8);
                    r14 = 1;
                    result = _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::hb616907385e333f7(&var_98, 0);
                }
                else
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h6f8abaf0145a9576(&var_108);
                    r14 = 1;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h6f8abaf0145a9576(&var_e8);
                    r14 = 1;
                    result = _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::hb616907385e333f7(&var_98, 1);
                }
                break;
            }
        }
        
        int128_t zmm0_4 = var_98;
        *(arg1 + 0x18) = var_90;
        *(arg1 + 8) = zmm0_4;
        *arg1 = 0;
        
        if (r14)
        {
            core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h033ac62706effd52(
                &var_48);
            return 
                core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h033ac62706effd52(
                &var_68);
        }
    }
    else
    {
        int128_t zmm0 = var_108;
        *(arg1 + 0x18) = var_80;
        *(arg1 + 8) = zmm0;
        *arg1 = 1;
    }
    return result;
}
