
  int64_t rg::flags::hiargs::HiArgs::matcher_rust::h9492ce990c54230d(uint64_t* arg1, int32_t* arg2)

{
    int64_t var_110;
    __builtin_memcpy(&var_110, 
        "\x00\x00\x40\x06\x00\x00\x00\x00\x00\x00\x80\x3e\x00\x00\x00\x00\xfa\x00\x00\x00\x02", 
        0x15);
    char var_fa = 0;
    int32_t var_f8 = 0;
    int16_t var_f4 = 0;
    int32_t var_f0 = 0;
    *var_f8[2] = 1;
    char var_f2 = *(arg2 + 0x386) ^ 1;
    char var_f1 = 0;
    *var_f0[2] = *(arg2 + 0x372);
    uint32_t rax_2 = *(arg2 + 0x393);
    
    if (!rax_2)
        goto label_64ee82;
    
    char rax_3;
    
    if (rax_2 != 1)
    {
        *var_f8[1] = 1;
        rax_3 = *(arg2 + 0x391);
        
        if (rax_3 != 2)
            goto label_64eea1;
    }
    else
    {
        var_f8 = 1;
        label_64ee82:
        rax_3 = *(arg2 + 0x391);
        
        if (rax_3 == 2)
            goto label_64eeaa;
        
        label_64eea1:
        
        if (!(rax_3 & 1))
        {
            *var_f0[3] = 1;
            
            if (*(arg2 + 0x37d))
                goto label_64eebc;
            
            goto label_64eee5;
        }
        
        *var_f0[1] = 1;
    }
    label_64eeaa:
    
    if (!*(arg2 + 0x37d))
    {
        label_64eee5:
        char var_fc;
        var_fc = 0xa00;
        *var_f8[3] = 0;
        
        if (*(arg2 + 0x371))
        {
            var_fc = 1;
            var_f0 = 1;
        }
        
        if (*(arg2 + 0x387))
            var_fc = 0;
    }
    else
    {
        label_64eebc:
        *var_f8[3] = *(arg2 + 0x37e);
        
        if (*(arg2 + 0x371))
        {
            var_f0 = 1;
            char var_fc_1 = 2;
        }
    }
    
    if (!(arg2[0x14] & 1))
    {
        if (*arg2 == 1)
            goto label_64effd;
        
        goto label_64ef32;
    }
    
    var_110 = *(arg2 + 0x58);
    
    if (*arg2 != 1)
    {
        label_64ef32:
        
        if (!rg::flags::hiargs::BinaryDetection::is_none::hebe1986f036d3105(&arg2[0xc6]))
            var_fa = 1;
    }
    else
    {
        label_64effd:
        int64_t var_108_1 = *(arg2 + 8);
        
        if (!rg::flags::hiargs::BinaryDetection::is_none::hebe1986f036d3105(&arg2[0xc6]))
            var_fa = 1;
    }
    
    int128_t var_c0;
    grep_regex::matcher::RegexMatcherBuilder::build_many::hdebacf7a69444a96(&var_c0, &var_110, 
        *(arg2 + 0x178), *(arg2 + 0x180));
    int128_t var_b0;
    char var_5d;
    
    if (var_5d == 2)
    {
        int128_t var_d8 = var_b0;
        int128_t var_e8 = var_c0;
        void var_28;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h373d913ec849885c(
            &var_28, &var_e8);
        void var_40;
        rg::flags::hiargs::suggest_multiline::h877188e632fbc6aa(&var_40, &var_28);
        void var_58;
        rg::flags::hiargs::suggest_text::heed0f2133eb3442f(&var_58, &var_40);
        *arg1 = anyhow::kind::Adhoc::new::h108351ff8f5d4b99(&var_58);
        *(arg1 + 0x63) = 2;
        return core::ptr::drop_in_place$LT$grep_regex..error..Error$GT$::h00eb35c315f69d1b(&var_e8);
    }
    
    int64_t result;
    arg1[0xc] = result;
    int128_t var_70;
    *(arg1 + 0x50) = var_70;
    int128_t var_80;
    *(arg1 + 0x40) = var_80;
    int128_t zmm0 = var_c0;
    int128_t var_90;
    *(arg1 + 0x30) = var_90;
    int128_t var_a0;
    *(arg1 + 0x20) = var_a0;
    *(arg1 + 0x10) = var_b0;
    *arg1 = zmm0;
    return result;
}
