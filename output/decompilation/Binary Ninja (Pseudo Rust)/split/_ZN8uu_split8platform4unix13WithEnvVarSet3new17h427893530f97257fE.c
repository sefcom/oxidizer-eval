
  fn uu_split::platform::unix::WithEnvVarSet::new::h427893530f97257f(arg1: *mut i128, arg2: i64) -> i64

{
    let mut var_50: i128;
    std::env::var::hb56eac25d1451add(&var_50, "FILEch");
    std::env::set_var::h54bee5c6406baad8(arg2);
    let mut var_30: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&var_30, "FILEch", 4);
    let result: i64;
    arg1[3] = result;
    arg1[2] = var_30;
    let zmm0: i128 = var_50;
    let var_40: i128;
    arg1[1] = var_40;
    *arg1 = zmm0;
    result
}
