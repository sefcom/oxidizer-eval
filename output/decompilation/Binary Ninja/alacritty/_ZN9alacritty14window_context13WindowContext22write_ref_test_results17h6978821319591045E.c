
  int64_t alacritty::window_context::WindowContext::write_ref_test_results::h6978821319591045(void* arg1)

{
    void* r15 = *(arg1 + 0x1e18);
    alacritty_terminal::sync::FairMutex$LT$T$GT$::lock::h8771cda87d96e8b1(r15 + 0x10);
    void var_c8;
    _$LT$alacritty_terminal..grid..Grid$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h51baa77945d10210(&var_c8, r15 + 0x40);
    core::ptr::drop_in_place$LT$lock_api..mutex..MutexGuard$LT$parking_lot..raw_mutex..RawMutex$C$alacritty_terminal..term..Term$LT$alacritty..event..EventProxy$GT$$GT$$GT$::h090449980f2d2d72(r15 + 0x10);
    alacritty_terminal::grid::storage::Storage$LT$T$GT$::truncate::h2d132ed67c9d1788(&var_c8);
    int64_t rcx = 0;
    int64_t var_a0;
    int64_t var_30;
    
    if (var_a0 >= var_30)
        rcx = var_a0 - var_30;
    
    int64_t var_38;
    int64_t var_20;
    alacritty_terminal::grid::storage::Storage$LT$T$GT$::initialize::hf07ff5cf81d3c7d9(&var_c8, 
        var_20 - rcx, var_38);
    alacritty_terminal::grid::storage::Storage$LT$T$GT$::truncate::h2d132ed67c9d1788(&var_c8);
    void** const var_148;
    serde_json::ser::to_vec::h5a92ade1450ab03e(&var_148, &var_c8);
    int128_t var_168;
    uint64_t var_158;
    int64_t var_140;
    uint64_t var_138;
    
    if (!(0 + -(var_148)))
    {
        var_158 = var_138;
        var_168 = var_148;
    }
    else
    {
        *var_168[8] = var_140;
        var_168 = -0x8000000000000000;
    }
    
    void var_108;
    core::result::Result$LT$T$C$E$GT$::expect::he09979abea91806d(&var_108, &var_168, 
        "serialize gridserialize size./gr…");
    serde_json::ser::to_vec::haac6b17463ff884c(&var_148, *(arg1 + 0x1910), *(arg1 + 0x1908));
    
    if (var_148 != -0x8000000000000000)
    {
        var_158 = var_138;
        var_168 = var_148;
    }
    else
    {
        *var_168[8] = var_140;
        var_168 = -0x8000000000000000;
    }
    
    void var_f0;
    core::result::Result$LT$T$C$E$GT$::expect::he09979abea91806d(&var_f0, &var_168, 
        "serialize size./grid.jsonwrite g…");
    int64_t rax_7 = var_a0 - var_30;
    
    if (var_a0 < var_30)
        rax_7 = 0;
    
    int64_t var_110 = rax_7;
    int64_t* var_d8 = &var_110;
    uint64_t (* var_d0)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
    var_148 = &data_c843c8;
    int64_t var_140_1 = 2;
    int64_t var_128 = 0;
    int64_t** var_138_1 = &var_d8;
    int64_t var_130 = 1;
    core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_168, 0, 
        "serialize size./grid.jsonwrite g…", &var_148);
    var_148 = var_168;
    std::fs::File::create::h0df24f189f7321e7(&var_168, "./grid.jsonwrite grid.json./size…");
    char const (** rdi_12)[0xae];
    int64_t var_100;
    uint64_t var_f8;
    
    if (var_168 != 1)
        rdi_12 = alacritty::window_context::WindowContext::write_ref_test_results::_$u7b$$u7b$closure$u7d$$u7d$::hdb7bf6cba3b252e4(var_100, var_f8, *var_168[4]);
    else
        rdi_12 = *var_168[8];
    core::result::Result$LT$T$C$E$GT$::expect::h07194ab63a8d2f81(rdi_12, 
        "write grid.json./size.jsonwrite …", 0xf);
    std::fs::File::create::h0df24f189f7321e7(&var_168, "./size.jsonwrite size.json./conf…");
    char const (** rdi_15)[0xae];
    int64_t var_e8;
    uint64_t var_e0;
    
    if (var_168 != 1)
        rdi_15 = alacritty::window_context::WindowContext::write_ref_test_results::_$u7b$$u7b$closure$u7d$$u7d$::hdb7bf6cba3b252e4(var_e8, var_e0, *var_168[4]);
    else
        rdi_15 = *var_168[8];
    core::result::Result$LT$T$C$E$GT$::expect::h07194ab63a8d2f81(rdi_15, 
        "write size.json./config.jsonwrit…", 0xf);
    std::fs::File::create::h0df24f189f7321e7(&var_168, "./config.jsonwrite config.jsonXD…");
    char const (** rdi_18)[0xae];
    
    if (var_168 != 1)
        rdi_18 = alacritty::window_context::WindowContext::write_ref_test_results::_$u7b$$u7b$closure$u7d$$u7d$::hdb7bf6cba3b252e4(var_140_1, var_158, *var_168[4]);
    else
        rdi_18 = *var_168[8];
    
    core::result::Result$LT$T$C$E$GT$::expect::h07194ab63a8d2f81(rdi_18, 
        "write config.jsonXDG_ACTIVATION_…", 0x11);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_148);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_f0);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_108);
    return core::ptr::drop_in_place$LT$alacritty_terminal..grid..Grid$LT$alacritty_terminal..term..cell..Cell$GT$$GT$::hd67781d2bbb4d82b(&var_c8);
}
