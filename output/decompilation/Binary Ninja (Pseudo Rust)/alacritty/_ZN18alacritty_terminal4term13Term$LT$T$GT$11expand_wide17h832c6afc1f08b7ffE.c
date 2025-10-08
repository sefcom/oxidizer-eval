
  fn alacritty_terminal::term::Term$LT$T$GT$::expand_wide::h832c6afc1f08b7ff(arg1: *mut c_void, arg2: i64, arg3: i32, arg4: i8) -> i64

{
    let mut result: i64 = arg2;
    let rax: *mut c_void = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1.byte_offset(0x28), arg3);
    let rsi_1: i64 = *rax.byte_offset(0x10);
    
    if result >= rsi_1
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(result, rsi_1);
        /* no return */
    }
    
    let rax_2: u32 = *(*rax.byte_offset(8) + result * 0x18 + 0x14);
    
    if arg4 != 0
    {
        if (rax_2 & 0x400) != 0
        {
            return 1;
        }
        
        if (rax_2 & 0x20) != 0
        {
            return core::cmp::Ord::min::hffab314b5e6491b1(result + 1, *arg1.byte_offset(0xb8) - 1);
        }
    }
    else if (rax_2 & 0x60) != 0
    {
        result += rax_2 << 9 >> 0xf;
        let mut result_1: i64;
        let mut rdx_2: i32;
        result_1 = alacritty_terminal::index::Point::sub::h8b4b7dd5f4447bbc(result, arg3, arg1, 1);
        let rax_8: *mut c_void = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1.byte_offset(0x28), rdx_2);
        let rsi_6: i64 = *rax_8.byte_offset(0x10);
        
        if result_1 >= rsi_6
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(result_1, rsi_6);
            /* no return */
        }
        
        if (*(*rax_8.byte_offset(8) + result_1 * 0x18 + 0x15) & 4) != 0
        {
            result = result_1;
        }
    }
    
    result
}
