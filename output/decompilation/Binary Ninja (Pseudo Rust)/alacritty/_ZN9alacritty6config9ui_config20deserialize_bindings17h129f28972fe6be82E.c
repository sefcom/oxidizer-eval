
  fn alacritty::config::ui_config::deserialize_bindings::h129f28972fe6be82(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64) -> i64

{
    let mut rbp: i64;
    let var_8: i64 = rbp;
    let mut var_218: i64;
    _$LT$toml..value..Value$u20$as$u20$serde..de..Deserializer$GT$::deserialize_seq::h0cd96f3e3c9b3475(&var_218, arg2);
    let rax: i64 = var_218;
    let var_210: i128;
    let mut var_1a8: i128 = var_210;
    let var_200: i64;
    let var_1f8: i128;
    let var_1e8: i128;
    let var_1d8: i128;
    let var_1c8: i64;
    
    if rax != 2
    {
        arg1[0xa] = var_1c8;
        *arg1.byte_offset(0x40) = var_1d8;
        *arg1.byte_offset(0x30) = var_1e8;
        *arg1.byte_offset(0x20) = var_1f8;
        arg1[3] = var_200;
        *arg1.byte_offset(8) = var_1a8;
        *arg1 = rax;
        /* tailcall */
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alacritty..config..bindings..Binding$LT$alacritty..config..bindings..BindingKey$GT$$GT$$GT$::h249ff361ada66d33(arg3);
    }
    
    let mut var_148: i128 = var_1a8;
    let var_138: i64 = var_200;
    let mut rax_1: i64;
    let mut rdx: i64;
    rax_1 =
        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(var_200, 8, 0x60);
    let mut var_238: i64 = rax_1;
    let result: i64 = 0;
    let mut var_108: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd28118b4f03ed1a4(&var_108, &var_148);
    let mut var_e8: ();
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfd8232c883c87921(&var_e8, &var_108);
    let i: i8;
    
    if i != 8
    {
        do
        {
            _$LT$alacritty..config..bindings..Binding$LT$alacritty..config..bindings..BindingKey$GT$$u20$as$u20$serde..de..Deserialize$GT$::deserialize::h49d98313bc4609f9(&var_218);
            
            if var_218 != -0x7fffffffffffffcb
            {
                let var_48_1: i128 = var_1c8;
                let var_58_1: i128 = var_1d8;
                let var_68_1: i128 = var_1e8;
                let var_78_1: i128 = var_1f8;
                let var_88_1: i128 = var_210;
                let mut var_98: i128 = var_218;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h11dc9e9eabaa12fa(&var_238, &var_98);
            }
            else
            {
                let var_1c0: i64;
                let var_158_1: i64 = var_1c0;
                let var_168_1: i128 = var_1d8;
                let var_178_1: i128 = var_1e8;
                let var_188_1: i128 = var_1f8;
                let mut var_198: i64;
                var_198 = var_200;
                var_1a8 = var_210;
                
                if core::sync::atomic::atomic_load::h45f93311b58385bb(
                    &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) != 0
                {
                    let mut var_1b8: *mut i128 = &var_1a8;
                    let var_1b0_1: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = _$LT$toml..de..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h5637888e57e7e273;
                    let mut var_c8: *mut *mut c_void = &data_c819d0;
                    let var_c0_1: i64 = 2;
                    let var_a8_1: i64 = 0;
                    let var_b8_1: *mut *mut i128 = &var_1b8;
                    let var_b0_1: i64 = 1;
                    let rax_8: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c81a20);
                    let mut var_130: *mut c_void = "alacritty_config_derivealacritty…";
                    let var_128_1: i64 = 0x17;
                    let var_120_1: *mut c_void = "alacritty::config::ui_config(ipf…";
                    let var_118_1: i64 = 0x1c;
                    let var_110_1: i64 = rax_8;
                    log::__private_api::log::h0b6680b994d742b1(&var_c8, 1, &var_130);
                }
                
                core::ptr::drop_in_place$LT$toml..de..error..Error$GT$::h4158bf9df3d9fe37(&var_1a8);
            }
            
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfd8232c883c87921(&var_e8, &var_108);
        } while i != 8;
    }
    
    rbp = 1;
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$toml..value..Value$GT$$GT$::h6249b05fd4c237b7(&var_108);
    let mut rsi_2: i64 = rdx;
    let mut i_1: i64 = result * 0x60;
    
    while i_1 != 0
    {
        i_1 -= 0x60;
        alloc::vec::Vec$LT$T$C$A$GT$::retain::h4e476ef0f8ba6959(arg3, rsi_2);
        rsi_2 += 0x60;
    }
    
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h2a7386c3c2dd1eec(&var_218, arg3);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::hbea3acb1520508ff(&var_238, &var_218);
    arg1[3] = result;
    *arg1.byte_offset(8) = var_238;
    *arg1 = 2;
    result
}
