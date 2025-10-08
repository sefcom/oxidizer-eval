
  int64_t alacritty::config::ui_config::deserialize_bindings::h129f28972fe6be82(int64_t* arg1, int64_t* arg2, int64_t* arg3)

{
    int64_t rbp;
    int64_t var_8 = rbp;
    int64_t var_218;
    _$LT$toml..value..Value$u20$as$u20$serde..de..Deserializer$GT$::deserialize_seq::h0cd96f3e3c9b3475(&var_218, arg2);
    int64_t rax = var_218;
    int128_t var_210;
    int128_t var_1a8 = var_210;
    int64_t var_200;
    int128_t var_1f8;
    int128_t var_1e8;
    int128_t var_1d8;
    int64_t var_1c8;
    
    if (rax != 2)
    {
        arg1[0xa] = var_1c8;
        *(arg1 + 0x40) = var_1d8;
        *(arg1 + 0x30) = var_1e8;
        *(arg1 + 0x20) = var_1f8;
        arg1[3] = var_200;
        *(arg1 + 8) = var_1a8;
        *arg1 = rax;
        /* tailcall */
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alacritty..config..bindings..Binding$LT$alacritty..config..bindings..BindingKey$GT$$GT$$GT$::h249ff361ada66d33(arg3);
    }
    
    int128_t var_148 = var_1a8;
    int64_t var_138 = var_200;
    int64_t rax_1;
    int64_t rdx;
    rax_1 =
        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(var_200, 8, 0x60);
    int64_t var_238 = rax_1;
    int64_t result = 0;
    void var_108;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd28118b4f03ed1a4(&var_108, &var_148);
    void var_e8;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfd8232c883c87921(&var_e8, &var_108);
    char i;
    
    if (i != 8)
    {
        do
        {
            _$LT$alacritty..config..bindings..Binding$LT$alacritty..config..bindings..BindingKey$GT$$u20$as$u20$serde..de..Deserialize$GT$::deserialize::h49d98313bc4609f9(&var_218);
            
            if (var_218 != -0x7fffffffffffffcb)
            {
                int128_t var_48_1 = var_1c8;
                int128_t var_58_1 = var_1d8;
                int128_t var_68_1 = var_1e8;
                int128_t var_78_1 = var_1f8;
                int128_t var_88_1 = var_210;
                int128_t var_98 = var_218;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h11dc9e9eabaa12fa(&var_238, &var_98);
            }
            else
            {
                int64_t var_1c0;
                int64_t var_158_1 = var_1c0;
                int128_t var_168_1 = var_1d8;
                int128_t var_178_1 = var_1e8;
                int128_t var_188_1 = var_1f8;
                int64_t var_198;
                var_198 = var_200;
                var_1a8 = var_210;
                
                if (core::sync::atomic::atomic_load::h45f93311b58385bb(
                    &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0))
                {
                    int128_t* var_1b8 = &var_1a8;
                    uint64_t (* var_1b0_1)(int32_t* arg1, int64_t* arg2) = _$LT$toml..de..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h5637888e57e7e273;
                    void** const var_c8 = &data_c819d0;
                    int64_t var_c0_1 = 2;
                    int64_t var_a8_1 = 0;
                    int128_t** var_b8_1 = &var_1b8;
                    int64_t var_b0_1 = 1;
                    int64_t rax_8 = log::__private_api::loc::h250021ea1f26630a(&data_c81a20);
                    void* const var_130 = "alacritty_config_derivealacritty…";
                    int64_t var_128_1 = 0x17;
                    void* const var_120_1 = "alacritty::config::ui_config(ipf…";
                    int64_t var_118_1 = 0x1c;
                    int64_t var_110_1 = rax_8;
                    log::__private_api::log::h0b6680b994d742b1(&var_c8, 1, &var_130);
                }
                
                core::ptr::drop_in_place$LT$toml..de..error..Error$GT$::h4158bf9df3d9fe37(&var_1a8);
            }
            
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfd8232c883c87921(&var_e8, &var_108);
        } while (i != 8);
    }
    
    rbp = 1;
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$toml..value..Value$GT$$GT$::h6249b05fd4c237b7(&var_108);
    int64_t rsi_2 = rdx;
    int64_t i_1 = result * 0x60;
    
    while (i_1)
    {
        i_1 -= 0x60;
        alloc::vec::Vec$LT$T$C$A$GT$::retain::h4e476ef0f8ba6959(arg3, rsi_2);
        rsi_2 += 0x60;
    }
    
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h2a7386c3c2dd1eec(&var_218, arg3);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::hbea3acb1520508ff(&var_238, &var_218);
    arg1[3] = result;
    *(arg1 + 8) = var_238;
    *arg1 = 2;
    return result;
}
