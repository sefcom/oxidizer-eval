
  int64_t fd::filter::owner::OwnerFilter::filter_ignore::hbaaea47d82f3121f(int32_t* arg1, int32_t* arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    int32_t rcx;
    char result = _$LT$fd..filter..owner..Check$LT$T$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1af06540f0d526a6(*arg2, arg2[1], 2, rcx);
    
    if (result)
    {
        result = _$LT$fd..filter..owner..Check$LT$T$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1af06540f0d526a6(arg2[2], arg2[3], 2, rcx);
        
        if (result)
        {
            *arg1 = 3;
            return result;
        }
    }
    
    *arg1 = *arg2;
    return result;
}
