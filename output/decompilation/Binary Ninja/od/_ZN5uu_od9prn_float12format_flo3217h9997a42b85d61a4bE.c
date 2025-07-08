
  int128_t* uu_od::prn_float::format_flo32::h9997a42b85d61a4b(uint32_t arg1[0x4] @ zmm0)

{
    uint32_t var_8c = arg1[0];
    uint32_t temp0[0x4] = _mm_and_ps(data_40db40, arg1);
    int128_t* rdi;
    
    if (temp0[0] == inff || !temp0[0] || arg1[0] & 0x7f800000)
    {
        arg1[0] = arg1[0];
        /* tailcall */
        return uu_od::prn_float::format_float::h341a0cfde1a47520(rdi, 0xe, 8, arg1);
    }
    
    int32_t* var_88 = &var_8c;
    int64_t (* var_80)(int128_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..LowerExp$u20$for$u20$f32$GT$::fmt::h814b1cab8d475c50;
    int64_t var_78 = 0xe;
    int64_t var_70 = 0;
    int64_t var_38 = 2;
    int64_t var_28 = 1;
    int64_t var_20 = 1;
    int64_t var_18 = 0;
    int64_t var_10 = 0x20;
    char var_8 = 3;
    int128_t* const var_68 = &data_40dad0;
    int64_t var_60 = 1;
    int64_t* var_48 = &var_38;
    int64_t var_40 = 1;
    int32_t** var_58 = &var_88;
    int64_t var_50 = 2;
    return core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf(rdi, &var_68);
}
