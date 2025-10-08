
  fn rg::flags::hiargs::HiArgs::matcher_rust::h9492ce990c54230d(arg1: *mut u64, arg2: *mut i32) -> i64

{
    let mut var_110: i64;
    __builtin_memcpy(&var_110, 
        "\x00\x00\x40\x06\x00\x00\x00\x00\x00\x00\x80\x3e\x00\x00\x00\x00\xfa\x00\x00\x00\x02", 
        0x15);
    let mut var_fa: i8 = 0;
    let mut var_f8: i32 = 0;
    let var_f4: i16 = 0;
    let mut var_f0: i32 = 0;
    *var_f8[2] = 1;
    let var_f2: i8 = *arg2.byte_offset(0x386) ^ 1;
    let var_f1: i8 = 0;
    *var_f0[2] = *arg2.byte_offset(0x372);
    let rax_2: u32 = *arg2.byte_offset(0x393);
    
    if rax_2 == 0
    {
        goto 'label_64ee82;
    }
    
    let mut rax_3: i8;
    
    if rax_2 != 1
    {
        *var_f8[1] = 1;
        rax_3 = *arg2.byte_offset(0x391);
        
        if rax_3 != 2
        {
            goto 'label_64eea1;
        }
    }
    else
    {
        var_f8 = 1;
        'label_64ee82:
        rax_3 = *arg2.byte_offset(0x391);
        
        if rax_3 == 2
        {
            goto 'label_64eeaa;
        }
        
        'label_64eea1:
        
        if (rax_3 & 1) == 0
        {
            *var_f0[3] = 1;
            
            if *arg2.byte_offset(0x37d) != 0
            {
                goto 'label_64eebc;
            }
            
            goto 'label_64eee5;
        }
        
        *var_f0[1] = 1;
    }
    'label_64eeaa:
    
    if *arg2.byte_offset(0x37d) == 0
    {
        'label_64eee5:
        let mut var_fc: i8;
        var_fc = 0xa00;
        *var_f8[3] = 0;
        
        if *arg2.byte_offset(0x371) != 0
        {
            var_fc = 1;
            var_f0 = 1;
        }
        
        if *arg2.byte_offset(0x387) != 0
        {
            var_fc = 0;
        }
    }
    else
    {
        'label_64eebc:
        *var_f8[3] = *arg2.byte_offset(0x37e);
        
        if *arg2.byte_offset(0x371) != 0
        {
            var_f0 = 1;
            let var_fc_1: i8 = 2;
        }
    }
    
    if (arg2[0x14] & 1) == 0
    {
        if *arg2 == 1
        {
            goto 'label_64effd;
        }
        
        goto 'label_64ef32;
    }
    
    var_110 = *arg2.byte_offset(0x58);
    
    if *arg2 != 1
    {
        'label_64ef32:
        
        if rg::flags::hiargs::BinaryDetection::is_none::hebe1986f036d3105(&arg2[0xc6]) == 0
        {
            var_fa = 1;
        }
    }
    else
    {
        'label_64effd:
        let var_108_1: i64 = *arg2.byte_offset(8);
        
        if rg::flags::hiargs::BinaryDetection::is_none::hebe1986f036d3105(&arg2[0xc6]) == 0
        {
            var_fa = 1;
        }
    }
    
    let mut var_c0: i128;
    grep_regex::matcher::RegexMatcherBuilder::build_many::hdebacf7a69444a96(&var_c0, &var_110, 
        *arg2.byte_offset(0x178), *arg2.byte_offset(0x180));
    let var_b0: i128;
    let var_5d: i8;
    
    if var_5d == 2
    {
        let var_d8: i128 = var_b0;
        let mut var_e8: i128 = var_c0;
        let mut var_28: ();
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h373d913ec849885c(
            &var_28, &var_e8);
        let mut var_40: ();
        rg::flags::hiargs::suggest_multiline::h877188e632fbc6aa(&var_40, &var_28);
        let mut var_58: ();
        rg::flags::hiargs::suggest_text::heed0f2133eb3442f(&var_58, &var_40);
        *arg1 = anyhow::kind::Adhoc::new::h108351ff8f5d4b99(&var_58);
        *arg1.byte_offset(0x63) = 2;
        return core::ptr::drop_in_place$LT$grep_regex..error..Error$GT$::h00eb35c315f69d1b(&var_e8);
    }
    
    let result: i64;
    arg1[0xc] = result;
    let var_70: i128;
    *arg1.byte_offset(0x50) = var_70;
    let var_80: i128;
    *arg1.byte_offset(0x40) = var_80;
    let zmm0: i128 = var_c0;
    let var_90: i128;
    *arg1.byte_offset(0x30) = var_90;
    let var_a0: i128;
    *arg1.byte_offset(0x20) = var_a0;
    *arg1.byte_offset(0x10) = var_b0;
    *arg1 = zmm0;
    result
}
