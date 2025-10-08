
  int128_t* uu_dd::numbers::to_magnitude_and_suffix::hda63ca50ad718acc(int128_t* arg1, uint64_t arg2, uint64_t arg3, char arg4)

{
    void* const var_a8;
    uu_dd::numbers::SuffixType::base_and_suffix::h8dfa57e28a1f1cdd(&var_a8, arg4, arg2, arg3);
    void* const r12 = var_a8;
    int128_t var_98;
    int128_t var_40 = var_98;
    uint64_t var_a0;
    uint128_t zmm1;
    zmm1 = __floatuntidf(arg2, arg3) / __floatuntidf(r12, var_a0);
    uint64_t var_50 = zmm1;
    uint64_t* var_78;
    
    if (0x4024000000000000 <= zmm1)
    {
        uint64_t var_48 = round(zmm1);
        var_78 = &var_48;
        int64_t (* var_70_1)(int64_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
        int128_t* var_68_1 = &var_40;
        int64_t (* var_60_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
        var_a8 = &data_53d8d8;
        int64_t var_a0_2 = 2;
        int64_t var_88_1 = 0;
    }
    else
    {
        var_78 = &var_50;
        int64_t (* var_70)(int64_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
        int128_t* var_68 = &var_40;
        int64_t (* var_60)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
        var_a8 = &data_53d8d8;
        int64_t var_a0_1 = 2;
        void* const var_88 = &data_421120;
        int64_t var_80_1 = 2;
    }
    
    var_98 = &var_78;
    *var_98[8] = 2;
    return core::option::Option$LT$T$GT$::map_or_else::h6db3e72e2d5d868f(arg1, &var_a8);
}
