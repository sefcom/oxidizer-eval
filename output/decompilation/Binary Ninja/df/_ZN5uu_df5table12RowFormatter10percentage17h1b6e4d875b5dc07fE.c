
  int128_t* uu_df::table::RowFormatter::percentage::h1b6e4d875b5dc07f(int128_t* arg1, char arg2, double arg3)

{
    if (!(arg2 & 1))
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(arg1, "-total%", 1);
    
    int64_t var_50 = ceil(arg3 * 100.0);
    int64_t* var_48 = &var_50;
    int64_t (* var_40)(int64_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
    void* const var_38 = &data_502e98;
    int64_t var_30 = 2;
    char const* const var_18 = &data_41b0a6[0x72];
    int64_t var_10 = 1;
    int64_t** var_28 = &var_48;
    int64_t var_20 = 1;
    return core::option::Option$LT$T$GT$::map_or_else::h7e34be96cbbb4028(arg1, &var_38);
}
