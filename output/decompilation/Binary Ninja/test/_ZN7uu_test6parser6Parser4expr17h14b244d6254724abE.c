
  int64_t uu_test::parser::Parser::expr::h14b244d6254724ab(int64_t* arg1, int64_t* arg2)

{
    char rax = uu_test::parser::Parser::peek_is_boolop::h626769eb8da01166(arg2);
    int32_t var_30;
    int64_t result;
    
    if (!rax)
        result = uu_test::parser::Parser::term::h385cc0ae73b5bef0(&var_30, arg2);
    
    if (!rax && var_30 != 7)
    {
        label_4aeefa:
        int128_t zmm0_1 = var_30;
        int128_t var_20;
        *(arg1 + 0x10) = var_20;
        *arg1 = zmm0_1;
    }
    else
    {
        result = uu_test::parser::Parser::maybe_boolop::h62a19c04e1420d25(&var_30, arg2);
        
        if (var_30 != 7)
            goto label_4aeefa;
        
        *arg1 = 7;
    }
    
    return result;
}
