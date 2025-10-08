
  uint32_t* const ruff_python_formatter::pattern::can_pattern_omit_optional_parentheses::has_parentheses_and_is_non_empty::h58b3de22f38e758c(int64_t* arg1, int64_t* arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    int64_t rax_1 = -0x8000000000000000 ^ *arg1;
    int64_t rcx = 3;
    
    if (rax_1 < 8)
        rcx = rax_1;
    
    void* rax_3;
    
    switch (rcx)
    {
        case 0:
        case 1:
        case 5:
        case 6:
        case 7:
        {
            rax_3 = *(arg2[2] + 0x60);
            /* tailcall */
            return ruff_python_formatter::pattern::is_pattern_parenthesized::h69f247e6dcabd7b6(
                arg1, *(rax_3 + 8), *(rax_3 + 0x10), *arg2, arg2[1]);
        }
        case 2:
        {
            if (!arg1[3])
            {
                label_717cfc:
                
                if (!ruff_python_formatter::comments::Comments::dangling::hc16bf927eb814731(
                    arg2[2], arg1))
                {
                    rax_3 = *(arg2[2] + 0x60);
                    /* tailcall */
                    return
                        ruff_python_formatter::pattern::is_pattern_parenthesized::h69f247e6dcabd7b6(
                        arg1, *(rax_3 + 8), *(rax_3 + 0x10), *arg2, arg2[1]);
                }
            }
            break;
        }
        case 3:
        {
            if (!arg1[5])
                goto label_717cfc;
            break;
        }
        case 4:
        {
            if (!arg1[3])
            {
                rax_3 = *(arg2[2] + 0x60);
                /* tailcall */
                return ruff_python_formatter::pattern::is_pattern_parenthesized::h69f247e6dcabd7b6(
                    arg1, *(rax_3 + 8), *(rax_3 + 0x10), *arg2, arg2[1]);
            }
            break;
        }
    }
    
    uint32_t* const result;
    result = 1;
    return result;
}
