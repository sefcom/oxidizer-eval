
  fn uu_df::table::RowFormatter::percentage::hd76ce7d818616919(arg1: *mut i128, arg2: i64, arg3: f64) -> *mut i128

{
    if arg2 == 0
    {
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
            arg1, "-total%", 1);
    }
    
    let zmm0: [u64; 0x2] = ceil(arg3 * 100.0);
    let mut var_90: i64 = zmm0;
    let mut var_88: *mut i64 = &var_90;
    let var_80: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
    let mut var_48: [u64; 0x2] = _mm_xor_pd(zmm0, zmm0);
    let var_38: i64 = 2;
    let var_28: i64 = 0;
    let var_20: i64 = 0x20;
    let var_18: i8 = 3;
    let mut var_78: *mut c_void = &data_541b30;
    let var_70: i64 = 2;
    let var_58: *mut [u64; 0x2] = &var_48;
    let var_50: i64 = 1;
    let var_68: *mut *mut i64 = &var_88;
    let var_60: i64 = 1;
    core::option::Option$LT$T$GT$::map_or_else::h87f8290896e212c8(arg1, &var_78)
}
