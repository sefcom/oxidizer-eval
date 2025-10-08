
  fn alacritty_terminal::grid::GridIterator$LT$T$GT$::cell::h5c2417f3cd861f7e(arg1: *mut i64) -> i64

{
    let rbx: i64 = arg1[1];
    let rax_1: *mut c_void = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(*arg1, arg1[2]);
    let rsi_1: i64 = *rax_1.byte_offset(0x10);
    
    if rbx < rsi_1
    {
        return rbx * 0x18 + *rax_1.byte_offset(8);
    }
    
    core::panicking::panic_bounds_check::h025cadc56a971af7(rbx, rsi_1);
    /* no return */
}
