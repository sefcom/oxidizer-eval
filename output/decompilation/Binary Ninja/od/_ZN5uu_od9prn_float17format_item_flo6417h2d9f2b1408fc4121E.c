
  int128_t* uu_od::prn_float::format_item_flo64::h2d9f2b1408fc4121(int128_t* arg1, int128_t arg2 @ zmm0)

{
    void var_28;
    uu_od::prn_float::format_flo64::h94eabf5ec411dc14(&var_28, arg2);
    void* var_68 = &var_28;
    int64_t (* var_60)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    char const (** const var_58)[0x1e] = &data_503838;
    int64_t var_50 = 1;
    int64_t var_38 = 0;
    void** var_48 = &var_68;
    int64_t var_40 = 1;
    core::option::Option$LT$T$GT$::map_or_else::h56b2ee9aee1b26d0(arg1, &var_58);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0ecbbb68ed17b0f1(&var_28);
    return arg1;
}
