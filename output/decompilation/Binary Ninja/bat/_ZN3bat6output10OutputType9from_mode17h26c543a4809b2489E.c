
  char* bat::output::OutputType::from_mode::h26c543a4809b2489(char* arg1, char arg2, char arg3)

{
    int128_t var_90;
    int128_t var_80;
    int128_t var_70;
    char rax_1;
    char var_98;
    char* rcx;
    int64_t r8;
    
    if (!arg2)
    {
        bat::output::OutputType::try_pager::h20ac4bd3b0754dfb(&var_98, 1, arg3, rcx, r8);
        rax_1 = var_98;
        
        if (rax_1 == 0xd)
        {
            label_83cdc7:
            int64_t var_60;
            int64_t var_11_1 = var_60;
            var_98 = var_90;
            var_90 = var_80;
            var_80 = var_70;
            *var_70[8] = var_60;
            goto label_83ce7e;
        }
    }
    else
    {
        if (arg2 != 1)
        {
            bat::output::OutputType::stdout::h211ec86729b50ed6(&var_98);
            label_83ce7e:
            *(arg1 + 0x38) = *var_70[8];
            int128_t zmm0_1 = var_98;
            *(arg1 + 0x28) = var_80;
            *(arg1 + 0x18) = var_90;
            *(arg1 + 8) = zmm0_1;
            *arg1 = 0xd;
            return arg1;
        }
        
        bat::output::OutputType::try_pager::h20ac4bd3b0754dfb(&var_98, 0, arg3, rcx, r8);
        rax_1 = var_98;
        
        if (rax_1 == 0xd)
            goto label_83cdc7;
    }
    int128_t var_58;
    *(arg1 + 0x40) = var_58;
    *(arg1 + 0x30) = var_70;
    *(arg1 + 0x21) = var_80;
    *(arg1 + 0x11) = var_90;
    int128_t var_97;
    *(arg1 + 1) = var_97;
    *arg1 = rax_1;
    return arg1;
}
