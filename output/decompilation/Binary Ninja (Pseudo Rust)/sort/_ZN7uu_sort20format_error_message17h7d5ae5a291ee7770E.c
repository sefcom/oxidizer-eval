
  fn uu_sort::format_error_message::h7d5ae5a291ee7770(arg1: *mut i128, arg2: *mut i64, arg3: i64, arg4: i64, arg5: i64) -> *mut i128

{
    let mut var_18: i64 = arg5;
    let r9: i64;
    let var_10: i64 = r9;
    let rax: i64 = *arg2;
    let mut var_88: *mut i64;
    let mut var_48: *mut *mut c_void;
    let mut var_68: i64;
    let mut var_40: i64;
    
    if rax == 0
    {
        var_68 = 0;
        let var_60_1: i64 = arg3;
        let var_58_1: i64 = arg4;
        let var_50_1: i8 = 1;
        var_88 = &var_18;
        let var_80_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf339a44dd980f411;
        let var_78_1: *mut i64 = &var_68;
        let var_70_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_48 = &data_5ffff0;
        var_40 = 2;
    }
    else if rax != 1
    {
        var_68 = 0;
        let var_60_2: i64 = arg3;
        let var_58_2: i64 = arg4;
        let var_50_2: i8 = 1;
        var_88 = &var_18;
        let var_80_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf339a44dd980f411;
        let var_78_2: *mut i64 = &var_68;
        let var_70_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_48 = &data_600030;
        let var_40_1: i64 = 3;
    }
    else
    {
        var_68 = 0;
        let var_60: i64 = arg3;
        let var_58: i64 = arg4;
        let var_50: i8 = 1;
        var_88 = &var_18;
        let var_80: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf339a44dd980f411;
        let var_78: *mut i64 = &var_68;
        let var_70: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_48 = &data_600010;
        var_40 = 2;
    }
    let var_28: i64 = 0;
    let var_38: *mut *mut i64 = &var_88;
    let var_30: i64 = 2;
    core::option::Option$LT$T$GT$::map_or_else::h391d7c162d69f44b(arg1, &var_48);
    arg1
}
