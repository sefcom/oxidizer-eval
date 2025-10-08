
  fn alacritty::input::Processor$LT$T$C$A$GT$::touch::h76933a96f3c603cd(arg1: *mut i64, arg2: *mut u128) -> i64

{
    let rax_3: u32 = *arg2.byte_offset(0x3c);
    
    if rax_3 - 2 < 2
    {
        /* tailcall */
        return alacritty::input::Processor$LT$T$C$A$GT$::on_touch_end::h76c74ab013e5e8b1(arg1, 
            arg2);
    }
    
    if rax_3 != 0
    {
        /* tailcall */
        return alacritty::input::Processor$LT$T$C$A$GT$::on_touch_motion::hf382ca82a44bfd89();
    }
    
    /* tailcall */
    alacritty::input::Processor$LT$T$C$A$GT$::on_touch_start::hb74c4702e991be8b(arg1[4], arg2)
}
