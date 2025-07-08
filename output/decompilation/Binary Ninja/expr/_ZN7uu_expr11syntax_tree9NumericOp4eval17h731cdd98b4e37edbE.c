
  int64_t* uu_expr::syntax_tree::NumericOp::eval::h731cdd98b4e37edb(int64_t* arg1, char arg2, char* arg3, char* arg4)

{
    int64_t var_e8;
    int64_t* result = uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_e8, arg3);
    bool cond:0 = !var_e8;
    int128_t var_e0;
    int128_t var_58 = var_e0;
    int128_t var_d0;
    int128_t zmm0;
    int128_t zmm1;
    
    if (cond:0)
    {
        int64_t var_118;
        result =
            uu_expr::syntax_tree::NumOrStr::eval_as_bigint::hba12e6d71c8187fc(&var_118, &var_58);
        bool cond:1_1 = !var_118;
        int128_t var_110;
        int128_t var_138 = var_110;
        int128_t var_100;
        
        if (!cond:1_1)
        {
            zmm0 = var_138;
            zmm1 = var_100;
            goto label_52ecba;
        }
        
        int128_t var_98 = var_138;
        uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_e8, arg4);
        bool cond:2_1 = !var_e8;
        int128_t var_38 = var_e0;
        int128_t zmm0_1;
        int128_t zmm1_1;
        
        if (!cond:2_1)
        {
            zmm0_1 = var_38;
            zmm1_1 = var_d0;
            label_52ed65:
            *(arg1 + 0x18) = zmm1_1;
            *(arg1 + 8) = zmm0_1;
            *arg1 = 1;
            return core::ptr::drop_in_place$LT$num_bigint..bigint..BigInt$GT$::h4ffd1c0c3ebf756b(
                &var_98);
        }
        
        uu_expr::syntax_tree::NumOrStr::eval_as_bigint::hba12e6d71c8187fc(&var_118, &var_38);
        bool cond:3_1 = !var_118;
        var_138 = var_110;
        
        if (!cond:3_1)
        {
            zmm0_1 = var_138;
            zmm1_1 = var_100;
            goto label_52ed65;
        }
        
        int128_t var_b8 = var_138;
        int128_t zmm0_2;
        int128_t zmm1_2;
        
        switch (arg2)
        {
            case 0:
            {
                var_110 = var_100;
                var_118 = var_98;
                var_e0 = var_100;
                var_e8 = var_b8;
                result = num_bigint::bigint::addition::_$LT$impl$u20$core..ops..arith..Add$u20$for$u20$num_bigint..bigint..BigInt$GT$::add::h7db2fe26837a9166(&var_138, &var_118, &var_e8);
                zmm0_2 = var_138;
                zmm1_2 = var_100;
                break;
            }
            case 1:
            {
                var_110 = var_100;
                var_118 = var_98;
                var_e0 = var_100;
                var_e8 = var_b8;
                result = num_bigint::bigint::subtraction::_$LT$impl$u20$core..ops..arith..Sub$u20$for$u20$num_bigint..bigint..BigInt$GT$::sub::h044d51e6ae0e2685(&var_138, &var_118, &var_e8);
                zmm0_2 = var_138;
                zmm1_2 = var_100;
                break;
            }
            case 2:
            {
                var_110 = var_100;
                var_118 = var_98;
                var_e0 = var_100;
                var_e8 = var_b8;
                result = num_bigint::bigint::multiplication::_$LT$impl$u20$core..ops..arith..Mul$u20$for$u20$num_bigint..bigint..BigInt$GT$::mul::hd8f08eeb5e568796(&var_138, &var_118, &var_e8);
                zmm0_2 = var_138;
                zmm1_2 = var_100;
                break;
            }
            case 3:
            {
                if (*var_100[8] == 1)
                    goto label_52ef8a;
                
                num_bigint::bigint::division::_$LT$impl$u20$core..ops..arith..Div$LT$$RF$num_bigint..bigint..BigInt$GT$$u20$for$u20$$RF$num_bigint..bigint..BigInt$GT$::div::hdc143ddd84cb2698(&var_e8, &var_98, &var_b8);
                int128_t zmm0_3 = var_e8;
                int128_t var_78_1 = zmm0_3;
                int128_t var_68_1 = var_e0;
                *(arg1 + 0x18) = var_e0;
                *(arg1 + 8) = zmm0_3;
                *arg1 = 0;
                core::ptr::drop_in_place$LT$num_bigint..bigint..BigInt$GT$::h4ffd1c0c3ebf756b(
                    &var_b8);
                return 
                    core::ptr::drop_in_place$LT$num_bigint..bigint..BigInt$GT$::h4ffd1c0c3ebf756b(
                    &var_98);
                break;
            }
            case 4:
            {
                if (*var_100[8] == 1)
                {
                    var_118 = -0x8000000000000000;
                    label_52ef85:
                    core::ptr::drop_in_place$LT$core..option..Option$LT$num_bigint..bigint..BigInt$GT$$GT$::h4e126a462f308c55(&var_118);
                    label_52ef8a:
                    arg1[1] = 4;
                    *arg1 = 1;
                    core::ptr::drop_in_place$LT$num_bigint..bigint..BigInt$GT$::h4ffd1c0c3ebf756b(
                        &var_b8);
                    return core::ptr::drop_in_place$LT$num_bigint..bigint..BigInt$GT$::h4ffd1c0c3ebf756b(&var_98);
                }
                
                num_bigint::bigint::division::_$LT$impl$u20$core..ops..arith..Div$LT$$RF$num_bigint..bigint..BigInt$GT$$u20$for$u20$$RF$num_bigint..bigint..BigInt$GT$::div::hdc143ddd84cb2698(&var_e8, &var_98, &var_b8);
                var_110 = var_e0;
                var_118 = var_e8;
                
                if (var_118 == -0x8000000000000000)
                    goto label_52ef85;
                
                core::ptr::drop_in_place$LT$core..option..Option$LT$num_bigint..bigint..BigInt$GT$$GT$::h4e126a462f308c55(&var_118);
                var_110 = var_100;
                var_118 = var_98;
                var_e0 = var_100;
                var_e8 = var_b8;
                result = num_bigint::bigint::division::_$LT$impl$u20$core..ops..arith..Rem$u20$for$u20$num_bigint..bigint..BigInt$GT$::rem::ha399ac89baf6eaea(&var_138, &var_118, &var_e8);
                zmm0_2 = var_138;
                zmm1_2 = var_100;
                break;
            }
        }
        
        int128_t var_68_2 = zmm1_2;
        int128_t var_78_2 = zmm0_2;
        *(arg1 + 0x18) = zmm1_2;
        *(arg1 + 8) = zmm0_2;
        *arg1 = 0;
    }
    else
    {
        zmm0 = var_58;
        zmm1 = var_d0;
        label_52ecba:
        *(arg1 + 0x18) = zmm1;
        *(arg1 + 8) = zmm0;
        *arg1 = 1;
    }
    return result;
}
