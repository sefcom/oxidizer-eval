
  char alacritty_terminal::term::Term$LT$T$GT$::cursor_style::hbc8727fad33b6b36(void* arg1)

{
    char rax = *(arg1 + 0x6e0);
    
    if (rax != 2)
    {
        *(arg1 + 0x6e1);
        
        if (*(arg1 + 0x6de) & 1)
        {
            label_76f1d8:
            char rcx_2 = *(arg1 + 0x23a);
            *(arg1 + 0x23b);
            
            if (rcx_2 != 2)
                return rcx_2;
        }
    }
    else
    {
        rax = *(arg1 + 0x238);
        *(arg1 + 0x239);
        
        if (*(arg1 + 0x6de) & 1)
            goto label_76f1d8;
    }
    
    return rax;
}
