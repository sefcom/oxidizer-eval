
  uint64_t fuel_core_version::verify_version_from_file::h505193d9cfd87079(int64_t* arg1)

{
    int128_t var_98 = data_417400;
    int128_t var_a8 = *data_4173f0;
    int64_t var_88 = 0;
    uint64_t result;
    int128_t var_78;
    
    if (!_$LT$semver..Version$u20$as$u20$core..cmp..PartialEq$GT$::eq::hd1b3480e92056b54(arg1, 
        &var_a8))
    {
        core::ptr::drop_in_place$LT$semver..Version$GT$::h33470c6ef43969d7(&var_a8);
        int128_t var_68_1 = data_417400;
        var_78 = *data_4173f0;
        int64_t var_58_1 = 0;
        int128_t* var_48 = &var_78;
        uint64_t (* var_40_1)(int64_t arg1, int64_t* arg2) = semver::display::_$LT$impl$u20$core..fmt..Display$u20$for$u20$semver..Version$GT$::fmt::haa28aa2a22053214;
        int64_t* var_38_1 = arg1;
        uint64_t (* var_30_1)(int64_t arg1, int64_t* arg2) = semver::display::_$LT$impl$u20$core..fmt..Display$u20$for$u20$semver..Version$GT$::fmt::haa28aa2a22053214;
        var_a8 = &data_52fbd8;
        *var_a8[8] = 3;
        int64_t var_88_2 = 0;
        var_98 = &var_48;
        *var_98[8] = 2;
        void var_28;
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
        int64_t var_88_1 = 0;
        var_98 = &var_78;
        *var_98[8] = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_a8);
        result = 0;
    }
    core::ptr::drop_in_place$LT$semver..Version$GT$::h33470c6ef43969d7(arg1);
    return result;
}
