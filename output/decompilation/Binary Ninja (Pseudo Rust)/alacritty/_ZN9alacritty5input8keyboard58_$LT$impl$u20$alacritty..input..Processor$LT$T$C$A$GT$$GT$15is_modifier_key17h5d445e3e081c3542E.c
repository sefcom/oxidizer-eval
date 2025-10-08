
  fn alacritty::input::keyboard::_$LT$impl$u20$alacritty..input..Processor$LT$T$C$A$GT$$GT$::is_modifier_key::h5d445e3e081c3542(arg1: *mut i16) -> u64

{
    let mut var_20: i8;
    winit::keyboard::Key::as_ref::ha61159f0166fa8fb(&var_20, arg1);
    let var_1e: i16;
    let mut rbx: u32;
    
    if var_20 != 0x1f || var_1e > 0xd
    {
        rbx = 0;
    }
    else
    {
        rbx = 0x2109 >> var_1e;
    }
    
    core::ptr::drop_in_place$LT$winit..keyboard..Key$LT$$RF$str$GT$$GT$::h2dc152dabd79984b(&var_20);
    rbx &= 1;
    rbx
}
