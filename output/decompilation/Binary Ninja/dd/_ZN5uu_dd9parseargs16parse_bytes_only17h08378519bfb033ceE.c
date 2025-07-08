
  int64_t uu_dd::parseargs::parse_bytes_only::h08378519bfb033ce(int64_t* arg1, char* arg2, void* arg3, void* arg4)

{
    if (arg4)
    {
        if (arg4 >= arg3)
        {
            if (arg4 != arg3)
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, nullptr, arg4);
                /* no return */
            }
        }
        else if (*(arg2 + arg4) <= 0xbf)
        {
            core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, nullptr, arg4);
            /* no return */
        }
    }
    
    char var_28;
    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u64$GT$::from_str::h29411471c0770b67(&var_28, arg2, arg4);
    int64_t result;
    
    if (!var_28)
    {
        int64_t var_20;
        arg1[1] = var_20;
        result = 0xe;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&arg1[1], 
            arg2, arg3);
        result = 7;
    }
    
    *arg1 = result;
    return result;
}
