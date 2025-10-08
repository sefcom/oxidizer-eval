
  int64_t uu_split::platform::unix::WithEnvVarSet::new::h427893530f97257f(int128_t* arg1, int64_t arg2)

{
    int128_t var_50;
    std::env::var::hb56eac25d1451add(&var_50, "FILEch");
    std::env::set_var::h54bee5c6406baad8(arg2);
    int128_t var_30;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&var_30, "FILEch", 4);
    int64_t result;
    arg1[3] = result;
    arg1[2] = var_30;
    int128_t zmm0 = var_50;
    int128_t var_40;
    arg1[1] = var_40;
    *arg1 = zmm0;
    return result;
}
