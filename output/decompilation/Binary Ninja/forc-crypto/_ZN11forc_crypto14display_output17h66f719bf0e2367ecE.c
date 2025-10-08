
  uint64_t forc_crypto::display_output::h66f719bf0e2367ec(char* arg1)

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    uint64_t result;
    void* const var_78;
    int128_t var_48;
    int128_t* var_30;
    
    if (!std::sys::io::is_terminal::isatty::is_terminal::h6c92f1d5ed2e2a5c())
    {
        serde_json::ser::to_vec::h4cc2f2554692b519(&var_78, arg1);
        
        if (!(0 + -(var_78)))
        {
            int64_t var_68;
            int64_t var_38_1 = var_68;
            var_48 = var_78;
        }
        else
        {
            int64_t var_70;
            *var_48[8] = var_70;
            var_48 = -0x8000000000000000;
        }
        
        core::result::Result$LT$T$C$E$GT$::expect::h231369dcb5213460(&var_30, &var_48);
        var_48 = &var_30;
        *var_48[8] =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_78 = &data_47ab60;
        int64_t var_70_1 = 1;
        int64_t var_58_1 = 0;
        int128_t* var_68_1 = &var_48;
        int64_t var_60_1 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_78);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h194128577f2b3aed(&var_30);
        result = 0;
    }
    else
    {
        serde_yaml::ser::to_string::h0d4b516021a5e273(&var_78, arg1);
        core::result::Result$LT$T$C$E$GT$::expect::h0d3f7e9a511f0351(&var_48, &var_78);
        
        if (!forc_crypto::has_sensible_info::hdcf6a8a75752cdf1(arg1))
        {
            var_30 = &var_48;
            int64_t (* var_28_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_78 = &data_a2cb98;
            int64_t var_70_2 = 2;
            int64_t var_58_2 = 0;
            int128_t** var_68_2 = &var_30;
            int64_t var_60_2 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_78);
            label_7ce2d6:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h194128577f2b3aed(&var_48);
            result = 0;
        }
        else
        {
            std::io::stdio::stdout::hb6a8e10bcccf3287();
            char rax_2;
            int64_t rdx_1;
            rax_2 = termion::screen::IntoAlternateScreen::into_alternate_screen::hf8ad71a136e74bfc(
                &std::io::stdio::STDOUT::h411b213c5c9add46);
            
            if (!(rax_2 & 1))
            {
                int64_t var_80 = rdx_1;
                var_30 = &var_48;
                int64_t (* var_28_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_78 = &data_a2cb98;
                int64_t var_70_3 = 2;
                int64_t var_58_3 = 0;
                int128_t** var_68_3 = &var_30;
                int64_t var_60_3 = 1;
                int64_t rax_5 = std::io::Write::write_fmt::hf858b19f349b9540(&var_80, &var_78);
                uint64_t result_1;
                
                if (!rax_5)
                {
                    ssize_t rax_6 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(&var_80);
                    
                    if (!rax_6)
                    {
                        var_78 = &data_a2cbb8;
                        int64_t var_70_4 = 1;
                        int64_t var_68_4 = 8;
                        var_60_3 = {0};
                        std::io::stdio::_print::h5e446ff973c02de6(&var_78);
                        forc_crypto::wait_for_keypress::h097f336dd4d0c55f();
                        core::ptr::drop_in_place$LT$termion..screen..AlternateScreen$LT$std..io..stdio..Stdout$GT$$GT$::h4ccd460257eaf062(&var_80);
                        goto label_7ce2d6;
                    }
                    
                    result_1 = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h9c7952ad6d2df1ef(rax_6);
                }
                else
                    result_1 = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h9c7952ad6d2df1ef(rax_5);
                
                result = result_1;
                core::ptr::drop_in_place$LT$termion..screen..AlternateScreen$LT$std..io..stdio..Stdout$GT$$GT$::h4ccd460257eaf062(&var_80);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h194128577f2b3aed(&var_48);
            }
            else
            {
                result = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h9c7952ad6d2df1ef(rdx_1);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h194128577f2b3aed(&var_48);
            }
        }
    }
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h05e5c3c511967cda(arg1);
    return result;
}
