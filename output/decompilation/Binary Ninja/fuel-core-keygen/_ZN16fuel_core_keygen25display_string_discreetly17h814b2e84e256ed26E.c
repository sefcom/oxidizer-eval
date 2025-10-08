
  uint64_t fuel_core_keygen::display_string_discreetly::h814b2e84e256ed26(char* arg1)

{
    char* var_38 = arg1;
    int64_t rsi;
    int64_t var_30 = rsi;
    char const* const var_28 = "### Do not share or lose this pr…";
    int64_t var_20 = 0x49;
    char const* const* var_78;
    void* const var_68;
    
    if (!atty::is::h6427351b8c0467c1(0))
    {
        var_78 = &var_38;
        int64_t (* var_70_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h00fe6bed52fea939;
        var_68 = &data_544370;
        int64_t var_60_2 = 2;
        int64_t var_48_2 = 0;
        char const* const** var_58_2 = &var_78;
        int64_t var_50_2 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_68);
    }
    else
    {
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        char rax_1;
        int64_t rdx_1;
        rax_1 = termion::screen::IntoAlternateScreen::into_alternate_screen::hdec9e23d495d24af(
            &std::io::stdio::STDOUT::h411b213c5c9add46);
        
        if (rax_1 & 1)
            return anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h435aa32a2df48c91(rdx_1);
        
        int64_t var_80 = rdx_1;
        var_78 = &var_38;
        int64_t (* var_70_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h00fe6bed52fea939;
        var_68 = &data_544370;
        int64_t var_60_1 = 2;
        int64_t var_48_1 = 0;
        char const* const** var_58_1 = &var_78;
        int64_t var_50_1 = 1;
        int64_t rax_2 = std::io::Write::write_fmt::h1e6cf89f2958cf78(&var_80, &var_68);
        uint64_t result;
        
        if (rax_2)
        {
            result = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h435aa32a2df48c91(rax_2);
            core::ptr::drop_in_place$LT$termion..screen..AlternateScreen$LT$std..io..stdio..Stdout$GT$$GT$::h986d3c16f4a0d8c7(&var_80);
            return result;
        }
        
        ssize_t rax_3 =
            _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(
            &var_80);
        
        if (rax_3)
        {
            result = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h435aa32a2df48c91(rax_3);
            core::ptr::drop_in_place$LT$termion..screen..AlternateScreen$LT$std..io..stdio..Stdout$GT$$GT$::h986d3c16f4a0d8c7(&var_80);
            return result;
        }
        
        var_78 = &var_28;
        int64_t (* var_70_3)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h00fe6bed52fea939;
        var_68 = &data_544370;
        int64_t var_60_3 = 2;
        int64_t var_48_3 = 0;
        char const* const** var_58_3 = &var_78;
        int64_t var_50_3 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_68);
        fuel_core_keygen::wait_for_keypress::h49d514a8c45c8f8f();
        core::ptr::drop_in_place$LT$termion..screen..AlternateScreen$LT$std..io..stdio..Stdout$GT$$GT$::h986d3c16f4a0d8c7(&var_80);
    }
    return 0;
}
