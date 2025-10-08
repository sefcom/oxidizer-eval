
  int128_t* uu_od::format_error_message::hfbba610ed066f99b(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    int64_t var_10 = arg5;
    int64_t r9;
    int64_t var_8 = r9;
    int64_t* var_80;
    int64_t var_60;
    void** const var_40;
    int64_t var_38;
    
    switch (jump_table_41c3d8[arg2])
    {
        case 0x51a1c:
        {
            var_60 = 0;
            int64_t var_58 = arg3;
            int64_t var_50 = arg4;
            char var_48 = 1;
            var_80 = &var_10;
            int64_t (* var_78)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
            int64_t* var_70 = &var_60;
            int64_t (* var_68)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_40 = &data_503b08;
            var_38 = 2;
            break;
        }
        case 0x51a69:
        {
            var_60 = 0;
            int64_t var_58_1 = arg3;
            int64_t var_50_1 = arg4;
            char var_48_1 = 1;
            var_80 = &var_10;
            int64_t (* var_78_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
            int64_t* var_70_1 = &var_60;
            int64_t (* var_68_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_40 = &data_503ae8;
            var_38 = 2;
            break;
        }
        case 0x51ac4:
        {
            var_60 = 0;
            int64_t var_58_2 = arg3;
            int64_t var_50_2 = arg4;
            char var_48_2 = 1;
            var_80 = &var_10;
            int64_t (* var_78_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
            int64_t* var_70_2 = &var_60;
            int64_t (* var_68_2)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_40 = &data_503b28;
            int64_t var_38_1 = 3;
            break;
        }
    }
    
    int64_t var_20 = 0;
    int64_t** var_30 = &var_80;
    int64_t var_28 = 2;
    return core::option::Option$LT$T$GT$::map_or_else::h56b2ee9aee1b26d0(arg1, &var_40);
}
