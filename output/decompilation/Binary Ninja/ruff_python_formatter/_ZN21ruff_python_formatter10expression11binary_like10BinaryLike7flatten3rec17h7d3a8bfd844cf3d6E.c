
  uint64_t ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec::h7d3a8bfd844cf3d6(int64_t* arg1, int64_t* arg2, char* arg3, int64_t arg4, int64_t* arg5)

{
    int128_t* rbp = arg1;
    int64_t rbx = *arg1;
    int32_t* r13 = arg1[1];
    int32_t rax = *r13;
    int64_t var_50;
    
    if (!rax)
    {
        uint64_t rax_7;
        int64_t rdx_6;
        rax_7 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(r13);
        void* r15_3 = *arg2;
        void* rcx_4 = *(r15_3 + 0x60);
        
        if (!ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_7, rdx_6, *(rcx_4 + 8), *(rcx_4 + 0x10), arg3, arg4))
        {
            int64_t rcx_8;
            int64_t rbx_3;
            int64_t rbp_3;
            int64_t r8_8;
            
            if (!rbx)
            {
                rbx_3 = rbp[1];
                rbp_3 = *(rbp + 0x18);
                label_706e45:
                var_50 = 0x1b;
                void* var_48_5 = &r13[2];
                int64_t rax_12;
                int64_t rdx_11;
                rax_12 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::trailing::hdc749e0acdbc0869(r15_3 + 0x10, &var_50);
                rcx_8 = rax_12;
                r8_8 = rdx_11;
            }
            else
            {
                var_50 = 0x1b;
                void* var_48_3 = &r13[2];
                int64_t rax_10;
                int64_t rdx_9;
                rax_10 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::leading::hb31877b14c47a989(r15_3 + 0x10, &var_50);
                
                if (rbx == 1)
                {
                    rbx_3 = rax_10;
                    rbp_3 = rdx_9;
                    goto label_706e45;
                }
                
                rcx_8 = rbp[1];
                r8_8 = *(rbp + 0x18);
                rbx_3 = rax_10;
                rbp_3 = rdx_9;
            }
            
            return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_bool::hbfd4616a4c6c4b7a(&r13[2], rbx_3, rbp_3, rcx_8, r8_8, arg2, arg3, arg4, arg5);
        }
    }
    else if (rax == 2)
    {
        uint64_t rax_4;
        int64_t rdx_3;
        rax_4 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(r13);
        void* r15_2 = *arg2;
        void* rcx_2 = *(r15_2 + 0x60);
        
        if (!ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_4, rdx_3, *(rcx_2 + 8), *(rcx_2 + 0x10), arg3, arg4))
        {
            int64_t rcx_7;
            int64_t rbx_2;
            int64_t rbp_2;
            int64_t r8_7;
            
            if (!rbx)
            {
                rbx_2 = rbp[1];
                rbp_2 = *(rbp + 0x18);
                label_706e16:
                var_50 = 0x1d;
                int64_t* var_48_4 = &r13[2];
                int64_t rax_11;
                int64_t rdx_10;
                rax_11 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::trailing::hdc749e0acdbc0869(r15_2 + 0x10, &var_50);
                rcx_7 = rax_11;
                r8_7 = rdx_10;
            }
            else
            {
                var_50 = 0x1d;
                int64_t* var_48_2 = &r13[2];
                int64_t rax_6;
                int64_t rdx_5;
                rax_6 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::leading::hb31877b14c47a989(r15_2 + 0x10, &var_50);
                
                if (rbx == 1)
                {
                    rbx_2 = rax_6;
                    rbp_2 = rdx_5;
                    goto label_706e16;
                }
                
                rcx_7 = rbp[1];
                r8_7 = *(rbp + 0x18);
                rbx_2 = rax_6;
                rbp_2 = rdx_5;
            }
            
            return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_binary::h026cf51245cd5d13(&r13[2], rbx_2, rbp_2, rcx_7, r8_7, arg2, arg3, arg4, arg5);
        }
    }
    else if (rax == 0xf)
    {
        uint64_t rax_1;
        int64_t rdx;
        rax_1 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(r13);
        void* r15_1 = *arg2;
        void* rcx = *(r15_1 + 0x60);
        
        if (!ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_1, rdx, *(rcx + 8), *(rcx + 0x10), arg3, arg4))
        {
            int64_t rcx_9;
            int64_t rbx_1;
            int64_t rbp_1;
            int64_t r8_9;
            
            if (!rbx)
            {
                rbx_1 = rbp[1];
                rbp_1 = *(rbp + 0x18);
                label_706e74:
                var_50 = 0x2a;
                void* var_48_6 = &r13[2];
                int64_t rax_13;
                int64_t rdx_12;
                rax_13 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::trailing::hdc749e0acdbc0869(r15_1 + 0x10, &var_50);
                rcx_9 = rax_13;
                r8_9 = rdx_12;
            }
            else
            {
                var_50 = 0x2a;
                void* var_48_1 = &r13[2];
                int64_t rax_3;
                int64_t rdx_2;
                rax_3 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::leading::hb31877b14c47a989(r15_1 + 0x10, &var_50);
                
                if (rbx == 1)
                {
                    rbx_1 = rax_3;
                    rbp_1 = rdx_2;
                    goto label_706e74;
                }
                
                rcx_9 = rbp[1];
                r8_9 = *(rbp + 0x18);
                rbx_1 = rax_3;
                rbp_1 = rdx_2;
            }
            
            return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_compare::h864917a931c07552(&r13[2], rbx_1, rbp_1, rcx_9, r8_9, arg2, arg3, arg4, arg5);
        }
    }
    /* tailcall */
    return smallvec::SmallVec$LT$A$GT$::push::h1d2aed1a79494331(arg5, rbp);
}
