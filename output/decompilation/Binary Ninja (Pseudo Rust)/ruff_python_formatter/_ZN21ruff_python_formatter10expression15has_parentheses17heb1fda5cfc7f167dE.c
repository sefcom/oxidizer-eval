
  fn ruff_python_formatter::expression::has_parentheses::heb1fda5cfc7f167d(arg1: *mut i32, arg2: *mut *mut i8) -> u64

{
    let rax: i64;
    let var_28: i64 = rax;
    let r15: *mut c_void = arg2[2];
    let rax_1: u32 =
        ruff_python_formatter::expression::has_own_parentheses::he088d283b6b32ebc(arg1, r15);
    let mut rbx: u32 = rax_1;
    
    if rax_1 == 2 || (rbx & 1) == 0
    {
        let mut rax_2: u64;
        let mut rdx_1: i64;
        rax_2 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(arg1);
        let rcx_1: *mut c_void = *r15.byte_offset(0x60);
        let rcx_3: u32 = rbx;
        rbx = 1;
        
        if ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_2, rdx_1, *rcx_1.byte_offset(8), *rcx_1.byte_offset(0x10), *arg2, arg2[1]) == 0
        {
            rbx = rcx_3;
        }
    }
    
    rbx
}
