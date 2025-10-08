
  void* uu_stat::pad_and_print::h4c659c1797f3ded6(int64_t arg1, int64_t arg2, int32_t arg3, int64_t arg4, char arg5)

{
    int64_t var_10 = arg1;
    int64_t var_8 = arg2;
    void* const var_60;
    int64_t* var_30;
    void* const rax;
    
    if (!arg3)
    {
        if (!arg5)
        {
            if (arg4 > 0xffff)
            {
                var_60 = &data_519960;
                int64_t var_58_7 = 1;
                int64_t var_50_4 = 8;
                int128_t var_48_4 = {0};
                core::panicking::panic_fmt::h96f341d36638c225(&var_60);
                /* no return */
            }
            
            var_30 = &var_10;
            int64_t (* var_28_3)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
            int64_t var_20_3 = 0;
            int16_t var_18_3 = arg4;
            var_60 = &data_41ab40;
            int64_t var_58_3 = 1;
            rax = &data_41d388;
        }
        else
        {
            if (arg4 > 0xffff)
            {
                var_60 = &data_519960;
                int64_t var_58_5 = 1;
                int64_t var_50_2 = 8;
                int128_t var_48_2 = {0};
                core::panicking::panic_fmt::h96f341d36638c225(&var_60);
                /* no return */
            }
            
            var_30 = &var_10;
            int64_t (* var_28_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
            int64_t var_20_1 = 0;
            int16_t var_18_1 = arg4;
            var_60 = &data_41ab40;
            int64_t var_58_1 = 1;
            rax = &data_41d3b8;
        }
    }
    else if (!arg5)
    {
        if (arg4 > 0xffff)
        {
            var_60 = &data_519960;
            int64_t var_58_6 = 1;
            int64_t var_50_3 = 8;
            int128_t var_48_3 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_60);
            /* no return */
        }
        
        var_30 = &var_10;
        int64_t (* var_28_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
        int64_t var_20_2 = 0;
        int16_t var_18_2 = arg4;
        var_60 = &data_41ab40;
        int64_t var_58_2 = 1;
        rax = &data_41d3e8;
    }
    else
    {
        if (arg4 > 0xffff)
        {
            var_60 = &data_519960;
            int64_t var_58_4 = 1;
            int64_t var_50_1 = 8;
            int128_t var_48_1 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_60);
            /* no return */
        }
        
        var_30 = &var_10;
        int64_t (* var_28)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
        int64_t var_20 = 0;
        int16_t var_18 = arg4;
        var_60 = &data_41ab40;
        int64_t var_58 = 1;
        rax = &data_41d418;
    }
    
    int128_t var_48;
    *var_48[8] = rax;
    int64_t var_38 = 1;
    int64_t** var_50 = &var_30;
    var_48 = 2;
    return std::io::stdio::_print::h5e446ff973c02de6(&var_60);
}
