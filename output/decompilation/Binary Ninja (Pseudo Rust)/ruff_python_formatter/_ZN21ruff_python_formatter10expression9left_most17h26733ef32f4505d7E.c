
  fn ruff_python_formatter::expression::left_most::h26733ef32f4505d7(arg1: *mut i32, arg2: i64, arg3: i64, arg4: *mut i8, arg5: i64) -> *mut i32

{
    let rax: i64;
    let var_38: i64 = rax;
    let mut result_1: *mut i32 = arg1;
    let mut result: *mut i32;
    let mut i: i8;
    
    do
    {
        result = result_1;
        let mut rax_4: i64;
        
        match *result_1
        {
            0 =>
            {
                rax_4 = 0x10;
                
                if *result.byte_offset(0x18) == 0
                {
                    break;
                }
            }
            1 | 3 =>
            {
                break;
            }
            2 =>
            {
                rax_4 = 8;
            }
        }
        
        result_1 = *result.byte_offset(rax_4);
        let mut rax_5: u64;
        let mut rdx: i64;
        rax_5 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(result_1);
        i = ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_5, rdx, arg2, arg3, arg4, arg5);
    } while i == 0;
    result
}
