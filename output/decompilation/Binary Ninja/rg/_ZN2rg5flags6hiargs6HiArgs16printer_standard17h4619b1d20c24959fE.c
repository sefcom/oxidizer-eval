
  int64_t rg::flags::hiargs::HiArgs::printer_standard::h4619b1d20c24959f(int64_t* arg1, void* arg2, int128_t* arg3)

{
    void var_c8;
    grep_printer::standard::StandardBuilder::new::h60aea028e7f493d7(&var_c8);
    char var_31 = *(arg2 + 0x324);
    void var_84;
    _$LT$grep_printer..color..ColorSpecs$u20$as$u20$core..clone..Clone$GT$::clone::h2672960dbfd8f738(&var_84, arg2 + 0x325);
    char var_32 = *(arg2 + 0x370);
    char var_38 = *(arg2 + 0x374);
    int64_t* rsi_1 = *(arg2 + 0x308);
    int64_t temp0 = *rsi_1;
    *rsi_1 += 1;
    
    if (temp0 <= -1)
        trap(6);
    
    int128_t* rax_3 =
        grep_printer::standard::StandardBuilder::hyperlink::hd608a0fe526df718(&var_c8, rsi_1);
    *(rax_3 + 0x95) = *(arg2 + 0x37b);
    *rax_3 = *(arg2 + 0x10);
    *(rax_3 + 0x92) = *(arg2 + 0x389);
    *(rax_3 + 0x91) = *(arg2 + 0x390);
    *(rax_3 + 0x42) = *(arg2 + 0x31e);
    *(rax_3 + 0x94) = 1;
    *(rax_3 + 0x93) = *(arg2 + 0x38f);
    int64_t rax_9 = -0x8000000000000000;
    int128_t var_120;
    int64_t var_110;
    int128_t var_108;
    
    if (!(0 + -(*(arg2 + 0x2b0))))
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h92b52b9ab5dd1bb4(&var_110, *(arg2 + 0x2b8), *(arg2 + 0x2c0));
        rax_9 = var_110;
        var_120 = var_108;
    }
    
    int64_t var_128 = rax_9;
    void* rax_10 =
        grep_printer::standard::StandardBuilder::replacement::h09f19e3e97b2a03a(rax_3, &var_128);
    int64_t rax_11 = -0x8000000000000000;
    
    if (*(arg2 + 0x268) != -0x8000000000000000)
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h92b52b9ab5dd1bb4(&var_110, *(arg2 + 0x270), *(arg2 + 0x278));
        rax_11 = var_110;
        var_120 = var_108;
    }
    
    var_128 = rax_11;
    void* rax_12 = grep_printer::standard::StandardBuilder::separator_context::hfa65395f7d61cce7(
        rax_10, &var_128);
    void var_f8;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h92b52b9ab5dd1bb4(
        &var_f8, *(arg2 + 0xa8), *(arg2 + 0xb0));
    void* rax_13 =
        grep_printer::standard::StandardBuilder::separator_field_context::he04cd3f244df659e(rax_12, 
        &var_f8);
    void var_e0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h92b52b9ab5dd1bb4(
        &var_e0, *(arg2 + 0xc0), *(arg2 + 0xc8));
    void* rax_14 =
        grep_printer::standard::StandardBuilder::separator_field_match::hc49f2afc893c1731(rax_13, 
        &var_e0);
    *(rax_14 + 0x40) = *(arg2 + 0x31c);
    *(rax_14 + 0x8f) = *(arg2 + 0x300) != 0x3b9aca00;
    *(rax_14 + 0x98) = *(arg2 + 0x38e);
    
    if (*(arg2 + 0x310) == 1)
    {
        if (*(arg2 + 0x280) != -0x8000000000000000)
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h92b52b9ab5dd1bb4(&var_110, *(arg2 + 0x288), *(arg2 + 0x290));
            *var_120[8] = *var_108[8];
            var_128 = var_110;
        }
        else
            var_128 = -0x8000000000000000;
        
        grep_printer::standard::StandardBuilder::separator_search::heff2404d05146382(&var_c8, 
            &var_128);
    }
    
    grep_printer::standard::StandardBuilder::build::h37845b6bc823e7e3(arg1, &var_c8, arg3);
    return 
        core::ptr::drop_in_place$LT$grep_printer..standard..StandardBuilder$GT$::hfd84395d1bb6923b(
        &var_c8);
}
