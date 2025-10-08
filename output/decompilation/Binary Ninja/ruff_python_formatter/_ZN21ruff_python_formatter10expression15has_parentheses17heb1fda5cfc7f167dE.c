
  uint64_t ruff_python_formatter::expression::has_parentheses::heb1fda5cfc7f167d(int32_t* arg1, char** arg2)

{
    int64_t rax;
    int64_t var_28 = rax;
    void* r15 = arg2[2];
    uint32_t rax_1 =
        ruff_python_formatter::expression::has_own_parentheses::he088d283b6b32ebc(arg1, r15);
    uint32_t rbx = rax_1;
    
    if (rax_1 == 2 || !(rbx & 1))
    {
        uint64_t rax_2;
        int64_t rdx_1;
        rax_2 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(arg1);
        void* rcx_1 = *(r15 + 0x60);
        uint32_t rcx_3 = rbx;
        rbx = 1;
        
        if (!ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_2, rdx_1, *(rcx_1 + 8), *(rcx_1 + 0x10), *arg2, arg2[1]))
            rbx = rcx_3;
    }
    
    return rbx;
}
