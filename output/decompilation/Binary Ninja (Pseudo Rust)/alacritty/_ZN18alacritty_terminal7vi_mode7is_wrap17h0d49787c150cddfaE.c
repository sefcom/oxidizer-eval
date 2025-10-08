
  fn alacritty_terminal::vi_mode::is_wrap::h0d49787c150cddfa(arg1: *mut c_void, arg2: i64, arg3: i32) -> u8

{
    let rax: *mut c_void = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1.byte_offset(0x28), arg3);
    let rsi_1: i64 = *rax.byte_offset(0x10);
    
    if arg2 < rsi_1
    {
        return (*(*rax.byte_offset(8) + arg2 * 0x18 + 0x14) & 0x10) >> 4;
    }
    
    core::panicking::panic_bounds_check::h025cadc56a971af7(arg2, rsi_1);
    /* no return */
}
