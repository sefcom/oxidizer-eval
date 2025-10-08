
  void ruff_python_formatter::statement::stmt_with::WithItemsLayout::from_statement::h4fbc594b59c1b82b(int32_t* arg1, void* arg2, int64_t* arg3, int64_t arg4)

{
    if (arg4)
    {
        *(arg1 + 8) = 5;
        *arg1 = 4;
        return;
    }
    
    if (ruff_python_formatter::statement::stmt_with::has_magic_trailing_comma::h2ac603b89bb80e24(
        arg2, arg3))
    {
        *(arg1 + 8) = 4;
        *arg1 = 4;
        return;
    }
    
    void* rsi_1 = arg2;
    int64_t var_58;
    void* rax;
    int32_t* r15_1;
    
    if (*(arg2 + 0x10) != 1)
    {
        label_72089a:
        char temp0_1 = *(arg3 + 0x2c);
        bool rcx_2 = temp0_1 >= 3;
        
        if (temp0_1 == 3)
            rcx_2 = *(arg3 + 0x2d) >= 9;
        
        if (!rcx_2)
        {
            ruff_python_formatter::statement::stmt_with::are_with_items_parenthesized::h74e11b19a49524e4(&var_58, rsi_1, *arg3, arg3[1]);
            int32_t rcx_4 = var_58;
            rax = *var_58[4];
            
            if (rcx_4 != 4)
            {
                int32_t var_44;
                arg1[5] = var_44;
                *(arg1 + 5) = *var_58[5];
                *arg1 = rcx_4;
                arg1[1] = rax;
            }
            else
            {
                rsi_1 = arg2;
                
                if (rax & 1)
                    goto label_7208a9;
                
                *(arg1 + 8) = 3;
                *arg1 = 4;
            }
        }
        else
        {
            label_7208a9:
            r15_1 = *(rsi_1 + 8);
            rax = 4;
            
            if (*(rsi_1 + 0x10) == 1)
            {
                if (!*(r15_1 + 0x58))
                    rax = 1;
                else
                    rax = ((ruff_python_formatter::expression::can_omit_optional_parentheses::he025906cb0ce46e0(r15_1, arg3) ^ 1) << 1) + 2;
            }
            
            *(arg1 + 8) = rax;
            *(arg1 + 0x10) = r15_1;
            *arg1 = 4;
        }
    }
    else
    {
        r15_1 = *(rsi_1 + 8);
        void* rbp_1 = arg3[2];
        int64_t var_40 = 0x54;
        int32_t* var_38_1 = r15_1;
        int64_t rdx;
        rax =
            ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::leading::hb31877b14c47a989(
            rbp_1 + 0x10, &var_40);
        
        if (rdx)
        {
            *(arg1 + 8) = 5;
            *arg1 = 4;
        }
        else
        {
            var_58 = 0x54;
            int32_t* var_50_1 = r15_1;
            int64_t rdx_1;
            rax = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::trailing::hdc749e0acdbc0869(rbp_1 + 0x10, &var_58);
            
            if (rdx_1)
            {
                *(arg1 + 8) = 5;
                *arg1 = 4;
            }
            else
            {
                uint64_t rax_1;
                int64_t rdx_2;
                rax_1 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(r15_1);
                void* rcx = *(rbp_1 + 0x60);
                rsi_1 = arg2;
                
                if (!ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_1, rdx_2, *(rcx + 8), *(rcx + 0x10), *arg3, arg3[1]))
                    goto label_72089a;
                
                *(arg1 + 8) = 0;
                *(arg1 + 0x10) = r15_1;
                *arg1 = 4;
            }
        }
    }
}
