
  int64_t alacritty_terminal::term::Term$LT$T$GT$::toggle_vi_mode::h9e5bfd45a9fbee95(int32_t* arg1)

{
    int32_t rax_2 = arg1[0x1b7];
    arg1[0x1b7] = rax_2 ^ 0x10000;
    
    if (!(rax_2 & 0x10000))
    {
        int32_t rax = arg1[0x18];
        int32_t rcx_2 = arg1[0x32];
        int64_t rdx_4;
        
        if (rax > ~rcx_2 + arg1[0x30])
        {
            rdx_4 = 0;
            rax = -(rcx_2);
        }
        else
            rdx_4 = *(arg1 + 0x58);
        
        *(arg1 + 0x290) = rdx_4;
        arg1[0xa6] = rax;
    }
    
    int64_t var_20 = -0x7ffffffffffffff8;
    return _$LT$alacritty..event..EventProxy$u20$as$u20$alacritty_terminal..event..EventListener$GT$::send_event::hcb980e74e667f924(arg1, &var_20);
}
