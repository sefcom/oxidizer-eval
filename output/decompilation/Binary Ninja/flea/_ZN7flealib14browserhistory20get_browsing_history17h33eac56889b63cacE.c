
  int64_t* flealib::browserhistory::get_browsing_history::h33eac56889b63cac(int64_t* arg1)

{
    int64_t var_c8;
    std::env::var::haf60432b5fae2ca4(&var_c8, "HOME0000\x1b[0mname B\r\nLAltrep…");
    void var_e0;
    core::result::Result$LT$T$C$E$GT$::unwrap::h6ab6e095afbca5e2(&var_e0, &var_c8);
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_e0, 
        "/.config/google-chrome/Default/H…", 0x26);
    int64_t var_f8 = 0;
    int64_t var_f0 = 8;
    int64_t var_e8 = 0;
    int64_t var_d8;
    std::fs::metadata::h198ddbb2419bae71(&var_c8, var_d8);
    int32_t r15 = var_c8;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h99319c8eae35268b(&var_c8);
    
    if (r15 == 2)
        goto label_79a7da;
    
    int64_t var_d0;
    flealib::browserhistory::get_history::h3123b478e6fedbbe(&var_c8, var_d8, var_d0, 
        "SELECT url, title, visit_count, …", 0x57);
    int64_t rax_1 = var_c8;
    int128_t var_c0;
    int128_t var_118_1 = var_c0;
    int64_t var_b0;
    int64_t var_108_1 = var_b0;
    
    if (rax_1 != -0x7fffffffffffffee)
    {
        label_79a862:
        int128_t var_98;
        *(arg1 + 0x30) = var_98;
        int128_t var_a8;
        *(arg1 + 0x20) = var_a8;
        arg1[3] = var_108_1;
        *(arg1 + 8) = var_118_1;
        *arg1 = rax_1;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h361f2a090008fd41(&var_f8);
    }
    else
    {
        int128_t var_138 = var_118_1;
        int64_t var_128_1 = var_108_1;
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h6bc4c1a166039f3b(&var_f8, *var_138[8], 
            var_108_1);
        int64_t var_128_2 = 0;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h361f2a090008fd41(&var_138);
        label_79a7da:
        flealib::browserhistory::get_firefox_history::h0d89d55dfd8a3596(&var_c8);
        rax_1 = var_c8;
        var_118_1 = var_c0;
        var_108_1 = var_b0;
        
        if (rax_1 != -0x7fffffffffffffee)
            goto label_79a862;
        
        var_138 = var_118_1;
        int64_t var_128_3 = var_108_1;
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h6bc4c1a166039f3b(&var_f8, *var_138[8], 
            var_108_1);
        int64_t var_128_4 = 0;
        arg1[3] = var_e8;
        *(arg1 + 8) = var_f8;
        *arg1 = -0x7fffffffffffffee;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h361f2a090008fd41(&var_138);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_e0);
    return arg1;
}
