
  fn alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::line_search_right::h7ee6c3b77284b281(arg1: *mut c_void, arg2: i32) -> i64

{
    let rax: i64;
    let var_38: i64 = rax;
    let mut rbp: i32 = arg2;
    let r13: i32 = *arg1.byte_offset(0xc0);
    let result: i64 = *arg1.byte_offset(0xb8) - 1;
    let mut rsi_1: i64;
    
    loop
    {
        let r12_1: i32 = rbp;
        rbp = r12_1 + 1;
        
        if rbp < r13
        {
            let rax_1: *mut c_void = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1.byte_offset(0x28), r12_1);
            rsi_1 = *rax_1.byte_offset(0x10);
            
            if result >= rsi_1
            {
                break;
            }
            
            if (*(*rax_1.byte_offset(8) + result * 0x18 + 0x14) & 0x10) != 0
            {
                continue;
            }
        }
        
        return result;
    }
    
    core::panicking::panic_bounds_check::h025cadc56a971af7(result, rsi_1);
    /* no return */
}
