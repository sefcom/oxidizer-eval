
  fn uu_expr::syntax_tree::Parser::parse::hc48780c0aeff53f9(arg1: *mut i64, arg2: *mut i64)

{
    if arg2[1] == 0
    {
        arg1[1] = 3;
        *arg1 = 1;
        return;
    }
    
    let mut var_38: i64;
    uu_expr::syntax_tree::Parser::parse_expression::h377c49be8e7a7acd(&var_38, arg2);
    let var_30: i128;
    let var_20: i128;
    
    if var_38 != 0
    {
        *arg1.byte_offset(0x18) = var_20;
        *arg1.byte_offset(8) = var_30;
        *arg1 = 1;
        return;
    }
    
    let mut var_78: i128 = var_30;
    let rsi: i64 = arg2[2];
    
    if rsi >= arg2[1]
    {
        let zmm0_1: i128 = var_78;
        *arg1.byte_offset(0x18) = var_20;
        *arg1.byte_offset(8) = zmm0_1;
        *arg1 = 0;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h5cc4b1a8508f979e(&var_38, 
            (rsi << 4) + *arg2);
        arg1[4] = *var_30[8];
        *arg1.byte_offset(0x10) = var_38;
        arg1[1] = 0;
        *arg1 = 1;
        core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h0f29fe394da86370(&var_78);
    }
}
