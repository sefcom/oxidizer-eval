
  fn uu_test::parser::Parser::expr::hea95ff6631384a05(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let rax: i8 = uu_test::parser::Parser::peek_is_boolop::h010fbe45650976ac(arg2);
    let mut var_30: i32;
    let mut result: i64;
    
    if rax == 0
    {
        result = uu_test::parser::Parser::term::h32e18b63e31ea2d0(&var_30, arg2);
    }
    
    if rax != 0 || var_30 == 7
    {
        result = uu_test::parser::Parser::maybe_boolop::h303bddc310538db5(&var_30, arg2);
        
        if var_30 == 7
        {
            *arg1 = 7;
            return result;
        }
    }
    
    let zmm0: i128 = var_30;
    let var_20: i128;
    *arg1.byte_offset(0x10) = var_20;
    *arg1 = zmm0;
    result
}
