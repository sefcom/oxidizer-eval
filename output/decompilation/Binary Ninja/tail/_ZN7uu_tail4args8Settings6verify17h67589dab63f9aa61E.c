
  void* const uu_tail::args::Settings::verify::h67589dab63f9aa61(int64_t* arg1)

{
    int64_t rax = arg1[4];
    int64_t rcx = arg1[5];
    int64_t var_18 = rax;
    int64_t var_10 = rcx * 0x30 + rax;
    void* const result = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h4b3a6ea672657da1(&var_18);
    char rcx_4 = *(arg1 + 0x4c);
    
    if (!result)
    {
        label_4f9cdd:
        
        if (rcx_4 != 2)
            return nullptr;
        
        result = *arg1;
        
        if (result == 4)
            result = arg1[1];
        
        result = result == 3;
        result *= 2;
    }
    else
    {
        result = 1;
        
        if (!(rcx_4 & 1))
            goto label_4f9cdd;
    }
    
    return result;
}
