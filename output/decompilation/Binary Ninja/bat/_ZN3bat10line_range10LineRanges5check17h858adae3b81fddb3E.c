
  int64_t bat::line_range::LineRanges::check::h858adae3b81fddb3(void* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_48 = arg2;
    int64_t var_40 = arg3;
    int64_t var_38 = arg4;
    int64_t rax = *(arg1 + 8);
    int64_t rcx_2 = (*(arg1 + 0x10) << 5) + rax;
    int64_t var_30 = rax;
    int64_t var_28 = rcx_2;
    
    if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hc4f64b89ed9775b4(&var_30, &var_48, &var_40))
        return 0;
    
    if (arg3 & 1)
    {
        int64_t rcx_3 = 0;
        
        if (arg4 >= *(arg1 + 0x20))
            rcx_3 = arg4 - *(arg1 + 0x20);
        
        if (arg2 > rcx_3)
            return 2;
    }
    
    return 2 - 0;
}
