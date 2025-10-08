
  fn just::function::quote::h677664b4bc5d7346(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64) -> *mut i64

{
    let mut var_28: ();
    let rdx_1: u64 =
        alloc::str::_$LT$impl$u20$str$GT$::replace::h92467f512a8e89bb(&var_28, arg3, arg4);
    let mut var_80: *mut c_void = &var_28;
    let var_78: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let mut var_58: *mut *mut [i8; 0xa5] = &data_82ffc0;
    let var_50: i64 = 2;
    let var_38: i64 = 0;
    let var_48: *mut *mut c_void = &var_80;
    let var_40: i64 = 1;
    let mut var_70: i128;
    core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_70, 0, rdx_1, &var_58);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_28);
    let var_60: i64;
    arg1[3] = var_60;
    *arg1.byte_offset(8) = var_70;
    *arg1 = 0;
    arg1
}
