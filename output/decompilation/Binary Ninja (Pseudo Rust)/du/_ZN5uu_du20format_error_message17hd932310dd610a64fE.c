
  fn uu_du::format_error_message::hd932310dd610a64f(arg1: *mut i128, arg2: *mut i64, arg3: i64, arg4: i64, arg5: i64) -> *mut i128

{
    let mut var_18: i64 = arg5;
    let r9: i64;
    let var_10: i64 = r9;
    let mut var_88: *mut i64;
    let mut var_68: i64;
    let mut rax_3: *mut *mut c_void;
    
    match *arg2
    {
        0 =>
        {
            var_68 = 0;
            let var_60_1: i64 = arg3;
            let var_58_1: i64 = arg4;
            let var_50_1: i8 = 1;
            var_88 = &var_18;
            let var_80_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hff9117abb4c135da;
            let var_78_1: *mut i64 = &var_68;
            let var_70_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            rax_3 = &data_546110;
        }
        1 =>
        {
            var_68 = 0;
            let var_60: i64 = arg3;
            let var_58: i64 = arg4;
            let var_50: i8 = 1;
            var_88 = &var_18;
            let var_80: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hff9117abb4c135da;
            let var_78: *mut i64 = &var_68;
            let var_70: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            rax_3 = &data_546130;
        }
    }
    
    let mut var_48: *mut *mut c_void = rax_3;
    let var_40: i64 = 2;
    let var_28: i64 = 0;
    let var_38: *mut *mut i64 = &var_88;
    let var_30: i64 = 2;
    core::option::Option$LT$T$GT$::map_or_else::hc02c35748679bc13(arg1, &var_48);
    arg1
}
