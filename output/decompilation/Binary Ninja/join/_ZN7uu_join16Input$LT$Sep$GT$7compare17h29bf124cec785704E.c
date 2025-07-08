
  uint64_t uu_join::Input$LT$Sep$GT$::compare::h29bf124cec785704(char arg1, int64_t arg2, uint64_t arg3, int64_t arg4, uint64_t arg5)

{
    if (!arg2 || !arg4)
    {
        if (!arg2)
            return 0 - 0;
        
        return 1;
    }
    
    if (arg1)
    {
        int64_t var_28 = arg2;
        uint64_t var_20 = arg3;
        int64_t var_18 = arg4;
        uint64_t var_10 = arg5;
        return _$LT$uu_join..CaseInsensitiveSlice$u20$as$u20$core..cmp..Ord$GT$::cmp::h5b1b26860e9af836(&var_28, &var_18);
    }
    
    int64_t rbx_1 = arg3 - arg5;
    
    if (arg3 < arg5)
        arg5 = arg3;
    
    int64_t rax_3 = memcmp(arg2, arg4, arg5);
    
    if (rax_3)
        rbx_1 = rax_3;
    
    int32_t rcx_1;
    rcx_1 = rbx_1;
    
    if (rbx_1 >= 0)
        return rcx_1;
    
    return 0xff;
}
