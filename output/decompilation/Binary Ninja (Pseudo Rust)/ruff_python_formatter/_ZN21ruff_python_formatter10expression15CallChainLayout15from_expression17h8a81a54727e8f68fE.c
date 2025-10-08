
  fn ruff_python_formatter::expression::CallChainLayout::from_expression::h8a81a54727e8f68f(arg1: u64, arg2: *mut *mut i32, arg3: i64, arg4: i64, arg5: *mut i8, arg6: i64) -> u32

{
    let rax: i64;
    let mut var_38: i64 = rax;
    let mut r13: *mut *mut i32 = arg2;
    let mut rbp: u64 = arg1;
    *var_38[4] = 0;
    let mut result: u32;
    
    do
    {
        let mut rdi: *mut i32;
        
        if rbp == 0x10
        {
            rdi = *r13;
        }
        else if rbp != 0x19
        {
            if rbp != 0x1a
            {
                *var_38[4] += ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rbp, r13, arg3, arg4, arg5, arg6);
                break;
            }
            
            rdi = *r13;
        }
        else
        {
            let mut rax_2: i64;
            let mut rdx_2: i64;
            rax_2 = ruff_python_ast::expression::_$LT$impl$u20$core..convert..From$LT$$RF$alloc..boxed..Box$LT$ruff_python_ast..generated..Expr$GT$$GT$$u20$for$u20$ruff_python_ast..generated..ExprRef$GT$::from::h473989b5e34cd5c1(&r13[5]);
            
            if ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_2, rdx_2, arg3, arg4, arg5, arg6) != 0
            {
                *var_38[4] += 1;
                break;
            }
            
            rdi = r13[5];
            let rax_3: i32 = *rdi;
            
            if rax_3 == 0x10 || rax_3 == 0x1a
            {
                *var_38[4] += 1;
            }
        }
        
        let mut rax_1: u64;
        let mut rdx: *mut *mut i32;
        rax_1 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(rdi);
        rbp = rax_1;
        r13 = rdx;
        result = ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_1, rdx, arg3, arg4, arg5, arg6);
    } while result == 0;
    
    result = *var_38[4] < 2;
    result += 1;
    result
}
