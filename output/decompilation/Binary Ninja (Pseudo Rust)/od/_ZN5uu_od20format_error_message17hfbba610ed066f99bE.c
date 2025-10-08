
  fn uu_od::format_error_message::hfbba610ed066f99b(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i64, arg5: i64) -> *mut i128

{
    let mut var_10: i64 = arg5;
    let r9: i64;
    let var_8: i64 = r9;
    let mut var_80: *mut i64;
    let mut var_60: i64;
    let mut var_40: *mut *mut c_void;
    let mut var_38: i64;
    
    match jump_table_41c3d8[arg2]
    {
        0x51a1c =>
        {
            var_60 = 0;
            let var_58: i64 = arg3;
            let var_50: i64 = arg4;
            let var_48: i8 = 1;
            var_80 = &var_10;
            let var_78: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
            let var_70: *mut i64 = &var_60;
            let var_68: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_40 = &data_503b08;
            var_38 = 2;
        }
        0x51a69 =>
        {
            var_60 = 0;
            let var_58_1: i64 = arg3;
            let var_50_1: i64 = arg4;
            let var_48_1: i8 = 1;
            var_80 = &var_10;
            let var_78_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
            let var_70_1: *mut i64 = &var_60;
            let var_68_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_40 = &data_503ae8;
            var_38 = 2;
        }
        0x51ac4 =>
        {
            var_60 = 0;
            let var_58_2: i64 = arg3;
            let var_50_2: i64 = arg4;
            let var_48_2: i8 = 1;
            var_80 = &var_10;
            let var_78_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
            let var_70_2: *mut i64 = &var_60;
            let var_68_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_40 = &data_503b28;
            let var_38_1: i64 = 3;
        }
    }
    
    let var_20: i64 = 0;
    let var_30: *mut *mut i64 = &var_80;
    let var_28: i64 = 2;
    core::option::Option$LT$T$GT$::map_or_else::h56b2ee9aee1b26d0(arg1, &var_40)
}
