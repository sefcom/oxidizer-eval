
  fn bat::assets::clear_asset::hee2122ec557ceffa(arg1: *mut i64, arg2: i64) -> i64

{
    let mut var_28: i64 = arg2;
    let rdx: i64;
    let var_20: i64 = rdx;
    let mut var_48: *mut i64 = &var_28;
    let var_40: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf38b2ed4feebf29b;
    let mut var_78: *mut *mut [i8; 0x2a] = &data_ac8540;
    let var_70: i64 = 2;
    let var_58: i64 = 0;
    let var_68: *mut *mut i64 = &var_48;
    let mut var_60: i64 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_78);
    let rax: *mut i64 = std::fs::remove_file::hc1e0ef890ef0d27c(arg1);
    
    if rax == 0
    {
        var_78 = &data_ac8560;
        let var_70_2: i64 = 1;
        let var_68_2: i64 = 8;
        var_60 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_78);
    }
    else if std::io::error::Error::kind::h135fe00c4e7365f3(rax) == 0
    {
        var_48 = rax;
        var_78 = &data_ac8570;
        let var_70_3: i64 = 1;
        let var_68_3: i64 = 8;
        var_60 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_78);
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h87346026eda922b9(&var_48);
    }
    else
    {
        let mut var_80: *mut i64 = rax;
        var_48 = arg1;
        let var_40_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
            _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
        let var_38_1: *mut i64 = &var_80;
        let var_30_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
        var_78 = &data_ac8580;
        let var_70_1: i64 = 3;
        let var_58_1: i64 = 0;
        let var_68_1: *mut *mut i64 = &var_48;
        let var_60_1: i64 = 2;
        std::io::stdio::_print::h5e446ff973c02de6(&var_78);
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h87346026eda922b9(&var_80);
    }
    
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd0005799f5f2e1be(arg1)
}
