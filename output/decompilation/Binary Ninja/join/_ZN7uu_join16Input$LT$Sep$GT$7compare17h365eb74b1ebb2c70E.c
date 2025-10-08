
  char* uu_join::Input$LT$Sep$GT$::compare::h365eb74b1ebb2c70(char arg1, int64_t arg2, uint64_t arg3, int64_t arg4, uint64_t arg5)

{
    if (!(arg2 & arg4))
    {
        if (!arg2)
            return 0 - 0;
        
        return 1;
    }
    
    if (arg1 & 1)
    {
        int64_t var_28 = arg2;
        uint64_t var_20 = arg3;
        int64_t var_18 = arg4;
        uint64_t var_10 = arg5;
        return _$LT$uu_join..CaseInsensitiveSlice$u20$as$u20$core..cmp..Ord$GT$::cmp::hd7c29e2189cad42a(&var_28, &var_18);
    }
    
    int64_t result_1 = arg3 - arg5;
    
    if (arg3 < arg5)
        arg5 = arg3;
    
    int64_t result = memcmp(arg2, arg4, arg5);
    
    if (result)
        result_1 = result;
    
    result = result_1 > 0;
    result -= result_1 < 0;
    return result;
}
