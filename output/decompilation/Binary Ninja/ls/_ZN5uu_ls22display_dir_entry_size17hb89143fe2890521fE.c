
  int32_t* uu_ls::display_dir_entry_size::hb89143fe2890521f(int64_t* arg1, void* arg2, void* arg3)

{
    int32_t* result = uu_ls::PathData::get_metadata::hc7a96a0547653f90(arg2);
    
    if (!result)
    {
        __builtin_memset(arg1, 0, 0x30);
        return result;
    }
    
    int128_t var_60;
    uu_ls::display_len_or_rdev::habe6b45626a6ff16(&var_60, result, *(arg3 + 0xd0), *(arg3 + 0xf1));
    int128_t var_a8;
    int64_t var_98_1;
    int64_t var_88_1;
    int64_t var_80_1;
    int128_t var_78;
    int64_t var_68;
    int64_t var_50;
    int64_t var_48;
    int64_t r13_1;
    
    if (var_48 != -0x8000000000000000)
    {
        r13_1 = var_50;
        var_68 = r13_1;
        var_78 = var_60;
        int64_t var_38;
        var_98_1 = var_38;
        var_a8 = var_48;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_a8);
        var_80_1 = var_38;
        var_88_1 = var_38 + r13_1 + 2;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_78);
    }
    else
    {
        var_a8 = var_60;
        var_88_1 = var_50;
        var_98_1 = var_50;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_a8);
        var_80_1 = 0;
        r13_1 = 0;
    }
    
    uu_ls::display_symlink_count::h0e09a9bc6ad70230(&var_78, *(result + 0x30));
    char rbp_1 = *(arg3 + 0xe3);
    uu_ls::display_uname::hf0da37ae6ca87e0c(&var_a8, result[0xf], rbp_1);
    uu_ls::display_group::hd4d6945b2a81cff8(&var_60, result[0x10], rbp_1);
    *arg1 = var_68;
    arg1[1] = var_98_1;
    arg1[2] = var_50;
    arg1[3] = var_88_1;
    arg1[4] = r13_1;
    arg1[5] = var_80_1;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_60);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_a8);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_78);
}
