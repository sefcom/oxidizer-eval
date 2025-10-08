
  int64_t uu_id::pline::h1d390836edad1713(char arg1)

{
    uid_t rsi;
    
    if (!(arg1 & 1))
        rsi = uucore::features::process::getuid::h408babfb7f2600cd();
    
    int64_t* var_98;
    _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::h5d0bb482984d9c00(&var_98, rsi);
    int64_t var_118;
    core::result::Result$LT$T$C$E$GT$::unwrap::h5bb4bfd2c71233d9(&var_118, &var_98);
    int64_t var_1a8;
    int64_t var_1a0;
    int64_t var_100;
    int64_t var_b8;
    int64_t rax_3;
    
    if (-(var_b8) == -0x8000000000000000)
    {
        var_1a0 = 1;
        var_1a0 = 0;
        var_1a8 = 0;
        rax_3 = var_100;
        
        if (rax_3 == -0x8000000000000000)
            goto label_45dc29;
        
        goto label_45dbe5;
    }
    
    int128_t var_b0;
    var_1a0 = var_b0;
    var_1a8 = var_b8;
    rax_3 = var_100;
    int64_t var_190;
    int64_t var_188;
    int64_t var_170;
    int64_t rdx;
    int64_t var_d0;
    int128_t var_c8;
    
    if (rax_3 != -0x8000000000000000)
    {
        label_45dbe5:
        int128_t var_f8;
        var_188 = var_f8;
        var_190 = rax_3;
        rdx = var_d0;
        
        if (rdx == -0x8000000000000000)
        {
            label_45dc4f:
            var_170 = 1;
            int64_t var_168_1 = 0;
            rdx = 0;
        }
        else
            var_170 = var_c8;
    }
    else
    {
        label_45dc29:
        var_188 = 1;
        var_188 = 0;
        var_190 = 0;
        rdx = var_d0;
        
        if (rdx == -0x8000000000000000)
            goto label_45dc4f;
        
        var_170 = var_c8;
    }
    int64_t var_178 = rdx;
    int64_t var_e8;
    int64_t rdx_1 = var_e8;
    int64_t var_158;
    int128_t var_e0;
    
    if (rdx_1 != -0x8000000000000000)
        var_158 = var_e0;
    else
    {
        var_158 = 1;
        var_158 = 0;
        rdx_1 = 0;
    }
    int64_t var_160 = rdx_1;
    var_98 = &var_118;
    int64_t (* var_90)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    int64_t* var_88 = &var_1a8;
    int64_t (* var_80)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    void var_a0;
    void* var_78 = &var_a0;
    uint64_t (* var_70)(int32_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
    void var_9c;
    void* var_68 = &var_9c;
    uint64_t (* var_60)(int32_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
    int64_t* var_58 = &var_190;
    int64_t (* var_50)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    int64_t* var_48 = &var_178;
    int64_t (* var_40)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    int64_t* var_38 = &var_160;
    int64_t (* var_30)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    void* const var_148 = &data_4e8e30;
    int64_t var_140 = 8;
    int64_t var_128 = 0;
    int64_t** var_138 = &var_98;
    int64_t var_130 = 7;
    std::io::stdio::_print::h5e446ff973c02de6(&var_148);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h084553603f2ff391(var_160, var_158);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h084553603f2ff391(var_178, var_170);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h084553603f2ff391(var_190, var_188);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h084553603f2ff391(var_1a8, var_1a0);
    int64_t var_110;
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h084553603f2ff391(var_118, 
        var_110);
}
