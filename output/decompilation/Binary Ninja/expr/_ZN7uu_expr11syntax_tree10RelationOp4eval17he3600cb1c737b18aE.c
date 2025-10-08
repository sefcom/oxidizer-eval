
  int128_t* uu_expr::syntax_tree::RelationOp::eval::he3600cb1c737b18a(int64_t* arg1, char arg2, int32_t* arg3, char* arg4)

{
    int128_t zmm0;
    
    if (*arg3 == 1)
    {
        zmm0 = *(arg3 + 8);
        *(arg1 + 0x18) = *(arg3 + 0x18);
        *(arg1 + 8) = zmm0;
        *arg1 = 1;
        /* tailcall */
        return core::ptr::drop_in_place$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$::h0c833a88cc9a87cf(arg4);
    }
    
    int128_t var_58 = *(arg3 + 0x18);
    int128_t var_68 = *(arg3 + 8);
    int128_t* rdi_2;
    
    if (!(*arg4 & 1))
    {
        int128_t var_38_1 = *(arg4 + 0x18);
        int128_t var_48 = *(arg4 + 8);
        int64_t r14;
        r14 = 1;
        int64_t var_88;
        uu_expr::syntax_tree::NumOrStr::to_bigint::hc415274c30aae534(&var_88, &arg3[2]);
        int64_t var_a8;
        uu_expr::syntax_tree::NumOrStr::to_bigint::hc415274c30aae534(&var_a8, &arg4[8]);
        int64_t r14_1 = var_88;
        int64_t rdi_5 = var_a8;
        uint64_t var_98;
        int128_t* result;
        int64_t var_a0;
        char var_90;
        int64_t var_80;
        uint64_t var_78;
        char var_70;
        char rbp_1;
        int64_t r15_1;
        
        if ((-(rdi_5) == -0x8000000000000000 | -(r14_1) == -0x8000000000000000) != 1)
            switch (arg2)
            {
                case 0:
                {
                    r15_1 = rdi_5;
                    rbp_1 = _$LT$num_bigint..bigint..BigInt$u20$as$u20$core..cmp..Ord$GT$::cmp::h39aca0666f7babaa(&var_88, &var_a8);
                    label_4a4180:
                    rbp_1 u>>= 7;
                    goto label_4a418c;
                }
                case 1:
                {
                    r15_1 = rdi_5;
                    rbp_1 = _$LT$num_bigint..bigint..BigInt$u20$as$u20$core..cmp..Ord$GT$::cmp::h39aca0666f7babaa(&var_88, &var_a8) <= 0;
                    goto label_4a418c;
                }
                case 2:
                {
                    if (var_70 == var_90)
                    {
                        if (var_70 == 1)
                            goto label_4a4280;
                        
                        r15_1 = rdi_5;
                        rbp_1 = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h0032e1dc3f085ef7(var_80, var_78, var_a0, var_98);
                        goto label_4a418c;
                    }
                    
                    label_4a4139:
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h35788999f3179b91(rdi_5, var_a0);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h35788999f3179b91(r14_1, var_80);
                    r14_1 = 1;
                    result = _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_a8, 0);
                    break;
                }
                case 3:
                {
                    if (var_70 == var_90)
                    {
                        if (var_70 == 1)
                            goto label_4a4139;
                        
                        r15_1 = rdi_5;
                        rbp_1 = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h0032e1dc3f085ef7(var_80, var_78, var_a0, var_98) ^ 1;
                        goto label_4a418c;
                    }
                    
                    label_4a4280:
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h35788999f3179b91(rdi_5, var_a0);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h35788999f3179b91(r14_1, var_80);
                    r14_1 = 1;
                    result = _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_a8, 1);
                    break;
                }
                case 4:
                {
                    r15_1 = rdi_5;
                    rbp_1 = _$LT$num_bigint..bigint..BigInt$u20$as$u20$core..cmp..Ord$GT$::cmp::h39aca0666f7babaa(&var_88, &var_a8) > 0;
                    label_4a418c:
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h35788999f3179b91(r15_1, var_a0);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h35788999f3179b91(r14_1, var_80);
                    r14_1 = 1;
                    
                    if (!rbp_1)
                        result = _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_a8, 0);
                    else
                        result = _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_a8, 1);
                    break;
                }
                case 5:
                {
                    r15_1 = rdi_5;
                    rbp_1 = ~_$LT$num_bigint..bigint..BigInt$u20$as$u20$core..cmp..Ord$GT$::cmp::h39aca0666f7babaa(&var_88, &var_a8);
                    goto label_4a4180;
                }
            }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h35788999f3179b91(rdi_5, var_a0);
            core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h35788999f3179b91(r14_1, var_80);
            uu_expr::syntax_tree::NumOrStr::eval_as_string::h12de1e9c78140f1f(&var_88, &arg3[2]);
            uu_expr::syntax_tree::NumOrStr::eval_as_string::h12de1e9c78140f1f(&var_a8, &arg4[8]);
            
            switch (arg2)
            {
                case 0:
                {
                    rbp_1 = _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$core..cmp..PartialOrd$LT$alloc..vec..Vec$LT$T$C$A2$GT$$GT$$GT$::partial_cmp::h8429a8dd48d0bf9b(var_80, var_78, var_a0, var_98) >> 7;
                    break;
                }
                case 1:
                {
                    rbp_1 = _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$core..cmp..PartialOrd$LT$alloc..vec..Vec$LT$T$C$A2$GT$$GT$$GT$::partial_cmp::h8429a8dd48d0bf9b(var_80, var_78, var_a0, var_98) <= 0;
                    break;
                }
                case 2:
                {
                    rbp_1 = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h7fbec500b9bd0fe9(var_80, var_78, var_a0, var_98);
                    break;
                }
                case 3:
                {
                    rbp_1 = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h7fbec500b9bd0fe9(var_80, var_78, var_a0, var_98) ^ 1;
                    break;
                }
                case 4:
                {
                    rbp_1 = _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$core..cmp..PartialOrd$LT$alloc..vec..Vec$LT$T$C$A2$GT$$GT$$GT$::partial_cmp::h8429a8dd48d0bf9b(var_80, var_78, var_a0, var_98) > 0;
                    break;
                }
                case 5:
                {
                    rbp_1 = ~_$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$core..cmp..PartialOrd$LT$alloc..vec..Vec$LT$T$C$A2$GT$$GT$$GT$::partial_cmp::h8429a8dd48d0bf9b(var_80, var_78, var_a0, var_98) >> 7;
                    break;
                }
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(&var_a8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(&var_88);
            r14_1 = 0;
            
            if (rbp_1)
                result = _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_a8, 1);
            else
                result = _$LT$uu_expr..syntax_tree..NumOrStr$u20$as$u20$core..convert..From$LT$usize$GT$$GT$::from::h7f74ddc3053bca16(&var_a8, 0);
        }
        int128_t zmm0_2 = var_a8;
        *(arg1 + 0x18) = var_98;
        *(arg1 + 8) = zmm0_2;
        *arg1 = 0;
        
        if (!r14_1)
            return result;
        
        core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::hed5f1ee52967d14e(&var_48);
        rdi_2 = &var_68;
    }
    else
    {
        zmm0 = *(arg4 + 8);
        *(arg1 + 0x18) = *(arg4 + 0x18);
        *(arg1 + 8) = zmm0;
        *arg1 = 1;
        rdi_2 = &arg3[2];
    }
    
    return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::hed5f1ee52967d14e(rdi_2);
}
