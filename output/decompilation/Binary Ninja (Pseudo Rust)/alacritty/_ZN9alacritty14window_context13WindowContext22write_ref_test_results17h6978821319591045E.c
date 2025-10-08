
  fn alacritty::window_context::WindowContext::write_ref_test_results::h6978821319591045(arg1: *mut c_void) -> i64

{
    let r15: *mut c_void = *arg1.byte_offset(0x1e18);
    alacritty_terminal::sync::FairMutex$LT$T$GT$::lock::h8771cda87d96e8b1(r15.byte_offset(0x10));
    let mut var_c8: ();
    _$LT$alacritty_terminal..grid..Grid$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h51baa77945d10210(&var_c8, r15.byte_offset(0x40));
    core::ptr::drop_in_place$LT$lock_api..mutex..MutexGuard$LT$parking_lot..raw_mutex..RawMutex$C$alacritty_terminal..term..Term$LT$alacritty..event..EventProxy$GT$$GT$$GT$::h090449980f2d2d72(r15.byte_offset(0x10));
    alacritty_terminal::grid::storage::Storage$LT$T$GT$::truncate::h2d132ed67c9d1788(&var_c8);
    let mut rcx: i64 = 0;
    let var_a0: i64;
    let var_30: i64;
    
    if var_a0 >= var_30
    {
        rcx = var_a0 - var_30;
    }
    
    let var_38: i64;
    let var_20: i64;
    alacritty_terminal::grid::storage::Storage$LT$T$GT$::initialize::hf07ff5cf81d3c7d9(&var_c8, 
        var_20 - rcx, var_38);
    alacritty_terminal::grid::storage::Storage$LT$T$GT$::truncate::h2d132ed67c9d1788(&var_c8);
    let mut var_148: *mut *mut c_void;
    serde_json::ser::to_vec::h5a92ade1450ab03e(&var_148, &var_c8);
    let mut var_168: i128;
    let mut var_158: u64;
    let var_140: i64;
    let var_138: u64;
    
    if !(0 + -(var_148))
    {
        var_158 = var_138;
        var_168 = var_148;
    }
    else
    {
        *var_168[8] = var_140;
        var_168 = -0x8000000000000000;
    }
    
    let mut var_108: ();
    core::result::Result$LT$T$C$E$GT$::expect::he09979abea91806d(&var_108, &var_168, 
        "serialize gridserialize size./gr…");
    serde_json::ser::to_vec::haac6b17463ff884c(&var_148, *arg1.byte_offset(0x1910), 
        *arg1.byte_offset(0x1908));
    
    if var_148 != -0x8000000000000000
    {
        var_158 = var_138;
        var_168 = var_148;
    }
    else
    {
        *var_168[8] = var_140;
        var_168 = -0x8000000000000000;
    }
    
    let mut var_f0: ();
    core::result::Result$LT$T$C$E$GT$::expect::he09979abea91806d(&var_f0, &var_168, 
        "serialize size./grid.jsonwrite g…");
    let mut rax_7: i64 = var_a0 - var_30;
    
    if var_a0 < var_30
    {
        rax_7 = 0;
    }
    
    let mut var_110: i64 = rax_7;
    let mut var_d8: *mut i64 = &var_110;
    let var_d0: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
    var_148 = &data_c843c8;
    let var_140_1: i64 = 2;
    let var_128: i64 = 0;
    let var_138_1: *mut *mut i64 = &var_d8;
    let var_130: i64 = 1;
    core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_168, 0, 
        "serialize size./grid.jsonwrite g…", &var_148);
    var_148 = var_168;
    std::fs::File::create::h0df24f189f7321e7(&var_168, "./grid.jsonwrite grid.json./size…");
    let mut rdi_12: *mut *mut [i8; 0xae];
    let var_100: i64;
    let var_f8: u64;
    
    if var_168 != 1
    {
        rdi_12 = alacritty::window_context::WindowContext::write_ref_test_results::_$u7b$$u7b$closure$u7d$$u7d$::hdb7bf6cba3b252e4(var_100, var_f8, *var_168[4]);
    }
    else
    {
        rdi_12 = *var_168[8];
    }
    core::result::Result$LT$T$C$E$GT$::expect::h07194ab63a8d2f81(rdi_12, 
        "write grid.json./size.jsonwrite …", 0xf);
    std::fs::File::create::h0df24f189f7321e7(&var_168, "./size.jsonwrite size.json./conf…");
    let mut rdi_15: *mut *mut [i8; 0xae];
    let var_e8: i64;
    let var_e0: u64;
    
    if var_168 != 1
    {
        rdi_15 = alacritty::window_context::WindowContext::write_ref_test_results::_$u7b$$u7b$closure$u7d$$u7d$::hdb7bf6cba3b252e4(var_e8, var_e0, *var_168[4]);
    }
    else
    {
        rdi_15 = *var_168[8];
    }
    core::result::Result$LT$T$C$E$GT$::expect::h07194ab63a8d2f81(rdi_15, 
        "write size.json./config.jsonwrit…", 0xf);
    std::fs::File::create::h0df24f189f7321e7(&var_168, "./config.jsonwrite config.jsonXD…");
    let mut rdi_18: *mut *mut [i8; 0xae];
    
    if var_168 != 1
    {
        rdi_18 = alacritty::window_context::WindowContext::write_ref_test_results::_$u7b$$u7b$closure$u7d$$u7d$::hdb7bf6cba3b252e4(var_140_1, var_158, *var_168[4]);
    }
    else
    {
        rdi_18 = *var_168[8];
    }
    
    core::result::Result$LT$T$C$E$GT$::expect::h07194ab63a8d2f81(rdi_18, 
        "write config.jsonXDG_ACTIVATION_…", 0x11);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_148);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_f0);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_108);
    core::ptr::drop_in_place$LT$alacritty_terminal..grid..Grid$LT$alacritty_terminal..term..cell..Cell$GT$$GT$::hd67781d2bbb4d82b(&var_c8)
}
