
  fn alacritty_terminal::vi_mode::is_space::h2c1eb68d688e4f50(arg1: *mut c_void, arg2: i64, arg3: i32) -> i64

{
    let rax: *mut c_void = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1.byte_offset(0x28), arg3);
    let rsi_1: i64 = *rax.byte_offset(0x10);
    
    if arg2 >= rsi_1
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(arg2, rsi_1);
        /* no return */
    }
    
    let rax_1: i64 = *rax.byte_offset(8);
    let mut rcx: i64 = arg2 * 3;
    
    if (*(rax_1 + (rcx << 3) + 0x14) & 0x440) != 0
    {
        return 0;
    }
    
    let mut result: i32 = *(rax_1 + (rcx << 3)).byte_offset(0x10);
    rcx = result == 0x20;
    result = result == 9;
    result |= rcx;
    result
}
