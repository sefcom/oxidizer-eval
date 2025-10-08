
  fn alacritty::display::Display::update_config::hf55e38dcbbf2a1d6(arg1: *mut c_void, arg2: *mut c_void) -> i64

{
    *arg1.byte_offset(0xc0) = *arg2.byte_offset(0xb);
    *arg1.byte_offset(0x5c0) = *arg2.byte_offset(0x35a);
    let rax_2: u32 = *arg2.byte_offset(0x358);
    let rcx_3: u64 = ((rax_2 >> 3) * 0x20c5) >> 0x14;
    *arg1.byte_offset(0x5a0) = rcx_3;
    *arg1.byte_offset(0x5a8) = (rax_2 - rcx_3 * 0x3e8) * 0xf4240;
    let mut var_337: ();
    _$LT$alacritty..display..color..List$u20$as$u20$core..convert..From$LT$$RF$alacritty..config..color..Colors$GT$$GT$::from::h4562d385f38e06c1(&var_337, arg2.byte_offset(0x1d8));
    memcpy(arg1.byte_offset(0x838), &var_337, 0x327)
}
