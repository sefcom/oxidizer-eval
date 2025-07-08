
  int128_t* uu_df::table::RowFormatter::percentage::hd76ce7d818616919(int128_t* arg1, int64_t arg2, double arg3)

{
    if (!arg2)
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
            arg1, "-total%", 1);
    
    uint64_t zmm0[0x2] = ceil(arg3 * 100.0);
    int64_t var_90 = zmm0;
    int64_t* var_88 = &var_90;
    int64_t (* var_80)(int64_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
    uint64_t var_48[0x2] = _mm_xor_pd(zmm0, zmm0);
    int64_t var_38 = 2;
    int64_t var_28 = 0;
    int64_t var_20 = 0x20;
    char var_18 = 3;
    void* const var_78 = &data_541b30;
    int64_t var_70 = 2;
    uint64_t (* var_58)[0x2] = &var_48;
    int64_t var_50 = 1;
    int64_t** var_68 = &var_88;
    int64_t var_60 = 1;
    return core::option::Option$LT$T$GT$::map_or_else::h87f8290896e212c8(arg1, &var_78);
}
