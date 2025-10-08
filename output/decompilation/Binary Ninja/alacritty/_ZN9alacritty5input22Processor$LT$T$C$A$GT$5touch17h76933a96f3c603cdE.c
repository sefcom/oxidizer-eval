
  int64_t alacritty::input::Processor$LT$T$C$A$GT$::touch::h76933a96f3c603cd(int64_t* arg1, uint128_t* arg2)

{
    uint32_t rax_3 = *(arg2 + 0x3c);
    
    if (rax_3 - 2 < 2)
        /* tailcall */
        return alacritty::input::Processor$LT$T$C$A$GT$::on_touch_end::h76c74ab013e5e8b1(arg1, 
            arg2);
    
    if (rax_3)
        /* tailcall */
        return alacritty::input::Processor$LT$T$C$A$GT$::on_touch_motion::hf382ca82a44bfd89();
    
    /* tailcall */
    return alacritty::input::Processor$LT$T$C$A$GT$::on_touch_start::hb74c4702e991be8b(arg1[4], 
        arg2);
}
