
  fn uu_expr::syntax_tree::RelationOp::eval::he3600cb1c737b18a(arg1: *mut i64, arg2: i8, arg3: *mut i32, arg4: *mut i8) -> *mut i128

{
    let mut zmm0: i128;
    
    if *arg3 == 1
    {
        zmm0 = *arg3.byte_offset(8);
        *arg1.byte_offset(0x18) = *arg3.byte_offset(0x18);
        *arg1.byte_offset(8) = zmm0;
        *arg1 = 1;
        /* tailcall */
        return core::ptr::drop_in_place$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$::h0c833a88cc9a87cf(arg4);
    }
    
    let var_58: i128 = *arg3.byte_offset(0x18);
    let mut var_68: i128 = *arg3.byte_offset(8);
    let mut rdi_2: *mut i128;
    
    if (*arg4 & 1) == 0
    {
        let var_38_1: i128 = *arg4.byte_offset(0x18);
        let mut var_48: i128 = *arg4.byte_offset(8);
        let mut r14: i64;
        r14 = 1;
        let mut var_88: i64;
        uu_expr::syntax_tree::NumOrStr::to_bigint::hc415274c30aae534(&var_88, &arg3[2]);
        let mut var_a8: i64;
        uu_expr::syntax_tree::NumOrStr::to_bigint::hc415274c30aae534(&var_a8, &arg4[8]);
        let mut r14_1: i64 = var_88;
        let rdi_5: i64 = var_a8;
        let var_98: u64;
        let mut result: *mut i128;
        let var_a0: i64;
        let var_90: i8;
        let var_80: i64;
        let var_78: u64;
        let var_70: i8;
        let mut rbp_1: i8;
        let mut r15_1: i64;
        
        if (-(rdi_5) == -0x8000000000000000 | -(r14_1) == -0x8000000000000000) != 1
        {
            match arg2
            {
                0 =>
                {
                    r15_1 = rdi_5;
                    rbp_1 = _$LT$num_bigint..bigint..BigInt$u20$as$u20$core..cmp..Ord$GT$::cmp::h39aca0666f7babaa(&var_88, &var_a8);
                    'label_4a4180:
                    rbp_1 >>= 7;
                    goto 'label_4a418c;
                }
                1 =>
                {
                    r15_1 = rdi_5;
                    rbp_1 = _$LT$num_bigint..bigint..BigInt$u20$as$u20$core..cmp..Ord$GT$::cmp::h39aca0666f7babaa(&var_88, &var_a8) <= 0;
                    goto 'label_4a418c;
                }
                2 =>
                {
                    if var_70 == var_90
                    {
                        if var_70 == 1
                        {
                            goto 'label_4a4280;
                        }
                        
                        r15_1 = rdi_5;
                        rbp_1 = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h0032e1dc3f085ef7(var_80, var_78, var_a0, var_98);
                        goto 'label_4a418c;
                    }
                    
                    'label_4a4139:
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h35788999f3179b91(rdi_5, var_a0);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h35788999f3179b91(r14_1, var_80);
                    r14_1 = 1;
                    result = _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_a8, 0);
                }
                3 =>
                {
                    if var_70 == var_90
                    {
                        if var_70 == 1
                        {
                            goto 'label_4a4139;
                        }
                        
                        r15_1 = rdi_5;
                        rbp_1 = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h0032e1dc3f085ef7(var_80, var_78, var_a0, var_98) ^ 1;
                        goto 'label_4a418c;
                    }
                    
                    'label_4a4280:
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h35788999f3179b91(rdi_5, var_a0);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h35788999f3179b91(r14_1, var_80);
                    r14_1 = 1;
                    result = _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_a8, 1);
                }
                4 =>
                {
                    r15_1 = rdi_5;
                    rbp_1 = _$LT$num_bigint..bigint..BigInt$u20$as$u20$core..cmp..Ord$GT$::cmp::h39aca0666f7babaa(&var_88, &var_a8) > 0;
                    'label_4a418c:
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h35788999f3179b91(r15_1, var_a0);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h35788999f3179b91(r14_1, var_80);
                    r14_1 = 1;
                    
                    if rbp_1 == 0
                    {
                        result = _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_a8, 0);
                    }
                    else
                    {
                        result = _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_a8, 1);
                    }
                }
                5 =>
                {
                    r15_1 = rdi_5;
                    rbp_1 = !_$LT$num_bigint..bigint..BigInt$u20$as$u20$core..cmp..Ord$GT$::cmp::h39aca0666f7babaa(&var_88, &var_a8);
                    goto 'label_4a4180;
                }
            }
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h35788999f3179b91(rdi_5, var_a0);
            core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h35788999f3179b91(r14_1, var_80);
            uu_expr::syntax_tree::NumOrStr::eval_as_string::h12de1e9c78140f1f(&var_88, &arg3[2]);
            uu_expr::syntax_tree::NumOrStr::eval_as_string::h12de1e9c78140f1f(&var_a8, &arg4[8]);
            
            match arg2
            {
                0 =>
                {
                    rbp_1 = _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$core..cmp..PartialOrd$LT$alloc..vec..Vec$LT$T$C$A2$GT$$GT$$GT$::partial_cmp::h8429a8dd48d0bf9b(var_80, var_78, var_a0, var_98) >> 7;
                }
                1 =>
                {
                    rbp_1 = _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$core..cmp..PartialOrd$LT$alloc..vec..Vec$LT$T$C$A2$GT$$GT$$GT$::partial_cmp::h8429a8dd48d0bf9b(var_80, var_78, var_a0, var_98) <= 0;
                }
                2 =>
                {
                    rbp_1 = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h7fbec500b9bd0fe9(var_80, var_78, var_a0, var_98);
                }
                3 =>
                {
                    rbp_1 = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h7fbec500b9bd0fe9(var_80, var_78, var_a0, var_98) ^ 1;
                }
                4 =>
                {
                    rbp_1 = _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$core..cmp..PartialOrd$LT$alloc..vec..Vec$LT$T$C$A2$GT$$GT$$GT$::partial_cmp::h8429a8dd48d0bf9b(var_80, var_78, var_a0, var_98) > 0;
                }
                5 =>
                {
                    rbp_1 = !_$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$core..cmp..PartialOrd$LT$alloc..vec..Vec$LT$T$C$A2$GT$$GT$$GT$::partial_cmp::h8429a8dd48d0bf9b(var_80, var_78, var_a0, var_98) >> 7;
                }
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(&var_a8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(&var_88);
            r14_1 = 0;
            
            if rbp_1 != 0
            {
                result = _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_a8, 1);
            }
            else
            {
                result = _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_a8, 0);
            }
        }
        let zmm0_2: i128 = var_a8;
        *arg1.byte_offset(0x18) = var_98;
        *arg1.byte_offset(8) = zmm0_2;
        *arg1 = 0;
        
        if r14_1 == 0
        {
            return result;
        }
        
        core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::hed5f1ee52967d14e(&var_48);
        rdi_2 = &var_68;
    }
    else
    {
        zmm0 = *arg4.byte_offset(8);
        *arg1.byte_offset(0x18) = *arg4.byte_offset(0x18);
        *arg1.byte_offset(8) = zmm0;
        *arg1 = 1;
        rdi_2 = &arg3[2];
    }
    
    core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::hed5f1ee52967d14e(rdi_2)
}
