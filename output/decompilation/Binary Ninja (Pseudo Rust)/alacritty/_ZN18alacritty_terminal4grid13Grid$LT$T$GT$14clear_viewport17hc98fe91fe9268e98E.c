
  fn alacritty_terminal::grid::Grid$LT$T$GT$::clear_viewport::hc98fe91fe9268e98(arg1: *mut i64) -> *mut i64

{
    let rax_1: i32 = arg1[0x13] - 1;
    let rcx: i64 = arg1[0x12];
    let mut var_50: *mut i64 = arg1;
    let var_48: i64 = rcx;
    let var_38: i64 = rcx - 1;
    let var_30: i32 = rax_1;
    let mut i_2: *mut i64;
    _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(&i_2, &var_50);
    
    for let mut i: *mut i64 = i_2; i != 0; i = i_2
    {
        if _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$alacritty_terminal..grid..GridCell$GT$::is_empty::h97d2bea97497be2b(i) == 0
        {
            break;
        }
        
        let var_58: i32;
        
        if var_58 < 0
        {
            break;
        }
        
        _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(&i_2, &var_50);
    }
    
    let r14: i64 = rax_1 + 1;
    let mut result: *mut i64 =
        alacritty_terminal::grid::Grid$LT$T$GT$::scroll_up::hf31756b0f8886f88(arg1, 0, arg1[0x13], 
        r14);
    let r15: i64 = arg1[0x13];
    
    if r15 != r14
    {
        let mut i_3: i64 = 0;
        let mut i_1: i64;
        
        do
        {
            i_1 = i_3 + 1;
            result = alacritty_terminal::grid::row::Row$LT$T$GT$::reset::h7a49f1c8f619314f(
                _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1, i_3), 
                *arg1.byte_offset(0x4c));
            i_3 = i_1;
        } while r15 - r14 != i_1;
    }
    
    result
}
