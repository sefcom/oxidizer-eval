
  int64_t rg::flags::doc::version::runtime_cpu_features::hcc737a43f582dc3e(int128_t* arg1)

{
    int64_t var_c0 = 0;
    int64_t var_b8 = 8;
    int64_t result = 0;
    char const* const var_d0 = "+internal error: entered unreach…";
    int64_t var_c8 = 1;
    char const* const* var_e0 = &var_d0;
    int64_t (* var_d8)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
    void* const var_a8 = &data_7eac00;
    int64_t var_a0 = 2;
    int64_t var_88 = 0;
    char const* const** var_98 = &var_e0;
    int64_t var_90 = 1;
    void var_78;
    uint64_t rdx;
    core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_78, 0, rdx, &var_a8);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h128a0db80672107e(&var_c0, &var_78);
    uint8_t rax;
    uint64_t rdx_2;
    rax = std_detect::detect::cache::test::h42d452cfc9d2956f(9);
    char const* const rbp = "-\n_rg() {\n  local i cur prev o…";
    char const* const rax_1 = "-\n_rg() {\n  local i cur prev o…";
    
    if (rax)
        rax_1 = "+internal error: entered unreach…";
    
    var_d0 = rax_1;
    int64_t var_c8_1 = 1;
    var_e0 = &var_d0;
    int64_t (* var_d8_1)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
    var_a8 = &data_7eac20;
    int64_t var_a0_1 = 2;
    int64_t var_88_1 = 0;
    char const* const** var_98_1 = &var_e0;
    int64_t var_90_1 = 1;
    void var_60;
    core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_60, 0, rdx_2, &var_a8);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h128a0db80672107e(&var_c0, &var_60);
    uint8_t rax_2;
    uint64_t rdx_4;
    rax_2 = std_detect::detect::cache::test::h42d452cfc9d2956f(0xf);
    
    if (rax_2)
        rbp = "+internal error: entered unreach…";
    
    var_d0 = rbp;
    int64_t var_c8_2 = 1;
    var_e0 = &var_d0;
    int64_t (* var_d8_2)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
    var_a8 = &data_7eac40;
    int64_t var_a0_2 = 2;
    int64_t var_88_2 = 0;
    char const* const** var_98_2 = &var_e0;
    int64_t var_90_2 = 1;
    void var_48;
    core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_48, 0, rdx_4, &var_a8);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h128a0db80672107e(&var_c0, &var_48);
    arg1[1] = result;
    *arg1 = var_c0;
    return result;
}
