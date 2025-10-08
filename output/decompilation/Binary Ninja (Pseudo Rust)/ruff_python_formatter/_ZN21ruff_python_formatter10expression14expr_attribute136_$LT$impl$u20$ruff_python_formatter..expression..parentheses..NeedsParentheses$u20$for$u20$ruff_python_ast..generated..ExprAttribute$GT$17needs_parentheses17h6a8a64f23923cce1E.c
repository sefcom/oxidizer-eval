
  fn ruff_python_formatter::expression::expr_attribute::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprAttribute$GT$::needs_parentheses::h6a8a64f23923cce1(arg1: *mut *mut i32, arg2: i64, arg3: i64, arg4: *mut i64) -> i64

{
    let r13: *mut c_void = arg4[2];
    let rax: *mut c_void = *r13.byte_offset(0x60);
    let r15: *mut i8 = *arg4;
    let r12: i64 = arg4[1];
    
    if ruff_python_formatter::expression::CallChainLayout::from_expression::h8a81a54727e8f68f(0x19, 
        arg1, *rax.byte_offset(8), *rax.byte_offset(0x10), r15, r12) == 1
    {
        return 0;
    }
    
    let mut result: i8 = 1;
    
    if ruff_python_formatter::comments::Comments::dangling::h5d6da51767023d74(r13) == 0
    {
        let mut rax_2: u64;
        let mut rdx_2: i64;
        rax_2 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(arg1[5]);
        let rcx_1: *mut c_void = *r13.byte_offset(0x60);
        result = 3;
        
        if ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_2, rdx_2, *rcx_1.byte_offset(8), *rcx_1.byte_offset(0x10), r15, r12) == 0
        {
            /* tailcall */
            return ruff_python_formatter::expression::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..Expr$GT$::needs_parentheses::h692bc84797141513(arg1[5], 0x34);
        }
    }
    
    result
}
