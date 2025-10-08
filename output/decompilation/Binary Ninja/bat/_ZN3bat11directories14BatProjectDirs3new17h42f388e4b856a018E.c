
  int64_t bat::directories::BatProjectDirs::new::h42f388e4b856a018(int64_t* arg1)

{
    int64_t var_a8;
    etcetera::base_strategy::choose_base_strategy::hc5bd7776d1000045(&var_a8);
    int64_t rax = var_a8;
    
    if (-(rax) == -0x8000000000000000)
    {
        int64_t result = core::ptr::drop_in_place$LT$core..result..Result$LT$etcetera..base_strategy..xdg..Xdg$C$etcetera..HomeDirError$GT$$GT$::hc90650ba3bd30ba0(&var_a8);
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    int128_t var_a0;
    int128_t var_38 = var_a0;
    int64_t var_40 = rax;
    std::env::var_os::hdd22989238190b61(&var_a8, "BAT_CACHE_PATHBAT_CONFIG_DIRCoul…");
    int128_t var_78;
    int128_t var_58;
    int64_t var_48;
    
    if (var_a8 != -0x8000000000000000)
    {
        int128_t zmm0_1 = var_a8;
        
        if (zmm0_1 == -0x8000000000000000)
            goto label_7ad464;
        
        var_48 = *var_a0[8];
        var_58 = zmm0_1;
    }
    else
    {
        var_78 = -0x8000000000000000;
        label_7ad464:
        _$LT$etcetera..base_strategy..xdg..Xdg$u20$as$u20$etcetera..base_strategy..BaseStrategy$GT$::cache_dir::hbf4916433bd1722e(&var_a8, &var_40);
        std::path::Path::join::hea24a9da038aebd6(&var_58, var_a0, *var_a0[8], 
            "batA cat(1) clone with wings.A c…");
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd0005799f5f2e1be(&var_a8);
    }
    
    std::env::var_os::hdd22989238190b61(&var_a8, "BAT_CONFIG_DIRCould not get home…");
    int128_t var_28;
    int64_t var_18;
    int128_t zmm0_2;
    
    if (var_a8 != -0x8000000000000000)
    {
        zmm0_2 = var_a8;
        
        if (zmm0_2 == -0x8000000000000000)
            goto label_7ad4ec;
        
        var_18 = *var_a0[8];
        var_28 = zmm0_2;
    }
    else
    {
        var_78 = -0x8000000000000000;
        label_7ad4ec:
        _$LT$etcetera..base_strategy..xdg..Xdg$u20$as$u20$etcetera..base_strategy..BaseStrategy$GT$::config_dir::h8860bfd3bb378d0f(&var_a8, &var_40);
        std::path::Path::join::hea24a9da038aebd6(&var_28, var_a0, *var_a0[8], 
            "batA cat(1) clone with wings.A c…");
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd0005799f5f2e1be(&var_a8);
    }
    
    *var_a0[8] = var_48;
    zmm0_2 = var_58;
    var_a8 = zmm0_2;
    int128_t zmm1 = var_28;
    *arg1 = zmm0_2;
    arg1[4] = *zmm1[8];
    arg1[5] = var_18;
    arg1[2] = *var_a0[8];
    arg1[3] = zmm1;
    return core::ptr::drop_in_place$LT$etcetera..base_strategy..xdg..Xdg$GT$::hd3280c8f258de416(
        &var_40);
}
