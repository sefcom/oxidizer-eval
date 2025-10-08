
  fn uu_df::table::RowFormatter::percentage::h1b6e4d875b5dc07f(arg1: *mut i128, arg2: i8, arg3: f64) -> *mut i128

{
    if (arg2 & 1) == 0
    {
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(arg1, "-total%", 1);
    }
    
    let mut var_50: i64 = ceil(arg3 * 100.0);
    let mut var_48: *mut i64 = &var_50;
    let var_40: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
    let mut var_38: *mut c_void = &data_502e98;
    let var_30: i64 = 2;
    let var_18: *const i8 = &data_41b0a6[0x72];
    let var_10: i64 = 1;
    let var_28: *mut *mut i64 = &var_48;
    let var_20: i64 = 1;
    core::option::Option$LT$T$GT$::map_or_else::h7e34be96cbbb4028(arg1, &var_38)
}
