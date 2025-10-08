
  int64_t bat::vscreen::EscapeSequenceOffsetsIterator::next_csi::h7a02523b82b98ac2(int64_t* arg1, void* arg2, int64_t arg3)

{
    int64_t rax = *(arg2 + 0x28);
    int32_t rdx = *(arg2 + 0x30);
    *(arg2 + 0x30) = 0x110001;
    
    if (rdx == 0x110001)
        rax = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(arg2 + 0x10);
    
    if (rdx == 0x110000)
    {
        core::option::expect_failed::h3f620cfb8545dc61("to not be finishedthis should no…");
        /* no return */
    }
    
    int64_t r13 = 1;
    
    if (rdx >= 0x80)
    {
        r13 = 2;
        
        if (rdx >= 0x800)
            r13 = 4 - 0;
    }
    
    int64_t r13_1 = r13 + rax;
    char var_48;
    bat::vscreen::EscapeSequenceOffsetsIterator::chars_take_while::hb1e7c9a8d56ba4f5(&var_48, arg2);
    int64_t r14_1 = r13_1;
    int64_t var_38;
    
    if (var_48)
        r14_1 = var_38;
    
    bat::vscreen::EscapeSequenceOffsetsIterator::chars_take_while::h61c196cbe5d42445(&var_48, arg2);
    int64_t rbp = r14_1;
    
    if (var_48)
        rbp = var_38;
    
    int64_t rax_1 = *(arg2 + 0x28);
    int32_t rdx_1 = *(arg2 + 0x30);
    *(arg2 + 0x30) = 0x110001;
    
    if (rdx_1 == 0x110001)
        rax_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(arg2 + 0x10);
    
    int64_t rcx_1 = rbp;
    
    if (rdx_1 != 0x110000)
    {
        int64_t rcx = 1;
        
        if (rdx_1 >= 0x80)
        {
            rcx = 2;
            
            if (rdx_1 >= 0x800)
                rcx = 4 - 0;
        }
        
        rcx_1 = rcx + rax_1;
    }
    
    *arg1 = 4;
    arg1[1] = arg3;
    arg1[2] = r13_1;
    arg1[3] = r14_1;
    arg1[4] = rbp;
    arg1[5] = rcx_1;
    return arg3;
}
