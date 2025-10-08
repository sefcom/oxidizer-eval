
  int64_t rg::flags::hiargs::globs::h25ebd56cf030eec2(int64_t* arg1, void* arg2, void* arg3)

{
    int64_t r15 = *(arg3 + 0x138);
    
    if (!r15 && !*(arg3 + 0x170))
        /* tailcall */
        return ignore::overrides::Override::empty::hb1018ec183410eef(arg1);
    
    int128_t var_80;
    ignore::gitignore::GitignoreBuilder::new::hd2f9e2c1dacad7bb(&var_80, arg2);
    char var_37 = 0;
    int128_t var_50;
    int128_t var_a8 = var_50;
    int128_t var_60;
    int128_t var_b8 = var_60;
    int128_t var_70;
    int128_t var_c8 = var_70;
    int128_t var_d8 = var_80;
    int64_t var_40;
    int64_t var_98 = var_40;
    char var_38;
    char var_90 = var_38;
    char var_8f = var_37;
    int32_t var_36;
    int32_t var_8e = var_36;
    int16_t var_32;
    int16_t var_8a = var_32;
    int64_t var_148;
    
    if (*(arg3 + 0x232))
    {
        char var_90_1 = 1;
        int128_t* var_140_1 = &var_d8;
        var_148 = 9;
        core::result::Result$LT$T$C$E$GT$::unwrap::hd509385785697347(&var_148);
    }
    
    int128_t var_188;
    int128_t var_178;
    int128_t var_168;
    int64_t var_158;
    int128_t var_130;
    int128_t var_120;
    uint64_t rax_13;
    
    if (!r15)
    {
        label_65210b:
        char var_90_2 = 1;
        int128_t* var_140_2 = &var_d8;
        var_148 = 9;
        core::result::Result$LT$T$C$E$GT$::unwrap::hd509385785697347(&var_148);
        int64_t rax_7 = *(arg3 + 0x170);
        
        if (!rax_7)
        {
            label_6521b7:
            ignore::overrides::OverrideBuilder::build::h625d1f6598f4f579(&var_148, &var_d8);
            int64_t rax_10 = var_148;
            var_188 = var_140_2;
            int128_t var_168_1 = var_120;
            int64_t var_110;
            
            if (-(rax_10) != -0x8000000000000000)
            {
                int64_t var_e8;
                arg1[0xc] = var_e8;
                int128_t var_f8;
                *(arg1 + 0x50) = var_f8;
                int128_t var_108;
                *(arg1 + 0x40) = var_108;
                arg1[7] = var_110;
                int128_t zmm0_3 = var_188;
                *(arg1 + 0x28) = var_168_1;
                *(arg1 + 0x18) = var_130;
                *(arg1 + 8) = zmm0_3;
                *arg1 = rax_10;
            }
            else
            {
                *var_120[8] = var_110;
                int128_t zmm1_1 = var_130;
                var_130 = var_168_1;
                int128_t var_138_1 = zmm1_1;
                var_148 = var_188;
                arg1[1] = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h249d96cb538d88b0(&var_148);
                *arg1 = -0x8000000000000000;
            }
        }
        else
        {
            int64_t r12_1 = *(arg3 + 0x168);
            int64_t r13_2 = 0;
            
            while (true)
            {
                ignore::overrides::OverrideBuilder::add::h525e80db7d282644(&var_188, &var_d8, 
                    *(r12_1 + r13_2 + 8), *(r12_1 + r13_2 + 0x10));
                int64_t rax_9 = var_188;
                
                if (rax_9 != 9)
                {
                    int64_t rcx_9 = *var_188[8];
                    *var_120[8] = var_158;
                    var_130 = var_168;
                    int128_t var_138_3 = var_178;
                    var_148 = rax_9;
                    int64_t var_140_4 = rcx_9;
                    rax_13 = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h249d96cb538d88b0(&var_148);
                    break;
                }
                
                r13_2 += 0x18;
                
                if (rax_7 * 0x18 == r13_2)
                    goto label_6521b7;
            }
            
            arg1[1] = rax_13;
            *arg1 = -0x8000000000000000;
        }
    }
    else
    {
        int64_t r13_1 = *(arg3 + 0x130);
        int64_t rbx_1 = 0;
        
        while (true)
        {
            ignore::overrides::OverrideBuilder::add::h525e80db7d282644(&var_188, &var_d8, 
                *(r13_1 + rbx_1 + 8), *(r13_1 + rbx_1 + 0x10));
            int64_t rax_6 = var_188;
            
            if (rax_6 != 9)
            {
                int64_t rcx_6 = *var_188[8];
                *var_120[8] = var_158;
                var_130 = var_168;
                int128_t var_138_2 = var_178;
                var_148 = rax_6;
                int64_t var_140_3 = rcx_6;
                rax_13 = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h249d96cb538d88b0(&var_148);
                break;
            }
            
            rbx_1 += 0x18;
            
            if (r15 * 0x18 == rbx_1)
                goto label_65210b;
        }
        
        arg1[1] = rax_13;
        *arg1 = -0x8000000000000000;
    }
    return core::ptr::drop_in_place$LT$ignore..overrides..OverrideBuilder$GT$::h91af0f4315c846a9(
        &var_d8);
}
