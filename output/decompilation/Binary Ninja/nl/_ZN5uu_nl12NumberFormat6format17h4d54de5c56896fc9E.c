
  int128_t* uu_nl::NumberFormat::format::h4d54de5c56896fc9(int128_t* arg1, char* arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_18 = arg3;
    uint32_t rax = *arg2;
    void* const var_68;
    int64_t* var_38;
    void* const rax_1;
    
    if (!rax)
    {
        if (arg4 > 0xffff)
        {
            var_68 = &data_63a250;
            int64_t var_60_4 = 1;
            int64_t var_58_2 = 8;
            int128_t var_50_2 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_68);
            /* no return */
        }
        
        var_38 = &var_18;
        uint64_t (* var_30_1)(int64_t* arg1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i64$GT$::fmt::h295c63d1dc1e3a33;
        int64_t var_28_1 = 0;
        int16_t var_20_1 = arg4;
        var_68 = &data_44e930;
        int64_t var_60_1 = 1;
        rax_1 = &data_454390;
    }
    else if (rax != 1)
    {
        void* rax_2;
        
        if (arg3 < 0)
        {
            int64_t var_10 = -(arg3);
            
            if (arg4 - 1 > 0xffff)
            {
                var_68 = &data_63a250;
                int64_t var_60_6 = 1;
                int64_t var_58_4 = 8;
                int128_t var_50_4 = {0};
                core::panicking::panic_fmt::h96f341d36638c225(&var_68);
                /* no return */
            }
            
            var_38 = &var_10;
            uint64_t (* var_30_3)(int64_t* arg1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i64$GT$::fmt::h295c63d1dc1e3a33;
            int64_t var_28_3 = 0;
            int16_t var_20_3 = (arg4 - 1);
            rax_2 = &data_63a2a8;
        }
        else
        {
            if (arg4 > 0xffff)
            {
                var_68 = &data_63a250;
                int64_t var_60_5 = 1;
                int64_t var_58_3 = 8;
                int128_t var_50_3 = {0};
                core::panicking::panic_fmt::h96f341d36638c225(&var_68);
                /* no return */
            }
            
            var_38 = &var_18;
            uint64_t (* var_30_2)(int64_t* arg1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i64$GT$::fmt::h295c63d1dc1e3a33;
            int64_t var_28_2 = 0;
            int16_t var_20_2 = arg4;
            rax_2 = &data_44e930;
        }
        
        var_68 = rax_2;
        int64_t var_60_2 = 1;
        rax_1 = &data_4543f0;
    }
    else
    {
        if (arg4 > 0xffff)
        {
            var_68 = &data_63a250;
            int64_t var_60_3 = 1;
            int64_t var_58_1 = 8;
            int128_t var_50_1 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_68);
            /* no return */
        }
        
        var_38 = &var_18;
        uint64_t (* var_30)(int64_t* arg1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i64$GT$::fmt::h295c63d1dc1e3a33;
        int64_t var_28 = 0;
        int16_t var_20 = arg4;
        var_68 = &data_44e930;
        int64_t var_60 = 1;
        rax_1 = &data_4543c0;
    }
    
    int128_t var_50;
    *var_50[8] = rax_1;
    int64_t var_40 = 1;
    int64_t** var_58 = &var_38;
    var_50 = 2;
    core::option::Option$LT$T$GT$::map_or_else::h612ba33885ce226b(arg1, &var_68);
    return arg1;
}
