
  uint64_t ruff_python_formatter::string::normalize::QuoteMetadata::choose::hb1a9d58975495a88(char* arg1, int32_t arg2)

{
    uint32_t rcx = *arg1;
    
    if (rcx && rcx != 1)
    {
        int32_t rcx_1 = *(arg1 + 4);
        int32_t temp0_1 = *(arg1 + 8);
        bool c_1 = rcx_1 < temp0_1;
        rcx_1 = rcx_1 != temp0_1 && !c_1;
        rcx_1 = rcx_1 - 0;
        
        if (rcx_1)
        {
            if (rcx_1 != 1)
                return 0;
            
            uint32_t result;
            result = 1;
            return result;
        }
    }
    else if (arg1[1])
        return arg1[0xc];
    
    return arg2;
}
