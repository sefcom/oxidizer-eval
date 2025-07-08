
  int64_t uu_more::Pager::draw_prompt::hbe0a765e7105d705(void* arg1, int64_t arg2, int64_t arg3, int32_t arg4)

{
    int64_t rax = *(arg1 + 0x30);
    char const (** const var_148)[0x6c];
    int16_t var_118;
    void* var_100;
    int16_t* rax_2;
    
    if (rax != arg3)
    {
        double zmm2[0x2] = data_40e6d0;
        uint128_t zmm1 = _mm_unpacklo_epi32(arg3, zmm2[0]);
        double zmm3[0x2] = data_40e660;
        zmm1 = _mm_sub_pd(zmm1, zmm3);
        uint128_t zmm0;
        zmm0 = _mm_unpackhi_pd(zmm1, zmm1) + zmm1;
        zmm1 = _mm_sub_pd(_mm_unpacklo_epi32(rax, zmm2[0]), zmm3);
        double temp0_6[0x2] = _mm_unpackhi_pd(zmm1, zmm1);
        temp0_6[0] = temp0_6[0] + zmm1;
        zmm0 = zmm0 / temp0_6[0];
        zmm0 = zmm0 * 100.0;
        int64_t zmm0_1;
        uint64_t zmm1_1[0x2];
        zmm0_1 = round(zmm0);
        var_118 =
            _mm_min_sd(0x40efffe000000000, _mm_max_sd(_mm_xor_pd(zmm1_1, zmm1_1)[0], zmm0_1)[0]);
        var_100 = &var_118;
        uint64_t (* var_f8_1)(int16_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hc16e9a303f8fca40;
        var_148 = &data_562a98;
        int64_t var_140_1 = 2;
        int64_t var_128_1 = 0;
        rax_2 = &var_100;
    }
    else
    {
        void* rax_1 = *(arg1 + 0x20);
        void* rcx = 1;
        
        if (rax_1)
        {
            rcx = rax_1;
            rax_1 = *(arg1 + 0x28);
        }
        
        var_100 = rcx;
        void* var_f8 = rax_1;
        var_118 = &var_100;
        int64_t (* var_110_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h482629c9d5db64e0;
        var_148 = &data_562a88;
        int64_t var_140 = 1;
        int64_t var_128 = 0;
        rax_2 = &var_118;
    }
    
    int16_t* var_138 = rax_2;
    int64_t var_130 = 1;
    void var_a8;
    core::option::Option$LT$T$GT$::map_or_else::h94c131af24f37af4(&var_a8, &var_148);
    var_100 = &var_a8;
    int64_t (* var_f8_2)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    var_148 = &data_562ab8;
    int64_t var_140_2 = 2;
    int64_t var_128_2 = 0;
    void** var_138_1 = &var_100;
    int64_t var_130_1 = 1;
    int128_t var_90;
    core::option::Option$LT$T$GT$::map_or_else::h94c131af24f37af4(&var_90, &var_148);
    int128_t var_c8 = var_90;
    int64_t var_80;
    int64_t var_b8 = var_80;
    int64_t rax_5;
    int32_t rbp;
    
    if (*(arg1 + 0x42))
    {
        if (arg4 != 0x110000)
        {
            int32_t var_cc = arg4;
            var_100 = &var_c8;
            int64_t (* var_f8_4)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            int32_t* var_f0_1 = &var_cc;
            uint64_t (* var_e8_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
            var_148 = &data_562ad8;
            int64_t var_140_4 = 3;
            int64_t var_128_4 = 0;
            void** var_138_3 = &var_100;
            int64_t var_130_3 = 2;
            rbp = 1;
            int128_t var_78;
            core::option::Option$LT$T$GT$::map_or_else::h94c131af24f37af4(&var_78, &var_148);
            var_118 = var_78;
            int64_t var_68;
            rax_5 = var_68;
        }
        else
        {
            var_100 = &var_c8;
            int64_t (* var_f8_3)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_148 = &data_562b08;
            int64_t var_140_3 = 2;
            int64_t var_128_3 = 0;
            void** var_138_2 = &var_100;
            int64_t var_130_2 = 1;
            rbp = 1;
            int128_t var_60;
            core::option::Option$LT$T$GT$::map_or_else::h94c131af24f37af4(&var_60, &var_148);
            var_118 = var_60;
            int64_t var_50;
            rax_5 = var_50;
        }
        
        goto label_4dda96;
    }
    
    void* const r15;
    
    if (arg4 != 0x110000)
    {
        var_100 = &var_c8;
        int64_t (* var_f8_5)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        void** const var_f0_2 = &data_562b58;
        int64_t (* var_e8_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h482629c9d5db64e0;
        var_148 = &data_413510;
        int64_t var_140_5 = 2;
        int64_t var_128_5 = 0;
        void** var_138_4 = &var_100;
        int64_t var_130_4 = 2;
        rbp = 1;
        int128_t var_48;
        core::option::Option$LT$T$GT$::map_or_else::h94c131af24f37af4(&var_48, &var_148);
        var_118 = var_48;
        int64_t var_38;
        rax_5 = var_38;
        label_4dda96:
        int64_t var_108_1 = rax_5;
        rbp = 1;
        r15 = nullptr;
    }
    else
    {
        int64_t var_108 = var_80;
        var_118 = var_90;
        r15 = 1;
    }
    
    var_148 = &data_418aac;
    int64_t (* var_140_6)(char* arg1, void* arg2) = _$LT$crossterm..style..types..attribute..Attribute$u20$as$u20$core..fmt..Display$GT$::fmt::h8e43bbdd8f4ff5a1;
    int16_t* var_138_5 = &var_118;
    int64_t (* var_130_5)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    char const* const var_128_6 = &data_418ae9[0x4f];
    int64_t (* var_120)(char* arg1, void* arg2) = _$LT$crossterm..style..types..attribute..Attribute$u20$as$u20$core..fmt..Display$GT$::fmt::h8e43bbdd8f4ff5a1;
    var_100 = &data_562b28;
    int64_t var_f8_6 = 3;
    int64_t var_e0 = 0;
    char const (** const* var_f0_3)[0x6c] = &var_148;
    int64_t var_e8_3 = 3;
    core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(
        _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h0f6acf0ef7a6b873(
        arg2, &var_100));
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&var_118);
    
    if (!r15)
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&var_c8);
    
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&var_a8);
}
