
  int64_t uu_uniq::handle_extract_obs_skip_fields::h14d32fa87c099e4f(int128_t* arg1, int64_t arg2, uint64_t arg3, int64_t* arg4)

{
    int64_t var_a8 = 0;
    int64_t var_a0 = 4;
    int64_t var_98 = 0;
    char var_a9 = 0;
    char var_aa = 0;
    int64_t var_78 = arg2;
    int64_t var_70 = arg2 + arg3;
    char* var_68 = &var_aa;
    char* var_60 = &var_a9;
    int64_t* var_58 = &var_a8;
    int64_t var_90;
    core::iter::traits::iterator::Iterator::collect::h0975b431dfd15c94(&var_90, &var_78);
    int64_t var_88;
    
    if (!var_98)
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h555f59bb363643cb(&var_78, arg2, arg3);
        arg1[1] = var_68;
        *arg1 = var_78;
    }
    else
    {
        int64_t var_80;
        
        if (!var_aa)
        {
            int128_t var_50;
            core::iter::traits::iterator::Iterator::collect::h3b15c762db729d48(&var_50, var_a0);
            
            if (*arg4 != -0x8000000000000000)
            {
                int64_t rsi_4 = arg4[1];
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hc93e8a66ab786634(&var_50, rsi_4, arg4[2] + rsi_4);
            }
            
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h95e753fd9f550503(arg4);
            int64_t var_40;
            arg4[2] = var_40;
            *arg4 = var_50;
            
            if (var_80 > 1)
                goto label_4672d0;
            
            *arg1 = -0x8000000000000000;
        }
        else
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h95e753fd9f550503(arg4);
            *arg4 = -0x8000000000000000;
            
            if (var_80 <= 1)
                *arg1 = -0x8000000000000000;
            else
            {
                label_4672d0:
                int128_t var_38;
                core::iter::traits::iterator::Iterator::collect::h3b15c762db729d48(&var_38, var_88);
                int64_t var_28;
                arg1[1] = var_28;
                *arg1 = var_38;
            }
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::h341dc4a29c957248(var_90, var_88);
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::h341dc4a29c957248(var_a8, 
        var_a0);
}
