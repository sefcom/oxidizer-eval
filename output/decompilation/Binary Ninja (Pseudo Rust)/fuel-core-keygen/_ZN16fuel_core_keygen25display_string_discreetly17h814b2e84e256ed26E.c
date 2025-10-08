
  fn fuel_core_keygen::display_string_discreetly::h814b2e84e256ed26(arg1: *mut i8) -> u64

{
    let mut var_38: *mut i8 = arg1;
    let rsi: i64;
    let var_30: i64 = rsi;
    let mut var_28: *const i8 = "### Do not share or lose this pr…";
    let var_20: i64 = 0x49;
    let mut var_78: *const *const i8;
    let mut var_68: *mut c_void;
    
    if atty::is::h6427351b8c0467c1(0) == 0
    {
        var_78 = &var_38;
        let var_70_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h00fe6bed52fea939;
        var_68 = &data_544370;
        let var_60_2: i64 = 2;
        let var_48_2: i64 = 0;
        let var_58_2: *mut *const *const i8 = &var_78;
        let var_50_2: i64 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_68);
    }
    else
    {
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        let mut rax_1: i8;
        let mut rdx_1: i64;
        rax_1 = termion::screen::IntoAlternateScreen::into_alternate_screen::hdec9e23d495d24af(
            &std::io::stdio::STDOUT::h411b213c5c9add46);
        
        if (rax_1 & 1) != 0
        {
            return anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h435aa32a2df48c91(rdx_1);
        }
        
        let mut var_80: i64 = rdx_1;
        var_78 = &var_38;
        let var_70_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h00fe6bed52fea939;
        var_68 = &data_544370;
        let var_60_1: i64 = 2;
        let var_48_1: i64 = 0;
        let var_58_1: *mut *const *const i8 = &var_78;
        let var_50_1: i64 = 1;
        let rax_2: i64 = std::io::Write::write_fmt::h1e6cf89f2958cf78(&var_80, &var_68);
        let mut result: u64;
        
        if rax_2 != 0
        {
            result = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h435aa32a2df48c91(rax_2);
            core::ptr::drop_in_place$LT$termion..screen..AlternateScreen$LT$std..io..stdio..Stdout$GT$$GT$::h986d3c16f4a0d8c7(&var_80);
            return result;
        }
        
        let rax_3: ssize_t =
            _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(
            &var_80);
        
        if rax_3 != 0
        {
            result = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h435aa32a2df48c91(rax_3);
            core::ptr::drop_in_place$LT$termion..screen..AlternateScreen$LT$std..io..stdio..Stdout$GT$$GT$::h986d3c16f4a0d8c7(&var_80);
            return result;
        }
        
        var_78 = &var_28;
        let var_70_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h00fe6bed52fea939;
        var_68 = &data_544370;
        let var_60_3: i64 = 2;
        let var_48_3: i64 = 0;
        let var_58_3: *mut *const *const i8 = &var_78;
        let var_50_3: i64 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_68);
        fuel_core_keygen::wait_for_keypress::h49d514a8c45c8f8f();
        core::ptr::drop_in_place$LT$termion..screen..AlternateScreen$LT$std..io..stdio..Stdout$GT$$GT$::h986d3c16f4a0d8c7(&var_80);
    }
    0
}
