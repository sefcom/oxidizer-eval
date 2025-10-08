
  int64_t ruff_python_formatter::expression::has_own_parentheses::he088d283b6b32ebc(int32_t* arg1, void* arg2)

{
    int64_t result;
    result = 2;
    uint64_t rcx_1 = *arg1 - 6;
    
    if (rcx_1 <= 0x18)
        switch (rcx_1)
        {
            case 0:
            case 1:
            case 0x17:
            {
                label_7104ad:
                
                if (*(arg1 + 0x18))
                {
                    result = 1;
                    return result;
                }
                
                label_7104de:
                int64_t rdx_1;
                result = ruff_python_formatter::comments::Comments::dangling::h912433ddb439ab44(
                    arg2, 
                    _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(arg1));
                
                if (!rdx_1)
                    return 0;
                
                result = 1;
                break;
            }
            case 2:
            case 3:
            case 4:
            case 0x14:
            {
                result = 1;
                break;
            }
            case 5:
            {
                result = 2;
                result = 2 - arg1[0xd];
                break;
            }
            case 0xa:
            {
                *(arg1 + 0x28);
                
                if (*(arg1 + 0x18) == -(*(arg1 + 0x28)))
                    goto label_7104de;
                
                result = 1;
                break;
            }
            case 0x18:
            {
                if (arg1[0xb])
                    goto label_7104ad;
                break;
            }
        }
    
    return result;
}
