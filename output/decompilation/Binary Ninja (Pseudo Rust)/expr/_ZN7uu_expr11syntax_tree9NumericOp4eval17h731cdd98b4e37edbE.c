
  fn uu_expr::syntax_tree::NumericOp::eval::h731cdd98b4e37edb(arg1: *mut i64, arg2: i8, arg3: *mut i8, arg4: *mut i8) -> *mut i64

{
    let mut var_e8: i64;
    let mut result: *mut i64 =
        uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_e8, arg3);
    let cond:0: bool = var_e8 == 0;
    let mut var_e0: i128;
    let mut var_58: i128 = var_e0;
    let var_d0: i128;
    let mut zmm0: i128;
    let mut zmm1: i128;
    
    if cond:0
    {
        let mut var_118: i64;
        result =
            uu_expr::syntax_tree::NumOrStr::eval_as_bigint::hba12e6d71c8187fc(&var_118, &var_58);
        let cond:1_1: bool = var_118 == 0;
        let mut var_110: i128;
        let mut var_138: i128 = var_110;
        let var_100: i128;
        
        if !cond:1_1
        {
            zmm0 = var_138;
            zmm1 = var_100;
            goto 'label_52ecba;
        }
        
        let mut var_98: i128 = var_138;
        uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_e8, arg4);
        let cond:2_1: bool = var_e8 == 0;
        let mut var_38: i128 = var_e0;
        let mut zmm0_1: i128;
        let mut zmm1_1: i128;
        
        if !cond:2_1
        {
            zmm0_1 = var_38;
            zmm1_1 = var_d0;
            'label_52ed65:
            *arg1.byte_offset(0x18) = zmm1_1;
            *arg1.byte_offset(8) = zmm0_1;
            *arg1 = 1;
            return core::ptr::drop_in_place$LT$num_bigint..bigint..BigInt$GT$::h4ffd1c0c3ebf756b(
                &var_98);
        }
        
        uu_expr::syntax_tree::NumOrStr::eval_as_bigint::hba12e6d71c8187fc(&var_118, &var_38);
        let cond:3_1: bool = var_118 == 0;
        var_138 = var_110;
        
        if !cond:3_1
        {
            zmm0_1 = var_138;
            zmm1_1 = var_100;
            goto 'label_52ed65;
        }
        
        let mut var_b8: i128 = var_138;
        let mut zmm0_2: i128;
        let mut zmm1_2: i128;
        
        match arg2
        {
            0 =>
            {
                var_110 = var_100;
                var_118 = var_98;
                var_e0 = var_100;
                var_e8 = var_b8;
                result = num_bigint::bigint::addition::_$LT$impl$u20$core..ops..arith..Add$u20$for$u20$num_bigint..bigint..BigInt$GT$::add::h7db2fe26837a9166(&var_138, &var_118, &var_e8);
                zmm0_2 = var_138;
                zmm1_2 = var_100;
            }
            1 =>
            {
                var_110 = var_100;
                var_118 = var_98;
                var_e0 = var_100;
                var_e8 = var_b8;
                result = num_bigint::bigint::subtraction::_$LT$impl$u20$core..ops..arith..Sub$u20$for$u20$num_bigint..bigint..BigInt$GT$::sub::h044d51e6ae0e2685(&var_138, &var_118, &var_e8);
                zmm0_2 = var_138;
                zmm1_2 = var_100;
            }
            2 =>
            {
                var_110 = var_100;
                var_118 = var_98;
                var_e0 = var_100;
                var_e8 = var_b8;
                result = num_bigint::bigint::multiplication::_$LT$impl$u20$core..ops..arith..Mul$u20$for$u20$num_bigint..bigint..BigInt$GT$::mul::hd8f08eeb5e568796(&var_138, &var_118, &var_e8);
                zmm0_2 = var_138;
                zmm1_2 = var_100;
            }
            3 =>
            {
                if *var_100[8] == 1
                {
                    goto 'label_52ef8a;
                }
                
                num_bigint::bigint::division::_$LT$impl$u20$core..ops..arith..Div$LT$$RF$num_bigint..bigint..BigInt$GT$$u20$for$u20$$RF$num_bigint..bigint..BigInt$GT$::div::hdc143ddd84cb2698(&var_e8, &var_98, &var_b8);
                let zmm0_3: i128 = var_e8;
                let var_78_1: i128 = zmm0_3;
                let var_68_1: i128 = var_e0;
                *arg1.byte_offset(0x18) = var_e0;
                *arg1.byte_offset(8) = zmm0_3;
                *arg1 = 0;
                core::ptr::drop_in_place$LT$num_bigint..bigint..BigInt$GT$::h4ffd1c0c3ebf756b(
                    &var_b8);
                return 
                    core::ptr::drop_in_place$LT$num_bigint..bigint..BigInt$GT$::h4ffd1c0c3ebf756b(
                    &var_98);
            }
            4 =>
            {
                if *var_100[8] == 1
                {
                    var_118 = -0x8000000000000000;
                    'label_52ef85:
                    core::ptr::drop_in_place$LT$core..option..Option$LT$num_bigint..bigint..BigInt$GT$$GT$::h4e126a462f308c55(&var_118);
                    'label_52ef8a:
                    arg1[1] = 4;
                    *arg1 = 1;
                    core::ptr::drop_in_place$LT$num_bigint..bigint..BigInt$GT$::h4ffd1c0c3ebf756b(
                        &var_b8);
                    return core::ptr::drop_in_place$LT$num_bigint..bigint..BigInt$GT$::h4ffd1c0c3ebf756b(&var_98);
                }
                
                num_bigint::bigint::division::_$LT$impl$u20$core..ops..arith..Div$LT$$RF$num_bigint..bigint..BigInt$GT$$u20$for$u20$$RF$num_bigint..bigint..BigInt$GT$::div::hdc143ddd84cb2698(&var_e8, &var_98, &var_b8);
                var_110 = var_e0;
                var_118 = var_e8;
                
                if var_118 == -0x8000000000000000
                {
                    goto 'label_52ef85;
                }
                
                core::ptr::drop_in_place$LT$core..option..Option$LT$num_bigint..bigint..BigInt$GT$$GT$::h4e126a462f308c55(&var_118);
                var_110 = var_100;
                var_118 = var_98;
                var_e0 = var_100;
                var_e8 = var_b8;
                result = num_bigint::bigint::division::_$LT$impl$u20$core..ops..arith..Rem$u20$for$u20$num_bigint..bigint..BigInt$GT$::rem::ha399ac89baf6eaea(&var_138, &var_118, &var_e8);
                zmm0_2 = var_138;
                zmm1_2 = var_100;
            }
        }
        
        let var_68_2: i128 = zmm1_2;
        let var_78_2: i128 = zmm0_2;
        *arg1.byte_offset(0x18) = zmm1_2;
        *arg1.byte_offset(8) = zmm0_2;
        *arg1 = 0;
    }
    else
    {
        zmm0 = var_58;
        zmm1 = var_d0;
        'label_52ecba:
        *arg1.byte_offset(0x18) = zmm1;
        *arg1.byte_offset(8) = zmm0;
        *arg1 = 1;
    }
    result
}
