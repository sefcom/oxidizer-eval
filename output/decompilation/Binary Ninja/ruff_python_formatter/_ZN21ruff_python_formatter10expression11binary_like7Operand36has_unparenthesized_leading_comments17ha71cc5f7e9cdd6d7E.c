
  bool ruff_python_formatter::expression::binary_like::Operand::has_unparenthesized_leading_comments::ha71cc5f7e9cdd6d7(int64_t* arg1, void* arg2, char* arg3, int64_t arg4)

{
    if (!*arg1)
        return arg1[3];
    
    int32_t* rbp_1 = arg1[1];
    char* rax_1;
    int64_t rdx;
    rax_1 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(rbp_1);
    char* var_60 = rax_1;
    int64_t var_58_1 = rdx;
    int64_t rax_2;
    int64_t rdx_1;
    rax_2 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::leading::hb31877b14c47a989(
        arg2 + 0x10, &var_60);
    uint64_t rax_3;
    int64_t rdx_2;
    rax_3 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(rbp_1);
    void* rcx = *(arg2 + 0x60);
    
    if (!ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_3, rdx_2, *(rcx + 8), *(rcx + 0x10), arg3, arg4))
        return rdx_1;
    
    int64_t var_40 = rax_2;
    int64_t var_38_1 = rax_2 + rdx_1 * 0xc;
    var_60 = arg3;
    int64_t var_58_2 = arg4;
    void* var_50_1 = &arg1[1];
    return _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h5edd77dd602bc49b(&var_40, &var_60);
}
