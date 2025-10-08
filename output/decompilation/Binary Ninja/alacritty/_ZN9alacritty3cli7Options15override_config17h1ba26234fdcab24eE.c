
  int64_t alacritty::cli::Options::override_config::h1ba26234fdcab24e(void* arg1, int64_t* arg2, int32_t arg3)

{
    int32_t rax = 0;
    
    if (!(0 + -(*(arg1 + 0x1c8))))
        *(arg2 + 0x419) = 1;
    
    if (*(arg1 + 0x198) != -0x8000000000000000)
        rax = alacritty::cli::parse_hex_or_decimal::hd382c3b23da3886d(*(arg1 + 0x1a0), 
            *(arg1 + 0x1a8));
    
    arg2[0x30] = rax;
    *(arg2 + 0x184) = arg3;
    char rcx = *(arg1 + 0x1e0);
    char rbp = arg2[1] | rcx;
    arg2[1] = rbp;
    char rax_1 = *(arg1 + 0x1e3);
    uint32_t rdx = *(arg1 + 0x1e4);
    int64_t rsi_1 = 3;
    int64_t rcx_1;
    bool cond:0_1;
    
    if (!rdx)
    {
        if (!rcx)
        {
            rcx_1 = rax_1 == 1;
            cond:0_1 = rax_1;
            rsi_1 = 2;
            label_833df0:
            
            if (cond:0_1)
                rsi_1 = rcx_1;
        }
    }
    else if (rdx != 1)
    {
        if (rdx != 2)
        {
            rcx_1 = rax_1 == 1;
            cond:0_1 = rax_1;
            rsi_1 = 5;
            goto label_833df0;
        }
        
        rsi_1 = 4;
    }
    int64_t rax_2 = core::cmp::Ord::max::h3ddb33a72be94f33(*arg2, rsi_1);
    *arg2 = rax_2;
    *(arg2 + 0xd) |= *(arg1 + 0x1e1);
    
    if (rbp)
        *arg2 = core::cmp::Ord::max::h3ddb33a72be94f33(rax_2, 3);
    
    /* tailcall */
    return alacritty::cli::ParsedOptions::override_config::hf97b5b294eb97d07(arg1 + 0x180, arg2);
}
