
  int64_t uu_more::Pager::draw_prompt::hc5b983e1ff1da72e(void* arg1, int64_t arg2, int64_t arg3, int32_t arg4)

{
    int64_t rax = *(arg1 + 0x70);
    void** const var_108;
    int16_t var_d8;
    char const (** const var_c0)[0x86];
    int16_t* rax_2;
    
    if (arg3 != rax)
    {
        uint128_t zmm2 = 0x4530000043300000;
        uint128_t zmm1 = _mm_unpacklo_epi32(arg3, zmm2);
        double zmm3[0x2] = data_41ddb0[0x90][0];
        zmm1 = _mm_sub_pd(zmm1, zmm3);
        uint128_t zmm0;
        zmm0 = _mm_unpackhi_pd(zmm1, zmm1) + zmm1;
        zmm1 = _mm_sub_pd(_mm_unpacklo_epi32(rax, zmm2), zmm3);
        zmm2 = _mm_unpackhi_pd(zmm1, zmm1) + zmm1;
        zmm0 = zmm0 / zmm2;
        zmm0 = zmm0 * 100.0;
        int64_t zmm0_1;
        uint64_t zmm1_1[0x2];
        zmm0_1 = round(zmm0);
        var_d8 =
            _mm_min_sd(0x40efffe000000000, _mm_max_sd(_mm_xor_pd(zmm1_1, zmm1_1)[0], zmm0_1)[0]);
        var_c0 = &var_d8;
        uint64_t (* var_b8_1)(int16_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::h76cd049dd60d778d;
        var_108 = &data_525370;
        int64_t var_100_1 = 2;
        int64_t var_e8_1 = 0;
        rax_2 = &var_c0;
    }
    else
    {
        char const (** rax_1)[0x86] = *(arg1 + 0x60);
        char const (** rcx)[0x86] = 1;
        
        if (rax_1)
        {
            rcx = rax_1;
            rax_1 = *(arg1 + 0x68);
        }
        
        var_c0 = rcx;
        char const (** var_b8)[0x86] = rax_1;
        var_d8 = &var_c0;
        int64_t (* var_d0_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hadf97448b344c082;
        var_108 = &data_525360;
        int64_t var_100 = 1;
        int64_t var_e8 = 0;
        rax_2 = &var_d8;
    }
    
    int16_t* var_f8 = rax_2;
    int64_t var_f0 = 1;
    void var_48;
    core::option::Option$LT$T$GT$::map_or_else::hc1ec3d5ca74f474d(&var_48, &var_108);
    var_d8 = &var_48;
    int64_t (* var_d0_2)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_108 = &data_525390;
    int64_t var_100_2 = 2;
    int64_t var_e8_2 = 0;
    int16_t* var_f8_1 = &var_d8;
    int64_t var_f0_1 = 1;
    core::option::Option$LT$T$GT$::map_or_else::hc1ec3d5ca74f474d(&var_c0, &var_108);
    int128_t var_68 = var_c0;
    int128_t var_88;
    int32_t rbp;
    int64_t var_b0;
    int64_t var_78_1;
    
    if (*(arg1 + 0x80))
    {
        if (arg4 != 0x110000)
        {
            int32_t var_8c = arg4;
            var_c0 = &var_68;
            int64_t (* var_b8_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            int32_t* var_b0_1 = &var_8c;
            int64_t (* var_a8_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
            var_108 = &data_5253b0;
            int64_t var_100_4 = 3;
            int64_t var_e8_4 = 0;
            char const (** const* var_f8_3)[0x86] = &var_c0;
            int64_t var_f0_3 = 2;
            core::option::Option$LT$T$GT$::map_or_else::hc1ec3d5ca74f474d(&var_d8, &var_108);
            goto label_47b6b7;
        }
        
        var_d8 = &var_68;
        int64_t (* var_d0_3)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_108 = &data_5253e0;
        int64_t var_100_3 = 2;
        int64_t var_e8_3 = 0;
        int16_t* var_f8_2 = &var_d8;
        int64_t var_f0_2 = 1;
        core::option::Option$LT$T$GT$::map_or_else::hc1ec3d5ca74f474d(&var_c0, &var_108);
        var_88 = var_c0;
        var_78_1 = var_b0;
        rbp = 1;
    }
    else if (arg4 != 0x110000)
    {
        var_c0 = &var_68;
        int64_t (* var_b8_3)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        char const (** const var_b0_2)[0x0] = &data_525430;
        int64_t (* var_a8_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hadf97448b344c082;
        var_108 = &data_41f780;
        int64_t var_100_5 = 2;
        int64_t var_e8_5 = 0;
        char const (** const* var_f8_4)[0x86] = &var_c0;
        int64_t var_f0_4 = 2;
        core::option::Option$LT$T$GT$::map_or_else::hc1ec3d5ca74f474d(&var_d8, &var_108);
        label_47b6b7:
        var_88 = var_d8;
        int64_t var_c8;
        var_78_1 = var_c8;
        rbp = 1;
    }
    else
    {
        int64_t var_78 = var_b0;
        var_88 = var_68;
        rbp = 0;
    }
    var_108 = &data_41f8c1;
    int64_t (* var_100_6)(char* arg1, int64_t* arg2) = _$LT$crossterm..style..types..attribute..Attribute$u20$as$u20$core..fmt..Display$GT$::fmt::h487a2075555157a2;
    int128_t* var_f8_5 = &var_88;
    int64_t (* var_f0_5)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    void* const var_e8_6 = &data_41f8c2;
    int64_t (* var_e0)(char* arg1, int64_t* arg2) = _$LT$crossterm..style..types..attribute..Attribute$u20$as$u20$core..fmt..Display$GT$::fmt::h487a2075555157a2;
    var_c0 = &data_525400;
    int64_t var_b8_4 = 3;
    int64_t var_a0 = 0;
    void** const* var_b0_3 = &var_108;
    int64_t var_a8_3 = 3;
    core::result::Result$LT$T$C$E$GT$::unwrap::h3a901ae51f259b59(
        _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h3907d576e608aa2a(
        arg2, &var_c0));
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::habcac018958bfd8a(&var_88);
    
    if (rbp)
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::habcac018958bfd8a(&var_68);
    
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::habcac018958bfd8a(&var_48);
}
