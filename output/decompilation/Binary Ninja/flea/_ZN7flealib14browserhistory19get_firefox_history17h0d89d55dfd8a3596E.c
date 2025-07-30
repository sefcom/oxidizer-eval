
  int64_t* flealib::browserhistory::get_firefox_history::h0d89d55dfd8a3596(int64_t* arg1)

{
    int64_t var_1a8;
    std::env::var::haf60432b5fae2ca4(&var_1a8, "HOME0000\x1b[0mname B\r\nLAltrep…");
    int128_t var_208;
    core::result::Result$LT$T$C$E$GT$::unwrap::h6ab6e095afbca5e2(&var_208, &var_1a8);
    int128_t var_1c0;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h7ef9d321b3428b60(
        &var_1c0, &var_208);
    int64_t rbp;
    rbp = 1;
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_208, 
        "/.mozilla/firefox//snap/firefox/…", 0x12);
    int64_t var_200;
    std::fs::metadata::h198ddbb2419bae71(&var_1a8, var_200);
    int32_t r14 = var_1a8;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h99319c8eae35268b(&var_1a8);
    int64_t var_198;
    
    if (r14 != 2)
    {
        int64_t var_1f8;
        var_198 = var_1f8;
        var_1a8 = var_208;
        rbp = 1;
    }
    else
    {
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1c0, 
            "/snap/firefox/common/.mozilla/fi…", 0x26);
        int64_t var_1b0;
        var_198 = var_1b0;
        var_1a8 = var_1c0;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_208);
        rbp = 0;
    }
    
    int64_t var_1f8_1 = var_198;
    var_208 = var_1a8;
    int128_t var_1f0;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h7ef9d321b3428b60(
        &var_1f0, &var_208);
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1f0, 
        "profiles.ini/places.sqlite/flea-…", 0xc);
    int64_t var_1e8;
    std::fs::metadata::h198ddbb2419bae71(&var_1a8, var_1e8);
    int32_t r14_1 = var_1a8;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h99319c8eae35268b(&var_1a8);
    
    if (r14_1 != 2)
    {
        int64_t var_1e0;
        int64_t var_c8_1 = var_1e0;
        int128_t var_d8 = var_1f0;
        ini::Ini::load_from_file_opt::h0684c48f4250db4b(&var_1a8, &var_d8);
        core::result::Result$LT$T$C$E$GT$::unwrap::hed2684d01178f9a4(&var_d8, &var_1a8);
        void* rax_4 = ini::Ini::section::h81259b356610dd3c(&var_d8);
        int64_t rax_5;
        uint64_t rdx_3;
        
        if (rax_4)
            rax_5 = ini::Properties::get::hb7439501bae792da(rax_4);
        
        if (!rax_4 || !rax_5)
        {
            core::option::unwrap_failed::hf53ee17a2013bd69();
            /* no return */
        }
        
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_208, rax_5, rdx_3);
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_208, 
            "/places.sqlite/flea-tmp/firefox_…", 0xe);
        std::env::var::haf60432b5fae2ca4(&var_1a8, "HOME0000\x1b[0mname B\r\nLAltrep…");
        int128_t var_1d8;
        core::result::Result$LT$T$C$E$GT$::unwrap::h6ab6e095afbca5e2(&var_1d8, &var_1a8);
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1d8, 
            "/flea-tmp/firefox_historySELECT …", 0xa);
        core::result::Result$LT$T$C$E$GT$::unwrap::h9dcf40e224f0c1bc(
            std::fs::create_dir_all::hc095692fb0f17176(&var_1d8));
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1d8, 
            "firefox_historySELECT url, IFNUL…", 0xf);
        char rax_7;
        int64_t rdx_6;
        rax_7 = std::fs::copy::h49f59a1b002e5b31(&var_208, &var_1d8);
        core::result::Result$LT$T$C$E$GT$::unwrap::h2602cd856c32aa80(rax_7, rdx_6);
        var_1a8 = var_1d8;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_208);
        int64_t var_1c8;
        int64_t var_1f8_2 = var_1c8;
        var_208 = var_1a8;
        flealib::browserhistory::get_history::h3123b478e6fedbbe(&var_1a8, var_200, var_1c8, 
            "SELECT url, IFNULL(title, ''), v…", 0x74);
        int64_t rax_9 = var_1a8;
        
        if (rax_9 != -0x7fffffffffffffee)
        {
            int128_t var_178;
            *(arg1 + 0x30) = var_178;
            int128_t var_188;
            *(arg1 + 0x20) = var_188;
        }
        
        int64_t var_190;
        arg1[3] = var_190;
        int128_t var_1a0;
        *(arg1 + 8) = var_1a0;
        *arg1 = rax_9;
        core::ptr::drop_in_place$LT$ini..Ini$GT$::hd01073a116da051e(&var_d8);
        
        if (rbp)
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_1c0);
    }
    else
    {
        arg1[1] = 0;
        arg1[2] = 8;
        arg1[3] = 0;
        *arg1 = -0x7fffffffffffffee;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_1f0);
        
        if (rbp)
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_1c0);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_208);
    return arg1;
}
