
  fn uu_stat::quote_file_name::ha37da13d8b9cf7fe(arg1: *mut i128, arg2: i64, arg3: u64, arg4: i8) -> *mut i128

{
    let mut var_48: i64 = arg2;
    let var_40: u64 = arg3;
    let mut var_90: i128;
    let mut var_78: *mut *mut c_void;
    
    if arg4 < 2
    {
        let mut var_28: ();
        alloc::str::_$LT$impl$u20$str$GT$::replace::h787bb0d29ba882e8(&var_28, arg2, arg3);
        let mut var_38: *mut c_void = &var_28;
        let var_30: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_78 = &data_519bc8;
        let var_70: i64 = 2;
        let var_58: i64 = 0;
        let var_68: *mut *mut c_void = &var_38;
        let var_60: i64 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(&var_90, &var_78);
        let var_80: i64;
        arg1[1] = var_80;
        *arg1 = var_90;
        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_28);
    }
    
    if arg4 != 2
    {
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(arg1, arg2, arg3);
    }
    
    var_90 = &var_48;
    *var_90[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
    var_78 = &data_519be8;
    let var_70_1: i64 = 2;
    let var_58_1: i64 = 0;
    let var_68_1: *mut i128 = &var_90;
    let var_60_1: i64 = 1;
    core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(arg1, &var_78)
}
