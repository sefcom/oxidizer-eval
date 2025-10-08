
  uint64_t bat::assets::assets_metadata::AssetsMetadata::is_compatible_with::h390ab7bdc192b6fc(int64_t* arg1, char* arg2)

{
    int128_t var_88;
    int64_t rdx;
    semver::Version::parse::ha08819266e177ef5(&var_88, arg2, rdx);
    void var_60;
    core::result::Result$LT$T$C$E$GT$::expect::hf081fbd4c2ddd752(&var_60, &var_88);
    int64_t rbx = 0;
    
    if (!(0 + -(*arg1)))
    {
        int64_t var_38;
        bat::assets::assets_metadata::AssetsMetadata::is_compatible_with::_$u7b$$u7b$closure$u7d$$u7d$::hf14af39221be0f52(&var_38, arg1[1], arg1[2]);
        
        if (!var_38)
            rbx = 0;
        else
        {
            int64_t var_18;
            int64_t var_68_1 = var_18;
            var_88 = var_38;
            int64_t var_50;
            int128_t var_28;
            
            if (var_50 != var_28)
            {
                core::ptr::drop_in_place$LT$semver..Version$GT$::hcccc663c243e5e9b(&var_88);
                rbx = 0;
            }
            else
            {
                core::ptr::drop_in_place$LT$semver..Version$GT$::hcccc663c243e5e9b(&var_88);
                int64_t var_48;
                rbx = var_48 == *var_28[8];
            }
        }
    }
    
    core::ptr::drop_in_place$LT$semver..Version$GT$::hcccc663c243e5e9b(&var_60);
    return rbx;
}
