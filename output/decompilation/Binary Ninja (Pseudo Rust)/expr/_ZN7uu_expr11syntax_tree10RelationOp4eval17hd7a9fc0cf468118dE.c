
  fn uu_expr::syntax_tree::RelationOp::eval::hd7a9fc0cf468118d(arg1: *mut i64, arg2: bool, arg3: *mut i8, arg4: *mut i8) -> *mut i64

{
    let mut var_98: i64;
    let mut result: *mut i64 =
        uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_98, arg3);
    let cond:0: bool = var_98 == 0;
    let mut var_90: i128;
    let mut var_108: i128 = var_90;
    let var_80: i128;
    
    if cond:0
    {
        let mut var_68: i128 = var_108;
        uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_98, arg4);
        let cond:1_1: bool = var_98 == 0;
        var_108 = var_90;
        
        if !cond:1_1
        {
            let zmm0_1: i128 = var_108;
            *arg1.byte_offset(0x18) = var_80;
            *arg1.byte_offset(8) = zmm0_1;
            *arg1 = 1;
            return 
                core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h033ac62706effd52(
                &var_68);
        }
        
        let mut var_48: i128 = var_108;
        let mut r14: *mut i8;
        r14 = 1;
        let mut var_e8: i64;
        uu_expr::syntax_tree::NumOrStr::to_bigint::h057de6875f85a4e9(&var_e8, &var_68);
        r14 = 1;
        uu_expr::syntax_tree::NumOrStr::to_bigint::h057de6875f85a4e9(&var_108, &var_48);
        let mut rbp: bool;
        
        if var_e8 == -0x8000000000000000 || var_108 == -0x8000000000000000
        {
            var_90 = var_80;
            var_98 = var_68;
            r14 = 1;
            let mut var_c8: ();
            uu_expr::syntax_tree::NumOrStr::eval_as_string::h2669c68487e16a4d(&var_c8, &var_98);
            var_90 = var_80;
            var_98 = var_48;
            let mut var_b0: ();
            uu_expr::syntax_tree::NumOrStr::eval_as_string::h2669c68487e16a4d(&var_b0, &var_98);
            let var_c0: i64;
            let var_b8: u64;
            let var_a8: i64;
            let var_a0: u64;
            
            match arg2
            {
                false =>
                {
                    rbp = _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$core..cmp..PartialOrd$LT$alloc..vec..Vec$LT$T$C$A2$GT$$GT$$GT$::partial_cmp::h1cebb42fe5dd0e5f(var_c0, var_b8, var_a8, var_a0) == 0xff;
                }
                true =>
                {
                    rbp = _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$core..cmp..PartialOrd$LT$alloc..vec..Vec$LT$T$C$A2$GT$$GT$$GT$::partial_cmp::h1cebb42fe5dd0e5f(var_c0, var_b8, var_a8, var_a0) - 3 < 0xfe;
                }
                true =>
                {
                    rbp = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::he097164911c4a276(var_c0, var_b8, var_a8, var_a0);
                }
                true =>
                {
                    rbp = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::he097164911c4a276(var_c0, var_b8, var_a8, var_a0) ^ 1;
                }
                true =>
                {
                    rbp = _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$core..cmp..PartialOrd$LT$alloc..vec..Vec$LT$T$C$A2$GT$$GT$$GT$::partial_cmp::h1cebb42fe5dd0e5f(var_c0, var_b8, var_a8, var_a0) == 1;
                }
                true =>
                {
                    rbp = _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$core..cmp..PartialOrd$LT$alloc..vec..Vec$LT$T$C$A2$GT$$GT$$GT$::partial_cmp::h1cebb42fe5dd0e5f(var_c0, var_b8, var_a8, var_a0) < 2;
                }
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2134d78e0f3082f1(&var_b0);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2134d78e0f3082f1(&var_c8);
            r14 = nullptr;
            goto 'label_52ea96;
        }
        
        let var_e0: i64;
        let var_d8: i64;
        let var_d0: i8;
        let mut r15: i64;
        let mut cond:3_1: bool;
        
        match arg2
        {
            false =>
            {
                r14 = 1;
                r15 = 1;
                cond:3_1 = _$LT$num_bigint..bigint..BigInt$u20$as$u20$core..cmp..Ord$GT$::cmp::h7a6fa568a6525531(&var_e8, &var_108) == 0xff;
                'label_52e90b:
                rbp = cond:3_1;
                r14 = 1;
                goto 'label_52ea96;
            }
            true =>
            {
                r14 = 1;
                r15 = 1;
                r14 = 1;
                
                if _$LT$num_bigint..bigint..BigInt$u20$as$u20$core..cmp..Ord$GT$::cmp::h7a6fa568a6525531(&var_e8, &var_108) != 1
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
            }
            true =>
            {
                if var_d0 != *var_80[8]
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h6f8abaf0145a9576(&var_108);
                    r14 = 1;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h6f8abaf0145a9576(&var_e8);
                    r14 = 1;
                    result = _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::hb616907385e333f7(&var_98, 0);
                }
                else
                {
                    if var_d0 != 1
                    {
                        r14 = 1;
                        r15 = 1;
                        rbp = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::hc86a8171fbe67109(var_e0, var_d8, *var_108[8], var_80);
                        goto 'label_52ea96;
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h6f8abaf0145a9576(&var_108);
                    r14 = 1;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h6f8abaf0145a9576(&var_e8);
                    r14 = 1;
                    result = _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::hb616907385e333f7(&var_98, 1);
                }
            }
            true =>
            {
                r14 = 1;
                
                if var_d0 == *var_80[8]
                {
                    if var_d0 == 1
                    {
                        rbp = false;
                        goto 'label_52ea96;
                    }
                    
                    r14 = 1;
                    r15 = 1;
                    rbp = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::hc86a8171fbe67109(var_e0, var_d8, *var_108[8], var_80) ^ 1;
                    r14 = 1;
                    goto 'label_52ea96;
                }
                
                rbp = true;
                'label_52ea96:
                core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h6f8abaf0145a9576(&var_108);
                core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h6f8abaf0145a9576(&var_e8);
                
                if rbp != 0
                {
                    result = _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::hb616907385e333f7(&var_98, 1);
                }
                else
                {
                    result = _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::hb616907385e333f7(&var_98, 0);
                }
            }
            true =>
            {
                r14 = 1;
                r15 = 1;
                cond:3_1 = _$LT$num_bigint..bigint..BigInt$u20$as$u20$core..cmp..Ord$GT$::cmp::h7a6fa568a6525531(&var_e8, &var_108) == 1;
                goto 'label_52e90b;
            }
            true =>
            {
                r14 = 1;
                r15 = 1;
                r14 = 1;
                
                if _$LT$num_bigint..bigint..BigInt$u20$as$u20$core..cmp..Ord$GT$::cmp::h7a6fa568a6525531(&var_e8, &var_108) > 1
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
            }
        }
        
        let zmm0_4: i128 = var_98;
        *arg1.byte_offset(0x18) = var_90;
        *arg1.byte_offset(8) = zmm0_4;
        *arg1 = 0;
        
        if r14 != 0
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
        let zmm0: i128 = var_108;
        *arg1.byte_offset(0x18) = var_80;
        *arg1.byte_offset(8) = zmm0;
        *arg1 = 1;
    }
    result
}
