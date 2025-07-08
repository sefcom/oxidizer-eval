
  fn uu_expr::syntax_tree::Parser::parse_precedence::h4211b6a5bb39dcd1(arg1: *mut i64, arg2: *mut i64, arg3: i64) -> i64

{
    let mut r12: *mut i64 = arg2;
    
    if arg3 > 5
    {
        /* tailcall */
        return uu_expr::syntax_tree::Parser::parse_simple_expression::he4185487d50c2ec9(arg1, r12);
    }
    
    let mut r13: i64 = arg3 + 1;
    let mut var_98: i64;
    let mut result: i8 =
        uu_expr::syntax_tree::Parser::parse_precedence::h4211b6a5bb39dcd1(&var_98, r12, r13);
    let mut var_90: i128;
    let var_80: i128;
    
    if var_98 == 0
    {
        let mut var_a8_1: i128 = var_80;
        let mut var_b8: i128 = var_90;
        let var_60_1: *mut i64 = r12;
        let var_68_1: i64 = r13;
        
        loop
        {
            let mut rdx_2: i8;
            result = uu_expr::syntax_tree::Parser::parse_op::hcd25fd2e93ef8ca6(r12, arg3);
            
            if result == 3
            {
                let zmm0_2: i128 = var_b8;
                *arg1.byte_offset(0x18) = var_a8_1;
                *arg1.byte_offset(8) = zmm0_2;
                *arg1 = 0;
                break;
            }
            
            uu_expr::syntax_tree::Parser::parse_precedence::h4211b6a5bb39dcd1(&var_98, r12, r13);
            
            if var_98 != 0
            {
                *arg1.byte_offset(0x18) = var_80;
                *arg1.byte_offset(8) = var_90;
                *arg1 = 1;
                return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h0f29fe394da86370(&var_b8);
            }
            
            let var_58_1: i128 = var_90;
            var_90 = var_a8_1;
            var_98 = var_b8;
            let rax_2: *mut i128 = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&var_98);
            let mut var_d8_1: i128;
            var_d8_1 = rax_2;
            var_90 = var_80;
            var_98 = var_58_1;
            let rax_3: *mut i128 = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&var_98);
            var_b8 = 1;
            *var_b8[1] = result;
            *var_b8[2] = rdx_2;
            *var_b8[8] = rax_2;
            var_a8_1 = rax_3;
            r13 = var_68_1;
            r12 = var_60_1;
        }
    }
    else
    {
        *arg1.byte_offset(0x18) = var_80;
        *arg1.byte_offset(8) = var_90;
        *arg1 = 1;
    }
    result
}
