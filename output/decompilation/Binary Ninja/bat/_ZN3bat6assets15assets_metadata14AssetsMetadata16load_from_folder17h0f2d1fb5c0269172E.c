
  char* bat::assets::assets_metadata::AssetsMetadata::load_from_folder::h0f2d1fb5c0269172(char* arg1, int64_t arg2, uint64_t arg3)

{
    char var_120;
    bat::assets::assets_metadata::AssetsMetadata::try_load_from_folder::hea3fe7d33e77c6ce(&var_120, 
        arg2, arg3);
    int128_t var_118;
    int128_t var_108;
    
    if (var_120 == 0xd)
    {
        int64_t var_f8;
        *(arg1 + 0x28) = var_f8;
        *(arg1 + 0x18) = var_108;
        *(arg1 + 8) = var_118;
        *arg1 = 0xd;
    }
    else if (var_120 != 6)
    {
        void var_138;
        std::path::Path::join::hb97e165d6abf39bf(&var_138, arg2, arg3, 
            "syntaxes.binthemes.binbat follow…");
        int64_t var_130;
        int64_t var_d0;
        std::fs::metadata::h4d9fc7ae25563c19(&var_d0, var_130);
        int32_t r12_1 = var_d0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::haf24c6c708ccc154(&var_d0);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf251af593e1b1aff(&var_138);
        int32_t r14_1;
        
        if (r12_1 == 2)
        {
            std::path::Path::join::hb97e165d6abf39bf(&var_138, arg2, arg3, 
                "themes.binbat follows semantic v…");
            std::fs::metadata::h4d9fc7ae25563c19(&var_d0, var_130);
            r14_1 = var_d0;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::haf24c6c708ccc154(&var_d0);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf251af593e1b1aff(&var_138);
        }
        
        if (r12_1 != 2 || r14_1 != 2)
        {
            *(arg1 + 8) = -0x8000000000000000;
            *(arg1 + 0x28) = 0x3b9aca00;
        }
        else
            *(arg1 + 8) = -0x7fffffffffffffff;
        
        *arg1 = 0xd;
        core::ptr::drop_in_place$LT$bat..error..Error$GT$::head773e43869367f(&var_120);
    }
    else
    {
        int128_t var_e0;
        *(arg1 + 0x40) = var_e0;
        int128_t zmm0_1 = var_120;
        int128_t var_f0;
        *(arg1 + 0x30) = var_f0;
        *(arg1 + 0x20) = var_108;
        *(arg1 + 0x10) = var_118;
        *arg1 = zmm0_1;
    }
    return arg1;
}
