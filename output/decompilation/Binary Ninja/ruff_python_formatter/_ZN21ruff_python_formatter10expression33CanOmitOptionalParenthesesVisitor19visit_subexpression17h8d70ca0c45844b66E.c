
  void* ruff_python_formatter::expression::CanOmitOptionalParenthesesVisitor::visit_subexpression::h8d70ca0c45844b66(int64_t* arg1, int32_t* arg2)

{
    void* rax_2 = jump_table_487638[*arg2] + &jump_table_487638;
    uint64_t rax_4;
    bool rcx_1;
    bool rdx;
    
    switch (rax_2)
    {
        case 0x70fed7:
        {
            return rax_2;
            break;
        }
        case 0x70fedd:
        {
            *(arg1 + 0x24) = 1;
            rax_4 = _$LT$ruff_python_formatter..expression..CanOmitOptionalParenthesesVisitor$u20$as$u20$ruff_python_ast..visitor..source_order..SourceOrderVisitor$GT$::visit_expr::h69b0d04c4dd2a51c(arg1, *(arg2 + 8));
            arg1[3] = arg2;
            return rax_4;
            break;
        }
        case 0x70fefe:
        {
            if (!arg2[0xd])
                /* tailcall */
                return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, 
                    arg2);
            
            *(arg1 + 0x24) = 1;
            return rax_2;
            break;
        }
        case 0x70ff0d:
        {
            uint64_t rax_5 = *(arg1 + 0x25);
            rcx_1 = rax_5 < 0xc;
            rax_5 = rax_5 > 0xc;
            char temp0_1 = rax_5;
            rax_5 -= rcx_1;
            
            if (temp0_1 == rcx_1)
            {
                arg1[4] += 2;
                /* tailcall */
                return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, 
                    arg2);
            }
            
            if (rax_5 == 1)
                /* tailcall */
                return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, 
                    arg2);
            
            arg1[4] = 2;
            *(arg1 + 0x25) = 0xc;
            /* tailcall */
            return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, arg2);
        }
        case 0x70ff44:
        {
            _$LT$ruff_python_formatter..expression..CanOmitOptionalParenthesesVisitor$u20$as$u20$ruff_python_ast..visitor..source_order..SourceOrderVisitor$GT$::visit_expr::h69b0d04c4dd2a51c(arg1, *(arg2 + 0x30));
            rax_4 = ruff_python_formatter::expression::has_parentheses::heb1fda5cfc7f167d(
                *(arg2 + 0x30), arg1[2]);
            
            if (rax_4 != 2)
            {
                rax_4 = *(arg1 + 0x25);
                bool rcx_3 = rax_4 <= 0;
                rax_4 = rax_4 >= 2;
                char temp4_1 = rax_4;
                rax_4 -= rcx_3;
                
                if (temp4_1 == rcx_3)
                    arg1[4] += 1;
                else
                {
                    rax_4 = rax_4;
                    
                    if (rax_4 != 1)
                    {
                        arg1[4] = 1;
                        *(arg1 + 0x25) = 1;
                    }
                }
            }
            
            arg1[3] = arg2;
            return rax_4;
            break;
        }
        case 0x70ffa0:
        {
            uint64_t rax_10 = *(arg2[9] + &data_48d57c);
            uint64_t rcx_4 = *(arg1 + 0x25);
            rdx = rcx_4 < rax_10;
            rcx_4 = rcx_4 > rax_10;
            char temp1_1 = rcx_4;
            rcx_4 -= rdx;
            
            if (temp1_1 == rdx)
            {
                arg1[4] += 1;
                /* tailcall */
                return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, 
                    arg2);
            }
            
            if (rcx_4 == 1)
                /* tailcall */
                return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, 
                    arg2);
            
            arg1[4] = 1;
            *(arg1 + 0x25) = rax_10;
            /* tailcall */
            return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, arg2);
        }
        case 0x70ffe0:
        {
            if (!arg2[7])
            {
                uint64_t rax_18 = *(arg1 + 0x25);
                rcx_1 = rax_18 < 3;
                rax_18 = rax_18 > 3;
                char temp5_1 = rax_18;
                rax_18 -= rcx_1;
                
                if (temp5_1 == rcx_1)
                    arg1[4] += 1;
                else if (rax_18 != 1)
                {
                    arg1[4] = 1;
                    *(arg1 + 0x25) = 3;
                }
            }
            
            goto label_70ffea;
        }
        case 0x70ffea:
        {
            label_70ffea:
            
            if (*arg1)
                /* tailcall */
                return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, 
                    arg2);
            
            *arg1 = 1;
            /* tailcall */
            return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, arg2);
        }
        case 0x70fff0:
        {
            /* tailcall */
            return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, arg2);
        }
        case 0x71000b:
        {
            int64_t rcx_9 = *(arg2 + 0x18);
            int32_t rax_14 = 0;
            
            if (rcx_9 >= 1)
                rax_14 = rcx_9 - 1;
            
            uint64_t rcx_11 = *(arg1 + 0x25);
            rdx = rcx_11 < 0xb;
            rcx_11 = rcx_11 > 0xb;
            char temp6_1 = rcx_11;
            rcx_11 -= rdx;
            
            if (temp6_1 == rdx)
            {
                arg1[4] += rax_14;
                /* tailcall */
                return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, 
                    arg2);
            }
            
            if (rcx_11 != 0xff)
                /* tailcall */
                return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, 
                    arg2);
            
            arg1[4] = rax_14;
            *(arg1 + 0x25) = 0xb;
            /* tailcall */
            return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, arg2);
        }
        case 0x71004b:
        {
            if (!arg2[0xb])
                /* tailcall */
                return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, 
                    arg2);
            
            *(arg1 + 0x24) = 1;
            return rax_2;
            break;
        }
        case 0x710051:
        {
            *(arg1 + 0x24) = 1;
            return rax_2;
            break;
        }
        case 0x71005b:
        {
            int32_t rax_16 = arg2[6];
            uint64_t rcx_14 = *(arg1 + 0x25);
            rdx = rcx_14 < 0xa;
            rcx_14 = rcx_14 > 0xa;
            char temp3_1 = rcx_14;
            rcx_14 -= rdx;
            
            if (temp3_1 == rdx)
            {
                arg1[4] += rax_16;
                /* tailcall */
                return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, 
                    arg2);
            }
            
            if (rcx_14 == 1)
                /* tailcall */
                return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, 
                    arg2);
            
            arg1[4] = rax_16;
            *(arg1 + 0x25) = 0xa;
            /* tailcall */
            return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, arg2);
        }
    }
}
