
  fn alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::line_search_left::h51103e5e6ff36c7a(arg1: *mut c_void, arg2: i32) -> u64

{
    let rax: i64;
    let var_38: i64 = rax;
    let mut rbp: i32 = arg2;
    let rax_1: i64 = *arg1.byte_offset(0x50);
    let mut r13: i32 = 0;
    
    if rax_1 >= *arg1.byte_offset(0xc0)
    {
        r13 = rax_1 - *arg1.byte_offset(0xc0);
    }
    
    let r14_1: i64 = *arg1.byte_offset(0xb8) - 1;
    let mut rsi_1: i64;
    
    loop
    {
        let r12_1: i32 = rbp;
        
        if rbp > -(r13)
        {
            rbp = r12_1 - 1;
            let rax_3: *mut c_void = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1.byte_offset(0x28), rbp);
            rsi_1 = *rax_3.byte_offset(0x10);
            
            if r14_1 >= rsi_1
            {
                break;
            }
            
            if (*(*rax_3.byte_offset(8) + r14_1 * 0x18 + 0x14) & 0x10) != 0
            {
                continue;
            }
        }
        
        return r12_1;
    }
    
    core::panicking::panic_bounds_check::h025cadc56a971af7(r14_1, rsi_1);
    /* no return */
}
