
  void uu_expr::syntax_tree::Parser::parse::hc48780c0aeff53f9(int64_t* arg1, int64_t* arg2)

{
    if (!arg2[1])
    {
        arg1[1] = 3;
        *arg1 = 1;
        return;
    }
    
    int64_t var_38;
    uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(&var_38, arg2);
    int128_t var_30;
    int128_t var_20;
    
    if (var_38)
    {
        *(arg1 + 0x18) = var_20;
        *(arg1 + 8) = var_30;
        *arg1 = 1;
        return;
    }
    
    int128_t var_78 = var_30;
    int64_t rsi = arg2[2];
    
    if (rsi >= arg2[1])
    {
        int128_t zmm0_1 = var_78;
        *(arg1 + 0x18) = var_20;
        *(arg1 + 8) = zmm0_1;
        *arg1 = 0;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h5cc4b1a8508f979e(&var_38, 
            (rsi << 4) + *arg2);
        arg1[4] = *var_30[8];
        *(arg1 + 0x10) = var_38;
        arg1[1] = 0;
        *arg1 = 1;
        core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h0f29fe394da86370(&var_78);
    }
}
