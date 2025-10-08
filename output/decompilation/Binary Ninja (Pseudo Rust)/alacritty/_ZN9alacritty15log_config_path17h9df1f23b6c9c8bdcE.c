
  fn alacritty::log_config_path::h9df1f23b6c9c8bdc(arg1: i64, arg2: i64)

{
    if arg2 != 0
    {
        let mut var_70: ();
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&var_70, "Configuration files loaded from:…", 0x20);
        let mut i: i64 = 0;
        let mut var_b0: *mut i128;
        let mut var_a0: *mut *mut c_void;
        let mut var_58: i128;
        
        do
        {
            var_58 = *(arg1 + i + 8);
            var_b0 = &var_58;
            let var_a8_1: fn(arg1: *mut i128, arg2: *mut i64) -> i64 =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Debug$GT$::fmt::h805f8819fa6944ce;
            var_a0 = &data_c84568;
            let var_98_1: i64 = 1;
            let var_80_1: i64 = 0;
            let var_90_1: *mut *mut i128 = &var_b0;
            let var_88_1: i64 = 1;
            _$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hab45fb697e21b286(&var_70, &var_a0);
            i += 0x18;
        } while arg2 * 0x18 != i;
        
        if core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3
        {
            var_b0 = &var_70;
            let var_a8_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_a0 = &data_4e8b60;
            let var_98_2: i64 = 1;
            let var_80_2: i64 = 0;
            let var_90_2: *mut *mut i128 = &var_b0;
            let var_88_2: i64 = 1;
            let rax_2: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c84578);
            var_58 = "alacritty/etc/alacritty.config/a…";
            *var_58[8] = 9;
            let var_48_1: *const i8 = "alacritty/etc/alacritty.config/a…";
            let var_40_1: i64 = 9;
            let var_38_1: i64 = rax_2;
            log::__private_api::log::h0b6680b994d742b1(&var_a0, 3, &var_58);
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_70);
    }
}
