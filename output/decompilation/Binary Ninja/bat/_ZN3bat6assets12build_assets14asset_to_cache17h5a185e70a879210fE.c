
  int64_t bat::assets::build_assets::asset_to_cache::h5a185e70a879210f(char* arg1, void* arg2, int64_t arg3, uint64_t arg4)

{
    char const* const var_90 = "syntax setacknowledgements.binCo…";
    int64_t var_88 = 0xa;
    void var_48;
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_48, arg3, arg4);
    char const* const* var_68 = &var_90;
    int64_t (* var_60)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5cd1e3edb3ca57a0;
    void* var_58 = &var_48;
    int64_t (* var_50)(int64_t* arg1, int64_t* arg2) =
        _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h5fba9a975e51dcf1;
    char const (** const var_e0)[0x30] = &data_ace118;
    int64_t var_d8 = 3;
    int64_t var_c0 = 0;
    char const* const** var_d0 = &var_68;
    int64_t var_c8 = 2;
    std::io::stdio::_print::h5e446ff973c02de6(&var_e0);
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..path..StripPrefixError$GT$$GT$::h7b85c5c873696979(&var_48);
    bat::assets::build_assets::asset_to_contents::h188d9b0cd47c3257(&var_e0, arg2, var_90);
    char result = var_e0;
    
    if (result != 0xd)
    {
        int32_t rcx_2 = *var_e0[1];
        *(arg1 + 4) = *var_e0[4];
        *(arg1 + 1) = rcx_2;
        *(arg1 + 0x20) = var_c0;
        int128_t var_b0;
        *(arg1 + 0x30) = var_b0;
        int128_t var_a0;
        *(arg1 + 0x40) = var_a0;
        *arg1 = result;
        *(arg1 + 8) = var_d8;
        *(arg1 + 0x18) = var_c8;
        return result;
    }
    
    int64_t rax = std::fs::write::hf735e059cac3a8eb(arg3, arg4, var_d0);
    int64_t var_80 = arg3;
    uint64_t var_78_1 = arg4;
    char const* const* var_70_1 = &var_90;
    
    if (!rax)
    {
        var_e0 = &data_ace0f8;
        int64_t var_d8_1 = 1;
        int64_t var_d0_1 = 8;
        var_c8 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_e0);
        *arg1 = 0xd;
    }
    else
    {
        bat::assets::build_assets::asset_to_cache::_$u7b$$u7b$closure$u7d$$u7d$::h0a5908bf5a41a864(
            &var_e0, &var_80, rax);
        char const (** const rax_1)[0x30] = var_e0;
        *(arg1 + 0x10) = var_d8;
        *arg1 = 0xb;
        *(arg1 + 8) = rax_1;
    }
    
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1e41457799ed3462(var_d8, 
        var_d0);
}
