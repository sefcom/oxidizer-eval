
  int128_t* uu_sort::format_error_message::h7d5ae5a291ee7770(int128_t* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    int64_t var_18 = arg5;
    int64_t r9;
    int64_t var_10 = r9;
    int64_t rax = *arg2;
    int64_t* var_88;
    void** const var_48;
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
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf339a44dd980f411;
        int64_t* var_78_1 = &var_68;
        int64_t (* var_70_1)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_48 = &data_5ffff0;
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
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf339a44dd980f411;
        int64_t* var_78_2 = &var_68;
        int64_t (* var_70_2)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_48 = &data_600030;
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
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf339a44dd980f411;
        int64_t* var_78 = &var_68;
        int64_t (* var_70)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_48 = &data_600010;
        var_40 = 2;
    }
    int64_t var_28 = 0;
    int64_t** var_38 = &var_88;
    int64_t var_30 = 2;
    core::option::Option$LT$T$GT$::map_or_else::h391d7c162d69f44b(arg1, &var_48);
    return arg1;
}
