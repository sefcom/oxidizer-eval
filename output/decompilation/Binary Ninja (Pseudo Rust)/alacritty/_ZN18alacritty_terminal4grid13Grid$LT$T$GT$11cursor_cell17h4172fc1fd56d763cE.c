
  fn alacritty_terminal::grid::Grid$LT$T$GT$::cursor_cell::h4172fc1fd56d763c(arg1: *mut c_void) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    let rbx: i64 = *arg1.byte_offset(0x30);
    let rax_1: *mut c_void = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1, *arg1.byte_offset(0x38));
    *rax_1.byte_offset(0x18) =
        core::cmp::Ord::max::h20b6d33cbe488162(*rax_1.byte_offset(0x18), rbx + 1);
    let rsi_2: i64 = *rax_1.byte_offset(0x10);
    
    if rbx < rsi_2
    {
        return rbx * 0x18 + *rax_1.byte_offset(8);
    }
    
    core::panicking::panic_bounds_check::h025cadc56a971af7(rbx, rsi_2);
    /* no return */
}
