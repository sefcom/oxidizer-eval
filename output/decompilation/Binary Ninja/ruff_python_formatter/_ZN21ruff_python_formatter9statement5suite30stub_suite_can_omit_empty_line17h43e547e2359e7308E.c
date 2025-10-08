
  uint64_t ruff_python_formatter::statement::suite::stub_suite_can_omit_empty_line::h43e547e2359e7308(int64_t* arg1, int64_t* arg2, int64_t arg3, void* arg4)

{
    int64_t var_40 = arg3;
    int64_t rbx;
    int32_t rbp_1;
    
    if (!(0 + -(*arg1)))
    {
        rbx = *(arg4 + 0x30);
        rbp_1 = 0;
    }
    else
    {
        rbx = *(arg4 + 0x30);
        
        if (!ruff_python_formatter::statement::suite::contains_only_an_ellipsis::hc074c7c945b43356(
            arg1[5], arg1[6], *(rbx(arg3) + 0x10)))
        {
            rbp_1 = 0;
            arg3 = var_40;
        }
        else if (*arg2 != -0x8000000000000000)
        {
            rbp_1 = 0;
            arg3 = var_40;
        }
        else
        {
            arg3 = var_40;
            rbp_1 = ruff_python_formatter::statement::suite::stub_suite_can_omit_empty_line::_$u7b$$u7b$closure$u7d$$u7d$::ha35b9a0bfd41ca2e(var_40, arg4, &arg2[1]);
        }
    }
    
    void* rax_4 = rbx(arg3);
    int64_t rcx = *arg1;
    int64_t* rax_5;
    bool r13_1;
    
    if (!*(rax_4 + 0x3a))
    {
        if (rcx > -0x7fffffffffffffe9)
        {
            if (*arg2 != -0x8000000000000000)
                r13_1 = false;
            else
                r13_1 = arg2[3];
            
            goto label_721cce;
        }
        
        r13_1 = false;
        rax_5 = nullptr;
    }
    else
    {
        r13_1 = false;
        rax_5 = nullptr;
        
        if (rcx > -0x7fffffffffffffe9)
        {
            label_721cce:
            
            if (!ruff_python_formatter::statement::suite::contains_only_an_ellipsis::hc074c7c945b43356(arg1[4], arg1[5], *(rbx(var_40) + 0x10)))
                rax_5 = nullptr;
            else
                rax_5 = *arg2 > -0x7fffffffffffffe9;
        }
    }
    
    rbp_1 |= r13_1;
    rbp_1 |= rax_5;
    return rbp_1;
}
