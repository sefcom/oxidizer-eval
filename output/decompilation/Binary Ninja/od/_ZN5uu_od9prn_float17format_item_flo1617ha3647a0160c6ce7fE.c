
  int128_t* uu_od::prn_float::format_item_flo16::ha3647a0160c6ce7f(int128_t* arg1, int64_t arg2 @ zmm0)

{
    char rax;
    int32_t zmm1[0x4];
    rax = std_detect::detect::cache::test::h42d452cfc9d2956f();
    int32_t rax_1;
    
    if (!rax)
        rax_1 = half::binary16::arch::f64_to_f16_fallback::h60cd6c4867711914(arg2);
    else
    {
        uint128_t zmm0;
        zmm0 = arg2;
        rax_1 = half::binary16::arch::x86::f32_to_f16_x86_f16c::h1e8e9fb359715c05(zmm0, zmm1);
    }
    
    void var_28;
    uu_od::prn_float::format_flo16::habda6552607ff1e9(&var_28, rax_1);
    void* var_68 = &var_28;
    int64_t (* var_60)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    char const (** const var_58)[0x1e] = &data_503838;
    int64_t var_50 = 1;
    int64_t var_38 = 0;
    void** var_48 = &var_68;
    int64_t var_40 = 1;
    core::option::Option$LT$T$GT$::map_or_else::h56b2ee9aee1b26d0(arg1, &var_58);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0ecbbb68ed17b0f1(&var_28);
    return arg1;
}
