
  int64_t uu_pr::get_line_for_printing::hd1db5805a3293521(int128_t* arg1, void* arg2, int64_t* arg3, int64_t arg4, int64_t arg5, char arg6, int64_t arg7, int64_t arg8)

{
    int64_t var_98 = arg4;
    int64_t var_90 = 0;
    int64_t var_88 = 1;
    int64_t var_80 = 0;
    void var_48;
    uu_pr::get_formatted_line_number::h27e3eb06f4d26408(&var_48, arg2, arg3[4], arg5);
    int64_t rdi_1;
    rdi_1 = 0 + -(*arg3);
    void* r12_1 = &arg3[rdi_1];
    core::result::Result$LT$T$C$E$GT$::unwrap::h117773ddb1da076c(rdi_1, r12_1);
    void* var_e8 = r12_1;
    void* var_c8 = &var_48;
    int64_t (* var_c0)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    void** var_b8 = &var_e8;
    int64_t (* var_b0)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdf43014d0105ab1f;
    char const* const var_138 = &data_456960;
    int64_t var_130 = 2;
    int64_t var_118 = 0;
    void** var_128 = &var_c8;
    int64_t var_120 = 2;
    int128_t var_108;
    core::option::Option$LT$T$GT$::map_or_else::ha768742fd52e18ba(&var_108, &var_138);
    var_e8 = var_108;
    void* var_78 = arg2 + 0xa8;
    int64_t var_e0;
    int64_t rax_1 = core::iter::traits::iterator::Iterator::fold::ha87ed6a5236a3e93(var_e0);
    void* rax_2 = arg2 + 0xc0;
    
    if (*(arg2 + 0x143) & 1)
        rax_2 = &var_90;
    
    if (arg5 + 1 == arg8)
        rax_2 = &var_90;
    
    int64_t var_f8;
    int64_t var_70 = rax_1 * 7 + var_f8;
    void* var_68 = rax_2;
    int64_t* var_60 = &var_98;
    int64_t* var_58 = &var_70;
    void** var_50 = &var_e8;
    int128_t* rdi_5;
    int64_t var_f8_1;
    
    if (!(arg6 & 1))
    {
        var_138 = var_e8;
        rdi_5 = arg1;
        var_f8_1 = var_f8;
        var_108 = var_138;
    }
    else
    {
        uu_pr::get_line_for_printing::_$u7b$$u7b$closure$u7d$$u7d$::h87bd5cf778ef51f9(&var_138, 
            &var_60, arg7);
        char const* const rax_3 = var_138;
        var_c8 = var_130;
        var_138 = var_e8;
        rdi_5 = arg1;
        
        if (rax_3 == -0x8000000000000000)
        {
            var_f8_1 = var_f8;
            var_108 = var_138;
        }
        else
        {
            var_108 = var_c8;
            var_108 = rax_3;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_138);
        }
    }
    var_138 = &var_78;
    int64_t (* var_130_1)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdf43014d0105ab1f;
    int128_t* var_128_2 = &var_108;
    int64_t (* var_120_1)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    void** var_118_1 = &var_68;
    int64_t (* var_110)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdf43014d0105ab1f;
    var_c8 = &data_458358;
    int64_t var_c0_1 = 3;
    int64_t var_a8 = 0;
    char const* const* var_b8_1 = &var_138;
    int64_t var_b0_1 = 3;
    core::option::Option$LT$T$GT$::map_or_else::ha768742fd52e18ba(rdi_5, &var_c8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_108);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_48);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_90);
}
