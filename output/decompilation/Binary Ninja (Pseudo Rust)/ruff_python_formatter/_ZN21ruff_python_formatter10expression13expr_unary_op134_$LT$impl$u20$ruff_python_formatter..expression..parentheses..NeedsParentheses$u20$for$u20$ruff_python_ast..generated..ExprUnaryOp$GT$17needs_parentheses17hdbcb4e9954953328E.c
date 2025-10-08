
  fn ruff_python_formatter::expression::expr_unary_op::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprUnaryOp$GT$::needs_parentheses::hdbcb4e9954953328(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut i64) -> *mut c_void

{
    let mut result: *mut c_void;
    result = 1;
    
    if arg2 != 0x27
    {
        let mut rax: u64;
        let mut rdx: i64;
        rax = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(*arg1);
        let r15_1: *mut c_void = arg4[2];
        let rcx: *mut c_void = *r15_1.byte_offset(0x60);
        result = 3;
        
        if ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax, rdx, *rcx.byte_offset(8), *rcx.byte_offset(0x10), *arg4, arg4[1]) == 0
        {
            let mut rax_1: i64;
            let mut rdx_2: i64;
            rax_1 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(*arg1);
            let mut var_28: i64 = rax_1;
            let var_20_1: i64 = rdx_2;
            result = 1;
            
            if hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hfe322db32d3ddec8(
                r15_1.byte_offset(0x40), &var_28) == 0
            {
                return ruff_python_formatter::expression::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..Expr$GT$::needs_parentheses::h692bc84797141513(*arg1, 0x1e);
            }
        }
    }
    
    result
}
