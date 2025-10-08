
  fn uu_expr::syntax_tree::NumericOp::eval::h7467ae4d7f97e677(arg1: *mut i64, arg2: i8, arg3: *mut i32, arg4: *mut i8) -> i64

{
    let mut zmm0: i128;
    let mut zmm1: i128;
    
    if *arg3 != 1
    {
        let mut var_c8: i32;
        uu_expr::syntax_tree::NumOrStr::eval_as_bigint::hfc488cc1793399d6(&var_c8, &arg3[2]);
        let rax_1: i32 = var_c8;
        let mut var_c0: i128;
        let mut var_e8: i128 = var_c0;
        let var_b0: i128;
        
        if rax_1 != 1
        {
            let mut var_78: i128 = var_e8;
            
            if (*arg4 & 1) == 0
            {
                let mut rsi_3: i64 =
                    uu_expr::syntax_tree::NumOrStr::eval_as_bigint::hfc488cc1793399d6(&var_c8, 
                    &arg4[8]);
                let rax_3: i32 = var_c8;
                var_e8 = var_c0;
                
                if rax_3 == 1
                {
                    zmm0 = var_e8;
                    zmm1 = var_b0;
                    goto 'label_4a443e;
                }
                
                let mut var_98: i128 = var_e8;
                let mut var_58: i128;
                let mut result: i64;
                
                match arg2
                {
                    0 =>
                    {
                        let var_d8_3: i128 = var_b0;
                        var_e8 = var_78;
                        var_c0 = var_b0;
                        var_c8 = var_98;
                        result = num_bigint::bigint::addition::_$LT$impl$u20$core..ops..arith..Add$u20$for$u20$num_bigint..bigint..BigInt$GT$::add::h1a73340263ff5867(&var_58, &var_e8, &var_c8);
                        'label_4a45b4:
                        let zmm0_2: i128 = var_58;
                        let var_48: i128;
                        let var_28_1: i128 = var_48;
                        let var_38_1: i128 = zmm0_2;
                        *arg1.byte_offset(0x18) = var_48;
                        *arg1.byte_offset(8) = zmm0_2;
                        *arg1 = 0;
                        return result;
                    }
                    1 =>
                    {
                        let var_d8_5: i128 = var_b0;
                        var_e8 = var_78;
                        var_c0 = var_b0;
                        var_c8 = var_98;
                        result = num_bigint::bigint::subtraction::_$LT$impl$u20$core..ops..arith..Sub$u20$for$u20$num_bigint..bigint..BigInt$GT$::sub::h9f5015f3ea5aa6f7(&var_58, &var_e8, &var_c8);
                        goto 'label_4a45b4;
                    }
                    2 =>
                    {
                        let var_d8_4: i128 = var_b0;
                        var_e8 = var_78;
                        var_c0 = var_b0;
                        var_c8 = var_98;
                        result = num_bigint::bigint::multiplication::_$LT$impl$u20$core..ops..arith..Mul$u20$for$u20$num_bigint..bigint..BigInt$GT$::mul::h0db45ed69ea0883e(&var_58, &var_e8, &var_c8);
                        goto 'label_4a45b4;
                    }
                    3 =>
                    {
                        if *var_b0[8] == 1
                        {
                            goto 'label_4a4561;
                        }
                        
                        num_bigint::bigint::division::_$LT$impl$u20$core..ops..arith..Div$u20$for$u20$$RF$num_bigint..bigint..BigInt$GT$::div::hc712775fe696b254(&var_c8, &var_78, &var_98);
                        let zmm0_3: i128 = var_c8;
                        let var_38_2: i128 = zmm0_3;
                        let var_28_2: i128 = var_c0;
                        *arg1.byte_offset(0x18) = var_c0;
                        *arg1.byte_offset(8) = zmm0_3;
                        *arg1 = 0;
                        core::ptr::drop_in_place$LT$num_bigint..bigint..BigInt$GT$::hd240cd584614de3e(var_98, *var_98[8]);
                    }
                    4 =>
                    {
                        if *var_b0[8] != 1
                        {
                            num_bigint::bigint::division::_$LT$impl$u20$core..ops..arith..Div$u20$for$u20$$RF$num_bigint..bigint..BigInt$GT$::div::hc712775fe696b254(&var_c8, &var_78, &var_98);
                            let rdi_7: i64 = var_c8;
                            rsi_3 = var_c0;
                            
                            if rdi_7 != -0x8000000000000000
                            {
                                core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h35788999f3179b91(rdi_7, rsi_3);
                                let var_d8_6: i128 = var_b0;
                                var_e8 = var_78;
                                var_c0 = var_b0;
                                var_c8 = var_98;
                                result = num_bigint::bigint::division::_$LT$impl$u20$core..ops..arith..Rem$u20$for$u20$num_bigint..bigint..BigInt$GT$::rem::hb3841d50c8e3d31e(&var_58, &var_e8, &var_c8);
                                goto 'label_4a45b4;
                            }
                        }
                        
                        core::ptr::drop_in_place$LT$core..result..Result$LT$num_bigint..bigint..BigInt$C$num_bigint..ParseBigIntError$GT$$GT$::h35788999f3179b91(-0x8000000000000000, rsi_3);
                        'label_4a4561:
                        arg1[1] = 4;
                        *arg1 = 1;
                        core::ptr::drop_in_place$LT$num_bigint..bigint..BigInt$GT$::hd240cd584614de3e(var_98, *var_98[8]);
                    }
                }
            }
            else
            {
                zmm0 = *arg4.byte_offset(8);
                zmm1 = *arg4.byte_offset(0x18);
                'label_4a443e:
                *arg1.byte_offset(0x18) = zmm1;
                *arg1.byte_offset(8) = zmm0;
                *arg1 = 1;
            }
            
            return core::ptr::drop_in_place$LT$num_bigint..bigint..BigInt$GT$::hd240cd584614de3e(
                var_78, *var_78[8]);
        }
        
        zmm0 = var_e8;
        zmm1 = var_b0;
    }
    else
    {
        zmm0 = *arg3.byte_offset(8);
        zmm1 = *arg3.byte_offset(0x18);
    }
    
    *arg1.byte_offset(0x18) = zmm1;
    *arg1.byte_offset(8) = zmm0;
    *arg1 = 1;
    /* tailcall */
    core::ptr::drop_in_place$LT$core..result..Result$LT$uu_expr..syntax_tree..NumOrStr$C$uu_expr..ExprError$GT$$GT$::h0c833a88cc9a87cf(arg4)
}
