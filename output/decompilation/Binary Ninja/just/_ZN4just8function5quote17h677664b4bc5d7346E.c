
  int64_t* just::function::quote::h677664b4bc5d7346(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    void var_28;
    uint64_t rdx_1 =
        alloc::str::_$LT$impl$u20$str$GT$::replace::h92467f512a8e89bb(&var_28, arg3, arg4);
    void* var_80 = &var_28;
    int64_t (* var_78)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    char const (** const var_58)[0xa5] = &data_82ffc0;
    int64_t var_50 = 2;
    int64_t var_38 = 0;
    void** var_48 = &var_80;
    int64_t var_40 = 1;
    int128_t var_70;
    core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_70, 0, rdx_1, &var_58);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_28);
    int64_t var_60;
    arg1[3] = var_60;
    *(arg1 + 8) = var_70;
    *arg1 = 0;
    return arg1;
}
