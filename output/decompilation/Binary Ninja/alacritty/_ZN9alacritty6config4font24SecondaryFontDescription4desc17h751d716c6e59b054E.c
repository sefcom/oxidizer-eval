
  int64_t alacritty::config::font::SecondaryFontDescription::desc::h751d716c6e59b054(int128_t* arg1, int64_t* arg2, void* arg3)

{
    uint64_t r15 = -0x8000000000000000;
    uint64_t var_58;
    int128_t var_50;
    int128_t var_28;
    
    if (!(0 + -(*arg2)))
    {
        uint64_t var_40;
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_40, arg2);
        int128_t var_38;
        var_50 = var_38;
        var_58 = var_40;
        
        if (arg2[3] != -0x8000000000000000)
        {
            label_834ec7:
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_40, &arg2[3]);
            r15 = var_40;
            var_28 = var_38;
        }
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_58, arg3);
        
        if (arg2[3] != -0x8000000000000000)
            goto label_834ec7;
    }
    
    int64_t result = *var_50[8];
    arg1[1] = result;
    *arg1 = var_58;
    *(arg1 + 0x18) = r15;
    arg1[2] = var_28;
    return result;
}
