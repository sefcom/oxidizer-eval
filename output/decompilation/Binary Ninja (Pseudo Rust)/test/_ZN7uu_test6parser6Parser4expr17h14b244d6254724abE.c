
  fn uu_test::parser::Parser::expr::h14b244d6254724ab(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let rax: i8 = uu_test::parser::Parser::peek_is_boolop::h626769eb8da01166(arg2);
    let mut var_30: i32;
    let mut result: i64;
    
    if rax == 0
    {
        result = uu_test::parser::Parser::term::h385cc0ae73b5bef0(&var_30, arg2);
    }
    
    if rax == 0 && var_30 != 7
    {
        'label_4aeefa:
        let zmm0_1: i128 = var_30;
        let var_20: i128;
        *arg1.byte_offset(0x10) = var_20;
        *arg1 = zmm0_1;
    }
    else
    {
        result = uu_test::parser::Parser::maybe_boolop::h62a19c04e1420d25(&var_30, arg2);
        
        if var_30 != 7
        {
            goto 'label_4aeefa;
        }
        
        *arg1 = 7;
    }
    
    result
}
