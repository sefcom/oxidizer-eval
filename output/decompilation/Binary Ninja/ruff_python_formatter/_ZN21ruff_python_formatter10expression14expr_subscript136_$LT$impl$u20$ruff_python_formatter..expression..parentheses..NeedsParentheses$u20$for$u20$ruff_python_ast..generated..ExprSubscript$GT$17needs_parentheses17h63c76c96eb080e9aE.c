
  uint64_t ruff_python_formatter::expression::expr_subscript::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..ExprSubscript$GT$::needs_parentheses::h63c76c96eb080e9a(int32_t** arg1, int64_t arg2, void* arg3, int64_t* arg4)

{
    void* rbx = arg4[2];
    void* rax = *(rbx + 0x60);
    char* rbp = *arg4;
    int64_t r14 = arg4[1];
    
    if (ruff_python_formatter::expression::CallChainLayout::from_expression::h8a81a54727e8f68f(
        0x1a, arg1, *(rax + 8), *(rax + 0x10), rbp, r14) != 1)
    {
        uint64_t rax_2;
        int64_t rdx_1;
        rax_2 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(*arg1);
        void* rcx_1 = *(rbx + 0x60);
        char rax_3 = ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_2, rdx_1, *(rcx_1 + 8), *(rcx_1 + 0x10), rbp, r14);
        rbp = 3;
        
        if (!rax_3)
        {
            int32_t rax_4 = ruff_python_formatter::expression::_$LT$impl$u20$ruff_python_formatter..expression..parentheses..NeedsParentheses$u20$for$u20$ruff_python_ast..generated..Expr$GT$::needs_parentheses::h692bc84797141513(*arg1, 0x35);
            rbp = rax_4;
            
            if (rax_4 == 2)
            {
                rbp = 2;
                
                if (arg2 == 2)
                {
                    int32_t* rdi_3 = *(arg3 + 0x70);
                    
                    if (rdi_3)
                    {
                        int64_t rax_6;
                        int64_t rdx_3;
                        rax_6 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(rdi_3);
                        
                        if (ruff_python_ast::node::_$LT$impl$u20$ruff_python_ast..generated..AnyNodeRef$GT$::ptr_eq::hbc360a434919a265(rax_6, rdx_3, 0x35))
                        {
                            void* r14_1 = *(arg3 + 0x58);
                            rbp = 3;
                            
                            if (ruff_python_ast::nodes::Parameters::is_empty::h111990be4e86bbc7(
                                r14_1))
                            {
                                int64_t var_40 = 0x4f;
                                void* var_38_1 = r14_1;
                                int64_t rcx_3;
                                rcx_3 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hfe322db32d3ddec8(rbx + 0x40, &var_40);
                                rbp = rcx_3 * 3;
                            }
                        }
                    }
                }
            }
        }
    }
    else
        rbp = nullptr;
    
    return rbp;
}
