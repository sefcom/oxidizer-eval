
  int64_t* uu_expr::syntax_tree::AstNode::evaluated::h50cae09c54c1e370(int64_t* arg1, int64_t* arg2)

{
    int32_t rax = uu_expr::syntax_tree::get_next_id::hf082ef3e5b1b606f();
    int32_t var_40;
    uu_expr::syntax_tree::AstNode::eval::h7294554a61514ede(&var_40, arg2);
    int128_t var_38;
    int128_t var_28;
    
    if (var_40 != 1)
    {
        *(arg1 + 0x10) = var_28;
        *arg1 = var_38;
        arg1[4] = rax;
    }
    else
    {
        *(arg1 + 0x18) = var_28;
        *(arg1 + 8) = var_38;
        *arg1 = -0x7ffffffffffffffb;
    }
    core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h2611257ee6ccabb2(arg2);
    return arg1;
}
