
  fn uu_od::format_error_message::h954b3c00e83b3e7f(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i64, arg5: i64) -> *mut i128

{
    let mut var_10: i64 = arg5;
    let r9: i64;
    let var_8: i64 = r9;
    let mut var_80: *mut i64;
    let mut var_40: *mut *mut c_void;
    let mut var_60: i64;
    let mut var_38: i64;
    
    if arg2 == 0
    {
        var_60 = 0;
        let var_58_1: i64 = arg3;
        let var_50_1: i64 = arg4;
        let var_48_1: i8 = 1;
        var_80 = &var_10;
        let var_78_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
        let var_70_1: *mut i64 = &var_60;
        let var_68_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_40 = &data_541838;
        var_38 = 2;
    }
    else if arg2 != 1
    {
        var_60 = 0;
        let var_58_2: i64 = arg3;
        let var_50_2: i64 = arg4;
        let var_48_2: i8 = 1;
        var_80 = &var_10;
        let var_78_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
        let var_70_2: *mut i64 = &var_60;
        let var_68_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_40 = &data_541878;
        let var_38_1: i64 = 3;
    }
    else
    {
        var_60 = 0;
        let var_58: i64 = arg3;
        let var_50: i64 = arg4;
        let var_48: i8 = 1;
        var_80 = &var_10;
        let var_78: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
        let var_70: *mut i64 = &var_60;
        let var_68: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_40 = &data_541858;
        var_38 = 2;
    }
    let var_20: i64 = 0;
    let var_30: *mut *mut i64 = &var_80;
    let var_28: i64 = 2;
    core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf(arg1, &var_40)
}
