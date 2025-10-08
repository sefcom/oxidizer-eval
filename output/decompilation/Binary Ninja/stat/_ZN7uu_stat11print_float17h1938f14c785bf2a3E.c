
  int64_t uu_stat::print_float::h1938f14c785bf2a3(void* arg1, int64_t arg2, int64_t arg3, uint64_t arg4, char arg5, int64_t arg6 @ zmm0)

{
    uint64_t rax = *(arg1 + 3);
    char const* const rsi = " +";
    
    if (!(rax & 1))
        rsi = 1;
    
    char const* const r8 = "+";
    char temp0 = *(arg1 + 4);
    
    if (!temp0)
        r8 = rsi;
    
    if (temp0)
        rax = 1;
    
    char const* const var_80 = r8;
    uint64_t var_78 = rax;
    void var_50;
    uu_stat::precision_trunc::hfc70d3e7a70986fc(&var_50, arg3, arg4, arg6);
    char const* const* var_70 = &var_80;
    int64_t (* var_68)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
    void* var_60 = &var_50;
    int64_t (* var_58)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    void* const var_b8 = &data_41cfd0;
    int64_t var_b0 = 2;
    int64_t var_98 = 0;
    char const* const** var_a8 = &var_70;
    int64_t var_a0 = 2;
    int128_t var_38;
    core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(&var_38, &var_b8);
    var_b8 = var_38;
    int64_t var_28;
    int64_t var_a8_1 = var_28;
    uu_stat::pad_and_print::h4c659c1797f3ded6(var_b0, var_28, *(arg1 + 2), arg2, arg5);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_b8);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_50);
}
