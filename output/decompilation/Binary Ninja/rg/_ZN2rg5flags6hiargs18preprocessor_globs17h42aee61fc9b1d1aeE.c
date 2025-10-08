
  int64_t rg::flags::hiargs::preprocessor_globs::h42aee61fc9b1d1ae(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4)

{
    if (!arg4)
        /* tailcall */
        return ignore::overrides::Override::empty::hb1018ec183410eef(arg1);
    
    int128_t var_80;
    ignore::gitignore::GitignoreBuilder::new::hd2f9e2c1dacad7bb(&var_80, arg2);
    char var_37 = 0;
    int128_t var_d8 = var_80;
    int128_t var_70;
    int128_t var_c8 = var_70;
    int128_t var_60;
    int128_t var_b8 = var_60;
    int128_t var_50;
    int128_t var_a8 = var_50;
    int64_t var_40;
    int64_t var_98 = var_40;
    char var_38;
    char var_90 = var_38;
    char var_8f = var_37;
    int32_t var_36;
    int32_t var_8e = var_36;
    int16_t var_32;
    int16_t var_8a = var_32;
    int64_t rbp = 0;
    
    while (true)
    {
        int64_t var_188;
        ignore::overrides::OverrideBuilder::add::h525e80db7d282644(&var_188, &var_d8, 
            *(arg3 + rbp + 8), *(arg3 + rbp + 0x10));
        int64_t rax_5 = var_188;
        int64_t var_148;
        
        if (rax_5 != 9)
        {
            int64_t var_158;
            int64_t var_118_2 = var_158;
            int128_t var_168;
            int128_t var_128_2 = var_168;
            int128_t var_178;
            int128_t var_138_2 = var_178;
            var_148 = rax_5;
            int64_t var_180;
            int64_t var_140_1 = var_180;
            arg1[1] = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h249d96cb538d88b0(&var_148);
            *arg1 = -0x8000000000000000;
            break;
        }
        
        rbp += 0x18;
        
        if (arg4 * 0x18 == rbp)
        {
            ignore::overrides::OverrideBuilder::build::h625d1f6598f4f579(&var_148, &var_d8);
            int64_t rax_6 = var_148;
            int64_t var_140;
            var_188 = var_140;
            int128_t var_138;
            int128_t var_128;
            int64_t var_110;
            
            if (-(rax_6) != -0x8000000000000000)
            {
                int64_t var_e8;
                arg1[0xc] = var_e8;
                int128_t var_f8;
                *(arg1 + 0x50) = var_f8;
                int128_t var_108;
                *(arg1 + 0x40) = var_108;
                arg1[7] = var_110;
                int128_t zmm0_2 = var_188;
                *(arg1 + 0x28) = var_128;
                *(arg1 + 0x18) = var_138;
                *(arg1 + 8) = zmm0_2;
                *arg1 = rax_6;
            }
            else
            {
                int64_t var_118_1 = var_110;
                int128_t var_128_1 = var_128;
                int128_t var_138_1 = var_138;
                var_148 = var_188;
                arg1[1] = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h249d96cb538d88b0(&var_148);
                *arg1 = -0x8000000000000000;
            }
            break;
        }
    }
    
    return core::ptr::drop_in_place$LT$ignore..overrides..OverrideBuilder$GT$::h91af0f4315c846a9(
        &var_d8);
}
