
  int64_t* alacritty::display::hint::HintPostProcessor$LT$T$GT$::hint_post_processing::h91382b8c2efba66c(int64_t* arg1, void* arg2, int64_t* arg3)

{
    int64_t rdi = *arg3;
    int32_t r8 = arg3[1];
    int32_t rcx_1 = *(arg2 + 0xc0) - 1;
    int64_t rdx_1 = *(arg2 + 0xb8) - 1;
    void* var_78 = arg2 + 0x28;
    int64_t var_60 = rdx_1;
    int32_t var_58 = rcx_1;
    int32_t r14 =
        *(alacritty_terminal::grid::GridIterator$LT$T$GT$::cell::h5c2417f3cd861f7e(&var_78) + 0x10);
    int64_t r13 = arg3[2];
    int32_t rbx_1 = arg3[3];
    int32_t rbp = 0;
    int32_t r15 = 0;
    
    if (r14 > 0x5a)
        goto label_848a30;
    
    void* var_48;
    
    while (true)
    {
        if (r14 == 0x28)
        {
            r15 += 1;
            goto label_848a53;
        }
        
        if (r14 != 0x29)
            goto label_848a53;
        
        if (!r15)
            break;
        
        r15 -= 1;
        
        if (r8 != rbx_1)
            goto label_848a68;
        
        while (true)
        {
            if (rdi == r13)
                goto label_848aad;
            
            label_848a68:
            _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hccebf77f76d7c458(&var_48, &var_78);
            void* rax_2 = var_48;
            
            if (!rax_2)
                goto label_848aad;
            
            r14 = *(rax_2 + 0x10);
            
            if (r14 <= 0x5a)
                break;
            
            label_848a30:
            
            if (r14 == 0x5b)
            {
                rbp += 1;
                
                if (r8 != rbx_1)
                    goto label_848a68;
            }
            else if (r14 != 0x5d)
            {
                label_848a53:
                
                if (r8 != rbx_1)
                    goto label_848a68;
            }
            else
            {
                if (!rbp)
                    goto label_848aa4;
                
                rbp -= 1;
                
                if (r8 != rbx_1)
                    goto label_848a68;
            }
        }
    }
    
    label_848aa4:
    _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(&var_48, &var_78);
    label_848aad:
    int32_t r15_1 = r8;
    int64_t r12 = rdi;
    
    if (!(r8 == r15_1 & rdi == r12))
    {
        r15_1 = r8;
        r12 = rdi;
        
        while (true)
        {
            uint64_t r14_1 = r14 - 0x21;
            
            if (r14_1 > 0x3a)
                break;
            
            if (!TEST_BITQ(0x4000000460028c1, r14_1))
                break;
            
            _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(&var_48, &var_78);
            void* rax_4 = var_48;
            
            if (!rax_4)
            {
                r12 = rdi;
                r15_1 = r8;
                break;
            }
            
            r14 = *(rax_4 + 0x10);
            r15_1 = r8;
            rax_4 = r15_1 == r8;
            r12 = rdi;
            
            if (rax_4 & r12 == rdi)
            {
                r15_1 = r8;
                r12 = rdi;
                break;
            }
        }
    }
    
    char rcx_5 = 2;
    
    if (_$LT$alacritty_terminal..index..Point$LT$L$C$C$GT$$u20$as$u20$core..cmp..Ord$GT$::cmp::h2b413278cc536aee(rdi, r8, r12, r15_1) <= 0)
    {
        *arg1 = rdi;
        arg1[1] = r8;
        arg1[2] = r12;
        arg1[3] = r15_1;
        rcx_5 = 0;
    }
    
    arg1[4] = rcx_5;
    return arg1;
}
