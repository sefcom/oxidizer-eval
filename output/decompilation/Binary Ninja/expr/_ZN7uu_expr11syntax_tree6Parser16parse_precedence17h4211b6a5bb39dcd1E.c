
  int64_t uu_expr::syntax_tree::Parser::parse_precedence::h4211b6a5bb39dcd1(int64_t* arg1, int64_t* arg2, int64_t arg3)

{
    int64_t* r12 = arg2;
    
    if (arg3 > 5)
        /* tailcall */
        return uu_expr::syntax_tree::Parser::parse_simple_expression::he4185487d50c2ec9(arg1, r12);
    
    int64_t r13 = arg3 + 1;
    int64_t var_98;
    char result =
        uu_expr::syntax_tree::Parser::parse_precedence::h4211b6a5bb39dcd1(&var_98, r12, r13);
    int128_t var_90;
    int128_t var_80;
    
    if (!var_98)
    {
        int128_t var_a8_1 = var_80;
        int128_t var_b8 = var_90;
        int64_t* var_60_1 = r12;
        int64_t var_68_1 = r13;
        
        while (true)
        {
            char rdx_2;
            result = uu_expr::syntax_tree::Parser::parse_op::hcd25fd2e93ef8ca6(r12, arg3);
            
            if (result == 3)
            {
                int128_t zmm0_2 = var_b8;
                *(arg1 + 0x18) = var_a8_1;
                *(arg1 + 8) = zmm0_2;
                *arg1 = 0;
                break;
            }
            
            uu_expr::syntax_tree::Parser::parse_precedence::h4211b6a5bb39dcd1(&var_98, r12, r13);
            
            if (var_98)
            {
                *(arg1 + 0x18) = var_80;
                *(arg1 + 8) = var_90;
                *arg1 = 1;
                return core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h0f29fe394da86370(&var_b8);
            }
            
            int128_t var_58_1 = var_90;
            var_90 = var_a8_1;
            var_98 = var_b8;
            int128_t* rax_2 = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&var_98);
            int128_t var_d8_1;
            var_d8_1 = rax_2;
            var_90 = var_80;
            var_98 = var_58_1;
            int128_t* rax_3 = alloc::boxed::Box$LT$T$GT$::new::h8d53b81a55fa9d0d(&var_98);
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
        *(arg1 + 0x18) = var_80;
        *(arg1 + 8) = var_90;
        *arg1 = 1;
    }
    return result;
}
