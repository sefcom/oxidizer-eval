
  int128_t* uu_od::format_error_message::h954b3c00e83b3e7f(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    int64_t var_10 = arg5;
    int64_t r9;
    int64_t var_8 = r9;
    int64_t* var_80;
    void** const var_40;
    int64_t var_60;
    int64_t var_38;
    
    if (!arg2)
    {
        var_60 = 0;
        int64_t var_58_1 = arg3;
        int64_t var_50_1 = arg4;
        char var_48_1 = 1;
        var_80 = &var_10;
        int64_t (* var_78_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
        int64_t* var_70_1 = &var_60;
        int64_t (* var_68_1)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_40 = &data_541838;
        var_38 = 2;
    }
    else if (arg2 != 1)
    {
        var_60 = 0;
        int64_t var_58_2 = arg3;
        int64_t var_50_2 = arg4;
        char var_48_2 = 1;
        var_80 = &var_10;
        int64_t (* var_78_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
        int64_t* var_70_2 = &var_60;
        int64_t (* var_68_2)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_40 = &data_541878;
        int64_t var_38_1 = 3;
    }
    else
    {
        var_60 = 0;
        int64_t var_58 = arg3;
        int64_t var_50 = arg4;
        char var_48 = 1;
        var_80 = &var_10;
        int64_t (* var_78)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
        int64_t* var_70 = &var_60;
        int64_t (* var_68)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_40 = &data_541858;
        var_38 = 2;
    }
    int64_t var_20 = 0;
    int64_t** var_30 = &var_80;
    int64_t var_28 = 2;
    return core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf(arg1, &var_40);
}
