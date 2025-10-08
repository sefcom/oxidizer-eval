
  uint64_t uu_expr::syntax_tree::Parser$LT$S$GT$::accept::h4b5ad55db2b3a3a4(int64_t* arg1, int64_t* arg2)

{
    int64_t rax;
    int64_t var_28 = rax;
    int64_t r12 = arg1[2];
    uint64_t rbx;
    rbx = 3;
    
    if (r12 < arg1[1])
    {
        int64_t rax_1 = *arg1;
        int64_t rcx_1 = r12 * 3;
        *(rax_1 + (rcx_1 << 3) + 0x10);
        int64_t rax_2;
        uint64_t rdx_1;
        rax_2 = _$LT$alloc..string..String$u20$as$u20$core..convert..AsRef$LT$str$GT$$GT$::as_ref::h0a9eb36fc0b98c5f(*(rax_1 + (rcx_1 << 3) + 8));
        int32_t rax_3 = uu_expr::syntax_tree::Parser$LT$S$GT$::parse_op::_$u7b$$u7b$closure$u7d$$u7d$::ha3cd1bd23513af25(arg2, rax_2, rdx_1);
        
        if (rax_3 != 3)
        {
            arg1[2] = r12 + 1;
            rbx = rax_3;
        }
    }
    
    return rbx;
}
