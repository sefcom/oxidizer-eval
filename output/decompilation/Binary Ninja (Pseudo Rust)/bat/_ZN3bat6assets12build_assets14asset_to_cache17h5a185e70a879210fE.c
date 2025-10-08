
  fn bat::assets::build_assets::asset_to_cache::h5a185e70a879210f(arg1: *mut i8, arg2: *mut c_void, arg3: i64, arg4: u64) -> i64

{
    let mut var_90: *const i8 = "syntax setacknowledgements.binCo…";
    let var_88: i64 = 0xa;
    let mut var_48: ();
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_48, arg3, arg4);
    let mut var_68: *const *const i8 = &var_90;
    let var_60: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5cd1e3edb3ca57a0;
    let var_58: *mut c_void = &var_48;
    let var_50: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h5fba9a975e51dcf1;
    let mut var_e0: *mut *mut [i8; 0x30] = &data_ace118;
    let var_d8: i64 = 3;
    let var_c0: i64 = 0;
    let var_d0: *mut *const *const i8 = &var_68;
    let mut var_c8: i64 = 2;
    std::io::stdio::_print::h5e446ff973c02de6(&var_e0);
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..path..StripPrefixError$GT$$GT$::h7b85c5c873696979(&var_48);
    bat::assets::build_assets::asset_to_contents::h188d9b0cd47c3257(&var_e0, arg2, var_90);
    let result: i8 = var_e0;
    
    if result != 0xd
    {
        let rcx_2: i32 = *var_e0[1];
        *arg1.byte_offset(4) = *var_e0[4];
        *arg1.byte_offset(1) = rcx_2;
        *arg1.byte_offset(0x20) = var_c0;
        let var_b0: i128;
        *arg1.byte_offset(0x30) = var_b0;
        let var_a0: i128;
        *arg1.byte_offset(0x40) = var_a0;
        *arg1 = result;
        *arg1.byte_offset(8) = var_d8;
        *arg1.byte_offset(0x18) = var_c8;
        return result;
    }
    
    let rax: i64 = std::fs::write::hf735e059cac3a8eb(arg3, arg4, var_d0);
    let mut var_80: i64 = arg3;
    let var_78_1: u64 = arg4;
    let var_70_1: *const *const i8 = &var_90;
    
    if rax == 0
    {
        var_e0 = &data_ace0f8;
        let var_d8_1: i64 = 1;
        let var_d0_1: i64 = 8;
        var_c8 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_e0);
        *arg1 = 0xd;
    }
    else
    {
        bat::assets::build_assets::asset_to_cache::_$u7b$$u7b$closure$u7d$$u7d$::h0a5908bf5a41a864(
            &var_e0, &var_80, rax);
        let rax_1: *mut *mut [i8; 0x30] = var_e0;
        *arg1.byte_offset(0x10) = var_d8;
        *arg1 = 0xb;
        *arg1.byte_offset(8) = rax_1;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1e41457799ed3462(var_d8, var_d0)
}
