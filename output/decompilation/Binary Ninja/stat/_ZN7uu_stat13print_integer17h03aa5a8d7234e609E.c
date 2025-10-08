
  int64_t uu_stat::print_integer::h03aa5a8d7234e609(int64_t arg1, void* arg2, int64_t arg3, int64_t arg4, int64_t arg5, char arg6)

{
    void var_40;
    _$LT$i64$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h60b05a0cf10951a2(&var_40, 
        arg1);
    int64_t var_b0;
    void* var_38;
    int64_t var_30;
    
    if (!*(arg2 + 5))
    {
        void* var_a8_1 = var_38;
        int64_t var_a0_1 = var_30;
        var_b0 = -0x8000000000000000;
    }
    else
        uu_stat::group_num::hf49c8796a9e1a06a(&var_b0, var_38, var_30);
    uint64_t rax = *(arg2 + 3);
    char const* const rcx = " +";
    
    if (!(rax & 1))
        rcx = 1;
    
    char const* const rsi_2 = "+";
    char temp0 = *(arg2 + 4);
    
    if (!temp0)
        rsi_2 = rcx;
    
    if (temp0)
        rax = 1;
    
    char const* const var_50 = rsi_2;
    uint64_t var_48 = rax;
    char const* const* var_e8;
    int64_t (* var_e0)(int64_t* arg1, int64_t arg2);
    int128_t var_98;
    char const* const* var_80;
    
    if (!arg4)
    {
        var_80 = &var_50;
        int64_t (* var_78_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
        int64_t* var_70_1 = &var_b0;
        int64_t (* var_68_1)(int64_t* arg1, int64_t arg2) = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h622952c97c82feb9;
        var_e8 = &data_41cfd0;
        var_e0 = 2;
        int64_t var_c8_1 = 0;
        char const* const** var_d8_1 = &var_80;
        int64_t var_d0_2 = 2;
        core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(&var_98, &var_e8);
    }
    else if (arg4 != 1)
    {
        if (arg5 > 0xffff)
        {
            var_e8 = &data_519960;
            int64_t var_e0_1 = 1;
            int64_t var_d8_4 = 8;
            int64_t var_d0;
            var_d0 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_e8);
            /* no return */
        }
        
        var_e8 = &var_50;
        var_e0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
        int64_t* var_d8_2 = &var_b0;
        int64_t (* var_d0_3)(int64_t* arg1, int64_t arg2) = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h622952c97c82feb9;
        int64_t var_c8_2 = 0;
        int16_t var_c0_1 = arg5;
        var_80 = &data_41cfd0;
        int64_t var_78_2 = 2;
        void* const var_60_1 = &data_41d528;
        int64_t var_58_1 = 2;
        char const* const** var_70_2 = &var_e8;
        int64_t var_68_2 = 3;
        core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(&var_98, &var_80);
    }
    else
    {
        var_80 = &var_50;
        int64_t (* var_78)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
        int64_t* var_70 = &var_b0;
        int64_t (* var_68)(int64_t* arg1, int64_t arg2) = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h622952c97c82feb9;
        var_e8 = &data_41cfd0;
        var_e0 = 2;
        int64_t var_c8 = 0;
        char const* const** var_d8 = &var_80;
        int64_t var_d0_1 = 2;
        core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(&var_98, &var_e8);
    }
    var_e8 = var_98;
    int64_t var_88;
    uu_stat::pad_and_print::h4c659c1797f3ded6(var_e0, var_88, *(arg2 + 2), arg3, arg6);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_e8);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha7af664bba1b7bff(&var_b0);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_40);
}
