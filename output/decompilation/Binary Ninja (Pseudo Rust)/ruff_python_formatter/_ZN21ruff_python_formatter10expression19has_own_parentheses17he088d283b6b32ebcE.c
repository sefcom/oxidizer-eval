
  fn ruff_python_formatter::expression::has_own_parentheses::he088d283b6b32ebc(arg1: *mut i32, arg2: *mut c_void) -> i64

{
    let mut result: i64;
    result = 2;
    let rcx_1: u64 = *arg1 - 6;
    
    if rcx_1 <= 0x18
    {
        match rcx_1
        {
            0 | 1 | 0x17 =>
            {
                'label_7104ad:
                
                if *arg1.byte_offset(0x18) != 0
                {
                    result = 1;
                    return result;
                }
                
                'label_7104de:
                let mut rdx_1: i64;
                result = ruff_python_formatter::comments::Comments::dangling::h912433ddb439ab44(
                    arg2, 
                    _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(arg1));
                
                if rdx_1 == 0
                {
                    return 0;
                }
                
                result = 1;
            }
            2 | 3 | 4 | 0x14 =>
            {
                result = 1;
            }
            5 =>
            {
                result = 2;
                result = 2 - arg1[0xd];
            }
            0xa =>
            {
                *arg1.byte_offset(0x28);
                
                if *arg1.byte_offset(0x18) == -(*arg1.byte_offset(0x28))
                {
                    goto 'label_7104de;
                }
                
                result = 1;
            }
            0x18 =>
            {
                if arg1[0xb] != 0
                {
                    goto 'label_7104ad;
                }
            }
        }
    }
    
    result
}
