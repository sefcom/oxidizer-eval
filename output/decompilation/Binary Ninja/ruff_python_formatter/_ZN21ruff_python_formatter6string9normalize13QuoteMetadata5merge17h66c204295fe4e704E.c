
  int64_t ruff_python_formatter::string::normalize::QuoteMetadata::merge::h66c204295fe4e704(char* arg1, char* arg2, char* arg3, uint128_t arg4 @ zmm0)

{
    char result = *arg2;
    char r8 = 2;
    
    if (result == *arg3)
    {
        char rcx_1 = arg2[1];
        uint32_t result_1 = result;
        
        if (!result_1 || result_1 == 1)
        {
            bool cond:0_1 = !(rcx_1 & 1);
            rcx_1 = 1;
            
            if (cond:0_1)
                rcx_1 = arg3[1] & 1;
        }
        else
            arg4 = _mm_add_epi32(*(arg3 + 4), *(arg2 + 4));
        
        r8 = arg2[0xc];
        *arg1 = result;
        arg1[1] = rcx_1;
        *(arg1 + 4) = arg4;
    }
    
    arg1[0xc] = r8;
    return result;
}
