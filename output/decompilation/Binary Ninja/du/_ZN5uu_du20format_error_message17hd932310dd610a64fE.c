
  int128_t* uu_du::format_error_message::hd932310dd610a64f(int128_t* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    int64_t var_18 = arg5;
    int64_t r9;
    int64_t var_10 = r9;
    int64_t* var_88;
    int64_t var_68;
    void** const var_48;
    int64_t var_40;
    
    switch (*arg2)
    {
        case 0:
        {
            var_68 = 0;
            int64_t var_60_1 = arg3;
            int64_t var_58_1 = arg4;
            char var_50_1 = 1;
            var_88 = &var_18;
            int64_t (* var_80_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hff9117abb4c135da;
            int64_t* var_78_1 = &var_68;
            int64_t (* var_70_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_48 = &data_546110;
            var_40 = 2;
            break;
        }
        case 1:
        case 3:
        {
            var_68 = 0;
            int64_t var_60 = arg3;
            int64_t var_58 = arg4;
            char var_50 = 1;
            var_88 = &var_18;
            int64_t (* var_80)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hff9117abb4c135da;
            int64_t* var_78 = &var_68;
            int64_t (* var_70)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_48 = &data_546130;
            var_40 = 2;
            break;
        }
        case 2:
        {
            var_68 = 0;
            int64_t var_60_2 = arg3;
            int64_t var_58_2 = arg4;
            char var_50_2 = 1;
            var_88 = &var_18;
            int64_t (* var_80_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hff9117abb4c135da;
            int64_t* var_78_2 = &var_68;
            int64_t (* var_70_2)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_48 = &data_546150;
            int64_t var_40_1 = 3;
            break;
        }
    }
    
    int64_t var_28 = 0;
    int64_t** var_38 = &var_88;
    int64_t var_30 = 2;
    core::option::Option$LT$T$GT$::map_or_else::hc02c35748679bc13(arg1, &var_48);
    return arg1;
}
