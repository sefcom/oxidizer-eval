
  char alacritty::config::bindings::Binding$LT$T$GT$::triggers_match::h2347c39c3a6d0800(void* arg1, void* arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    
    if (!core::cmp::PartialEq::ne::hd559d557ff0b2ec9(*(arg1 + 0x30), *(arg1 + 0x32), 
        *(arg2 + 0x30), *(arg2 + 0x32)) && *(arg1 + 0x34) == *(arg2 + 0x34))
    {
        char rax_3 = *(arg1 + 0x38);
        char rsi_1 = rax_3;
        
        if (!rax_3)
            rsi_1 = 0x7f;
        
        char rcx_1 = *(arg2 + 0x38);
        char rdi_1 = rcx_1;
        
        if (!rcx_1)
            rdi_1 = 0x7f;
        
        if (rdi_1 & rsi_1 && !(*(arg2 + 0x39) & rax_3) && !(*(arg1 + 0x39) & rcx_1))
            return 1;
    }
    
    return 0;
}
