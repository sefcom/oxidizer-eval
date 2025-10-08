
  fn ruff_python_formatter::expression::CanOmitOptionalParenthesesVisitor::visit_subexpression::h8d70ca0c45844b66(arg1: *mut i64, arg2: *mut i32) -> *mut c_void

{
    let rax_2: *mut c_void = jump_table_487638[*arg2] + &jump_table_487638;
    let mut rax_4: u64;
    let mut rcx_1: bool;
    let mut rdx: bool;
    
    match rax_2
    {
        0x70fed7 =>
        {
            rax_2
        }
        0x70fedd =>
        {
            *arg1.byte_offset(0x24) = 1;
            rax_4 = _$LT$ruff_python_formatter..expression..CanOmitOptionalParenthesesVisitor$u20$as$u20$ruff_python_ast..visitor..source_order..SourceOrderVisitor$GT$::visit_expr::h69b0d04c4dd2a51c(arg1, *arg2.byte_offset(8));
            arg1[3] = arg2;
            rax_4
        }
        0x70fefe =>
        {
            if arg2[0xd] == 0
            {
                /* tailcall */
                return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, 
                    arg2);
            }
            
            *arg1.byte_offset(0x24) = 1;
            rax_2
        }
        0x70ff0d =>
        {
            let mut rax_5: u64 = *arg1.byte_offset(0x25);
            rcx_1 = rax_5 < 0xc;
            rax_5 = rax_5 > 0xc;
            let temp0_1: i8 = rax_5;
            rax_5 -= rcx_1;
            
            if temp0_1 == rcx_1
            {
                arg1[4] += 2;
                /* tailcall */
                return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, 
                    arg2);
            }
            
            if rax_5 == 1
            {
                /* tailcall */
                return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, 
                    arg2);
            }
            
            arg1[4] = 2;
            *arg1.byte_offset(0x25) = 0xc;
            /* tailcall */
            ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, arg2)
        }
        0x70ff44 =>
        {
            _$LT$ruff_python_formatter..expression..CanOmitOptionalParenthesesVisitor$u20$as$u20$ruff_python_ast..visitor..source_order..SourceOrderVisitor$GT$::visit_expr::h69b0d04c4dd2a51c(arg1, *arg2.byte_offset(0x30));
            rax_4 = ruff_python_formatter::expression::has_parentheses::heb1fda5cfc7f167d(
                *arg2.byte_offset(0x30), arg1[2]);
            
            if rax_4 != 2
            {
                rax_4 = *arg1.byte_offset(0x25);
                let rcx_3: bool = rax_4 <= 0;
                rax_4 = rax_4 >= 2;
                let temp4_1: i8 = rax_4;
                rax_4 -= rcx_3;
                
                if temp4_1 == rcx_3
                {
                    arg1[4] += 1;
                }
                else
                {
                    rax_4 = rax_4;
                    
                    if rax_4 != 1
                    {
                        arg1[4] = 1;
                        *arg1.byte_offset(0x25) = 1;
                    }
                }
            }
            
            arg1[3] = arg2;
            rax_4
        }
        0x70ffa0 =>
        {
            let rax_10: u64 = *(arg2[9] + &data_48d57c);
            let mut rcx_4: u64 = *arg1.byte_offset(0x25);
            rdx = rcx_4 < rax_10;
            rcx_4 = rcx_4 > rax_10;
            let temp1_1: i8 = rcx_4;
            rcx_4 -= rdx;
            
            if temp1_1 == rdx
            {
                arg1[4] += 1;
                /* tailcall */
                return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, 
                    arg2);
            }
            
            if rcx_4 == 1
            {
                /* tailcall */
                return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, 
                    arg2);
            }
            
            arg1[4] = 1;
            *arg1.byte_offset(0x25) = rax_10;
            /* tailcall */
            ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, arg2)
        }
        0x70ffe0 =>
        {
            if arg2[7] == 0
            {
                let mut rax_18: u64 = *arg1.byte_offset(0x25);
                rcx_1 = rax_18 < 3;
                rax_18 = rax_18 > 3;
                let temp5_1: i8 = rax_18;
                rax_18 -= rcx_1;
                
                if temp5_1 == rcx_1
                {
                    arg1[4] += 1;
                }
                else if rax_18 != 1
                {
                    arg1[4] = 1;
                    *arg1.byte_offset(0x25) = 3;
                }
            }
            
            goto 'label_70ffea;
        }
        0x70ffea =>
        {
            'label_70ffea:
            
            if *arg1 != 0
            {
                /* tailcall */
                return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, 
                    arg2);
            }
            
            *arg1 = 1;
            /* tailcall */
            ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, arg2)
        }
        0x70fff0 =>
        {
            /* tailcall */
            ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, arg2)
        }
        0x71000b =>
        {
            let rcx_9: i64 = *arg2.byte_offset(0x18);
            let mut rax_14: i32 = 0;
            
            if rcx_9 >= 1
            {
                rax_14 = rcx_9 - 1;
            }
            
            let mut rcx_11: u64 = *arg1.byte_offset(0x25);
            rdx = rcx_11 < 0xb;
            rcx_11 = rcx_11 > 0xb;
            let temp6_1: i8 = rcx_11;
            rcx_11 -= rdx;
            
            if temp6_1 == rdx
            {
                arg1[4] += rax_14;
                /* tailcall */
                return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, 
                    arg2);
            }
            
            if rcx_11 != 0xff
            {
                /* tailcall */
                return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, 
                    arg2);
            }
            
            arg1[4] = rax_14;
            *arg1.byte_offset(0x25) = 0xb;
            /* tailcall */
            ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, arg2)
        }
        0x71004b =>
        {
            if arg2[0xb] == 0
            {
                /* tailcall */
                return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, 
                    arg2);
            }
            
            *arg1.byte_offset(0x24) = 1;
            rax_2
        }
        0x710051 =>
        {
            *arg1.byte_offset(0x24) = 1;
            rax_2
        }
        0x71005b =>
        {
            let rax_16: i32 = arg2[6];
            let mut rcx_14: u64 = *arg1.byte_offset(0x25);
            rdx = rcx_14 < 0xa;
            rcx_14 = rcx_14 > 0xa;
            let temp3_1: i8 = rcx_14;
            rcx_14 -= rdx;
            
            if temp3_1 == rdx
            {
                arg1[4] += rax_16;
                /* tailcall */
                return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, 
                    arg2);
            }
            
            if rcx_14 == 1
            {
                /* tailcall */
                return ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, 
                    arg2);
            }
            
            arg1[4] = rax_16;
            *arg1.byte_offset(0x25) = 0xa;
            /* tailcall */
            ruff_python_ast::visitor::source_order::walk_expr::h3288c46db8cfa1e5(arg1, arg2)
        }
    }
}
