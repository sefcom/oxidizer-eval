
  int64_t uu_split::handle_extract_obs_lines::h29d50544fed6fa56(int128_t* arg1, int64_t arg2, uint64_t arg3, int128_t* arg4)

{
    int64_t var_a0 = 0;
    int64_t var_98 = 4;
    int64_t var_90 = 0;
    char var_a1 = 0;
    int64_t var_70 = arg2;
    int64_t var_68 = arg2 + arg3;
    char* var_60 = &var_a1;
    int64_t* var_58 = &var_a0;
    int64_t var_88;
    core::iter::traits::iterator::Iterator::collect::h7ad22d5ebc8d4397(&var_88, &var_70);
    int64_t var_80;
    
    if (!var_90)
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&var_70, arg2, arg3);
        arg1[1] = var_60;
        *arg1 = var_70;
    }
    else
    {
        int128_t var_50;
        core::iter::traits::iterator::Iterator::collect::h52fe2ecd3228eeac(&var_50, var_98);
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hdcaffe84f2735cf8(arg4);
        int64_t var_40;
        arg4[1] = var_40;
        *arg4 = var_50;
        int64_t var_78;
        
        if (var_78 < 2)
            *arg1 = -0x8000000000000000;
        else
        {
            int128_t var_38;
            core::iter::traits::iterator::Iterator::collect::h52fe2ecd3228eeac(&var_38, var_80);
            int64_t var_28;
            arg1[1] = var_28;
            *arg1 = var_38;
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::h8f4b49139bd30d2f(var_88, var_80);
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::h8f4b49139bd30d2f(var_a0, 
        var_98);
}
