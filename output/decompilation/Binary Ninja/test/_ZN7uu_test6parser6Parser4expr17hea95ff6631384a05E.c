
  int64_t uu_test::parser::Parser::expr::hea95ff6631384a05(int64_t* arg1, int64_t* arg2)

{
    char rax = uu_test::parser::Parser::peek_is_boolop::h010fbe45650976ac(arg2);
    int32_t var_30;
    int64_t result;
    
    if (!rax)
        result = uu_test::parser::Parser::term::h32e18b63e31ea2d0(&var_30, arg2);
    
    if (rax || var_30 == 7)
    {
        result = uu_test::parser::Parser::maybe_boolop::h303bddc310538db5(&var_30, arg2);
        
        if (var_30 == 7)
        {
            *arg1 = 7;
            return result;
        }
    }
    
    int128_t zmm0 = var_30;
    int128_t var_20;
    *(arg1 + 0x10) = var_20;
    *arg1 = zmm0;
    return result;
}
