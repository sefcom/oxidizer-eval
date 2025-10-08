
  int64_t* uu_kill::parse_signal_value::h198dbdcf792084b2(int64_t* arg1, int128_t* arg2, uint64_t arg3)

{
    char rax;
    void** const rdx;
    rax = uucore::features::signals::signal_by_name_or_value::h89b982f23c5744ec(arg2, arg3);
    uint64_t rax_1;
    
    if (!(rax & 1))
    {
        int64_t var_88 = 0;
        int128_t* var_80_1 = arg2;
        uint64_t var_78_1 = arg3;
        char var_70_1 = 1;
        int64_t* var_98 = &var_88;
        int64_t (* var_90_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        void* const var_68 = &data_4e7670;
        int64_t var_60_1 = 2;
        int64_t var_48_1 = 0;
        int64_t** var_58_1 = &var_98;
        int64_t var_50_1 = 1;
        void var_38;
        core::option::Option$LT$T$GT$::map_or_else::h9ebb7b35ad4a5108(&var_38, &var_68);
        int32_t var_20_1 = 1;
        rax_1 = alloc::boxed::Box$LT$T$GT$::new::h4d33bae44fdeaf98(&var_38);
        rdx = &data_4e76b0;
    }
    else
        rax_1 = 0;
    
    arg1[1] = rdx;
    *arg1 = rax_1;
    return arg1;
}
