
  int64_t uu_pr::get_line_for_printing::h8a9c61ca270edd26(int128_t* arg1, void* arg2, int64_t* arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7, int64_t arg8)

{
    int64_t var_c8 = arg4;
    int64_t var_c0 = 0;
    int64_t var_b8 = 1;
    int64_t var_b0 = 0;
    void var_48;
    uu_pr::get_formatted_line_number::hdc8b635f2fe32dc7(&var_48, arg2, arg3[4], arg5);
    int64_t rdi_1;
    rdi_1 = *arg3 == -0x8000000000000000;
    void* rbp_1 = &arg3[rdi_1];
    core::result::Result$LT$T$C$E$GT$::unwrap::h1ac7a762ade089cc(rdi_1, rbp_1);
    void* var_138 = rbp_1;
    void* var_f8 = &var_48;
    int64_t (* var_f0)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    void** var_e8 = &var_138;
    int64_t (* var_e0)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc92107804a18d2f9;
    void* const var_168 = &data_46bf10;
    int64_t var_160 = 2;
    int64_t var_148 = 0;
    void** var_158 = &var_f8;
    int64_t var_150 = 2;
    int128_t var_90;
    core::option::Option$LT$T$GT$::map_or_else::h4ea8d69383c77fdd(&var_90, &var_168);
    int128_t var_118 = var_90;
    void* var_a8 = arg2 + 0xa8;
    int64_t rax_1 = core::iter::traits::iterator::Iterator::fold::h9922291a76037142(*var_118[8]);
    void* rax_2 = arg2 + 0xc0;
    
    if (*(arg2 + 0x143))
        rax_2 = &var_c0;
    
    int64_t var_80;
    int64_t var_a0 = rax_1 * 7 + var_80;
    
    if (arg5 + 1 == arg8)
        rax_2 = &var_c0;
    
    void* var_98 = rax_2;
    int64_t* var_60 = &var_c8;
    int64_t* var_58 = &var_a0;
    int128_t* var_50 = &var_118;
    int64_t var_128_1;
    
    if (!arg6)
    {
        var_168 = var_90;
        var_128_1 = var_80;
        var_138 = var_168;
    }
    else
    {
        uu_pr::get_line_for_printing::_$u7b$$u7b$closure$u7d$$u7d$::h3e398a0d38c95d65(&var_168, 
            &var_60, arg7);
        void* const rax_3 = var_168;
        var_f8 = var_160;
        var_168 = var_118;
        
        if (rax_3 == -0x8000000000000000)
        {
            var_128_1 = var_80;
            var_138 = var_168;
        }
        else
        {
            int128_t var_130_1 = var_f8;
            var_138 = rax_3;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_168);
        }
    }
    var_168 = &var_a8;
    int64_t (* var_160_1)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc92107804a18d2f9;
    void** var_158_2 = &var_138;
    int64_t (* var_150_1)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    void** var_148_1 = &var_98;
    int64_t (* var_140)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc92107804a18d2f9;
    var_f8 = &data_475660;
    int64_t var_f0_1 = 3;
    int64_t var_d8 = 0;
    void* const* var_e8_1 = &var_168;
    int64_t var_e0_1 = 3;
    int128_t var_78;
    core::option::Option$LT$T$GT$::map_or_else::h4ea8d69383c77fdd(&var_78, &var_f8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_138);
    int64_t var_68;
    arg1[1] = var_68;
    *arg1 = var_78;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_48);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_c0);
}
