
  fn rg::flags::hiargs::HiArgs::printer_standard::h4619b1d20c24959f(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i128) -> i64

{
    let mut var_c8: ();
    grep_printer::standard::StandardBuilder::new::h60aea028e7f493d7(&var_c8);
    let var_31: i8 = *arg2.byte_offset(0x324);
    let mut var_84: ();
    _$LT$grep_printer..color..ColorSpecs$u20$as$u20$core..clone..Clone$GT$::clone::h2672960dbfd8f738(&var_84, arg2.byte_offset(0x325));
    let var_32: i8 = *arg2.byte_offset(0x370);
    let var_38: i8 = *arg2.byte_offset(0x374);
    let rsi_1: *mut i64 = *arg2.byte_offset(0x308);
    let temp0: i64 = *rsi_1;
    *rsi_1 += 1;
    
    if temp0 <= -1
    {
        trap(6);
    }
    
    let rax_3: *mut i128 =
        grep_printer::standard::StandardBuilder::hyperlink::hd608a0fe526df718(&var_c8, rsi_1);
    *rax_3.byte_offset(0x95) = *arg2.byte_offset(0x37b);
    *rax_3 = *arg2.byte_offset(0x10);
    *rax_3.byte_offset(0x92) = *arg2.byte_offset(0x389);
    *rax_3.byte_offset(0x91) = *arg2.byte_offset(0x390);
    *rax_3.byte_offset(0x42) = *arg2.byte_offset(0x31e);
    *rax_3.byte_offset(0x94) = 1;
    *rax_3.byte_offset(0x93) = *arg2.byte_offset(0x38f);
    let mut rax_9: i64 = -0x8000000000000000;
    let mut var_120: i128;
    let mut var_110: i64;
    let var_108: i128;
    
    if !(0 + -(*arg2.byte_offset(0x2b0)))
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h92b52b9ab5dd1bb4(&var_110, *arg2.byte_offset(0x2b8), *arg2.byte_offset(0x2c0));
        rax_9 = var_110;
        var_120 = var_108;
    }
    
    let mut var_128: i64 = rax_9;
    let rax_10: *mut c_void =
        grep_printer::standard::StandardBuilder::replacement::h09f19e3e97b2a03a(rax_3, &var_128);
    let mut rax_11: i64 = -0x8000000000000000;
    
    if *arg2.byte_offset(0x268) != -0x8000000000000000
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h92b52b9ab5dd1bb4(&var_110, *arg2.byte_offset(0x270), *arg2.byte_offset(0x278));
        rax_11 = var_110;
        var_120 = var_108;
    }
    
    var_128 = rax_11;
    let rax_12: *mut c_void =
        grep_printer::standard::StandardBuilder::separator_context::hfa65395f7d61cce7(rax_10, 
        &var_128);
    let mut var_f8: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h92b52b9ab5dd1bb4(
        &var_f8, *arg2.byte_offset(0xa8), *arg2.byte_offset(0xb0));
    let rax_13: *mut c_void =
        grep_printer::standard::StandardBuilder::separator_field_context::he04cd3f244df659e(rax_12, 
        &var_f8);
    let mut var_e0: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h92b52b9ab5dd1bb4(
        &var_e0, *arg2.byte_offset(0xc0), *arg2.byte_offset(0xc8));
    let rax_14: *mut c_void =
        grep_printer::standard::StandardBuilder::separator_field_match::hc49f2afc893c1731(rax_13, 
        &var_e0);
    *rax_14.byte_offset(0x40) = *arg2.byte_offset(0x31c);
    *rax_14.byte_offset(0x8f) = *arg2.byte_offset(0x300) != 0x3b9aca00;
    *rax_14.byte_offset(0x98) = *arg2.byte_offset(0x38e);
    
    if *arg2.byte_offset(0x310) == 1
    {
        if *arg2.byte_offset(0x280) != -0x8000000000000000
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h92b52b9ab5dd1bb4(&var_110, *arg2.byte_offset(0x288), *arg2.byte_offset(0x290));
            *var_120[8] = *var_108[8];
            var_128 = var_110;
        }
        else
        {
            var_128 = -0x8000000000000000;
        }
        
        grep_printer::standard::StandardBuilder::separator_search::heff2404d05146382(&var_c8, 
            &var_128);
    }
    
    grep_printer::standard::StandardBuilder::build::h37845b6bc823e7e3(arg1, &var_c8, arg3);
    core::ptr::drop_in_place$LT$grep_printer..standard..StandardBuilder$GT$::hfd84395d1bb6923b(
        &var_c8)
}
