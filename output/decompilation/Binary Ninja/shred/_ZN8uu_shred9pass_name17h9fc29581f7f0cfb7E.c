
  int128_t* uu_shred::pass_name::h9fc29581f7f0cfb7(int64_t* arg1, char* arg2)

{
    char rcx_1 = *arg2;
    
    if (rcx_1 == 2)
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc7ad242b1d3efe8e(arg1, "random", 6);
    
    void* var_78;
    void** var_70;
    void* const var_30;
    
    if (!(rcx_1 & 1))
    {
        var_78 = &arg2[1];
        var_30 = &var_78;
        int64_t (* var_28_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hfeebc9e684b459fb;
        var_70 = &data_41aa58;
        int64_t var_68_1 = 3;
        void* const var_50_1 = &data_41aa88;
        int64_t var_48_1 = 3;
        void* const* var_60_1 = &var_30;
        int64_t var_58_1 = 1;
        return core::option::Option$LT$T$GT$::map_or_else::h7bfa45f07eaf898e(arg1, &var_70);
    }
    
    void* var_40 = &arg2[1];
    void* var_38 = &arg2[2];
    var_78 = &arg2[3];
    var_70 = &var_40;
    int64_t (* var_68)(int64_t* arg1, int64_t* arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hfeebc9e684b459fb;
    void** var_60 = &var_38;
    int64_t (* var_58)(int64_t* arg1, int64_t* arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hfeebc9e684b459fb;
    void** var_50 = &var_78;
    int64_t (* var_48)(int64_t* arg1, int64_t* arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hfeebc9e684b459fb;
    var_30 = &data_41aa58;
    int64_t var_28 = 3;
    void* const var_10 = &data_41ab18;
    int64_t var_8 = 3;
    void*** var_20 = &var_70;
    int64_t var_18 = 3;
    return core::option::Option$LT$T$GT$::map_or_else::h7bfa45f07eaf898e(arg1, &var_30);
}
