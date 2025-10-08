
  fn ruff_python_formatter::expression::expr_subscript::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprSubscript$GT$::needs_parentheses::h63c76c96eb080e9a(arg1: *mut *mut i32, arg2: i64, arg3: *mut c_void, arg4: *mut i64) -> u64

{
    let rbx: *mut c_void = arg4[2];
    let rax: *mut c_void = *rbx.byte_offset(0x60);
    let mut rbp: *mut i8 = *arg4;
    let r14: i64 = arg4[1];
    
    if ruff_python_formatter::expression::CallChainLayout::from_expression::h8a81a54727e8f68f(0x1a, 
        arg1, *rax.byte_offset(8), *rax.byte_offset(0x10), rbp, r14) != 1
    {
        let mut rax_2: u64;
        let mut rdx_1: i64;
        rax_2 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(*arg1);
        let rcx_1: *mut c_void = *rbx.byte_offset(0x60);
        let rax_3: i8 = ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_2, rdx_1, *rcx_1.byte_offset(8), *rcx_1.byte_offset(0x10), rbp, r14);
        rbp = 3;
        
        if rax_3 == 0
        {
            let rax_4: i32 = ruff_python_formatter::expression::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..Expr$GT$::needs_parentheses::h692bc84797141513(*arg1, 0x35);
            rbp = rax_4;
            
            if rax_4 == 2
            {
                rbp = 2;
                
                if arg2 == 2
                {
                    let rdi_3: *mut i32 = *arg3.byte_offset(0x70);
                    
                    if rdi_3 != 0
                    {
                        let mut rax_6: i64;
                        let mut rdx_3: i64;
                        rax_6 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(rdi_3);
                        
                        if ruff_python_ast::node::_$LT$impl$u20$ruff_python_ast..generated..AnyNodeRef$GT$::ptr_eq::hbc360a434919a265(rax_6, rdx_3, 0x35) != 0
                        {
                            let r14_1: *mut c_void = *arg3.byte_offset(0x58);
                            rbp = 3;
                            
                            if ruff_python_ast::nodes::Parameters::is_empty::h111990be4e86bbc7(
                                r14_1) != 0
                            {
                                let mut var_40: i64 = 0x4f;
                                let var_38_1: *mut c_void = r14_1;
                                let mut rcx_3: i64;
                                rcx_3 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hfe322db32d3ddec8(rbx.byte_offset(0x40), &var_40) != 0;
                                rbp = rcx_3 * 3;
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        rbp = nullptr;
    }
    
    rbp
}
