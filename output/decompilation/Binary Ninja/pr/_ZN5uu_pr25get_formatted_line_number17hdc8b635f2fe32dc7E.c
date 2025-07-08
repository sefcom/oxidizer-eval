
  void uu_pr::get_formatted_line_number::hdc8b635f2fe32dc7(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_f8 = arg3;
    
    if (*(arg2 + 0xd8) == -0x8000000000000000)
    {
        label_5c85b8:
        *arg1 = 0;
        arg1[1] = 1;
        arg1[2] = 0;
        return;
    }
    
    if (!*(arg2 + 0x10))
    {
        if (!arg3)
            goto label_5c85b8;
    }
    else if (!arg3 || arg4)
        goto label_5c85b8;
    
    void var_80;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h465f4145a69c72a5(&var_80, &var_f8);
    int64_t r13_1 = *(arg2 + 0xf0);
    void* var_160 = arg2 + 0xd8;
    void* var_70;
    void* r14_3 = var_70 - r13_1;
    void* rbx_3;
    void* const var_158;
    void* var_128;
    int64_t var_f0;
    
    if (var_70 >= r13_1)
    {
        char* var_78;
        void* rax_1;
        int64_t rdx_1;
        rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(r14_3, var_78, var_70);
        
        if (!rax_1)
        {
            core::str::slice_error_fail::h5dbb61534404fe7e(var_78, var_70, r14_3, var_70);
            /* no return */
        }
        
        void* var_68 = rax_1;
        int64_t var_60_1 = rdx_1;
        var_128 = &var_68;
        int64_t (* var_120_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h50d13b2eb6feaccb;
        void** var_118_2 = &var_160;
        int64_t (* var_110_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc92107804a18d2f9;
        int64_t var_108_2 = r13_1;
        int64_t var_100_2 = 0;
        var_f0 = 2;
        int64_t var_e0_2 = 1;
        int64_t var_d8_2 = 2;
        int64_t var_d0_2 = 0;
        int64_t var_c8_2 = 0x20;
        char var_c0_2 = 1;
        int64_t var_b8_2 = 2;
        int64_t var_a8_2 = 2;
        int64_t var_98_2 = 1;
        int64_t var_90_2 = 0x20;
        char var_88_2 = 3;
        var_158 = &data_46bf10;
        int64_t var_150_2 = 2;
        int64_t* var_138_2 = &var_f0;
        int64_t var_130_2 = 2;
        void** var_148_2 = &var_128;
        int64_t var_140_2 = 3;
        void var_58;
        rbx_3 = &var_58;
        core::option::Option$LT$T$GT$::map_or_else::h4ea8d69383c77fdd(&var_58, &var_158);
    }
    else
    {
        var_128 = &var_80;
        int64_t (* var_120_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        void** var_118_1 = &var_160;
        int64_t (* var_110_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc92107804a18d2f9;
        int64_t var_108_1 = r13_1;
        int64_t var_100_1 = 0;
        var_f0 = 2;
        int64_t var_e0_1 = 1;
        int64_t var_d8_1 = 2;
        int64_t var_d0_1 = 0;
        int64_t var_c8_1 = 0x20;
        char var_c0_1 = 1;
        int64_t var_b8_1 = 2;
        int64_t var_a8_1 = 2;
        int64_t var_98_1 = 1;
        int64_t var_90_1 = 0x20;
        char var_88_1 = 3;
        var_158 = &data_46bf10;
        int64_t var_150_1 = 2;
        int64_t* var_138_1 = &var_f0;
        int64_t var_130_1 = 2;
        void** var_148_1 = &var_128;
        int64_t var_140_1 = 3;
        void var_40;
        rbx_3 = &var_40;
        core::option::Option$LT$T$GT$::map_or_else::h4ea8d69383c77fdd(&var_40, &var_158);
    }
    arg1[2] = *(rbx_3 + 0x10);
    *arg1 = *rbx_3;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_80);
}
