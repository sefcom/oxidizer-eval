
  int128_t* bat::assets::HighlightingAssets::from_cache::h8cfca79731ebfcd6(int128_t* arg1, int64_t arg2, uint64_t arg3)

{
    int128_t var_b8;
    std::path::Path::join::hb97e165d6abf39bf(&var_b8, arg2, arg3, 
        "syntaxes.binthemes.binbat follow…");
    void var_a0;
    std::path::Path::join::hb97e165d6abf39bf(&var_a0, arg2, arg3, 
        "themes.binbat follows semantic v…");
    int64_t var_98;
    char var_68;
    bat::assets::asset_from_cache::h3795340a0ae6536f(&var_68, var_98);
    char rcx = var_68;
    int128_t var_67;
    
    if (rcx != 0xd)
    {
        int128_t var_28;
        *(arg1 + 0x48) = var_28;
        int128_t var_38;
        *(arg1 + 0x38) = var_38;
        int128_t var_48;
        *(arg1 + 0x28) = var_48;
        *(arg1 + 0x18) = var_67;
        *(arg1 + 9) = var_67;
        *(arg1 + 8) = rcx;
        *arg1 = -0x7fffffffffffffff;
        core::ptr::drop_in_place$LT$bat..assets..serialized_syntax_set..SerializedSyntaxSet$GT$::h6dfb02adb4d69a30(&var_b8);
    }
    else
    {
        int128_t var_79;
        int64_t var_50;
        *var_79[8] = var_50;
        int128_t var_88 = var_67;
        *(arg1 + 0x78) = var_50;
        *(arg1 + 0x68) = var_67;
        *arg1 = var_b8;
        int64_t var_a8;
        arg1[1] = var_a8;
        *(arg1 + 0x18) = -0x8000000000000000;
        arg1[8] = 0;
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf251af593e1b1aff(&var_a0);
    return arg1;
}
