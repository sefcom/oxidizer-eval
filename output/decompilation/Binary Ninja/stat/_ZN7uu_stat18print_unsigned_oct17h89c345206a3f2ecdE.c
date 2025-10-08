
  int64_t uu_stat::print_unsigned_oct::h89c345206a3f2ecd(int32_t arg1, int32_t arg2, char arg3, int64_t arg4, int64_t arg5, int64_t arg6, char arg7)

{
    int32_t var_9c = arg1;
    char const* const rcx = 1;
    
    if (arg2 & 1)
        rcx = "00x: warning: backslash at end o…";
    
    char const* const var_38 = rcx;
    uint64_t var_30 = arg2 & 1;
    void var_28;
    int64_t** rsi_1;
    void* rdi;
    void* const var_98;
    int64_t* var_68;
    
    if (!arg5 || arg5 == 1)
    {
        var_68 = &var_38;
        int64_t (* var_60)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
        int32_t* var_58 = &var_9c;
        uint64_t (* var_50)(int32_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i32$GT$::fmt::h84d633f3d5886597;
        var_98 = &data_41cfd0;
        int64_t var_90 = 2;
        int64_t var_78 = 0;
        int64_t** var_88 = &var_68;
        int64_t var_80_1 = 2;
        rdi = &var_28;
        rsi_1 = &var_98;
    }
    else
    {
        if (arg6 > 0xffff)
        {
            var_98 = &data_519960;
            int64_t var_90_2 = 1;
            int64_t var_88_2 = 8;
            int64_t var_80;
            var_80 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_98);
            /* no return */
        }
        
        var_98 = &var_38;
        int64_t (* var_90_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
        int32_t* var_88_1 = &var_9c;
        uint64_t (* var_80_2)(int32_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i32$GT$::fmt::h84d633f3d5886597;
        int64_t var_78_1 = 0;
        int16_t var_70_1 = arg6;
        var_68 = &data_41cfd0;
        int64_t var_60_1 = 2;
        void* const var_48_1 = &data_41d528;
        int64_t var_40_1 = 2;
        void* const* var_58_1 = &var_98;
        int64_t var_50_1 = 3;
        rdi = &var_28;
        rsi_1 = &var_68;
    }
    core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(rdi, rsi_1);
    int64_t var_20;
    int64_t var_18;
    uu_stat::pad_and_print::h4c659c1797f3ded6(var_20, var_18, arg3, arg4, arg7);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_28);
}
