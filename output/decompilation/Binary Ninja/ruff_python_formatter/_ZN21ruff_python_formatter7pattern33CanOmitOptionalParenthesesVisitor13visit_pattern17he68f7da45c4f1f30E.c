
  int32_t* ruff_python_formatter::pattern::CanOmitOptionalParenthesesVisitor::visit_pattern::he68f7da45c4f1f30(int64_t* arg1, void* arg2, int64_t* arg3)

{
    int64_t rax;
    int64_t var_28 = rax;
    int32_t* result = -0x8000000000000000 ^ *arg2;
    int32_t* result_1 = 3;
    
    if (result < 8)
        result_1 = result;
    
    int64_t* rbx = arg1;
    
    switch (result_1)
    {
        case nullptr:
        {
            result = *(arg2 + 8);
            
            if (*result == 2)
            {
                result = *(rbx + 0x21);
                void* rcx_1;
                rcx_1 = result <= 0;
                result = result >= 2;
                char temp2_1 = result;
                result -= rcx_1;
                
                if (temp2_1 == rcx_1)
                    rbx[2] += 1;
                else
                {
                    result = result;
                    
                    if (result != 1)
                    {
                        rbx[2] = 1;
                        *(rbx + 0x21) = 1;
                    }
                }
            }
            break;
        }
        case 2:
        case 3:
        {
            rbx[4] = 1;
            break;
        }
        case 4:
        {
            rbx[4] = 1;
            
            if (!*rbx)
                *rbx = 1;
            break;
        }
        case 7:
        {
            result = *(arg2 + 0x18);
            void* rcx_2 = nullptr;
            
            if (result >= 1)
                rcx_2 = result - 1;
            
            uint64_t rdx_2 = *(rbx + 0x21);
            arg1 = rdx_2 < 2;
            rdx_2 = rdx_2 > 2;
            char temp1_1 = rdx_2;
            rdx_2 -= arg1;
            
            if (temp1_1 == arg1)
                rbx[2] += rcx_2;
            else if (rdx_2 != 1)
            {
                rbx[2] = rcx_2;
                *(rbx + 0x21) = 2;
            }
            
            if (result)
            {
                int64_t* rsi = *(arg2 + 0x10);
                int64_t i_1 = result * 0x68;
                int64_t i;
                
                do
                {
                    result = ruff_python_formatter::pattern::CanOmitOptionalParenthesesVisitor::visit_sub_pattern::hfa2475e1b6bf2f40(rbx, rsi, arg3);
                    rsi = &rsi[0xd];
                    i = i_1;
                    i_1 -= 0x68;
                } while (i != 0x68);
            }
            break;
        }
    }
    
    return result;
}
