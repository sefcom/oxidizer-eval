
  int128_t* uu_nl::NumberFormat::format::h85daa785ca2f298b(int128_t* arg1, char* arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_50 = arg3;
    uint32_t rax = *arg2;
    int64_t* var_a0;
    int64_t var_48;
    void* const rax_1;
    
    if (!rax)
    {
        var_a0 = &var_50;
        uint64_t (* var_98_1)(int64_t* arg1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i64$GT$::fmt::hd430258ee75e6c69;
        int64_t var_90_1 = arg4;
        int64_t var_88_1 = 0;
        var_48 = 2;
        int64_t var_38_1 = 1;
        int64_t var_30_1 = 1;
        int64_t var_28_1 = 0;
        int64_t var_20_1 = 0x20;
        char var_18 = 0;
        rax_1 = &data_461370;
    }
    else
    {
        char var_18_1;
        
        if (rax == 1)
        {
            var_a0 = &var_50;
            uint64_t (* var_98)(int64_t* arg1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i64$GT$::fmt::hd430258ee75e6c69;
            int64_t var_90 = arg4;
            int64_t var_88 = 0;
            var_48 = 2;
            int64_t var_38 = 1;
            int64_t var_30 = 1;
            int64_t var_28 = 0;
            int64_t var_20 = 0x20;
            var_18_1 = 1;
            rax_1 = &data_461370;
        }
        else if (arg3 < 0)
        {
            int64_t var_10 = -(arg3);
            var_a0 = &var_10;
            uint64_t (* var_98_3)(int64_t* arg1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i64$GT$::fmt::hd430258ee75e6c69;
            int64_t var_90_3 = arg4 - 1;
            int64_t var_88_3 = 0;
            var_48 = 2;
            int64_t var_38_3 = 1;
            int64_t var_30_3 = 1;
            int64_t var_28_3 = 0;
            int64_t var_20_3 = 0x30;
            char var_18_2 = 1;
            rax_1 = &data_6d9a98;
        }
        else
        {
            var_a0 = &var_50;
            uint64_t (* var_98_2)(int64_t* arg1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i64$GT$::fmt::hd430258ee75e6c69;
            int64_t var_90_2 = arg4;
            int64_t var_88_2 = 0;
            var_48 = 2;
            int64_t var_38_2 = 1;
            int64_t var_30_2 = 1;
            int64_t var_28_2 = 0;
            int64_t var_20_2 = 0x30;
            var_18_1 = 1;
            rax_1 = &data_461370;
        }
    }
    
    void* const var_80 = rax_1;
    int64_t var_78 = 1;
    int64_t* var_60 = &var_48;
    int64_t var_58 = 1;
    int64_t** var_70 = &var_a0;
    int64_t var_68 = 2;
    core::option::Option$LT$T$GT$::map_or_else::h0a2f0cb8f97eeebd(arg1, &var_80);
    return arg1;
}
