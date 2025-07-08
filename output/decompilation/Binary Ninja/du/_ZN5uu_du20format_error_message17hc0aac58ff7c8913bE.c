
  int128_t* uu_du::format_error_message::hc0aac58ff7c8913b(int128_t* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    int64_t var_18 = arg5;
    int64_t r9;
    int64_t var_10 = r9;
    int64_t rax = *arg2;
    int64_t* var_88;
    char const (** const var_48)[0x6a];
    int64_t var_68;
    int64_t var_40;
    
    if (!rax)
    {
        var_68 = 0;
        int64_t var_60_1 = arg3;
        int64_t var_58_1 = arg4;
        char var_50_1 = 1;
        var_88 = &var_18;
        int64_t (* var_80_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
        int64_t* var_78_1 = &var_68;
        int64_t (* var_70_1)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_48 = &data_584850;
        var_40 = 2;
    }
    else if (rax != 1)
    {
        var_68 = 0;
        int64_t var_60_2 = arg3;
        int64_t var_58_2 = arg4;
        char var_50_2 = 1;
        var_88 = &var_18;
        int64_t (* var_80_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
        int64_t* var_78_2 = &var_68;
        int64_t (* var_70_2)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_48 = &data_584890;
        int64_t var_40_1 = 3;
    }
    else
    {
        var_68 = 0;
        int64_t var_60 = arg3;
        int64_t var_58 = arg4;
        char var_50 = 1;
        var_88 = &var_18;
        int64_t (* var_80)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
        int64_t* var_78 = &var_68;
        int64_t (* var_70)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_48 = &data_584870;
        var_40 = 2;
    }
    int64_t var_28 = 0;
    int64_t** var_38 = &var_88;
    int64_t var_30 = 2;
    core::option::Option$LT$T$GT$::map_or_else::he00bf600f5f44dbc(arg1, &var_48);
    return arg1;
}
