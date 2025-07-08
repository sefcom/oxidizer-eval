
  uint64_t uu_expr::syntax_tree::Parser::accept::h2eb9f05d6b3bc24e(int64_t* arg1, int64_t* arg2)

{
    int64_t r15 = arg1[2];
    uint64_t rbx;
    rbx = 3;
    
    if (r15 < arg1[1])
    {
        int64_t* rcx_1 = *arg1;
        int64_t rdx_2 = r15 << 4;
        int32_t rax_2 =
            uu_expr::syntax_tree::Parser::parse_op::_$u7b$$u7b$closure$u7d$$u7d$::hae6674a434b8f783(
            arg2, *(rcx_1 + rdx_2), *(rcx_1 + rdx_2 + 8));
        
        if (rax_2 != 3)
        {
            arg1[2] = r15 + 1;
            rbx = rax_2;
        }
    }
    
    return rbx;
}
