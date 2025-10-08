
  fn bat::assets::assets_metadata::AssetsMetadata::is_compatible_with::h390ab7bdc192b6fc(arg1: *mut i64, arg2: *mut i8) -> u64

{
    let mut var_88: i128;
    let rdx: i64;
    semver::Version::parse::ha08819266e177ef5(&var_88, arg2, rdx);
    let mut var_60: ();
    core::result::Result$LT$T$C$E$GT$::expect::hf081fbd4c2ddd752(&var_60, &var_88);
    let mut rbx: i64 = 0;
    
    if !(0 + -(*arg1))
    {
        let mut var_38: i64;
        bat::assets::assets_metadata::AssetsMetadata::is_compatible_with::_$u7b$$u7b$closure$u7d$$u7d$::hf14af39221be0f52(&var_38, arg1[1], arg1[2]);
        
        if var_38 == 0
        {
            rbx = 0;
        }
        else
        {
            let var_18: i64;
            let var_68_1: i64 = var_18;
            var_88 = var_38;
            let var_50: i64;
            let var_28: i128;
            
            if var_50 != var_28
            {
                core::ptr::drop_in_place$LT$semver..Version$GT$::hcccc663c243e5e9b(&var_88);
                rbx = 0;
            }
            else
            {
                core::ptr::drop_in_place$LT$semver..Version$GT$::hcccc663c243e5e9b(&var_88);
                let var_48: i64;
                rbx = var_48 == *var_28[8];
            }
        }
    }
    
    core::ptr::drop_in_place$LT$semver..Version$GT$::hcccc663c243e5e9b(&var_60);
    rbx
}
