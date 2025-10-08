
  int128_t* uu_od::prn_float::format_flo32::hb158b5d92d44987e(int128_t arg1 @ zmm0)

{
    int32_t var_54 = arg1;
    int32_t rax = arg1;
    int32_t rcx_1;
    rcx_1 = (rax & 0x7fffffff) == 0x7f800000;
    int128_t* rdi;
    
    if (!(rax & 0x7fffff) || rcx_1 || rax & 0x7f800000)
    {
        arg1 = arg1;
        /* tailcall */
        return uu_od::prn_float::format_float::hb20d3bf5c81306f8(rdi, 0xe, 8, arg1);
    }
    
    int32_t* var_50 = &var_54;
    int64_t (* var_48)(int32_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..LowerExp$u20$for$u20$f32$GT$::fmt::h33a5b7ff1cb3b6ab;
    int64_t var_40 = 0;
    int16_t var_38 = 0xe;
    void* const var_30 = &data_41a940;
    int64_t var_28 = 1;
    void* const var_10 = &data_41d228;
    int64_t var_8 = 1;
    int32_t** var_20 = &var_50;
    int64_t var_18 = 2;
    return core::option::Option$LT$T$GT$::map_or_else::h56b2ee9aee1b26d0(rdi, &var_30);
}
