
  fn flealib::browserhistory::get_firefox_history::h0d89d55dfd8a3596(arg1: *mut i64) -> *mut i64

{
    let mut var_1a8: i64;
    std::env::var::haf60432b5fae2ca4(&var_1a8, "HOME0000\x1b[0mname B\r\nLAltrep…");
    let mut var_208: i128;
    core::result::Result$LT$T$C$E$GT$::unwrap::h6ab6e095afbca5e2(&var_208, &var_1a8);
    let mut var_1c0: i128;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h7ef9d321b3428b60(
        &var_1c0, &var_208);
    let mut rbp: i64;
    rbp = 1;
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_208, 
        "/.mozilla/firefox//snap/firefox/…", 0x12);
    let var_200: i64;
    std::fs::metadata::h198ddbb2419bae71(&var_1a8, var_200);
    let r14: i32 = var_1a8;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h99319c8eae35268b(&var_1a8);
    let mut var_198: i64;
    
    if r14 != 2
    {
        let var_1f8: i64;
        var_198 = var_1f8;
        var_1a8 = var_208;
        rbp = 1;
    }
    else
    {
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1c0, 
            "/snap/firefox/common/.mozilla/fi…", 0x26);
        let var_1b0: i64;
        var_198 = var_1b0;
        var_1a8 = var_1c0;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_208);
        rbp = 0;
    }
    
    let var_1f8_1: i64 = var_198;
    var_208 = var_1a8;
    let mut var_1f0: i128;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h7ef9d321b3428b60(
        &var_1f0, &var_208);
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1f0, 
        "profiles.ini/places.sqlite/flea-…", 0xc);
    let var_1e8: i64;
    std::fs::metadata::h198ddbb2419bae71(&var_1a8, var_1e8);
    let r14_1: i32 = var_1a8;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h99319c8eae35268b(&var_1a8);
    
    if r14_1 != 2
    {
        let var_1e0: i64;
        let var_c8_1: i64 = var_1e0;
        let mut var_d8: i128 = var_1f0;
        ini::Ini::load_from_file_opt::h0684c48f4250db4b(&var_1a8, &var_d8);
        core::result::Result$LT$T$C$E$GT$::unwrap::hed2684d01178f9a4(&var_d8, &var_1a8);
        let rax_4: *mut c_void = ini::Ini::section::h81259b356610dd3c(&var_d8);
        let mut rax_5: i64;
        let mut rdx_3: u64;
        
        if rax_4 != 0
        {
            rax_5 = ini::Properties::get::hb7439501bae792da(rax_4);
        }
        
        if rax_4 == 0 || rax_5 == 0
        {
            core::option::unwrap_failed::hf53ee17a2013bd69();
            /* no return */
        }
        
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_208, rax_5, rdx_3);
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_208, 
            "/places.sqlite/flea-tmp/firefox_…", 0xe);
        std::env::var::haf60432b5fae2ca4(&var_1a8, "HOME0000\x1b[0mname B\r\nLAltrep…");
        let mut var_1d8: i128;
        core::result::Result$LT$T$C$E$GT$::unwrap::h6ab6e095afbca5e2(&var_1d8, &var_1a8);
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1d8, 
            "/flea-tmp/firefox_historySELECT …", 0xa);
        core::result::Result$LT$T$C$E$GT$::unwrap::h9dcf40e224f0c1bc(
            std::fs::create_dir_all::hc095692fb0f17176(&var_1d8));
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_1d8, 
            "firefox_historySELECT url, IFNUL…", 0xf);
        let mut rax_7: i8;
        let mut rdx_6: i64;
        rax_7 = std::fs::copy::h49f59a1b002e5b31(&var_208, &var_1d8);
        core::result::Result$LT$T$C$E$GT$::unwrap::h2602cd856c32aa80(rax_7, rdx_6);
        var_1a8 = var_1d8;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_208);
        let var_1c8: i64;
        let var_1f8_2: i64 = var_1c8;
        var_208 = var_1a8;
        flealib::browserhistory::get_history::h3123b478e6fedbbe(&var_1a8, var_200, var_1c8, 
            "SELECT url, IFNULL(title, ''), v…", 0x74);
        let rax_9: i64 = var_1a8;
        
        if rax_9 != -0x7fffffffffffffee
        {
            let var_178: i128;
            *arg1.byte_offset(0x30) = var_178;
            let var_188: i128;
            *arg1.byte_offset(0x20) = var_188;
        }
        
        let var_190: i64;
        arg1[3] = var_190;
        let var_1a0: i128;
        *arg1.byte_offset(8) = var_1a0;
        *arg1 = rax_9;
        core::ptr::drop_in_place$LT$ini..Ini$GT$::hd01073a116da051e(&var_d8);
        
        if rbp != 0
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_1c0);
        }
    }
    else
    {
        arg1[1] = 0;
        arg1[2] = 8;
        arg1[3] = 0;
        *arg1 = -0x7fffffffffffffee;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_1f0);
        
        if rbp != 0
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_1c0);
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_208);
    arg1
}
