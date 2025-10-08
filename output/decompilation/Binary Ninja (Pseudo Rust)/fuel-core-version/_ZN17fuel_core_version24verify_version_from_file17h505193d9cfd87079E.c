
  fn fuel_core_version::verify_version_from_file::h505193d9cfd87079(arg1: *mut i64) -> u64

{
    let mut var_98: i128 = data_417400;
    let mut var_a8: i128 = *data_4173f0;
    let var_88: i64 = 0;
    let mut result: u64;
    let mut var_78: i128;
    
    if _$LT$semver..Version$u20$as$u20$core..cmp..PartialEq$GT$::eq::hd1b3480e92056b54(arg1, 
        &var_a8) == 0
    {
        core::ptr::drop_in_place$LT$semver..Version$GT$::h33470c6ef43969d7(&var_a8);
        let var_68_1: i128 = data_417400;
        var_78 = *data_4173f0;
        let var_58_1: i64 = 0;
        let mut var_48: *mut i128 = &var_78;
        let var_40_1: fn(arg1: i64, arg2: *mut i64) -> u64 = semver::display::_$LT$impl$u20$core..fmt..Display$u20$for$u20$semver..Version$GT$::fmt::haa28aa2a22053214;
        let var_38_1: *mut i64 = arg1;
        let var_30_1: fn(arg1: i64, arg2: *mut i64) -> u64 = semver::display::_$LT$impl$u20$core..fmt..Display$u20$for$u20$semver..Version$GT$::fmt::haa28aa2a22053214;
        var_a8 = &data_52fbd8;
        *var_a8[8] = 3;
        let var_88_2: i64 = 0;
        var_98 = &var_48;
        *var_98[8] = 2;
        let mut var_28: ();
        core::option::Option$LT$T$GT$::map_or_else::h36fb9c365ec81203(&var_28, &var_a8);
        core::ptr::drop_in_place$LT$semver..Version$GT$::h33470c6ef43969d7(&var_78);
        result =
            eyre::error::_$LT$impl$u20$eyre..Report$GT$::from_adhoc::ha8aeb145c9259867(&var_28);
    }
    else
    {
        core::ptr::drop_in_place$LT$semver..Version$GT$::h33470c6ef43969d7(&var_a8);
        var_78 = arg1;
        *var_78[8] = semver::display::_$LT$impl$u20$core..fmt..Display$u20$for$u20$semver..Version$GT$::fmt::haa28aa2a22053214;
        var_a8 = &data_52fc08;
        *var_a8[8] = 2;
        let var_88_1: i64 = 0;
        var_98 = &var_78;
        *var_98[8] = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_a8);
        result = 0;
    }
    core::ptr::drop_in_place$LT$semver..Version$GT$::h33470c6ef43969d7(arg1);
    result
}
