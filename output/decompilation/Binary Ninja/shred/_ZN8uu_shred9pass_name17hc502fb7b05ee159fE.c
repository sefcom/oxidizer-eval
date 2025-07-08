
  int128_t* uu_shred::pass_name::hc502fb7b05ee159f(int64_t* arg1, char* arg2)

{
    uint32_t rax = *arg2;
    void* const var_e0;
    void* var_f8;
    void* var_f0;
    void** var_a8;
    
    if (!rax)
    {
        var_f8 = &arg2[1];
        var_f0 = &var_f8;
        int64_t (* var_e8_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hdd5c48a143c8004b;
        var_a8 = 2;
        int64_t var_98 = 2;
        int64_t var_88 = 0;
        int64_t var_80 = 0x20;
        char var_78_1 = 3;
        int64_t var_70_1 = 2;
        int64_t var_60_1 = 2;
        int64_t var_50_1 = 0;
        int64_t var_48_1 = 0x20;
        char var_40_1 = 3;
        int64_t var_38_1 = 2;
        int64_t var_28_1 = 2;
        int64_t var_18_1 = 0;
        int64_t var_10_1 = 0x20;
        char var_8_1 = 3;
        var_e0 = &data_41f050;
        int64_t var_d8 = 3;
        void*** var_c0 = &var_a8;
        int64_t var_b8_1 = 3;
        void** var_d0 = &var_f0;
        int64_t var_c8 = 1;
    }
    else
    {
        if (rax == 2)
            /* tailcall */
            return _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1a8f6b081ce0a887(
                arg1);
        
        void* var_b0 = &arg2[1];
        var_f8 = &arg2[2];
        var_f0 = &arg2[3];
        var_a8 = &var_b0;
        int64_t (* var_a0_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hdd5c48a143c8004b;
        void** var_98_1 = &var_f8;
        int64_t (* var_90_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hdd5c48a143c8004b;
        void** var_88_1 = &var_f0;
        int64_t (* var_80_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hdd5c48a143c8004b;
        var_e0 = &data_41f050;
        int64_t var_d8_1 = 3;
        int64_t var_c0_1 = 0;
        void*** var_d0_1 = &var_a8;
        int64_t var_c8_1 = 3;
    }
    return core::option::Option$LT$T$GT$::map_or_else::h2a91f0892e8dc529(arg1, &var_e0);
}
