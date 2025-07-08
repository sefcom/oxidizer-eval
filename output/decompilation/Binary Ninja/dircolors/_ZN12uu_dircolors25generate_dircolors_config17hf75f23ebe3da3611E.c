
  int128_t* uu_dircolors::generate_dircolors_config::hf75f23ebe3da3611(int128_t* arg1)

{
    int64_t var_f0 = 0;
    int64_t var_e8 = 1;
    int64_t var_e0 = 0;
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&var_f0, 
        "# Configuration file for dircolo…", 0x1e4);
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&var_f0, 
        "COLORTERM ?*\n# Below are the co…", 0xd);
    char const (** const var_108)[0xad] =
        &anon.84df56382e2e566cd8a063a5d0153d3b.47.llvm.4004663911042702431;
    void** const var_100 = &anon.84df56382e2e566cd8a063a5d0153d3b.97.llvm.4004663911042702431;
    int64_t i_3;
    char const (** const var_d8)[0xf2];
    int64_t* var_a0;
    
    for (int64_t i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc9446a1cf5340f63(&var_108); i; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc9446a1cf5340f63(&var_108))
    {
        i_3 = i;
        var_a0 = &i_3;
        int64_t (* var_98_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h58765c92fea73f10;
        var_d8 = &data_527238;
        int64_t var_d0_1 = 2;
        int64_t var_b8_1 = 0;
        int64_t** var_c8_1 = &var_a0;
        int64_t var_c0_1 = 1;
        int128_t var_78;
        core::option::Option$LT$T$GT$::map_or_else::h443112b6ce900918(&var_78, &var_d8);
        var_d8 = var_78;
        int64_t var_68;
        int64_t var_c8_2 = var_68;
        int64_t rax;
        uint64_t rdx_1;
        rax = core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9(var_d0_1, 
            var_68 + var_d0_1);
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&var_f0, rax, rdx_1);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h201e2b6c2cdf2ea1(&var_d8);
    }
    
    int64_t rax_1;
    uint64_t rdx_2;
    rax_1 = core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9(
        "# Below are the color init strin…", "TERM # List any file extensions …");
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&var_f0, rax_1, rdx_2);
    var_108 = &anon.84df56382e2e566cd8a063a5d0153d3b.97.llvm.4004663911042702431;
    char const (** const var_100_1)[0x18] =
        &anon.84df56382e2e566cd8a063a5d0153d3b.231.llvm.4004663911042702431;
    int64_t i_4;
    
    for (int64_t i_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h65b3907fb5e0e3d7(&var_108); i_1; i_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h65b3907fb5e0e3d7(&var_108))
    {
        i_4 = i_1;
        i_3 = i_1 + 0x20;
        var_a0 = &i_4;
        int64_t (* var_98_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h58765c92fea73f10;
        int64_t* var_90_1 = &i_3;
        int64_t (* var_88_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h58765c92fea73f10;
        var_d8 = &data_527258;
        int64_t var_d0_2 = 3;
        int64_t var_b8_2 = 0;
        int64_t** var_c8_3 = &var_a0;
        int64_t var_c0_2 = 2;
        int128_t var_60;
        core::option::Option$LT$T$GT$::map_or_else::h443112b6ce900918(&var_60, &var_d8);
        var_d8 = var_60;
        int64_t var_50;
        int64_t var_c8_4 = var_50;
        int64_t rax_3;
        uint64_t rdx_3;
        rax_3 = core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9(var_d0_2, 
            var_50 + var_d0_2);
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&var_f0, rax_3, rdx_3);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h201e2b6c2cdf2ea1(&var_d8);
    }
    
    int64_t rax_4;
    uint64_t rdx_4;
    rax_4 = core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9(
        "# List any file extensions like …", " # to color below. Put the exten…");
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&var_f0, rax_4, rdx_4);
    int64_t rax_5;
    uint64_t rdx_5;
    rax_5 = core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9(
        "# to color below. Put the extens…", "# Subsequent TERM or COLORTERM e…");
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&var_f0, rax_5, rdx_5);
    var_108 = &anon.84df56382e2e566cd8a063a5d0153d3b.231.llvm.4004663911042702431;
    char const (** const var_100_2)[0xa7] = &data_5291b8;
    
    for (int64_t i_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h61adeb40505b726f(&var_108); i_2; i_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h61adeb40505b726f(&var_108))
    {
        i_4 = i_2;
        i_3 = i_2 + 0x10;
        var_a0 = &i_4;
        int64_t (* var_98_3)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h58765c92fea73f10;
        int64_t* var_90_2 = &i_3;
        int64_t (* var_88_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h58765c92fea73f10;
        var_d8 = &data_527258;
        int64_t var_d0_3 = 3;
        int64_t var_b8_3 = 0;
        int64_t** var_c8_5 = &var_a0;
        int64_t var_c0_3 = 2;
        int128_t var_48;
        core::option::Option$LT$T$GT$::map_or_else::h443112b6ce900918(&var_48, &var_d8);
        var_d8 = var_48;
        int64_t var_38;
        int64_t var_c8_6 = var_38;
        int64_t rax_7;
        uint64_t rdx_6;
        rax_7 = core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9(var_d0_3, 
            var_38 + var_d0_3);
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&var_f0, rax_7, rdx_6);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h201e2b6c2cdf2ea1(&var_d8);
    }
    
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&var_f0, 
        "# Subsequent TERM or COLORTERM e…", 0x46);
    int64_t rax_8;
    uint64_t rdx_7;
    rax_8 = core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9(
        "# config specific to those match…", &jump_table_423aa4);
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&var_f0, rax_8, rdx_7);
    arg1[1] = var_e0;
    *arg1 = var_f0;
    return arg1;
}
