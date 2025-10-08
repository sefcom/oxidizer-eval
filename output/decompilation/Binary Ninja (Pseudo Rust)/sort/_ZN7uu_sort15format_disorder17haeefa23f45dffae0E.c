
  fn uu_sort::format_disorder::haeefa23f45dffae0(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: i8)

{
    let mut var_90: i64 = arg4;
    let mut var_88: i64 = arg5;
    
    if (arg6 & 1) != 0
    {
        *arg1 = 0;
        arg1[1] = 1;
        arg1[2] = 0;
        return;
    }
    
    let mut var_80: i64 = 1;
    let var_78: i64 = arg2;
    let var_70: i64 = arg3;
    let var_68: i8 = 0;
    let mut var_60: *mut i64 = &var_80;
    let var_58: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
    let var_50: *mut i64 = &var_90;
    let var_48: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb14ea78d6197468c;
    let var_40: *mut i64 = &var_88;
    let var_38: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5333ced964958e04;
    let mut var_30: *mut c_void = &data_58cbd0;
    let var_28: i64 = 3;
    let var_10: i64 = 0;
    let var_20: *mut *mut i64 = &var_60;
    let var_18: i64 = 3;
    core::option::Option$LT$T$GT$::map_or_else::h9f6bdb3fe8306f69(arg1, &var_30);
}
