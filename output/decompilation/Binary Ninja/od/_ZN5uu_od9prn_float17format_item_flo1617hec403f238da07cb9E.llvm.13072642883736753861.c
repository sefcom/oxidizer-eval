
  int128_t* uu_od::prn_float::format_item_flo16::hec403f238da07cb9.llvm.13072642883736753861()

{
    int32_t rax_1;
    int64_t zmm0;
    
    if (!std_detect::detect::cache::test::h15354216764ae092())
        rax_1 = half::binary16::arch::f64_to_f16_fallback::he45d933123023c2d(zmm0);
    else
    {
        zmm0 = zmm0;
        rax_1 = half::binary16::arch::x86::f32_to_f16_x86_f16c::h664ec704d55f7139(zmm0);
    }
    void var_28;
    uu_od::prn_float::format_flo16::hd8d34214ac1f2229(&var_28, rax_1);
    void* var_80 = &var_28;
    int64_t (* var_78)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    char const (** const var_58)[0x89] = &data_542038;
    int64_t var_50 = 1;
    int64_t var_38 = 0;
    void** var_48 = &var_80;
    int64_t var_40 = 1;
    int128_t var_70;
    core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf(&var_70, &var_58);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&var_28);
    int64_t var_60;
    int128_t* result;
    result[1] = var_60;
    *result = var_70;
    return result;
}
